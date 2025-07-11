﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_EquipmentSlotEntry

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass BP_EquipmentSlotEntry.BP_EquipmentSlotEntry_C
// 0x0080 (0x02E0 - 0x0260)
class UBP_EquipmentSlotEntry_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UBackgroundBlur*                        BackgroundBlur_0;                                  // 0x0268(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                Button_5;                                          // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_0;                                           // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_1;                                           // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_0;                                       // 0x0288(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_2;                                       // 0x0290(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                   Slot_Text;                                         // 0x0298(0x0018)(Edit, BlueprintVisible)
	class FText                                   Equipment_Name;                                    // 0x02B0(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMulticastInlineDelegate<void(int32 Slot_Index)> EquipmentSlotClicked;                              // 0x02C8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                         Index_Slot;                                        // 0x02D8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Minimal;                                           // 0x02DC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_BP_EquipmentSlotEntry(int32 EntryPoint);
	void BndEvt__Button_5_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void Update(const class FText& Equipment_Name_0, int32 Slot_0);
	ESlateVisibility GetVisibility_0();
	ESlateVisibility HideIfMinimal_Visibility();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_EquipmentSlotEntry_C">();
	}
	static class UBP_EquipmentSlotEntry_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_EquipmentSlotEntry_C>();
	}
};
static_assert(alignof(UBP_EquipmentSlotEntry_C) == 0x000008, "Wrong alignment on UBP_EquipmentSlotEntry_C");
static_assert(sizeof(UBP_EquipmentSlotEntry_C) == 0x0002E0, "Wrong size on UBP_EquipmentSlotEntry_C");
static_assert(offsetof(UBP_EquipmentSlotEntry_C, UberGraphFrame) == 0x000260, "Member 'UBP_EquipmentSlotEntry_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_EquipmentSlotEntry_C, BackgroundBlur_0) == 0x000268, "Member 'UBP_EquipmentSlotEntry_C::BackgroundBlur_0' has a wrong offset!");
static_assert(offsetof(UBP_EquipmentSlotEntry_C, Button_5) == 0x000270, "Member 'UBP_EquipmentSlotEntry_C::Button_5' has a wrong offset!");
static_assert(offsetof(UBP_EquipmentSlotEntry_C, Image_0) == 0x000278, "Member 'UBP_EquipmentSlotEntry_C::Image_0' has a wrong offset!");
static_assert(offsetof(UBP_EquipmentSlotEntry_C, Image_1) == 0x000280, "Member 'UBP_EquipmentSlotEntry_C::Image_1' has a wrong offset!");
static_assert(offsetof(UBP_EquipmentSlotEntry_C, TextBlock_0) == 0x000288, "Member 'UBP_EquipmentSlotEntry_C::TextBlock_0' has a wrong offset!");
static_assert(offsetof(UBP_EquipmentSlotEntry_C, TextBlock_2) == 0x000290, "Member 'UBP_EquipmentSlotEntry_C::TextBlock_2' has a wrong offset!");
static_assert(offsetof(UBP_EquipmentSlotEntry_C, Slot_Text) == 0x000298, "Member 'UBP_EquipmentSlotEntry_C::Slot_Text' has a wrong offset!");
static_assert(offsetof(UBP_EquipmentSlotEntry_C, Equipment_Name) == 0x0002B0, "Member 'UBP_EquipmentSlotEntry_C::Equipment_Name' has a wrong offset!");
static_assert(offsetof(UBP_EquipmentSlotEntry_C, EquipmentSlotClicked) == 0x0002C8, "Member 'UBP_EquipmentSlotEntry_C::EquipmentSlotClicked' has a wrong offset!");
static_assert(offsetof(UBP_EquipmentSlotEntry_C, Index_Slot) == 0x0002D8, "Member 'UBP_EquipmentSlotEntry_C::Index_Slot' has a wrong offset!");
static_assert(offsetof(UBP_EquipmentSlotEntry_C, Minimal) == 0x0002DC, "Member 'UBP_EquipmentSlotEntry_C::Minimal' has a wrong offset!");

}

