﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_FistsWeapon

#include "Basic.hpp"

#include "Mordhau_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_FistsWeapon.BP_FistsWeapon_C
// 0x0000 (0x1C90 - 0x1C90)
class ABP_FistsWeapon_C : public AFistsWeapon
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_FistsWeapon_C">();
	}
	static class ABP_FistsWeapon_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_FistsWeapon_C>();
	}
};
static_assert(alignof(ABP_FistsWeapon_C) == 0x000010, "Wrong alignment on ABP_FistsWeapon_C");
static_assert(sizeof(ABP_FistsWeapon_C) == 0x001C90, "Wrong size on ABP_FistsWeapon_C");

}

