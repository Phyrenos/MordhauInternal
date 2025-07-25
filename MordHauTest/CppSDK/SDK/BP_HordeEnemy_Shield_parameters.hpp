﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_HordeEnemy_Shield

#include "Basic.hpp"


namespace SDK::Params
{

// Function BP_HordeEnemy_Shield.BP_HordeEnemy_Shield_C.ExecuteUbergraph_BP_HordeEnemy_Shield
// 0x0070 (0x0070 - 0x0000)
struct BP_HordeEnemy_Shield_C_ExecuteUbergraph_BP_HordeEnemy_Shield final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMordhauMotion*                         CallFunc_GetMotion_ReturnValue;                    // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UIdleMotion*                            K2Node_DynamicCast_AsIdle_Motion;                  // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_19[0x3];                                       // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Event_DeltaTime;                            // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AController*                            CallFunc_GetController_ReturnValue;                // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_MordhauAIController_C*              K2Node_DynamicCast_AsBP_Mordhau_AIController;      // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_31[0x7];                                       // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AMordhauCharacter*                      CallFunc_GetClosestEnemy_ReturnValue;              // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_41[0x3];                                       // 0x0041(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetDistanceTo_ReturnValue;                // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_FloatFloat_ReturnValue;         // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetIsDead_ReturnValue;                    // 0x0049(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_RequestParry_ReturnValue;                 // 0x004A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4B[0x1];                                       // 0x004B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMordhauMotion*                         CallFunc_GetMotion_ReturnValue_1;                  // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_FloatFloat_ReturnValue;              // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_59[0x7];                                       // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAttackMotion*                          K2Node_DynamicCast_AsAttack_Motion;                // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0069(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_HordeEnemy_Shield_C_ExecuteUbergraph_BP_HordeEnemy_Shield) == 0x000008, "Wrong alignment on BP_HordeEnemy_Shield_C_ExecuteUbergraph_BP_HordeEnemy_Shield");
static_assert(sizeof(BP_HordeEnemy_Shield_C_ExecuteUbergraph_BP_HordeEnemy_Shield) == 0x000070, "Wrong size on BP_HordeEnemy_Shield_C_ExecuteUbergraph_BP_HordeEnemy_Shield");
static_assert(offsetof(BP_HordeEnemy_Shield_C_ExecuteUbergraph_BP_HordeEnemy_Shield, EntryPoint) == 0x000000, "Member 'BP_HordeEnemy_Shield_C_ExecuteUbergraph_BP_HordeEnemy_Shield::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_HordeEnemy_Shield_C_ExecuteUbergraph_BP_HordeEnemy_Shield, CallFunc_GetMotion_ReturnValue) == 0x000008, "Member 'BP_HordeEnemy_Shield_C_ExecuteUbergraph_BP_HordeEnemy_Shield::CallFunc_GetMotion_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_HordeEnemy_Shield_C_ExecuteUbergraph_BP_HordeEnemy_Shield, K2Node_DynamicCast_AsIdle_Motion) == 0x000010, "Member 'BP_HordeEnemy_Shield_C_ExecuteUbergraph_BP_HordeEnemy_Shield::K2Node_DynamicCast_AsIdle_Motion' has a wrong offset!");
static_assert(offsetof(BP_HordeEnemy_Shield_C_ExecuteUbergraph_BP_HordeEnemy_Shield, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'BP_HordeEnemy_Shield_C_ExecuteUbergraph_BP_HordeEnemy_Shield::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_HordeEnemy_Shield_C_ExecuteUbergraph_BP_HordeEnemy_Shield, K2Node_Event_DeltaTime) == 0x00001C, "Member 'BP_HordeEnemy_Shield_C_ExecuteUbergraph_BP_HordeEnemy_Shield::K2Node_Event_DeltaTime' has a wrong offset!");
static_assert(offsetof(BP_HordeEnemy_Shield_C_ExecuteUbergraph_BP_HordeEnemy_Shield, CallFunc_GetController_ReturnValue) == 0x000020, "Member 'BP_HordeEnemy_Shield_C_ExecuteUbergraph_BP_HordeEnemy_Shield::CallFunc_GetController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_HordeEnemy_Shield_C_ExecuteUbergraph_BP_HordeEnemy_Shield, K2Node_DynamicCast_AsBP_Mordhau_AIController) == 0x000028, "Member 'BP_HordeEnemy_Shield_C_ExecuteUbergraph_BP_HordeEnemy_Shield::K2Node_DynamicCast_AsBP_Mordhau_AIController' has a wrong offset!");
static_assert(offsetof(BP_HordeEnemy_Shield_C_ExecuteUbergraph_BP_HordeEnemy_Shield, K2Node_DynamicCast_bSuccess_1) == 0x000030, "Member 'BP_HordeEnemy_Shield_C_ExecuteUbergraph_BP_HordeEnemy_Shield::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BP_HordeEnemy_Shield_C_ExecuteUbergraph_BP_HordeEnemy_Shield, CallFunc_GetClosestEnemy_ReturnValue) == 0x000038, "Member 'BP_HordeEnemy_Shield_C_ExecuteUbergraph_BP_HordeEnemy_Shield::CallFunc_GetClosestEnemy_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_HordeEnemy_Shield_C_ExecuteUbergraph_BP_HordeEnemy_Shield, CallFunc_IsValid_ReturnValue) == 0x000040, "Member 'BP_HordeEnemy_Shield_C_ExecuteUbergraph_BP_HordeEnemy_Shield::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_HordeEnemy_Shield_C_ExecuteUbergraph_BP_HordeEnemy_Shield, CallFunc_GetDistanceTo_ReturnValue) == 0x000044, "Member 'BP_HordeEnemy_Shield_C_ExecuteUbergraph_BP_HordeEnemy_Shield::CallFunc_GetDistanceTo_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_HordeEnemy_Shield_C_ExecuteUbergraph_BP_HordeEnemy_Shield, CallFunc_LessEqual_FloatFloat_ReturnValue) == 0x000048, "Member 'BP_HordeEnemy_Shield_C_ExecuteUbergraph_BP_HordeEnemy_Shield::CallFunc_LessEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_HordeEnemy_Shield_C_ExecuteUbergraph_BP_HordeEnemy_Shield, CallFunc_GetIsDead_ReturnValue) == 0x000049, "Member 'BP_HordeEnemy_Shield_C_ExecuteUbergraph_BP_HordeEnemy_Shield::CallFunc_GetIsDead_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_HordeEnemy_Shield_C_ExecuteUbergraph_BP_HordeEnemy_Shield, CallFunc_RequestParry_ReturnValue) == 0x00004A, "Member 'BP_HordeEnemy_Shield_C_ExecuteUbergraph_BP_HordeEnemy_Shield::CallFunc_RequestParry_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_HordeEnemy_Shield_C_ExecuteUbergraph_BP_HordeEnemy_Shield, CallFunc_Add_FloatFloat_ReturnValue) == 0x00004C, "Member 'BP_HordeEnemy_Shield_C_ExecuteUbergraph_BP_HordeEnemy_Shield::CallFunc_Add_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_HordeEnemy_Shield_C_ExecuteUbergraph_BP_HordeEnemy_Shield, CallFunc_GetMotion_ReturnValue_1) == 0x000050, "Member 'BP_HordeEnemy_Shield_C_ExecuteUbergraph_BP_HordeEnemy_Shield::CallFunc_GetMotion_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_HordeEnemy_Shield_C_ExecuteUbergraph_BP_HordeEnemy_Shield, CallFunc_Less_FloatFloat_ReturnValue) == 0x000058, "Member 'BP_HordeEnemy_Shield_C_ExecuteUbergraph_BP_HordeEnemy_Shield::CallFunc_Less_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_HordeEnemy_Shield_C_ExecuteUbergraph_BP_HordeEnemy_Shield, K2Node_DynamicCast_AsAttack_Motion) == 0x000060, "Member 'BP_HordeEnemy_Shield_C_ExecuteUbergraph_BP_HordeEnemy_Shield::K2Node_DynamicCast_AsAttack_Motion' has a wrong offset!");
static_assert(offsetof(BP_HordeEnemy_Shield_C_ExecuteUbergraph_BP_HordeEnemy_Shield, K2Node_DynamicCast_bSuccess_2) == 0x000068, "Member 'BP_HordeEnemy_Shield_C_ExecuteUbergraph_BP_HordeEnemy_Shield::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(BP_HordeEnemy_Shield_C_ExecuteUbergraph_BP_HordeEnemy_Shield, CallFunc_BooleanAND_ReturnValue) == 0x000069, "Member 'BP_HordeEnemy_Shield_C_ExecuteUbergraph_BP_HordeEnemy_Shield::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

// Function BP_HordeEnemy_Shield.BP_HordeEnemy_Shield_C.BPLODTick
// 0x0004 (0x0004 - 0x0000)
struct BP_HordeEnemy_Shield_C_BPLODTick final
{
public:
	float                                         DeltaTime;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_HordeEnemy_Shield_C_BPLODTick) == 0x000004, "Wrong alignment on BP_HordeEnemy_Shield_C_BPLODTick");
static_assert(sizeof(BP_HordeEnemy_Shield_C_BPLODTick) == 0x000004, "Wrong size on BP_HordeEnemy_Shield_C_BPLODTick");
static_assert(offsetof(BP_HordeEnemy_Shield_C_BPLODTick, DeltaTime) == 0x000000, "Member 'BP_HordeEnemy_Shield_C_BPLODTick::DeltaTime' has a wrong offset!");

}

