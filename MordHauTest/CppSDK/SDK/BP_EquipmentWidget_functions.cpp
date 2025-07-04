﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_EquipmentWidget

#include "Basic.hpp"

#include "BP_EquipmentWidget_classes.hpp"
#include "BP_EquipmentWidget_parameters.hpp"


namespace SDK
{

// Function BP_EquipmentWidget.BP_EquipmentWidget_C.ExecuteUbergraph_BP_EquipmentWidget
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_EquipmentWidget_C::ExecuteUbergraph_BP_EquipmentWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EquipmentWidget_C", "ExecuteUbergraph_BP_EquipmentWidget");

	Params::BP_EquipmentWidget_C_ExecuteUbergraph_BP_EquipmentWidget Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_EquipmentWidget.BP_EquipmentWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBP_EquipmentWidget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EquipmentWidget_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_EquipmentWidget.BP_EquipmentWidget_C.UpdateEquipmentText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             Param_Name_0                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Amount_0                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   MaxAmount                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_EquipmentWidget_C::UpdateEquipmentText(class FName Param_Name_0, int32 Amount_0, int32 MaxAmount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EquipmentWidget_C", "UpdateEquipmentText");

	Params::BP_EquipmentWidget_C_UpdateEquipmentText Parms{};

	Parms.Param_Name_0 = Param_Name_0;
	Parms.Amount_0 = Amount_0;
	Parms.MaxAmount = MaxAmount;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_EquipmentWidget.BP_EquipmentWidget_C.UpdateEquipmentReason
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           Reason_0                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UBP_EquipmentWidget_C::UpdateEquipmentReason(const class FString& Reason_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EquipmentWidget_C", "UpdateEquipmentReason");

	Params::BP_EquipmentWidget_C_UpdateEquipmentReason Parms{};

	Parms.Reason_0 = std::move(Reason_0);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_EquipmentWidget.BP_EquipmentWidget_C.GetVisibility_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility                        ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

ESlateVisibility UBP_EquipmentWidget_C::GetVisibility_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EquipmentWidget_C", "GetVisibility_0");

	Params::BP_EquipmentWidget_C_GetVisibility_0 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

