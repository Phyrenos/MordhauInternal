﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_DemoUI

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass BP_DemoUI.BP_DemoUI_C
// 0x0040 (0x02A0 - 0x0260)
class UBP_DemoUI_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UButton*                                Button_3;                                          // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                LessSpeed;                                         // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                MoreSpeed;                                         // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USlider*                                Slider_33;                                         // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_0;                                       // 0x0288(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_3;                                       // 0x0290(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          HoldingTimeline;                                   // 0x0298(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_299[0x3];                                      // 0x0299(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CurrentTimeDilation;                               // 0x029C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_DemoUI(int32 EntryPoint);
	void BndEvt__Button_3_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__MoreSpeed_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__LessSpeed_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Slider_33_K2Node_ComponentBoundEvent_1_OnMouseCaptureBeginEvent__DelegateSignature();
	void BndEvt__Slider_33_K2Node_ComponentBoundEvent_0_OnMouseCaptureEndEvent__DelegateSignature();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void Construct();
	struct FEventReply OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
	class FText GetText_0();
	class FText GetText_1();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_DemoUI_C">();
	}
	static class UBP_DemoUI_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_DemoUI_C>();
	}
};
static_assert(alignof(UBP_DemoUI_C) == 0x000008, "Wrong alignment on UBP_DemoUI_C");
static_assert(sizeof(UBP_DemoUI_C) == 0x0002A0, "Wrong size on UBP_DemoUI_C");
static_assert(offsetof(UBP_DemoUI_C, UberGraphFrame) == 0x000260, "Member 'UBP_DemoUI_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_DemoUI_C, Button_3) == 0x000268, "Member 'UBP_DemoUI_C::Button_3' has a wrong offset!");
static_assert(offsetof(UBP_DemoUI_C, LessSpeed) == 0x000270, "Member 'UBP_DemoUI_C::LessSpeed' has a wrong offset!");
static_assert(offsetof(UBP_DemoUI_C, MoreSpeed) == 0x000278, "Member 'UBP_DemoUI_C::MoreSpeed' has a wrong offset!");
static_assert(offsetof(UBP_DemoUI_C, Slider_33) == 0x000280, "Member 'UBP_DemoUI_C::Slider_33' has a wrong offset!");
static_assert(offsetof(UBP_DemoUI_C, TextBlock_0) == 0x000288, "Member 'UBP_DemoUI_C::TextBlock_0' has a wrong offset!");
static_assert(offsetof(UBP_DemoUI_C, TextBlock_3) == 0x000290, "Member 'UBP_DemoUI_C::TextBlock_3' has a wrong offset!");
static_assert(offsetof(UBP_DemoUI_C, HoldingTimeline) == 0x000298, "Member 'UBP_DemoUI_C::HoldingTimeline' has a wrong offset!");
static_assert(offsetof(UBP_DemoUI_C, CurrentTimeDilation) == 0x00029C, "Member 'UBP_DemoUI_C::CurrentTimeDilation' has a wrong offset!");

}

