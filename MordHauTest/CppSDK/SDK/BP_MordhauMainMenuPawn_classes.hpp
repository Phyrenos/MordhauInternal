﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_MordhauMainMenuPawn

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_MordhauMainMenuPawn.BP_MordhauMainMenuPawn_C
// 0x0010 (0x0290 - 0x0280)
class ABP_MordhauMainMenuPawn_C final : public APawn
{
public:
	class UCameraComponent*                       Camera;                                            // 0x0280(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0288(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_MordhauMainMenuPawn_C">();
	}
	static class ABP_MordhauMainMenuPawn_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_MordhauMainMenuPawn_C>();
	}
};
static_assert(alignof(ABP_MordhauMainMenuPawn_C) == 0x000008, "Wrong alignment on ABP_MordhauMainMenuPawn_C");
static_assert(sizeof(ABP_MordhauMainMenuPawn_C) == 0x000290, "Wrong size on ABP_MordhauMainMenuPawn_C");
static_assert(offsetof(ABP_MordhauMainMenuPawn_C, Camera) == 0x000280, "Member 'ABP_MordhauMainMenuPawn_C::Camera' has a wrong offset!");
static_assert(offsetof(ABP_MordhauMainMenuPawn_C, DefaultSceneRoot) == 0x000288, "Member 'ABP_MordhauMainMenuPawn_C::DefaultSceneRoot' has a wrong offset!");

}

