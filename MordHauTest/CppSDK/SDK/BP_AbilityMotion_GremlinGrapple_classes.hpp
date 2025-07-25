﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AbilityMotion_GremlinGrapple

#include "Basic.hpp"

#include "BP_DemonHordeAbilityMotion_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_AbilityMotion_GremlinGrapple.BP_AbilityMotion_GremlinGrapple_C
// 0x0000 (0x0108 - 0x0108)
class UBP_AbilityMotion_GremlinGrapple_C final : public UBP_DemonHordeAbilityMotion_C
{
public:
	void CommitAbilityCost(bool* Return_Value);
	void CanAffordAbilityCost(bool* Return_Value);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_AbilityMotion_GremlinGrapple_C">();
	}
	static class UBP_AbilityMotion_GremlinGrapple_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_AbilityMotion_GremlinGrapple_C>();
	}
};
static_assert(alignof(UBP_AbilityMotion_GremlinGrapple_C) == 0x000008, "Wrong alignment on UBP_AbilityMotion_GremlinGrapple_C");
static_assert(sizeof(UBP_AbilityMotion_GremlinGrapple_C) == 0x000108, "Wrong size on UBP_AbilityMotion_GremlinGrapple_C");

}

