﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_InformationDialog

#include "Basic.hpp"


namespace SDK::Params
{

// Function BP_InformationDialog.BP_InformationDialog_C.ExecuteUbergraph_BP_InformationDialog
// 0x0018 (0x0018 - 0x0000)
struct BP_InformationDialog_C_ExecuteUbergraph_BP_InformationDialog final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasKeyboardFocus_ReturnValue;             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor)
};
static_assert(alignof(BP_InformationDialog_C_ExecuteUbergraph_BP_InformationDialog) == 0x000004, "Wrong alignment on BP_InformationDialog_C_ExecuteUbergraph_BP_InformationDialog");
static_assert(sizeof(BP_InformationDialog_C_ExecuteUbergraph_BP_InformationDialog) == 0x000018, "Wrong size on BP_InformationDialog_C_ExecuteUbergraph_BP_InformationDialog");
static_assert(offsetof(BP_InformationDialog_C_ExecuteUbergraph_BP_InformationDialog, EntryPoint) == 0x000000, "Member 'BP_InformationDialog_C_ExecuteUbergraph_BP_InformationDialog::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_InformationDialog_C_ExecuteUbergraph_BP_InformationDialog, CallFunc_HasKeyboardFocus_ReturnValue) == 0x000004, "Member 'BP_InformationDialog_C_ExecuteUbergraph_BP_InformationDialog::CallFunc_HasKeyboardFocus_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_InformationDialog_C_ExecuteUbergraph_BP_InformationDialog, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'BP_InformationDialog_C_ExecuteUbergraph_BP_InformationDialog::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");

// Function BP_InformationDialog.BP_InformationDialog_C.GetInfoText
// 0x0018 (0x0018 - 0x0000)
struct BP_InformationDialog_C_GetInfoText final
{
public:
	class FText                                   ReturnValue;                                       // 0x0000(0x0018)(Parm, OutParm, ReturnParm)
};
static_assert(alignof(BP_InformationDialog_C_GetInfoText) == 0x000008, "Wrong alignment on BP_InformationDialog_C_GetInfoText");
static_assert(sizeof(BP_InformationDialog_C_GetInfoText) == 0x000018, "Wrong size on BP_InformationDialog_C_GetInfoText");
static_assert(offsetof(BP_InformationDialog_C_GetInfoText, ReturnValue) == 0x000000, "Member 'BP_InformationDialog_C_GetInfoText::ReturnValue' has a wrong offset!");

// Function BP_InformationDialog.BP_InformationDialog_C.SetTitleText
// 0x0018 (0x0018 - 0x0000)
struct BP_InformationDialog_C_SetTitleText final
{
public:
	class FText                                   TitleText;                                         // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(BP_InformationDialog_C_SetTitleText) == 0x000008, "Wrong alignment on BP_InformationDialog_C_SetTitleText");
static_assert(sizeof(BP_InformationDialog_C_SetTitleText) == 0x000018, "Wrong size on BP_InformationDialog_C_SetTitleText");
static_assert(offsetof(BP_InformationDialog_C_SetTitleText, TitleText) == 0x000000, "Member 'BP_InformationDialog_C_SetTitleText::TitleText' has a wrong offset!");

// Function BP_InformationDialog.BP_InformationDialog_C.SetButtonText
// 0x0018 (0x0018 - 0x0000)
struct BP_InformationDialog_C_SetButtonText final
{
public:
	class FText                                   ButtonText;                                        // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(BP_InformationDialog_C_SetButtonText) == 0x000008, "Wrong alignment on BP_InformationDialog_C_SetButtonText");
static_assert(sizeof(BP_InformationDialog_C_SetButtonText) == 0x000018, "Wrong size on BP_InformationDialog_C_SetButtonText");
static_assert(offsetof(BP_InformationDialog_C_SetButtonText, ButtonText) == 0x000000, "Member 'BP_InformationDialog_C_SetButtonText::ButtonText' has a wrong offset!");

}

