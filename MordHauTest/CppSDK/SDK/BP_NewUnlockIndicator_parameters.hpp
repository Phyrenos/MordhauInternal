﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_NewUnlockIndicator

#include "Basic.hpp"


namespace SDK::Params
{

// Function BP_NewUnlockIndicator.BP_NewUnlockIndicator_C.ExecuteUbergraph_BP_NewUnlockIndicator
// 0x0010 (0x0010 - 0x0000)
struct BP_NewUnlockIndicator_C_ExecuteUbergraph_BP_NewUnlockIndicator final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_NewUnlockIndicator_C_ExecuteUbergraph_BP_NewUnlockIndicator) == 0x000008, "Wrong alignment on BP_NewUnlockIndicator_C_ExecuteUbergraph_BP_NewUnlockIndicator");
static_assert(sizeof(BP_NewUnlockIndicator_C_ExecuteUbergraph_BP_NewUnlockIndicator) == 0x000010, "Wrong size on BP_NewUnlockIndicator_C_ExecuteUbergraph_BP_NewUnlockIndicator");
static_assert(offsetof(BP_NewUnlockIndicator_C_ExecuteUbergraph_BP_NewUnlockIndicator, EntryPoint) == 0x000000, "Member 'BP_NewUnlockIndicator_C_ExecuteUbergraph_BP_NewUnlockIndicator::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_NewUnlockIndicator_C_ExecuteUbergraph_BP_NewUnlockIndicator, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'BP_NewUnlockIndicator_C_ExecuteUbergraph_BP_NewUnlockIndicator::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

}

