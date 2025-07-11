﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_FaceSculptingTooltip

#include "Basic.hpp"

#include "BP_Tooltip_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass BP_FaceSculptingTooltip.BP_FaceSculptingTooltip_C
// 0x0030 (0x0290 - 0x0260)
class UBP_FaceSculptingTooltip_C final : public UBP_Tooltip_C
{
public:
	class UImage*                                 Image_129;                                         // 0x0260(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_316;                                         // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Mode;                                        // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_Group;                                   // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_Mode;                                    // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_Name;                                    // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void Update(const class FText& bone, int32 Mode, int32 Group);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_FaceSculptingTooltip_C">();
	}
	static class UBP_FaceSculptingTooltip_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_FaceSculptingTooltip_C>();
	}
};
static_assert(alignof(UBP_FaceSculptingTooltip_C) == 0x000008, "Wrong alignment on UBP_FaceSculptingTooltip_C");
static_assert(sizeof(UBP_FaceSculptingTooltip_C) == 0x000290, "Wrong size on UBP_FaceSculptingTooltip_C");
static_assert(offsetof(UBP_FaceSculptingTooltip_C, Image_129) == 0x000260, "Member 'UBP_FaceSculptingTooltip_C::Image_129' has a wrong offset!");
static_assert(offsetof(UBP_FaceSculptingTooltip_C, Image_316) == 0x000268, "Member 'UBP_FaceSculptingTooltip_C::Image_316' has a wrong offset!");
static_assert(offsetof(UBP_FaceSculptingTooltip_C, Image_Mode) == 0x000270, "Member 'UBP_FaceSculptingTooltip_C::Image_Mode' has a wrong offset!");
static_assert(offsetof(UBP_FaceSculptingTooltip_C, TextBlock_Group) == 0x000278, "Member 'UBP_FaceSculptingTooltip_C::TextBlock_Group' has a wrong offset!");
static_assert(offsetof(UBP_FaceSculptingTooltip_C, TextBlock_Mode) == 0x000280, "Member 'UBP_FaceSculptingTooltip_C::TextBlock_Mode' has a wrong offset!");
static_assert(offsetof(UBP_FaceSculptingTooltip_C, TextBlock_Name) == 0x000288, "Member 'UBP_FaceSculptingTooltip_C::TextBlock_Name' has a wrong offset!");

}

