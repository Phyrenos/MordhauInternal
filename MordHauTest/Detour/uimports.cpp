//////////////////////////////////////////////////////////////////////////////
//
//  Add DLLs to a module import table (uimports.cpp of detours.lib)
//
//  Microsoft Research Detours Package, Version 4.0.1
//
//  Copyright (c) Microsoft Corporation.  All rights reserved.
//
//  Note that this file is included into creatwth.cpp one or more times
//  (once for each supported module format).
//

// UpdateImports32 aka UpdateImports64
static BOOL UPDATE_IMPORTS_XX(HANDLE hProcess,
                              HMODULE hModule,
                              __in_ecount(nDlls) LPCSTR *plpDlls,
                              DWORD nDlls)
{
    BOOL fSucceeded = FALSE;
    DWORD cbNew = 0;

    BYTE * pbNew = NULL;
    DWORD i;
    SIZE_T cbRead;
    DWORD n;

    PBYTE pbModule = (PBYTE)hModule;

    IMAGE_DOS_HEADER idh;
    ZeroMemory(&idh, sizeof(idh));
    if (!ReadProcessMemory(hProcess, pbModule, &idh, sizeof(idh), &cbRead)
        || cbRead < sizeof(idh)) {

        DETOUR_TRACE(("ReadProcessMemory(idh@%p..%p) failed: %lu\n",
                      pbModule, pbModule + sizeof(idh), GetLastError()));

      finish:
        if (pbNew != NULL) {
            delete[] pbNew;
            pbNew = NULL;
        }
        return fSucceeded;
    }

    IMAGE_NT_HEADERS_XX inh;
    ZeroMemory(&inh, sizeof(inh));

    if (!ReadProcessMemory(hProcess, pbModule + idh.e_lfanew, &inh, sizeof(inh), &cbRead)
        || cbRead < sizeof(inh)) {
        DETOUR_TRACE(("ReadProcessMemory(inh@%p..%p) failed: %lu\n",
                      pbModule + idh.e_lfanew,
                      pbModule + idh.e_lfanew + sizeof(inh),
                      GetLastError()));
        goto finish;
    }

    if (inh.OptionalHeader.Magic != IMAGE_NT_OPTIONAL_HDR_MAGIC_XX) {
        DETOUR_TRACE(("Wrong size image (%04x != %04x).\n",
                      inh.OptionalHeader.Magic, IMAGE_NT_OPTIONAL_HDR_MAGIC_XX));
        SetLastError(ERROR_INVALID_BLOCK);
        goto finish;
    }

    // Zero out the bound table so loader doesn't use it instead of our new table.
    inh.BOUND_DIRECTORY.VirtualAddress = 0;
    inh.BOUND_DIRECTORY.Size = 0;

    // Find the size of the mapped file.
    DWORD dwSec = idh.e_lfanew +
        FIELD_OFFSET(IMAGE_NT_HEADERS_XX, OptionalHeader) +
        inh.FileHeader.SizeOfOptionalHeader;

    for (i = 0; i < inh.FileHeader.NumberOfSections; i++) {
        IMAGE_SECTION_HEADER ish;
        ZeroMemory(&ish, sizeof(ish));

        if (!ReadProcessMemory(hProcess, pbModule + dwSec + sizeof(ish) * i, &ish,
                               sizeof(ish), &cbRead)
            || cbRead < sizeof(ish)) {

            DETOUR_TRACE(("ReadProcessMemory(ish@%p..%p) failed: %lu\n",
                          pbModule + dwSec + sizeof(ish) * i,
                          pbModule + dwSec + sizeof(ish) * (i + 1),
                          GetLastError()));
            goto finish;
        }

        DETOUR_TRACE(("ish[%lu] : va=%08lx sr=%lu\n", i, ish.VirtualAddress, ish.SizeOfRawData));
        
        // If the linker didn't suggest an IAT in the data directories, the
        // loader will look for the section of the import directory to be used
        // for this instead. Since we put out new IMPORT_DIRECTORY outside any
        // section boundary, the loader will not find it. So we provide one
        // explicitly to avoid the search.
        //
        if (inh.IAT_DIRECTORY.VirtualAddress == 0 &&
            inh.IMPORT_DIRECTORY.VirtualAddress >= ish.VirtualAddress &&
            inh.IMPORT_DIRECTORY.VirtualAddress < ish.VirtualAddress + ish.SizeOfRawData) {

            inh.IAT_DIRECTORY.VirtualAddress = ish.VirtualAddress;
            inh.IAT_DIRECTORY.Size = ish.SizeOfRawData;
        }
    }

    if (inh.IMPORT_DIRECTORY.VirtualAddress != 0 && inh.IMPORT_DIRECTORY.Size == 0) {

        // Don't worry about changing the PE file, 
        // because the load information of the original PE header has been saved and will be restored. 
        // The change here is just for the following code to work normally

        PIMAGE_IMPORT_DESCRIPTOR pImageImport = (PIMAGE_IMPORT_DESCRIPTOR)(pbModule + inh.IMPORT_DIRECTORY.VirtualAddress);

        do {
            IMAGE_IMPORT_DESCRIPTOR ImageImport;
            if (!ReadProcessMemory(hProcess, pImageImport, &ImageImport, sizeof(ImageImport), NULL)) {
                DETOUR_TRACE(("ReadProcessMemory failed: %lu\n", GetLastError()));
                goto finish;
            }
            inh.IMPORT_DIRECTORY.Size += sizeof(IMAGE_IMPORT_DESCRIPTOR);
            if (!ImageImport.Name) {
                break;
            }
            ++pImageImport;
        } while (TRUE);

        DWORD dwLastError = GetLastError();
        OutputDebugString(TEXT("[This PE file has an import table, but the import table size is marked as 0. This is an error.")
            TEXT("If it is not repaired, the launched program will not work properly, Detours has automatically repaired its import table size for you! ! !]\r\n"));
        if (GetLastError() != dwLastError) {
            SetLastError(dwLastError);
        }
    }

    DETOUR_TRACE(("     Imports: %p..%p\n",
                  pbModule + inh.IMPORT_DIRECTORY.VirtualAddress,
                  pbModule + inh.IMPORT_DIRECTORY.VirtualAddress +
                  inh.IMPORT_DIRECTORY.Size));

    // Calculate new import directory size.  Note that since inh is from another
    // process, inh could have been corrupted. We need to protect against
    // integer overflow in allocation calculations.
    DWORD nOldDlls = inh.IMPORT_DIRECTORY.Size / sizeof(IMAGE_IMPORT_DESCRIPTOR);
    DWORD obRem;
    if (DWordMult(sizeof(IMAGE_IMPORT_DESCRIPTOR), nDlls, &obRem) != S_OK) {
        DETOUR_TRACE(("too many new DLLs.\n"));
        goto finish;
    }
    DWORD obOld;
    if (DWordAdd(obRem, sizeof(IMAGE_IMPORT_DESCRIPTOR) * nOldDlls, &obOld) != S_OK) {
        DETOUR_TRACE(("DLL entries overflow.\n"));
        goto finish;
    }
    DWORD obTab = PadToDwordPtr(obOld);
    // Check for integer overflow.
    if (obTab < obOld) {
        DETOUR_TRACE(("DLL entries padding overflow.\n"));
        goto finish;
    }
    DWORD stSize;
    if (DWordMult(sizeof(DWORD_XX) * 4, nDlls, &stSize) != S_OK) {
        DETOUR_TRACE(("String table overflow.\n"));
        goto finish;
    }
    DWORD obDll;
    if (DWordAdd(obTab, stSize, &obDll) != S_OK) {
        DETOUR_TRACE(("Import table size overflow\n"));
        goto finish;
    }
    DWORD obStr = obDll;
    cbNew = obStr;
    for (n = 0; n < nDlls; n++) {
        if (DWordAdd(cbNew, PadToDword((DWORD)strlen(plpDlls[n]) + 1), &cbNew) != S_OK) {
            DETOUR_TRACE(("Overflow adding string table entry\n"));
            goto finish;
        }
    }
    pbNew = new BYTE [cbNew];
    if (pbNew == NULL) {
        DETOUR_TRACE(("new BYTE [cbNew] failed.\n"));
        goto finish;
    }
    ZeroMemory(pbNew, cbNew);

    PBYTE pbBase = pbModule;
    PBYTE pbNext = pbBase
        + inh.OptionalHeader.BaseOfCode
        + inh.OptionalHeader.SizeOfCode
        + inh.OptionalHeader.SizeOfInitializedData
        + inh.OptionalHeader.SizeOfUninitializedData;
    if (pbBase < pbNext) {
        pbBase = pbNext;
    }
    DETOUR_TRACE(("pbBase = %p\n", pbBase));

    PBYTE pbNewIid = FindAndAllocateNearBase(hProcess, pbModule, pbBase, cbNew);
    if (pbNewIid == NULL) {
        DETOUR_TRACE(("FindAndAllocateNearBase failed.\n"));
        goto finish;
    }

    PIMAGE_IMPORT_DESCRIPTOR piid = (PIMAGE_IMPORT_DESCRIPTOR)pbNew;
    IMAGE_THUNK_DATAXX *pt = NULL;

    DWORD obBase = (DWORD)(pbNewIid - pbModule);
    DWORD dwProtect = 0;

    if (inh.IMPORT_DIRECTORY.VirtualAddress != 0) {
        // Read the old import directory if it exists.
        DETOUR_TRACE(("IMPORT_DIRECTORY perms=%lx\n", dwProtect));

        if (!ReadProcessMemory(hProcess,
                               pbModule + inh.IMPORT_DIRECTORY.VirtualAddress,
                               &piid[nDlls],
                               nOldDlls * sizeof(IMAGE_IMPORT_DESCRIPTOR), &cbRead)
            || cbRead < nOldDlls * sizeof(IMAGE_IMPORT_DESCRIPTOR)) {

            DETOUR_TRACE(("ReadProcessMemory(imports) failed: %lu\n", GetLastError()));
            goto finish;
        }
    }

    for (n = 0; n < nDlls; n++) {
        HRESULT hrRet = StringCchCopyA((char*)pbNew + obStr, cbNew - obStr, plpDlls[n]);
        if (FAILED(hrRet)) {
            DETOUR_TRACE(("StringCchCopyA failed: %08lx\n", hrRet));
            goto finish;
        }

        // After copying the string, we patch up the size "??" bits if any.
        hrRet = ReplaceOptionalSizeA((char*)pbNew + obStr,
                                     cbNew - obStr,
                                     DETOURS_STRINGIFY(DETOURS_BITS_XX));
        if (FAILED(hrRet)) {
            DETOUR_TRACE(("ReplaceOptionalSizeA failed: %08lx\n", hrRet));
            goto finish;
        }

        DWORD nOffset = obTab + (sizeof(IMAGE_THUNK_DATAXX) * (4 * n));
        piid[n].OriginalFirstThunk = obBase + nOffset;
      
        // We need 2 thunks for the import table and 2 thunks for the IAT.
        // One for an ordinal import and one to mark the end of the list.
        pt = ((IMAGE_THUNK_DATAXX*)(pbNew + nOffset));
        pt[0].u1.Ordinal = IMAGE_ORDINAL_FLAG_XX + 1;
        pt[1].u1.Ordinal = 0;

        nOffset = obTab + (sizeof(IMAGE_THUNK_DATAXX) * ((4 * n) + 2));
        piid[n].FirstThunk = obBase + nOffset;
        pt = ((IMAGE_THUNK_DATAXX*)(pbNew + nOffset));
        pt[0].u1.Ordinal = IMAGE_ORDINAL_FLAG_XX + 1;
        pt[1].u1.Ordinal = 0;
        piid[n].TimeDateStamp = 0;
        piid[n].ForwarderChain = 0;
        piid[n].Name = obBase + obStr;

        obStr += PadToDword((DWORD)strlen(plpDlls[n]) + 1);
    }
    _Analysis_assume_(obStr <= cbNew);

#if 0
    for (i = 0; i < nDlls + nOldDlls; i++) {
        DETOUR_TRACE(("%8d. Look=%08x Time=%08x Fore=%08x Name=%08x Addr=%08x\n",
                      i,
                      piid[i].OriginalFirstThunk,
                      piid[i].TimeDateStamp,
                      piid[i].ForwarderChain,
                      piid[i].Name,
                      piid[i].FirstThunk));
        if (piid[i].OriginalFirstThunk == 0 && piid[i].FirstThunk == 0) {
            break;
        }
    }
#endif

    if (!WriteProcessMemory(hProcess, pbNewIid, pbNew, obStr, NULL)) {
        DETOUR_TRACE(("WriteProcessMemory(iid) failed: %lu\n", GetLastError()));
        goto finish;
    }

    DETOUR_TRACE(("obBaseBef = %08lx..%08lx\n",
                  inh.IMPORT_DIRECTORY.VirtualAddress,
                  inh.IMPORT_DIRECTORY.VirtualAddress + inh.IMPORT_DIRECTORY.Size));
    DETOUR_TRACE(("obBaseAft = %08lx..%08lx\n", obBase, obBase + obStr));

    // In this case the file didn't have an import directory in first place,
    // so we couldn't fix the missing IAT above. We still need to explicitly
    // provide an IAT to prevent to loader from looking for one.
    //
    if (inh.IAT_DIRECTORY.VirtualAddress == 0) {
        inh.IAT_DIRECTORY.VirtualAddress = obBase;
        inh.IAT_DIRECTORY.Size = cbNew;
    }

    inh.IMPORT_DIRECTORY.VirtualAddress = obBase;
    inh.IMPORT_DIRECTORY.Size = cbNew;

    /////////////////////// Update the NT header for the new import directory.
    //
    if (!DetourVirtualProtectSameExecuteEx(hProcess, pbModule, inh.OptionalHeader.SizeOfHeaders,
                                           PAGE_EXECUTE_READWRITE, &dwProtect)) {
        DETOUR_TRACE(("VirtualProtectEx(inh) write failed: %lu\n", GetLastError()));
        goto finish;
    }

    inh.OptionalHeader.CheckSum = 0;

    if (!WriteProcessMemory(hProcess, pbModule, &idh, sizeof(idh), NULL)) {
        DETOUR_TRACE(("WriteProcessMemory(idh) failed: %lu\n", GetLastError()));
        goto finish;
    }
    DETOUR_TRACE(("WriteProcessMemory(idh:%p..%p)\n", pbModule, pbModule + sizeof(idh)));

    if (!WriteProcessMemory(hProcess, pbModule + idh.e_lfanew, &inh, sizeof(inh), NULL)) {
        DETOUR_TRACE(("WriteProcessMemory(inh) failed: %lu\n", GetLastError()));
        goto finish;
    }
    DETOUR_TRACE(("WriteProcessMemory(inh:%p..%p)\n",
                  pbModule + idh.e_lfanew,
                  pbModule + idh.e_lfanew + sizeof(inh)));

    if (!VirtualProtectEx(hProcess, pbModule, inh.OptionalHeader.SizeOfHeaders,
                          dwProtect, &dwProtect)) {
        DETOUR_TRACE(("VirtualProtectEx(idh) restore failed: %lu\n", GetLastError()));
        goto finish;
    }

    fSucceeded = TRUE;
    goto finish;
}
