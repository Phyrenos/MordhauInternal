﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_InteractWidget

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function BP_InteractWidget.BP_InteractWidget_C.ExecuteUbergraph_BP_InteractWidget
// 0x00C8 (0x00C8 - 0x0000)
struct BP_InteractWidget_C_ExecuteUbergraph_BP_InteractWidget final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x0004(0x0038)(IsPlainOldData, NoDestructor)
	float                                         K2Node_Event_InDeltaTime;                          // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AMordhauCharacter*                      CallFunc_GetViewTargetCharacter_ReturnValue;       // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_49[0x7];                                       // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;           // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0059(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5A[0x6];                                       // 0x005A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class AMordhauActor*                          K2Node_DynamicCast_AsMordhau_Actor;                // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_69[0x3];                                       // 0x0069(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetCooperativeHoldProgress_ReturnValue;   // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue_1;          // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IInteractable>         CallFunc_IsCooperativeInteractionAllowed_self_CastInput; // 0x0078(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)
	bool                                          CallFunc_IsCooperativeInteractionAllowed_ReturnValue; // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_89[0x7];                                       // 0x0089(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IInteractable>         CallFunc_CanHeldInteract_self_CastInput;           // 0x0090(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)
	bool                                          CallFunc_CanHeldInteract_ReturnValue;              // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_A1[0x3];                                       // 0x00A1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_SelectFloat_ReturnValue;                  // 0x00A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_FClamp_ReturnValue;                       // 0x00A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_AC[0x4];                                       // 0x00AC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IInteractable>         CallFunc_CanInteract_self_CastInput;               // 0x00B0(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)
	bool                                          CallFunc_CanInteract_ReturnValue;                  // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_InteractWidget_C_ExecuteUbergraph_BP_InteractWidget) == 0x000008, "Wrong alignment on BP_InteractWidget_C_ExecuteUbergraph_BP_InteractWidget");
