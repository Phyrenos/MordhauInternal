﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_TurnCapStatEntry

#include "Basic.hpp"


namespace SDK::Params
{

// Function BP_TurnCapStatEntry.BP_TurnCapStatEntry_C.ExecuteUbergraph_BP_TurnCapStatEntry
// 0x0008 (0x0008 - 0x0000)
struct BP_TurnCapStatEntry_C_ExecuteUbergraph_BP_TurnCapStatEntry final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_TurnCapStatEntry_C_ExecuteUbergraph_BP_TurnCapStatEntry) == 0x000004, "Wrong alignment on BP_TurnCapStatEntry_C_ExecuteUbergraph_BP_TurnCapStatEntry");
static_assert(sizeof(BP_TurnCapStatEntry_C_ExecuteUbergraph_BP_TurnCapStatEntry) == 0x000008, "Wrong size on BP_TurnCapStatEntry_C_ExecuteUbergraph_BP_TurnCapStatEntry");
static_assert(offsetof(BP_TurnCapStatEntry_C_ExecuteUbergraph_BP_TurnCapStatEntry, EntryPoint) == 0x000000, "Member 'BP_TurnCapStatEntry_C_ExecuteUbergraph_BP_TurnCapStatEntry::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_TurnCapStatEntry_C_ExecuteUbergraph_BP_TurnCapStatEntry, K2Node_Event_IsDesignTime) == 0x000004, "Member 'BP_TurnCapStatEntry_C_ExecuteUbergraph_BP_TurnCapStatEntry::K2Node_Event_IsDesignTime' has a wrong offset!");

// Function BP_TurnCapStatEntry.BP_TurnCapStatEntry_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct BP_TurnCapStatEntry_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_TurnCapStatEntry_C_PreConstruct) == 0x000001, "Wrong alignment on BP_TurnCapStatEntry_C_PreConstruct");
static_assert(sizeof(BP_TurnCapStatEntry_C_PreConstruct) == 0x000001, "Wrong size on BP_TurnCapStatEntry_C_PreConstruct");
static_assert(offsetof(BP_TurnCapStatEntry_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'BP_TurnCapStatEntry_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function BP_TurnCapStatEntry.BP_TurnCapStatEntry_C.Update Entry
// 0x0030 (0x0030 - 0x0000)
struct BP_TurnCapStatEntry_C_Update_Entry final
{
public:
	class FText                                   X_Value;                                           // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FText                                   Y_Value;                                           // 0x0018(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(BP_TurnCapStatEntry_C_Update_Entry) == 0x000008, "Wrong alignment on BP_TurnCapStatEntry_C_Update_Entry");
static_assert(sizeof(BP_TurnCapStatEntry_C_Update_Entry) == 0x000030, "Wrong size on BP_TurnCapStatEntry_C_Update_Entry");
static_assert(offsetof(BP_TurnCapStatEntry_C_Update_Entry, X_Value) == 0x000000, "Member 'BP_TurnCapStatEntry_C_Update_Entry::X_Value' has a wrong offset!");
static_assert(offsetof(BP_TurnCapStatEntry_C_Update_Entry, Y_Value) == 0x000018, "Member 'BP_TurnCapStatEntry_C_Update_Entry::Y_Value' has a wrong offset!");

// Function BP_TurnCapStatEntry.BP_TurnCapStatEntry_C.GetToolTipWidget_0
// 0x0010 (0x0010 - 0x0000)
struct BP_TurnCapStatEntry_C_GetToolTipWidget_0 final
{
public:
	class UWidget*                                ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_TextIsEmpty_ReturnValue;                  // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_TurnCapStatEntry_C_GetToolTipWidget_0) == 0x000008, "Wrong alignment on BP_TurnCapStatEntry_C_GetToolTipWidget_0");
static_assert(sizeof(BP_TurnCapStatEntry_C_GetToolTipWidget_0) == 0x000010, "Wrong size on BP_TurnCapStatEntry_C_GetToolTipWidget_0");
static_assert(offsetof(BP_TurnCapStatEntry_C_GetToolTipWidget_0, ReturnValue) == 0x000000, "Member 'BP_TurnCapStatEntry_C_GetToolTipWidget_0::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TurnCapStatEntry_C_GetToolTipWidget_0, CallFunc_TextIsEmpty_ReturnValue) == 0x000008, "Member 'BP_TurnCapStatEntry_C_GetToolTipWidget_0::CallFunc_TextIsEmpty_ReturnValue' has a wrong offset!");

}

