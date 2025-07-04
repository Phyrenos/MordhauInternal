﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ModFileEntry

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function BP_ModFileEntry.BP_ModFileEntry_C.ExecuteUbergraph_BP_ModFileEntry
// 0x01F0 (0x01F0 - 0x0000)
struct BP_ModFileEntry_C_ExecuteUbergraph_BP_ModFileEntry final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 Temp_string_Variable;                              // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 Temp_string_Variable_1;                            // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0028(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_MountPak_ReturnValue;                     // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_39[0x7];                                       // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0040(0x0040)(HasGetValueTypeHash)
	class AMordhauHUD*                            CallFunc_GetMordhauHUD_ReturnValue;                // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 K2Node_Select_Default;                             // 0x0088(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_MakeLiteralString_ReturnValue;            // 0x0098(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x00A8(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;            // 0x00C0(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0100(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0110(0x0018)()
	class UBP_InformationDialog_C*                CallFunc_CreateInformationDialog_InformationDialog; // 0x0128(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_2;            // 0x0130(0x0040)(HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0170(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_3;            // 0x0188(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array_1;                          // 0x01C8(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue_1;                     // 0x01D8(0x0018)()
};
static_assert(alignof(BP_ModFileEntry_C_ExecuteUbergraph_BP_ModFileEntry) == 0x000008, "Wrong alignment on BP_ModFileEntry_C_ExecuteUbergraph_BP_ModFileEntry");
static_assert(sizeof(BP_ModFileEntry_C_ExecuteUbergraph_BP_ModFileEntry) == 0x0001F0, "Wrong size on BP_ModFileEntry_C_ExecuteUbergraph_BP_ModFileEntry");
static_assert(offsetof(BP_ModFileEntry_C_ExecuteUbergraph_BP_ModFileEntry, EntryPoint) == 0x000000, "Member 'BP_ModFileEntry_C_ExecuteUbergraph_BP_ModFileEntry::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_ModFileEntry_C_ExecuteUbergraph_BP_ModFileEntry, Temp_bool_Variable) == 0x000004, "Member 'BP_ModFileEntry_C_ExecuteUbergraph_BP_ModFileEntry::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BP_ModFileEntry_C_ExecuteUbergraph_BP_ModFileEntry, Temp_string_Variable) == 0x000008, "Member 'BP_ModFileEntry_C_ExecuteUbergraph_BP_ModFileEntry::Temp_string_Variable' has a wrong offset!");
static_assert(offsetof(BP_ModFileEntry_C_ExecuteUbergraph_BP_ModFileEntry, Temp_string_Variable_1) == 0x000018, "Member 'BP_ModFileEntry_C_ExecuteUbergraph_BP_ModFileEntry::Temp_string_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_ModFileEntry_C_ExecuteUbergraph_BP_ModFileEntry, K2Node_CreateDelegate_OutputDelegate) == 0x000028, "Member 'BP_ModFileEntry_C_ExecuteUbergraph_BP_ModFileEntry::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_ModFileEntry_C_ExecuteUbergraph_BP_ModFileEntry, CallFunc_MountPak_ReturnValue) == 0x000038, "Member 'BP_ModFileEntry_C_ExecuteUbergraph_BP_ModFileEntry::CallFunc_MountPak_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ModFileEntry_C_ExecuteUbergraph_BP_ModFileEntry, K2Node_MakeStruct_FormatArgumentData) == 0x000040, "Member 'BP_ModFileEntry_C_ExecuteUbergraph_BP_ModFileEntry::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(BP_ModFileEntry_C_ExecuteUbergraph_BP_ModFileEntry, CallFunc_GetMordhauHUD_ReturnValue) == 0x000080, "Member 'BP_ModFileEntry_C_ExecuteUbergraph_BP_ModFileEntry::CallFunc_GetMordhauHUD_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ModFileEntry_C_ExecuteUbergraph_BP_ModFileEntry, K2Node_Select_Default) == 0x000088, "Member 'BP_ModFileEntry_C_ExecuteUbergraph_BP_ModFileEntry::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(BP_ModFileEntry_C_ExecuteUbergraph_BP_ModFileEntry, CallFunc_MakeLiteralString_ReturnValue) == 0x000098, "Member 'BP_ModFileEntry_C_ExecuteUbergraph_BP_ModFileEntry::CallFunc_MakeLiteralString_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ModFileEntry_C_ExecuteUbergraph_BP_ModFileEntry, CallFunc_Conv_StringToText_ReturnValue) == 0x0000A8, "Member 'BP_ModFileEntry_C_ExecuteUbergraph_BP_ModFileEntry::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ModFileEntry_C_ExecuteUbergraph_BP_ModFileEntry, K2Node_MakeStruct_FormatArgumentData_1) == 0x0000C0, "Member 'BP_ModFileEntry_C_ExecuteUbergraph_BP_ModFileEntry::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(BP_ModFileEntry_C_ExecuteUbergraph_BP_ModFileEntry, K2Node_MakeArray_Array) == 0x000100, "Member 'BP_ModFileEntry_C_ExecuteUbergraph_BP_ModFileEntry::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(BP_ModFileEntry_C_ExecuteUbergraph_BP_ModFileEntry, CallFunc_Format_ReturnValue) == 0x000110, "Member 'BP_ModFileEntry_C_ExecuteUbergraph_BP_ModFileEntry::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ModFileEntry_C_ExecuteUbergraph_BP_ModFileEntry, CallFunc_CreateInformationDialog_InformationDialog) == 0x000128, "Member 'BP_ModFileEntry_C_ExecuteUbergraph_BP_ModFileEntry::CallFunc_CreateInformationDialog_InformationDialog' has a wrong offset!");
static_assert(offsetof(BP_ModFileEntry_C_ExecuteUbergraph_BP_ModFileEntry, K2Node_MakeStruct_FormatArgumentData_2) == 0x000130, "Member 'BP_ModFileEntry_C_ExecuteUbergraph_BP_ModFileEntry::K2Node_MakeStruct_FormatArgumentData_2' has a wrong offset!");
static_assert(offsetof(BP_ModFileEntry_C_ExecuteUbergraph_BP_ModFileEntry, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000170, "Member 'BP_ModFileEntry_C_ExecuteUbergraph_BP_ModFileEntry::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ModFileEntry_C_ExecuteUbergraph_BP_ModFileEntry, K2Node_MakeStruct_FormatArgumentData_3) == 0x000188, "Member 'BP_ModFileEntry_C_ExecuteUbergraph_BP_ModFileEntry::K2Node_MakeStruct_FormatArgumentData_3' has a wrong offset!");
static_assert(offsetof(BP_ModFileEntry_C_ExecuteUbergraph_BP_ModFileEntry, K2Node_MakeArray_Array_1) == 0x0001C8, "Member 'BP_ModFileEntry_C_ExecuteUbergraph_BP_ModFileEntry::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(BP_ModFileEntry_C_ExecuteUbergraph_BP_ModFileEntry, CallFunc_Format_ReturnValue_1) == 0x0001D8, "Member 'BP_ModFileEntry_C_ExecuteUbergraph_BP_ModFileEntry::CallFunc_Format_ReturnValue_1' has a wrong offset!");

}

