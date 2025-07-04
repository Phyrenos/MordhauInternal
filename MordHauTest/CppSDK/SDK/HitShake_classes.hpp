﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: HitShake

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass HitShake.HitShake_C
// 0x0000 (0x0180 - 0x0180)
class UHitShake_C final : public UMatineeCameraShake
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"HitShake_C">();
	}
	static class UHitShake_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UHitShake_C>();
	}
};
static_assert(alignof(UHitShake_C) == 0x000010, "Wrong alignment on UHitShake_C");
static_assert(sizeof(UHitShake_C) == 0x000180, "Wrong size on UHitShake_C");

}

