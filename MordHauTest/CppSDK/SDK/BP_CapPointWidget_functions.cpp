﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_CapPointWidget

#include "Basic.hpp"

#include "BP_CapPointWidget_classes.hpp"
#include "BP_CapPointWidget_parameters.hpp"


namespace SDK
{

// Function BP_CapPointWidget.BP_CapPointWidget_C.Initialize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_CapturePoint_C*               InPoint                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CapPointWidget_C::Initialize(class ABP_CapturePoint_C* InPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CapPointWidget_C", "Initialize");

	Params::BP_CapPointWidget_C_Initialize Parms{};

	Parms.InPoint = InPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

