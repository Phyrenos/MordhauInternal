﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_VictoryPopup

#include "Basic.hpp"

#include "BP_VictoryPopup_classes.hpp"
#include "BP_VictoryPopup_parameters.hpp"


namespace SDK
{

// Function BP_VictoryPopup.BP_VictoryPopup_C.ExecuteUbergraph_BP_VictoryPopup
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_VictoryPopup_C::ExecuteUbergraph_BP_VictoryPopup(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_VictoryPopup_C", "ExecuteUbergraph_BP_VictoryPopup");

	Params::BP_VictoryPopup_C_ExecuteUbergraph_BP_VictoryPopup Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_VictoryPopup.BP_VictoryPopup_C.Show
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             Main_Text                                              (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                             Sub_Text                                               (BlueprintVisible, BlueprintReadOnly, Parm)
// float                                   Duration                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_VictoryPopup_C::Show(const class FText& Main_Text, const class FText& Sub_Text, float Duration)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_VictoryPopup_C", "Show");

	Params::BP_VictoryPopup_C_Show Parms{};

	Parms.Main_Text = std::move(Main_Text);
	Parms.Sub_Text = std::move(Sub_Text);
	Parms.Duration = Duration;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_VictoryPopup.BP_VictoryPopup_C.On Animation Finished
// (BlueprintCallable, BlueprintEvent)

void UBP_VictoryPopup_C::On_Animation_Finished()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_VictoryPopup_C", "On Animation Finished");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_VictoryPopup.BP_VictoryPopup_C.Timer Done
// (BlueprintCallable, BlueprintEvent)

void UBP_VictoryPopup_C::Timer_Done()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_VictoryPopup_C", "Timer Done");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_VictoryPopup.BP_VictoryPopup_C.GetVisibility_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility                        ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

ESlateVisibility UBP_VictoryPopup_C::GetVisibility_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_VictoryPopup_C", "GetVisibility_0");

	Params::BP_VictoryPopup_C_GetVisibility_0 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

