﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_BaseDialog

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function BP_BaseDialog.BP_BaseDialog_C.ExecuteUbergraph_BP_BaseDialog
// 0x0080 (0x0080 - 0x0000)
struct BP_BaseDialog_C_ExecuteUbergraph_BP_BaseDialog final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_1;                              // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_2;                              // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_3;                              // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_4;                              // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_A[0x6];                                        // 0x000A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_CustomEvent_InVisibility;                   // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_1;        // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AHUD*                                   CallFunc_GetHUD_ReturnValue;                       // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Select_Default;                             // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_31[0x7];                                       // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_MordhauHUD_C*                       K2Node_DynamicCast_AsBP_Mordhau_HUD;               // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_41[0x7];                                       // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UGameInstance*                          CallFunc_GetGameInstance_ReturnValue;              // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0050(0x0010)(ZeroConstructor, NoDestructor)
	class UBP_MordhauGameInstance_C*              K2Node_DynamicCast_AsBP_Mordhau_Game_Instance;     // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_69[0x3];                                       // 0x0069(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(ESlateVisibility InVisibility)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x006C(0x0010)(ZeroConstructor, NoDestructor)
};
static_assert(alignof(BP_BaseDialog_C_ExecuteUbergraph_BP_BaseDialog) == 0x000008, "Wrong alignment on BP_BaseDialog_C_ExecuteUbergraph_BP_BaseDialog");
static_assert(sizeof(BP_BaseDialog_C_ExecuteUbergraph_BP_BaseDialog) == 0x000080, "Wrong size on BP_BaseDialog_C_ExecuteUbergraph_BP_BaseDialog");
static_assert(offsetof(BP_BaseDialog_C_ExecuteUbergraph_BP_BaseDialog, EntryPoint) == 0x000000, "Member 'BP_BaseDialog_C_ExecuteUbergraph_BP_BaseDialog::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_BaseDialog_C_ExecuteUbergraph_BP_BaseDialog, Temp_byte_Variable) == 0x000004, "Member 'BP_BaseDialog_C_ExecuteUbergraph_BP_BaseDialog::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(BP_BaseDialog_C_ExecuteUbergraph_BP_BaseDialog, Temp_bool_Variable) == 0x000005, "Member 'BP_BaseDialog_C_ExecuteUbergraph_BP_BaseDialog::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BP_BaseDialog_C_ExecuteUbergraph_BP_BaseDialog, Temp_bool_Variable_1) == 0x000006, "Member 'BP_BaseDialog_C_ExecuteUbergraph_BP_BaseDialog::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_BaseDialog_C_ExecuteUbergraph_BP_BaseDialog, Temp_bool_Variable_2) == 0x000007, "Member 'BP_BaseDialog_C_ExecuteUbergraph_BP_BaseDialog::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(BP_BaseDialog_C_ExecuteUbergraph_BP_BaseDialog, Temp_bool_Variable_3) == 0x000008, "Member 'BP_BaseDialog_C_ExecuteUbergraph_BP_BaseDialog::Temp_bool_Variable_3' has a wrong offset!");
static_assert(offsetof(BP_BaseDialog_C_ExecuteUbergraph_BP_BaseDialog, Temp_bool_Variable_4) == 0x000009, "Member 'BP_BaseDialog_C_ExecuteUbergraph_BP_BaseDialog::Temp_bool_Variable_4' has a wrong offset!");
static_assert(offsetof(BP_BaseDialog_C_ExecuteUbergraph_BP_BaseDialog, CallFunc_GetPlayerController_ReturnValue) == 0x000010, "Member 'BP_BaseDialog_C_ExecuteUbergraph_BP_BaseDialog::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BaseDialog_C_ExecuteUbergraph_BP_BaseDialog, K2Node_CustomEvent_InVisibility) == 0x000018, "Member 'BP_BaseDialog_C_ExecuteUbergraph_BP_BaseDialog::K2Node_CustomEvent_InVisibility' has a wrong offset!");
static_assert(offsetof(BP_BaseDialog_C_ExecuteUbergraph_BP_BaseDialog, CallFunc_GetPlayerController_ReturnValue_1) == 0x000020, "Member 'BP_BaseDialog_C_ExecuteUbergraph_BP_BaseDialog::CallFunc_GetPlayerController_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_BaseDialog_C_ExecuteUbergraph_BP_BaseDialog, CallFunc_GetHUD_ReturnValue) == 0x000028, "Member 'BP_BaseDialog_C_ExecuteUbergraph_BP_BaseDialog::CallFunc_GetHUD_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BaseDialog_C_ExecuteUbergraph_BP_BaseDialog, K2Node_Select_Default) == 0x000030, "Member 'BP_BaseDialog_C_ExecuteUbergraph_BP_BaseDialog::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(BP_BaseDialog_C_ExecuteUbergraph_BP_BaseDialog, K2Node_DynamicCast_AsBP_Mordhau_HUD) == 0x000038, "Member 'BP_BaseDialog_C_ExecuteUbergraph_BP_BaseDialog::K2Node_DynamicCast_AsBP_Mordhau_HUD' has a wrong offset!");
static_assert(offsetof(BP_BaseDialog_C_ExecuteUbergraph_BP_BaseDialog, K2Node_DynamicCast_bSuccess) == 0x000040, "Member 'BP_BaseDialog_C_ExecuteUbergraph_BP_BaseDialog::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_BaseDialog_C_ExecuteUbergraph_BP_BaseDialog, CallFunc_GetGameInstance_ReturnValue) == 0x000048, "Member 'BP_BaseDialog_C_ExecuteUbergraph_BP_BaseDialog::CallFunc_GetGameInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BaseDialog_C_ExecuteUbergraph_BP_BaseDialog, K2Node_CreateDelegate_OutputDelegate) == 0x000050, "Member 'BP_BaseDialog_C_ExecuteUbergraph_BP_BaseDialog::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_BaseDialog_C_ExecuteUbergraph_BP_BaseDialog, K2Node_DynamicCast_AsBP_Mordhau_Game_Instance) == 0x000060, "Member 'BP_BaseDialog_C_ExecuteUbergraph_BP_BaseDialog::K2Node_DynamicCast_AsBP_Mordhau_Game_Instance' has a wrong offset!");
static_assert(offsetof(BP_BaseDialog_C_ExecuteUbergraph_BP_BaseDialog, K2Node_DynamicCast_bSuccess_1) == 0x000068, "Member 'BP_BaseDialog_C_ExecuteUbergraph_BP_BaseDialog::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BP_BaseDialog_C_ExecuteUbergraph_BP_BaseDialog, K2Node_CreateDelegate_OutputDelegate_1) == 0x00006C, "Member 'BP_BaseDialog_C_ExecuteUbergraph_BP_BaseDialog::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");

// Function BP_BaseDialog.BP_BaseDialog_C.Visibility Changed
// 0x0001 (0x0001 - 0x0000)
struct BP_BaseDialog_C_Visibility_Changed final
{
public:
	ESlateVisibility                              InVisibility;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_BaseDialog_C_Visibility_Changed) == 0x000001, "Wrong alignment on BP_BaseDialog_C_Visibility_Changed");
