﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_FemurBone

#include "Basic.hpp"

#include "BP_Stick_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_FemurBone.BP_FemurBone_C
// 0x0000 (0x1CA0 - 0x1CA0)
class ABP_FemurBone_C final : public ABP_Stick_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_FemurBone_C">();
	}
	static class ABP_FemurBone_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_FemurBone_C>();
	}
};
static_assert(alignof(ABP_FemurBone_C) == 0x000010, "Wrong alignment on ABP_FemurBone_C");
static_assert(sizeof(ABP_FemurBone_C) == 0x001CA0, "Wrong size on ABP_FemurBone_C");

}

