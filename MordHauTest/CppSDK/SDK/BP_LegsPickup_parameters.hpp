﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_LegsPickup

#include "Basic.hpp"


namespace SDK::Params
{

// Function BP_LegsPickup.BP_LegsPickup_C.CanInteract
// 0x0010 (0x0010 - 0x0000)
struct BP_LegsPickup_C_CanInteract final
{
public:
	class AMordhauCharacter*                      Character;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_CanInteract_ReturnValue;                  // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsAnUpgrade_Value;                        // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_LegsPickup_C_CanInteract) == 0x000008, "Wrong alignment on BP_LegsPickup_C_CanInteract");
static_assert(sizeof(BP_LegsPickup_C_CanInteract) == 0x000010, "Wrong size on BP_LegsPickup_C_CanInteract");
static_assert(offsetof(BP_LegsPickup_C_CanInteract, Character) == 0x000000, "Member 'BP_LegsPickup_C_CanInteract::Character' has a wrong offset!");
static_assert(offsetof(BP_LegsPickup_C_CanInteract, ReturnValue) == 0x000008, "Member 'BP_LegsPickup_C_CanInteract::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LegsPickup_C_CanInteract, CallFunc_CanInteract_ReturnValue) == 0x000009, "Member 'BP_LegsPickup_C_CanInteract::CallFunc_CanInteract_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LegsPickup_C_CanInteract, CallFunc_IsAnUpgrade_Value) == 0x00000A, "Member 'BP_LegsPickup_C_CanInteract::CallFunc_IsAnUpgrade_Value' has a wrong offset!");

}

