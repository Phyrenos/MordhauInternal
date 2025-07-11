﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_UnlockInfoTooltip

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BP_UnlockInfoTooltip.BP_UnlockInfoTooltip_C.Update
// 0x0060 (0x0060 - 0x0000)
struct BP_UnlockInfoTooltip_C_Update final
{
public:
	int32                                         Gold_Requirement;                                  // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Rank_Requirement;                                  // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsDLC;                                            // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x000B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x000D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable_2;                              // 0x000E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_3;                              // 0x000F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_4;                              // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_5;                              // 0x0013(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default_1;                           // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_15[0x3];                                       // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           CallFunc_SelectColor_ReturnValue;                  // 0x0018(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_SelectColor_ReturnValue_1;                // 0x0028(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_2;                              // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default_2;                           // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3A[0x6];                                       // 0x003A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UMordhauInventory*                      CallFunc_GetMordhauInventory_ReturnValue;          // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_49[0x3];                                       // 0x0049(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetXP_ReturnValue;                        // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetRankFromXP_ReturnValue;                // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetGold_ReturnValue;                      // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue_1;        // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue_2;        // 0x0059(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_UnlockInfoTooltip_C_Update) == 0x000008, "Wrong alignment on BP_UnlockInfoTooltip_C_Update");
static_assert(sizeof(BP_UnlockInfoTooltip_C_Update) == 0x000060, "Wrong size on BP_UnlockInfoTooltip_C_Update");
static_assert(offsetof(BP_UnlockInfoTooltip_C_Update, Gold_Requirement) == 0x000000, "Member 'BP_UnlockInfoTooltip_C_Update::Gold_Requirement' has a wrong offset!");
static_assert(offsetof(BP_UnlockInfoTooltip_C_Update, Rank_Requirement) == 0x000004, "Member 'BP_UnlockInfoTooltip_C_Update::Rank_Requirement' has a wrong offset!");
static_assert(offsetof(BP_UnlockInfoTooltip_C_Update, bIsDLC) == 0x000008, "Member 'BP_UnlockInfoTooltip_C_Update::bIsDLC' has a wrong offset!");
static_assert(offsetof(BP_UnlockInfoTooltip_C_Update, Temp_byte_Variable) == 0x000009, "Member 'BP_UnlockInfoTooltip_C_Update::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(BP_UnlockInfoTooltip_C_Update, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x00000A, "Member 'BP_UnlockInfoTooltip_C_Update::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UnlockInfoTooltip_C_Update, CallFunc_Greater_IntInt_ReturnValue) == 0x00000B, "Member 'BP_UnlockInfoTooltip_C_Update::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UnlockInfoTooltip_C_Update, Temp_byte_Variable_1) == 0x00000C, "Member 'BP_UnlockInfoTooltip_C_Update::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_UnlockInfoTooltip_C_Update, Temp_bool_Variable) == 0x00000D, "Member 'BP_UnlockInfoTooltip_C_Update::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BP_UnlockInfoTooltip_C_Update, Temp_byte_Variable_2) == 0x00000E, "Member 'BP_UnlockInfoTooltip_C_Update::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(BP_UnlockInfoTooltip_C_Update, Temp_byte_Variable_3) == 0x00000F, "Member 'BP_UnlockInfoTooltip_C_Update::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(BP_UnlockInfoTooltip_C_Update, Temp_bool_Variable_1) == 0x000010, "Member 'BP_UnlockInfoTooltip_C_Update::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_UnlockInfoTooltip_C_Update, K2Node_Select_Default) == 0x000011, "Member 'BP_UnlockInfoTooltip_C_Update::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(BP_UnlockInfoTooltip_C_Update, Temp_byte_Variable_4) == 0x000012, "Member 'BP_UnlockInfoTooltip_C_Update::Temp_byte_Variable_4' has a wrong offset!");
static_assert(offsetof(BP_UnlockInfoTooltip_C_Update, Temp_byte_Variable_5) == 0x000013, "Member 'BP_UnlockInfoTooltip_C_Update::Temp_byte_Variable_5' has a wrong offset!");
static_assert(offsetof(BP_UnlockInfoTooltip_C_Update, K2Node_Select_Default_1) == 0x000014, "Member 'BP_UnlockInfoTooltip_C_Update::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(BP_UnlockInfoTooltip_C_Update, CallFunc_SelectColor_ReturnValue) == 0x000018, "Member 'BP_UnlockInfoTooltip_C_Update::CallFunc_SelectColor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UnlockInfoTooltip_C_Update, CallFunc_SelectColor_ReturnValue_1) == 0x000028, "Member 'BP_UnlockInfoTooltip_C_Update::CallFunc_SelectColor_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_UnlockInfoTooltip_C_Update, Temp_bool_Variable_2) == 0x000038, "Member 'BP_UnlockInfoTooltip_C_Update::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(BP_UnlockInfoTooltip_C_Update, K2Node_Select_Default_2) == 0x000039, "Member 'BP_UnlockInfoTooltip_C_Update::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(BP_UnlockInfoTooltip_C_Update, CallFunc_GetMordhauInventory_ReturnValue) == 0x000040, "Member 'BP_UnlockInfoTooltip_C_Update::CallFunc_GetMordhauInventory_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UnlockInfoTooltip_C_Update, CallFunc_BooleanAND_ReturnValue) == 0x000048, "Member 'BP_UnlockInfoTooltip_C_Update::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UnlockInfoTooltip_C_Update, CallFunc_GetXP_ReturnValue) == 0x00004C, "Member 'BP_UnlockInfoTooltip_C_Update::CallFunc_GetXP_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UnlockInfoTooltip_C_Update, CallFunc_GetRankFromXP_ReturnValue) == 0x000050, "Member 'BP_UnlockInfoTooltip_C_Update::CallFunc_GetRankFromXP_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UnlockInfoTooltip_C_Update, CallFunc_GetGold_ReturnValue) == 0x000054, "Member 'BP_UnlockInfoTooltip_C_Update::CallFunc_GetGold_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UnlockInfoTooltip_C_Update, CallFunc_GreaterEqual_IntInt_ReturnValue_1) == 0x000058, "Member 'BP_UnlockInfoTooltip_C_Update::CallFunc_GreaterEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_UnlockInfoTooltip_C_Update, CallFunc_GreaterEqual_IntInt_ReturnValue_2) == 0x000059, "Member 'BP_UnlockInfoTooltip_C_Update::CallFunc_GreaterEqual_IntInt_ReturnValue_2' has a wrong offset!");

