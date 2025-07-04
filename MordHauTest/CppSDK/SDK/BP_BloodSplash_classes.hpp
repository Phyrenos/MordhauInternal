﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_BloodSplash

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_BloodSplash.BP_BloodSplash_C
// 0x0010 (0x0230 - 0x0220)
class ABP_BloodSplash_C : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0220(0x0008)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UParticleSystemComponent*               ParticleSystem;                                    // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_BloodSplash(int32 EntryPoint);
	void BndEvt__ParticleSystem_K2Node_ComponentBoundEvent_3_OnSystemFinished__DelegateSignature(class UParticleSystemComponent* PSystem);
	void BndEvt__ParticleSystem_K2Node_ComponentBoundEvent_0_ParticleCollisionSignature__DelegateSignature(class FName EventName, float EmitterTime, int32 ParticleTime, const struct FVector& Location, const struct FVector& Velocity, const struct FVector& Direction, const struct FVector& Normal, class FName BoneName, class UPhysicalMaterial* PhysMat);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_BloodSplash_C">();
	}
	static class ABP_BloodSplash_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_BloodSplash_C>();
	}
};
static_assert(alignof(ABP_BloodSplash_C) == 0x000008, "Wrong alignment on ABP_BloodSplash_C");
static_assert(sizeof(ABP_BloodSplash_C) == 0x000230, "Wrong size on ABP_BloodSplash_C");
static_assert(offsetof(ABP_BloodSplash_C, UberGraphFrame) == 0x000220, "Member 'ABP_BloodSplash_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_BloodSplash_C, ParticleSystem) == 0x000228, "Member 'ABP_BloodSplash_C::ParticleSystem' has a wrong offset!");

}

