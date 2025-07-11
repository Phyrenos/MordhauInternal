﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_HoveredSetting

#include "Basic.hpp"

#include "BP_HoveredSetting_classes.hpp"
#include "BP_HoveredSetting_parameters.hpp"


namespace SDK
{

// Function BP_HoveredSetting.BP_HoveredSetting_C.ExecuteUbergraph_BP_HoveredSetting
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_HoveredSetting_C::ExecuteUbergraph_BP_HoveredSetting(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HoveredSetting_C", "ExecuteUbergraph_BP_HoveredSetting");

	Params::BP_HoveredSetting_C_ExecuteUbergraph_BP_HoveredSetting Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_HoveredSetting.BP_HoveredSetting_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBP_HoveredSetting_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HoveredSetting_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_HoveredSetting.BP_HoveredSetting_C.SetHoveredSetting
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             Title                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                             Description                                            (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                                    bShowPerformanceImpact                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   CPU_Impact                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   GPU_Impact                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   VRAM_Impact                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                       Image                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_HoveredSetting_C::SetHoveredSetting(const class FText& Title, const class FText& Description, bool bShowPerformanceImpact, int32 CPU_Impact, int32 GPU_Impact, int32 VRAM_Impact, class UTexture2D* Image)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HoveredSetting_C", "SetHoveredSetting");

	Params::BP_HoveredSetting_C_SetHoveredSetting Parms{};

	Parms.Title = std::move(Title);
	Parms.Description = std::move(Description);
	Parms.bShowPerformanceImpact = bShowPerformanceImpact;
	Parms.CPU_Impact = CPU_Impact;
	Parms.GPU_Impact = GPU_Impact;
	Parms.VRAM_Impact = VRAM_Impact;
	Parms.Image = Image;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_HoveredSetting.BP_HoveredSetting_C.SetPerformanceImpact
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Amount                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTextBlock*                       Widget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           Prefix                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UBP_HoveredSetting_C::SetPerformanceImpact(int32 Amount, class UTextBlock* Widget, const class FString& Prefix)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HoveredSetting_C", "SetPerformanceImpact");

	Params::BP_HoveredSetting_C_SetPerformanceImpact Parms{};

	Parms.Amount = Amount;
	Parms.Widget = Widget;
	Parms.Prefix = std::move(Prefix);

	UObject::ProcessEvent(Func, &Parms);
}

}

