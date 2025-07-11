﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ProfileSelectButton

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass BP_ProfileSelectButton.BP_ProfileSelectButton_C
// 0x0050 (0x02B0 - 0x0260)
class UBP_ProfileSelectButton_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UWidgetAnimation*                       HoverAnim;                                         // 0x0268(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UButton*                                Button_1;                                          // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_1;                                       // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                   ProfileName;                                       // 0x0280(0x0018)(Edit, BlueprintVisible)
	TMulticastInlineDelegate<void(int32 ProfileId)> OnProfileButtonClicked;                            // 0x0298(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                         ProfileId;                                         // 0x02A8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_ProfileSelectButton(int32 EntryPoint);
	void BndEvt__Button_1_K2Node_ComponentBoundEvent_380_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_1_K2Node_ComponentBoundEvent_369_OnButtonHoverEvent__DelegateSignature();
	void Construct();
	void BndEvt__Button_1_K2Node_ComponentBoundEvent_46_OnButtonClickedEvent__DelegateSignature();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ProfileSelectButton_C">();
	}
	static class UBP_ProfileSelectButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_ProfileSelectButton_C>();
	}
};
static_assert(alignof(UBP_ProfileSelectButton_C) == 0x000008, "Wrong alignment on UBP_ProfileSelectButton_C");
static_assert(sizeof(UBP_ProfileSelectButton_C) == 0x0002B0, "Wrong size on UBP_ProfileSelectButton_C");
static_assert(offsetof(UBP_ProfileSelectButton_C, UberGraphFrame) == 0x000260, "Member 'UBP_ProfileSelectButton_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_ProfileSelectButton_C, HoverAnim) == 0x000268, "Member 'UBP_ProfileSelectButton_C::HoverAnim' has a wrong offset!");
static_assert(offsetof(UBP_ProfileSelectButton_C, Button_1) == 0x000270, "Member 'UBP_ProfileSelectButton_C::Button_1' has a wrong offset!");
static_assert(offsetof(UBP_ProfileSelectButton_C, TextBlock_1) == 0x000278, "Member 'UBP_ProfileSelectButton_C::TextBlock_1' has a wrong offset!");
static_assert(offsetof(UBP_ProfileSelectButton_C, ProfileName) == 0x000280, "Member 'UBP_ProfileSelectButton_C::ProfileName' has a wrong offset!");
static_assert(offsetof(UBP_ProfileSelectButton_C, OnProfileButtonClicked) == 0x000298, "Member 'UBP_ProfileSelectButton_C::OnProfileButtonClicked' has a wrong offset!");
static_assert(offsetof(UBP_ProfileSelectButton_C, ProfileId) == 0x0002A8, "Member 'UBP_ProfileSelectButton_C::ProfileId' has a wrong offset!");

}

