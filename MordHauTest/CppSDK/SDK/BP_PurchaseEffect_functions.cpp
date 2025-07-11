﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PurchaseEffect

#include "Basic.hpp"

#include "BP_PurchaseEffect_classes.hpp"
#include "BP_PurchaseEffect_parameters.hpp"


namespace SDK
{

// Function BP_PurchaseEffect.BP_PurchaseEffect_C.ExecuteUbergraph_BP_PurchaseEffect
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PurchaseEffect_C::ExecuteUbergraph_BP_PurchaseEffect(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PurchaseEffect_C", "ExecuteUbergraph_BP_PurchaseEffect");

	Params::BP_PurchaseEffect_C_ExecuteUbergraph_BP_PurchaseEffect Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PurchaseEffect.BP_PurchaseEffect_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PurchaseEffect_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PurchaseEffect_C", "ReceiveTick");

	Params::BP_PurchaseEffect_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PurchaseEffect.BP_PurchaseEffect_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_PurchaseEffect_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PurchaseEffect_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PurchaseEffect.BP_PurchaseEffect_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_PurchaseEffect_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PurchaseEffect_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}

