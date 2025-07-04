﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_FrontlineHeroDestroyable

#include "Basic.hpp"

#include "BP_FrontlineHeroDestroyable_classes.hpp"
#include "BP_FrontlineHeroDestroyable_parameters.hpp"


namespace SDK
{

// Function BP_FrontlineHeroDestroyable.BP_FrontlineHeroDestroyable_C.ExecuteUbergraph_BP_FrontlineHeroDestroyable
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_FrontlineHeroDestroyable_C::ExecuteUbergraph_BP_FrontlineHeroDestroyable(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FrontlineHeroDestroyable_C", "ExecuteUbergraph_BP_FrontlineHeroDestroyable");

	Params::BP_FrontlineHeroDestroyable_C_ExecuteUbergraph_BP_FrontlineHeroDestroyable Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_FrontlineHeroDestroyable.BP_FrontlineHeroDestroyable_C.UpdateAnimInstance
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_FrontlineHeroDestroyable_C::UpdateAnimInstance()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FrontlineHeroDestroyable_C", "UpdateAnimInstance");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_FrontlineHeroDestroyable.BP_FrontlineHeroDestroyable_C.OnReplicatedHealthChanged
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_FrontlineHeroDestroyable_C::OnReplicatedHealthChanged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FrontlineHeroDestroyable_C", "OnReplicatedHealthChanged");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_FrontlineHeroDestroyable.BP_FrontlineHeroDestroyable_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_FrontlineHeroDestroyable_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FrontlineHeroDestroyable_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}

