﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_BallistaProjectileFire

#include "Basic.hpp"

#include "BP_BallistaProjectile_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_BallistaProjectileFire.BP_BallistaProjectileFire_C
// 0x0000 (0x0870 - 0x0870)
class ABP_BallistaProjectileFire_C final : public ABP_BallistaProjectile_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_BallistaProjectileFire_C">();
	}
	static class ABP_BallistaProjectileFire_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_BallistaProjectileFire_C>();
	}
};
static_assert(alignof(ABP_BallistaProjectileFire_C) == 0x000010, "Wrong alignment on ABP_BallistaProjectileFire_C");
static_assert(sizeof(ABP_BallistaProjectileFire_C) == 0x000870, "Wrong size on ABP_BallistaProjectileFire_C");

}

