﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_DropdownEntry

#include "Basic.hpp"

#include "BP_DropdownEntry_classes.hpp"
#include "BP_DropdownEntry_parameters.hpp"


namespace SDK
{

// Function BP_DropdownEntry.BP_DropdownEntry_C.ExecuteUbergraph_BP_DropdownEntry
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_DropdownEntry_C::ExecuteUbergraph_BP_DropdownEntry(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DropdownEntry_C", "ExecuteUbergraph_BP_DropdownEntry");

	Params::BP_DropdownEntry_C_ExecuteUbergraph_BP_DropdownEntry Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_DropdownEntry.BP_DropdownEntry_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_DropdownEntry_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DropdownEntry_C", "Tick");

	Params::BP_DropdownEntry_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_DropdownEntry.BP_DropdownEntry_C.BndEvt__ComboBoxText_90_K2Node_ComponentBoundEvent_115_OnSelectionChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FText                             SelectedItem                                           (BlueprintVisible, BlueprintReadOnly, Parm)
// ESelectInfo                             SelectionType                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_DropdownEntry_C::BndEvt__ComboBoxText_90_K2Node_ComponentBoundEvent_115_OnSelectionChangedEvent__DelegateSignature(const class FText& SelectedItem, ESelectInfo SelectionType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DropdownEntry_C", "BndEvt__ComboBoxText_90_K2Node_ComponentBoundEvent_115_OnSelectionChangedEvent__DelegateSignature");

	Params::BP_DropdownEntry_C_BndEvt__ComboBoxText_90_K2Node_ComponentBoundEvent_115_OnSelectionChangedEvent__DelegateSignature Parms{};

	Parms.SelectedItem = std::move(SelectedItem);
	Parms.SelectionType = SelectionType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_DropdownEntry.BP_DropdownEntry_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBP_DropdownEntry_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DropdownEntry_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_DropdownEntry.BP_DropdownEntry_C.Get_DropdownGamepadControls_Visibility_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility                        ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

ESlateVisibility UBP_DropdownEntry_C::Get_DropdownGamepadControls_Visibility_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DropdownEntry_C", "Get_DropdownGamepadControls_Visibility_0");

	Params::BP_DropdownEntry_C_Get_DropdownGamepadControls_Visibility_0 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_DropdownEntry.BP_DropdownEntry_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FKeyEvent                        InKeyEvent                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UBP_DropdownEntry_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DropdownEntry_C", "OnKeyDown");

	Params::BP_DropdownEntry_C_OnKeyDown Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InKeyEvent = std::move(InKeyEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

