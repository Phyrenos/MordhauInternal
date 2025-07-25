﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_BleedDebuff

#include "Basic.hpp"

#include "BP_BleedDebuff_classes.hpp"
#include "BP_BleedDebuff_parameters.hpp"


namespace SDK
{

// Function BP_BleedDebuff.BP_BleedDebuff_C.ExecuteUbergraph_BP_BleedDebuff
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_BleedDebuff_C::ExecuteUbergraph_BP_BleedDebuff(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BleedDebuff_C", "ExecuteUbergraph_BP_BleedDebuff");

	Params::BP_BleedDebuff_C_ExecuteUbergraph_BP_BleedDebuff Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_BleedDebuff.BP_BleedDebuff_C.OnDied
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AAdvancedCharacter*               Character                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_BleedDebuff_C::OnDied(class AAdvancedCharacter* Character)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BleedDebuff_C", "OnDied");

	Params::BP_BleedDebuff_C_OnDied Parms{};

	Parms.Character = Character;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_BleedDebuff.BP_BleedDebuff_C.DamageLoop
// (BlueprintCallable, BlueprintEvent)

void UBP_BleedDebuff_C::DamageLoop()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BleedDebuff_C", "DamageLoop");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BleedDebuff.BP_BleedDebuff_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UBP_BleedDebuff_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BleedDebuff_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}

