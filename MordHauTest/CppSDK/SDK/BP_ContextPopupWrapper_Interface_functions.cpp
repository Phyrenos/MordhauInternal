﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ContextPopupWrapper_Interface

#include "Basic.hpp"

#include "BP_ContextPopupWrapper_Interface_classes.hpp"
#include "BP_ContextPopupWrapper_Interface_parameters.hpp"


namespace SDK
{

// Function BP_ContextPopupWrapper_Interface.BP_ContextPopupWrapper_Interface_C.ExecuteUbergraph_BP_ContextPopupWrapper_Interface
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ContextPopupWrapper_Interface_C::ExecuteUbergraph_BP_ContextPopupWrapper_Interface(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ContextPopupWrapper_Interface_C", "ExecuteUbergraph_BP_ContextPopupWrapper_Interface");

	Params::BP_ContextPopupWrapper_Interface_C_ExecuteUbergraph_BP_ContextPopupWrapper_Interface Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ContextPopupWrapper_Interface.BP_ContextPopupWrapper_Interface_C.OnShowNoController
// (BlueprintCallable, BlueprintEvent)

void UBP_ContextPopupWrapper_Interface_C::OnShowNoController()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ContextPopupWrapper_Interface_C", "OnShowNoController");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ContextPopupWrapper_Interface.BP_ContextPopupWrapper_Interface_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBP_ContextPopupWrapper_Interface_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ContextPopupWrapper_Interface_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ContextPopupWrapper_Interface.BP_ContextPopupWrapper_Interface_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)

void UBP_ContextPopupWrapper_Interface_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ContextPopupWrapper_Interface_C", "BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ContextPopupWrapper_Interface.BP_ContextPopupWrapper_Interface_C.OpenMenu
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class IBP_ContextPopupInterface_C>Interface                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TMap<class FString, class FText>        Options                                                (BlueprintVisible, BlueprintReadOnly, Parm)

void UBP_ContextPopupWrapper_Interface_C::OpenMenu(TScriptInterface<class IBP_ContextPopupInterface_C> Interface, const TMap<class FString, class FText>& Options)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ContextPopupWrapper_Interface_C", "OpenMenu");

	Params::BP_ContextPopupWrapper_Interface_C_OpenMenu Parms{};

	Parms.Interface = Interface;
	Parms.Options = std::move(Options);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ContextPopupWrapper_Interface.BP_ContextPopupWrapper_Interface_C.ConstructContextMenu
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class IBP_ContextPopupInterface_C>Interface                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TMap<class FString, class FText>        Options                                                (BlueprintVisible, BlueprintReadOnly, Parm)

void UBP_ContextPopupWrapper_Interface_C::ConstructContextMenu(TScriptInterface<class IBP_ContextPopupInterface_C> Interface, const TMap<class FString, class FText>& Options)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ContextPopupWrapper_Interface_C", "ConstructContextMenu");

	Params::BP_ContextPopupWrapper_Interface_C_ConstructContextMenu Parms{};

	Parms.Interface = Interface;
	Parms.Options = std::move(Options);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ContextPopupWrapper_Interface.BP_ContextPopupWrapper_Interface_C.GetVisibility_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility                        ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

ESlateVisibility UBP_ContextPopupWrapper_Interface_C::GetVisibility_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ContextPopupWrapper_Interface_C", "GetVisibility_0");

	Params::BP_ContextPopupWrapper_Interface_C_GetVisibility_0 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_ContextPopupWrapper_Interface.BP_ContextPopupWrapper_Interface_C.CloseMenu
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_ContextPopupWrapper_Interface_C::CloseMenu()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ContextPopupWrapper_Interface_C", "CloseMenu");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ContextPopupWrapper_Interface.BP_ContextPopupWrapper_Interface_C.ConstructContextMenu_Complex
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class IBP_ContextPopupInterface_C>Interface                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TMap<class FString, class FText>        Options                                                (BlueprintVisible, BlueprintReadOnly, Parm)
// TArray<class UTexture2D*>               Icons                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<struct FLinearColor>             Colors                                                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class FText                             Title                                                  (BlueprintVisible, BlueprintReadOnly, Parm)

void UBP_ContextPopupWrapper_Interface_C::ConstructContextMenu_Complex(TScriptInterface<class IBP_ContextPopupInterface_C> Interface, const TMap<class FString, class FText>& Options, TArray<class UTexture2D*>& Icons, TArray<struct FLinearColor>& Colors, const class FText& Title)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ContextPopupWrapper_Interface_C", "ConstructContextMenu_Complex");

	Params::BP_ContextPopupWrapper_Interface_C_ConstructContextMenu_Complex Parms{};

	Parms.Interface = Interface;
	Parms.Options = std::move(Options);
	Parms.Icons = std::move(Icons);
	Parms.Colors = std::move(Colors);
	Parms.Title = std::move(Title);

	UObject::ProcessEvent(Func, &Parms);

	Icons = std::move(Parms.Icons);
	Colors = std::move(Parms.Colors);
}


// Function BP_ContextPopupWrapper_Interface.BP_ContextPopupWrapper_Interface_C.OpenMenu_Complex
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class IBP_ContextPopupInterface_C>Interface                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TMap<class FString, class FText>        Options                                                (BlueprintVisible, BlueprintReadOnly, Parm)
// TArray<class UTexture2D*>               Icons                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<struct FLinearColor>             Colors                                                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class FText                             Title                                                  (BlueprintVisible, BlueprintReadOnly, Parm)

void UBP_ContextPopupWrapper_Interface_C::OpenMenu_Complex(TScriptInterface<class IBP_ContextPopupInterface_C> Interface, const TMap<class FString, class FText>& Options, TArray<class UTexture2D*>& Icons, TArray<struct FLinearColor>& Colors, const class FText& Title)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ContextPopupWrapper_Interface_C", "OpenMenu_Complex");

	Params::BP_ContextPopupWrapper_Interface_C_OpenMenu_Complex Parms{};

	Parms.Interface = Interface;
	Parms.Options = std::move(Options);
	Parms.Icons = std::move(Icons);
	Parms.Colors = std::move(Colors);
	Parms.Title = std::move(Title);

	UObject::ProcessEvent(Func, &Parms);

	Icons = std::move(Parms.Icons);
	Colors = std::move(Parms.Colors);
}


// Function BP_ContextPopupWrapper_Interface.BP_ContextPopupWrapper_Interface_C.OnGetUserMenuContent_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*                      ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UUserWidget* UBP_ContextPopupWrapper_Interface_C::OnGetUserMenuContent_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ContextPopupWrapper_Interface_C", "OnGetUserMenuContent_0");

	Params::BP_ContextPopupWrapper_Interface_C_OnGetUserMenuContent_0 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_ContextPopupWrapper_Interface.BP_ContextPopupWrapper_Interface_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FKeyEvent                        InKeyEvent                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UBP_ContextPopupWrapper_Interface_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ContextPopupWrapper_Interface_C", "OnKeyDown");

	Params::BP_ContextPopupWrapper_Interface_C_OnKeyDown Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InKeyEvent = std::move(InKeyEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

