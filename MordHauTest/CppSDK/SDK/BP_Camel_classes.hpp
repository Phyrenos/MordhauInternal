﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Camel

#include "Basic.hpp"

#include "BP_Horse_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Camel.BP_Camel_C
// 0x0000 (0x0CE0 - 0x0CE0)
class ABP_Camel_C final : public ABP_Horse_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Camel_C">();
	}
	static class ABP_Camel_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Camel_C>();
	}
};
static_assert(alignof(ABP_Camel_C) == 0x000010, "Wrong alignment on ABP_Camel_C");
static_assert(sizeof(ABP_Camel_C) == 0x000CE0, "Wrong size on ABP_Camel_C");

}

