﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DefaultRecurve

#include "Basic.hpp"

#include "BP_MordhauEquipmentPart_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass DefaultRecurve.DefaultRecurve_C
// 0x0000 (0x0088 - 0x0088)
class UDefaultRecurve_C final : public UBP_MordhauEquipmentPart_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"DefaultRecurve_C">();
	}
	static class UDefaultRecurve_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDefaultRecurve_C>();
	}
};
static_assert(alignof(UDefaultRecurve_C) == 0x000008, "Wrong alignment on UDefaultRecurve_C");
static_assert(sizeof(UDefaultRecurve_C) == 0x000088, "Wrong size on UDefaultRecurve_C");

}

