﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_BlessingSlashProjectile

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_MordhauProjectile_classes.hpp"
#include "Mordhau_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_BlessingSlashProjectile.BP_BlessingSlashProjectile_C
// 0x0050 (0x08B0 - 0x0860)
class ABP_BlessingSlashProjectile_C : public ABP_MordhauProjectile_C
{
public:
	uint8                                         Pad_854[0x4];                                      // 0x0854(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_BlessingSlashProjectile_C;       // 0x0858(0x0008)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UParticleSystemComponent*               P_SlashImpact;                                     // 0x0860(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SlashMesh1;                                        // 0x0868(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPointLightComponent*                   PointLight;                                        // 0x0870(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               P_SlashTrail;                                      // 0x0878(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SlashMesh;                                         // 0x0880(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         SwipeProgress_SlashMask_9D768163484DDED4CE2D84A67D1A4161; // 0x0888(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            SwipeProgress__Direction_9D768163484DDED4CE2D84A67D1A4161; // 0x088C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	uint8                                         Pad_88D[0x3];                                      // 0x088D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     SwipeProgress;                                     // 0x0890(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	float                                         LifeTime;                                          // 0x0898(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         MaxAngle;                                          // 0x089C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         MaxBrightness;                                     // 0x08A0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_BlessingSlashProjectile(int32 EntryPoint);
	void ReceiveActorBeginOverlap(class AActor* OtherActor);
	void SetAngleMulti(EAttackMove Direction, float Angle);
	void ReceiveBeginPlay();
	void OnProjectileHit(const struct FVector& HitLocation, const struct FVector& HitNormal, float BounceForce, uint8 Surface, bool bHasHitWorld, bool bHasStopped);
	void SwipeProgress__UpdateFunc();
	void SwipeProgress__FinishedFunc();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_BlessingSlashProjectile_C">();
	}
	static class ABP_BlessingSlashProjectile_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_BlessingSlashProjectile_C>();
	}
};
static_assert(alignof(ABP_BlessingSlashProjectile_C) == 0x000010, "Wrong alignment on ABP_BlessingSlashProjectile_C");
static_assert(sizeof(ABP_BlessingSlashProjectile_C) == 0x0008B0, "Wrong size on ABP_BlessingSlashProjectile_C");
static_assert(offsetof(ABP_BlessingSlashProjectile_C, UberGraphFrame_BP_BlessingSlashProjectile_C) == 0x000858, "Member 'ABP_BlessingSlashProjectile_C::UberGraphFrame_BP_BlessingSlashProjectile_C' has a wrong offset!");
static_assert(offsetof(ABP_BlessingSlashProjectile_C, P_SlashImpact) == 0x000860, "Member 'ABP_BlessingSlashProjectile_C::P_SlashImpact' has a wrong offset!");
static_assert(offsetof(ABP_BlessingSlashProjectile_C, SlashMesh1) == 0x000868, "Member 'ABP_BlessingSlashProjectile_C::SlashMesh1' has a wrong offset!");
static_assert(offsetof(ABP_BlessingSlashProjectile_C, PointLight) == 0x000870, "Member 'ABP_BlessingSlashProjectile_C::PointLight' has a wrong offset!");
static_assert(offsetof(ABP_BlessingSlashProjectile_C, P_SlashTrail) == 0x000878, "Member 'ABP_BlessingSlashProjectile_C::P_SlashTrail' has a wrong offset!");
static_assert(offsetof(ABP_BlessingSlashProjectile_C, SlashMesh) == 0x000880, "Member 'ABP_BlessingSlashProjectile_C::SlashMesh' has a wrong offset!");
static_assert(offsetof(ABP_BlessingSlashProjectile_C, SwipeProgress_SlashMask_9D768163484DDED4CE2D84A67D1A4161) == 0x000888, "Member 'ABP_BlessingSlashProjectile_C::SwipeProgress_SlashMask_9D768163484DDED4CE2D84A67D1A4161' has a wrong offset!");
static_assert(offsetof(ABP_BlessingSlashProjectile_C, SwipeProgress__Direction_9D768163484DDED4CE2D84A67D1A4161) == 0x00088C, "Member 'ABP_BlessingSlashProjectile_C::SwipeProgress__Direction_9D768163484DDED4CE2D84A67D1A4161' has a wrong offset!");
static_assert(offsetof(ABP_BlessingSlashProjectile_C, SwipeProgress) == 0x000890, "Member 'ABP_BlessingSlashProjectile_C::SwipeProgress' has a wrong offset!");
static_assert(offsetof(ABP_BlessingSlashProjectile_C, LifeTime) == 0x000898, "Member 'ABP_BlessingSlashProjectile_C::LifeTime' has a wrong offset!");
static_assert(offsetof(ABP_BlessingSlashProjectile_C, MaxAngle) == 0x00089C, "Member 'ABP_BlessingSlashProjectile_C::MaxAngle' has a wrong offset!");
static_assert(offsetof(ABP_BlessingSlashProjectile_C, MaxBrightness) == 0x0008A0, "Member 'ABP_BlessingSlashProjectile_C::MaxBrightness' has a wrong offset!");

}

