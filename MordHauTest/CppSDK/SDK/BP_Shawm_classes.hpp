﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Shawm

#include "Basic.hpp"

#include "BP_Instrument_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Shawm.BP_Shawm_C
// 0x0000 (0x1D40 - 0x1D40)
#pragma pack(push, 0x1)
class alignas(0x10) ABP_Shawm_C : public ABP_Instrument_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Shawm_C">();
	}
	static class ABP_Shawm_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Shawm_C>();
	}
};
#pragma pack(pop)
static_assert(alignof(ABP_Shawm_C) == 0x000010, "Wrong alignment on ABP_Shawm_C");
static_assert(sizeof(ABP_Shawm_C) == 0x001D40, "Wrong size on ABP_Shawm_C");

}

