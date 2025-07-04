﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_EquipmentFilterTabTooltip

#include "Basic.hpp"

#include "BP_EquipmentFilterTabTooltip_classes.hpp"
#include "BP_EquipmentFilterTabTooltip_parameters.hpp"


namespace SDK
{

// Function BP_EquipmentFilterTabTooltip.BP_EquipmentFilterTabTooltip_C.Update Tooltip
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             Title_Text                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                             Decription_Text                                        (BlueprintVisible, BlueprintReadOnly, Parm)
// EEquipmentCategory                      Category                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bHasSelectedItem                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UBP_EquipmentFilterTabTooltip_C*  Toolip                                                 (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_EquipmentFilterTabTooltip_C::Update_Tooltip(const class FText& Title_Text, const class FText& Decription_Text, EEquipmentCategory Category, bool bHasSelectedItem, class UBP_EquipmentFilterTabTooltip_C** Toolip)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EquipmentFilterTabTooltip_C", "Update Tooltip");

	Params::BP_EquipmentFilterTabTooltip_C_Update_Tooltip Parms{};

	Parms.Title_Text = std::move(Title_Text);
	Parms.Decription_Text = std::move(Decription_Text);
	Parms.Category = Category;
	Parms.bHasSelectedItem = bHasSelectedItem;

	UObject::ProcessEvent(Func, &Parms);

	if (Toolip != nullptr)
		*Toolip = Parms.Toolip;
}


// Function BP_EquipmentFilterTabTooltip.BP_EquipmentFilterTabTooltip_C.GetVisibility_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility                        ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

ESlateVisibility UBP_EquipmentFilterTabTooltip_C::GetVisibility_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EquipmentFilterTabTooltip_C", "GetVisibility_0");

	Params::BP_EquipmentFilterTabTooltip_C_GetVisibility_0 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

