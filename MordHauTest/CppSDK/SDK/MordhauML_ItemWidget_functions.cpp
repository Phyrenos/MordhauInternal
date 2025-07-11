﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MordhauML_ItemWidget

#include "Basic.hpp"

#include "MordhauML_ItemWidget_classes.hpp"
#include "MordhauML_ItemWidget_parameters.hpp"


namespace SDK
{

// Function MordhauML_ItemWidget.MordhauML_ItemWidget_C.ExecuteUbergraph_MordhauML_ItemWidget
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMordhauML_ItemWidget_C::ExecuteUbergraph_MordhauML_ItemWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MordhauML_ItemWidget_C", "ExecuteUbergraph_MordhauML_ItemWidget");

	Params::MordhauML_ItemWidget_C_ExecuteUbergraph_MordhauML_ItemWidget Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MordhauML_ItemWidget.MordhauML_ItemWidget_C.SetDataAndUpdateUI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FMordhauMLWidget                 MordhauMLWidgetData_0                                  (BlueprintVisible, BlueprintReadOnly, Parm)
// class UBP_MordhauNewsWidget_C*          NewsWidget                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMordhauML_ItemWidget_C::SetDataAndUpdateUI(const struct FMordhauMLWidget& MordhauMLWidgetData_0, class UBP_MordhauNewsWidget_C* NewsWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MordhauML_ItemWidget_C", "SetDataAndUpdateUI");

	Params::MordhauML_ItemWidget_C_SetDataAndUpdateUI Parms{};

	Parms.MordhauMLWidgetData_0 = std::move(MordhauMLWidgetData_0);
	Parms.NewsWidget = NewsWidget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MordhauML_ItemWidget.MordhauML_ItemWidget_C.UpdateUI
// (Private, BlueprintCallable, BlueprintEvent)

void UMordhauML_ItemWidget_C::UpdateUI()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MordhauML_ItemWidget_C", "UpdateUI");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MordhauML_ItemWidget.MordhauML_ItemWidget_C.UpdateImageUI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FMordhauMLImage                  MordhauMLImage                                         (BlueprintVisible, BlueprintReadOnly, Parm)

void UMordhauML_ItemWidget_C::UpdateImageUI(const struct FMordhauMLImage& MordhauMLImage)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MordhauML_ItemWidget_C", "UpdateImageUI");

	Params::MordhauML_ItemWidget_C_UpdateImageUI Parms{};

	Parms.MordhauMLImage = std::move(MordhauMLImage);

	UObject::ProcessEvent(Func, &Parms);
}


// Function MordhauML_ItemWidget.MordhauML_ItemWidget_C.Update Text UI
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           Data                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                           FontStyle                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UMordhauML_ItemWidget_C::Update_Text_UI(const class FString& Data, const class FString& FontStyle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MordhauML_ItemWidget_C", "Update Text UI");

	Params::MordhauML_ItemWidget_C_Update_Text_UI Parms{};

	Parms.Data = std::move(Data);
	Parms.FontStyle = std::move(FontStyle);

	UObject::ProcessEvent(Func, &Parms);
}


// Function MordhauML_ItemWidget.MordhauML_ItemWidget_C.UpdateMultilineTextUI
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FString>                   Data                                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class FString                           FontStyle                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UMordhauML_ItemWidget_C::UpdateMultilineTextUI(TArray<class FString>& Data, const class FString& FontStyle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MordhauML_ItemWidget_C", "UpdateMultilineTextUI");

	Params::MordhauML_ItemWidget_C_UpdateMultilineTextUI Parms{};

	Parms.Data = std::move(Data);
	Parms.FontStyle = std::move(FontStyle);

	UObject::ProcessEvent(Func, &Parms);

	Data = std::move(Parms.Data);
}


// Function MordhauML_ItemWidget.MordhauML_ItemWidget_C.GetFontStyle
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           FontStyleName                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UDataTable*                       FontStlyeData                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMordhauML_ItemWidget_C::GetFontStyle(const class FString& FontStyleName, class UDataTable** FontStlyeData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MordhauML_ItemWidget_C", "GetFontStyle");

	Params::MordhauML_ItemWidget_C_GetFontStyle Parms{};

	Parms.FontStyleName = std::move(FontStyleName);

	UObject::ProcessEvent(Func, &Parms);

	if (FontStlyeData != nullptr)
		*FontStlyeData = Parms.FontStlyeData;
}

}

