﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: FlinchShake

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass FlinchShake.FlinchShake_C
// 0x0000 (0x0180 - 0x0180)
class UFlinchShake_C final : public UMatineeCameraShake
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"FlinchShake_C">();
	}
	static class UFlinchShake_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFlinchShake_C>();
	}
};
static_assert(alignof(UFlinchShake_C) == 0x000010, "Wrong alignment on UFlinchShake_C");
static_assert(sizeof(UFlinchShake_C) == 0x000180, "Wrong size on UFlinchShake_C");

}

