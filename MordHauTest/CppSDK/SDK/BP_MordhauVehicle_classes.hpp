﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_MordhauVehicle

#include "Basic.hpp"

#include "Mordhau_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_MordhauVehicle.BP_MordhauVehicle_C
// 0x0000 (0x0B90 - 0x0B90)
class ABP_MordhauVehicle_C : public AMordhauVehicle
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_MordhauVehicle_C">();
	}
	static class ABP_MordhauVehicle_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_MordhauVehicle_C>();
	}
};
static_assert(alignof(ABP_MordhauVehicle_C) == 0x000010, "Wrong alignment on ABP_MordhauVehicle_C");
static_assert(sizeof(ABP_MordhauVehicle_C) == 0x000B90, "Wrong size on ABP_MordhauVehicle_C");

}

