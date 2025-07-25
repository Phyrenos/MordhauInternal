﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_BlessingProjectile_Chamber

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_RockProjectile_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_BlessingProjectile_Chamber.BP_BlessingProjectile_Chamber_C
// 0x0030 (0x0890 - 0x0860)
class ABP_BlessingProjectile_Chamber_C final : public ABP_RockProjectile_C
{
public:
	uint8                                         Pad_854[0x4];                                      // 0x0854(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_BlessingProjectile_Chamber_C;    // 0x0858(0x0008)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UStaticMeshComponent*                   SlashMesh1;                                        // 0x0860(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SlashMesh;                                         // 0x0868(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         TimelineBlend_SlashMask_CE2F7C21483D9A5A94F908A10FEEF80B; // 0x0870(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            TimelineBlend__Direction_CE2F7C21483D9A5A94F908A10FEEF80B; // 0x0874(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	uint8                                         Pad_875[0x3];                                      // 0x0875(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     TimelineBlend;                                     // 0x0878(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class AController*                            Controller;                                        // 0x0880(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_BlessingProjectile_Chamber(int32 EntryPoint);
	void ReceiveBeginPlay();
	void OnProjectileHit(const struct FVector& HitLocation, const struct FVector& HitNormal, float BounceForce, uint8 Surface, bool bHasHitWorld, bool bHasStopped);
	void TimelineBlend__UpdateFunc();
	void TimelineBlend__FinishedFunc();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_BlessingProjectile_Chamber_C">();
	}
	static class ABP_BlessingProjectile_Chamber_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_BlessingProjectile_Chamber_C>();
	}
};
static_assert(alignof(ABP_BlessingProjectile_Chamber_C) == 0x000010, "Wrong alignment on ABP_BlessingProjectile_Chamber_C");
static_assert(sizeof(ABP_BlessingProjectile_Chamber_C) == 0x000890, "Wrong size on ABP_BlessingProjectile_Chamber_C");
static_assert(offsetof(ABP_BlessingProjectile_Chamber_C, UberGraphFrame_BP_BlessingProjectile_Chamber_C) == 0x000858, "Member 'ABP_BlessingProjectile_Chamber_C::UberGraphFrame_BP_BlessingProjectile_Chamber_C' has a wrong offset!");
static_assert(offsetof(ABP_BlessingProjectile_Chamber_C, SlashMesh1) == 0x000860, "Member 'ABP_BlessingProjectile_Chamber_C::SlashMesh1' has a wrong offset!");
static_assert(offsetof(ABP_BlessingProjectile_Chamber_C, SlashMesh) == 0x000868, "Member 'ABP_BlessingProjectile_Chamber_C::SlashMesh' has a wrong offset!");
static_assert(offsetof(ABP_BlessingProjectile_Chamber_C, TimelineBlend_SlashMask_CE2F7C21483D9A5A94F908A10FEEF80B) == 0x000870, "Member 'ABP_BlessingProjectile_Chamber_C::TimelineBlend_SlashMask_CE2F7C21483D9A5A94F908A10FEEF80B' has a wrong offset!");
static_assert(offsetof(ABP_BlessingProjectile_Chamber_C, TimelineBlend__Direction_CE2F7C21483D9A5A94F908A10FEEF80B) == 0x000874, "Member 'ABP_BlessingProjectile_Chamber_C::TimelineBlend__Direction_CE2F7C21483D9A5A94F908A10FEEF80B' has a wrong offset!");
static_assert(offsetof(ABP_BlessingProjectile_Chamber_C, TimelineBlend) == 0x000878, "Member 'ABP_BlessingProjectile_Chamber_C::TimelineBlend' has a wrong offset!");
static_assert(offsetof(ABP_BlessingProjectile_Chamber_C, Controller) == 0x000880, "Member 'ABP_BlessingProjectile_Chamber_C::Controller' has a wrong offset!");

}

