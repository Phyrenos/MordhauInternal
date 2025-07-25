﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_HomeScreen

#include "Basic.hpp"

#include "BP_HomeScreen_classes.hpp"
#include "BP_HomeScreen_parameters.hpp"


namespace SDK
{

// Function BP_HomeScreen.BP_HomeScreen_C.ExecuteUbergraph_BP_HomeScreen
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_HomeScreen_C::ExecuteUbergraph_BP_HomeScreen(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HomeScreen_C", "ExecuteUbergraph_BP_HomeScreen");

	Params::BP_HomeScreen_C_ExecuteUbergraph_BP_HomeScreen Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_HomeScreen.BP_HomeScreen_C.OnShown
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_HomeScreen_C::OnShown()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HomeScreen_C", "OnShown");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_HomeScreen.BP_HomeScreen_C.ToggleNews
// (BlueprintCallable, BlueprintEvent)

void UBP_HomeScreen_C::ToggleNews()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HomeScreen_C", "ToggleNews");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_HomeScreen.BP_HomeScreen_C.UpdatePartyList
// (BlueprintCallable, BlueprintEvent)

void UBP_HomeScreen_C::UpdatePartyList()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HomeScreen_C", "UpdatePartyList");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_HomeScreen.BP_HomeScreen_C.OnPartyUpdated
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FPlayFabPlayer>           PartyMembers                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBP_HomeScreen_C::OnPartyUpdated(const TArray<struct FPlayFabPlayer>& PartyMembers)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HomeScreen_C", "OnPartyUpdated");

	Params::BP_HomeScreen_C_OnPartyUpdated Parms{};

	Parms.PartyMembers = std::move(PartyMembers);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_HomeScreen.BP_HomeScreen_C.OnItemsRefreshed
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWasSuccessful                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FPlayFabApiError                 Error                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<struct FItemStack>               ItemStacks                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBP_HomeScreen_C::OnItemsRefreshed(bool bWasSuccessful, const struct FPlayFabApiError& Error, const TArray<struct FItemStack>& ItemStacks)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HomeScreen_C", "OnItemsRefreshed");

	Params::BP_HomeScreen_C_OnItemsRefreshed Parms{};

	Parms.bWasSuccessful = bWasSuccessful;
	Parms.Error = std::move(Error);
	Parms.ItemStacks = std::move(ItemStacks);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_HomeScreen.BP_HomeScreen_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBP_HomeScreen_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HomeScreen_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_HomeScreen.BP_HomeScreen_C.BndEvt__HideNewsButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBP_HomeScreen_C::BndEvt__HideNewsButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HomeScreen_C", "BndEvt__HideNewsButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_HomeScreen.BP_HomeScreen_C.BndEvt__leaveButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBP_HomeScreen_C::BndEvt__leaveButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HomeScreen_C", "BndEvt__leaveButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_HomeScreen.BP_HomeScreen_C.BndEvt__Button_33_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBP_HomeScreen_C::BndEvt__Button_33_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HomeScreen_C", "BndEvt__Button_33_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_HomeScreen.BP_HomeScreen_C.GetCurrentVersionText
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                             ReturnValue                                            (Parm, OutParm, ReturnParm)

class FText UBP_HomeScreen_C::GetCurrentVersionText()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HomeScreen_C", "GetCurrentVersionText");

	Params::BP_HomeScreen_C_GetCurrentVersionText Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_HomeScreen.BP_HomeScreen_C.Get_TextBlock_14_Text_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                             ReturnValue                                            (Parm, OutParm, ReturnParm)

class FText UBP_HomeScreen_C::Get_TextBlock_14_Text_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HomeScreen_C", "Get_TextBlock_14_Text_0");

	Params::BP_HomeScreen_C_Get_TextBlock_14_Text_0 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_HomeScreen.BP_HomeScreen_C.GetVisibility_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility                        ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

ESlateVisibility UBP_HomeScreen_C::GetVisibility_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HomeScreen_C", "GetVisibility_0");

	Params::BP_HomeScreen_C_GetVisibility_0 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_HomeScreen.BP_HomeScreen_C.Get_CloseMenuButton_Visibility_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility                        ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

ESlateVisibility UBP_HomeScreen_C::Get_CloseMenuButton_Visibility_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HomeScreen_C", "Get_CloseMenuButton_Visibility_0");

	Params::BP_HomeScreen_C_Get_CloseMenuButton_Visibility_0 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_HomeScreen.BP_HomeScreen_C.Get_ToggleNewsButton_Visibility_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility                        ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

ESlateVisibility UBP_HomeScreen_C::Get_ToggleNewsButton_Visibility_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HomeScreen_C", "Get_ToggleNewsButton_Visibility_0");

	Params::BP_HomeScreen_C_Get_ToggleNewsButton_Visibility_0 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_HomeScreen.BP_HomeScreen_C.GetVisibility_1
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility                        ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

ESlateVisibility UBP_HomeScreen_C::GetVisibility_1()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HomeScreen_C", "GetVisibility_1");

	Params::BP_HomeScreen_C_GetVisibility_1 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_HomeScreen.BP_HomeScreen_C.GetbIsEnabled_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UBP_HomeScreen_C::GetbIsEnabled_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HomeScreen_C", "GetbIsEnabled_0");

	Params::BP_HomeScreen_C_GetbIsEnabled_0 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_HomeScreen.BP_HomeScreen_C.UpdateNewsWidgetType
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_HomeScreen_C::UpdateNewsWidgetType()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HomeScreen_C", "UpdateNewsWidgetType");

	UObject::ProcessEvent(Func, nullptr);
}

}

