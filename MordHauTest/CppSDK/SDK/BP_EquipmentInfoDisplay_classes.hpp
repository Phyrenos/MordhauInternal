﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_EquipmentInfoDisplay

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass BP_EquipmentInfoDisplay.BP_EquipmentInfoDisplay_C
// 0x0048 (0x02A8 - 0x0260)
class UBP_EquipmentInfoDisplay_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UWidgetAnimation*                       AddAmmoAnim;                                       // 0x0268(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBorder*                                Border_1;                                          // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_0;                                           // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Overlay_2;                                         // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_0;                                       // 0x0288(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_2;                                       // 0x0290(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VerticalBox_0;                                     // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         AddedAmmoCount;                                    // 0x02A0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_EquipmentInfoDisplay(int32 EntryPoint);
	void On_AddAmmoAnim_Finish();
	void OnRestockedAmmo(class AMordhauEquipment* Equipment, int32 Amount);
	void Construct();
	class FText GetText_0();
	ESlateVisibility GetVisibility_0();
	class FText GetText_1();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_EquipmentInfoDisplay_C">();
	}
	static class UBP_EquipmentInfoDisplay_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_EquipmentInfoDisplay_C>();
	}
};
static_assert(alignof(UBP_EquipmentInfoDisplay_C) == 0x000008, "Wrong alignment on UBP_EquipmentInfoDisplay_C");
static_assert(sizeof(UBP_EquipmentInfoDisplay_C) == 0x0002A8, "Wrong size on UBP_EquipmentInfoDisplay_C");
static_assert(offsetof(UBP_EquipmentInfoDisplay_C, UberGraphFrame) == 0x000260, "Member 'UBP_EquipmentInfoDisplay_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_EquipmentInfoDisplay_C, AddAmmoAnim) == 0x000268, "Member 'UBP_EquipmentInfoDisplay_C::AddAmmoAnim' has a wrong offset!");
static_assert(offsetof(UBP_EquipmentInfoDisplay_C, Border_1) == 0x000270, "Member 'UBP_EquipmentInfoDisplay_C::Border_1' has a wrong offset!");
static_assert(offsetof(UBP_EquipmentInfoDisplay_C, Image_0) == 0x000278, "Member 'UBP_EquipmentInfoDisplay_C::Image_0' has a wrong offset!");
static_assert(offsetof(UBP_EquipmentInfoDisplay_C, Overlay_2) == 0x000280, "Member 'UBP_EquipmentInfoDisplay_C::Overlay_2' has a wrong offset!");
static_assert(offsetof(UBP_EquipmentInfoDisplay_C, TextBlock_0) == 0x000288, "Member 'UBP_EquipmentInfoDisplay_C::TextBlock_0' has a wrong offset!");
static_assert(offsetof(UBP_EquipmentInfoDisplay_C, TextBlock_2) == 0x000290, "Member 'UBP_EquipmentInfoDisplay_C::TextBlock_2' has a wrong offset!");
static_assert(offsetof(UBP_EquipmentInfoDisplay_C, VerticalBox_0) == 0x000298, "Member 'UBP_EquipmentInfoDisplay_C::VerticalBox_0' has a wrong offset!");
static_assert(offsetof(UBP_EquipmentInfoDisplay_C, AddedAmmoCount) == 0x0002A0, "Member 'UBP_EquipmentInfoDisplay_C::AddedAmmoCount' has a wrong offset!");

}

