﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_EquipmentTooltip

#include "Basic.hpp"

#include "BP_Tooltip_classes.hpp"
#include "UMG_structs.hpp"
#include "Mordhau_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass BP_EquipmentTooltip.BP_EquipmentTooltip_C
// 0x0080 (0x02E0 - 0x0260)
class UBP_EquipmentTooltip_C final : public UBP_Tooltip_C
{
public:
	class UBP_BasicStatsPanel_C*                  BP_BasicStatsPanel;                                // 0x0260(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_DefaultLoadoutTooltip_C*            BP_DefaultLoadoutTooltip;                          // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_EquipmentTraitInfo_C*               BP_EquipmentTraitInfo;                             // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_EquipmentTypeIndicator_C*           BP_EquipmentTypeIndicator;                         // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_TooltipBannedItem_C*                BP_TooltipBannedItem;                              // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_TooltipEquippedItem_C*              BP_TooltipEquippedItem;                            // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_TooltipPointCost_C*                 BP_TooltipPointCost;                               // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_UnlockInfoTooltip_C*                BP_UnlockInfoTooltip;                              // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image;                                             // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_89;                                          // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_316;                                         // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Overlay_Body;                                      // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Overlay_Header;                                    // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                              ScaleBox_Type;                                     // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_Name;                                    // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_Type;                                    // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void Update_Tooltip(class AMordhauEquipment* Equipment_Ref, bool bIsBanned, bool bCanAfford, bool bIsEquipped, bool bIsDefaultLoadout, bool bIsInHordeArmory, int32 Gold_Requirement, int32 Rank_Requirement, bool Is_Locked, class UBP_EquipmentTooltip_C** Equipment_Toolip);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_EquipmentTooltip_C">();
	}
	static class UBP_EquipmentTooltip_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_EquipmentTooltip_C>();
	}
};
static_assert(alignof(UBP_EquipmentTooltip_C) == 0x000008, "Wrong alignment on UBP_EquipmentTooltip_C");
static_assert(sizeof(UBP_EquipmentTooltip_C) == 0x0002E0, "Wrong size on UBP_EquipmentTooltip_C");
static_assert(offsetof(UBP_EquipmentTooltip_C, BP_BasicStatsPanel) == 0x000260, "Member 'UBP_EquipmentTooltip_C::BP_BasicStatsPanel' has a wrong offset!");
static_assert(offsetof(UBP_EquipmentTooltip_C, BP_DefaultLoadoutTooltip) == 0x000268, "Member 'UBP_EquipmentTooltip_C::BP_DefaultLoadoutTooltip' has a wrong offset!");
static_assert(offsetof(UBP_EquipmentTooltip_C, BP_EquipmentTraitInfo) == 0x000270, "Member 'UBP_EquipmentTooltip_C::BP_EquipmentTraitInfo' has a wrong offset!");
static_assert(offsetof(UBP_EquipmentTooltip_C, BP_EquipmentTypeIndicator) == 0x000278, "Member 'UBP_EquipmentTooltip_C::BP_EquipmentTypeIndicator' has a wrong offset!");
static_assert(offsetof(UBP_EquipmentTooltip_C, BP_TooltipBannedItem) == 0x000280, "Member 'UBP_EquipmentTooltip_C::BP_TooltipBannedItem' has a wrong offset!");
static_assert(offsetof(UBP_EquipmentTooltip_C, BP_TooltipEquippedItem) == 0x000288, "Member 'UBP_EquipmentTooltip_C::BP_TooltipEquippedItem' has a wrong offset!");
static_assert(offsetof(UBP_EquipmentTooltip_C, BP_TooltipPointCost) == 0x000290, "Member 'UBP_EquipmentTooltip_C::BP_TooltipPointCost' has a wrong offset!");
static_assert(offsetof(UBP_EquipmentTooltip_C, BP_UnlockInfoTooltip) == 0x000298, "Member 'UBP_EquipmentTooltip_C::BP_UnlockInfoTooltip' has a wrong offset!");
static_assert(offsetof(UBP_EquipmentTooltip_C, Image) == 0x0002A0, "Member 'UBP_EquipmentTooltip_C::Image' has a wrong offset!");
static_assert(offsetof(UBP_EquipmentTooltip_C, Image_89) == 0x0002A8, "Member 'UBP_EquipmentTooltip_C::Image_89' has a wrong offset!");
static_assert(offsetof(UBP_EquipmentTooltip_C, Image_316) == 0x0002B0, "Member 'UBP_EquipmentTooltip_C::Image_316' has a wrong offset!");
static_assert(offsetof(UBP_EquipmentTooltip_C, Overlay_Body) == 0x0002B8, "Member 'UBP_EquipmentTooltip_C::Overlay_Body' has a wrong offset!");
static_assert(offsetof(UBP_EquipmentTooltip_C, Overlay_Header) == 0x0002C0, "Member 'UBP_EquipmentTooltip_C::Overlay_Header' has a wrong offset!");
static_assert(offsetof(UBP_EquipmentTooltip_C, ScaleBox_Type) == 0x0002C8, "Member 'UBP_EquipmentTooltip_C::ScaleBox_Type' has a wrong offset!");
static_assert(offsetof(UBP_EquipmentTooltip_C, TextBlock_Name) == 0x0002D0, "Member 'UBP_EquipmentTooltip_C::TextBlock_Name' has a wrong offset!");
static_assert(offsetof(UBP_EquipmentTooltip_C, TextBlock_Type) == 0x0002D8, "Member 'UBP_EquipmentTooltip_C::TextBlock_Type' has a wrong offset!");

}

