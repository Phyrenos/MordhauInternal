﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_2HThrowableBase

#include "Basic.hpp"

#include "Mordhau_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_2HThrowableBase.BP_2HThrowableBase_C
// 0x0000 (0x0D30 - 0x0D30)
class ABP_2HThrowableBase_C : public AMordhauEquipment
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_2HThrowableBase_C">();
	}
	static class ABP_2HThrowableBase_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_2HThrowableBase_C>();
	}
};
static_assert(alignof(ABP_2HThrowableBase_C) == 0x000010, "Wrong alignment on ABP_2HThrowableBase_C");
static_assert(sizeof(ABP_2HThrowableBase_C) == 0x000D30, "Wrong size on ABP_2HThrowableBase_C");

}

