﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_GremlinCleaver

#include "Basic.hpp"

#include "BP_OneHandedSword_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_GremlinCleaver.BP_GremlinCleaver_C
// 0x0000 (0x1CA0 - 0x1CA0)
class ABP_GremlinCleaver_C final : public ABP_OneHandedSword_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_GremlinCleaver_C">();
	}
	static class ABP_GremlinCleaver_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_GremlinCleaver_C>();
	}
};
static_assert(alignof(ABP_GremlinCleaver_C) == 0x000010, "Wrong alignment on ABP_GremlinCleaver_C");
static_assert(sizeof(ABP_GremlinCleaver_C) == 0x001CA0, "Wrong size on ABP_GremlinCleaver_C");

}

