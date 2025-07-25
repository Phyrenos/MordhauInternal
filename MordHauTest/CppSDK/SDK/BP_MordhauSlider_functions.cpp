﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_MordhauSlider

#include "Basic.hpp"

#include "BP_MordhauSlider_classes.hpp"
#include "BP_MordhauSlider_parameters.hpp"


namespace SDK
{

// Function BP_MordhauSlider.BP_MordhauSlider_C.ExecuteUbergraph_BP_MordhauSlider
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_MordhauSlider_C::ExecuteUbergraph_BP_MordhauSlider(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MordhauSlider_C", "ExecuteUbergraph_BP_MordhauSlider");

	Params::BP_MordhauSlider_C_ExecuteUbergraph_BP_MordhauSlider Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MordhauSlider.BP_MordhauSlider_C.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FPointerEvent                    MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBP_MordhauSlider_C::OnMouseLeave(const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MordhauSlider_C", "OnMouseLeave");

	Params::BP_MordhauSlider_C_OnMouseLeave Parms{};

	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MordhauSlider.BP_MordhauSlider_C.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent                    MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBP_MordhauSlider_C::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MordhauSlider_C", "OnMouseEnter");

	Params::BP_MordhauSlider_C_OnMouseEnter Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MordhauSlider.BP_MordhauSlider_C.Reset Simulated Button Pressed
// (BlueprintCallable, BlueprintEvent)

void UBP_MordhauSlider_C::Reset_Simulated_Button_Pressed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MordhauSlider_C", "Reset Simulated Button Pressed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MordhauSlider.BP_MordhauSlider_C.On Simulated Button Pressed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Direction                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_MordhauSlider_C::On_Simulated_Button_Pressed(int32 Direction)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MordhauSlider_C", "On Simulated Button Pressed");

	Params::BP_MordhauSlider_C_On_Simulated_Button_Pressed Parms{};

	Parms.Direction = Direction;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MordhauSlider.BP_MordhauSlider_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_MordhauSlider_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MordhauSlider_C", "PreConstruct");

	Params::BP_MordhauSlider_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MordhauSlider.BP_MordhauSlider_C.BndEvt__Slider_K2Node_ComponentBoundEvent_5_OnMouseCaptureBeginEvent__DelegateSignature
// (BlueprintEvent)

void UBP_MordhauSlider_C::BndEvt__Slider_K2Node_ComponentBoundEvent_5_OnMouseCaptureBeginEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MordhauSlider_C", "BndEvt__Slider_K2Node_ComponentBoundEvent_5_OnMouseCaptureBeginEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MordhauSlider.BP_MordhauSlider_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBP_MordhauSlider_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MordhauSlider_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MordhauSlider.BP_MordhauSlider_C.BndEvt__Button_Left_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)

void UBP_MordhauSlider_C::BndEvt__Button_Left_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MordhauSlider_C", "BndEvt__Button_Left_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MordhauSlider.BP_MordhauSlider_C.BndEvt__Button_Right_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)

void UBP_MordhauSlider_C::BndEvt__Button_Right_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MordhauSlider_C", "BndEvt__Button_Right_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MordhauSlider.BP_MordhauSlider_C.BndEvt__NumericDisplay_K2Node_ComponentBoundEvent_2_OnEditableTextCommittedEvent__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class FText                             Text                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// ETextCommit                             CommitMethod                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_MordhauSlider_C::BndEvt__NumericDisplay_K2Node_ComponentBoundEvent_2_OnEditableTextCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MordhauSlider_C", "BndEvt__NumericDisplay_K2Node_ComponentBoundEvent_2_OnEditableTextCommittedEvent__DelegateSignature");

	Params::BP_MordhauSlider_C_BndEvt__NumericDisplay_K2Node_ComponentBoundEvent_2_OnEditableTextCommittedEvent__DelegateSignature Parms{};

	Parms.Text = std::move(Text);
	Parms.CommitMethod = CommitMethod;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MordhauSlider.BP_MordhauSlider_C.BndEvt__NumericDisplay_K2Node_ComponentBoundEvent_1_OnEditableTextChangedEvent__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class FText                             Text                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBP_MordhauSlider_C::BndEvt__NumericDisplay_K2Node_ComponentBoundEvent_1_OnEditableTextChangedEvent__DelegateSignature(const class FText& Text)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MordhauSlider_C", "BndEvt__NumericDisplay_K2Node_ComponentBoundEvent_1_OnEditableTextChangedEvent__DelegateSignature");

	Params::BP_MordhauSlider_C_BndEvt__NumericDisplay_K2Node_ComponentBoundEvent_1_OnEditableTextChangedEvent__DelegateSignature Parms{};

