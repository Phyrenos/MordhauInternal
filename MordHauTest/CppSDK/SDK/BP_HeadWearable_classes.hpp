﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_HeadWearable

#include "Basic.hpp"

#include "Mordhau_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_HeadWearable.BP_HeadWearable_C
// 0x0000 (0x0250 - 0x0250)
class UBP_HeadWearable_C : public UHeadWearable
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_HeadWearable_C">();
	}
	static class UBP_HeadWearable_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_HeadWearable_C>();
	}
};
static_assert(alignof(UBP_HeadWearable_C) == 0x000008, "Wrong alignment on UBP_HeadWearable_C");
static_assert(sizeof(UBP_HeadWearable_C) == 0x000250, "Wrong size on UBP_HeadWearable_C");

}

