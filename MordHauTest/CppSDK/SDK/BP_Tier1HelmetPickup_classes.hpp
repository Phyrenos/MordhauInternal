﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Tier1HelmetPickup

#include "Basic.hpp"

#include "BP_HelmetPickup_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Tier1HelmetPickup.BP_Tier1HelmetPickup_C
// 0x0000 (0x0480 - 0x0480)
class ABP_Tier1HelmetPickup_C final : public ABP_HelmetPickup_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Tier1HelmetPickup_C">();
	}
	static class ABP_Tier1HelmetPickup_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Tier1HelmetPickup_C>();
	}
};
static_assert(alignof(ABP_Tier1HelmetPickup_C) == 0x000010, "Wrong alignment on ABP_Tier1HelmetPickup_C");
static_assert(sizeof(ABP_Tier1HelmetPickup_C) == 0x000480, "Wrong size on ABP_Tier1HelmetPickup_C");

}

