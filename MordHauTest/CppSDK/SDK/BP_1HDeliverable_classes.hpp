﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_1HDeliverable

#include "Basic.hpp"

#include "BP_DeliverableEquipment_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_1HDeliverable.BP_1HDeliverable_C
// 0x0000 (0x0D60 - 0x0D60)
#pragma pack(push, 0x1)
class alignas(0x10) ABP_1HDeliverable_C : public ABP_DeliverableEquipment_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_1HDeliverable_C">();
	}
	static class ABP_1HDeliverable_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_1HDeliverable_C>();
	}
};
#pragma pack(pop)
static_assert(alignof(ABP_1HDeliverable_C) == 0x000010, "Wrong alignment on ABP_1HDeliverable_C");
static_assert(sizeof(ABP_1HDeliverable_C) == 0x000D60, "Wrong size on ABP_1HDeliverable_C");

}

