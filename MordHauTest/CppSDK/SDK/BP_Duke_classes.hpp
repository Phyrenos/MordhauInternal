﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Duke

#include "Basic.hpp"

#include "Mordhau_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Duke.BP_Duke_C
// 0x0000 (0x0068 - 0x0068)
class UBP_Duke_C final : public UBadge
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Duke_C">();
	}
	static class UBP_Duke_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_Duke_C>();
	}
};
static_assert(alignof(UBP_Duke_C) == 0x000008, "Wrong alignment on UBP_Duke_C");
static_assert(sizeof(UBP_Duke_C) == 0x000068, "Wrong size on UBP_Duke_C");

}

