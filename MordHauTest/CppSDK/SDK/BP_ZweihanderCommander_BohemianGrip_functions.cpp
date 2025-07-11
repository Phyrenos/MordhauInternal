﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ZweihanderCommander_BohemianGrip

#include "Basic.hpp"

#include "BP_ZweihanderCommander_BohemianGrip_classes.hpp"
#include "BP_ZweihanderCommander_BohemianGrip_parameters.hpp"


namespace SDK
{

// Function BP_ZweihanderCommander_BohemianGrip.BP_ZweihanderCommander_BohemianGrip_C.ExecuteUbergraph_BP_ZweihanderCommander_BohemianGrip
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ZweihanderCommander_BohemianGrip_C::ExecuteUbergraph_BP_ZweihanderCommander_BohemianGrip(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ZweihanderCommander_BohemianGrip_C", "ExecuteUbergraph_BP_ZweihanderCommander_BohemianGrip");

	Params::BP_ZweihanderCommander_BohemianGrip_C_ExecuteUbergraph_BP_ZweihanderCommander_BohemianGrip Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ZweihanderCommander_BohemianGrip.BP_ZweihanderCommander_BohemianGrip_C.ReceiveTick
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ZweihanderCommander_BohemianGrip_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ZweihanderCommander_BohemianGrip_C", "ReceiveTick");

	Params::BP_ZweihanderCommander_BohemianGrip_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ZweihanderCommander_BohemianGrip.BP_ZweihanderCommander_BohemianGrip_C.ReceiveActorBeginOverlap
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ZweihanderCommander_BohemianGrip_C::ReceiveActorBeginOverlap(class AActor* OtherActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ZweihanderCommander_BohemianGrip_C", "ReceiveActorBeginOverlap");

	Params::BP_ZweihanderCommander_BohemianGrip_C_ReceiveActorBeginOverlap Parms{};

	Parms.OtherActor = OtherActor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ZweihanderCommander_BohemianGrip.BP_ZweihanderCommander_BohemianGrip_C.ReceiveBeginPlay
// (BlueprintCallable, BlueprintEvent)

void UBP_ZweihanderCommander_BohemianGrip_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ZweihanderCommander_BohemianGrip_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}

