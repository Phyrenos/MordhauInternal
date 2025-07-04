﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_SoftwareCursor

#include "Basic.hpp"

#include "BP_SoftwareCursor_classes.hpp"
#include "BP_SoftwareCursor_parameters.hpp"


namespace SDK
{

// Function BP_SoftwareCursor.BP_SoftwareCursor_C.ExecuteUbergraph_BP_SoftwareCursor
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SoftwareCursor_C::ExecuteUbergraph_BP_SoftwareCursor(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SoftwareCursor_C", "ExecuteUbergraph_BP_SoftwareCursor");

	Params::BP_SoftwareCursor_C_ExecuteUbergraph_BP_SoftwareCursor Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SoftwareCursor.BP_SoftwareCursor_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SoftwareCursor_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SoftwareCursor_C", "Tick");

	Params::BP_SoftwareCursor_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}

}

