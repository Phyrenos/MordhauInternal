﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_DestroyableDeployCover

#include "Basic.hpp"

#include "BP_DestroyableDeployCover_classes.hpp"
#include "BP_DestroyableDeployCover_parameters.hpp"


namespace SDK
{

// Function BP_DestroyableDeployCover.BP_DestroyableDeployCover_C.ExecuteUbergraph_BP_DestroyableDeployCover
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_DestroyableDeployCover_C::ExecuteUbergraph_BP_DestroyableDeployCover(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DestroyableDeployCover_C", "ExecuteUbergraph_BP_DestroyableDeployCover");

	Params::BP_DestroyableDeployCover_C_ExecuteUbergraph_BP_DestroyableDeployCover Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_DestroyableDeployCover.BP_DestroyableDeployCover_C.CheckCorrectTeam
// (BlueprintCallable, BlueprintEvent)

void ABP_DestroyableDeployCover_C::CheckCorrectTeam()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DestroyableDeployCover_C", "CheckCorrectTeam");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_DestroyableDeployCover.BP_DestroyableDeployCover_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_DestroyableDeployCover_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DestroyableDeployCover_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}

