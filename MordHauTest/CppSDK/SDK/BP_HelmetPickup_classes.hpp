﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_HelmetPickup

#include "Basic.hpp"

#include "BP_WearablePickup_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_HelmetPickup.BP_HelmetPickup_C
// 0x0000 (0x0480 - 0x0480)
class ABP_HelmetPickup_C : public ABP_WearablePickup_C
{
public:
	bool CanInteract(class AMordhauCharacter* Character) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_HelmetPickup_C">();
	}
	static class ABP_HelmetPickup_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_HelmetPickup_C>();
	}
};
static_assert(alignof(ABP_HelmetPickup_C) == 0x000010, "Wrong alignment on ABP_HelmetPickup_C");
static_assert(sizeof(ABP_HelmetPickup_C) == 0x000480, "Wrong size on ABP_HelmetPickup_C");

}

