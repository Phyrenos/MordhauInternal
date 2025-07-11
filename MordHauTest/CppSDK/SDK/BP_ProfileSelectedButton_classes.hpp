﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ProfileSelectedButton

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_ProfileSelectButton_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass BP_ProfileSelectedButton.BP_ProfileSelectedButton_C
// 0x0018 (0x02C8 - 0x02B0)
class UBP_ProfileSelectedButton_C final : public UBP_ProfileSelectButton_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_ProfileSelectedButton_C;         // 0x02B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UButton*                                Button_Selected;                                   // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_Selected;                                // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_ProfileSelectedButton(int32 EntryPoint);
	void Construct();
	void BndEvt__Button_1_K2Node_ComponentBoundEvent_68_OnButtonClickedEvent__DelegateSignature();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ProfileSelectedButton_C">();
	}
	static class UBP_ProfileSelectedButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_ProfileSelectedButton_C>();
	}
};
static_assert(alignof(UBP_ProfileSelectedButton_C) == 0x000008, "Wrong alignment on UBP_ProfileSelectedButton_C");
static_assert(sizeof(UBP_ProfileSelectedButton_C) == 0x0002C8, "Wrong size on UBP_ProfileSelectedButton_C");
static_assert(offsetof(UBP_ProfileSelectedButton_C, UberGraphFrame_BP_ProfileSelectedButton_C) == 0x0002B0, "Member 'UBP_ProfileSelectedButton_C::UberGraphFrame_BP_ProfileSelectedButton_C' has a wrong offset!");
static_assert(offsetof(UBP_ProfileSelectedButton_C, Button_Selected) == 0x0002B8, "Member 'UBP_ProfileSelectedButton_C::Button_Selected' has a wrong offset!");
static_assert(offsetof(UBP_ProfileSelectedButton_C, TextBlock_Selected) == 0x0002C0, "Member 'UBP_ProfileSelectedButton_C::TextBlock_Selected' has a wrong offset!");

}

