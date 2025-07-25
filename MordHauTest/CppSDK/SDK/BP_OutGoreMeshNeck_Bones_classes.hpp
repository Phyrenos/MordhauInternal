﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_OutGoreMeshNeck_Bones

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_OutGoreMeshNeck_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_OutGoreMeshNeck_Bones.BP_OutGoreMeshNeck_Bones_C
// 0x0008 (0x0250 - 0x0248)
class ABP_OutGoreMeshNeck_Bones_C final : public ABP_OutGoreMeshNeck_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_OutGoreMeshNeck_Bones_C;         // 0x0248(0x0008)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)

public:
	void ExecuteUbergraph_BP_OutGoreMeshNeck_Bones(int32 EntryPoint);
	void BndEvt__Particle_K2Node_ComponentBoundEvent_0_ParticleCollisionSignature__DelegateSignature(class FName EventName, float EmitterTime, int32 ParticleTime, const struct FVector& Location, const struct FVector& Velocity, const struct FVector& Direction, const struct FVector& Normal, class FName BoneName, class UPhysicalMaterial* PhysMat);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_OutGoreMeshNeck_Bones_C">();
	}
	static class ABP_OutGoreMeshNeck_Bones_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_OutGoreMeshNeck_Bones_C>();
	}
};
static_assert(alignof(ABP_OutGoreMeshNeck_Bones_C) == 0x000008, "Wrong alignment on ABP_OutGoreMeshNeck_Bones_C");
static_assert(sizeof(ABP_OutGoreMeshNeck_Bones_C) == 0x000250, "Wrong size on ABP_OutGoreMeshNeck_Bones_C");
static_assert(offsetof(ABP_OutGoreMeshNeck_Bones_C, UberGraphFrame_BP_OutGoreMeshNeck_Bones_C) == 0x000248, "Member 'ABP_OutGoreMeshNeck_Bones_C::UberGraphFrame_BP_OutGoreMeshNeck_Bones_C' has a wrong offset!");

}

