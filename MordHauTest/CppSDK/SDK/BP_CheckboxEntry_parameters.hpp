﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_CheckboxEntry

#include "Basic.hpp"

#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function BP_CheckboxEntry.BP_CheckboxEntry_C.ExecuteUbergraph_BP_CheckboxEntry
// 0x004C (0x004C - 0x0000)
struct BP_CheckboxEntry_C_ExecuteUbergraph_BP_CheckboxEntry final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Has_Been_Initd_Variable;                 // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_IsClosed_Variable;                       // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_ComponentBoundEvent_bIsChecked;             // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsConsolePlatform_ReturnValue;            // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9[0x3];                                        // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x000C(0x0038)(IsPlainOldData, NoDestructor)
	float                                         K2Node_Event_InDeltaTime;                          // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsHovered_ReturnValue;                    // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsChecked_ReturnValue;                    // 0x0049(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_CheckboxEntry_C_ExecuteUbergraph_BP_CheckboxEntry) == 0x000004, "Wrong alignment on BP_CheckboxEntry_C_ExecuteUbergraph_BP_CheckboxEntry");
static_assert(sizeof(BP_CheckboxEntry_C_ExecuteUbergraph_BP_CheckboxEntry) == 0x00004C, "Wrong size on BP_CheckboxEntry_C_ExecuteUbergraph_BP_CheckboxEntry");
static_assert(offsetof(BP_CheckboxEntry_C_ExecuteUbergraph_BP_CheckboxEntry, EntryPoint) == 0x000000, "Member 'BP_CheckboxEntry_C_ExecuteUbergraph_BP_CheckboxEntry::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_CheckboxEntry_C_ExecuteUbergraph_BP_CheckboxEntry, Temp_bool_Has_Been_Initd_Variable) == 0x000004, "Member 'BP_CheckboxEntry_C_ExecuteUbergraph_BP_CheckboxEntry::Temp_bool_Has_Been_Initd_Variable' has a wrong offset!");
static_assert(offsetof(BP_CheckboxEntry_C_ExecuteUbergraph_BP_CheckboxEntry, Temp_bool_IsClosed_Variable) == 0x000005, "Member 'BP_CheckboxEntry_C_ExecuteUbergraph_BP_CheckboxEntry::Temp_bool_IsClosed_Variable' has a wrong offset!");
static_assert(offsetof(BP_CheckboxEntry_C_ExecuteUbergraph_BP_CheckboxEntry, K2Node_ComponentBoundEvent_bIsChecked) == 0x000006, "Member 'BP_CheckboxEntry_C_ExecuteUbergraph_BP_CheckboxEntry::K2Node_ComponentBoundEvent_bIsChecked' has a wrong offset!");
static_assert(offsetof(BP_CheckboxEntry_C_ExecuteUbergraph_BP_CheckboxEntry, CallFunc_IsConsolePlatform_ReturnValue) == 0x000007, "Member 'BP_CheckboxEntry_C_ExecuteUbergraph_BP_CheckboxEntry::CallFunc_IsConsolePlatform_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CheckboxEntry_C_ExecuteUbergraph_BP_CheckboxEntry, CallFunc_BooleanAND_ReturnValue) == 0x000008, "Member 'BP_CheckboxEntry_C_ExecuteUbergraph_BP_CheckboxEntry::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CheckboxEntry_C_ExecuteUbergraph_BP_CheckboxEntry, K2Node_Event_MyGeometry) == 0x00000C, "Member 'BP_CheckboxEntry_C_ExecuteUbergraph_BP_CheckboxEntry::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(BP_CheckboxEntry_C_ExecuteUbergraph_BP_CheckboxEntry, K2Node_Event_InDeltaTime) == 0x000044, "Member 'BP_CheckboxEntry_C_ExecuteUbergraph_BP_CheckboxEntry::K2Node_Event_InDeltaTime' has a wrong offset!");
static_assert(offsetof(BP_CheckboxEntry_C_ExecuteUbergraph_BP_CheckboxEntry, CallFunc_IsHovered_ReturnValue) == 0x000048, "Member 'BP_CheckboxEntry_C_ExecuteUbergraph_BP_CheckboxEntry::CallFunc_IsHovered_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CheckboxEntry_C_ExecuteUbergraph_BP_CheckboxEntry, CallFunc_IsChecked_ReturnValue) == 0x000049, "Member 'BP_CheckboxEntry_C_ExecuteUbergraph_BP_CheckboxEntry::CallFunc_IsChecked_ReturnValue' has a wrong offset!");

// Function BP_CheckboxEntry.BP_CheckboxEntry_C.Tick
// 0x003C (0x003C - 0x0000)
struct BP_CheckboxEntry_C_Tick final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                         InDeltaTime;                                       // 0x0038(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_CheckboxEntry_C_Tick) == 0x000004, "Wrong alignment on BP_CheckboxEntry_C_Tick");
static_assert(sizeof(BP_CheckboxEntry_C_Tick) == 0x00003C, "Wrong size on BP_CheckboxEntry_C_Tick");
static_assert(offsetof(BP_CheckboxEntry_C_Tick, MyGeometry) == 0x000000, "Member 'BP_CheckboxEntry_C_Tick::MyGeometry' has a wrong offset!");
static_assert(offsetof(BP_CheckboxEntry_C_Tick, InDeltaTime) == 0x000038, "Member 'BP_CheckboxEntry_C_Tick::InDeltaTime' has a wrong offset!");

// Function BP_CheckboxEntry.BP_CheckboxEntry_C.BndEvt__EntryCheckbox_K2Node_ComponentBoundEvent_31_OnCheckBoxComponentStateChanged__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct BP_CheckboxEntry_C_BndEvt__EntryCheckbox_K2Node_ComponentBoundEvent_31_OnCheckBoxComponentStateChanged__DelegateSignature final
{
public:
	bool                                          bIsChecked;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_CheckboxEntry_C_BndEvt__EntryCheckbox_K2Node_ComponentBoundEvent_31_OnCheckBoxComponentStateChanged__DelegateSignature) == 0x000001, "Wrong alignment on BP_CheckboxEntry_C_BndEvt__EntryCheckbox_K2Node_ComponentBoundEvent_31_OnCheckBoxComponentStateChanged__DelegateSignature");
static_assert(sizeof(BP_CheckboxEntry_C_BndEvt__EntryCheckbox_K2Node_ComponentBoundEvent_31_OnCheckBoxComponentStateChanged__DelegateSignature) == 0x000001, "Wrong size on BP_CheckboxEntry_C_BndEvt__EntryCheckbox_K2Node_ComponentBoundEvent_31_OnCheckBoxComponentStateChanged__DelegateSignature");
static_assert(offsetof(BP_CheckboxEntry_C_BndEvt__EntryCheckbox_K2Node_ComponentBoundEvent_31_OnCheckBoxComponentStateChanged__DelegateSignature, bIsChecked) == 0x000000, "Member 'BP_CheckboxEntry_C_BndEvt__EntryCheckbox_K2Node_ComponentBoundEvent_31_OnCheckBoxComponentStateChanged__DelegateSignature::bIsChecked' has a wrong offset!");

// Function BP_CheckboxEntry.BP_CheckboxEntry_C.SetCheckedState
// 0x0001 (0x0001 - 0x0000)
struct BP_CheckboxEntry_C_SetCheckedState final
{
public:
	ECheckBoxState                                Value;                                             // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_CheckboxEntry_C_SetCheckedState) == 0x000001, "Wrong alignment on BP_CheckboxEntry_C_SetCheckedState");
static_assert(sizeof(BP_CheckboxEntry_C_SetCheckedState) == 0x000001, "Wrong size on BP_CheckboxEntry_C_SetCheckedState");
static_assert(offsetof(BP_CheckboxEntry_C_SetCheckedState, Value) == 0x000000, "Member 'BP_CheckboxEntry_C_SetCheckedState::Value' has a wrong offset!");

// Function BP_CheckboxEntry.BP_CheckboxEntry_C.GetCheckedState
// 0x0002 (0x0002 - 0x0000)
struct BP_CheckboxEntry_C_GetCheckedState final
{
public:
	ECheckBoxState                                Value;                                             // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECheckBoxState                                CallFunc_GetCheckedState_ReturnValue;              // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_CheckboxEntry_C_GetCheckedState) == 0x000001, "Wrong alignment on BP_CheckboxEntry_C_GetCheckedState");
static_assert(sizeof(BP_CheckboxEntry_C_GetCheckedState) == 0x000002, "Wrong size on BP_CheckboxEntry_C_GetCheckedState");
static_assert(offsetof(BP_CheckboxEntry_C_GetCheckedState, Value) == 0x000000, "Member 'BP_CheckboxEntry_C_GetCheckedState::Value' has a wrong offset!");
static_assert(offsetof(BP_CheckboxEntry_C_GetCheckedState, CallFunc_GetCheckedState_ReturnValue) == 0x000001, "Member 'BP_CheckboxEntry_C_GetCheckedState::CallFunc_GetCheckedState_ReturnValue' has a wrong offset!");

// Function BP_CheckboxEntry.BP_CheckboxEntry_C.SetIsChecked
// 0x0001 (0x0001 - 0x0000)
struct BP_CheckboxEntry_C_SetIsChecked final
{
public:
	bool                                          Value;                                             // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_CheckboxEntry_C_SetIsChecked) == 0x000001, "Wrong alignment on BP_CheckboxEntry_C_SetIsChecked");
static_assert(sizeof(BP_CheckboxEntry_C_SetIsChecked) == 0x000001, "Wrong size on BP_CheckboxEntry_C_SetIsChecked");
static_assert(offsetof(BP_CheckboxEntry_C_SetIsChecked, Value) == 0x000000, "Member 'BP_CheckboxEntry_C_SetIsChecked::Value' has a wrong offset!");

// Function BP_CheckboxEntry.BP_CheckboxEntry_C.IsChecked
// 0x0002 (0x0002 - 0x0000)
struct BP_CheckboxEntry_C_IsChecked final
{
public:
	bool                                          Value;                                             // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsChecked_ReturnValue;                    // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_CheckboxEntry_C_IsChecked) == 0x000001, "Wrong alignment on BP_CheckboxEntry_C_IsChecked");
static_assert(sizeof(BP_CheckboxEntry_C_IsChecked) == 0x000002, "Wrong size on BP_CheckboxEntry_C_IsChecked");
static_assert(offsetof(BP_CheckboxEntry_C_IsChecked, Value) == 0x000000, "Member 'BP_CheckboxEntry_C_IsChecked::Value' has a wrong offset!");
static_assert(offsetof(BP_CheckboxEntry_C_IsChecked, CallFunc_IsChecked_ReturnValue) == 0x000001, "Member 'BP_CheckboxEntry_C_IsChecked::CallFunc_IsChecked_ReturnValue' has a wrong offset!");

}

