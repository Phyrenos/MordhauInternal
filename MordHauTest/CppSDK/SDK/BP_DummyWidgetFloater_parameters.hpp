﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_DummyWidgetFloater

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BP_DummyWidgetFloater.BP_DummyWidgetFloater_C.ExecuteUbergraph_BP_DummyWidgetFloater
// 0x00C0 (0x00C0 - 0x0000)
struct BP_DummyWidgetFloater_C_ExecuteUbergraph_BP_DummyWidgetFloater final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Temp_float_Variable;                               // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Temp_float_Variable_1;                             // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_D[0x3];                                        // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x0010(0x0038)(IsPlainOldData, NoDestructor)
	float                                         K2Node_Event_InDeltaTime;                          // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4C[0x4];                                       // 0x004C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AMordhauCharacter*                      CallFunc_GetViewTargetCharacter_ReturnValue;       // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_59[0x7];                                       // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_DummyObjective_C*                   K2Node_DynamicCast_AsBP_Dummy_Objective;           // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0071(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_ObjectObject_ReturnValue;        // 0x0072(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_73[0x5];                                       // 0x0073(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AMordhauPlayerState*                    K2Node_DynamicCast_AsMordhau_Player_State;         // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0089(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue;               // 0x008A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x008B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         CallFunc_MapRangeClamped_ReturnValue;              // 0x008C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerCameraManager*                   CallFunc_GetPlayerCameraManager_ReturnValue;       // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Lerp_ReturnValue;                         // 0x0098(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9C[0x4];                                       // 0x009C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AMordhauCameraManager*                  K2Node_DynamicCast_AsMordhau_Camera_Manager;       // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_A9[0x3];                                       // 0x00A9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;                 // 0x00AC(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetIsInMapView_ReturnValue;               // 0x00B4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_B5[0x3];                                       // 0x00B5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Select_Default;                             // 0x00B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_DummyWidgetFloater_C_ExecuteUbergraph_BP_DummyWidgetFloater) == 0x000008, "Wrong alignment on BP_DummyWidgetFloater_C_ExecuteUbergraph_BP_DummyWidgetFloater");
