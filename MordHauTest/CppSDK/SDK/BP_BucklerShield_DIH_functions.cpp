﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_BucklerShield_DIH

#include "Basic.hpp"

#include "BP_BucklerShield_DIH_classes.hpp"
#include "BP_BucklerShield_DIH_parameters.hpp"


namespace SDK
{

// Function BP_BucklerShield_DIH.BP_BucklerShield_DIH_C.ExecuteUbergraph_BP_BucklerShield_DIH
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BucklerShield_DIH_C::ExecuteUbergraph_BP_BucklerShield_DIH(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BucklerShield_DIH_C", "ExecuteUbergraph_BP_BucklerShield_DIH");

	Params::BP_BucklerShield_DIH_C_ExecuteUbergraph_BP_BucklerShield_DIH Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_BucklerShield_DIH.BP_BucklerShield_DIH_C.OnBlockedMeleeAttack
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHitResult                       HitResult                                              (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class AMordhauCharacter*                Attacker                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BucklerShield_DIH_C::OnBlockedMeleeAttack(const struct FHitResult& HitResult, class AMordhauCharacter* Attacker)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BucklerShield_DIH_C", "OnBlockedMeleeAttack");

	Params::BP_BucklerShield_DIH_C_OnBlockedMeleeAttack Parms{};

	Parms.HitResult = std::move(HitResult);
	Parms.Attacker = Attacker;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_BucklerShield_DIH.BP_BucklerShield_DIH_C.OnEquipped
// (Event, Public, BlueprintEvent)
// Parameters:
// class AMordhauCharacter*                Character                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BucklerShield_DIH_C::OnEquipped(class AMordhauCharacter* Character)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BucklerShield_DIH_C", "OnEquipped");

	Params::BP_BucklerShield_DIH_C_OnEquipped Parms{};

	Parms.Character = Character;

	UObject::ProcessEvent(Func, &Parms);
}

}

