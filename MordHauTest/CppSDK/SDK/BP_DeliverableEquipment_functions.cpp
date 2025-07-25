﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_DeliverableEquipment

#include "Basic.hpp"

#include "BP_DeliverableEquipment_classes.hpp"
#include "BP_DeliverableEquipment_parameters.hpp"


namespace SDK
{

// Function BP_DeliverableEquipment.BP_DeliverableEquipment_C.ExecuteUbergraph_BP_DeliverableEquipment
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_DeliverableEquipment_C::ExecuteUbergraph_BP_DeliverableEquipment(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DeliverableEquipment_C", "ExecuteUbergraph_BP_DeliverableEquipment");

	Params::BP_DeliverableEquipment_C_ExecuteUbergraph_BP_DeliverableEquipment Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_DeliverableEquipment.BP_DeliverableEquipment_C.OnHeldInteractionStart
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMordhauCharacter*                Character                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_DeliverableEquipment_C::OnHeldInteractionStart(class AMordhauCharacter* Character)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DeliverableEquipment_C", "OnHeldInteractionStart");

	Params::BP_DeliverableEquipment_C_OnHeldInteractionStart Parms{};

	Parms.Character = Character;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_DeliverableEquipment.BP_DeliverableEquipment_C.OnBroken
// (BlueprintCallable, BlueprintEvent)

void ABP_DeliverableEquipment_C::OnBroken()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DeliverableEquipment_C", "OnBroken");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_DeliverableEquipment.BP_DeliverableEquipment_C.OnPickedUp
// (Event, Public, BlueprintEvent)
// Parameters:
// class AMordhauCharacter*                Character                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_DeliverableEquipment_C::OnPickedUp(class AMordhauCharacter* Character)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DeliverableEquipment_C", "OnPickedUp");

	Params::BP_DeliverableEquipment_C_OnPickedUp Parms{};

	Parms.Character = Character;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_DeliverableEquipment.BP_DeliverableEquipment_C.FireProjectile
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          Origin                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                         Orientation                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
// class AController*                      OwningController                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   ExpectedDelay                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_DeliverableEquipment_C::FireProjectile(const struct FVector& Origin, const struct FRotator& Orientation, class AController* OwningController, float ExpectedDelay)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DeliverableEquipment_C", "FireProjectile");

	Params::BP_DeliverableEquipment_C_FireProjectile Parms{};

	Parms.Origin = std::move(Origin);
	Parms.Orientation = std::move(Orientation);
	Parms.OwningController = OwningController;
	Parms.ExpectedDelay = ExpectedDelay;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_DeliverableEquipment.BP_DeliverableEquipment_C.OnThud
// (Event, Public, BlueprintEvent)

void ABP_DeliverableEquipment_C::OnThud()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DeliverableEquipment_C", "OnThud");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_DeliverableEquipment.BP_DeliverableEquipment_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_DeliverableEquipment_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DeliverableEquipment_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_DeliverableEquipment.BP_DeliverableEquipment_C.Consume
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_DeliverableEquipment_C::Consume()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DeliverableEquipment_C", "Consume");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_DeliverableEquipment.BP_DeliverableEquipment_C.OnRep_Broke
// (BlueprintCallable, BlueprintEvent)

void ABP_DeliverableEquipment_C::OnRep_Broke()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DeliverableEquipment_C", "OnRep_Broke");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_DeliverableEquipment.BP_DeliverableEquipment_C.Break
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_DeliverableEquipment_C::Break()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DeliverableEquipment_C", "Break");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_DeliverableEquipment.BP_DeliverableEquipment_C.CanHeldInteract
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AMordhauCharacter*                Character                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABP_DeliverableEquipment_C::CanHeldInteract(class AMordhauCharacter* Character) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DeliverableEquipment_C", "CanHeldInteract");

	Params::BP_DeliverableEquipment_C_CanHeldInteract Parms{};

	Parms.Character = Character;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_DeliverableEquipment.BP_DeliverableEquipment_C.CanInteract
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AMordhauCharacter*                Character                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABP_DeliverableEquipment_C::CanInteract(class AMordhauCharacter* Character) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DeliverableEquipment_C", "CanInteract");

	Params::BP_DeliverableEquipment_C_CanInteract Parms{};

	Parms.Character = Character;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

