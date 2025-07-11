﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Ballista

#include "Basic.hpp"

#include "BP_Ballista_classes.hpp"
#include "BP_Ballista_parameters.hpp"


namespace SDK
{

// Function BP_Ballista.BP_Ballista_C.ExecuteUbergraph_BP_Ballista
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Ballista_C::ExecuteUbergraph_BP_Ballista(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Ballista_C", "ExecuteUbergraph_BP_Ballista");

	Params::BP_Ballista_C_ExecuteUbergraph_BP_Ballista Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Ballista.BP_Ballista_C.InpAxisEvt_Turn Right_K2Node_InputAxisEvent_4
// (BlueprintEvent)
// Parameters:
// float                                   AxisValue                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Ballista_C::InpAxisEvt_Turn_Right_K2Node_InputAxisEvent_4(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Ballista_C", "InpAxisEvt_Turn Right_K2Node_InputAxisEvent_4");

	Params::BP_Ballista_C_InpAxisEvt_Turn_Right_K2Node_InputAxisEvent_4 Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Ballista.BP_Ballista_C.InpAxisEvt_Look Up_K2Node_InputAxisEvent_18
// (BlueprintEvent)
// Parameters:
// float                                   AxisValue                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Ballista_C::InpAxisEvt_Look_Up_K2Node_InputAxisEvent_18(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Ballista_C", "InpAxisEvt_Look Up_K2Node_InputAxisEvent_18");

	Params::BP_Ballista_C_InpAxisEvt_Look_Up_K2Node_InputAxisEvent_18 Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Ballista.BP_Ballista_C.OnCosmeticHit
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// EMordhauDamageType                      DamageType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                                   SubType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                       Hit                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class AActor*                           Agent                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Ballista_C::OnCosmeticHit(EMordhauDamageType DamageType, uint8 SubType, const struct FHitResult& Hit, class AActor* Agent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Ballista_C", "OnCosmeticHit");

	Params::BP_Ballista_C_OnCosmeticHit Parms{};

	Parms.DamageType = DamageType;
	Parms.SubType = SubType;
	Parms.Hit = std::move(Hit);
	Parms.Agent = Agent;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Ballista.BP_Ballista_C.OnDied
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   Angle                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EMordhauDamageType                      Type                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                                   SubType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             bone                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          Point                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           Source                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           Agent                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Ballista_C::OnDied(float Angle, EMordhauDamageType Type, uint8 SubType, class FName bone, const struct FVector& Point, class AActor* Source, class AActor* Agent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Ballista_C", "OnDied");

	Params::BP_Ballista_C_OnDied Parms{};

	Parms.Angle = Angle;
	Parms.Type = Type;
	Parms.SubType = SubType;
	Parms.bone = bone;
	Parms.Point = std::move(Point);
	Parms.Source = Source;
	Parms.Agent = Agent;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Ballista.BP_Ballista_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Ballista_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Ballista_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Ballista.BP_Ballista_C.InpActEvt_Cycle Camera_K2Node_InputActionEvent_0
// (BlueprintEvent)
// Parameters:
// struct FKey                             Key                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_Ballista_C::InpActEvt_Cycle_Camera_K2Node_InputActionEvent_0(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Ballista_C", "InpActEvt_Cycle Camera_K2Node_InputActionEvent_0");

	Params::BP_Ballista_C_InpActEvt_Cycle_Camera_K2Node_InputActionEvent_0 Parms{};

	Parms.Key = std::move(Key);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Ballista.BP_Ballista_C.InpActEvt_Cycle Camera_K2Node_InputActionEvent_1
// (BlueprintEvent)
// Parameters:
// struct FKey                             Key                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_Ballista_C::InpActEvt_Cycle_Camera_K2Node_InputActionEvent_1(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Ballista_C", "InpActEvt_Cycle Camera_K2Node_InputActionEvent_1");

	Params::BP_Ballista_C_InpActEvt_Cycle_Camera_K2Node_InputActionEvent_1 Parms{};

	Parms.Key = std::move(Key);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Ballista.BP_Ballista_C.InpActEvt_Fire_K2Node_InputActionEvent_2
// (BlueprintEvent)
// Parameters:
// struct FKey                             Key                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_Ballista_C::InpActEvt_Fire_K2Node_InputActionEvent_2(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Ballista_C", "InpActEvt_Fire_K2Node_InputActionEvent_2");

	Params::BP_Ballista_C_InpActEvt_Fire_K2Node_InputActionEvent_2 Parms{};

	Parms.Key = std::move(Key);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Ballista.BP_Ballista_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Ballista_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Ballista_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Ballista.BP_Ballista_C.PostProcessCameraPOV
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPOV                             InPOV                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// struct FPOV                             ReturnValue                                            (Parm, OutParm, ReturnParm, NoDestructor)

struct FPOV ABP_Ballista_C::PostProcessCameraPOV(const struct FPOV& InPOV)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Ballista_C", "PostProcessCameraPOV");

	Params::BP_Ballista_C_PostProcessCameraPOV Parms{};

	Parms.InPOV = std::move(InPOV);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

