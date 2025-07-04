﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_HordeChestBase

#include "Basic.hpp"

#include "BP_HordeChestBase_classes.hpp"
#include "BP_HordeChestBase_parameters.hpp"


namespace SDK
{

// Function BP_HordeChestBase.BP_HordeChestBase_C.ExecuteUbergraph_BP_HordeChestBase
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_HordeChestBase_C::ExecuteUbergraph_BP_HordeChestBase(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HordeChestBase_C", "ExecuteUbergraph_BP_HordeChestBase");

	Params::BP_HordeChestBase_C_ExecuteUbergraph_BP_HordeChestBase Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_HordeChestBase.BP_HordeChestBase_C.ReceiveAnyDamage
// (BlueprintAuthorityOnly, Event, Public, BlueprintEvent)
// Parameters:
// float                                   Damage                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDamageType*                      DamageType                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                      InstigatedBy                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           DamageCauser                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_HordeChestBase_C::ReceiveAnyDamage(float Damage, const class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HordeChestBase_C", "ReceiveAnyDamage");

	Params::BP_HordeChestBase_C_ReceiveAnyDamage Parms{};

	Parms.Damage = Damage;
	Parms.DamageType = DamageType;
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_HordeChestBase.BP_HordeChestBase_C.OnInteractionStart
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMordhauCharacter*                Character                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_HordeChestBase_C::OnInteractionStart(class AMordhauCharacter* Character)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HordeChestBase_C", "OnInteractionStart");

	Params::BP_HordeChestBase_C_OnInteractionStart Parms{};

	Parms.Character = Character;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_HordeChestBase.BP_HordeChestBase_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_HordeChestBase_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HordeChestBase_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_HordeChestBase.BP_HordeChestBase_C.SetAvailability
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    NewAvailable                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_HordeChestBase_C::SetAvailability(bool NewAvailable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HordeChestBase_C", "SetAvailability");

	Params::BP_HordeChestBase_C_SetAvailability Parms{};

	Parms.NewAvailable = NewAvailable;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_HordeChestBase.BP_HordeChestBase_C.UpdateVisuals
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_HordeChestBase_C::UpdateVisuals()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HordeChestBase_C", "UpdateVisuals");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_HordeChestBase.BP_HordeChestBase_C.CanInteract
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AMordhauCharacter*                Character                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABP_HordeChestBase_C::CanInteract(class AMordhauCharacter* Character) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HordeChestBase_C", "CanInteract");

	Params::BP_HordeChestBase_C_CanInteract Parms{};

	Parms.Character = Character;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

