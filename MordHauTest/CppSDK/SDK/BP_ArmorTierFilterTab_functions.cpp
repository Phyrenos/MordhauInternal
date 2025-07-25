﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ArmorTierFilterTab

#include "Basic.hpp"

#include "BP_ArmorTierFilterTab_classes.hpp"
#include "BP_ArmorTierFilterTab_parameters.hpp"


namespace SDK
{

// Function BP_ArmorTierFilterTab.BP_ArmorTierFilterTab_C.ExecuteUbergraph_BP_ArmorTierFilterTab
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ArmorTierFilterTab_C::ExecuteUbergraph_BP_ArmorTierFilterTab(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ArmorTierFilterTab_C", "ExecuteUbergraph_BP_ArmorTierFilterTab");

	Params::BP_ArmorTierFilterTab_C_ExecuteUbergraph_BP_ArmorTierFilterTab Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ArmorTierFilterTab.BP_ArmorTierFilterTab_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBP_ArmorTierFilterTab_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ArmorTierFilterTab_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ArmorTierFilterTab.BP_ArmorTierFilterTab_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBP_ArmorTierFilterTab_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ArmorTierFilterTab_C", "BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ArmorTierFilterTab.BP_ArmorTierFilterTab_C.Update
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_ArmorTierFilterTab_C::Update()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ArmorTierFilterTab_C", "Update");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ArmorTierFilterTab.BP_ArmorTierFilterTab_C.GetColorAndOpacity_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor                     ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FLinearColor UBP_ArmorTierFilterTab_C::GetColorAndOpacity_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ArmorTierFilterTab_C", "GetColorAndOpacity_0");

	Params::BP_ArmorTierFilterTab_C_GetColorAndOpacity_0 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_ArmorTierFilterTab.BP_ArmorTierFilterTab_C.Get_Button_0_ToolTipWidget_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UBP_ArmorTierFilterTab_C::Get_Button_0_ToolTipWidget_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ArmorTierFilterTab_C", "Get_Button_0_ToolTipWidget_0");

	Params::BP_ArmorTierFilterTab_C_Get_Button_0_ToolTipWidget_0 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_ArmorTierFilterTab.BP_ArmorTierFilterTab_C.GetVisibility_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility                        ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

ESlateVisibility UBP_ArmorTierFilterTab_C::GetVisibility_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ArmorTierFilterTab_C", "GetVisibility_0");

	Params::BP_ArmorTierFilterTab_C_GetVisibility_0 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_ArmorTierFilterTab.BP_ArmorTierFilterTab_C.GetbIsEnabled_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UBP_ArmorTierFilterTab_C::GetbIsEnabled_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ArmorTierFilterTab_C", "GetbIsEnabled_0");

	Params::BP_ArmorTierFilterTab_C_GetbIsEnabled_0 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

