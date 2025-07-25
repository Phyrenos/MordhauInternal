﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_InformationDialog

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Mordhau_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass BP_InformationDialog.BP_InformationDialog_C
// 0x0040 (0x02B8 - 0x0278)
class UBP_InformationDialog_C final : public UMordhauDialog
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UBP_OneButtonDialog_C*                  BP_OneButtonDialog;                                // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_0;                                       // 0x0288(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                   InfoText;                                          // 0x0290(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMulticastInlineDelegate<void()>              ButtonClicked;                                     // 0x02A8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void ExecuteUbergraph_BP_InformationDialog(int32 EntryPoint);
	void OnRequestDialogFocus_Event_0();
	void Construct();
	void Hide();
	void Show();
	void BndEvt__BP_OneButtonDialog_K2Node_ComponentBoundEvent_14_ButtonClicked__DelegateSignature();
	class FText GetInfoText();
	void SetTitleText(const class FText& TitleText);
	void SetButtonText(const class FText& ButtonText);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_InformationDialog_C">();
	}
	static class UBP_InformationDialog_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_InformationDialog_C>();
	}
};
static_assert(alignof(UBP_InformationDialog_C) == 0x000008, "Wrong alignment on UBP_InformationDialog_C");
static_assert(sizeof(UBP_InformationDialog_C) == 0x0002B8, "Wrong size on UBP_InformationDialog_C");
static_assert(offsetof(UBP_InformationDialog_C, UberGraphFrame) == 0x000278, "Member 'UBP_InformationDialog_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_InformationDialog_C, BP_OneButtonDialog) == 0x000280, "Member 'UBP_InformationDialog_C::BP_OneButtonDialog' has a wrong offset!");
static_assert(offsetof(UBP_InformationDialog_C, TextBlock_0) == 0x000288, "Member 'UBP_InformationDialog_C::TextBlock_0' has a wrong offset!");
static_assert(offsetof(UBP_InformationDialog_C, InfoText) == 0x000290, "Member 'UBP_InformationDialog_C::InfoText' has a wrong offset!");
static_assert(offsetof(UBP_InformationDialog_C, ButtonClicked) == 0x0002A8, "Member 'UBP_InformationDialog_C::ButtonClicked' has a wrong offset!");

}

