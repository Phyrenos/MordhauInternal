﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_MakeshiftBow_DIH

#include "Basic.hpp"

#include "BP_MakeshiftBow_DIH_classes.hpp"
#include "BP_MakeshiftBow_DIH_parameters.hpp"


namespace SDK
{

// Function BP_MakeshiftBow_DIH.BP_MakeshiftBow_DIH_C.ExecuteUbergraph_BP_MakeshiftBow_DIH
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MakeshiftBow_DIH_C::ExecuteUbergraph_BP_MakeshiftBow_DIH(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MakeshiftBow_DIH_C", "ExecuteUbergraph_BP_MakeshiftBow_DIH");

	Params::BP_MakeshiftBow_DIH_C_ExecuteUbergraph_BP_MakeshiftBow_DIH Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MakeshiftBow_DIH.BP_MakeshiftBow_DIH_C.SetupBlessingStats
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MakeshiftBow_DIH_C::SetupBlessingStats()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MakeshiftBow_DIH_C", "SetupBlessingStats");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MakeshiftBow_DIH.BP_MakeshiftBow_DIH_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_MakeshiftBow_DIH_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MakeshiftBow_DIH_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MakeshiftBow_DIH.BP_MakeshiftBow_DIH_C.OnAmmoChanged
// (Event, Public, BlueprintEvent)

void ABP_MakeshiftBow_DIH_C::OnAmmoChanged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MakeshiftBow_DIH_C", "OnAmmoChanged");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MakeshiftBow_DIH.BP_MakeshiftBow_DIH_C.BeginRestocking
// (BlueprintCallable, BlueprintEvent)

void ABP_MakeshiftBow_DIH_C::BeginRestocking()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MakeshiftBow_DIH_C", "BeginRestocking");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MakeshiftBow_DIH.BP_MakeshiftBow_DIH_C.AutoRestock
// (BlueprintCallable, BlueprintEvent)

void ABP_MakeshiftBow_DIH_C::AutoRestock()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MakeshiftBow_DIH_C", "AutoRestock");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MakeshiftBow_DIH.BP_MakeshiftBow_DIH_C.UpdateEquipmentState
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_MakeshiftBow_DIH_C::UpdateEquipmentState()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MakeshiftBow_DIH_C", "UpdateEquipmentState");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MakeshiftBow_DIH.BP_MakeshiftBow_DIH_C.OnLoadedChanged
// (Event, Public, BlueprintEvent)

void ABP_MakeshiftBow_DIH_C::OnLoadedChanged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MakeshiftBow_DIH_C", "OnLoadedChanged");

	UObject::ProcessEvent(Func, nullptr);
}

}

