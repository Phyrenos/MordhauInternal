﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PlayerWidget

#include "Basic.hpp"

#include "MordhauOnlineSubsystem_structs.hpp"
#include "UMG_classes.hpp"
#include "E_RankDisplayType_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass BP_PlayerWidget.BP_PlayerWidget_C
// 0x00E0 (0x0340 - 0x0260)
class UBP_PlayerWidget_C final : public UUserWidget
{
public:
	class UBP_CasualRankDiamond_C*                BP_CasualRankDiamond;                              // 0x0260(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_RankIcon_C*                         BP_CompetitiveRankIcon;                            // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PlatformIcon_C*                     BP_PlatformIcon;                                   // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PlayerAvatar_C*                     BP_PlayerAvatar;                                   // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PlayerBanner_C*                     BP_PlayerBanner;                                   // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_0;                                           // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_4;                                           // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Name_0;                                            // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Overlay_PlatformIcon;                              // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                              PlayerNameBox;                                     // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               RankBox;                                           // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_0;                                       // 0x02B8(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcher_1;                                  // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                   RankText;                                          // 0x02C8(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FPlayFabPlayer                         Player;                                            // 0x02E0(0x0060)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)

public:
	void Update(const struct FPlayFabPlayer& Player_0, int32 Rank, int32 Banner, E_RankDisplayType Rank_Display_Type);
	void UpdatePlatformIcon();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PlayerWidget_C">();
	}
	static class UBP_PlayerWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_PlayerWidget_C>();
	}
};
static_assert(alignof(UBP_PlayerWidget_C) == 0x000008, "Wrong alignment on UBP_PlayerWidget_C");
static_assert(sizeof(UBP_PlayerWidget_C) == 0x000340, "Wrong size on UBP_PlayerWidget_C");
static_assert(offsetof(UBP_PlayerWidget_C, BP_CasualRankDiamond) == 0x000260, "Member 'UBP_PlayerWidget_C::BP_CasualRankDiamond' has a wrong offset!");
static_assert(offsetof(UBP_PlayerWidget_C, BP_CompetitiveRankIcon) == 0x000268, "Member 'UBP_PlayerWidget_C::BP_CompetitiveRankIcon' has a wrong offset!");
static_assert(offsetof(UBP_PlayerWidget_C, BP_PlatformIcon) == 0x000270, "Member 'UBP_PlayerWidget_C::BP_PlatformIcon' has a wrong offset!");
static_assert(offsetof(UBP_PlayerWidget_C, BP_PlayerAvatar) == 0x000278, "Member 'UBP_PlayerWidget_C::BP_PlayerAvatar' has a wrong offset!");
static_assert(offsetof(UBP_PlayerWidget_C, BP_PlayerBanner) == 0x000280, "Member 'UBP_PlayerWidget_C::BP_PlayerBanner' has a wrong offset!");
static_assert(offsetof(UBP_PlayerWidget_C, Image_0) == 0x000288, "Member 'UBP_PlayerWidget_C::Image_0' has a wrong offset!");
static_assert(offsetof(UBP_PlayerWidget_C, Image_4) == 0x000290, "Member 'UBP_PlayerWidget_C::Image_4' has a wrong offset!");
static_assert(offsetof(UBP_PlayerWidget_C, Name_0) == 0x000298, "Member 'UBP_PlayerWidget_C::Name_0' has a wrong offset!");
static_assert(offsetof(UBP_PlayerWidget_C, Overlay_PlatformIcon) == 0x0002A0, "Member 'UBP_PlayerWidget_C::Overlay_PlatformIcon' has a wrong offset!");
static_assert(offsetof(UBP_PlayerWidget_C, PlayerNameBox) == 0x0002A8, "Member 'UBP_PlayerWidget_C::PlayerNameBox' has a wrong offset!");
static_assert(offsetof(UBP_PlayerWidget_C, RankBox) == 0x0002B0, "Member 'UBP_PlayerWidget_C::RankBox' has a wrong offset!");
static_assert(offsetof(UBP_PlayerWidget_C, TextBlock_0) == 0x0002B8, "Member 'UBP_PlayerWidget_C::TextBlock_0' has a wrong offset!");
static_assert(offsetof(UBP_PlayerWidget_C, WidgetSwitcher_1) == 0x0002C0, "Member 'UBP_PlayerWidget_C::WidgetSwitcher_1' has a wrong offset!");
static_assert(offsetof(UBP_PlayerWidget_C, RankText) == 0x0002C8, "Member 'UBP_PlayerWidget_C::RankText' has a wrong offset!");
static_assert(offsetof(UBP_PlayerWidget_C, Player) == 0x0002E0, "Member 'UBP_PlayerWidget_C::Player' has a wrong offset!");

}

