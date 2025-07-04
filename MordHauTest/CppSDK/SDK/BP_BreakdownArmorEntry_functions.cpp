﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_BreakdownArmorEntry

#include "Basic.hpp"

#include "BP_BreakdownArmorEntry_classes.hpp"
#include "BP_BreakdownArmorEntry_parameters.hpp"


namespace SDK
{

// Function BP_BreakdownArmorEntry.BP_BreakdownArmorEntry_C.ExecuteUbergraph_BP_BreakdownArmorEntry
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_BreakdownArmorEntry_C::ExecuteUbergraph_BP_BreakdownArmorEntry(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BreakdownArmorEntry_C", "ExecuteUbergraph_BP_BreakdownArmorEntry");

	Params::BP_BreakdownArmorEntry_C_ExecuteUbergraph_BP_BreakdownArmorEntry Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_BreakdownArmorEntry.BP_BreakdownArmorEntry_C.BndEvt__Button_5_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBP_BreakdownArmorEntry_C::BndEvt__Button_5_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BreakdownArmorEntry_C", "BndEvt__Button_5_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BreakdownArmorEntry.BP_BreakdownArmorEntry_C.Update Entry
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCharacterGearCustomization      Character_Gear_Customization                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UBP_BreakdownArmorEntry_C::Update_Entry(const struct FCharacterGearCustomization& Character_Gear_Customization)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BreakdownArmorEntry_C", "Update Entry");

	Params::BP_BreakdownArmorEntry_C_Update_Entry Parms{};

	Parms.Character_Gear_Customization = std::move(Character_Gear_Customization);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_BreakdownArmorEntry.BP_BreakdownArmorEntry_C.Get_TextBlock_0_ColorAndOpacity_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateColor                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FSlateColor UBP_BreakdownArmorEntry_C::Get_TextBlock_0_ColorAndOpacity_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BreakdownArmorEntry_C", "Get_TextBlock_0_ColorAndOpacity_0");

	Params::BP_BreakdownArmorEntry_C_Get_TextBlock_0_ColorAndOpacity_0 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

