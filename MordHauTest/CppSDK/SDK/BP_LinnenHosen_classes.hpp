﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_LinnenHosen

#include "Basic.hpp"

#include "BP_Tier0LegsWearable_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_LinnenHosen.BP_LinnenHosen_C
// 0x0000 (0x0240 - 0x0240)
class UBP_LinnenHosen_C final : public UBP_Tier0LegsWearable_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_LinnenHosen_C">();
	}
	static class UBP_LinnenHosen_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_LinnenHosen_C>();
	}
};
static_assert(alignof(UBP_LinnenHosen_C) == 0x000008, "Wrong alignment on UBP_LinnenHosen_C");
static_assert(sizeof(UBP_LinnenHosen_C) == 0x000240, "Wrong size on UBP_LinnenHosen_C");

}

