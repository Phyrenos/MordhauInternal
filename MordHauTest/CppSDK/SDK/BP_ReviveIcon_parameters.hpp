﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ReviveIcon

#include "Basic.hpp"


namespace SDK::Params
{

// Function BP_ReviveIcon.BP_ReviveIcon_C.ExecuteUbergraph_BP_ReviveIcon
// 0x0020 (0x0020 - 0x0000)
struct BP_ReviveIcon_C_ExecuteUbergraph_BP_ReviveIcon final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;           // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ReviveIcon_C_ExecuteUbergraph_BP_ReviveIcon) == 0x000008, "Wrong alignment on BP_ReviveIcon_C_ExecuteUbergraph_BP_ReviveIcon");
static_assert(sizeof(BP_ReviveIcon_C_ExecuteUbergraph_BP_ReviveIcon) == 0x000020, "Wrong size on BP_ReviveIcon_C_ExecuteUbergraph_BP_ReviveIcon");
static_assert(offsetof(BP_ReviveIcon_C_ExecuteUbergraph_BP_ReviveIcon, EntryPoint) == 0x000000, "Member 'BP_ReviveIcon_C_ExecuteUbergraph_BP_ReviveIcon::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_ReviveIcon_C_ExecuteUbergraph_BP_ReviveIcon, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'BP_ReviveIcon_C_ExecuteUbergraph_BP_ReviveIcon::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ReviveIcon_C_ExecuteUbergraph_BP_ReviveIcon, K2Node_Event_IsDesignTime) == 0x000010, "Member 'BP_ReviveIcon_C_ExecuteUbergraph_BP_ReviveIcon::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(BP_ReviveIcon_C_ExecuteUbergraph_BP_ReviveIcon, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000018, "Member 'BP_ReviveIcon_C_ExecuteUbergraph_BP_ReviveIcon::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");

// Function BP_ReviveIcon.BP_ReviveIcon_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct BP_ReviveIcon_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_ReviveIcon_C_PreConstruct) == 0x000001, "Wrong alignment on BP_ReviveIcon_C_PreConstruct");
static_assert(sizeof(BP_ReviveIcon_C_PreConstruct) == 0x000001, "Wrong size on BP_ReviveIcon_C_PreConstruct");
static_assert(offsetof(BP_ReviveIcon_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'BP_ReviveIcon_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function BP_ReviveIcon.BP_ReviveIcon_C.Update Progress
// 0x0004 (0x0004 - 0x0000)
struct BP_ReviveIcon_C_Update_Progress final
{
public:
	float                                         Progress_0;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ReviveIcon_C_Update_Progress) == 0x000004, "Wrong alignment on BP_ReviveIcon_C_Update_Progress");
static_assert(sizeof(BP_ReviveIcon_C_Update_Progress) == 0x000004, "Wrong size on BP_ReviveIcon_C_Update_Progress");
static_assert(offsetof(BP_ReviveIcon_C_Update_Progress, Progress_0) == 0x000000, "Member 'BP_ReviveIcon_C_Update_Progress::Progress_0' has a wrong offset!");

}

