﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_RecurveBowArrow_DIH

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_RecurveBowArrow_BR_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_RecurveBowArrow_DIH.BP_RecurveBowArrow_DIH_C
// 0x0010 (0x0870 - 0x0860)
class ABP_RecurveBowArrow_DIH_C : public ABP_RecurveBowArrow_BR_C
{
public:
	uint8                                         Pad_854[0x4];                                      // 0x0854(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_RecurveBowArrow_DIH_C;           // 0x0858(0x0008)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	bool                                          IsScattershot;                                     // 0x0860(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_BP_RecurveBowArrow_DIH(int32 EntryPoint);
	void ModifyProjDamage(float DamageMod);
	void OnProjectileFired();
	void OnProjectileHit(const struct FVector& HitLocation, const struct FVector& HitNormal, float BounceForce, uint8 Surface, bool bHasHitWorld, bool bHasStopped);
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_RecurveBowArrow_DIH_C">();
	}
	static class ABP_RecurveBowArrow_DIH_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_RecurveBowArrow_DIH_C>();
	}
};
static_assert(alignof(ABP_RecurveBowArrow_DIH_C) == 0x000010, "Wrong alignment on ABP_RecurveBowArrow_DIH_C");
static_assert(sizeof(ABP_RecurveBowArrow_DIH_C) == 0x000870, "Wrong size on ABP_RecurveBowArrow_DIH_C");
static_assert(offsetof(ABP_RecurveBowArrow_DIH_C, UberGraphFrame_BP_RecurveBowArrow_DIH_C) == 0x000858, "Member 'ABP_RecurveBowArrow_DIH_C::UberGraphFrame_BP_RecurveBowArrow_DIH_C' has a wrong offset!");
static_assert(offsetof(ABP_RecurveBowArrow_DIH_C, IsScattershot) == 0x000860, "Member 'ABP_RecurveBowArrow_DIH_C::IsScattershot' has a wrong offset!");

}

