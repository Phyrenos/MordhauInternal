﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_DemonHordeAbilityMotion

#include "Basic.hpp"

#include "BP_DemonHordeAbilityMotion_classes.hpp"
#include "BP_DemonHordeAbilityMotion_parameters.hpp"


namespace SDK
{

// Function BP_DemonHordeAbilityMotion.BP_DemonHordeAbilityMotion_C.ExecuteUbergraph_BP_DemonHordeAbilityMotion
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_DemonHordeAbilityMotion_C::ExecuteUbergraph_BP_DemonHordeAbilityMotion(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DemonHordeAbilityMotion_C", "ExecuteUbergraph_BP_DemonHordeAbilityMotion");

	Params::BP_DemonHordeAbilityMotion_C_ExecuteUbergraph_BP_DemonHordeAbilityMotion Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_DemonHordeAbilityMotion.BP_DemonHordeAbilityMotion_C.On Commit Successful
// (BlueprintCallable, BlueprintEvent)

void UBP_DemonHordeAbilityMotion_C::On_Commit_Successful()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DemonHordeAbilityMotion_C", "On Commit Successful");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_DemonHordeAbilityMotion.BP_DemonHordeAbilityMotion_C.OnEnded
// (Event, Public, BlueprintEvent)

void UBP_DemonHordeAbilityMotion_C::OnEnded()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DemonHordeAbilityMotion_C", "OnEnded");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_DemonHordeAbilityMotion.BP_DemonHordeAbilityMotion_C.OnBegin
// (Event, Public, BlueprintEvent)

void UBP_DemonHordeAbilityMotion_C::OnBegin()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DemonHordeAbilityMotion_C", "OnBegin");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_DemonHordeAbilityMotion.BP_DemonHordeAbilityMotion_C.CommitAbilityCost
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Return_Value                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_DemonHordeAbilityMotion_C::CommitAbilityCost(bool* Return_Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DemonHordeAbilityMotion_C", "CommitAbilityCost");

	Params::BP_DemonHordeAbilityMotion_C_CommitAbilityCost Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Return_Value != nullptr)
		*Return_Value = Parms.Return_Value;
}


// Function BP_DemonHordeAbilityMotion.BP_DemonHordeAbilityMotion_C.CanAffordAbilityCost
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    Return_Value                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_DemonHordeAbilityMotion_C::CanAffordAbilityCost(bool* Return_Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DemonHordeAbilityMotion_C", "CanAffordAbilityCost");

	Params::BP_DemonHordeAbilityMotion_C_CanAffordAbilityCost Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Return_Value != nullptr)
		*Return_Value = Parms.Return_Value;
}

}

