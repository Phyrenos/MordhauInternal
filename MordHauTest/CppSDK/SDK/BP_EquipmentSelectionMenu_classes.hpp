﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_EquipmentSelectionMenu

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Mordhau_structs.hpp"
#include "BP_SelectionMenu_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass BP_EquipmentSelectionMenu.BP_EquipmentSelectionMenu_C
// 0x0130 (0x0438 - 0x0308)
class UBP_EquipmentSelectionMenu_C final : public UBP_SelectionMenu_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0308(0x0008)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UWidgetAnimation*                       RefreshList;                                       // 0x0310(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBP_ButtonPrompt_C*                     BP_ButtonPrompt_ArmorFilterDown;                   // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_ButtonPrompt_C*                     BP_ButtonPrompt_ArmorFilterUp;                     // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_CustomizationItemGrid_C*            BP_CustomizationItemGrid;                          // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_EquipmentTypeFilterTab_C*           BP_EquipmentTypeFilterTab_1h;                      // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_EquipmentTypeFilterTab_C*           BP_EquipmentTypeFilterTab_2h;                      // 0x0338(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_EquipmentTypeFilterTab_C*           BP_EquipmentTypeFilterTab_all;                     // 0x0340(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_EquipmentTypeFilterTab_C*           BP_EquipmentTypeFilterTab_Ranged;                  // 0x0348(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_EquipmentTypeFilterTab_C*           BP_EquipmentTypeFilterTab_Shield;                  // 0x0350(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_EquipmentTypeFilterTab_C*           BP_EquipmentTypeFilterTab_Utillity;                // 0x0358(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_ItemGoldCost_C*                     BP_PlayerGold;                                     // 0x0360(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PromptButton_New_C*                 BP_PromptButton_Back;                              // 0x0368(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PromptButton_New_C*                 BP_PromptButton_Customize;                         // 0x0370(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PromptButton_New_C*                 BP_PromptButton_NextSlot;                          // 0x0378(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PromptButton_New_C*                 BP_PromptButton_PrevSlot;                          // 0x0380(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_SearchBar_C*                        BP_SearchBar;                                      // 0x0388(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_SmallTopLabel_C*                    BP_SmallTopLabel;                                  // 0x0390(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_SmallTopLabel_C*                    BP_SmallTopLabel_1;                                // 0x0398(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_SmallTopLabel_C*                    BP_SmallTopLabel_Slot_1;                           // 0x03A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Overlay_0;                                         // 0x03A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VerticalBox_NextSlot;                              // 0x03B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCharacterProfileBPWrapper*             Profile_Wrapper_0;                                 // 0x03B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UBP_EquipmentTypeFilterTab_C*>   Equipment_Filter_Tabs;                             // 0x03C0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	EEquipmentCategory                            Equipment_Type_Filter;                             // 0x03D0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsAllFilter;                                       // 0x03D1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3D2[0x6];                                      // 0x03D2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TMulticastInlineDelegate<void()>              List_Unhovered;                                    // 0x03D8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UBP_TextTooltip_C*                      Tooltip;                                           // 0x03E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Equipment_Slot;                                    // 0x03F0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3F4[0x4];                                      // 0x03F4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_EquipmentTypeFilterTab_C*           Selected_Filter_Tab;                               // 0x03F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMulticastInlineDelegate<void()>              CustomizeButtonClicked;                            // 0x0400(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TMulticastInlineDelegate<void()>              NextSlotClicked;                                   // 0x0410(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TMulticastInlineDelegate<void()>              PrevSlotClicked;                                   // 0x0420(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          bIsHordeCustomization;                             // 0x0430(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_BP_EquipmentSelectionMenu(int32 EntryPoint);
	void BndEvt__BP_EquipmentSelectionMenu_BP_PromptButton_NextSlot_K2Node_ComponentBoundEvent_3_onClicked__DelegateSignature();
	void BndEvt__BP_EquipmentSelectionMenu_BP_PromptButton_PrevSlot_K2Node_ComponentBoundEvent_2_onClicked__DelegateSignature();
	void BndEvt__BP_EquipmentSelectionMenu_BP_PromptButton_Back_1_K2Node_ComponentBoundEvent_1_onClicked__DelegateSignature();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void BndEvt__BP_EquipmentSelectionMenu_BP_PromptButton_Back_K2Node_ComponentBoundEvent_0_onClicked__DelegateSignature();
	void Active();
	void Filter_Entries();
	void Tab_Clicked(class UBP_EquipmentTypeFilterTab_C* Tab);
	void Construct();
	void BndEvt__BP_SearchBar_K2Node_ComponentBoundEvent_7_On_Text_Changed__DelegateSignature(const class FText& Text);
	void Filter_Is_Peasant_Weapon(class UObject* Obj_A, bool* Ret_Val);
	void Filter_By_Weapon_Type(class UObject* Obj_A, bool* Ret_Val);
	void Select_Tab(class UBP_EquipmentTypeFilterTab_C* Tab);
	void Update_Gold();
	struct FEventReply OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
	void Select_Initial_Tab();
	void Select_Next_Tab();
	void Select_Prev_Tab();
	bool Get_BP_PromptButton_Customize_bIsEnabled_0();
	void Initialize_NextPrev_Elements();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_EquipmentSelectionMenu_C">();
	}
	static class UBP_EquipmentSelectionMenu_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_EquipmentSelectionMenu_C>();
	}
};
static_assert(alignof(UBP_EquipmentSelectionMenu_C) == 0x000008, "Wrong alignment on UBP_EquipmentSelectionMenu_C");
static_assert(sizeof(UBP_EquipmentSelectionMenu_C) == 0x000438, "Wrong size on UBP_EquipmentSelectionMenu_C");
static_assert(offsetof(UBP_EquipmentSelectionMenu_C, UberGraphFrame) == 0x000308, "Member 'UBP_EquipmentSelectionMenu_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_EquipmentSelectionMenu_C, RefreshList) == 0x000310, "Member 'UBP_EquipmentSelectionMenu_C::RefreshList' has a wrong offset!");
static_assert(offsetof(UBP_EquipmentSelectionMenu_C, BP_ButtonPrompt_ArmorFilterDown) == 0x000318, "Member 'UBP_EquipmentSelectionMenu_C::BP_ButtonPrompt_ArmorFilterDown' has a wrong offset!");
static_assert(offsetof(UBP_EquipmentSelectionMenu_C, BP_ButtonPrompt_ArmorFilterUp) == 0x000320, "Member 'UBP_EquipmentSelectionMenu_C::BP_ButtonPrompt_ArmorFilterUp' has a wrong offset!");
static_assert(offsetof(UBP_EquipmentSelectionMenu_C, BP_CustomizationItemGrid) == 0x000328, "Member 'UBP_EquipmentSelectionMenu_C::BP_CustomizationItemGrid' has a wrong offset!");
static_assert(offsetof(UBP_EquipmentSelectionMenu_C, BP_EquipmentTypeFilterTab_1h) == 0x000330, "Member 'UBP_EquipmentSelectionMenu_C::BP_EquipmentTypeFilterTab_1h' has a wrong offset!");
static_assert(offsetof(UBP_EquipmentSelectionMenu_C, BP_EquipmentTypeFilterTab_2h) == 0x000338, "Member 'UBP_EquipmentSelectionMenu_C::BP_EquipmentTypeFilterTab_2h' has a wrong offset!");
static_assert(offsetof(UBP_EquipmentSelectionMenu_C, BP_EquipmentTypeFilterTab_all) == 0x000340, "Member 'UBP_EquipmentSelectionMenu_C::BP_EquipmentTypeFilterTab_all' has a wrong offset!");
static_assert(offsetof(UBP_EquipmentSelectionMenu_C, BP_EquipmentTypeFilterTab_Ranged) == 0x000348, "Member 'UBP_EquipmentSelectionMenu_C::BP_EquipmentTypeFilterTab_Ranged' has a wrong offset!");
static_assert(offsetof(UBP_EquipmentSelectionMenu_C, BP_EquipmentTypeFilterTab_Shield) == 0x000350, "Member 'UBP_EquipmentSelectionMenu_C::BP_EquipmentTypeFilterTab_Shield' has a wrong offset!");
static_assert(offsetof(UBP_EquipmentSelectionMenu_C, BP_EquipmentTypeFilterTab_Utillity) == 0x000358, "Member 'UBP_EquipmentSelectionMenu_C::BP_EquipmentTypeFilterTab_Utillity' has a wrong offset!");
static_assert(offsetof(UBP_EquipmentSelectionMenu_C, BP_PlayerGold) == 0x000360, "Member 'UBP_EquipmentSelectionMenu_C::BP_PlayerGold' has a wrong offset!");
static_assert(offsetof(UBP_EquipmentSelectionMenu_C, BP_PromptButton_Back) == 0x000368, "Member 'UBP_EquipmentSelectionMenu_C::BP_PromptButton_Back' has a wrong offset!");
static_assert(offsetof(UBP_EquipmentSelectionMenu_C, BP_PromptButton_Customize) == 0x000370, "Member 'UBP_EquipmentSelectionMenu_C::BP_PromptButton_Customize' has a wrong offset!");
static_assert(offsetof(UBP_EquipmentSelectionMenu_C, BP_PromptButton_NextSlot) == 0x000378, "Member 'UBP_EquipmentSelectionMenu_C::BP_PromptButton_NextSlot' has a wrong offset!");
static_assert(offsetof(UBP_EquipmentSelectionMenu_C, BP_PromptButton_PrevSlot) == 0x000380, "Member 'UBP_EquipmentSelectionMenu_C::BP_PromptButton_PrevSlot' has a wrong offset!");
static_assert(offsetof(UBP_EquipmentSelectionMenu_C, BP_SearchBar) == 0x000388, "Member 'UBP_EquipmentSelectionMenu_C::BP_SearchBar' has a wrong offset!");
static_assert(offsetof(UBP_EquipmentSelectionMenu_C, BP_SmallTopLabel) == 0x000390, "Member 'UBP_EquipmentSelectionMenu_C::BP_SmallTopLabel' has a wrong offset!");
static_assert(offsetof(UBP_EquipmentSelectionMenu_C, BP_SmallTopLabel_1) == 0x000398, "Member 'UBP_EquipmentSelectionMenu_C::BP_SmallTopLabel_1' has a wrong offset!");
static_assert(offsetof(UBP_EquipmentSelectionMenu_C, BP_SmallTopLabel_Slot_1) == 0x0003A0, "Member 'UBP_EquipmentSelectionMenu_C::BP_SmallTopLabel_Slot_1' has a wrong offset!");
static_assert(offsetof(UBP_EquipmentSelectionMenu_C, Overlay_0) == 0x0003A8, "Member 'UBP_EquipmentSelectionMenu_C::Overlay_0' has a wrong offset!");
static_assert(offsetof(UBP_EquipmentSelectionMenu_C, VerticalBox_NextSlot) == 0x0003B0, "Member 'UBP_EquipmentSelectionMenu_C::VerticalBox_NextSlot' has a wrong offset!");
static_assert(offsetof(UBP_EquipmentSelectionMenu_C, Profile_Wrapper_0) == 0x0003B8, "Member 'UBP_EquipmentSelectionMenu_C::Profile_Wrapper_0' has a wrong offset!");
static_assert(offsetof(UBP_EquipmentSelectionMenu_C, Equipment_Filter_Tabs) == 0x0003C0, "Member 'UBP_EquipmentSelectionMenu_C::Equipment_Filter_Tabs' has a wrong offset!");
static_assert(offsetof(UBP_EquipmentSelectionMenu_C, Equipment_Type_Filter) == 0x0003D0, "Member 'UBP_EquipmentSelectionMenu_C::Equipment_Type_Filter' has a wrong offset!");
static_assert(offsetof(UBP_EquipmentSelectionMenu_C, IsAllFilter) == 0x0003D1, "Member 'UBP_EquipmentSelectionMenu_C::IsAllFilter' has a wrong offset!");
static_assert(offsetof(UBP_EquipmentSelectionMenu_C, List_Unhovered) == 0x0003D8, "Member 'UBP_EquipmentSelectionMenu_C::List_Unhovered' has a wrong offset!");
static_assert(offsetof(UBP_EquipmentSelectionMenu_C, Tooltip) == 0x0003E8, "Member 'UBP_EquipmentSelectionMenu_C::Tooltip' has a wrong offset!");
static_assert(offsetof(UBP_EquipmentSelectionMenu_C, Equipment_Slot) == 0x0003F0, "Member 'UBP_EquipmentSelectionMenu_C::Equipment_Slot' has a wrong offset!");
static_assert(offsetof(UBP_EquipmentSelectionMenu_C, Selected_Filter_Tab) == 0x0003F8, "Member 'UBP_EquipmentSelectionMenu_C::Selected_Filter_Tab' has a wrong offset!");
static_assert(offsetof(UBP_EquipmentSelectionMenu_C, CustomizeButtonClicked) == 0x000400, "Member 'UBP_EquipmentSelectionMenu_C::CustomizeButtonClicked' has a wrong offset!");
static_assert(offsetof(UBP_EquipmentSelectionMenu_C, NextSlotClicked) == 0x000410, "Member 'UBP_EquipmentSelectionMenu_C::NextSlotClicked' has a wrong offset!");
static_assert(offsetof(UBP_EquipmentSelectionMenu_C, PrevSlotClicked) == 0x000420, "Member 'UBP_EquipmentSelectionMenu_C::PrevSlotClicked' has a wrong offset!");
static_assert(offsetof(UBP_EquipmentSelectionMenu_C, bIsHordeCustomization) == 0x000430, "Member 'UBP_EquipmentSelectionMenu_C::bIsHordeCustomization' has a wrong offset!");

}

