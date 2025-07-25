﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_TeamSelectTeamEntry

#include "Basic.hpp"

#include "BP_TeamSelectTeamEntry_classes.hpp"
#include "BP_TeamSelectTeamEntry_parameters.hpp"


namespace SDK
{

// Function BP_TeamSelectTeamEntry.BP_TeamSelectTeamEntry_C.ExecuteUbergraph_BP_TeamSelectTeamEntry
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_TeamSelectTeamEntry_C::ExecuteUbergraph_BP_TeamSelectTeamEntry(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TeamSelectTeamEntry_C", "ExecuteUbergraph_BP_TeamSelectTeamEntry");

	Params::BP_TeamSelectTeamEntry_C_ExecuteUbergraph_BP_TeamSelectTeamEntry Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_TeamSelectTeamEntry.BP_TeamSelectTeamEntry_C.Select Team Entry
// (BlueprintCallable, BlueprintEvent)

void UBP_TeamSelectTeamEntry_C::Select_Team_Entry()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TeamSelectTeamEntry_C", "Select Team Entry");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_TeamSelectTeamEntry.BP_TeamSelectTeamEntry_C.BndEvt__TeamButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UBP_TeamSelectTeamEntry_C::BndEvt__TeamButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TeamSelectTeamEntry_C", "BndEvt__TeamButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_TeamSelectTeamEntry.BP_TeamSelectTeamEntry_C.BndEvt__TeamButton_K2Node_ComponentBoundEvent_256_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UBP_TeamSelectTeamEntry_C::BndEvt__TeamButton_K2Node_ComponentBoundEvent_256_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TeamSelectTeamEntry_C", "BndEvt__TeamButton_K2Node_ComponentBoundEvent_256_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_TeamSelectTeamEntry.BP_TeamSelectTeamEntry_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBP_TeamSelectTeamEntry_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TeamSelectTeamEntry_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_TeamSelectTeamEntry.BP_TeamSelectTeamEntry_C.BndEvt__Team1Button_K2Node_ComponentBoundEvent_144_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBP_TeamSelectTeamEntry_C::BndEvt__Team1Button_K2Node_ComponentBoundEvent_144_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TeamSelectTeamEntry_C", "BndEvt__Team1Button_K2Node_ComponentBoundEvent_144_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_TeamSelectTeamEntry.BP_TeamSelectTeamEntry_C.Get_Team_Text
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                             ReturnValue                                            (Parm, OutParm, ReturnParm)

class FText UBP_TeamSelectTeamEntry_C::Get_Team_Text()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TeamSelectTeamEntry_C", "Get_Team_Text");

	Params::BP_TeamSelectTeamEntry_C_Get_Team_Text Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_TeamSelectTeamEntry.BP_TeamSelectTeamEntry_C.Refresh
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_TeamSelectTeamEntry_C::Refresh()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TeamSelectTeamEntry_C", "Refresh");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_TeamSelectTeamEntry.BP_TeamSelectTeamEntry_C.Get_Players_Text
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                             ReturnValue                                            (Parm, OutParm, ReturnParm)

class FText UBP_TeamSelectTeamEntry_C::Get_Players_Text()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TeamSelectTeamEntry_C", "Get_Players_Text");

	Params::BP_TeamSelectTeamEntry_C_Get_Players_Text Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_TeamSelectTeamEntry.BP_TeamSelectTeamEntry_C.GetMaxPlayersText
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                             ReturnValue                                            (Parm, OutParm, ReturnParm)

class FText UBP_TeamSelectTeamEntry_C::GetMaxPlayersText()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TeamSelectTeamEntry_C", "GetMaxPlayersText");

	Params::BP_TeamSelectTeamEntry_C_GetMaxPlayersText Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_TeamSelectTeamEntry.BP_TeamSelectTeamEntry_C.Get_TeamButton_bIsEnabled_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UBP_TeamSelectTeamEntry_C::Get_TeamButton_bIsEnabled_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TeamSelectTeamEntry_C", "Get_TeamButton_bIsEnabled_0");

	Params::BP_TeamSelectTeamEntry_C_Get_TeamButton_bIsEnabled_0 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_TeamSelectTeamEntry.BP_TeamSelectTeamEntry_C.Get_Role_Text_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                             ReturnValue                                            (Parm, OutParm, ReturnParm)

class FText UBP_TeamSelectTeamEntry_C::Get_Role_Text_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TeamSelectTeamEntry_C", "Get_Role_Text_0");

	Params::BP_TeamSelectTeamEntry_C_Get_Role_Text_0 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

