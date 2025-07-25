﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Objectives

#include "Basic.hpp"

#include "BP_Objectives_classes.hpp"
#include "BP_Objectives_parameters.hpp"


namespace SDK
{

// Function BP_Objectives.BP_Objectives_C.ExecuteUbergraph_BP_Objectives
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Objectives_C::ExecuteUbergraph_BP_Objectives(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Objectives_C", "ExecuteUbergraph_BP_Objectives");

	Params::BP_Objectives_C_ExecuteUbergraph_BP_Objectives Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Objectives.BP_Objectives_C.SetSubObjectives
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FText>                     List                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<bool>                            Completed                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBP_Objectives_C::SetSubObjectives(const TArray<class FText>& List, const TArray<bool>& Completed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Objectives_C", "SetSubObjectives");

	Params::BP_Objectives_C_SetSubObjectives Parms{};

	Parms.List = std::move(List);
	Parms.Completed = std::move(Completed);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Objectives.BP_Objectives_C.Show
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             Description                                            (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                             Header                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
// class UTexture2D*                       Icon_0                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Objectives_C::Show(const class FText& Description, const class FText& Header, class UTexture2D* Icon_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Objectives_C", "Show");

	Params::BP_Objectives_C_Show Parms{};

	Parms.Description = std::move(Description);
	Parms.Header = std::move(Header);
	Parms.Icon_0 = Icon_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Objectives.BP_Objectives_C.Hide
// (BlueprintCallable, BlueprintEvent)

void UBP_Objectives_C::Hide()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Objectives_C", "Hide");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Objectives.BP_Objectives_C.FadeOutDone
// (BlueprintCallable, BlueprintEvent)

void UBP_Objectives_C::FadeOutDone()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Objectives_C", "FadeOutDone");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Objectives.BP_Objectives_C.Update Team Image
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_Objectives_C::Update_Team_Image()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Objectives_C", "Update Team Image");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Objectives.BP_Objectives_C.Get_ObjectiveBorder_Visibility_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility                        ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

ESlateVisibility UBP_Objectives_C::Get_ObjectiveBorder_Visibility_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Objectives_C", "Get_ObjectiveBorder_Visibility_0");

	Params::BP_Objectives_C_Get_ObjectiveBorder_Visibility_0 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_Objectives.BP_Objectives_C.Get_TeamImage_Visibility_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility                        ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

ESlateVisibility UBP_Objectives_C::Get_TeamImage_Visibility_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Objectives_C", "Get_TeamImage_Visibility_0");

	Params::BP_Objectives_C_Get_TeamImage_Visibility_0 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

