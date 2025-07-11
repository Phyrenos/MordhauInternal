﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Chickenator

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_MissileEquipment_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Chickenator.BP_Chickenator_C
// 0x0010 (0x0D50 - 0x0D40)
class ABP_Chickenator_C final : public ABP_MissileEquipment_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0D38(0x0008)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	bool                                          IsRestocking;                                      // 0x0D40(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_D41[0x3];                                      // 0x0D41(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         AutoRestockInterval;                               // 0x0D44(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_Chickenator(int32 EntryPoint);
	void SetupBlessingStats();
	void OnAmmoChanged();
	void BeginRestocking();
	void AutoRestock();
	void IdleAnimLoop();
	void DropEffectsMulti();
	void OnDropped(class AMordhauCharacter* Character);
	void FireProjectile(const struct FVector& Origin, const struct FRotator& Orientation, class AController* OwningController, float ExpectedDelay);
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Chickenator_C">();
	}
	static class ABP_Chickenator_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Chickenator_C>();
	}
};
static_assert(alignof(ABP_Chickenator_C) == 0x000010, "Wrong alignment on ABP_Chickenator_C");
static_assert(sizeof(ABP_Chickenator_C) == 0x000D50, "Wrong size on ABP_Chickenator_C");
static_assert(offsetof(ABP_Chickenator_C, UberGraphFrame) == 0x000D38, "Member 'ABP_Chickenator_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_Chickenator_C, IsRestocking) == 0x000D40, "Member 'ABP_Chickenator_C::IsRestocking' has a wrong offset!");
static_assert(offsetof(ABP_Chickenator_C, AutoRestockInterval) == 0x000D44, "Member 'ABP_Chickenator_C::AutoRestockInterval' has a wrong offset!");

}

