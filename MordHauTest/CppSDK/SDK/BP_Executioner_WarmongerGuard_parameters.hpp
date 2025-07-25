﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Executioner_WarmongerGuard

#include "Basic.hpp"


namespace SDK::Params
{

// Function BP_Executioner_WarmongerGuard.BP_Executioner_WarmongerGuard_C.ExecuteUbergraph_BP_Executioner_WarmongerGuard
// 0x0010 (0x0010 - 0x0000)
struct BP_Executioner_WarmongerGuard_C_ExecuteUbergraph_BP_Executioner_WarmongerGuard final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_Event_OtherActor;                           // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Executioner_WarmongerGuard_C_ExecuteUbergraph_BP_Executioner_WarmongerGuard) == 0x000008, "Wrong alignment on BP_Executioner_WarmongerGuard_C_ExecuteUbergraph_BP_Executioner_WarmongerGuard");
static_assert(sizeof(BP_Executioner_WarmongerGuard_C_ExecuteUbergraph_BP_Executioner_WarmongerGuard) == 0x000010, "Wrong size on BP_Executioner_WarmongerGuard_C_ExecuteUbergraph_BP_Executioner_WarmongerGuard");
static_assert(offsetof(BP_Executioner_WarmongerGuard_C_ExecuteUbergraph_BP_Executioner_WarmongerGuard, EntryPoint) == 0x000000, "Member 'BP_Executioner_WarmongerGuard_C_ExecuteUbergraph_BP_Executioner_WarmongerGuard::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_Executioner_WarmongerGuard_C_ExecuteUbergraph_BP_Executioner_WarmongerGuard, K2Node_Event_DeltaSeconds) == 0x000004, "Member 'BP_Executioner_WarmongerGuard_C_ExecuteUbergraph_BP_Executioner_WarmongerGuard::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(BP_Executioner_WarmongerGuard_C_ExecuteUbergraph_BP_Executioner_WarmongerGuard, K2Node_Event_OtherActor) == 0x000008, "Member 'BP_Executioner_WarmongerGuard_C_ExecuteUbergraph_BP_Executioner_WarmongerGuard::K2Node_Event_OtherActor' has a wrong offset!");

// Function BP_Executioner_WarmongerGuard.BP_Executioner_WarmongerGuard_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct BP_Executioner_WarmongerGuard_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Executioner_WarmongerGuard_C_ReceiveTick) == 0x000004, "Wrong alignment on BP_Executioner_WarmongerGuard_C_ReceiveTick");
static_assert(sizeof(BP_Executioner_WarmongerGuard_C_ReceiveTick) == 0x000004, "Wrong size on BP_Executioner_WarmongerGuard_C_ReceiveTick");
static_assert(offsetof(BP_Executioner_WarmongerGuard_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'BP_Executioner_WarmongerGuard_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

// Function BP_Executioner_WarmongerGuard.BP_Executioner_WarmongerGuard_C.ReceiveActorBeginOverlap
// 0x0008 (0x0008 - 0x0000)
struct BP_Executioner_WarmongerGuard_C_ReceiveActorBeginOverlap final
{
public:
	class AActor*                                 OtherActor;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Executioner_WarmongerGuard_C_ReceiveActorBeginOverlap) == 0x000008, "Wrong alignment on BP_Executioner_WarmongerGuard_C_ReceiveActorBeginOverlap");
static_assert(sizeof(BP_Executioner_WarmongerGuard_C_ReceiveActorBeginOverlap) == 0x000008, "Wrong size on BP_Executioner_WarmongerGuard_C_ReceiveActorBeginOverlap");
static_assert(offsetof(BP_Executioner_WarmongerGuard_C_ReceiveActorBeginOverlap, OtherActor) == 0x000000, "Member 'BP_Executioner_WarmongerGuard_C_ReceiveActorBeginOverlap::OtherActor' has a wrong offset!");

}