static_assert(sizeof(BP_InteractWidget_C_ExecuteUbergraph_BP_InteractWidget) == 0x0000C8, "Wrong size on BP_InteractWidget_C_ExecuteUbergraph_BP_InteractWidget");
static_assert(offsetof(BP_InteractWidget_C_ExecuteUbergraph_BP_InteractWidget, EntryPoint) == 0x000000, "Member 'BP_InteractWidget_C_ExecuteUbergraph_BP_InteractWidget::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_InteractWidget_C_ExecuteUbergraph_BP_InteractWidget, K2Node_Event_MyGeometry) == 0x000004, "Member 'BP_InteractWidget_C_ExecuteUbergraph_BP_InteractWidget::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(BP_InteractWidget_C_ExecuteUbergraph_BP_InteractWidget, K2Node_Event_InDeltaTime) == 0x00003C, "Member 'BP_InteractWidget_C_ExecuteUbergraph_BP_InteractWidget::K2Node_Event_InDeltaTime' has a wrong offset!");
static_assert(offsetof(BP_InteractWidget_C_ExecuteUbergraph_BP_InteractWidget, CallFunc_GetViewTargetCharacter_ReturnValue) == 0x000040, "Member 'BP_InteractWidget_C_ExecuteUbergraph_BP_InteractWidget::CallFunc_GetViewTargetCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_InteractWidget_C_ExecuteUbergraph_BP_InteractWidget, CallFunc_IsValid_ReturnValue) == 0x000048, "Member 'BP_InteractWidget_C_ExecuteUbergraph_BP_InteractWidget::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_InteractWidget_C_ExecuteUbergraph_BP_InteractWidget, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000050, "Member 'BP_InteractWidget_C_ExecuteUbergraph_BP_InteractWidget::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_InteractWidget_C_ExecuteUbergraph_BP_InteractWidget, CallFunc_IsValid_ReturnValue_1) == 0x000058, "Member 'BP_InteractWidget_C_ExecuteUbergraph_BP_InteractWidget::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_InteractWidget_C_ExecuteUbergraph_BP_InteractWidget, CallFunc_IsValid_ReturnValue_2) == 0x000059, "Member 'BP_InteractWidget_C_ExecuteUbergraph_BP_InteractWidget::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_InteractWidget_C_ExecuteUbergraph_BP_InteractWidget, K2Node_DynamicCast_AsMordhau_Actor) == 0x000060, "Member 'BP_InteractWidget_C_ExecuteUbergraph_BP_InteractWidget::K2Node_DynamicCast_AsMordhau_Actor' has a wrong offset!");
static_assert(offsetof(BP_InteractWidget_C_ExecuteUbergraph_BP_InteractWidget, K2Node_DynamicCast_bSuccess) == 0x000068, "Member 'BP_InteractWidget_C_ExecuteUbergraph_BP_InteractWidget::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_InteractWidget_C_ExecuteUbergraph_BP_InteractWidget, CallFunc_GetCooperativeHoldProgress_ReturnValue) == 0x00006C, "Member 'BP_InteractWidget_C_ExecuteUbergraph_BP_InteractWidget::CallFunc_GetCooperativeHoldProgress_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_InteractWidget_C_ExecuteUbergraph_BP_InteractWidget, CallFunc_Divide_FloatFloat_ReturnValue) == 0x000070, "Member 'BP_InteractWidget_C_ExecuteUbergraph_BP_InteractWidget::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_InteractWidget_C_ExecuteUbergraph_BP_InteractWidget, CallFunc_Divide_FloatFloat_ReturnValue_1) == 0x000074, "Member 'BP_InteractWidget_C_ExecuteUbergraph_BP_InteractWidget::CallFunc_Divide_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_InteractWidget_C_ExecuteUbergraph_BP_InteractWidget, CallFunc_IsCooperativeInteractionAllowed_self_CastInput) == 0x000078, "Member 'BP_InteractWidget_C_ExecuteUbergraph_BP_InteractWidget::CallFunc_IsCooperativeInteractionAllowed_self_CastInput' has a wrong offset!");
static_assert(offsetof(BP_InteractWidget_C_ExecuteUbergraph_BP_InteractWidget, CallFunc_IsCooperativeInteractionAllowed_ReturnValue) == 0x000088, "Member 'BP_InteractWidget_C_ExecuteUbergraph_BP_InteractWidget::CallFunc_IsCooperativeInteractionAllowed_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_InteractWidget_C_ExecuteUbergraph_BP_InteractWidget, CallFunc_CanHeldInteract_self_CastInput) == 0x000090, "Member 'BP_InteractWidget_C_ExecuteUbergraph_BP_InteractWidget::CallFunc_CanHeldInteract_self_CastInput' has a wrong offset!");
static_assert(offsetof(BP_InteractWidget_C_ExecuteUbergraph_BP_InteractWidget, CallFunc_CanHeldInteract_ReturnValue) == 0x0000A0, "Member 'BP_InteractWidget_C_ExecuteUbergraph_BP_InteractWidget::CallFunc_CanHeldInteract_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_InteractWidget_C_ExecuteUbergraph_BP_InteractWidget, CallFunc_SelectFloat_ReturnValue) == 0x0000A4, "Member 'BP_InteractWidget_C_ExecuteUbergraph_BP_InteractWidget::CallFunc_SelectFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_InteractWidget_C_ExecuteUbergraph_BP_InteractWidget, CallFunc_FClamp_ReturnValue) == 0x0000A8, "Member 'BP_InteractWidget_C_ExecuteUbergraph_BP_InteractWidget::CallFunc_FClamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_InteractWidget_C_ExecuteUbergraph_BP_InteractWidget, CallFunc_CanInteract_self_CastInput) == 0x0000B0, "Member 'BP_InteractWidget_C_ExecuteUbergraph_BP_InteractWidget::CallFunc_CanInteract_self_CastInput' has a wrong offset!");
static_assert(offsetof(BP_InteractWidget_C_ExecuteUbergraph_BP_InteractWidget, CallFunc_CanInteract_ReturnValue) == 0x0000C0, "Member 'BP_InteractWidget_C_ExecuteUbergraph_BP_InteractWidget::CallFunc_CanInteract_ReturnValue' has a wrong offset!");

// Function BP_InteractWidget.BP_InteractWidget_C.Tick
// 0x003C (0x003C - 0x0000)
struct BP_InteractWidget_C_Tick final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                         InDeltaTime;                                       // 0x0038(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_InteractWidget_C_Tick) == 0x000004, "Wrong alignment on BP_InteractWidget_C_Tick");
static_assert(sizeof(BP_InteractWidget_C_Tick) == 0x00003C, "Wrong size on BP_InteractWidget_C_Tick");
static_assert(offsetof(BP_InteractWidget_C_Tick, MyGeometry) == 0x000000, "Member 'BP_InteractWidget_C_Tick::MyGeometry' has a wrong offset!");
static_assert(offsetof(BP_InteractWidget_C_Tick, InDeltaTime) == 0x000038, "Member 'BP_InteractWidget_C_Tick::InDeltaTime' has a wrong offset!");

// Function BP_InteractWidget.BP_InteractWidget_C.GetText_0
// 0x0030 (0x0030 - 0x0000)
struct BP_InteractWidget_C_GetText_0 final
{
public:
	class FText                                   ReturnValue;                                       // 0x0000(0x0018)(Parm, OutParm, ReturnParm)
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AMordhauActor*                          K2Node_DynamicCast_AsMordhau_Actor;                // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_InteractWidget_C_GetText_0) == 0x000008, "Wrong alignment on BP_InteractWidget_C_GetText_0");
static_assert(sizeof(BP_InteractWidget_C_GetText_0) == 0x000030, "Wrong size on BP_InteractWidget_C_GetText_0");
static_assert(offsetof(BP_InteractWidget_C_GetText_0, ReturnValue) == 0x000000, "Member 'BP_InteractWidget_C_GetText_0::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_InteractWidget_C_GetText_0, CallFunc_GetOwner_ReturnValue) == 0x000018, "Member 'BP_InteractWidget_C_GetText_0::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_InteractWidget_C_GetText_0, K2Node_DynamicCast_AsMordhau_Actor) == 0x000020, "Member 'BP_InteractWidget_C_GetText_0::K2Node_DynamicCast_AsMordhau_Actor' has a wrong offset!");
static_assert(offsetof(BP_InteractWidget_C_GetText_0, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'BP_InteractWidget_C_GetText_0::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function BP_InteractWidget.BP_InteractWidget_C.GetText_1
// 0x0030 (0x0030 - 0x0000)
struct BP_InteractWidget_C_GetText_1 final
{
public:
	class FText                                   ReturnValue;                                       // 0x0000(0x0018)(Parm, OutParm, ReturnParm)
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AMordhauActor*                          K2Node_DynamicCast_AsMordhau_Actor;                // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_InteractWidget_C_GetText_1) == 0x000008, "Wrong alignment on BP_InteractWidget_C_GetText_1");
static_assert(sizeof(BP_InteractWidget_C_GetText_1) == 0x000030, "Wrong size on BP_InteractWidget_C_GetText_1");
static_assert(offsetof(BP_InteractWidget_C_GetText_1, ReturnValue) == 0x000000, "Member 'BP_InteractWidget_C_GetText_1::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_InteractWidget_C_GetText_1, CallFunc_GetOwner_ReturnValue) == 0x000018, "Member 'BP_InteractWidget_C_GetText_1::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_InteractWidget_C_GetText_1, K2Node_DynamicCast_AsMordhau_Actor) == 0x000020, "Member 'BP_InteractWidget_C_GetText_1::K2Node_DynamicCast_AsMordhau_Actor' has a wrong offset!");
static_assert(offsetof(BP_InteractWidget_C_GetText_1, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'BP_InteractWidget_C_GetText_1::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function BP_InteractWidget.BP_InteractWidget_C.Get_BottomSegment_Visibility_0
// 0x0001 (0x0001 - 0x0000)
struct BP_InteractWidget_C_Get_BottomSegment_Visibility_0 final
{
public:
	ESlateVisibility                              ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_InteractWidget_C_Get_BottomSegment_Visibility_0) == 0x000001, "Wrong alignment on BP_InteractWidget_C_Get_BottomSegment_Visibility_0");
static_assert(sizeof(BP_InteractWidget_C_Get_BottomSegment_Visibility_0) == 0x000001, "Wrong size on BP_InteractWidget_C_Get_BottomSegment_Visibility_0");
static_assert(offsetof(BP_InteractWidget_C_Get_BottomSegment_Visibility_0, ReturnValue) == 0x000000, "Member 'BP_InteractWidget_C_Get_BottomSegment_Visibility_0::ReturnValue' has a wrong offset!");

// Function BP_InteractWidget.BP_InteractWidget_C.Get_ProgressBar_Visibility_0
// 0x0001 (0x0001 - 0x0000)
struct BP_InteractWidget_C_Get_ProgressBar_Visibility_0 final
{
public:
	ESlateVisibility                              ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_InteractWidget_C_Get_ProgressBar_Visibility_0) == 0x000001, "Wrong alignment on BP_InteractWidget_C_Get_ProgressBar_Visibility_0");
static_assert(sizeof(BP_InteractWidget_C_Get_ProgressBar_Visibility_0) == 0x000001, "Wrong size on BP_InteractWidget_C_Get_ProgressBar_Visibility_0");
static_assert(offsetof(BP_InteractWidget_C_Get_ProgressBar_Visibility_0, ReturnValue) == 0x000000, "Member 'BP_InteractWidget_C_Get_ProgressBar_Visibility_0::ReturnValue' has a wrong offset!");

// Function BP_InteractWidget.BP_InteractWidget_C.Get_TopSegment_Visibility_0
// 0x0001 (0x0001 - 0x0000)
struct BP_InteractWidget_C_Get_TopSegment_Visibility_0 final
{
public:
	ESlateVisibility                              ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_InteractWidget_C_Get_TopSegment_Visibility_0) == 0x000001, "Wrong alignment on BP_InteractWidget_C_Get_TopSegment_Visibility_0");
static_assert(sizeof(BP_InteractWidget_C_Get_TopSegment_Visibility_0) == 0x000001, "Wrong size on BP_InteractWidget_C_Get_TopSegment_Visibility_0");
static_assert(offsetof(BP_InteractWidget_C_Get_TopSegment_Visibility_0, ReturnValue) == 0x000000, "Member 'BP_InteractWidget_C_Get_TopSegment_Visibility_0::ReturnValue' has a wrong offset!");

// Function BP_InteractWidget.BP_InteractWidget_C.GetVisibility_0
// 0x0030 (0x0030 - 0x0000)
struct BP_InteractWidget_C_GetVisibility_0 final
{
public:
	ESlateVisibility                              ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_WearablePickup_C*                   K2Node_DynamicCast_AsBP_Wearable_Pickup;           // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AMordhauEquipment*                      K2Node_DynamicCast_AsMordhau_Equipment;            // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_InteractWidget_C_GetVisibility_0) == 0x000008, "Wrong alignment on BP_InteractWidget_C_GetVisibility_0");
static_assert(sizeof(BP_InteractWidget_C_GetVisibility_0) == 0x000030, "Wrong size on BP_InteractWidget_C_GetVisibility_0");
static_assert(offsetof(BP_InteractWidget_C_GetVisibility_0, ReturnValue) == 0x000000, "Member 'BP_InteractWidget_C_GetVisibility_0::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_InteractWidget_C_GetVisibility_0, CallFunc_GetOwner_ReturnValue) == 0x000008, "Member 'BP_InteractWidget_C_GetVisibility_0::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_InteractWidget_C_GetVisibility_0, K2Node_DynamicCast_AsBP_Wearable_Pickup) == 0x000010, "Member 'BP_InteractWidget_C_GetVisibility_0::K2Node_DynamicCast_AsBP_Wearable_Pickup' has a wrong offset!");
static_assert(offsetof(BP_InteractWidget_C_GetVisibility_0, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'BP_InteractWidget_C_GetVisibility_0::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_InteractWidget_C_GetVisibility_0, K2Node_DynamicCast_AsMordhau_Equipment) == 0x000020, "Member 'BP_InteractWidget_C_GetVisibility_0::K2Node_DynamicCast_AsMordhau_Equipment' has a wrong offset!");
static_assert(offsetof(BP_InteractWidget_C_GetVisibility_0, K2Node_DynamicCast_bSuccess_1) == 0x000028, "Member 'BP_InteractWidget_C_GetVisibility_0::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");

// Function BP_InteractWidget.BP_InteractWidget_C.GetText_2
// 0x0040 (0x0040 - 0x0000)
struct BP_InteractWidget_C_GetText_2 final
{
public:
	class FText                                   ReturnValue;                                       // 0x0000(0x0018)(Parm, OutParm, ReturnParm)
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AMordhauEquipment*                      K2Node_DynamicCast_AsMordhau_Equipment;            // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_WearablePickup_C*                   K2Node_DynamicCast_AsBP_Wearable_Pickup;           // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_InteractWidget_C_GetText_2) == 0x000008, "Wrong alignment on BP_InteractWidget_C_GetText_2");
static_assert(sizeof(BP_InteractWidget_C_GetText_2) == 0x000040, "Wrong size on BP_InteractWidget_C_GetText_2");
static_assert(offsetof(BP_InteractWidget_C_GetText_2, ReturnValue) == 0x000000, "Member 'BP_InteractWidget_C_GetText_2::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_InteractWidget_C_GetText_2, CallFunc_GetOwner_ReturnValue) == 0x000018, "Member 'BP_InteractWidget_C_GetText_2::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_InteractWidget_C_GetText_2, K2Node_DynamicCast_AsMordhau_Equipment) == 0x000020, "Member 'BP_InteractWidget_C_GetText_2::K2Node_DynamicCast_AsMordhau_Equipment' has a wrong offset!");
static_assert(offsetof(BP_InteractWidget_C_GetText_2, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'BP_InteractWidget_C_GetText_2::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_InteractWidget_C_GetText_2, K2Node_DynamicCast_AsBP_Wearable_Pickup) == 0x000030, "Member 'BP_InteractWidget_C_GetText_2::K2Node_DynamicCast_AsBP_Wearable_Pickup' has a wrong offset!");
static_assert(offsetof(BP_InteractWidget_C_GetText_2, K2Node_DynamicCast_bSuccess_1) == 0x000038, "Member 'BP_InteractWidget_C_GetText_2::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");

}

