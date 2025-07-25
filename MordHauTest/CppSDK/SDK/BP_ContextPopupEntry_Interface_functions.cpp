﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ContextPopupEntry_Interface

#include "Basic.hpp"

#include "BP_ContextPopupEntry_Interface_classes.hpp"
#include "BP_ContextPopupEntry_Interface_parameters.hpp"


namespace SDK
{

// Function BP_ContextPopupEntry_Interface.BP_ContextPopupEntry_Interface_C.ExecuteUbergraph_BP_ContextPopupEntry_Interface
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ContextPopupEntry_Interface_C::ExecuteUbergraph_BP_ContextPopupEntry_Interface(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ContextPopupEntry_Interface_C", "ExecuteUbergraph_BP_ContextPopupEntry_Interface");

	Params::BP_ContextPopupEntry_Interface_C_ExecuteUbergraph_BP_ContextPopupEntry_Interface Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ContextPopupEntry_Interface.BP_ContextPopupEntry_Interface_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)

void UBP_ContextPopupEntry_Interface_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ContextPopupEntry_Interface_C", "BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ContextPopupEntry_Interface.BP_ContextPopupEntry_Interface_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBP_ContextPopupEntry_Interface_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ContextPopupEntry_Interface_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ContextPopupEntry_Interface.BP_ContextPopupEntry_Interface_C.GetVisibility_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility                        ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

ESlateVisibility UBP_ContextPopupEntry_Interface_C::GetVisibility_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ContextPopupEntry_Interface_C", "GetVisibility_0");

	Params::BP_ContextPopupEntry_Interface_C_GetVisibility_0 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

