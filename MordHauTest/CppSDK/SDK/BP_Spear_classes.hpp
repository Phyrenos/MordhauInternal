﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Spear

#include "Basic.hpp"

#include "BP_Polearm_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Spear.BP_Spear_C
// 0x0000 (0x1CA0 - 0x1CA0)
#pragma pack(push, 0x1)
class alignas(0x10) ABP_Spear_C : public ABP_Polearm_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Spear_C">();
	}
	static class ABP_Spear_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Spear_C>();
	}
};
#pragma pack(pop)
static_assert(alignof(ABP_Spear_C) == 0x000010, "Wrong alignment on ABP_Spear_C");
static_assert(sizeof(ABP_Spear_C) == 0x001CA0, "Wrong size on ABP_Spear_C");

}