// Function BP_UnlockInfoTooltip.BP_UnlockInfoTooltip_C.GetVisibility_0
// 0x0005 (0x0005 - 0x0000)
struct BP_UnlockInfoTooltip_C_GetVisibility_0 final
{
public:
	ESlateVisibility                              ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_UnlockInfoTooltip_C_GetVisibility_0) == 0x000001, "Wrong alignment on BP_UnlockInfoTooltip_C_GetVisibility_0");
static_assert(sizeof(BP_UnlockInfoTooltip_C_GetVisibility_0) == 0x000005, "Wrong size on BP_UnlockInfoTooltip_C_GetVisibility_0");
static_assert(offsetof(BP_UnlockInfoTooltip_C_GetVisibility_0, ReturnValue) == 0x000000, "Member 'BP_UnlockInfoTooltip_C_GetVisibility_0::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UnlockInfoTooltip_C_GetVisibility_0, Temp_bool_Variable) == 0x000001, "Member 'BP_UnlockInfoTooltip_C_GetVisibility_0::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BP_UnlockInfoTooltip_C_GetVisibility_0, Temp_byte_Variable) == 0x000002, "Member 'BP_UnlockInfoTooltip_C_GetVisibility_0::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(BP_UnlockInfoTooltip_C_GetVisibility_0, Temp_byte_Variable_1) == 0x000003, "Member 'BP_UnlockInfoTooltip_C_GetVisibility_0::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_UnlockInfoTooltip_C_GetVisibility_0, K2Node_Select_Default) == 0x000004, "Member 'BP_UnlockInfoTooltip_C_GetVisibility_0::K2Node_Select_Default' has a wrong offset!");

// Function BP_UnlockInfoTooltip.BP_UnlockInfoTooltip_C.GetVisibility_1
// 0x0005 (0x0005 - 0x0000)
struct BP_UnlockInfoTooltip_C_GetVisibility_1 final
{
public:
	ESlateVisibility                              ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_UnlockInfoTooltip_C_GetVisibility_1) == 0x000001, "Wrong alignment on BP_UnlockInfoTooltip_C_GetVisibility_1");
