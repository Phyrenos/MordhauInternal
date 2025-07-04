﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_TooltipPointCost

#include "Basic.hpp"

#include "BP_TooltipPointCost_classes.hpp"
#include "BP_TooltipPointCost_parameters.hpp"


namespace SDK
{

// Function BP_TooltipPointCost.BP_TooltipPointCost_C.Update
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Cost                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Can_Afford_0                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_TooltipPointCost_C::Update(int32 Cost, bool Can_Afford_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TooltipPointCost_C", "Update");

	Params::BP_TooltipPointCost_C_Update Parms{};

	Parms.Cost = Cost;
	Parms.Can_Afford_0 = Can_Afford_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_TooltipPointCost.BP_TooltipPointCost_C.GetColorAndOpacity_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor                     ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FLinearColor UBP_TooltipPointCost_C::GetColorAndOpacity_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TooltipPointCost_C", "GetColorAndOpacity_0");

	Params::BP_TooltipPointCost_C_GetColorAndOpacity_0 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_TooltipPointCost.BP_TooltipPointCost_C.GetVisibility_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility                        ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

ESlateVisibility UBP_TooltipPointCost_C::GetVisibility_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TooltipPointCost_C", "GetVisibility_0");

	Params::BP_TooltipPointCost_C_GetVisibility_0 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

