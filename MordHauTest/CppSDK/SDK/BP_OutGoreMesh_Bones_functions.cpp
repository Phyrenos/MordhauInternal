﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_OutGoreMesh_Bones

#include "Basic.hpp"

#include "BP_OutGoreMesh_Bones_classes.hpp"
#include "BP_OutGoreMesh_Bones_parameters.hpp"


namespace SDK
{

// Function BP_OutGoreMesh_Bones.BP_OutGoreMesh_Bones_C.ExecuteUbergraph_BP_OutGoreMesh_Bones
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_OutGoreMesh_Bones_C::ExecuteUbergraph_BP_OutGoreMesh_Bones(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_OutGoreMesh_Bones_C", "ExecuteUbergraph_BP_OutGoreMesh_Bones");

	Params::BP_OutGoreMesh_Bones_C_ExecuteUbergraph_BP_OutGoreMesh_Bones Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_OutGoreMesh_Bones.BP_OutGoreMesh_Bones_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_OutGoreMesh_Bones_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_OutGoreMesh_Bones_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}

