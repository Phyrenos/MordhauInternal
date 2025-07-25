﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_SeparatedBodyPart_Bones

#include "Basic.hpp"

#include "BP_SeparatedBodyPart_Bones_classes.hpp"
#include "BP_SeparatedBodyPart_Bones_parameters.hpp"


namespace SDK
{

// Function BP_SeparatedBodyPart_Bones.BP_SeparatedBodyPart_Bones_C.ExecuteUbergraph_BP_SeparatedBodyPart_Bones
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SeparatedBodyPart_Bones_C::ExecuteUbergraph_BP_SeparatedBodyPart_Bones(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SeparatedBodyPart_Bones_C", "ExecuteUbergraph_BP_SeparatedBodyPart_Bones");

	Params::BP_SeparatedBodyPart_Bones_C_ExecuteUbergraph_BP_SeparatedBodyPart_Bones Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SeparatedBodyPart_Bones.BP_SeparatedBodyPart_Bones_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_SeparatedBodyPart_Bones_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SeparatedBodyPart_Bones_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SeparatedBodyPart_Bones.BP_SeparatedBodyPart_Bones_C.InitializeDismemberment
// (Event, Public, BlueprintEvent)
// Parameters:
// class AMordhauCharacter*                Source                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             bone                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                       SourceBoneTransform                                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// bool                                    bIsPartial                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    bIsBluntForce                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_SeparatedBodyPart_Bones_C::InitializeDismemberment(class AMordhauCharacter* Source, class FName bone, const struct FTransform& SourceBoneTransform, bool bIsPartial, bool bIsBluntForce)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SeparatedBodyPart_Bones_C", "InitializeDismemberment");

	Params::BP_SeparatedBodyPart_Bones_C_InitializeDismemberment Parms{};

	Parms.Source = Source;
	Parms.bone = bone;
	Parms.SourceBoneTransform = std::move(SourceBoneTransform);
	Parms.bIsPartial = bIsPartial;
	Parms.bIsBluntForce = bIsBluntForce;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SeparatedBodyPart_Bones.BP_SeparatedBodyPart_Bones_C.BndEvt__Thudder_K2Node_ComponentBoundEvent_1_ComponentThudSignature__DelegateSignature
// (BlueprintEvent)

void ABP_SeparatedBodyPart_Bones_C::BndEvt__Thudder_K2Node_ComponentBoundEvent_1_ComponentThudSignature__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SeparatedBodyPart_Bones_C", "BndEvt__Thudder_K2Node_ComponentBoundEvent_1_ComponentThudSignature__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}

}

