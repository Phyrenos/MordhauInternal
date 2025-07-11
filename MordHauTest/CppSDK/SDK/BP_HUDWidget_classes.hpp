﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_HUDWidget

#include "Basic.hpp"

#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass BP_HUDWidget.BP_HUDWidget_C
// 0x00A8 (0x0308 - 0x0260)
class UBP_HUDWidget_C final : public UUserWidget
{
public:
	class USizeBox*                               AnnouncementContainer;                             // 0x0260(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               ButtonPromptsContainer;                            // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               ChatBoxContainer;                                  // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               CrosshairContainer;                                // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               EmoteMenuContainer;                                // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               EquipmentContainer;                                // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               EquipmentInfoContainer;                            // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               KilledByPanelContainer;                            // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               KillFeedContainer;                                 // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               MOTDContainer;                                     // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               NetIndicatorContainer;                             // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           ObjectivesContainer;                               // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               PostMatchScreenContainer;                          // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               ScoreboardContainer;                               // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               ScoreFeedContainer;                                // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SkillTreeContainer;                                // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               StatusBarContainer;                                // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               TargetInfoContainer;                               // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               TipsContainer;                                     // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               VoiceMenuContainer;                                // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         TargetDistance;                                    // 0x0300(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_HUDWidget_C">();
	}
	static class UBP_HUDWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_HUDWidget_C>();
	}
};
static_assert(alignof(UBP_HUDWidget_C) == 0x000008, "Wrong alignment on UBP_HUDWidget_C");
static_assert(sizeof(UBP_HUDWidget_C) == 0x000308, "Wrong size on UBP_HUDWidget_C");
static_assert(offsetof(UBP_HUDWidget_C, AnnouncementContainer) == 0x000260, "Member 'UBP_HUDWidget_C::AnnouncementContainer' has a wrong offset!");
static_assert(offsetof(UBP_HUDWidget_C, ButtonPromptsContainer) == 0x000268, "Member 'UBP_HUDWidget_C::ButtonPromptsContainer' has a wrong offset!");
static_assert(offsetof(UBP_HUDWidget_C, ChatBoxContainer) == 0x000270, "Member 'UBP_HUDWidget_C::ChatBoxContainer' has a wrong offset!");
static_assert(offsetof(UBP_HUDWidget_C, CrosshairContainer) == 0x000278, "Member 'UBP_HUDWidget_C::CrosshairContainer' has a wrong offset!");
static_assert(offsetof(UBP_HUDWidget_C, EmoteMenuContainer) == 0x000280, "Member 'UBP_HUDWidget_C::EmoteMenuContainer' has a wrong offset!");
static_assert(offsetof(UBP_HUDWidget_C, EquipmentContainer) == 0x000288, "Member 'UBP_HUDWidget_C::EquipmentContainer' has a wrong offset!");
static_assert(offsetof(UBP_HUDWidget_C, EquipmentInfoContainer) == 0x000290, "Member 'UBP_HUDWidget_C::EquipmentInfoContainer' has a wrong offset!");
static_assert(offsetof(UBP_HUDWidget_C, KilledByPanelContainer) == 0x000298, "Member 'UBP_HUDWidget_C::KilledByPanelContainer' has a wrong offset!");
static_assert(offsetof(UBP_HUDWidget_C, KillFeedContainer) == 0x0002A0, "Member 'UBP_HUDWidget_C::KillFeedContainer' has a wrong offset!");
static_assert(offsetof(UBP_HUDWidget_C, MOTDContainer) == 0x0002A8, "Member 'UBP_HUDWidget_C::MOTDContainer' has a wrong offset!");
static_assert(offsetof(UBP_HUDWidget_C, NetIndicatorContainer) == 0x0002B0, "Member 'UBP_HUDWidget_C::NetIndicatorContainer' has a wrong offset!");
static_assert(offsetof(UBP_HUDWidget_C, ObjectivesContainer) == 0x0002B8, "Member 'UBP_HUDWidget_C::ObjectivesContainer' has a wrong offset!");
static_assert(offsetof(UBP_HUDWidget_C, PostMatchScreenContainer) == 0x0002C0, "Member 'UBP_HUDWidget_C::PostMatchScreenContainer' has a wrong offset!");
static_assert(offsetof(UBP_HUDWidget_C, ScoreboardContainer) == 0x0002C8, "Member 'UBP_HUDWidget_C::ScoreboardContainer' has a wrong offset!");
static_assert(offsetof(UBP_HUDWidget_C, ScoreFeedContainer) == 0x0002D0, "Member 'UBP_HUDWidget_C::ScoreFeedContainer' has a wrong offset!");
static_assert(offsetof(UBP_HUDWidget_C, SkillTreeContainer) == 0x0002D8, "Member 'UBP_HUDWidget_C::SkillTreeContainer' has a wrong offset!");
static_assert(offsetof(UBP_HUDWidget_C, StatusBarContainer) == 0x0002E0, "Member 'UBP_HUDWidget_C::StatusBarContainer' has a wrong offset!");
static_assert(offsetof(UBP_HUDWidget_C, TargetInfoContainer) == 0x0002E8, "Member 'UBP_HUDWidget_C::TargetInfoContainer' has a wrong offset!");
static_assert(offsetof(UBP_HUDWidget_C, TipsContainer) == 0x0002F0, "Member 'UBP_HUDWidget_C::TipsContainer' has a wrong offset!");
static_assert(offsetof(UBP_HUDWidget_C, VoiceMenuContainer) == 0x0002F8, "Member 'UBP_HUDWidget_C::VoiceMenuContainer' has a wrong offset!");
static_assert(offsetof(UBP_HUDWidget_C, TargetDistance) == 0x000300, "Member 'UBP_HUDWidget_C::TargetDistance' has a wrong offset!");

}

