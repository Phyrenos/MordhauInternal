﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ClothShoulders

#include "Basic.hpp"

#include "BP_ClothShoulders_classes.hpp"
#include "BP_ClothShoulders_parameters.hpp"


namespace SDK
{

// Function BP_ClothShoulders.BP_ClothShoulders_C.ExecuteUbergraph_BP_ClothShoulders
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ClothShoulders_C::ExecuteUbergraph_BP_ClothShoulders(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ClothShoulders_C", "ExecuteUbergraph_BP_ClothShoulders");

	Params::BP_ClothShoulders_C_ExecuteUbergraph_BP_ClothShoulders Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ClothShoulders.BP_ClothShoulders_C.ReceiveTick
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ClothShoulders_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ClothShoulders_C", "ReceiveTick");

	Params::BP_ClothShoulders_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ClothShoulders.BP_ClothShoulders_C.ReceiveActorBeginOverlap
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ClothShoulders_C::ReceiveActorBeginOverlap(class AActor* OtherActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ClothShoulders_C", "ReceiveActorBeginOverlap");

	Params::BP_ClothShoulders_C_ReceiveActorBeginOverlap Parms{};

	Parms.OtherActor = OtherActor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ClothShoulders.BP_ClothShoulders_C.ReceiveBeginPlay
// (BlueprintCallable, BlueprintEvent)

void UBP_ClothShoulders_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ClothShoulders_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}

