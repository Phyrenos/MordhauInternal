﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ExecutionerSword

#include "Basic.hpp"

#include "BP_TwoHandedSword_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_ExecutionerSword.BP_ExecutionerSword_C
// 0x0000 (0x1CA0 - 0x1CA0)
#pragma pack(push, 0x1)
class alignas(0x10) ABP_ExecutionerSword_C : public ABP_TwoHandedSword_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ExecutionerSword_C">();
	}
	static class ABP_ExecutionerSword_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_ExecutionerSword_C>();
	}
};
#pragma pack(pop)
static_assert(alignof(ABP_ExecutionerSword_C) == 0x000010, "Wrong alignment on ABP_ExecutionerSword_C");
static_assert(sizeof(ABP_ExecutionerSword_C) == 0x001CA0, "Wrong size on ABP_ExecutionerSword_C");

}

