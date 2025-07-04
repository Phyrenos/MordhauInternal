﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_TextTooltip

#include "Basic.hpp"

#include "BP_TextTooltip_classes.hpp"
#include "BP_TextTooltip_parameters.hpp"


namespace SDK
{

// Function BP_TextTooltip.BP_TextTooltip_C.Update
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          New_Icon                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                             New_Header                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                             New_Description                                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UBP_TextTooltip_C::Update(const class UObject* New_Icon, const class FText& New_Header, const class FText& New_Description)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TextTooltip_C", "Update");

	Params::BP_TextTooltip_C_Update Parms{};

	Parms.New_Icon = New_Icon;
	Parms.New_Header = std::move(New_Header);
	Parms.New_Description = std::move(New_Description);

	UObject::ProcessEvent(Func, &Parms);
}

}

