﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Sledgehammer

#include "Basic.hpp"

#include "BP_BattleAxe_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Sledgehammer.BP_Sledgehammer_C
// 0x0000 (0x1CA0 - 0x1CA0)
#pragma pack(push, 0x1)
class alignas(0x10) ABP_Sledgehammer_C : public ABP_BattleAxe_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Sledgehammer_C">();
	}
	static class ABP_Sledgehammer_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Sledgehammer_C>();
	}
};
#pragma pack(pop)
static_assert(alignof(ABP_Sledgehammer_C) == 0x000010, "Wrong alignment on ABP_Sledgehammer_C");
static_assert(sizeof(ABP_Sledgehammer_C) == 0x001CA0, "Wrong size on ABP_Sledgehammer_C");

}