	Parms.Text = std::move(Text);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MordhauSlider.BP_MordhauSlider_C.BndEvt__Slider_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                                   Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_MordhauSlider_C::BndEvt__Slider_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature(float Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MordhauSlider_C", "BndEvt__Slider_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature");

	Params::BP_MordhauSlider_C_BndEvt__Slider_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MordhauSlider.BP_MordhauSlider_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_MordhauSlider_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MordhauSlider_C", "Tick");

	Params::BP_MordhauSlider_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MordhauSlider.BP_MordhauSlider_C.Get Numeric Value
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                             ReturnValue                                            (Parm, OutParm, ReturnParm)

class FText UBP_MordhauSlider_C::Get_Numeric_Value()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MordhauSlider_C", "Get Numeric Value");

	Params::BP_MordhauSlider_C_Get_Numeric_Value Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_MordhauSlider.BP_MordhauSlider_C.Get_NumericDisplay_Visibility_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility                        ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

ESlateVisibility UBP_MordhauSlider_C::Get_NumericDisplay_Visibility_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MordhauSlider_C", "Get_NumericDisplay_Visibility_0");

	Params::BP_MordhauSlider_C_Get_NumericDisplay_Visibility_0 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_MordhauSlider.BP_MordhauSlider_C.Set Value
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_MordhauSlider_C::Set_Value(float Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MordhauSlider_C", "Set Value");

	Params::BP_MordhauSlider_C_Set_Value Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MordhauSlider.BP_MordhauSlider_C.Get Slider Value
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                                   Value                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_MordhauSlider_C::Get_Slider_Value(float* Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MordhauSlider_C", "Get Slider Value");

	Params::BP_MordhauSlider_C_Get_Slider_Value Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Value != nullptr)
		*Value = Parms.Value;
}


// Function BP_MordhauSlider.BP_MordhauSlider_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_MordhauSlider                 Slider_Struct                                          (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Skip_set_value                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_MordhauSlider_C::Initialize(const struct FS_MordhauSlider& Slider_Struct, bool Skip_set_value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MordhauSlider_C", "Initialize");

	Params::BP_MordhauSlider_C_Initialize Parms{};

	Parms.Slider_Struct = std::move(Slider_Struct);
	Parms.Skip_set_value = Skip_set_value;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MordhauSlider.BP_MordhauSlider_C.Get_ProgressBar_1_Percent_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UBP_MordhauSlider_C::Get_ProgressBar_1_Percent_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MordhauSlider_C", "Get_ProgressBar_1_Percent_0");

	Params::BP_MordhauSlider_C_Get_ProgressBar_1_Percent_0 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_MordhauSlider.BP_MordhauSlider_C.Shift slider step
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Direction                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_MordhauSlider_C::Shift_slider_step(int32 Direction)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MordhauSlider_C", "Shift slider step");

	Params::BP_MordhauSlider_C_Shift_slider_step Parms{};

	Parms.Direction = Direction;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MordhauSlider.BP_MordhauSlider_C.Discretize Value
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Discretized_Value                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_MordhauSlider_C::Discretize_Value(float Value, int32* Discretized_Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MordhauSlider_C", "Discretize Value");

	Params::BP_MordhauSlider_C_Discretize_Value Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

	if (Discretized_Value != nullptr)
		*Discretized_Value = Parms.Discretized_Value;
}


// Function BP_MordhauSlider.BP_MordhauSlider_C.Continualize Value
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Discrete_Value                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   ContinualizedValue                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_MordhauSlider_C::Continualize_Value(int32 Discrete_Value, float* ContinualizedValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MordhauSlider_C", "Continualize Value");

	Params::BP_MordhauSlider_C_Continualize_Value Parms{};

	Parms.Discrete_Value = Discrete_Value;

	UObject::ProcessEvent(Func, &Parms);

	if (ContinualizedValue != nullptr)
		*ContinualizedValue = Parms.ContinualizedValue;
}


// Function BP_MordhauSlider.BP_MordhauSlider_C.Get Discrete Slider Value
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   Discretized_Value                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_MordhauSlider_C::Get_Discrete_Slider_Value(int32* Discretized_Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MordhauSlider_C", "Get Discrete Slider Value");

	Params::BP_MordhauSlider_C_Get_Discrete_Slider_Value Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Discretized_Value != nullptr)
		*Discretized_Value = Parms.Discretized_Value;
}


// Function BP_MordhauSlider.BP_MordhauSlider_C.Create Divisions
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_MordhauSlider_C::Create_Divisions()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MordhauSlider_C", "Create Divisions");

	UObject::ProcessEvent(Func, nullptr);
}

}