static_assert(sizeof(BP_UnlockInfoTooltip_C_GetVisibility_1) == 0x000005, "Wrong size on BP_UnlockInfoTooltip_C_GetVisibility_1");
static_assert(offsetof(BP_UnlockInfoTooltip_C_GetVisibility_1, ReturnValue) == 0x000000, "Member 'BP_UnlockInfoTooltip_C_GetVisibility_1::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UnlockInfoTooltip_C_GetVisibility_1, Temp_bool_Variable) == 0x000001, "Member 'BP_UnlockInfoTooltip_C_GetVisibility_1::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BP_UnlockInfoTooltip_C_GetVisibility_1, Temp_byte_Variable) == 0x000002, "Member 'BP_UnlockInfoTooltip_C_GetVisibility_1::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(BP_UnlockInfoTooltip_C_GetVisibility_1, Temp_byte_Variable_1) == 0x000003, "Member 'BP_UnlockInfoTooltip_C_GetVisibility_1::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_UnlockInfoTooltip_C_GetVisibility_1, K2Node_Select_Default) == 0x000004, "Member 'BP_UnlockInfoTooltip_C_GetVisibility_1::K2Node_Select_Default' has a wrong offset!");

// Function BP_UnlockInfoTooltip.BP_UnlockInfoTooltip_C.GetVisibility_2
// 0x0005 (0x0005 - 0x0000)
struct BP_UnlockInfoTooltip_C_GetVisibility_2 final
{
public:
	ESlateVisibility                              ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_UnlockInfoTooltip_C_GetVisibility_2) == 0x000001, "Wrong alignment on BP_UnlockInfoTooltip_C_GetVisibility_2");
