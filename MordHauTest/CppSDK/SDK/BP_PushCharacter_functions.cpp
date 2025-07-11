﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PushCharacter

#include "Basic.hpp"

#include "BP_PushCharacter_classes.hpp"
#include "BP_PushCharacter_parameters.hpp"


namespace SDK
{

// Function BP_PushCharacter.BP_PushCharacter_C.ExecuteUbergraph_BP_PushCharacter
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PushCharacter_C::ExecuteUbergraph_BP_PushCharacter(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PushCharacter_C", "ExecuteUbergraph_BP_PushCharacter");

	Params::BP_PushCharacter_C_ExecuteUbergraph_BP_PushCharacter Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PushCharacter.BP_PushCharacter_C.OnExceededTimeOutOfBounds
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_PushCharacter_C::OnExceededTimeOutOfBounds()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PushCharacter_C", "OnExceededTimeOutOfBounds");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PushCharacter.BP_PushCharacter_C.GetOutOfBoundsSubtext
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             Subtext                                                (Parm, OutParm)

void ABP_PushCharacter_C::GetOutOfBoundsSubtext(class FText* Subtext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PushCharacter_C", "GetOutOfBoundsSubtext");

	Params::BP_PushCharacter_C_GetOutOfBoundsSubtext Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Subtext != nullptr)
		*Subtext = std::move(Parms.Subtext);
}


// Function BP_PushCharacter.BP_PushCharacter_C.GetOutOfBoundsText
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             Header                                                 (Parm, OutParm)

void ABP_PushCharacter_C::GetOutOfBoundsText(class FText* Header)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PushCharacter_C", "GetOutOfBoundsText");

	Params::BP_PushCharacter_C_GetOutOfBoundsText Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Header != nullptr)
		*Header = std::move(Parms.Header);
}

}

