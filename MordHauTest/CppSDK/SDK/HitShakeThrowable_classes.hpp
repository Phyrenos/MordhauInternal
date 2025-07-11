﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: HitShakeThrowable

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass HitShakeThrowable.HitShakeThrowable_C
// 0x0000 (0x0180 - 0x0180)
class UHitShakeThrowable_C : public UMatineeCameraShake
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"HitShakeThrowable_C">();
	}
	static class UHitShakeThrowable_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UHitShakeThrowable_C>();
	}
};
static_assert(alignof(UHitShakeThrowable_C) == 0x000010, "Wrong alignment on UHitShakeThrowable_C");
static_assert(sizeof(UHitShakeThrowable_C) == 0x000180, "Wrong size on UHitShakeThrowable_C");

}

