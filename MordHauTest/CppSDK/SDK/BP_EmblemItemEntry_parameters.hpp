﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_EmblemItemEntry

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BP_EmblemItemEntry.BP_EmblemItemEntry_C.ExecuteUbergraph_BP_EmblemItemEntry
// 0x0030 (0x0030 - 0x0000)
struct BP_EmblemItemEntry_C_ExecuteUbergraph_BP_EmblemItemEntry final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x0014(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_24[0x4];                                       // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_EmblemItemEntry_C_ExecuteUbergraph_BP_EmblemItemEntry) == 0x000008, "Wrong alignment on BP_EmblemItemEntry_C_ExecuteUbergraph_BP_EmblemItemEntry");
static_assert(sizeof(BP_EmblemItemEntry_C_ExecuteUbergraph_BP_EmblemItemEntry) == 0x000030, "Wrong size on BP_EmblemItemEntry_C_ExecuteUbergraph_BP_EmblemItemEntry");
static_assert(offsetof(BP_EmblemItemEntry_C_ExecuteUbergraph_BP_EmblemItemEntry, EntryPoint) == 0x000000, "Member 'BP_EmblemItemEntry_C_ExecuteUbergraph_BP_EmblemItemEntry::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_EmblemItemEntry_C_ExecuteUbergraph_BP_EmblemItemEntry, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'BP_EmblemItemEntry_C_ExecuteUbergraph_BP_EmblemItemEntry::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_EmblemItemEntry_C_ExecuteUbergraph_BP_EmblemItemEntry, K2Node_CreateDelegate_OutputDelegate_1) == 0x000014, "Member 'BP_EmblemItemEntry_C_ExecuteUbergraph_BP_EmblemItemEntry::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(BP_EmblemItemEntry_C_ExecuteUbergraph_BP_EmblemItemEntry, CallFunc_CreateDynamicMaterialInstance_ReturnValue) == 0x000028, "Member 'BP_EmblemItemEntry_C_ExecuteUbergraph_BP_EmblemItemEntry::CallFunc_CreateDynamicMaterialInstance_ReturnValue' has a wrong offset!");

// Function BP_EmblemItemEntry.BP_EmblemItemEntry_C.GetSelectedVisibility
// 0x0005 (0x0005 - 0x0000)
struct BP_EmblemItemEntry_C_GetSelectedVisibility final
{
public:
	ESlateVisibility                              ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_EmblemItemEntry_C_GetSelectedVisibility) == 0x000001, "Wrong alignment on BP_EmblemItemEntry_C_GetSelectedVisibility");
static_assert(sizeof(BP_EmblemItemEntry_C_GetSelectedVisibility) == 0x000005, "Wrong size on BP_EmblemItemEntry_C_GetSelectedVisibility");
static_assert(offsetof(BP_EmblemItemEntry_C_GetSelectedVisibility, ReturnValue) == 0x000000, "Member 'BP_EmblemItemEntry_C_GetSelectedVisibility::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EmblemItemEntry_C_GetSelectedVisibility, Temp_bool_Variable) == 0x000001, "Member 'BP_EmblemItemEntry_C_GetSelectedVisibility::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BP_EmblemItemEntry_C_GetSelectedVisibility, Temp_byte_Variable) == 0x000002, "Member 'BP_EmblemItemEntry_C_GetSelectedVisibility::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(BP_EmblemItemEntry_C_GetSelectedVisibility, Temp_byte_Variable_1) == 0x000003, "Member 'BP_EmblemItemEntry_C_GetSelectedVisibility::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_EmblemItemEntry_C_GetSelectedVisibility, K2Node_Select_Default) == 0x000004, "Member 'BP_EmblemItemEntry_C_GetSelectedVisibility::K2Node_Select_Default' has a wrong offset!");

// Function BP_EmblemItemEntry.BP_EmblemItemEntry_C.Get_ic_locked_Visibility_0
// 0x0005 (0x0005 - 0x0000)
struct BP_EmblemItemEntry_C_Get_ic_locked_Visibility_0 final
{
public:
	ESlateVisibility                              ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_EmblemItemEntry_C_Get_ic_locked_Visibility_0) == 0x000001, "Wrong alignment on BP_EmblemItemEntry_C_Get_ic_locked_Visibility_0");
static_assert(sizeof(BP_EmblemItemEntry_C_Get_ic_locked_Visibility_0) == 0x000005, "Wrong size on BP_EmblemItemEntry_C_Get_ic_locked_Visibility_0");
static_assert(offsetof(BP_EmblemItemEntry_C_Get_ic_locked_Visibility_0, ReturnValue) == 0x000000, "Member 'BP_EmblemItemEntry_C_Get_ic_locked_Visibility_0::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EmblemItemEntry_C_Get_ic_locked_Visibility_0, Temp_bool_Variable) == 0x000001, "Member 'BP_EmblemItemEntry_C_Get_ic_locked_Visibility_0::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BP_EmblemItemEntry_C_Get_ic_locked_Visibility_0, Temp_byte_Variable) == 0x000002, "Member 'BP_EmblemItemEntry_C_Get_ic_locked_Visibility_0::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(BP_EmblemItemEntry_C_Get_ic_locked_Visibility_0, Temp_byte_Variable_1) == 0x000003, "Member 'BP_EmblemItemEntry_C_Get_ic_locked_Visibility_0::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_EmblemItemEntry_C_Get_ic_locked_Visibility_0, K2Node_Select_Default) == 0x000004, "Member 'BP_EmblemItemEntry_C_Get_ic_locked_Visibility_0::K2Node_Select_Default' has a wrong offset!");

// Function BP_EmblemItemEntry.BP_EmblemItemEntry_C.Initialize Emblem
// 0x0058 (0x0058 - 0x0000)
struct BP_EmblemItemEntry_C_Initialize_Emblem final
{
public:
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetPlayFabID_ReturnValue;                 // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class UMordhauInventory*                      CallFunc_GetMordhauInventory_ReturnValue;          // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasItem_ReturnValue;                      // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<int32>                                 K2Node_MakeArray_Array;                            // 0x0028(0x0010)(ReferenceParm)
	int32                                         CallFunc_GetGoldAndRankUnlockRequirement_Gold;     // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetGoldAndRankUnlockRequirement_Rank;     // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_GetUnlockTooltipText_TooltipText;         // 0x0040(0x0018)()
};
static_assert(alignof(BP_EmblemItemEntry_C_Initialize_Emblem) == 0x000008, "Wrong alignment on BP_EmblemItemEntry_C_Initialize_Emblem");
static_assert(sizeof(BP_EmblemItemEntry_C_Initialize_Emblem) == 0x000058, "Wrong size on BP_EmblemItemEntry_C_Initialize_Emblem");
static_assert(offsetof(BP_EmblemItemEntry_C_Initialize_Emblem, CallFunc_PlayAnimation_ReturnValue) == 0x000000, "Member 'BP_EmblemItemEntry_C_Initialize_Emblem::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EmblemItemEntry_C_Initialize_Emblem, CallFunc_GetPlayFabID_ReturnValue) == 0x000008, "Member 'BP_EmblemItemEntry_C_Initialize_Emblem::CallFunc_GetPlayFabID_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EmblemItemEntry_C_Initialize_Emblem, CallFunc_GetMordhauInventory_ReturnValue) == 0x000018, "Member 'BP_EmblemItemEntry_C_Initialize_Emblem::CallFunc_GetMordhauInventory_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EmblemItemEntry_C_Initialize_Emblem, CallFunc_HasItem_ReturnValue) == 0x000020, "Member 'BP_EmblemItemEntry_C_Initialize_Emblem::CallFunc_HasItem_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EmblemItemEntry_C_Initialize_Emblem, K2Node_MakeArray_Array) == 0x000028, "Member 'BP_EmblemItemEntry_C_Initialize_Emblem::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(BP_EmblemItemEntry_C_Initialize_Emblem, CallFunc_GetGoldAndRankUnlockRequirement_Gold) == 0x000038, "Member 'BP_EmblemItemEntry_C_Initialize_Emblem::CallFunc_GetGoldAndRankUnlockRequirement_Gold' has a wrong offset!");
static_assert(offsetof(BP_EmblemItemEntry_C_Initialize_Emblem, CallFunc_GetGoldAndRankUnlockRequirement_Rank) == 0x00003C, "Member 'BP_EmblemItemEntry_C_Initialize_Emblem::CallFunc_GetGoldAndRankUnlockRequirement_Rank' has a wrong offset!");
static_assert(offsetof(BP_EmblemItemEntry_C_Initialize_Emblem, CallFunc_GetUnlockTooltipText_TooltipText) == 0x000040, "Member 'BP_EmblemItemEntry_C_Initialize_Emblem::CallFunc_GetUnlockTooltipText_TooltipText' has a wrong offset!");

// Function BP_EmblemItemEntry.BP_EmblemItemEntry_C.Get_Background_ColorAndOpacity_0
// 0x006C (0x006C - 0x0000)
struct BP_EmblemItemEntry_C_Get_Background_ColorAndOpacity_0 final
{
public:
	struct FLinearColor                           ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_11[0x3];                                       // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           Temp_struct_Variable;                              // 0x0014(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Temp_struct_Variable_1;                            // 0x0024(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_35[0x3];                                       // 0x0035(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           Temp_struct_Variable_2;                            // 0x0038(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsHovered_ReturnValue;                    // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_49[0x3];                                       // 0x0049(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           K2Node_Select_Default;                             // 0x004C(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           K2Node_Select_Default_1;                           // 0x005C(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_EmblemItemEntry_C_Get_Background_ColorAndOpacity_0) == 0x000004, "Wrong alignment on BP_EmblemItemEntry_C_Get_Background_ColorAndOpacity_0");
static_assert(sizeof(BP_EmblemItemEntry_C_Get_Background_ColorAndOpacity_0) == 0x00006C, "Wrong size on BP_EmblemItemEntry_C_Get_Background_ColorAndOpacity_0");
static_assert(offsetof(BP_EmblemItemEntry_C_Get_Background_ColorAndOpacity_0, ReturnValue) == 0x000000, "Member 'BP_EmblemItemEntry_C_Get_Background_ColorAndOpacity_0::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EmblemItemEntry_C_Get_Background_ColorAndOpacity_0, Temp_bool_Variable) == 0x000010, "Member 'BP_EmblemItemEntry_C_Get_Background_ColorAndOpacity_0::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BP_EmblemItemEntry_C_Get_Background_ColorAndOpacity_0, Temp_struct_Variable) == 0x000014, "Member 'BP_EmblemItemEntry_C_Get_Background_ColorAndOpacity_0::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(BP_EmblemItemEntry_C_Get_Background_ColorAndOpacity_0, Temp_struct_Variable_1) == 0x000024, "Member 'BP_EmblemItemEntry_C_Get_Background_ColorAndOpacity_0::Temp_struct_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_EmblemItemEntry_C_Get_Background_ColorAndOpacity_0, Temp_bool_Variable_1) == 0x000034, "Member 'BP_EmblemItemEntry_C_Get_Background_ColorAndOpacity_0::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_EmblemItemEntry_C_Get_Background_ColorAndOpacity_0, Temp_struct_Variable_2) == 0x000038, "Member 'BP_EmblemItemEntry_C_Get_Background_ColorAndOpacity_0::Temp_struct_Variable_2' has a wrong offset!");
static_assert(offsetof(BP_EmblemItemEntry_C_Get_Background_ColorAndOpacity_0, CallFunc_IsHovered_ReturnValue) == 0x000048, "Member 'BP_EmblemItemEntry_C_Get_Background_ColorAndOpacity_0::CallFunc_IsHovered_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EmblemItemEntry_C_Get_Background_ColorAndOpacity_0, K2Node_Select_Default) == 0x00004C, "Member 'BP_EmblemItemEntry_C_Get_Background_ColorAndOpacity_0::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(BP_EmblemItemEntry_C_Get_Background_ColorAndOpacity_0, K2Node_Select_Default_1) == 0x00005C, "Member 'BP_EmblemItemEntry_C_Get_Background_ColorAndOpacity_0::K2Node_Select_Default_1' has a wrong offset!");

// Function BP_EmblemItemEntry.BP_EmblemItemEntry_C.Get_Image_Gradient_ColorAndOpacity_1
// 0x006C (0x006C - 0x0000)
struct BP_EmblemItemEntry_C_Get_Image_Gradient_ColorAndOpacity_1 final
{
public:
	struct FLinearColor                           ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_11[0x3];                                       // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           Temp_struct_Variable;                              // 0x0014(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Temp_struct_Variable_1;                            // 0x0024(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_35[0x3];                                       // 0x0035(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           Temp_struct_Variable_2;                            // 0x0038(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsHovered_ReturnValue;                    // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_49[0x3];                                       // 0x0049(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           K2Node_Select_Default;                             // 0x004C(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           K2Node_Select_Default_1;                           // 0x005C(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_EmblemItemEntry_C_Get_Image_Gradient_ColorAndOpacity_1) == 0x000004, "Wrong alignment on BP_EmblemItemEntry_C_Get_Image_Gradient_ColorAndOpacity_1");
static_assert(sizeof(BP_EmblemItemEntry_C_Get_Image_Gradient_ColorAndOpacity_1) == 0x00006C, "Wrong size on BP_EmblemItemEntry_C_Get_Image_Gradient_ColorAndOpacity_1");
static_assert(offsetof(BP_EmblemItemEntry_C_Get_Image_Gradient_ColorAndOpacity_1, ReturnValue) == 0x000000, "Member 'BP_EmblemItemEntry_C_Get_Image_Gradient_ColorAndOpacity_1::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EmblemItemEntry_C_Get_Image_Gradient_ColorAndOpacity_1, Temp_bool_Variable) == 0x000010, "Member 'BP_EmblemItemEntry_C_Get_Image_Gradient_ColorAndOpacity_1::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BP_EmblemItemEntry_C_Get_Image_Gradient_ColorAndOpacity_1, Temp_struct_Variable) == 0x000014, "Member 'BP_EmblemItemEntry_C_Get_Image_Gradient_ColorAndOpacity_1::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(BP_EmblemItemEntry_C_Get_Image_Gradient_ColorAndOpacity_1, Temp_struct_Variable_1) == 0x000024, "Member 'BP_EmblemItemEntry_C_Get_Image_Gradient_ColorAndOpacity_1::Temp_struct_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_EmblemItemEntry_C_Get_Image_Gradient_ColorAndOpacity_1, Temp_bool_Variable_1) == 0x000034, "Member 'BP_EmblemItemEntry_C_Get_Image_Gradient_ColorAndOpacity_1::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_EmblemItemEntry_C_Get_Image_Gradient_ColorAndOpacity_1, Temp_struct_Variable_2) == 0x000038, "Member 'BP_EmblemItemEntry_C_Get_Image_Gradient_ColorAndOpacity_1::Temp_struct_Variable_2' has a wrong offset!");
static_assert(offsetof(BP_EmblemItemEntry_C_Get_Image_Gradient_ColorAndOpacity_1, CallFunc_IsHovered_ReturnValue) == 0x000048, "Member 'BP_EmblemItemEntry_C_Get_Image_Gradient_ColorAndOpacity_1::CallFunc_IsHovered_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EmblemItemEntry_C_Get_Image_Gradient_ColorAndOpacity_1, K2Node_Select_Default) == 0x00004C, "Member 'BP_EmblemItemEntry_C_Get_Image_Gradient_ColorAndOpacity_1::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(BP_EmblemItemEntry_C_Get_Image_Gradient_ColorAndOpacity_1, K2Node_Select_Default_1) == 0x00005C, "Member 'BP_EmblemItemEntry_C_Get_Image_Gradient_ColorAndOpacity_1::K2Node_Select_Default_1' has a wrong offset!");

// Function BP_EmblemItemEntry.BP_EmblemItemEntry_C.Get_Image_10_ColorAndOpacity_0
// 0x006C (0x006C - 0x0000)
struct BP_EmblemItemEntry_C_Get_Image_10_ColorAndOpacity_0 final
{
public:
	struct FLinearColor                           ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_11[0x3];                                       // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           Temp_struct_Variable;                              // 0x0014(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Temp_struct_Variable_1;                            // 0x0024(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_35[0x3];                                       // 0x0035(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           Temp_struct_Variable_2;                            // 0x0038(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsHovered_ReturnValue;                    // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_49[0x3];                                       // 0x0049(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           K2Node_Select_Default;                             // 0x004C(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           K2Node_Select_Default_1;                           // 0x005C(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_EmblemItemEntry_C_Get_Image_10_ColorAndOpacity_0) == 0x000004, "Wrong alignment on BP_EmblemItemEntry_C_Get_Image_10_ColorAndOpacity_0");
static_assert(sizeof(BP_EmblemItemEntry_C_Get_Image_10_ColorAndOpacity_0) == 0x00006C, "Wrong size on BP_EmblemItemEntry_C_Get_Image_10_ColorAndOpacity_0");
static_assert(offsetof(BP_EmblemItemEntry_C_Get_Image_10_ColorAndOpacity_0, ReturnValue) == 0x000000, "Member 'BP_EmblemItemEntry_C_Get_Image_10_ColorAndOpacity_0::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EmblemItemEntry_C_Get_Image_10_ColorAndOpacity_0, Temp_bool_Variable) == 0x000010, "Member 'BP_EmblemItemEntry_C_Get_Image_10_ColorAndOpacity_0::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BP_EmblemItemEntry_C_Get_Image_10_ColorAndOpacity_0, Temp_struct_Variable) == 0x000014, "Member 'BP_EmblemItemEntry_C_Get_Image_10_ColorAndOpacity_0::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(BP_EmblemItemEntry_C_Get_Image_10_ColorAndOpacity_0, Temp_struct_Variable_1) == 0x000024, "Member 'BP_EmblemItemEntry_C_Get_Image_10_ColorAndOpacity_0::Temp_struct_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_EmblemItemEntry_C_Get_Image_10_ColorAndOpacity_0, Temp_bool_Variable_1) == 0x000034, "Member 'BP_EmblemItemEntry_C_Get_Image_10_ColorAndOpacity_0::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_EmblemItemEntry_C_Get_Image_10_ColorAndOpacity_0, Temp_struct_Variable_2) == 0x000038, "Member 'BP_EmblemItemEntry_C_Get_Image_10_ColorAndOpacity_0::Temp_struct_Variable_2' has a wrong offset!");
static_assert(offsetof(BP_EmblemItemEntry_C_Get_Image_10_ColorAndOpacity_0, CallFunc_IsHovered_ReturnValue) == 0x000048, "Member 'BP_EmblemItemEntry_C_Get_Image_10_ColorAndOpacity_0::CallFunc_IsHovered_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EmblemItemEntry_C_Get_Image_10_ColorAndOpacity_0, K2Node_Select_Default) == 0x00004C, "Member 'BP_EmblemItemEntry_C_Get_Image_10_ColorAndOpacity_0::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(BP_EmblemItemEntry_C_Get_Image_10_ColorAndOpacity_0, K2Node_Select_Default_1) == 0x00005C, "Member 'BP_EmblemItemEntry_C_Get_Image_10_ColorAndOpacity_0::K2Node_Select_Default_1' has a wrong offset!");

// Function BP_EmblemItemEntry.BP_EmblemItemEntry_C.Get_Image_2_Visibility_0
// 0x0005 (0x0005 - 0x0000)
struct BP_EmblemItemEntry_C_Get_Image_2_Visibility_0 final
{
public:
	ESlateVisibility                              ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_EmblemItemEntry_C_Get_Image_2_Visibility_0) == 0x000001, "Wrong alignment on BP_EmblemItemEntry_C_Get_Image_2_Visibility_0");
static_assert(sizeof(BP_EmblemItemEntry_C_Get_Image_2_Visibility_0) == 0x000005, "Wrong size on BP_EmblemItemEntry_C_Get_Image_2_Visibility_0");
static_assert(offsetof(BP_EmblemItemEntry_C_Get_Image_2_Visibility_0, ReturnValue) == 0x000000, "Member 'BP_EmblemItemEntry_C_Get_Image_2_Visibility_0::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EmblemItemEntry_C_Get_Image_2_Visibility_0, Temp_bool_Variable) == 0x000001, "Member 'BP_EmblemItemEntry_C_Get_Image_2_Visibility_0::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BP_EmblemItemEntry_C_Get_Image_2_Visibility_0, Temp_byte_Variable) == 0x000002, "Member 'BP_EmblemItemEntry_C_Get_Image_2_Visibility_0::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(BP_EmblemItemEntry_C_Get_Image_2_Visibility_0, Temp_byte_Variable_1) == 0x000003, "Member 'BP_EmblemItemEntry_C_Get_Image_2_Visibility_0::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_EmblemItemEntry_C_Get_Image_2_Visibility_0, K2Node_Select_Default) == 0x000004, "Member 'BP_EmblemItemEntry_C_Get_Image_2_Visibility_0::K2Node_Select_Default' has a wrong offset!");

}

