﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AdvancedStatsPanel

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Mordhau_structs.hpp"
#include "BP_StatsPanel_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass BP_AdvancedStatsPanel.BP_AdvancedStatsPanel_C
// 0x00E8 (0x0360 - 0x0278)
class UBP_AdvancedStatsPanel_C final : public UBP_StatsPanel_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UOverlay*                               AdvancedStats;                                     // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         AttackTypeButtons;                                 // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_Checkbox_new_C*                     BP_Checkbox_new_AltMode;                           // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_DamageMatrix_C*                     BP_DamageMatrix;                                   // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_MeleeSpeedStats_C*                  BP_MeleeSpeedStats;                                // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_MeleeStatsList_C*                   BP_MeleeStatsList;                                 // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PromptButton_New_C*                 BP_PromptButton_Back;                              // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_RangedSpeedStats_C*                 BP_RangedSpeedStats;                               // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_RangeStatsList_C*                   BP_RangeStatsList;                                 // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_ShieldStatsList_C*                  BP_ShieldStatsList;                                // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_SmallTopLabel_C*                    BP_SmallTopLabel_Damage;                           // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_SmallTopLabel_C*                    BP_SmallTopLabel_Misc;                             // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_SmallTopLabel_C*                    BP_SmallTopLabel_Speed;                            // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_StatAttackTypeTabs_C*               BP_StatAttackTypeTab_Stab;                         // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_StatAttackTypeTabs_C*               BP_StatAttackTypeTab_Strike;                       // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image;                                             // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_1;                                           // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_2;                                           // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_59;                                          // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_StatsUnavailable;                        // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcher_SpeedStats;                         // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcher_StatList;                           // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          Alt_Mode;                                          // 0x0330(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	EAttackMove                                   Move;                                              // 0x0331(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_332[0x6];                                      // 0x0332(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UBP_StatAttackTypeTabs_C*>       Attack_Type_Tabs;                                  // 0x0338(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	EEquipmentType                                EquipmentUIType;                                   // 0x0348(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsShowing;                                        // 0x0349(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_34A[0x6];                                      // 0x034A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TMulticastInlineDelegate<void()>              AdvancedStatsHidden;                               // 0x0350(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void ExecuteUbergraph_BP_AdvancedStatsPanel(int32 EntryPoint);
	void BndEvt__BP_AdvancedStatsPanel_BP_Checkbox_new_191_K2Node_ComponentBoundEvent_6_OnCheckStateChanged__DelegateSignature(bool bIsChecked);
	void BndEvt__BP_AdvancedStatsPanel_BP_PromptButton_Back_K2Node_ComponentBoundEvent_1_onClicked__DelegateSignature();
	void Hide();
	void Show();
	void BndEvt__BP_StatAttackTypeTab_Strike_K2Node_ComponentBoundEvent_5_On_Clicked__DelegateSignature(class UBP_StatAttackTypeTabs_C* Button);
	void BndEvt__BP_StatAttackTypeTab_Stab_K2Node_ComponentBoundEvent_4_On_Clicked__DelegateSignature(class UBP_StatAttackTypeTabs_C* Button);
	void Construct();
	void Update_Advanced_Stats(class AMordhauEquipment* Equipment_0);
	void Update_Attack_Type_Tabs(class UBP_StatAttackTypeTabs_C* Clicked);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_AdvancedStatsPanel_C">();
	}
	static class UBP_AdvancedStatsPanel_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_AdvancedStatsPanel_C>();
	}
};
static_assert(alignof(UBP_AdvancedStatsPanel_C) == 0x000008, "Wrong alignment on UBP_AdvancedStatsPanel_C");
static_assert(sizeof(UBP_AdvancedStatsPanel_C) == 0x000360, "Wrong size on UBP_AdvancedStatsPanel_C");
static_assert(offsetof(UBP_AdvancedStatsPanel_C, UberGraphFrame) == 0x000278, "Member 'UBP_AdvancedStatsPanel_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_AdvancedStatsPanel_C, AdvancedStats) == 0x000280, "Member 'UBP_AdvancedStatsPanel_C::AdvancedStats' has a wrong offset!");
static_assert(offsetof(UBP_AdvancedStatsPanel_C, AttackTypeButtons) == 0x000288, "Member 'UBP_AdvancedStatsPanel_C::AttackTypeButtons' has a wrong offset!");
static_assert(offsetof(UBP_AdvancedStatsPanel_C, BP_Checkbox_new_AltMode) == 0x000290, "Member 'UBP_AdvancedStatsPanel_C::BP_Checkbox_new_AltMode' has a wrong offset!");
static_assert(offsetof(UBP_AdvancedStatsPanel_C, BP_DamageMatrix) == 0x000298, "Member 'UBP_AdvancedStatsPanel_C::BP_DamageMatrix' has a wrong offset!");
static_assert(offsetof(UBP_AdvancedStatsPanel_C, BP_MeleeSpeedStats) == 0x0002A0, "Member 'UBP_AdvancedStatsPanel_C::BP_MeleeSpeedStats' has a wrong offset!");
static_assert(offsetof(UBP_AdvancedStatsPanel_C, BP_MeleeStatsList) == 0x0002A8, "Member 'UBP_AdvancedStatsPanel_C::BP_MeleeStatsList' has a wrong offset!");
static_assert(offsetof(UBP_AdvancedStatsPanel_C, BP_PromptButton_Back) == 0x0002B0, "Member 'UBP_AdvancedStatsPanel_C::BP_PromptButton_Back' has a wrong offset!");
static_assert(offsetof(UBP_AdvancedStatsPanel_C, BP_RangedSpeedStats) == 0x0002B8, "Member 'UBP_AdvancedStatsPanel_C::BP_RangedSpeedStats' has a wrong offset!");
static_assert(offsetof(UBP_AdvancedStatsPanel_C, BP_RangeStatsList) == 0x0002C0, "Member 'UBP_AdvancedStatsPanel_C::BP_RangeStatsList' has a wrong offset!");
static_assert(offsetof(UBP_AdvancedStatsPanel_C, BP_ShieldStatsList) == 0x0002C8, "Member 'UBP_AdvancedStatsPanel_C::BP_ShieldStatsList' has a wrong offset!");
static_assert(offsetof(UBP_AdvancedStatsPanel_C, BP_SmallTopLabel_Damage) == 0x0002D0, "Member 'UBP_AdvancedStatsPanel_C::BP_SmallTopLabel_Damage' has a wrong offset!");
static_assert(offsetof(UBP_AdvancedStatsPanel_C, BP_SmallTopLabel_Misc) == 0x0002D8, "Member 'UBP_AdvancedStatsPanel_C::BP_SmallTopLabel_Misc' has a wrong offset!");
static_assert(offsetof(UBP_AdvancedStatsPanel_C, BP_SmallTopLabel_Speed) == 0x0002E0, "Member 'UBP_AdvancedStatsPanel_C::BP_SmallTopLabel_Speed' has a wrong offset!");
static_assert(offsetof(UBP_AdvancedStatsPanel_C, BP_StatAttackTypeTab_Stab) == 0x0002E8, "Member 'UBP_AdvancedStatsPanel_C::BP_StatAttackTypeTab_Stab' has a wrong offset!");
static_assert(offsetof(UBP_AdvancedStatsPanel_C, BP_StatAttackTypeTab_Strike) == 0x0002F0, "Member 'UBP_AdvancedStatsPanel_C::BP_StatAttackTypeTab_Strike' has a wrong offset!");
static_assert(offsetof(UBP_AdvancedStatsPanel_C, Image) == 0x0002F8, "Member 'UBP_AdvancedStatsPanel_C::Image' has a wrong offset!");
static_assert(offsetof(UBP_AdvancedStatsPanel_C, Image_1) == 0x000300, "Member 'UBP_AdvancedStatsPanel_C::Image_1' has a wrong offset!");
static_assert(offsetof(UBP_AdvancedStatsPanel_C, Image_2) == 0x000308, "Member 'UBP_AdvancedStatsPanel_C::Image_2' has a wrong offset!");
static_assert(offsetof(UBP_AdvancedStatsPanel_C, Image_59) == 0x000310, "Member 'UBP_AdvancedStatsPanel_C::Image_59' has a wrong offset!");
static_assert(offsetof(UBP_AdvancedStatsPanel_C, TextBlock_StatsUnavailable) == 0x000318, "Member 'UBP_AdvancedStatsPanel_C::TextBlock_StatsUnavailable' has a wrong offset!");
static_assert(offsetof(UBP_AdvancedStatsPanel_C, WidgetSwitcher_SpeedStats) == 0x000320, "Member 'UBP_AdvancedStatsPanel_C::WidgetSwitcher_SpeedStats' has a wrong offset!");
static_assert(offsetof(UBP_AdvancedStatsPanel_C, WidgetSwitcher_StatList) == 0x000328, "Member 'UBP_AdvancedStatsPanel_C::WidgetSwitcher_StatList' has a wrong offset!");
static_assert(offsetof(UBP_AdvancedStatsPanel_C, Alt_Mode) == 0x000330, "Member 'UBP_AdvancedStatsPanel_C::Alt_Mode' has a wrong offset!");
static_assert(offsetof(UBP_AdvancedStatsPanel_C, Move) == 0x000331, "Member 'UBP_AdvancedStatsPanel_C::Move' has a wrong offset!");
static_assert(offsetof(UBP_AdvancedStatsPanel_C, Attack_Type_Tabs) == 0x000338, "Member 'UBP_AdvancedStatsPanel_C::Attack_Type_Tabs' has a wrong offset!");
static_assert(offsetof(UBP_AdvancedStatsPanel_C, EquipmentUIType) == 0x000348, "Member 'UBP_AdvancedStatsPanel_C::EquipmentUIType' has a wrong offset!");
static_assert(offsetof(UBP_AdvancedStatsPanel_C, bIsShowing) == 0x000349, "Member 'UBP_AdvancedStatsPanel_C::bIsShowing' has a wrong offset!");
static_assert(offsetof(UBP_AdvancedStatsPanel_C, AdvancedStatsHidden) == 0x000350, "Member 'UBP_AdvancedStatsPanel_C::AdvancedStatsHidden' has a wrong offset!");

}

