﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Chain2

#include "Basic.hpp"

#include "Mordhau_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Chain2.BP_Chain2_C
// 0x0000 (0x0068 - 0x0068)
class UBP_Chain2_C final : public UBadge
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Chain2_C">();
	}
	static class UBP_Chain2_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_Chain2_C>();
	}
};
static_assert(alignof(UBP_Chain2_C) == 0x000008, "Wrong alignment on UBP_Chain2_C");
static_assert(sizeof(UBP_Chain2_C) == 0x000068, "Wrong size on UBP_Chain2_C");

}

