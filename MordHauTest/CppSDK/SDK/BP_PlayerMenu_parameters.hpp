﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PlayerMenu

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "SlateCore_structs.hpp"
#include "MordhauOnlineSubsystem_structs.hpp"


namespace SDK::Params
{

// Function BP_PlayerMenu.BP_PlayerMenu_C.ExecuteUbergraph_BP_PlayerMenu
// 0x00C8 (0x00C8 - 0x0000)
struct BP_PlayerMenu_C_ExecuteUbergraph_BP_PlayerMenu final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   K2Node_ComponentBoundEvent_SelectedItem;           // 0x0020(0x0018)()
	ESelectInfo                                   K2Node_ComponentBoundEvent_SelectionType;          // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_39[0x7];                                       // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMordhauSingleton*                      CallFunc_GetMordhauSingleton_ReturnValue;          // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue;               // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Find_ReturnValue;                   // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Array_Get_Item;                           // 0x0050(0x0018)()
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue;               // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_69[0x3];                                       // 0x0069(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x006C(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_7C[0x4];                                       // 0x007C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Array_Get_Item_1;                         // 0x0080(0x0018)()
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0098(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x009C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9D[0x3];                                       // 0x009D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UMordhauSingleton*                      CallFunc_GetMordhauSingleton_ReturnValue_1;        // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsConsolePlatform_ReturnValue;            // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_A9[0x3];                                       // 0x00A9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue_1;             // 0x00AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Array_Get_Item_2;                         // 0x00B0(0x0018)()
};
static_assert(alignof(BP_PlayerMenu_C_ExecuteUbergraph_BP_PlayerMenu) == 0x000008, "Wrong alignment on BP_PlayerMenu_C_ExecuteUbergraph_BP_PlayerMenu");
static_assert(sizeof(BP_PlayerMenu_C_ExecuteUbergraph_BP_PlayerMenu) == 0x0000C8, "Wrong size on BP_PlayerMenu_C_ExecuteUbergraph_BP_PlayerMenu");
static_assert(offsetof(BP_PlayerMenu_C_ExecuteUbergraph_BP_PlayerMenu, EntryPoint) == 0x000000, "Member 'BP_PlayerMenu_C_ExecuteUbergraph_BP_PlayerMenu::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_PlayerMenu_C_ExecuteUbergraph_BP_PlayerMenu, Temp_int_Array_Index_Variable) == 0x000004, "Member 'BP_PlayerMenu_C_ExecuteUbergraph_BP_PlayerMenu::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_PlayerMenu_C_ExecuteUbergraph_BP_PlayerMenu, Temp_int_Loop_Counter_Variable) == 0x000008, "Member 'BP_PlayerMenu_C_ExecuteUbergraph_BP_PlayerMenu::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_PlayerMenu_C_ExecuteUbergraph_BP_PlayerMenu, CallFunc_Add_IntInt_ReturnValue) == 0x00000C, "Member 'BP_PlayerMenu_C_ExecuteUbergraph_BP_PlayerMenu::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerMenu_C_ExecuteUbergraph_BP_PlayerMenu, CallFunc_PlayAnimation_ReturnValue) == 0x000010, "Member 'BP_PlayerMenu_C_ExecuteUbergraph_BP_PlayerMenu::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerMenu_C_ExecuteUbergraph_BP_PlayerMenu, CallFunc_PlayAnimation_ReturnValue_1) == 0x000018, "Member 'BP_PlayerMenu_C_ExecuteUbergraph_BP_PlayerMenu::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerMenu_C_ExecuteUbergraph_BP_PlayerMenu, K2Node_ComponentBoundEvent_SelectedItem) == 0x000020, "Member 'BP_PlayerMenu_C_ExecuteUbergraph_BP_PlayerMenu::K2Node_ComponentBoundEvent_SelectedItem' has a wrong offset!");
static_assert(offsetof(BP_PlayerMenu_C_ExecuteUbergraph_BP_PlayerMenu, K2Node_ComponentBoundEvent_SelectionType) == 0x000038, "Member 'BP_PlayerMenu_C_ExecuteUbergraph_BP_PlayerMenu::K2Node_ComponentBoundEvent_SelectionType' has a wrong offset!");
static_assert(offsetof(BP_PlayerMenu_C_ExecuteUbergraph_BP_PlayerMenu, CallFunc_GetMordhauSingleton_ReturnValue) == 0x000040, "Member 'BP_PlayerMenu_C_ExecuteUbergraph_BP_PlayerMenu::CallFunc_GetMordhauSingleton_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerMenu_C_ExecuteUbergraph_BP_PlayerMenu, CallFunc_Conv_ByteToInt_ReturnValue) == 0x000048, "Member 'BP_PlayerMenu_C_ExecuteUbergraph_BP_PlayerMenu::CallFunc_Conv_ByteToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerMenu_C_ExecuteUbergraph_BP_PlayerMenu, CallFunc_Array_Find_ReturnValue) == 0x00004C, "Member 'BP_PlayerMenu_C_ExecuteUbergraph_BP_PlayerMenu::CallFunc_Array_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerMenu_C_ExecuteUbergraph_BP_PlayerMenu, CallFunc_Array_Get_Item) == 0x000050, "Member 'BP_PlayerMenu_C_ExecuteUbergraph_BP_PlayerMenu::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_PlayerMenu_C_ExecuteUbergraph_BP_PlayerMenu, CallFunc_Conv_IntToByte_ReturnValue) == 0x000068, "Member 'BP_PlayerMenu_C_ExecuteUbergraph_BP_PlayerMenu::CallFunc_Conv_IntToByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerMenu_C_ExecuteUbergraph_BP_PlayerMenu, K2Node_CreateDelegate_OutputDelegate) == 0x00006C, "Member 'BP_PlayerMenu_C_ExecuteUbergraph_BP_PlayerMenu::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_PlayerMenu_C_ExecuteUbergraph_BP_PlayerMenu, CallFunc_Array_Get_Item_1) == 0x000080, "Member 'BP_PlayerMenu_C_ExecuteUbergraph_BP_PlayerMenu::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerMenu_C_ExecuteUbergraph_BP_PlayerMenu, CallFunc_Array_Length_ReturnValue) == 0x000098, "Member 'BP_PlayerMenu_C_ExecuteUbergraph_BP_PlayerMenu::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerMenu_C_ExecuteUbergraph_BP_PlayerMenu, CallFunc_Less_IntInt_ReturnValue) == 0x00009C, "Member 'BP_PlayerMenu_C_ExecuteUbergraph_BP_PlayerMenu::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerMenu_C_ExecuteUbergraph_BP_PlayerMenu, CallFunc_GetMordhauSingleton_ReturnValue_1) == 0x0000A0, "Member 'BP_PlayerMenu_C_ExecuteUbergraph_BP_PlayerMenu::CallFunc_GetMordhauSingleton_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerMenu_C_ExecuteUbergraph_BP_PlayerMenu, CallFunc_IsConsolePlatform_ReturnValue) == 0x0000A8, "Member 'BP_PlayerMenu_C_ExecuteUbergraph_BP_PlayerMenu::CallFunc_IsConsolePlatform_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerMenu_C_ExecuteUbergraph_BP_PlayerMenu, CallFunc_Conv_ByteToInt_ReturnValue_1) == 0x0000AC, "Member 'BP_PlayerMenu_C_ExecuteUbergraph_BP_PlayerMenu::CallFunc_Conv_ByteToInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerMenu_C_ExecuteUbergraph_BP_PlayerMenu, CallFunc_Array_Get_Item_2) == 0x0000B0, "Member 'BP_PlayerMenu_C_ExecuteUbergraph_BP_PlayerMenu::CallFunc_Array_Get_Item_2' has a wrong offset!");

