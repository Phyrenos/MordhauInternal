﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_MordhauProjectile

#include "Basic.hpp"

#include "BP_MordhauProjectile_classes.hpp"
#include "BP_MordhauProjectile_parameters.hpp"


namespace SDK
{

// Function BP_MordhauProjectile.BP_MordhauProjectile_C.ExecuteUbergraph_BP_MordhauProjectile
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MordhauProjectile_C::ExecuteUbergraph_BP_MordhauProjectile(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MordhauProjectile_C", "ExecuteUbergraph_BP_MordhauProjectile");

	Params::BP_MordhauProjectile_C_ExecuteUbergraph_BP_MordhauProjectile Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MordhauProjectile.BP_MordhauProjectile_C.OnProjectileDamagedDamagable
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class UDamageableComponent*             DamagableComp                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bWillKill                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                          WorldLocation                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             bone                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MordhauProjectile_C::OnProjectileDamagedDamagable(class UDamageableComponent* DamagableComp, bool bWillKill, const struct FVector& WorldLocation, class FName bone)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MordhauProjectile_C", "OnProjectileDamagedDamagable");

	Params::BP_MordhauProjectile_C_OnProjectileDamagedDamagable Parms{};

	Parms.DamagableComp = DamagableComp;
	Parms.bWillKill = bWillKill;
	Parms.WorldLocation = std::move(WorldLocation);
	Parms.bone = bone;

	UObject::ProcessEvent(Func, &Parms);
}

}

