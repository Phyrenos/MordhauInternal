﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PurchaseEffect

#include "Basic.hpp"


namespace SDK::Params
{

// Function BP_PurchaseEffect.BP_PurchaseEffect_C.ExecuteUbergraph_BP_PurchaseEffect
// 0x0014 (0x0014 - 0x0000)
struct BP_PurchaseEffect_C_ExecuteUbergraph_BP_PurchaseEffect final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetFloatValue_ReturnValue;                // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PurchaseEffect_C_ExecuteUbergraph_BP_PurchaseEffect) == 0x000004, "Wrong alignment on BP_PurchaseEffect_C_ExecuteUbergraph_BP_PurchaseEffect");
static_assert(sizeof(BP_PurchaseEffect_C_ExecuteUbergraph_BP_PurchaseEffect) == 0x000014, "Wrong size on BP_PurchaseEffect_C_ExecuteUbergraph_BP_PurchaseEffect");
static_assert(offsetof(BP_PurchaseEffect_C_ExecuteUbergraph_BP_PurchaseEffect, EntryPoint) == 0x000000, "Member 'BP_PurchaseEffect_C_ExecuteUbergraph_BP_PurchaseEffect::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_PurchaseEffect_C_ExecuteUbergraph_BP_PurchaseEffect, K2Node_Event_DeltaSeconds) == 0x000004, "Member 'BP_PurchaseEffect_C_ExecuteUbergraph_BP_PurchaseEffect::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(BP_PurchaseEffect_C_ExecuteUbergraph_BP_PurchaseEffect, CallFunc_GetFloatValue_ReturnValue) == 0x000008, "Member 'BP_PurchaseEffect_C_ExecuteUbergraph_BP_PurchaseEffect::CallFunc_GetFloatValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PurchaseEffect_C_ExecuteUbergraph_BP_PurchaseEffect, CallFunc_Add_FloatFloat_ReturnValue) == 0x00000C, "Member 'BP_PurchaseEffect_C_ExecuteUbergraph_BP_PurchaseEffect::CallFunc_Add_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PurchaseEffect_C_ExecuteUbergraph_BP_PurchaseEffect, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x000010, "Member 'BP_PurchaseEffect_C_ExecuteUbergraph_BP_PurchaseEffect::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");

// Function BP_PurchaseEffect.BP_PurchaseEffect_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct BP_PurchaseEffect_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PurchaseEffect_C_ReceiveTick) == 0x000004, "Wrong alignment on BP_PurchaseEffect_C_ReceiveTick");
static_assert(sizeof(BP_PurchaseEffect_C_ReceiveTick) == 0x000004, "Wrong size on BP_PurchaseEffect_C_ReceiveTick");
static_assert(offsetof(BP_PurchaseEffect_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'BP_PurchaseEffect_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

}

