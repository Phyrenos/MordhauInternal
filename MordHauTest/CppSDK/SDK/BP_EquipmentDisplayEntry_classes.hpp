﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_EquipmentDisplayEntry

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass BP_EquipmentDisplayEntry.BP_EquipmentDisplayEntry_C
// 0x0058 (0x02B8 - 0x0260)
class UBP_EquipmentDisplayEntry_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UWidgetAnimation*                       PickupAnim;                                        // 0x0268(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Background;                                        // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                Border_0;                                          // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                Border_1;                                          // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_ButtonPrompt_C*                     BP_ButtonPrompt;                                   // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_4;                                           // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             SlotNumber;                                        // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             WeaponName;                                        // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         SlotIdx;                                           // 0x02A8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   ActionName;                                        // 0x02AC(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          Selected;                                          // 0x02B4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_BP_EquipmentDisplayEntry(int32 EntryPoint);
	void Update_Prompt();
	void Construct();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	class FText Get_EquipmentName_Text();
	void GetEntryTypeAndName(int32* Type, class FText* Name_0);
	struct FSlateColor GetColorAndOpacity_0();
	class FText Get_SlotNumber_Text();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_EquipmentDisplayEntry_C">();
	}
	static class UBP_EquipmentDisplayEntry_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_EquipmentDisplayEntry_C>();
	}
};
static_assert(alignof(UBP_EquipmentDisplayEntry_C) == 0x000008, "Wrong alignment on UBP_EquipmentDisplayEntry_C");
static_assert(sizeof(UBP_EquipmentDisplayEntry_C) == 0x0002B8, "Wrong size on UBP_EquipmentDisplayEntry_C");
static_assert(offsetof(UBP_EquipmentDisplayEntry_C, UberGraphFrame) == 0x000260, "Member 'UBP_EquipmentDisplayEntry_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_EquipmentDisplayEntry_C, PickupAnim) == 0x000268, "Member 'UBP_EquipmentDisplayEntry_C::PickupAnim' has a wrong offset!");
static_assert(offsetof(UBP_EquipmentDisplayEntry_C, Background) == 0x000270, "Member 'UBP_EquipmentDisplayEntry_C::Background' has a wrong offset!");
static_assert(offsetof(UBP_EquipmentDisplayEntry_C, Border_0) == 0x000278, "Member 'UBP_EquipmentDisplayEntry_C::Border_0' has a wrong offset!");
static_assert(offsetof(UBP_EquipmentDisplayEntry_C, Border_1) == 0x000280, "Member 'UBP_EquipmentDisplayEntry_C::Border_1' has a wrong offset!");
static_assert(offsetof(UBP_EquipmentDisplayEntry_C, BP_ButtonPrompt) == 0x000288, "Member 'UBP_EquipmentDisplayEntry_C::BP_ButtonPrompt' has a wrong offset!");
static_assert(offsetof(UBP_EquipmentDisplayEntry_C, Image_4) == 0x000290, "Member 'UBP_EquipmentDisplayEntry_C::Image_4' has a wrong offset!");
static_assert(offsetof(UBP_EquipmentDisplayEntry_C, SlotNumber) == 0x000298, "Member 'UBP_EquipmentDisplayEntry_C::SlotNumber' has a wrong offset!");
static_assert(offsetof(UBP_EquipmentDisplayEntry_C, WeaponName) == 0x0002A0, "Member 'UBP_EquipmentDisplayEntry_C::WeaponName' has a wrong offset!");
static_assert(offsetof(UBP_EquipmentDisplayEntry_C, SlotIdx) == 0x0002A8, "Member 'UBP_EquipmentDisplayEntry_C::SlotIdx' has a wrong offset!");
static_assert(offsetof(UBP_EquipmentDisplayEntry_C, ActionName) == 0x0002AC, "Member 'UBP_EquipmentDisplayEntry_C::ActionName' has a wrong offset!");
static_assert(offsetof(UBP_EquipmentDisplayEntry_C, Selected) == 0x0002B4, "Member 'UBP_EquipmentDisplayEntry_C::Selected' has a wrong offset!");

}

