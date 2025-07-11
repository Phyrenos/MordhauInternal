﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_SmithPerk

#include "Basic.hpp"

#include "BP_Perk_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_SmithPerk.BP_SmithPerk_C
// 0x0000 (0x0070 - 0x0070)
class UBP_SmithPerk_C final : public UBP_Perk_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_SmithPerk_C">();
	}
	static class UBP_SmithPerk_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_SmithPerk_C>();
	}
};
static_assert(alignof(UBP_SmithPerk_C) == 0x000008, "Wrong alignment on UBP_SmithPerk_C");
static_assert(sizeof(UBP_SmithPerk_C) == 0x000070, "Wrong size on UBP_SmithPerk_C");

}

