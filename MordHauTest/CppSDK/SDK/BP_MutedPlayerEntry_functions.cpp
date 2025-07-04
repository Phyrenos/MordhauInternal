﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_MutedPlayerEntry

#include "Basic.hpp"

#include "BP_MutedPlayerEntry_classes.hpp"
#include "BP_MutedPlayerEntry_parameters.hpp"


namespace SDK
{

// Function BP_MutedPlayerEntry.BP_MutedPlayerEntry_C.ExecuteUbergraph_BP_MutedPlayerEntry
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_MutedPlayerEntry_C::ExecuteUbergraph_BP_MutedPlayerEntry(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MutedPlayerEntry_C", "ExecuteUbergraph_BP_MutedPlayerEntry");

	Params::BP_MutedPlayerEntry_C_ExecuteUbergraph_BP_MutedPlayerEntry Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MutedPlayerEntry.BP_MutedPlayerEntry_C.BndEvt__Button_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)

void UBP_MutedPlayerEntry_C::BndEvt__Button_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MutedPlayerEntry_C", "BndEvt__Button_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MutedPlayerEntry.BP_MutedPlayerEntry_C.OnContextButtonClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Button_Index                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_MutedPlayerEntry_C::OnContextButtonClicked(int32 Button_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MutedPlayerEntry_C", "OnContextButtonClicked");

	Params::BP_MutedPlayerEntry_C_OnContextButtonClicked Parms{};

	Parms.Button_Index = Button_Index;

	UObject::ProcessEvent(Func, &Parms);
}

}

