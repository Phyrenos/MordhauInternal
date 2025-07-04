﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_TwoButtonDialog

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Mordhau_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass BP_TwoButtonDialog.BP_TwoButtonDialog_C
// 0x0090 (0x0308 - 0x0278)
class UBP_TwoButtonDialog_C final : public UMordhauDialog
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UBP_BaseDialog_C*                       BP_BaseDialog;                                     // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PromptButton_New_C*                 BP_PromptButton_LeftDialog;                        // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PromptButton_New_C*                 BP_PromptButton_RightDialog;                       // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNamedSlot*                             TwoButtonContent;                                  // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                   LeftButtonText;                                    // 0x02A0(0x0018)(Edit, BlueprintVisible)
	class FText                                   TitleText;                                         // 0x02B8(0x0018)(Edit, BlueprintVisible)
	TMulticastInlineDelegate<void()>              LeftButtonClicked;                                 // 0x02D0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class FText                                   RightButtonText;                                   // 0x02E0(0x0018)(Edit, BlueprintVisible)
	TMulticastInlineDelegate<void()>              RightButtonClicked;                                // 0x02F8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void ExecuteUbergraph_BP_TwoButtonDialog(int32 EntryPoint);
	void RightButtonClick();
	void LeftButtonClick();
	void BndEvt__BP_TwoButtonDialog_BP_PromptButton_RightDialog_K2Node_ComponentBoundEvent_1_onClicked__DelegateSignature();
	void BndEvt__BP_TwoButtonDialog_BP_PromptButton_LeftDialog_K2Node_ComponentBoundEvent_0_onClicked__DelegateSignature();
	void Hide();
	void Show();
	void Construct();
	struct FEventReply OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_TwoButtonDialog_C">();
	}
	static class UBP_TwoButtonDialog_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_TwoButtonDialog_C>();
	}
};
static_assert(alignof(UBP_TwoButtonDialog_C) == 0x000008, "Wrong alignment on UBP_TwoButtonDialog_C");
static_assert(sizeof(UBP_TwoButtonDialog_C) == 0x000308, "Wrong size on UBP_TwoButtonDialog_C");
static_assert(offsetof(UBP_TwoButtonDialog_C, UberGraphFrame) == 0x000278, "Member 'UBP_TwoButtonDialog_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_TwoButtonDialog_C, BP_BaseDialog) == 0x000280, "Member 'UBP_TwoButtonDialog_C::BP_BaseDialog' has a wrong offset!");
static_assert(offsetof(UBP_TwoButtonDialog_C, BP_PromptButton_LeftDialog) == 0x000288, "Member 'UBP_TwoButtonDialog_C::BP_PromptButton_LeftDialog' has a wrong offset!");
static_assert(offsetof(UBP_TwoButtonDialog_C, BP_PromptButton_RightDialog) == 0x000290, "Member 'UBP_TwoButtonDialog_C::BP_PromptButton_RightDialog' has a wrong offset!");
static_assert(offsetof(UBP_TwoButtonDialog_C, TwoButtonContent) == 0x000298, "Member 'UBP_TwoButtonDialog_C::TwoButtonContent' has a wrong offset!");
static_assert(offsetof(UBP_TwoButtonDialog_C, LeftButtonText) == 0x0002A0, "Member 'UBP_TwoButtonDialog_C::LeftButtonText' has a wrong offset!");
static_assert(offsetof(UBP_TwoButtonDialog_C, TitleText) == 0x0002B8, "Member 'UBP_TwoButtonDialog_C::TitleText' has a wrong offset!");
static_assert(offsetof(UBP_TwoButtonDialog_C, LeftButtonClicked) == 0x0002D0, "Member 'UBP_TwoButtonDialog_C::LeftButtonClicked' has a wrong offset!");
static_assert(offsetof(UBP_TwoButtonDialog_C, RightButtonText) == 0x0002E0, "Member 'UBP_TwoButtonDialog_C::RightButtonText' has a wrong offset!");
static_assert(offsetof(UBP_TwoButtonDialog_C, RightButtonClicked) == 0x0002F8, "Member 'UBP_TwoButtonDialog_C::RightButtonClicked' has a wrong offset!");

}

