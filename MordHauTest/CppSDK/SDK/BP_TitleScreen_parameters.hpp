﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_TitleScreen

#include "Basic.hpp"

#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function BP_TitleScreen.BP_TitleScreen_C.ExecuteUbergraph_BP_TitleScreen
// 0x00D8 (0x00D8 - 0x0000)
struct BP_TitleScreen_C_ExecuteUbergraph_BP_TitleScreen final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x0014(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_2;            // 0x0024(0x0010)(ZeroConstructor, NoDestructor)
	ESlateVisibility                              K2Node_CustomEvent_InVisibility;                   // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_35[0x3];                                       // 0x0035(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetIsUsingController_ReturnValue;         // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_42[0x6];                                       // 0x0042(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_1;        // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_InformationDialog_C*                CallFunc_CreateInformationDialog_InformationDialog; // 0x0050(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AHUD*                                   CallFunc_GetHUD_ReturnValue;                       // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_MordhauHUD_C*                       K2Node_DynamicCast_AsBP_Mordhau_HUD;               // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_69[0x7];                                       // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_2;        // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AHUD*                                   CallFunc_GetHUD_ReturnValue_1;                     // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_InformationDialog_C*                CallFunc_CreateInformationDialog_InformationDialog_1; // 0x0080(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_MordhauHUD_C*                       K2Node_DynamicCast_AsBP_Mordhau_HUD_1;             // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_91[0x7];                                       // 0x0091(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_3;        // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_InformationDialog_C*                CallFunc_CreateInformationDialog_InformationDialog_2; // 0x00A0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AHUD*                                   CallFunc_GetHUD_ReturnValue_2;                     // 0x00A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_MordhauHUD_C*                       K2Node_DynamicCast_AsBP_Mordhau_HUD_2;             // 0x00B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00B9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x00BA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x00BB(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	TDelegate<void(ESlateVisibility InVisibility)> K2Node_CreateDelegate_OutputDelegate_3;            // 0x00BC(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_CC[0x4];                                       // 0x00CC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_4;        // 0x00D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_TitleScreen_C_ExecuteUbergraph_BP_TitleScreen) == 0x000008, "Wrong alignment on BP_TitleScreen_C_ExecuteUbergraph_BP_TitleScreen");
static_assert(sizeof(BP_TitleScreen_C_ExecuteUbergraph_BP_TitleScreen) == 0x0000D8, "Wrong size on BP_TitleScreen_C_ExecuteUbergraph_BP_TitleScreen");
static_assert(offsetof(BP_TitleScreen_C_ExecuteUbergraph_BP_TitleScreen, EntryPoint) == 0x000000, "Member 'BP_TitleScreen_C_ExecuteUbergraph_BP_TitleScreen::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_TitleScreen_C_ExecuteUbergraph_BP_TitleScreen, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'BP_TitleScreen_C_ExecuteUbergraph_BP_TitleScreen::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_TitleScreen_C_ExecuteUbergraph_BP_TitleScreen, K2Node_CreateDelegate_OutputDelegate_1) == 0x000014, "Member 'BP_TitleScreen_C_ExecuteUbergraph_BP_TitleScreen::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(BP_TitleScreen_C_ExecuteUbergraph_BP_TitleScreen, K2Node_CreateDelegate_OutputDelegate_2) == 0x000024, "Member 'BP_TitleScreen_C_ExecuteUbergraph_BP_TitleScreen::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(BP_TitleScreen_C_ExecuteUbergraph_BP_TitleScreen, K2Node_CustomEvent_InVisibility) == 0x000034, "Member 'BP_TitleScreen_C_ExecuteUbergraph_BP_TitleScreen::K2Node_CustomEvent_InVisibility' has a wrong offset!");
static_assert(offsetof(BP_TitleScreen_C_ExecuteUbergraph_BP_TitleScreen, CallFunc_GetPlayerController_ReturnValue) == 0x000038, "Member 'BP_TitleScreen_C_ExecuteUbergraph_BP_TitleScreen::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TitleScreen_C_ExecuteUbergraph_BP_TitleScreen, K2Node_SwitchEnum_CmpSuccess) == 0x000040, "Member 'BP_TitleScreen_C_ExecuteUbergraph_BP_TitleScreen::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(BP_TitleScreen_C_ExecuteUbergraph_BP_TitleScreen, CallFunc_GetIsUsingController_ReturnValue) == 0x000041, "Member 'BP_TitleScreen_C_ExecuteUbergraph_BP_TitleScreen::CallFunc_GetIsUsingController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TitleScreen_C_ExecuteUbergraph_BP_TitleScreen, CallFunc_GetPlayerController_ReturnValue_1) == 0x000048, "Member 'BP_TitleScreen_C_ExecuteUbergraph_BP_TitleScreen::CallFunc_GetPlayerController_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_TitleScreen_C_ExecuteUbergraph_BP_TitleScreen, CallFunc_CreateInformationDialog_InformationDialog) == 0x000050, "Member 'BP_TitleScreen_C_ExecuteUbergraph_BP_TitleScreen::CallFunc_CreateInformationDialog_InformationDialog' has a wrong offset!");
static_assert(offsetof(BP_TitleScreen_C_ExecuteUbergraph_BP_TitleScreen, CallFunc_GetHUD_ReturnValue) == 0x000058, "Member 'BP_TitleScreen_C_ExecuteUbergraph_BP_TitleScreen::CallFunc_GetHUD_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TitleScreen_C_ExecuteUbergraph_BP_TitleScreen, K2Node_DynamicCast_AsBP_Mordhau_HUD) == 0x000060, "Member 'BP_TitleScreen_C_ExecuteUbergraph_BP_TitleScreen::K2Node_DynamicCast_AsBP_Mordhau_HUD' has a wrong offset!");
static_assert(offsetof(BP_TitleScreen_C_ExecuteUbergraph_BP_TitleScreen, K2Node_DynamicCast_bSuccess) == 0x000068, "Member 'BP_TitleScreen_C_ExecuteUbergraph_BP_TitleScreen::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_TitleScreen_C_ExecuteUbergraph_BP_TitleScreen, CallFunc_GetPlayerController_ReturnValue_2) == 0x000070, "Member 'BP_TitleScreen_C_ExecuteUbergraph_BP_TitleScreen::CallFunc_GetPlayerController_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_TitleScreen_C_ExecuteUbergraph_BP_TitleScreen, CallFunc_GetHUD_ReturnValue_1) == 0x000078, "Member 'BP_TitleScreen_C_ExecuteUbergraph_BP_TitleScreen::CallFunc_GetHUD_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_TitleScreen_C_ExecuteUbergraph_BP_TitleScreen, CallFunc_CreateInformationDialog_InformationDialog_1) == 0x000080, "Member 'BP_TitleScreen_C_ExecuteUbergraph_BP_TitleScreen::CallFunc_CreateInformationDialog_InformationDialog_1' has a wrong offset!");
static_assert(offsetof(BP_TitleScreen_C_ExecuteUbergraph_BP_TitleScreen, K2Node_DynamicCast_AsBP_Mordhau_HUD_1) == 0x000088, "Member 'BP_TitleScreen_C_ExecuteUbergraph_BP_TitleScreen::K2Node_DynamicCast_AsBP_Mordhau_HUD_1' has a wrong offset!");
static_assert(offsetof(BP_TitleScreen_C_ExecuteUbergraph_BP_TitleScreen, K2Node_DynamicCast_bSuccess_1) == 0x000090, "Member 'BP_TitleScreen_C_ExecuteUbergraph_BP_TitleScreen::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BP_TitleScreen_C_ExecuteUbergraph_BP_TitleScreen, CallFunc_GetPlayerController_ReturnValue_3) == 0x000098, "Member 'BP_TitleScreen_C_ExecuteUbergraph_BP_TitleScreen::CallFunc_GetPlayerController_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_TitleScreen_C_ExecuteUbergraph_BP_TitleScreen, CallFunc_CreateInformationDialog_InformationDialog_2) == 0x0000A0, "Member 'BP_TitleScreen_C_ExecuteUbergraph_BP_TitleScreen::CallFunc_CreateInformationDialog_InformationDialog_2' has a wrong offset!");
static_assert(offsetof(BP_TitleScreen_C_ExecuteUbergraph_BP_TitleScreen, CallFunc_GetHUD_ReturnValue_2) == 0x0000A8, "Member 'BP_TitleScreen_C_ExecuteUbergraph_BP_TitleScreen::CallFunc_GetHUD_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_TitleScreen_C_ExecuteUbergraph_BP_TitleScreen, K2Node_DynamicCast_AsBP_Mordhau_HUD_2) == 0x0000B0, "Member 'BP_TitleScreen_C_ExecuteUbergraph_BP_TitleScreen::K2Node_DynamicCast_AsBP_Mordhau_HUD_2' has a wrong offset!");
static_assert(offsetof(BP_TitleScreen_C_ExecuteUbergraph_BP_TitleScreen, K2Node_DynamicCast_bSuccess_2) == 0x0000B8, "Member 'BP_TitleScreen_C_ExecuteUbergraph_BP_TitleScreen::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(BP_TitleScreen_C_ExecuteUbergraph_BP_TitleScreen, CallFunc_IsValid_ReturnValue) == 0x0000B9, "Member 'BP_TitleScreen_C_ExecuteUbergraph_BP_TitleScreen::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TitleScreen_C_ExecuteUbergraph_BP_TitleScreen, CallFunc_IsValid_ReturnValue_1) == 0x0000BA, "Member 'BP_TitleScreen_C_ExecuteUbergraph_BP_TitleScreen::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_TitleScreen_C_ExecuteUbergraph_BP_TitleScreen, CallFunc_IsValid_ReturnValue_2) == 0x0000BB, "Member 'BP_TitleScreen_C_ExecuteUbergraph_BP_TitleScreen::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_TitleScreen_C_ExecuteUbergraph_BP_TitleScreen, K2Node_CreateDelegate_OutputDelegate_3) == 0x0000BC, "Member 'BP_TitleScreen_C_ExecuteUbergraph_BP_TitleScreen::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(BP_TitleScreen_C_ExecuteUbergraph_BP_TitleScreen, CallFunc_GetPlayerController_ReturnValue_4) == 0x0000D0, "Member 'BP_TitleScreen_C_ExecuteUbergraph_BP_TitleScreen::CallFunc_GetPlayerController_ReturnValue_4' has a wrong offset!");

// Function BP_TitleScreen.BP_TitleScreen_C.Visibility Changed
// 0x0001 (0x0001 - 0x0000)
struct BP_TitleScreen_C_Visibility_Changed final
{
public:
	ESlateVisibility                              InVisibility;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_TitleScreen_C_Visibility_Changed) == 0x000001, "Wrong alignment on BP_TitleScreen_C_Visibility_Changed");
static_assert(sizeof(BP_TitleScreen_C_Visibility_Changed) == 0x000001, "Wrong size on BP_TitleScreen_C_Visibility_Changed");
static_assert(offsetof(BP_TitleScreen_C_Visibility_Changed, InVisibility) == 0x000000, "Member 'BP_TitleScreen_C_Visibility_Changed::InVisibility' has a wrong offset!");

// Function BP_TitleScreen.BP_TitleScreen_C.ReturnFocusToMainMenu
// 0x0018 (0x0018 - 0x0000)
struct BP_TitleScreen_C_ReturnFocusToMainMenu final
{
public:
	class AMordhauHUD*                            CallFunc_GetMordhauHUD_ReturnValue;                // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_MordhauHUD_C*                       K2Node_DynamicCast_AsBP_Mordhau_HUD;               // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_TitleScreen_C_ReturnFocusToMainMenu) == 0x000008, "Wrong alignment on BP_TitleScreen_C_ReturnFocusToMainMenu");
static_assert(sizeof(BP_TitleScreen_C_ReturnFocusToMainMenu) == 0x000018, "Wrong size on BP_TitleScreen_C_ReturnFocusToMainMenu");
static_assert(offsetof(BP_TitleScreen_C_ReturnFocusToMainMenu, CallFunc_GetMordhauHUD_ReturnValue) == 0x000000, "Member 'BP_TitleScreen_C_ReturnFocusToMainMenu::CallFunc_GetMordhauHUD_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TitleScreen_C_ReturnFocusToMainMenu, K2Node_DynamicCast_AsBP_Mordhau_HUD) == 0x000008, "Member 'BP_TitleScreen_C_ReturnFocusToMainMenu::K2Node_DynamicCast_AsBP_Mordhau_HUD' has a wrong offset!");
static_assert(offsetof(BP_TitleScreen_C_ReturnFocusToMainMenu, K2Node_DynamicCast_bSuccess) == 0x000010, "Member 'BP_TitleScreen_C_ReturnFocusToMainMenu::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_TitleScreen_C_ReturnFocusToMainMenu, CallFunc_IsValid_ReturnValue) == 0x000011, "Member 'BP_TitleScreen_C_ReturnFocusToMainMenu::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function BP_TitleScreen.BP_TitleScreen_C.SetFocusToTitleScreen
// 0x0008 (0x0008 - 0x0000)
struct BP_TitleScreen_C_SetFocusToTitleScreen final
{
public:
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_TitleScreen_C_SetFocusToTitleScreen) == 0x000008, "Wrong alignment on BP_TitleScreen_C_SetFocusToTitleScreen");
static_assert(sizeof(BP_TitleScreen_C_SetFocusToTitleScreen) == 0x000008, "Wrong size on BP_TitleScreen_C_SetFocusToTitleScreen");
static_assert(offsetof(BP_TitleScreen_C_SetFocusToTitleScreen, CallFunc_GetPlayerController_ReturnValue) == 0x000000, "Member 'BP_TitleScreen_C_SetFocusToTitleScreen::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");

}

