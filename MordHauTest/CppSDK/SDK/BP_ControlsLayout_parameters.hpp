﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ControlsLayout

#include "Basic.hpp"

#include "MordhauOnlineSubsystem_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BP_ControlsLayout.BP_ControlsLayout_C.ExecuteUbergraph_BP_ControlsLayout
// 0x0038 (0x0038 - 0x0000)
struct BP_ControlsLayout_C_ExecuteUbergraph_BP_ControlsLayout final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPlatformSpecific                             CallFunc_GetPlatformSpecific_ReturnValue;          // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6[0x2];                                        // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetChildrenCount_ReturnValue;             // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_ControlsField_C*                    K2Node_DynamicCast_AsBP_Controls_Field;            // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_31[0x3];                                       // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ControlsLayout_C_ExecuteUbergraph_BP_ControlsLayout) == 0x000008, "Wrong alignment on BP_ControlsLayout_C_ExecuteUbergraph_BP_ControlsLayout");
static_assert(sizeof(BP_ControlsLayout_C_ExecuteUbergraph_BP_ControlsLayout) == 0x000038, "Wrong size on BP_ControlsLayout_C_ExecuteUbergraph_BP_ControlsLayout");
static_assert(offsetof(BP_ControlsLayout_C_ExecuteUbergraph_BP_ControlsLayout, EntryPoint) == 0x000000, "Member 'BP_ControlsLayout_C_ExecuteUbergraph_BP_ControlsLayout::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_ControlsLayout_C_ExecuteUbergraph_BP_ControlsLayout, CallFunc_GetPlatformSpecific_ReturnValue) == 0x000004, "Member 'BP_ControlsLayout_C_ExecuteUbergraph_BP_ControlsLayout::CallFunc_GetPlatformSpecific_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ControlsLayout_C_ExecuteUbergraph_BP_ControlsLayout, K2Node_SwitchEnum_CmpSuccess) == 0x000005, "Member 'BP_ControlsLayout_C_ExecuteUbergraph_BP_ControlsLayout::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(BP_ControlsLayout_C_ExecuteUbergraph_BP_ControlsLayout, CallFunc_GetChildrenCount_ReturnValue) == 0x000008, "Member 'BP_ControlsLayout_C_ExecuteUbergraph_BP_ControlsLayout::CallFunc_GetChildrenCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ControlsLayout_C_ExecuteUbergraph_BP_ControlsLayout, Temp_int_Variable) == 0x00000C, "Member 'BP_ControlsLayout_C_ExecuteUbergraph_BP_ControlsLayout::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(BP_ControlsLayout_C_ExecuteUbergraph_BP_ControlsLayout, CallFunc_Subtract_IntInt_ReturnValue) == 0x000010, "Member 'BP_ControlsLayout_C_ExecuteUbergraph_BP_ControlsLayout::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ControlsLayout_C_ExecuteUbergraph_BP_ControlsLayout, CallFunc_GetChildAt_ReturnValue) == 0x000018, "Member 'BP_ControlsLayout_C_ExecuteUbergraph_BP_ControlsLayout::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ControlsLayout_C_ExecuteUbergraph_BP_ControlsLayout, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000020, "Member 'BP_ControlsLayout_C_ExecuteUbergraph_BP_ControlsLayout::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ControlsLayout_C_ExecuteUbergraph_BP_ControlsLayout, K2Node_DynamicCast_AsBP_Controls_Field) == 0x000028, "Member 'BP_ControlsLayout_C_ExecuteUbergraph_BP_ControlsLayout::K2Node_DynamicCast_AsBP_Controls_Field' has a wrong offset!");
static_assert(offsetof(BP_ControlsLayout_C_ExecuteUbergraph_BP_ControlsLayout, K2Node_DynamicCast_bSuccess) == 0x000030, "Member 'BP_ControlsLayout_C_ExecuteUbergraph_BP_ControlsLayout::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_ControlsLayout_C_ExecuteUbergraph_BP_ControlsLayout, CallFunc_Add_IntInt_ReturnValue) == 0x000034, "Member 'BP_ControlsLayout_C_ExecuteUbergraph_BP_ControlsLayout::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");

// Function BP_ControlsLayout.BP_ControlsLayout_C.SwitchLocationOfControlsFields
// 0x0030 (0x0030 - 0x0000)
struct BP_ControlsLayout_C_SwitchLocationOfControlsFields final
{
public:
	class UBP_ControlsField_C*                    ControlsField1;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_ControlsField_C*                    ControlsField2;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue_1;           // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_GetPosition_ReturnValue;                  // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_GetPosition_ReturnValue_1;                // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ControlsLayout_C_SwitchLocationOfControlsFields) == 0x000008, "Wrong alignment on BP_ControlsLayout_C_SwitchLocationOfControlsFields");
static_assert(sizeof(BP_ControlsLayout_C_SwitchLocationOfControlsFields) == 0x000030, "Wrong size on BP_ControlsLayout_C_SwitchLocationOfControlsFields");
static_assert(offsetof(BP_ControlsLayout_C_SwitchLocationOfControlsFields, ControlsField1) == 0x000000, "Member 'BP_ControlsLayout_C_SwitchLocationOfControlsFields::ControlsField1' has a wrong offset!");
static_assert(offsetof(BP_ControlsLayout_C_SwitchLocationOfControlsFields, ControlsField2) == 0x000008, "Member 'BP_ControlsLayout_C_SwitchLocationOfControlsFields::ControlsField2' has a wrong offset!");
static_assert(offsetof(BP_ControlsLayout_C_SwitchLocationOfControlsFields, CallFunc_SlotAsCanvasSlot_ReturnValue) == 0x000010, "Member 'BP_ControlsLayout_C_SwitchLocationOfControlsFields::CallFunc_SlotAsCanvasSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ControlsLayout_C_SwitchLocationOfControlsFields, CallFunc_SlotAsCanvasSlot_ReturnValue_1) == 0x000018, "Member 'BP_ControlsLayout_C_SwitchLocationOfControlsFields::CallFunc_SlotAsCanvasSlot_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ControlsLayout_C_SwitchLocationOfControlsFields, CallFunc_GetPosition_ReturnValue) == 0x000020, "Member 'BP_ControlsLayout_C_SwitchLocationOfControlsFields::CallFunc_GetPosition_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ControlsLayout_C_SwitchLocationOfControlsFields, CallFunc_GetPosition_ReturnValue_1) == 0x000028, "Member 'BP_ControlsLayout_C_SwitchLocationOfControlsFields::CallFunc_GetPosition_ReturnValue_1' has a wrong offset!");

// Function BP_ControlsLayout.BP_ControlsLayout_C.CreateControllerImageWidget
// 0x0018 (0x0018 - 0x0000)
struct BP_ControlsLayout_C_CreateControllerImageWidget final
{
public:
	EPlatformSpecific                             CallFunc_GetPlatformSpecific_ReturnValue;          // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_ControllerLayoutImage_C*            CallFunc_Create_ReturnValue;                       // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue;                     // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ControlsLayout_C_CreateControllerImageWidget) == 0x000008, "Wrong alignment on BP_ControlsLayout_C_CreateControllerImageWidget");
static_assert(sizeof(BP_ControlsLayout_C_CreateControllerImageWidget) == 0x000018, "Wrong size on BP_ControlsLayout_C_CreateControllerImageWidget");
static_assert(offsetof(BP_ControlsLayout_C_CreateControllerImageWidget, CallFunc_GetPlatformSpecific_ReturnValue) == 0x000000, "Member 'BP_ControlsLayout_C_CreateControllerImageWidget::CallFunc_GetPlatformSpecific_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ControlsLayout_C_CreateControllerImageWidget, CallFunc_Create_ReturnValue) == 0x000008, "Member 'BP_ControlsLayout_C_CreateControllerImageWidget::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ControlsLayout_C_CreateControllerImageWidget, CallFunc_AddChild_ReturnValue) == 0x000010, "Member 'BP_ControlsLayout_C_CreateControllerImageWidget::CallFunc_AddChild_ReturnValue' has a wrong offset!");

}

