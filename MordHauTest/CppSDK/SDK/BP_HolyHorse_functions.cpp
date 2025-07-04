﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_HolyHorse

#include "Basic.hpp"

#include "BP_HolyHorse_classes.hpp"
#include "BP_HolyHorse_parameters.hpp"


namespace SDK
{

// Function BP_HolyHorse.BP_HolyHorse_C.ExecuteUbergraph_BP_HolyHorse
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_HolyHorse_C::ExecuteUbergraph_BP_HolyHorse(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HolyHorse_C", "ExecuteUbergraph_BP_HolyHorse");

	Params::BP_HolyHorse_C_ExecuteUbergraph_BP_HolyHorse Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_HolyHorse.BP_HolyHorse_C.RegenLoop
// (BlueprintCallable, BlueprintEvent)

void ABP_HolyHorse_C::RegenLoop()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HolyHorse_C", "RegenLoop");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_HolyHorse.BP_HolyHorse_C.HealEffectsSelfMulti
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABP_HolyHorse_C::HealEffectsSelfMulti()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HolyHorse_C", "HealEffectsSelfMulti");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_HolyHorse.BP_HolyHorse_C.HealEffectsMulti
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          Location                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_HolyHorse_C::HealEffectsMulti(const struct FVector& Location)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HolyHorse_C", "HealEffectsMulti");

	Params::BP_HolyHorse_C_HealEffectsMulti Parms{};

	Parms.Location = std::move(Location);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_HolyHorse.BP_HolyHorse_C.HealLoop
// (BlueprintCallable, BlueprintEvent)

void ABP_HolyHorse_C::HealLoop()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HolyHorse_C", "HealLoop");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_HolyHorse.BP_HolyHorse_C.ApplyBlessing
// (BlueprintCallable, BlueprintEvent)

void ABP_HolyHorse_C::ApplyBlessing()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HolyHorse_C", "ApplyBlessing");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_HolyHorse.BP_HolyHorse_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_HolyHorse_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HolyHorse_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_HolyHorse.BP_HolyHorse_C.OnDied
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   Angle                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EMordhauDamageType                      Type                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                                   SubType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             bone                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          Point                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           Source                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           Agent                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_HolyHorse_C::OnDied(float Angle, EMordhauDamageType Type, uint8 SubType, class FName bone, const struct FVector& Point, class AActor* Source, class AActor* Agent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HolyHorse_C", "OnDied");

	Params::BP_HolyHorse_C_OnDied Parms{};

	Parms.Angle = Angle;
	Parms.Type = Type;
	Parms.SubType = SubType;
	Parms.bone = bone;
	Parms.Point = std::move(Point);
	Parms.Source = Source;
	Parms.Agent = Agent;

	UObject::ProcessEvent(Func, &Parms);
}

}

