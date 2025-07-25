﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_LegsPickup

#include "Basic.hpp"

#include "BP_LegsPickup_classes.hpp"
#include "BP_LegsPickup_parameters.hpp"


namespace SDK
{

// Function BP_LegsPickup.BP_LegsPickup_C.CanInteract
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AMordhauCharacter*                Character                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABP_LegsPickup_C::CanInteract(class AMordhauCharacter* Character) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LegsPickup_C", "CanInteract");

	Params::BP_LegsPickup_C_CanInteract Parms{};

	Parms.Character = Character;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