static_assert(sizeof(BP_UnlockInfoTooltip_C_GetVisibility_2) == 0x000005, "Wrong size on BP_UnlockInfoTooltip_C_GetVisibility_2");
static_assert(offsetof(BP_UnlockInfoTooltip_C_GetVisibility_2, ReturnValue) == 0x000000, "Member 'BP_UnlockInfoTooltip_C_GetVisibility_2::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UnlockInfoTooltip_C_GetVisibility_2, Temp_bool_Variable) == 0x000001, "Member 'BP_UnlockInfoTooltip_C_GetVisibility_2::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BP_UnlockInfoTooltip_C_GetVisibility_2, Temp_byte_Variable) == 0x000002, "Member 'BP_UnlockInfoTooltip_C_GetVisibility_2::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(BP_UnlockInfoTooltip_C_GetVisibility_2, Temp_byte_Variable_1) == 0x000003, "Member 'BP_UnlockInfoTooltip_C_GetVisibility_2::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_UnlockInfoTooltip_C_GetVisibility_2, K2Node_Select_Default) == 0x000004, "Member 'BP_UnlockInfoTooltip_C_GetVisibility_2::K2Node_Select_Default' has a wrong offset!");

// Function BP_UnlockInfoTooltip.BP_UnlockInfoTooltip_C.GetText_0
// 0x0068 (0x0068 - 0x0000)
struct BP_UnlockInfoTooltip_C_GetText_0 final
{
public:
	class FText                                   ReturnValue;                                       // 0x0000(0x0018)(Parm, OutParm, ReturnParm)
	bool                                          Temp_bool_Variable;                                // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   Temp_text_Variable;                                // 0x0020(0x0018)()
	class FText                                   Temp_text_Variable_1;                              // 0x0038(0x0018)()
	class FText                                   K2Node_Select_Default;                             // 0x0050(0x0018)()
};
static_assert(alignof(BP_UnlockInfoTooltip_C_GetText_0) == 0x000008, "Wrong alignment on BP_UnlockInfoTooltip_C_GetText_0");
static_assert(sizeof(BP_UnlockInfoTooltip_C_GetText_0) == 0x000068, "Wrong size on BP_UnlockInfoTooltip_C_GetText_0");
static_assert(offsetof(BP_UnlockInfoTooltip_C_GetText_0, ReturnValue) == 0x000000, "Member 'BP_UnlockInfoTooltip_C_GetText_0::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UnlockInfoTooltip_C_GetText_0, Temp_bool_Variable) == 0x000018, "Member 'BP_UnlockInfoTooltip_C_GetText_0::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BP_UnlockInfoTooltip_C_GetText_0, Temp_text_Variable) == 0x000020, "Member 'BP_UnlockInfoTooltip_C_GetText_0::Temp_text_Variable' has a wrong offset!");
static_assert(offsetof(BP_UnlockInfoTooltip_C_GetText_0, Temp_text_Variable_1) == 0x000038, "Member 'BP_UnlockInfoTooltip_C_GetText_0::Temp_text_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_UnlockInfoTooltip_C_GetText_0, K2Node_Select_Default) == 0x000050, "Member 'BP_UnlockInfoTooltip_C_GetText_0::K2Node_Select_Default' has a wrong offset!");

// Function BP_UnlockInfoTooltip.BP_UnlockInfoTooltip_C.GetColorAndOpacity_0
// 0x00A8 (0x00A8 - 0x0000)
struct BP_UnlockInfoTooltip_C_GetColorAndOpacity_0 final
{
public:
	struct FSlateColor                            ReturnValue;                                       // 0x0000(0x0028)(Parm, OutParm, ReturnParm)
	bool                                          Temp_bool_Variable;                                // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0030(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x0058(0x0028)()
	struct FSlateColor                            K2Node_Select_Default;                             // 0x0080(0x0028)()
};
static_assert(alignof(BP_UnlockInfoTooltip_C_GetColorAndOpacity_0) == 0x000008, "Wrong alignment on BP_UnlockInfoTooltip_C_GetColorAndOpacity_0");
static_assert(sizeof(BP_UnlockInfoTooltip_C_GetColorAndOpacity_0) == 0x0000A8, "Wrong size on BP_UnlockInfoTooltip_C_GetColorAndOpacity_0");
static_assert(offsetof(BP_UnlockInfoTooltip_C_GetColorAndOpacity_0, ReturnValue) == 0x000000, "Member 'BP_UnlockInfoTooltip_C_GetColorAndOpacity_0::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UnlockInfoTooltip_C_GetColorAndOpacity_0, Temp_bool_Variable) == 0x000028, "Member 'BP_UnlockInfoTooltip_C_GetColorAndOpacity_0::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BP_UnlockInfoTooltip_C_GetColorAndOpacity_0, K2Node_MakeStruct_SlateColor) == 0x000030, "Member 'BP_UnlockInfoTooltip_C_GetColorAndOpacity_0::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(BP_UnlockInfoTooltip_C_GetColorAndOpacity_0, K2Node_MakeStruct_SlateColor_1) == 0x000058, "Member 'BP_UnlockInfoTooltip_C_GetColorAndOpacity_0::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");
static_assert(offsetof(BP_UnlockInfoTooltip_C_GetColorAndOpacity_0, K2Node_Select_Default) == 0x000080, "Member 'BP_UnlockInfoTooltip_C_GetColorAndOpacity_0::K2Node_Select_Default' has a wrong offset!");

}