static_assert(sizeof(BP_BaseDialog_C_Visibility_Changed) == 0x000001, "Wrong size on BP_BaseDialog_C_Visibility_Changed");
static_assert(offsetof(BP_BaseDialog_C_Visibility_Changed, InVisibility) == 0x000000, "Member 'BP_BaseDialog_C_Visibility_Changed::InVisibility' has a wrong offset!");

// Function BP_BaseDialog.BP_BaseDialog_C.OnMouseButtonDown_0
// 0x0218 (0x0218 - 0x0000)
struct BP_BaseDialog_C_OnMouseButtonDown_0 final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                          MouseEvent;                                        // 0x0038(0x0070)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                            ReturnValue;                                       // 0x00A8(0x00B8)(Parm, OutParm, ReturnParm)
	struct FEventReply                            CallFunc_Handled_ReturnValue;                      // 0x0160(0x00B8)()
};
static_assert(alignof(BP_BaseDialog_C_OnMouseButtonDown_0) == 0x000008, "Wrong alignment on BP_BaseDialog_C_OnMouseButtonDown_0");
static_assert(sizeof(BP_BaseDialog_C_OnMouseButtonDown_0) == 0x000218, "Wrong size on BP_BaseDialog_C_OnMouseButtonDown_0");
static_assert(offsetof(BP_BaseDialog_C_OnMouseButtonDown_0, MyGeometry) == 0x000000, "Member 'BP_BaseDialog_C_OnMouseButtonDown_0::MyGeometry' has a wrong offset!");
static_assert(offsetof(BP_BaseDialog_C_OnMouseButtonDown_0, MouseEvent) == 0x000038, "Member 'BP_BaseDialog_C_OnMouseButtonDown_0::MouseEvent' has a wrong offset!");
static_assert(offsetof(BP_BaseDialog_C_OnMouseButtonDown_0, ReturnValue) == 0x0000A8, "Member 'BP_BaseDialog_C_OnMouseButtonDown_0::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BaseDialog_C_OnMouseButtonDown_0, CallFunc_Handled_ReturnValue) == 0x000160, "Member 'BP_BaseDialog_C_OnMouseButtonDown_0::CallFunc_Handled_ReturnValue' has a wrong offset!");

// Function BP_BaseDialog.BP_BaseDialog_C.GetTitleText
// 0x0018 (0x0018 - 0x0000)
struct BP_BaseDialog_C_GetTitleText final
{
public:
	class FText                                   ReturnValue;                                       // 0x0000(0x0018)(Parm, OutParm, ReturnParm)
};
static_assert(alignof(BP_BaseDialog_C_GetTitleText) == 0x000008, "Wrong alignment on BP_BaseDialog_C_GetTitleText");
static_assert(sizeof(BP_BaseDialog_C_GetTitleText) == 0x000018, "Wrong size on BP_BaseDialog_C_GetTitleText");
static_assert(offsetof(BP_BaseDialog_C_GetTitleText, ReturnValue) == 0x000000, "Member 'BP_BaseDialog_C_GetTitleText::ReturnValue' has a wrong offset!");

// Function BP_BaseDialog.BP_BaseDialog_C.OnAsyncLoadingFlush
// 0x0003 (0x0003 - 0x0000)
struct BP_BaseDialog_C_OnAsyncLoadingFlush final
{
public:
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              CallFunc_GetVisibility_ReturnValue;                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_BaseDialog_C_OnAsyncLoadingFlush) == 0x000001, "Wrong alignment on BP_BaseDialog_C_OnAsyncLoadingFlush");
static_assert(sizeof(BP_BaseDialog_C_OnAsyncLoadingFlush) == 0x000003, "Wrong size on BP_BaseDialog_C_OnAsyncLoadingFlush");
static_assert(offsetof(BP_BaseDialog_C_OnAsyncLoadingFlush, CallFunc_MakeLiteralByte_ReturnValue) == 0x000000, "Member 'BP_BaseDialog_C_OnAsyncLoadingFlush::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BaseDialog_C_OnAsyncLoadingFlush, CallFunc_GetVisibility_ReturnValue) == 0x000001, "Member 'BP_BaseDialog_C_OnAsyncLoadingFlush::CallFunc_GetVisibility_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BaseDialog_C_OnAsyncLoadingFlush, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000002, "Member 'BP_BaseDialog_C_OnAsyncLoadingFlush::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");

}

