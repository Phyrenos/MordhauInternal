﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_CarvingKnife_DIH

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Mordhau_structs.hpp"
#include "BP_Knife_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_CarvingKnife_DIH.BP_CarvingKnife_DIH_C
// 0x0260 (0x1F00 - 0x1CA0)
class ABP_CarvingKnife_DIH_C final : public ABP_Knife_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x1C98(0x0008)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	struct FAttackInfo                            BaseStrikeAttack;                                  // 0x1CA0(0x0128)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FAttackInfo                            BaseStabAttack;                                    // 0x1DC8(0x0128)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          HitCancel;                                         // 0x1EF0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         AttackCount;                                       // 0x1EF1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EAttackMove                                   LastMove;                                          // 0x1EF2(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1EF3[0x1];                                     // 0x1EF3(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         LastAngle;                                         // 0x1EF4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_CarvingKnife_DIH(int32 EntryPoint);
	void SetupBlessingStats();
	void OnWasBlocked(const struct FBlockResult& Result, EAttackMove Move);
	void SetStatsMulti(bool IsFast);
	void OnAttackStopped();
	void OnAttackStarted(EAttackMove Move, float Angle);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_CarvingKnife_DIH_C">();
	}
	static class ABP_CarvingKnife_DIH_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_CarvingKnife_DIH_C>();
	}
};
static_assert(alignof(ABP_CarvingKnife_DIH_C) == 0x000010, "Wrong alignment on ABP_CarvingKnife_DIH_C");
static_assert(sizeof(ABP_CarvingKnife_DIH_C) == 0x001F00, "Wrong size on ABP_CarvingKnife_DIH_C");
static_assert(offsetof(ABP_CarvingKnife_DIH_C, UberGraphFrame) == 0x001C98, "Member 'ABP_CarvingKnife_DIH_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_CarvingKnife_DIH_C, BaseStrikeAttack) == 0x001CA0, "Member 'ABP_CarvingKnife_DIH_C::BaseStrikeAttack' has a wrong offset!");
static_assert(offsetof(ABP_CarvingKnife_DIH_C, BaseStabAttack) == 0x001DC8, "Member 'ABP_CarvingKnife_DIH_C::BaseStabAttack' has a wrong offset!");
static_assert(offsetof(ABP_CarvingKnife_DIH_C, HitCancel) == 0x001EF0, "Member 'ABP_CarvingKnife_DIH_C::HitCancel' has a wrong offset!");
static_assert(offsetof(ABP_CarvingKnife_DIH_C, AttackCount) == 0x001EF1, "Member 'ABP_CarvingKnife_DIH_C::AttackCount' has a wrong offset!");
static_assert(offsetof(ABP_CarvingKnife_DIH_C, LastMove) == 0x001EF2, "Member 'ABP_CarvingKnife_DIH_C::LastMove' has a wrong offset!");
static_assert(offsetof(ABP_CarvingKnife_DIH_C, LastAngle) == 0x001EF4, "Member 'ABP_CarvingKnife_DIH_C::LastAngle' has a wrong offset!");

}

