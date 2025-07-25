﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_LongbowArrow_DIH

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BP_LongbowArrow_DIH.BP_LongbowArrow_DIH_C.ExecuteUbergraph_BP_LongbowArrow_DIH
// 0x0058 (0x0058 - 0x0000)
struct BP_LongbowArrow_DIH_C_ExecuteUbergraph_BP_LongbowArrow_DIH final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                K2Node_Event_HitLocation;                          // 0x0008(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                K2Node_Event_HitNormal;                            // 0x0014(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_BounceForce;                          // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         K2Node_Event_Surface;                              // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bHasHitWorld;                         // 0x0025(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Event_bHasStopped;                          // 0x0026(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_27[0x1];                                       // 0x0027(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class AController*                            CallFunc_GetProjectileOwningController_ReturnValue; // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_HordePlayerController_C*            K2Node_DynamicCast_AsBP_Horde_Player_Controller;   // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3A[0x6];                                       // 0x003A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class AController*                            CallFunc_GetProjectileOwningController_ReturnValue_1; // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_HordePlayerController_C*            K2Node_DynamicCast_AsBP_Horde_Player_Controller_1; // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_LongbowArrow_DIH_C_ExecuteUbergraph_BP_LongbowArrow_DIH) == 0x000008, "Wrong alignment on BP_LongbowArrow_DIH_C_ExecuteUbergraph_BP_LongbowArrow_DIH");
static_assert(sizeof(BP_LongbowArrow_DIH_C_ExecuteUbergraph_BP_LongbowArrow_DIH) == 0x000058, "Wrong size on BP_LongbowArrow_DIH_C_ExecuteUbergraph_BP_LongbowArrow_DIH");
static_assert(offsetof(BP_LongbowArrow_DIH_C_ExecuteUbergraph_BP_LongbowArrow_DIH, EntryPoint) == 0x000000, "Member 'BP_LongbowArrow_DIH_C_ExecuteUbergraph_BP_LongbowArrow_DIH::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_LongbowArrow_DIH_C_ExecuteUbergraph_BP_LongbowArrow_DIH, CallFunc_MakeLiteralByte_ReturnValue) == 0x000004, "Member 'BP_LongbowArrow_DIH_C_ExecuteUbergraph_BP_LongbowArrow_DIH::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LongbowArrow_DIH_C_ExecuteUbergraph_BP_LongbowArrow_DIH, K2Node_Event_HitLocation) == 0x000008, "Member 'BP_LongbowArrow_DIH_C_ExecuteUbergraph_BP_LongbowArrow_DIH::K2Node_Event_HitLocation' has a wrong offset!");
static_assert(offsetof(BP_LongbowArrow_DIH_C_ExecuteUbergraph_BP_LongbowArrow_DIH, K2Node_Event_HitNormal) == 0x000014, "Member 'BP_LongbowArrow_DIH_C_ExecuteUbergraph_BP_LongbowArrow_DIH::K2Node_Event_HitNormal' has a wrong offset!");
static_assert(offsetof(BP_LongbowArrow_DIH_C_ExecuteUbergraph_BP_LongbowArrow_DIH, K2Node_Event_BounceForce) == 0x000020, "Member 'BP_LongbowArrow_DIH_C_ExecuteUbergraph_BP_LongbowArrow_DIH::K2Node_Event_BounceForce' has a wrong offset!");
static_assert(offsetof(BP_LongbowArrow_DIH_C_ExecuteUbergraph_BP_LongbowArrow_DIH, K2Node_Event_Surface) == 0x000024, "Member 'BP_LongbowArrow_DIH_C_ExecuteUbergraph_BP_LongbowArrow_DIH::K2Node_Event_Surface' has a wrong offset!");
static_assert(offsetof(BP_LongbowArrow_DIH_C_ExecuteUbergraph_BP_LongbowArrow_DIH, K2Node_Event_bHasHitWorld) == 0x000025, "Member 'BP_LongbowArrow_DIH_C_ExecuteUbergraph_BP_LongbowArrow_DIH::K2Node_Event_bHasHitWorld' has a wrong offset!");
static_assert(offsetof(BP_LongbowArrow_DIH_C_ExecuteUbergraph_BP_LongbowArrow_DIH, K2Node_Event_bHasStopped) == 0x000026, "Member 'BP_LongbowArrow_DIH_C_ExecuteUbergraph_BP_LongbowArrow_DIH::K2Node_Event_bHasStopped' has a wrong offset!");
static_assert(offsetof(BP_LongbowArrow_DIH_C_ExecuteUbergraph_BP_LongbowArrow_DIH, CallFunc_GetProjectileOwningController_ReturnValue) == 0x000028, "Member 'BP_LongbowArrow_DIH_C_ExecuteUbergraph_BP_LongbowArrow_DIH::CallFunc_GetProjectileOwningController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LongbowArrow_DIH_C_ExecuteUbergraph_BP_LongbowArrow_DIH, K2Node_DynamicCast_AsBP_Horde_Player_Controller) == 0x000030, "Member 'BP_LongbowArrow_DIH_C_ExecuteUbergraph_BP_LongbowArrow_DIH::K2Node_DynamicCast_AsBP_Horde_Player_Controller' has a wrong offset!");
static_assert(offsetof(BP_LongbowArrow_DIH_C_ExecuteUbergraph_BP_LongbowArrow_DIH, K2Node_DynamicCast_bSuccess) == 0x000038, "Member 'BP_LongbowArrow_DIH_C_ExecuteUbergraph_BP_LongbowArrow_DIH::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_LongbowArrow_DIH_C_ExecuteUbergraph_BP_LongbowArrow_DIH, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000039, "Member 'BP_LongbowArrow_DIH_C_ExecuteUbergraph_BP_LongbowArrow_DIH::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LongbowArrow_DIH_C_ExecuteUbergraph_BP_LongbowArrow_DIH, CallFunc_GetProjectileOwningController_ReturnValue_1) == 0x000040, "Member 'BP_LongbowArrow_DIH_C_ExecuteUbergraph_BP_LongbowArrow_DIH::CallFunc_GetProjectileOwningController_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_LongbowArrow_DIH_C_ExecuteUbergraph_BP_LongbowArrow_DIH, K2Node_DynamicCast_AsBP_Horde_Player_Controller_1) == 0x000048, "Member 'BP_LongbowArrow_DIH_C_ExecuteUbergraph_BP_LongbowArrow_DIH::K2Node_DynamicCast_AsBP_Horde_Player_Controller_1' has a wrong offset!");
static_assert(offsetof(BP_LongbowArrow_DIH_C_ExecuteUbergraph_BP_LongbowArrow_DIH, K2Node_DynamicCast_bSuccess_1) == 0x000050, "Member 'BP_LongbowArrow_DIH_C_ExecuteUbergraph_BP_LongbowArrow_DIH::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");

// Function BP_LongbowArrow_DIH.BP_LongbowArrow_DIH_C.OnProjectileHit
// 0x0020 (0x0020 - 0x0000)
struct BP_LongbowArrow_DIH_C_OnProjectileHit final
{
public:
	struct FVector                                HitLocation;                                       // 0x0000(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                HitNormal;                                         // 0x000C(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         BounceForce;                                       // 0x0018(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Surface;                                           // 0x001C(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bHasHitWorld;                                      // 0x001D(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bHasStopped;                                       // 0x001E(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_LongbowArrow_DIH_C_OnProjectileHit) == 0x000004, "Wrong alignment on BP_LongbowArrow_DIH_C_OnProjectileHit");
static_assert(sizeof(BP_LongbowArrow_DIH_C_OnProjectileHit) == 0x000020, "Wrong size on BP_LongbowArrow_DIH_C_OnProjectileHit");
static_assert(offsetof(BP_LongbowArrow_DIH_C_OnProjectileHit, HitLocation) == 0x000000, "Member 'BP_LongbowArrow_DIH_C_OnProjectileHit::HitLocation' has a wrong offset!");
static_assert(offsetof(BP_LongbowArrow_DIH_C_OnProjectileHit, HitNormal) == 0x00000C, "Member 'BP_LongbowArrow_DIH_C_OnProjectileHit::HitNormal' has a wrong offset!");
static_assert(offsetof(BP_LongbowArrow_DIH_C_OnProjectileHit, BounceForce) == 0x000018, "Member 'BP_LongbowArrow_DIH_C_OnProjectileHit::BounceForce' has a wrong offset!");
static_assert(offsetof(BP_LongbowArrow_DIH_C_OnProjectileHit, Surface) == 0x00001C, "Member 'BP_LongbowArrow_DIH_C_OnProjectileHit::Surface' has a wrong offset!");
static_assert(offsetof(BP_LongbowArrow_DIH_C_OnProjectileHit, bHasHitWorld) == 0x00001D, "Member 'BP_LongbowArrow_DIH_C_OnProjectileHit::bHasHitWorld' has a wrong offset!");
static_assert(offsetof(BP_LongbowArrow_DIH_C_OnProjectileHit, bHasStopped) == 0x00001E, "Member 'BP_LongbowArrow_DIH_C_OnProjectileHit::bHasStopped' has a wrong offset!");

}

