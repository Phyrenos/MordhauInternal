#include <Windows.h>
#include "./CppSDK/SDK/Mordhau_classes.hpp"
using namespace SDK;

#include "included.h"
#include "Gui/ZeroGUI.h"
#include "DrawTransition.h"
#include "Detour/detours.h"

FILE* ConsoleFile = nullptr;
DWORD WINAPI CreateConsole(LPVOID lpParameter)
{
    if (!AllocConsole()) {
        return 1;
    }

    FILE* fDummy;
    freopen_s(&fDummy, "CONOUT$", "w", stdout);
    freopen_s(&fDummy, "CONOUT$", "w", stderr);
    freopen_s(&fDummy, "CONIN$", "r", stdin);
    std::cout.clear();
    std::clog.clear();
    std::cerr.clear();
    std::cin.clear();

    HANDLE hConOut = CreateFile(("CONOUT$"), GENERIC_READ | GENERIC_WRITE, FILE_SHARE_READ | FILE_SHARE_WRITE, NULL, OPEN_EXISTING, FILE_ATTRIBUTE_NORMAL, NULL);
    HANDLE hConIn = CreateFile(("CONIN$"), GENERIC_READ | GENERIC_WRITE, FILE_SHARE_READ | FILE_SHARE_WRITE, NULL, OPEN_EXISTING, FILE_ATTRIBUTE_NORMAL, NULL);
    SetStdHandle(STD_OUTPUT_HANDLE, hConOut);
    SetStdHandle(STD_ERROR_HANDLE, hConOut);
    SetStdHandle(STD_INPUT_HANDLE, hConIn);
    std::wcout.clear();
    std::wclog.clear();
    std::wcerr.clear();
    std::wcin.clear();
    return 0;
}


#define CREATE_HOOK(Detour, Original) DetourTransactionBegin(); DetourUpdateThread(GetCurrentThread()); DetourAttach(&(void*&)Original, Detour); DetourTransactionCommit();
#define REMOVE_HOOK(Detour, Original) DetourTransactionBegin(); DetourUpdateThread(GetCurrentThread()); DetourDetach(&(void*&)Original, Detour); DetourTransactionCommit();

void (*PostRender)(UGameViewportClient* _this, UCanvas* Canvas) = decltype(PostRender)((uintptr_t)GetModuleHandleW(0) + 0x30e5530);
void PostRenderHook(UGameViewportClient* _this, UCanvas* Canvas)
{
    // UD
    DrawTransition(Canvas);
    
    return PostRender(_this,Canvas);
}

bool (*execHasItem)(__int64 a1, __int64 a2, int a3) = decltype(execHasItem)((uintptr_t)GetModuleHandleW(0) + 0x15dc480);
bool ExecHasItemHook(__int64 a1, __int64 a2, int a3) {
    if (Mods::Exploits::UnlockAll) {
        return true;
    }
    return execHasItem(a1, a2, a3);
}

bool (*AllPerks)(DWORD* a1, char a2) = decltype(AllPerks)((uintptr_t)GetModuleHandleW(0) + 0x1548140);
bool __fastcall AllPerksHooks(DWORD* a1, char a2) {
    if (Mods::Exploits::EquipAllPerks) {
        return true;
    }
    return AllPerks(a1, a2);
}

DWORD WINAPI MainThread(LPVOID lpReserved)
{
    CREATE_HOOK(PostRenderHook, PostRender);
    CREATE_HOOK(ExecHasItemHook, execHasItem);
    CREATE_HOOK(AllPerksHooks, AllPerks);
    return 0;
}


BOOL APIENTRY DllMain(HMODULE hModule, DWORD ul_reason_for_call, LPVOID lpReserved) {
    switch (ul_reason_for_call) {
        case DLL_PROCESS_ATTACH: {
            DisableThreadLibraryCalls(hModule);
            CreateThread(0, 0, (LPTHREAD_START_ROUTINE)MainThread, 0, 0, 0);
            CreateThread(0, 0, (LPTHREAD_START_ROUTINE)CreateConsole, 0, 0, 0);
            break;
        }
    }
    return TRUE;
}
