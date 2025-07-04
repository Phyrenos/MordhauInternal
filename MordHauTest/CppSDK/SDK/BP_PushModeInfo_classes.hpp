﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PushModeInfo

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_PushModeInfo.BP_PushModeInfo_C
// 0x0010 (0x0230 - 0x0220)
class ABP_PushModeInfo_C final : public AActor
{
public:
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0220(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                         AttackingTeam;                                     // 0x0228(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_229[0x3];                                      // 0x0229(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         InitialTime;                                       // 0x022C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PushModeInfo_C">();
	}
	static class ABP_PushModeInfo_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_PushModeInfo_C>();
	}
};
static_assert(alignof(ABP_PushModeInfo_C) == 0x000008, "Wrong alignment on ABP_PushModeInfo_C");
static_assert(sizeof(ABP_PushModeInfo_C) == 0x000230, "Wrong size on ABP_PushModeInfo_C");
static_assert(offsetof(ABP_PushModeInfo_C, DefaultSceneRoot) == 0x000220, "Member 'ABP_PushModeInfo_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_PushModeInfo_C, AttackingTeam) == 0x000228, "Member 'ABP_PushModeInfo_C::AttackingTeam' has a wrong offset!");
static_assert(offsetof(ABP_PushModeInfo_C, InitialTime) == 0x00022C, "Member 'ABP_PushModeInfo_C::InitialTime' has a wrong offset!");

}

