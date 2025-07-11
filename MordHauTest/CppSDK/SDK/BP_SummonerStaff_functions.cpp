﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_SummonerStaff

#include "Basic.hpp"

#include "BP_SummonerStaff_classes.hpp"
#include "BP_SummonerStaff_parameters.hpp"


namespace SDK
{

// Function BP_SummonerStaff.BP_SummonerStaff_C.ExecuteUbergraph_BP_SummonerStaff
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SummonerStaff_C::ExecuteUbergraph_BP_SummonerStaff(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SummonerStaff_C", "ExecuteUbergraph_BP_SummonerStaff");

	Params::BP_SummonerStaff_C_ExecuteUbergraph_BP_SummonerStaff Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SummonerStaff.BP_SummonerStaff_C.ChangeLightIntensity
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    TurnOn                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_SummonerStaff_C::ChangeLightIntensity(bool TurnOn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SummonerStaff_C", "ChangeLightIntensity");

	Params::BP_SummonerStaff_C_ChangeLightIntensity Parms{};

	Parms.TurnOn = TurnOn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SummonerStaff.BP_SummonerStaff_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_SummonerStaff_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SummonerStaff_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SummonerStaff.BP_SummonerStaff_C.OnAttackStopped
// (Event, Public, BlueprintEvent)

void ABP_SummonerStaff_C::OnAttackStopped()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SummonerStaff_C", "OnAttackStopped");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SummonerStaff.BP_SummonerStaff_C.OnAttackStarted
// (Event, Public, BlueprintEvent)
// Parameters:
// EAttackMove                             Move                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Angle                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SummonerStaff_C::OnAttackStarted(EAttackMove Move, float Angle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SummonerStaff_C", "OnAttackStarted");

	Params::BP_SummonerStaff_C_OnAttackStarted Parms{};

	Parms.Move = Move;
	Parms.Angle = Angle;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SummonerStaff.BP_SummonerStaff_C.LightIntensity__UpdateFunc
// (BlueprintEvent)

void ABP_SummonerStaff_C::LightIntensity__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SummonerStaff_C", "LightIntensity__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SummonerStaff.BP_SummonerStaff_C.LightIntensity__FinishedFunc
// (BlueprintEvent)

void ABP_SummonerStaff_C::LightIntensity__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SummonerStaff_C", "LightIntensity__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}

}

