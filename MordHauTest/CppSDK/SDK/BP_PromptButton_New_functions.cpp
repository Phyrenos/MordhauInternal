﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PromptButton_New

#include "Basic.hpp"

#include "BP_PromptButton_New_classes.hpp"
#include "BP_PromptButton_New_parameters.hpp"


namespace SDK
{

// Function BP_PromptButton_New.BP_PromptButton_New_C.ExecuteUbergraph_BP_PromptButton_New
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PromptButton_New_C::ExecuteUbergraph_BP_PromptButton_New(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PromptButton_New_C", "ExecuteUbergraph_BP_PromptButton_New");

	Params::BP_PromptButton_New_C_ExecuteUbergraph_BP_PromptButton_New Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PromptButton_New.BP_PromptButton_New_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PromptButton_New_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PromptButton_New_C", "Tick");

	Params::BP_PromptButton_New_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PromptButton_New.BP_PromptButton_New_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_PromptButton_New_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PromptButton_New_C", "PreConstruct");

	Params::BP_PromptButton_New_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PromptButton_New.BP_PromptButton_New_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UBP_PromptButton_New_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PromptButton_New_C", "BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PromptButton_New.BP_PromptButton_New_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBP_PromptButton_New_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PromptButton_New_C", "BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PromptButton_New.BP_PromptButton_New_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBP_PromptButton_New_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PromptButton_New_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PromptButton_New.BP_PromptButton_New_C.Update
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_PromptButton_New_C::Update()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PromptButton_New_C", "Update");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PromptButton_New.BP_PromptButton_New_C.Get_IconImage_ColorAndOpacity_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor                     ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FLinearColor UBP_PromptButton_New_C::Get_IconImage_ColorAndOpacity_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PromptButton_New_C", "Get_IconImage_ColorAndOpacity_0");

	Params::BP_PromptButton_New_C_Get_IconImage_ColorAndOpacity_0 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_PromptButton_New.BP_PromptButton_New_C.Get_TextBlock_0_Visibility_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility                        ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

ESlateVisibility UBP_PromptButton_New_C::Get_TextBlock_0_Visibility_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PromptButton_New_C", "Get_TextBlock_0_Visibility_0");

	Params::BP_PromptButton_New_C_Get_TextBlock_0_Visibility_0 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_PromptButton_New.BP_PromptButton_New_C.Update Prompt
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_PromptButton_New_C::Update_Prompt()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PromptButton_New_C", "Update Prompt");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PromptButton_New.BP_PromptButton_New_C.GetColorAndOpacity_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor                     ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FLinearColor UBP_PromptButton_New_C::GetColorAndOpacity_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PromptButton_New_C", "GetColorAndOpacity_0");

	Params::BP_PromptButton_New_C_GetColorAndOpacity_0 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_PromptButton_New.BP_PromptButton_New_C.Get_Image_SelectionGradient_Visibility_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility                        ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

ESlateVisibility UBP_PromptButton_New_C::Get_Image_SelectionGradient_Visibility_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PromptButton_New_C", "Get_Image_SelectionGradient_Visibility_0");

	Params::BP_PromptButton_New_C_Get_Image_SelectionGradient_Visibility_0 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_PromptButton_New.BP_PromptButton_New_C.Get_WidgetSwitcher_RightIcon_Visibility_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility                        ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

ESlateVisibility UBP_PromptButton_New_C::Get_WidgetSwitcher_RightIcon_Visibility_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PromptButton_New_C", "Get_WidgetSwitcher_RightIcon_Visibility_0");

	Params::BP_PromptButton_New_C_Get_WidgetSwitcher_RightIcon_Visibility_0 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_PromptButton_New.BP_PromptButton_New_C.Get_WidgetSwitcher_LeftIcon_Visibility_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility                        ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

ESlateVisibility UBP_PromptButton_New_C::Get_WidgetSwitcher_LeftIcon_Visibility_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PromptButton_New_C", "Get_WidgetSwitcher_LeftIcon_Visibility_0");

	Params::BP_PromptButton_New_C_Get_WidgetSwitcher_LeftIcon_Visibility_0 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_PromptButton_New.BP_PromptButton_New_C.GetToolTipWidget_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UBP_PromptButton_New_C::GetToolTipWidget_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PromptButton_New_C", "GetToolTipWidget_0");

	Params::BP_PromptButton_New_C_GetToolTipWidget_0 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_PromptButton_New.BP_PromptButton_New_C.SwapConfirmCancel
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_PromptButton_New_C::SwapConfirmCancel()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PromptButton_New_C", "SwapConfirmCancel");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PromptButton_New.BP_PromptButton_New_C.SetText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             Button_Text                                            (BlueprintVisible, BlueprintReadOnly, Parm)

void UBP_PromptButton_New_C::SetText(const class FText& Button_Text)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PromptButton_New_C", "SetText");

	Params::BP_PromptButton_New_C_SetText Parms{};

	Parms.Button_Text = std::move(Button_Text);

	UObject::ProcessEvent(Func, &Parms);
}

}

