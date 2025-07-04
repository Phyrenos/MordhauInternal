﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_EquipmentPartSlot

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "BP_SimpleSlot_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass BP_EquipmentPartSlot.BP_EquipmentPartSlot_C
// 0x0048 (0x0310 - 0x02C8)
class UBP_EquipmentPartSlot_C final : public UBP_SimpleSlot_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02C8(0x0008)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UButton*                                Button;                                            // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             HeadingText;                                       // 0x02D8(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_0;                                           // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Border;                                      // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Gradient;                                    // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Overlay_23;                                        // 0x02F8(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             PartText;                                          // 0x0300(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          IsSkinSlot;                                        // 0x0308(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_BP_EquipmentPartSlot(int32 EntryPoint);
	void BndEvt__Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void Update_(const class FText& Primary_Text_0, const class FText& Secondary_Text_0);
	void BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void Construct();
	ESlateVisibility GetVisibility_0();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_EquipmentPartSlot_C">();
	}
	static class UBP_EquipmentPartSlot_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_EquipmentPartSlot_C>();
	}
};
static_assert(alignof(UBP_EquipmentPartSlot_C) == 0x000008, "Wrong alignment on UBP_EquipmentPartSlot_C");
static_assert(sizeof(UBP_EquipmentPartSlot_C) == 0x000310, "Wrong size on UBP_EquipmentPartSlot_C");
static_assert(offsetof(UBP_EquipmentPartSlot_C, UberGraphFrame) == 0x0002C8, "Member 'UBP_EquipmentPartSlot_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_EquipmentPartSlot_C, Button) == 0x0002D0, "Member 'UBP_EquipmentPartSlot_C::Button' has a wrong offset!");
static_assert(offsetof(UBP_EquipmentPartSlot_C, HeadingText) == 0x0002D8, "Member 'UBP_EquipmentPartSlot_C::HeadingText' has a wrong offset!");
static_assert(offsetof(UBP_EquipmentPartSlot_C, Image_0) == 0x0002E0, "Member 'UBP_EquipmentPartSlot_C::Image_0' has a wrong offset!");
static_assert(offsetof(UBP_EquipmentPartSlot_C, Image_Border) == 0x0002E8, "Member 'UBP_EquipmentPartSlot_C::Image_Border' has a wrong offset!");
static_assert(offsetof(UBP_EquipmentPartSlot_C, Image_Gradient) == 0x0002F0, "Member 'UBP_EquipmentPartSlot_C::Image_Gradient' has a wrong offset!");
static_assert(offsetof(UBP_EquipmentPartSlot_C, Overlay_23) == 0x0002F8, "Member 'UBP_EquipmentPartSlot_C::Overlay_23' has a wrong offset!");
static_assert(offsetof(UBP_EquipmentPartSlot_C, PartText) == 0x000300, "Member 'UBP_EquipmentPartSlot_C::PartText' has a wrong offset!");
static_assert(offsetof(UBP_EquipmentPartSlot_C, IsSkinSlot) == 0x000308, "Member 'UBP_EquipmentPartSlot_C::IsSkinSlot' has a wrong offset!");

}

