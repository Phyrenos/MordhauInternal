﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PushPlayerController

#include "Basic.hpp"

#include "BP_PushPlayerController_classes.hpp"
#include "BP_PushPlayerController_parameters.hpp"


namespace SDK
{

// Function BP_PushPlayerController.BP_PushPlayerController_C.ExecuteUbergraph_BP_PushPlayerController
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PushPlayerController_C::ExecuteUbergraph_BP_PushPlayerController(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PushPlayerController_C", "ExecuteUbergraph_BP_PushPlayerController");

	Params::BP_PushPlayerController_C_ExecuteUbergraph_BP_PushPlayerController Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PushPlayerController.BP_PushPlayerController_C.OnReceivedAssistScore
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   Percentage                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AMordhauCharacter*                Killed                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PushPlayerController_C::OnReceivedAssistScore(float Percentage, class AMordhauCharacter* Killed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PushPlayerController_C", "OnReceivedAssistScore");

	Params::BP_PushPlayerController_C_OnReceivedAssistScore Parms{};

	Parms.Percentage = Percentage;
	Parms.Killed = Killed;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PushPlayerController.BP_PushPlayerController_C.OnReceivedKillScore
// (Event, Public, BlueprintEvent)
// Parameters:
// class AMordhauCharacter*                Killed                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PushPlayerController_C::OnReceivedKillScore(class AMordhauCharacter* Killed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PushPlayerController_C", "OnReceivedKillScore");

	Params::BP_PushPlayerController_C_OnReceivedKillScore Parms{};

	Parms.Killed = Killed;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PushPlayerController.BP_PushPlayerController_C.ShowCurrentObjective
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    PlayHorn                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_PushPlayerController_C::ShowCurrentObjective(bool PlayHorn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PushPlayerController_C", "ShowCurrentObjective");

	Params::BP_PushPlayerController_C_ShowCurrentObjective Parms{};

	Parms.PlayHorn = PlayHorn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PushPlayerController.BP_PushPlayerController_C.OnAfterPossess
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn*                            APawn                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PushPlayerController_C::OnAfterPossess(class APawn* APawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PushPlayerController_C", "OnAfterPossess");

	Params::BP_PushPlayerController_C_OnAfterPossess Parms{};

	Parms.APawn = APawn;

	UObject::ProcessEvent(Func, &Parms);
}

}