// Function BP_PlayerMenu.BP_PlayerMenu_C.BndEvt__RankDisplayDropdown_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature
// 0x0020 (0x0020 - 0x0000)
struct BP_PlayerMenu_C_BndEvt__RankDisplayDropdown_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature final
{
public:
	class FText                                   SelectedItem;                                      // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	ESelectInfo                                   SelectionType;                                     // 0x0018(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PlayerMenu_C_BndEvt__RankDisplayDropdown_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature) == 0x000008, "Wrong alignment on BP_PlayerMenu_C_BndEvt__RankDisplayDropdown_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature");
static_assert(sizeof(BP_PlayerMenu_C_BndEvt__RankDisplayDropdown_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature) == 0x000020, "Wrong size on BP_PlayerMenu_C_BndEvt__RankDisplayDropdown_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature");
static_assert(offsetof(BP_PlayerMenu_C_BndEvt__RankDisplayDropdown_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature, SelectedItem) == 0x000000, "Member 'BP_PlayerMenu_C_BndEvt__RankDisplayDropdown_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature::SelectedItem' has a wrong offset!");
static_assert(offsetof(BP_PlayerMenu_C_BndEvt__RankDisplayDropdown_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature, SelectionType) == 0x000018, "Member 'BP_PlayerMenu_C_BndEvt__RankDisplayDropdown_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature::SelectionType' has a wrong offset!");

// Function BP_PlayerMenu.BP_PlayerMenu_C.Update
// 0x0080 (0x0080 - 0x0000)
struct BP_PlayerMenu_C_Update final
{
public:
	struct FPlayFabPlayer                         CallFunc_GetPlayFabPlayer_ReturnValue;             // 0x0000(0x0060)(HasGetValueTypeHash)
	int32                                         CallFunc_Get3v3MMRFromStats_MMR;                   // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_PlayFabPlayer_ReturnValue;        // 0x0064(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_65[0x3];                                       // 0x0065(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetRank_Rank;                             // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Get1v1MMRFromStats_MMR;                   // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMordhauSingleton*                      CallFunc_GetMordhauSingleton_ReturnValue;          // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_GetValidValue_ReturnValue;                // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_79[0x3];                                       // 0x0079(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue;               // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PlayerMenu_C_Update) == 0x000008, "Wrong alignment on BP_PlayerMenu_C_Update");
static_assert(sizeof(BP_PlayerMenu_C_Update) == 0x000080, "Wrong size on BP_PlayerMenu_C_Update");
static_assert(offsetof(BP_PlayerMenu_C_Update, CallFunc_GetPlayFabPlayer_ReturnValue) == 0x000000, "Member 'BP_PlayerMenu_C_Update::CallFunc_GetPlayFabPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerMenu_C_Update, CallFunc_Get3v3MMRFromStats_MMR) == 0x000060, "Member 'BP_PlayerMenu_C_Update::CallFunc_Get3v3MMRFromStats_MMR' has a wrong offset!");
static_assert(offsetof(BP_PlayerMenu_C_Update, CallFunc_IsValid_PlayFabPlayer_ReturnValue) == 0x000064, "Member 'BP_PlayerMenu_C_Update::CallFunc_IsValid_PlayFabPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerMenu_C_Update, CallFunc_GetRank_Rank) == 0x000068, "Member 'BP_PlayerMenu_C_Update::CallFunc_GetRank_Rank' has a wrong offset!");
static_assert(offsetof(BP_PlayerMenu_C_Update, CallFunc_Get1v1MMRFromStats_MMR) == 0x00006C, "Member 'BP_PlayerMenu_C_Update::CallFunc_Get1v1MMRFromStats_MMR' has a wrong offset!");
static_assert(offsetof(BP_PlayerMenu_C_Update, CallFunc_GetMordhauSingleton_ReturnValue) == 0x000070, "Member 'BP_PlayerMenu_C_Update::CallFunc_GetMordhauSingleton_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerMenu_C_Update, CallFunc_GetValidValue_ReturnValue) == 0x000078, "Member 'BP_PlayerMenu_C_Update::CallFunc_GetValidValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerMenu_C_Update, CallFunc_Conv_ByteToInt_ReturnValue) == 0x00007C, "Member 'BP_PlayerMenu_C_Update::CallFunc_Conv_ByteToInt_ReturnValue' has a wrong offset!");

// Function BP_PlayerMenu.BP_PlayerMenu_C.Get_CurrentRankText_Text_0
// 0x0018 (0x0018 - 0x0000)
struct BP_PlayerMenu_C_Get_CurrentRankText_Text_0 final
{
public:
	class FText                                   ReturnValue;                                       // 0x0000(0x0018)(Parm, OutParm, ReturnParm)
};
static_assert(alignof(BP_PlayerMenu_C_Get_CurrentRankText_Text_0) == 0x000008, "Wrong alignment on BP_PlayerMenu_C_Get_CurrentRankText_Text_0");
static_assert(sizeof(BP_PlayerMenu_C_Get_CurrentRankText_Text_0) == 0x000018, "Wrong size on BP_PlayerMenu_C_Get_CurrentRankText_Text_0");
static_assert(offsetof(BP_PlayerMenu_C_Get_CurrentRankText_Text_0, ReturnValue) == 0x000000, "Member 'BP_PlayerMenu_C_Get_CurrentRankText_Text_0::ReturnValue' has a wrong offset!");

// Function BP_PlayerMenu.BP_PlayerMenu_C.Get_CurrentRankText_ColorAndOpacity_0
// 0x0028 (0x0028 - 0x0000)
struct BP_PlayerMenu_C_Get_CurrentRankText_ColorAndOpacity_0 final
{
public:
	struct FSlateColor                            ReturnValue;                                       // 0x0000(0x0028)(Parm, OutParm, ReturnParm)
};
static_assert(alignof(BP_PlayerMenu_C_Get_CurrentRankText_ColorAndOpacity_0) == 0x000008, "Wrong alignment on BP_PlayerMenu_C_Get_CurrentRankText_ColorAndOpacity_0");
static_assert(sizeof(BP_PlayerMenu_C_Get_CurrentRankText_ColorAndOpacity_0) == 0x000028, "Wrong size on BP_PlayerMenu_C_Get_CurrentRankText_ColorAndOpacity_0");
static_assert(offsetof(BP_PlayerMenu_C_Get_CurrentRankText_ColorAndOpacity_0, ReturnValue) == 0x000000, "Member 'BP_PlayerMenu_C_Get_CurrentRankText_ColorAndOpacity_0::ReturnValue' has a wrong offset!");

// Function BP_PlayerMenu.BP_PlayerMenu_C.Get_CurrentRankMMRText_Text_0
// 0x0030 (0x0030 - 0x0000)
struct BP_PlayerMenu_C_Get_CurrentRankMMRText_Text_0 final
{
public:
	class FText                                   ReturnValue;                                       // 0x0000(0x0018)(Parm, OutParm, ReturnParm)
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0018(0x0018)()
};
static_assert(alignof(BP_PlayerMenu_C_Get_CurrentRankMMRText_Text_0) == 0x000008, "Wrong alignment on BP_PlayerMenu_C_Get_CurrentRankMMRText_Text_0");
static_assert(sizeof(BP_PlayerMenu_C_Get_CurrentRankMMRText_Text_0) == 0x000030, "Wrong size on BP_PlayerMenu_C_Get_CurrentRankMMRText_Text_0");
static_assert(offsetof(BP_PlayerMenu_C_Get_CurrentRankMMRText_Text_0, ReturnValue) == 0x000000, "Member 'BP_PlayerMenu_C_Get_CurrentRankMMRText_Text_0::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerMenu_C_Get_CurrentRankMMRText_Text_0, CallFunc_Conv_IntToText_ReturnValue) == 0x000018, "Member 'BP_PlayerMenu_C_Get_CurrentRankMMRText_Text_0::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");

// Function BP_PlayerMenu.BP_PlayerMenu_C.Get_TextBlock_3_Text_0
// 0x0018 (0x0018 - 0x0000)
struct BP_PlayerMenu_C_Get_TextBlock_3_Text_0 final
{
public:
	class FText                                   ReturnValue;                                       // 0x0000(0x0018)(Parm, OutParm, ReturnParm)
};
static_assert(alignof(BP_PlayerMenu_C_Get_TextBlock_3_Text_0) == 0x000008, "Wrong alignment on BP_PlayerMenu_C_Get_TextBlock_3_Text_0");
static_assert(sizeof(BP_PlayerMenu_C_Get_TextBlock_3_Text_0) == 0x000018, "Wrong size on BP_PlayerMenu_C_Get_TextBlock_3_Text_0");
static_assert(offsetof(BP_PlayerMenu_C_Get_TextBlock_3_Text_0, ReturnValue) == 0x000000, "Member 'BP_PlayerMenu_C_Get_TextBlock_3_Text_0::ReturnValue' has a wrong offset!");

// Function BP_PlayerMenu.BP_PlayerMenu_C.Get_TextBlock_5_Text_0
// 0x0030 (0x0030 - 0x0000)
struct BP_PlayerMenu_C_Get_TextBlock_5_Text_0 final
{
public:
	class FText                                   ReturnValue;                                       // 0x0000(0x0018)(Parm, OutParm, ReturnParm)
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0018(0x0018)()
};
static_assert(alignof(BP_PlayerMenu_C_Get_TextBlock_5_Text_0) == 0x000008, "Wrong alignment on BP_PlayerMenu_C_Get_TextBlock_5_Text_0");
static_assert(sizeof(BP_PlayerMenu_C_Get_TextBlock_5_Text_0) == 0x000030, "Wrong size on BP_PlayerMenu_C_Get_TextBlock_5_Text_0");
static_assert(offsetof(BP_PlayerMenu_C_Get_TextBlock_5_Text_0, ReturnValue) == 0x000000, "Member 'BP_PlayerMenu_C_Get_TextBlock_5_Text_0::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerMenu_C_Get_TextBlock_5_Text_0, CallFunc_Conv_IntToText_ReturnValue) == 0x000018, "Member 'BP_PlayerMenu_C_Get_TextBlock_5_Text_0::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");

// Function BP_PlayerMenu.BP_PlayerMenu_C.Get_TextBlock_3_ColorAndOpacity_0
// 0x0028 (0x0028 - 0x0000)
struct BP_PlayerMenu_C_Get_TextBlock_3_ColorAndOpacity_0 final
{
public:
	struct FSlateColor                            ReturnValue;                                       // 0x0000(0x0028)(Parm, OutParm, ReturnParm)
};
static_assert(alignof(BP_PlayerMenu_C_Get_TextBlock_3_ColorAndOpacity_0) == 0x000008, "Wrong alignment on BP_PlayerMenu_C_Get_TextBlock_3_ColorAndOpacity_0");
static_assert(sizeof(BP_PlayerMenu_C_Get_TextBlock_3_ColorAndOpacity_0) == 0x000028, "Wrong size on BP_PlayerMenu_C_Get_TextBlock_3_ColorAndOpacity_0");
static_assert(offsetof(BP_PlayerMenu_C_Get_TextBlock_3_ColorAndOpacity_0, ReturnValue) == 0x000000, "Member 'BP_PlayerMenu_C_Get_TextBlock_3_ColorAndOpacity_0::ReturnValue' has a wrong offset!");

// Function BP_PlayerMenu.BP_PlayerMenu_C.Get_DropdownGamepadControls_Visibility_0
// 0x0020 (0x0020 - 0x0000)
struct BP_PlayerMenu_C_Get_DropdownGamepadControls_Visibility_0 final
{
public:
	ESlateVisibility                              ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_1;        // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetIsUsingController_ReturnValue;         // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetIsOpen_ReturnValue;                    // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_PlayerMenu_C_Get_DropdownGamepadControls_Visibility_0) == 0x000008, "Wrong alignment on BP_PlayerMenu_C_Get_DropdownGamepadControls_Visibility_0");
static_assert(sizeof(BP_PlayerMenu_C_Get_DropdownGamepadControls_Visibility_0) == 0x000020, "Wrong size on BP_PlayerMenu_C_Get_DropdownGamepadControls_Visibility_0");
static_assert(offsetof(BP_PlayerMenu_C_Get_DropdownGamepadControls_Visibility_0, ReturnValue) == 0x000000, "Member 'BP_PlayerMenu_C_Get_DropdownGamepadControls_Visibility_0::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerMenu_C_Get_DropdownGamepadControls_Visibility_0, CallFunc_GetPlayerController_ReturnValue) == 0x000008, "Member 'BP_PlayerMenu_C_Get_DropdownGamepadControls_Visibility_0::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerMenu_C_Get_DropdownGamepadControls_Visibility_0, CallFunc_GetPlayerController_ReturnValue_1) == 0x000010, "Member 'BP_PlayerMenu_C_Get_DropdownGamepadControls_Visibility_0::CallFunc_GetPlayerController_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerMenu_C_Get_DropdownGamepadControls_Visibility_0, CallFunc_GetIsUsingController_ReturnValue) == 0x000018, "Member 'BP_PlayerMenu_C_Get_DropdownGamepadControls_Visibility_0::CallFunc_GetIsUsingController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerMenu_C_Get_DropdownGamepadControls_Visibility_0, CallFunc_GetIsOpen_ReturnValue) == 0x000019, "Member 'BP_PlayerMenu_C_Get_DropdownGamepadControls_Visibility_0::CallFunc_GetIsOpen_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerMenu_C_Get_DropdownGamepadControls_Visibility_0, CallFunc_BooleanAND_ReturnValue) == 0x00001A, "Member 'BP_PlayerMenu_C_Get_DropdownGamepadControls_Visibility_0::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

}

