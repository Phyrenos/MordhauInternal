﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DefaultLongbow

#include "Basic.hpp"

#include "BP_MordhauEquipmentPart_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass DefaultLongbow.DefaultLongbow_C
// 0x0000 (0x0088 - 0x0088)
class UDefaultLongbow_C final : public UBP_MordhauEquipmentPart_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"DefaultLongbow_C">();
	}
	static class UDefaultLongbow_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDefaultLongbow_C>();
	}
};
static_assert(alignof(UDefaultLongbow_C) == 0x000008, "Wrong alignment on UDefaultLongbow_C");
static_assert(sizeof(UDefaultLongbow_C) == 0x000088, "Wrong size on UDefaultLongbow_C");

}

