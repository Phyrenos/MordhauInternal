﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Hood

#include "Basic.hpp"

#include "BP_Tier1HeadWearable_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Hood.BP_Hood_C
// 0x0000 (0x0250 - 0x0250)
class UBP_Hood_C final : public UBP_Tier1HeadWearable_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Hood_C">();
	}
	static class UBP_Hood_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_Hood_C>();
	}
};
static_assert(alignof(UBP_Hood_C) == 0x000008, "Wrong alignment on UBP_Hood_C");
static_assert(sizeof(UBP_Hood_C) == 0x000250, "Wrong size on UBP_Hood_C");

}

