﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ChatBoxEntry

#include "Basic.hpp"

#include "BP_ChatBoxEntry_classes.hpp"
#include "BP_ChatBoxEntry_parameters.hpp"


namespace SDK
{

// Function BP_ChatBoxEntry.BP_ChatBoxEntry_C.ExecuteUbergraph_BP_ChatBoxEntry
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ChatBoxEntry_C::ExecuteUbergraph_BP_ChatBoxEntry(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ChatBoxEntry_C", "ExecuteUbergraph_BP_ChatBoxEntry");

	Params::BP_ChatBoxEntry_C_ExecuteUbergraph_BP_ChatBoxEntry Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ChatBoxEntry.BP_ChatBoxEntry_C.ContextButtonClicked3
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Button_Index                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ChatBoxEntry_C::ContextButtonClicked3(int32 Button_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ChatBoxEntry_C", "ContextButtonClicked3");

	Params::BP_ChatBoxEntry_C_ContextButtonClicked3 Parms{};

	Parms.Button_Index = Button_Index;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ChatBoxEntry.BP_ChatBoxEntry_C.BanReasonDialogEntered
// (BlueprintCallable, BlueprintEvent)

void UBP_ChatBoxEntry_C::BanReasonDialogEntered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ChatBoxEntry_C", "BanReasonDialogEntered");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ChatBoxEntry.BP_ChatBoxEntry_C.BanReasonDialogCanceled
// (BlueprintCallable, BlueprintEvent)

void UBP_ChatBoxEntry_C::BanReasonDialogCanceled()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ChatBoxEntry_C", "BanReasonDialogCanceled");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ChatBoxEntry.BP_ChatBoxEntry_C.ADMIN - Ban
// (BlueprintCallable, BlueprintEvent)

void UBP_ChatBoxEntry_C::ADMIN___Ban()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ChatBoxEntry_C", "ADMIN - Ban");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ChatBoxEntry.BP_ChatBoxEntry_C.ADMIN - Kick
// (BlueprintCallable, BlueprintEvent)

void UBP_ChatBoxEntry_C::ADMIN___Kick()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ChatBoxEntry_C", "ADMIN - Kick");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ChatBoxEntry.BP_ChatBoxEntry_C.BanDurationDialogCanceled
// (BlueprintCallable, BlueprintEvent)

void UBP_ChatBoxEntry_C::BanDurationDialogCanceled()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ChatBoxEntry_C", "BanDurationDialogCanceled");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ChatBoxEntry.BP_ChatBoxEntry_C.BanDurationDialogEntered
// (BlueprintCallable, BlueprintEvent)

void UBP_ChatBoxEntry_C::BanDurationDialogEntered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ChatBoxEntry_C", "BanDurationDialogEntered");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ChatBoxEntry.BP_ChatBoxEntry_C.KickDialogCanceled
// (BlueprintCallable, BlueprintEvent)

void UBP_ChatBoxEntry_C::KickDialogCanceled()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ChatBoxEntry_C", "KickDialogCanceled");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ChatBoxEntry.BP_ChatBoxEntry_C.KickDialogEntered
// (BlueprintCallable, BlueprintEvent)

void UBP_ChatBoxEntry_C::KickDialogEntered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ChatBoxEntry_C", "KickDialogEntered");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ChatBoxEntry.BP_ChatBoxEntry_C.CreateWrapper
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TMap<class FString, class FText>        InOptions                                              (BlueprintVisible, BlueprintReadOnly, Parm)

void UBP_ChatBoxEntry_C::CreateWrapper(const TMap<class FString, class FText>& InOptions)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ChatBoxEntry_C", "CreateWrapper");

	Params::BP_ChatBoxEntry_C_CreateWrapper Parms{};

	Parms.InOptions = std::move(InOptions);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ChatBoxEntry.BP_ChatBoxEntry_C.OptionSelected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           Option                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UBP_ChatBoxEntry_C::OptionSelected(const class FString& Option)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ChatBoxEntry_C", "OptionSelected");

	Params::BP_ChatBoxEntry_C_OptionSelected Parms{};

	Parms.Option = std::move(Option);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ChatBoxEntry.BP_ChatBoxEntry_C.CreateWrapper_Complex
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TMap<class FString, class FText>        InOptions                                              (BlueprintVisible, BlueprintReadOnly, Parm)
// TArray<class UTexture2D*>               Icons                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<struct FLinearColor>             Colors                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class FText                             Title                                                  (BlueprintVisible, BlueprintReadOnly, Parm)

void UBP_ChatBoxEntry_C::CreateWrapper_Complex(const TMap<class FString, class FText>& InOptions, const TArray<class UTexture2D*>& Icons, const TArray<struct FLinearColor>& Colors, const class FText& Title)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ChatBoxEntry_C", "CreateWrapper_Complex");

	Params::BP_ChatBoxEntry_C_CreateWrapper_Complex Parms{};

	Parms.InOptions = std::move(InOptions);
	Parms.Icons = std::move(Icons);
	Parms.Colors = std::move(Colors);
	Parms.Title = std::move(Title);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ChatBoxEntry.BP_ChatBoxEntry_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)

void UBP_ChatBoxEntry_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ChatBoxEntry_C", "BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ChatBoxEntry.BP_ChatBoxEntry_C.ContextButtonClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Button_Index                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ChatBoxEntry_C::ContextButtonClicked(int32 Button_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ChatBoxEntry_C", "ContextButtonClicked");

	Params::BP_ChatBoxEntry_C_ContextButtonClicked Parms{};

	Parms.Button_Index = Button_Index;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ChatBoxEntry.BP_ChatBoxEntry_C.MuteDialogEntered
// (BlueprintCallable, BlueprintEvent)

void UBP_ChatBoxEntry_C::MuteDialogEntered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ChatBoxEntry_C", "MuteDialogEntered");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ChatBoxEntry.BP_ChatBoxEntry_C.MuteDialogCanceled
// (BlueprintCallable, BlueprintEvent)

void UBP_ChatBoxEntry_C::MuteDialogCanceled()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ChatBoxEntry_C", "MuteDialogCanceled");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ChatBoxEntry.BP_ChatBoxEntry_C.MessageDialogCanceled
// (BlueprintCallable, BlueprintEvent)

void UBP_ChatBoxEntry_C::MessageDialogCanceled()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ChatBoxEntry_C", "MessageDialogCanceled");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ChatBoxEntry.BP_ChatBoxEntry_C.MessageDialogEntered
// (BlueprintCallable, BlueprintEvent)

void UBP_ChatBoxEntry_C::MessageDialogEntered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ChatBoxEntry_C", "MessageDialogEntered");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ChatBoxEntry.BP_ChatBoxEntry_C.ADMIN - Message
// (BlueprintCallable, BlueprintEvent)

void UBP_ChatBoxEntry_C::ADMIN___Message()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ChatBoxEntry_C", "ADMIN - Message");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ChatBoxEntry.BP_ChatBoxEntry_C.ContextButtonClicked2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Button_Index                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ChatBoxEntry_C::ContextButtonClicked2(int32 Button_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ChatBoxEntry_C", "ContextButtonClicked2");

	Params::BP_ChatBoxEntry_C_ContextButtonClicked2 Parms{};

	Parms.Button_Index = Button_Index;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ChatBoxEntry.BP_ChatBoxEntry_C.ADMIN - Mute
// (BlueprintCallable, BlueprintEvent)

void UBP_ChatBoxEntry_C::ADMIN___Mute()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ChatBoxEntry_C", "ADMIN - Mute");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ChatBoxEntry.BP_ChatBoxEntry_C.VoteKick
// (BlueprintCallable, BlueprintEvent)

void UBP_ChatBoxEntry_C::VoteKick()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ChatBoxEntry_C", "VoteKick");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ChatBoxEntry.BP_ChatBoxEntry_C.ClientMute
// (BlueprintCallable, BlueprintEvent)

void UBP_ChatBoxEntry_C::ClientMute()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ChatBoxEntry_C", "ClientMute");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ChatBoxEntry.BP_ChatBoxEntry_C.Motivational Mute
// (BlueprintCallable, BlueprintEvent)

void UBP_ChatBoxEntry_C::Motivational_Mute()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ChatBoxEntry_C", "Motivational Mute");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ChatBoxEntry.BP_ChatBoxEntry_C.SetupEntry
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           Name_0                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FPlayFabPlayer                   Player_0                                               (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class FText                             Message_0                                              (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                             Prefix_0                                               (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FLinearColor                     NameColor                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// E_ChatUserTypes                         Chat_User_Type_0                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ChatBoxEntry_C::SetupEntry(const class FString& Name_0, const struct FPlayFabPlayer& Player_0, const class FText& Message_0, const class FText& Prefix_0, const struct FLinearColor& NameColor, E_ChatUserTypes Chat_User_Type_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ChatBoxEntry_C", "SetupEntry");

	Params::BP_ChatBoxEntry_C_SetupEntry Parms{};

	Parms.Name_0 = std::move(Name_0);
	Parms.Player_0 = std::move(Player_0);
	Parms.Message_0 = std::move(Message_0);
	Parms.Prefix_0 = std::move(Prefix_0);
	Parms.NameColor = std::move(NameColor);
	Parms.Chat_User_Type_0 = Chat_User_Type_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ChatBoxEntry.BP_ChatBoxEntry_C.GetVisibility_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility                        ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

ESlateVisibility UBP_ChatBoxEntry_C::GetVisibility_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ChatBoxEntry_C", "GetVisibility_0");

	Params::BP_ChatBoxEntry_C_GetVisibility_0 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_ChatBoxEntry.BP_ChatBoxEntry_C.UpdateEntryMessage
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             New_Message                                            (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FLinearColor                     Text_Color                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ChatBoxEntry_C::UpdateEntryMessage(const class FText& New_Message, const struct FLinearColor& Text_Color)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ChatBoxEntry_C", "UpdateEntryMessage");

	Params::BP_ChatBoxEntry_C_UpdateEntryMessage Parms{};

	Parms.New_Message = std::move(New_Message);
	Parms.Text_Color = std::move(Text_Color);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ChatBoxEntry.BP_ChatBoxEntry_C.GetToolTipText_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                             ReturnValue                                            (Parm, OutParm, ReturnParm)

class FText UBP_ChatBoxEntry_C::GetToolTipText_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ChatBoxEntry_C", "GetToolTipText_0");

	Params::BP_ChatBoxEntry_C_GetToolTipText_0 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_ChatBoxEntry.BP_ChatBoxEntry_C.Manage Input Modes
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_ChatBoxEntry_C::Manage_Input_Modes()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ChatBoxEntry_C", "Manage Input Modes");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ChatBoxEntry.BP_ChatBoxEntry_C.InitializeOptions
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TMap<class FString, class FText>        OptionsMap                                             (Parm, OutParm)

void UBP_ChatBoxEntry_C::InitializeOptions(TMap<class FString, class FText>* OptionsMap)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ChatBoxEntry_C", "InitializeOptions");

	Params::BP_ChatBoxEntry_C_InitializeOptions Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OptionsMap != nullptr)
		*OptionsMap = std::move(Parms.OptionsMap);
}

}

