﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_InGoreMeshBlunt_Corpse

#include "Basic.hpp"

#include "BP_InGoreMeshBlunt_Corpse_classes.hpp"
#include "BP_InGoreMeshBlunt_Corpse_parameters.hpp"


namespace SDK
{

// Function BP_InGoreMeshBlunt_Corpse.BP_InGoreMeshBlunt_Corpse_C.ExecuteUbergraph_BP_InGoreMeshBlunt_Corpse
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_InGoreMeshBlunt_Corpse_C::ExecuteUbergraph_BP_InGoreMeshBlunt_Corpse(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_InGoreMeshBlunt_Corpse_C", "ExecuteUbergraph_BP_InGoreMeshBlunt_Corpse");

	Params::BP_InGoreMeshBlunt_Corpse_C_ExecuteUbergraph_BP_InGoreMeshBlunt_Corpse Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_InGoreMeshBlunt_Corpse.BP_InGoreMeshBlunt_Corpse_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_InGoreMeshBlunt_Corpse_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_InGoreMeshBlunt_Corpse_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}

