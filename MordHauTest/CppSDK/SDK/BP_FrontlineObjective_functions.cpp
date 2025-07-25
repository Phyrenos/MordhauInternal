﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_FrontlineObjective

#include "Basic.hpp"

#include "BP_FrontlineObjective_classes.hpp"
#include "BP_FrontlineObjective_parameters.hpp"


namespace SDK
{

// Function BP_FrontlineObjective.BP_FrontlineObjective_C.OnEnemyGainedPrerequisites
// (Public, BlueprintCallable, BlueprintEvent)

void IBP_FrontlineObjective_C::OnEnemyGainedPrerequisites()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FrontlineObjective_C", "OnEnemyGainedPrerequisites");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_FrontlineObjective.BP_FrontlineObjective_C.OnEnemyLostPrerequisites
// (Public, BlueprintCallable, BlueprintEvent)

void IBP_FrontlineObjective_C::OnEnemyLostPrerequisites()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FrontlineObjective_C", "OnEnemyLostPrerequisites");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_FrontlineObjective.BP_FrontlineObjective_C.OnUpdateUIWidgets
// (Public, BlueprintCallable, BlueprintEvent)

void IBP_FrontlineObjective_C::OnUpdateUIWidgets()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FrontlineObjective_C", "OnUpdateUIWidgets");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_FrontlineObjective.BP_FrontlineObjective_C.OnInitialize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_CapturePoint_C*               Point                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBP_FrontlineObjective_C::OnInitialize(class ABP_CapturePoint_C* Point)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FrontlineObjective_C", "OnInitialize");

	Params::BP_FrontlineObjective_C_OnInitialize Parms{};

	Parms.Point = Point;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_FrontlineObjective.BP_FrontlineObjective_C.OnAnyObjectiveProgressChanged
// (Public, BlueprintCallable, BlueprintEvent)

void IBP_FrontlineObjective_C::OnAnyObjectiveProgressChanged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FrontlineObjective_C", "OnAnyObjectiveProgressChanged");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_FrontlineObjective.BP_FrontlineObjective_C.IsCompleted
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Completed                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IBP_FrontlineObjective_C::IsCompleted(bool* Completed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FrontlineObjective_C", "IsCompleted");

	Params::BP_FrontlineObjective_C_IsCompleted Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Completed != nullptr)
		*Completed = Parms.Completed;
}


// Function BP_FrontlineObjective.BP_FrontlineObjective_C.IsInObjectiveArea
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          Location                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    InArea                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IBP_FrontlineObjective_C::IsInObjectiveArea(const struct FVector& Location, bool* InArea)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FrontlineObjective_C", "IsInObjectiveArea");

	Params::BP_FrontlineObjective_C_IsInObjectiveArea Parms{};

	Parms.Location = std::move(Location);

	UObject::ProcessEvent(Func, &Parms);

	if (InArea != nullptr)
		*InArea = Parms.InArea;
}


// Function BP_FrontlineObjective.BP_FrontlineObjective_C.GetObjectiveProgress
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// float                                   Progress                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBP_FrontlineObjective_C::GetObjectiveProgress(float* Progress) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FrontlineObjective_C", "GetObjectiveProgress");

	Params::BP_FrontlineObjective_C_GetObjectiveProgress Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Progress != nullptr)
		*Progress = Parms.Progress;
}

}

