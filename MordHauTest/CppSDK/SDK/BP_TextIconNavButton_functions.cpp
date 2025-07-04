﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_TextIconNavButton

#include "Basic.hpp"

#include "BP_TextIconNavButton_classes.hpp"
#include "BP_TextIconNavButton_parameters.hpp"


namespace SDK
{

// Function BP_TextIconNavButton.BP_TextIconNavButton_C.ExecuteUbergraph_BP_TextIconNavButton
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_TextIconNavButton_C::ExecuteUbergraph_BP_TextIconNavButton(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TextIconNavButton_C", "ExecuteUbergraph_BP_TextIconNavButton");

	Params::BP_TextIconNavButton_C_ExecuteUbergraph_BP_TextIconNavButton Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_TextIconNavButton.BP_TextIconNavButton_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_TextIconNavButton_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TextIconNavButton_C", "PreConstruct");

	Params::BP_TextIconNavButton_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_TextIconNavButton.BP_TextIconNavButton_C.BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBP_TextIconNavButton_C::BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TextIconNavButton_C", "BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_TextIconNavButton.BP_TextIconNavButton_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBP_TextIconNavButton_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TextIconNavButton_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_TextIconNavButton.BP_TextIconNavButton_C.Select
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_TextIconNavButton_C::Select()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TextIconNavButton_C", "Select");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_TextIconNavButton.BP_TextIconNavButton_C.DeSelect
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_TextIconNavButton_C::DeSelect()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TextIconNavButton_C", "DeSelect");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_TextIconNavButton.BP_TextIconNavButton_C.GetColorAndOpacity_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor                     ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FLinearColor UBP_TextIconNavButton_C::GetColorAndOpacity_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TextIconNavButton_C", "GetColorAndOpacity_0");

	Params::BP_TextIconNavButton_C_GetColorAndOpacity_0 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

