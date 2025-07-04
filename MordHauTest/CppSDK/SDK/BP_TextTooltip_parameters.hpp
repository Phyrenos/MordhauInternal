﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_TextTooltip

#include "Basic.hpp"

#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function BP_TextTooltip.BP_TextTooltip_C.Update
// 0x0050 (0x0050 - 0x0000)
struct BP_TextTooltip_C_Update final
{
public:
	const class UObject*                          New_Icon;                                          // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   New_Header;                                        // 0x0008(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FText                                   New_Description;                                   // 0x0020(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                          Temp_bool_Variable;                                // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_39[0x7];                                       // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture2D*                             K2Node_DynamicCast_AsTexture_2D;                   // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0049(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x004A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x004B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x004C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_TextTooltip_C_Update) == 0x000008, "Wrong alignment on BP_TextTooltip_C_Update");
static_assert(sizeof(BP_TextTooltip_C_Update) == 0x000050, "Wrong size on BP_TextTooltip_C_Update");
static_assert(offsetof(BP_TextTooltip_C_Update, New_Icon) == 0x000000, "Member 'BP_TextTooltip_C_Update::New_Icon' has a wrong offset!");
static_assert(offsetof(BP_TextTooltip_C_Update, New_Header) == 0x000008, "Member 'BP_TextTooltip_C_Update::New_Header' has a wrong offset!");
static_assert(offsetof(BP_TextTooltip_C_Update, New_Description) == 0x000020, "Member 'BP_TextTooltip_C_Update::New_Description' has a wrong offset!");
static_assert(offsetof(BP_TextTooltip_C_Update, Temp_bool_Variable) == 0x000038, "Member 'BP_TextTooltip_C_Update::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BP_TextTooltip_C_Update, K2Node_DynamicCast_AsTexture_2D) == 0x000040, "Member 'BP_TextTooltip_C_Update::K2Node_DynamicCast_AsTexture_2D' has a wrong offset!");
static_assert(offsetof(BP_TextTooltip_C_Update, K2Node_DynamicCast_bSuccess) == 0x000048, "Member 'BP_TextTooltip_C_Update::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_TextTooltip_C_Update, CallFunc_IsValid_ReturnValue) == 0x000049, "Member 'BP_TextTooltip_C_Update::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TextTooltip_C_Update, Temp_byte_Variable) == 0x00004A, "Member 'BP_TextTooltip_C_Update::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(BP_TextTooltip_C_Update, Temp_byte_Variable_1) == 0x00004B, "Member 'BP_TextTooltip_C_Update::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_TextTooltip_C_Update, K2Node_Select_Default) == 0x00004C, "Member 'BP_TextTooltip_C_Update::K2Node_Select_Default' has a wrong offset!");

}

