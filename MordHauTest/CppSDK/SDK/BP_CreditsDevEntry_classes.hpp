﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_CreditsDevEntry

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass BP_CreditsDevEntry.BP_CreditsDevEntry_C
// 0x0040 (0x02A0 - 0x0260)
class UBP_CreditsDevEntry_C final : public UUserWidget
{
public:
	class UTextBlock*                             NameText;                                          // 0x0260(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Overlay_5;                                         // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TitleText;                                         // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                   Title;                                             // 0x0278(0x0018)(Edit, BlueprintVisible)
	class FString                                 Name_0;                                            // 0x0290(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)

public:
	ESlateVisibility Get_TitleText_Visibility_0();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_CreditsDevEntry_C">();
	}
	static class UBP_CreditsDevEntry_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_CreditsDevEntry_C>();
	}
};
static_assert(alignof(UBP_CreditsDevEntry_C) == 0x000008, "Wrong alignment on UBP_CreditsDevEntry_C");
static_assert(sizeof(UBP_CreditsDevEntry_C) == 0x0002A0, "Wrong size on UBP_CreditsDevEntry_C");
static_assert(offsetof(UBP_CreditsDevEntry_C, NameText) == 0x000260, "Member 'UBP_CreditsDevEntry_C::NameText' has a wrong offset!");
static_assert(offsetof(UBP_CreditsDevEntry_C, Overlay_5) == 0x000268, "Member 'UBP_CreditsDevEntry_C::Overlay_5' has a wrong offset!");
static_assert(offsetof(UBP_CreditsDevEntry_C, TitleText) == 0x000270, "Member 'UBP_CreditsDevEntry_C::TitleText' has a wrong offset!");
static_assert(offsetof(UBP_CreditsDevEntry_C, Title) == 0x000278, "Member 'UBP_CreditsDevEntry_C::Title' has a wrong offset!");
static_assert(offsetof(UBP_CreditsDevEntry_C, Name_0) == 0x000290, "Member 'UBP_CreditsDevEntry_C::Name_0' has a wrong offset!");

}

