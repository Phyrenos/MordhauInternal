﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_BreakdownAddPerk

#include "Basic.hpp"

#include "BP_BreakdownAddPerk_classes.hpp"
#include "BP_BreakdownAddPerk_parameters.hpp"


namespace SDK
{

// Function BP_BreakdownAddPerk.BP_BreakdownAddPerk_C.ExecuteUbergraph_BP_BreakdownAddPerk
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_BreakdownAddPerk_C::ExecuteUbergraph_BP_BreakdownAddPerk(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BreakdownAddPerk_C", "ExecuteUbergraph_BP_BreakdownAddPerk");

	Params::BP_BreakdownAddPerk_C_ExecuteUbergraph_BP_BreakdownAddPerk Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_BreakdownAddPerk.BP_BreakdownAddPerk_C.BndEvt__BP_BreakdownAddPerk_Button_0_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBP_BreakdownAddPerk_C::BndEvt__BP_BreakdownAddPerk_Button_0_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BreakdownAddPerk_C", "BndEvt__BP_BreakdownAddPerk_Button_0_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}

}

