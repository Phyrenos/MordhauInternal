﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ColorEntry

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function BP_ColorEntry.BP_ColorEntry_C.ExecuteUbergraph_BP_ColorEntry
// 0x0020 (0x0020 - 0x0000)
struct BP_ColorEntry_C_ExecuteUbergraph_BP_ColorEntry final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_SimpleTooltip_C*                    CallFunc_Create_ReturnValue;                       // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
};
static_assert(alignof(BP_ColorEntry_C_ExecuteUbergraph_BP_ColorEntry) == 0x000008, "Wrong alignment on BP_ColorEntry_C_ExecuteUbergraph_BP_ColorEntry");
static_assert(sizeof(BP_ColorEntry_C_ExecuteUbergraph_BP_ColorEntry) == 0x000020, "Wrong size on BP_ColorEntry_C_ExecuteUbergraph_BP_ColorEntry");
static_assert(offsetof(BP_ColorEntry_C_ExecuteUbergraph_BP_ColorEntry, EntryPoint) == 0x000000, "Member 'BP_ColorEntry_C_ExecuteUbergraph_BP_ColorEntry::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_ColorEntry_C_ExecuteUbergraph_BP_ColorEntry, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'BP_ColorEntry_C_ExecuteUbergraph_BP_ColorEntry::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_ColorEntry_C_ExecuteUbergraph_BP_ColorEntry, CallFunc_Create_ReturnValue) == 0x000018, "Member 'BP_ColorEntry_C_ExecuteUbergraph_BP_ColorEntry::CallFunc_Create_ReturnValue' has a wrong offset!");

// Function BP_ColorEntry.BP_ColorEntry_C.Update
// 0x01B0 (0x01B0 - 0x0000)
struct BP_ColorEntry_C_Update final
{
public:
	class UClass*                                 Color_0;                                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValidClass_ReturnValue;                 // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_A[0x6];                                        // 0x000A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<int32>                                 K2Node_MakeArray_Array;                            // 0x0010(0x0010)(ReferenceParm)
	TArray<int32>                                 K2Node_MakeArray_Array_1;                          // 0x0020(0x0010)(ReferenceParm)
	int32                                         CallFunc_GetGoldAndRankUnlockRequirement_Gold;     // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetGoldAndRankUnlockRequirement_Rank;     // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_GetUnlockTooltipText_TooltipText;         // 0x0038(0x0018)()
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0050(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0068(0x0040)(HasGetValueTypeHash)
	bool                                          CallFunc_TextIsEmpty_ReturnValue;                  // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x00A9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_AA[0x6];                                       // 0x00AA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x00B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;            // 0x00B8(0x0040)(HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_2;            // 0x00F8(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array_2;                          // 0x0138(0x0010)(ReferenceParm)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array_3;                          // 0x0148(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0158(0x0018)()
	class FText                                   CallFunc_Format_ReturnValue_1;                     // 0x0170(0x0018)()
	class FString                                 CallFunc_GetPlayFabID_ReturnValue;                 // 0x0188(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0198(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_199[0x7];                                      // 0x0199(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMordhauInventory*                      CallFunc_GetMordhauInventory_ReturnValue;          // 0x01A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x01A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasItem_ReturnValue;                      // 0x01A9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_ColorEntry_C_Update) == 0x000008, "Wrong alignment on BP_ColorEntry_C_Update");
static_assert(sizeof(BP_ColorEntry_C_Update) == 0x0001B0, "Wrong size on BP_ColorEntry_C_Update");
static_assert(offsetof(BP_ColorEntry_C_Update, Color_0) == 0x000000, "Member 'BP_ColorEntry_C_Update::Color_0' has a wrong offset!");
static_assert(offsetof(BP_ColorEntry_C_Update, Temp_byte_Variable) == 0x000008, "Member 'BP_ColorEntry_C_Update::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(BP_ColorEntry_C_Update, CallFunc_IsValidClass_ReturnValue) == 0x000009, "Member 'BP_ColorEntry_C_Update::CallFunc_IsValidClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ColorEntry_C_Update, K2Node_MakeArray_Array) == 0x000010, "Member 'BP_ColorEntry_C_Update::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(BP_ColorEntry_C_Update, K2Node_MakeArray_Array_1) == 0x000020, "Member 'BP_ColorEntry_C_Update::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(BP_ColorEntry_C_Update, CallFunc_GetGoldAndRankUnlockRequirement_Gold) == 0x000030, "Member 'BP_ColorEntry_C_Update::CallFunc_GetGoldAndRankUnlockRequirement_Gold' has a wrong offset!");
static_assert(offsetof(BP_ColorEntry_C_Update, CallFunc_GetGoldAndRankUnlockRequirement_Rank) == 0x000034, "Member 'BP_ColorEntry_C_Update::CallFunc_GetGoldAndRankUnlockRequirement_Rank' has a wrong offset!");
static_assert(offsetof(BP_ColorEntry_C_Update, CallFunc_GetUnlockTooltipText_TooltipText) == 0x000038, "Member 'BP_ColorEntry_C_Update::CallFunc_GetUnlockTooltipText_TooltipText' has a wrong offset!");
static_assert(offsetof(BP_ColorEntry_C_Update, CallFunc_Conv_IntToText_ReturnValue) == 0x000050, "Member 'BP_ColorEntry_C_Update::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ColorEntry_C_Update, K2Node_MakeStruct_FormatArgumentData) == 0x000068, "Member 'BP_ColorEntry_C_Update::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(BP_ColorEntry_C_Update, CallFunc_TextIsEmpty_ReturnValue) == 0x0000A8, "Member 'BP_ColorEntry_C_Update::CallFunc_TextIsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ColorEntry_C_Update, Temp_byte_Variable_1) == 0x0000A9, "Member 'BP_ColorEntry_C_Update::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_ColorEntry_C_Update, CallFunc_PlayAnimation_ReturnValue) == 0x0000B0, "Member 'BP_ColorEntry_C_Update::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ColorEntry_C_Update, K2Node_MakeStruct_FormatArgumentData_1) == 0x0000B8, "Member 'BP_ColorEntry_C_Update::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(BP_ColorEntry_C_Update, K2Node_MakeStruct_FormatArgumentData_2) == 0x0000F8, "Member 'BP_ColorEntry_C_Update::K2Node_MakeStruct_FormatArgumentData_2' has a wrong offset!");
static_assert(offsetof(BP_ColorEntry_C_Update, K2Node_MakeArray_Array_2) == 0x000138, "Member 'BP_ColorEntry_C_Update::K2Node_MakeArray_Array_2' has a wrong offset!");
static_assert(offsetof(BP_ColorEntry_C_Update, K2Node_MakeArray_Array_3) == 0x000148, "Member 'BP_ColorEntry_C_Update::K2Node_MakeArray_Array_3' has a wrong offset!");
static_assert(offsetof(BP_ColorEntry_C_Update, CallFunc_Format_ReturnValue) == 0x000158, "Member 'BP_ColorEntry_C_Update::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ColorEntry_C_Update, CallFunc_Format_ReturnValue_1) == 0x000170, "Member 'BP_ColorEntry_C_Update::CallFunc_Format_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ColorEntry_C_Update, CallFunc_GetPlayFabID_ReturnValue) == 0x000188, "Member 'BP_ColorEntry_C_Update::CallFunc_GetPlayFabID_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ColorEntry_C_Update, Temp_bool_Variable) == 0x000198, "Member 'BP_ColorEntry_C_Update::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BP_ColorEntry_C_Update, CallFunc_GetMordhauInventory_ReturnValue) == 0x0001A0, "Member 'BP_ColorEntry_C_Update::CallFunc_GetMordhauInventory_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ColorEntry_C_Update, K2Node_Select_Default) == 0x0001A8, "Member 'BP_ColorEntry_C_Update::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(BP_ColorEntry_C_Update, CallFunc_HasItem_ReturnValue) == 0x0001A9, "Member 'BP_ColorEntry_C_Update::CallFunc_HasItem_ReturnValue' has a wrong offset!");

// Function BP_ColorEntry.BP_ColorEntry_C.Get_Lock_Visibility_0
// 0x0001 (0x0001 - 0x0000)
struct BP_ColorEntry_C_Get_Lock_Visibility_0 final
{
public:
	ESlateVisibility                              ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ColorEntry_C_Get_Lock_Visibility_0) == 0x000001, "Wrong alignment on BP_ColorEntry_C_Get_Lock_Visibility_0");
static_assert(sizeof(BP_ColorEntry_C_Get_Lock_Visibility_0) == 0x000001, "Wrong size on BP_ColorEntry_C_Get_Lock_Visibility_0");
static_assert(offsetof(BP_ColorEntry_C_Get_Lock_Visibility_0, ReturnValue) == 0x000000, "Member 'BP_ColorEntry_C_Get_Lock_Visibility_0::ReturnValue' has a wrong offset!");

// Function BP_ColorEntry.BP_ColorEntry_C.Get_Button_ToolTipWidget_0
// 0x0018 (0x0018 - 0x0000)
struct BP_ColorEntry_C_Get_Button_ToolTipWidget_0 final
{
public:
	class UWidget*                                ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_SimpleTooltip_C*                    K2Node_DynamicCast_AsBP_Simple_Tooltip;            // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_ColorEntry_C_Get_Button_ToolTipWidget_0) == 0x000008, "Wrong alignment on BP_ColorEntry_C_Get_Button_ToolTipWidget_0");
static_assert(sizeof(BP_ColorEntry_C_Get_Button_ToolTipWidget_0) == 0x000018, "Wrong size on BP_ColorEntry_C_Get_Button_ToolTipWidget_0");
static_assert(offsetof(BP_ColorEntry_C_Get_Button_ToolTipWidget_0, ReturnValue) == 0x000000, "Member 'BP_ColorEntry_C_Get_Button_ToolTipWidget_0::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ColorEntry_C_Get_Button_ToolTipWidget_0, K2Node_DynamicCast_AsBP_Simple_Tooltip) == 0x000008, "Member 'BP_ColorEntry_C_Get_Button_ToolTipWidget_0::K2Node_DynamicCast_AsBP_Simple_Tooltip' has a wrong offset!");
static_assert(offsetof(BP_ColorEntry_C_Get_Button_ToolTipWidget_0, K2Node_DynamicCast_bSuccess) == 0x000010, "Member 'BP_ColorEntry_C_Get_Button_ToolTipWidget_0::K2Node_DynamicCast_bSuccess' has a wrong offset!");

}