static_assert(sizeof(BP_DummyWidgetFloater_C_ExecuteUbergraph_BP_DummyWidgetFloater) == 0x0000C0, "Wrong size on BP_DummyWidgetFloater_C_ExecuteUbergraph_BP_DummyWidgetFloater");
static_assert(offsetof(BP_DummyWidgetFloater_C_ExecuteUbergraph_BP_DummyWidgetFloater, EntryPoint) == 0x000000, "Member 'BP_DummyWidgetFloater_C_ExecuteUbergraph_BP_DummyWidgetFloater::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_DummyWidgetFloater_C_ExecuteUbergraph_BP_DummyWidgetFloater, Temp_float_Variable) == 0x000004, "Member 'BP_DummyWidgetFloater_C_ExecuteUbergraph_BP_DummyWidgetFloater::Temp_float_Variable' has a wrong offset!");
static_assert(offsetof(BP_DummyWidgetFloater_C_ExecuteUbergraph_BP_DummyWidgetFloater, Temp_float_Variable_1) == 0x000008, "Member 'BP_DummyWidgetFloater_C_ExecuteUbergraph_BP_DummyWidgetFloater::Temp_float_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_DummyWidgetFloater_C_ExecuteUbergraph_BP_DummyWidgetFloater, Temp_bool_Variable) == 0x00000C, "Member 'BP_DummyWidgetFloater_C_ExecuteUbergraph_BP_DummyWidgetFloater::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BP_DummyWidgetFloater_C_ExecuteUbergraph_BP_DummyWidgetFloater, K2Node_Event_MyGeometry) == 0x000010, "Member 'BP_DummyWidgetFloater_C_ExecuteUbergraph_BP_DummyWidgetFloater::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(BP_DummyWidgetFloater_C_ExecuteUbergraph_BP_DummyWidgetFloater, K2Node_Event_InDeltaTime) == 0x000048, "Member 'BP_DummyWidgetFloater_C_ExecuteUbergraph_BP_DummyWidgetFloater::K2Node_Event_InDeltaTime' has a wrong offset!");
static_assert(offsetof(BP_DummyWidgetFloater_C_ExecuteUbergraph_BP_DummyWidgetFloater, CallFunc_GetViewTargetCharacter_ReturnValue) == 0x000050, "Member 'BP_DummyWidgetFloater_C_ExecuteUbergraph_BP_DummyWidgetFloater::CallFunc_GetViewTargetCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DummyWidgetFloater_C_ExecuteUbergraph_BP_DummyWidgetFloater, CallFunc_IsValid_ReturnValue) == 0x000058, "Member 'BP_DummyWidgetFloater_C_ExecuteUbergraph_BP_DummyWidgetFloater::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DummyWidgetFloater_C_ExecuteUbergraph_BP_DummyWidgetFloater, CallFunc_GetOwner_ReturnValue) == 0x000060, "Member 'BP_DummyWidgetFloater_C_ExecuteUbergraph_BP_DummyWidgetFloater::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DummyWidgetFloater_C_ExecuteUbergraph_BP_DummyWidgetFloater, K2Node_DynamicCast_AsBP_Dummy_Objective) == 0x000068, "Member 'BP_DummyWidgetFloater_C_ExecuteUbergraph_BP_DummyWidgetFloater::K2Node_DynamicCast_AsBP_Dummy_Objective' has a wrong offset!");
static_assert(offsetof(BP_DummyWidgetFloater_C_ExecuteUbergraph_BP_DummyWidgetFloater, K2Node_DynamicCast_bSuccess) == 0x000070, "Member 'BP_DummyWidgetFloater_C_ExecuteUbergraph_BP_DummyWidgetFloater::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_DummyWidgetFloater_C_ExecuteUbergraph_BP_DummyWidgetFloater, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000071, "Member 'BP_DummyWidgetFloater_C_ExecuteUbergraph_BP_DummyWidgetFloater::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DummyWidgetFloater_C_ExecuteUbergraph_BP_DummyWidgetFloater, CallFunc_NotEqual_ObjectObject_ReturnValue) == 0x000072, "Member 'BP_DummyWidgetFloater_C_ExecuteUbergraph_BP_DummyWidgetFloater::CallFunc_NotEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DummyWidgetFloater_C_ExecuteUbergraph_BP_DummyWidgetFloater, CallFunc_GetPlayerController_ReturnValue) == 0x000078, "Member 'BP_DummyWidgetFloater_C_ExecuteUbergraph_BP_DummyWidgetFloater::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DummyWidgetFloater_C_ExecuteUbergraph_BP_DummyWidgetFloater, K2Node_DynamicCast_AsMordhau_Player_State) == 0x000080, "Member 'BP_DummyWidgetFloater_C_ExecuteUbergraph_BP_DummyWidgetFloater::K2Node_DynamicCast_AsMordhau_Player_State' has a wrong offset!");
static_assert(offsetof(BP_DummyWidgetFloater_C_ExecuteUbergraph_BP_DummyWidgetFloater, K2Node_DynamicCast_bSuccess_1) == 0x000088, "Member 'BP_DummyWidgetFloater_C_ExecuteUbergraph_BP_DummyWidgetFloater::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BP_DummyWidgetFloater_C_ExecuteUbergraph_BP_DummyWidgetFloater, CallFunc_IsValid_ReturnValue_1) == 0x000089, "Member 'BP_DummyWidgetFloater_C_ExecuteUbergraph_BP_DummyWidgetFloater::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_DummyWidgetFloater_C_ExecuteUbergraph_BP_DummyWidgetFloater, CallFunc_Conv_IntToByte_ReturnValue) == 0x00008A, "Member 'BP_DummyWidgetFloater_C_ExecuteUbergraph_BP_DummyWidgetFloater::CallFunc_Conv_IntToByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DummyWidgetFloater_C_ExecuteUbergraph_BP_DummyWidgetFloater, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x00008B, "Member 'BP_DummyWidgetFloater_C_ExecuteUbergraph_BP_DummyWidgetFloater::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_DummyWidgetFloater_C_ExecuteUbergraph_BP_DummyWidgetFloater, CallFunc_MapRangeClamped_ReturnValue) == 0x00008C, "Member 'BP_DummyWidgetFloater_C_ExecuteUbergraph_BP_DummyWidgetFloater::CallFunc_MapRangeClamped_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DummyWidgetFloater_C_ExecuteUbergraph_BP_DummyWidgetFloater, CallFunc_GetPlayerCameraManager_ReturnValue) == 0x000090, "Member 'BP_DummyWidgetFloater_C_ExecuteUbergraph_BP_DummyWidgetFloater::CallFunc_GetPlayerCameraManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DummyWidgetFloater_C_ExecuteUbergraph_BP_DummyWidgetFloater, CallFunc_Lerp_ReturnValue) == 0x000098, "Member 'BP_DummyWidgetFloater_C_ExecuteUbergraph_BP_DummyWidgetFloater::CallFunc_Lerp_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DummyWidgetFloater_C_ExecuteUbergraph_BP_DummyWidgetFloater, K2Node_DynamicCast_AsMordhau_Camera_Manager) == 0x0000A0, "Member 'BP_DummyWidgetFloater_C_ExecuteUbergraph_BP_DummyWidgetFloater::K2Node_DynamicCast_AsMordhau_Camera_Manager' has a wrong offset!");
static_assert(offsetof(BP_DummyWidgetFloater_C_ExecuteUbergraph_BP_DummyWidgetFloater, K2Node_DynamicCast_bSuccess_2) == 0x0000A8, "Member 'BP_DummyWidgetFloater_C_ExecuteUbergraph_BP_DummyWidgetFloater::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(BP_DummyWidgetFloater_C_ExecuteUbergraph_BP_DummyWidgetFloater, CallFunc_MakeVector2D_ReturnValue) == 0x0000AC, "Member 'BP_DummyWidgetFloater_C_ExecuteUbergraph_BP_DummyWidgetFloater::CallFunc_MakeVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DummyWidgetFloater_C_ExecuteUbergraph_BP_DummyWidgetFloater, CallFunc_GetIsInMapView_ReturnValue) == 0x0000B4, "Member 'BP_DummyWidgetFloater_C_ExecuteUbergraph_BP_DummyWidgetFloater::CallFunc_GetIsInMapView_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DummyWidgetFloater_C_ExecuteUbergraph_BP_DummyWidgetFloater, K2Node_Select_Default) == 0x0000B8, "Member 'BP_DummyWidgetFloater_C_ExecuteUbergraph_BP_DummyWidgetFloater::K2Node_Select_Default' has a wrong offset!");

// Function BP_DummyWidgetFloater.BP_DummyWidgetFloater_C.Tick
// 0x003C (0x003C - 0x0000)
struct BP_DummyWidgetFloater_C_Tick final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                         InDeltaTime;                                       // 0x0038(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_DummyWidgetFloater_C_Tick) == 0x000004, "Wrong alignment on BP_DummyWidgetFloater_C_Tick");
static_assert(sizeof(BP_DummyWidgetFloater_C_Tick) == 0x00003C, "Wrong size on BP_DummyWidgetFloater_C_Tick");
static_assert(offsetof(BP_DummyWidgetFloater_C_Tick, MyGeometry) == 0x000000, "Member 'BP_DummyWidgetFloater_C_Tick::MyGeometry' has a wrong offset!");
static_assert(offsetof(BP_DummyWidgetFloater_C_Tick, InDeltaTime) == 0x000038, "Member 'BP_DummyWidgetFloater_C_Tick::InDeltaTime' has a wrong offset!");

}

