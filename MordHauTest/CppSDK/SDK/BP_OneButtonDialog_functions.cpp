﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_OneButtonDialog

#include "Basic.hpp"

#include "BP_OneButtonDialog_classes.hpp"
#include "BP_OneButtonDialog_parameters.hpp"


namespace SDK
{

// Function BP_OneButtonDialog.BP_OneButtonDialog_C.ExecuteUbergraph_BP_OneButtonDialog
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_OneButtonDialog_C::ExecuteUbergraph_BP_OneButtonDialog(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_OneButtonDialog_C", "ExecuteUbergraph_BP_OneButtonDialog");

	Params::BP_OneButtonDialog_C_ExecuteUbergraph_BP_OneButtonDialog Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_OneButtonDialog.BP_OneButtonDialog_C.BndEvt__BP_OneButtonDialog_BP_PromptButton_OneButtonDialog_K2Node_ComponentBoundEvent_0_onClicked__DelegateSignature
// (BlueprintEvent)

void UBP_OneButtonDialog_C::BndEvt__BP_OneButtonDialog_BP_PromptButton_OneButtonDialog_K2Node_ComponentBoundEvent_0_onClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_OneButtonDialog_C", "BndEvt__BP_OneButtonDialog_BP_PromptButton_OneButtonDialog_K2Node_ComponentBoundEvent_0_onClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_OneButtonDialog.BP_OneButtonDialog_C.Hide
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UBP_OneButtonDialog_C::Hide()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_OneButtonDialog_C", "Hide");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_OneButtonDialog.BP_OneButtonDialog_C.Show
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UBP_OneButtonDialog_C::Show()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_OneButtonDialog_C", "Show");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_OneButtonDialog.BP_OneButtonDialog_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBP_OneButtonDialog_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_OneButtonDialog_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_OneButtonDialog.BP_OneButtonDialog_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FKeyEvent                        InKeyEvent                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UBP_OneButtonDialog_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_OneButtonDialog_C", "OnKeyDown");

	Params::BP_OneButtonDialog_C_OnKeyDown Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InKeyEvent = std::move(InKeyEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

