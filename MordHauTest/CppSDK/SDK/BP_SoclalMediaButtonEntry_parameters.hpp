﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_SoclalMediaButtonEntry

#include "Basic.hpp"


namespace SDK::Params
{

// Function BP_SoclalMediaButtonEntry.BP_SoclalMediaButtonEntry_C.ExecuteUbergraph_BP_SoclalMediaButtonEntry
// 0x0018 (0x0018 - 0x0000)
struct BP_SoclalMediaButtonEntry_C_ExecuteUbergraph_BP_SoclalMediaButtonEntry final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SoclalMediaButtonEntry_C_ExecuteUbergraph_BP_SoclalMediaButtonEntry) == 0x000008, "Wrong alignment on BP_SoclalMediaButtonEntry_C_ExecuteUbergraph_BP_SoclalMediaButtonEntry");
static_assert(sizeof(BP_SoclalMediaButtonEntry_C_ExecuteUbergraph_BP_SoclalMediaButtonEntry) == 0x000018, "Wrong size on BP_SoclalMediaButtonEntry_C_ExecuteUbergraph_BP_SoclalMediaButtonEntry");
static_assert(offsetof(BP_SoclalMediaButtonEntry_C_ExecuteUbergraph_BP_SoclalMediaButtonEntry, EntryPoint) == 0x000000, "Member 'BP_SoclalMediaButtonEntry_C_ExecuteUbergraph_BP_SoclalMediaButtonEntry::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_SoclalMediaButtonEntry_C_ExecuteUbergraph_BP_SoclalMediaButtonEntry, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'BP_SoclalMediaButtonEntry_C_ExecuteUbergraph_BP_SoclalMediaButtonEntry::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SoclalMediaButtonEntry_C_ExecuteUbergraph_BP_SoclalMediaButtonEntry, CallFunc_PlayAnimation_ReturnValue_1) == 0x000010, "Member 'BP_SoclalMediaButtonEntry_C_ExecuteUbergraph_BP_SoclalMediaButtonEntry::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");

}

