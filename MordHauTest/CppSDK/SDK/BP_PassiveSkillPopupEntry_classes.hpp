﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PassiveSkillPopupEntry

#include "Basic.hpp"

#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass BP_PassiveSkillPopupEntry.BP_PassiveSkillPopupEntry_C
// 0x0028 (0x0288 - 0x0260)
class UBP_PassiveSkillPopupEntry_C final : public UUserWidget
{
public:
	class UWidgetAnimation*                       Entry;                                             // 0x0260(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Image_169;                                         // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_2;                                       // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TMulticastInlineDelegate<void(class UBP_PassiveSkillPopupEntry_C* This)> DoneShowing;                                       // 0x0278(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void Initialize(const class FText& InText, class UTexture2D* Texture);
	void BP_PassiveSkillPopupEntry_OnAnimFinish();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PassiveSkillPopupEntry_C">();
	}
	static class UBP_PassiveSkillPopupEntry_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_PassiveSkillPopupEntry_C>();
	}
};
static_assert(alignof(UBP_PassiveSkillPopupEntry_C) == 0x000008, "Wrong alignment on UBP_PassiveSkillPopupEntry_C");
static_assert(sizeof(UBP_PassiveSkillPopupEntry_C) == 0x000288, "Wrong size on UBP_PassiveSkillPopupEntry_C");
static_assert(offsetof(UBP_PassiveSkillPopupEntry_C, Entry) == 0x000260, "Member 'UBP_PassiveSkillPopupEntry_C::Entry' has a wrong offset!");
static_assert(offsetof(UBP_PassiveSkillPopupEntry_C, Image_169) == 0x000268, "Member 'UBP_PassiveSkillPopupEntry_C::Image_169' has a wrong offset!");
static_assert(offsetof(UBP_PassiveSkillPopupEntry_C, TextBlock_2) == 0x000270, "Member 'UBP_PassiveSkillPopupEntry_C::TextBlock_2' has a wrong offset!");
static_assert(offsetof(UBP_PassiveSkillPopupEntry_C, DoneShowing) == 0x000278, "Member 'UBP_PassiveSkillPopupEntry_C::DoneShowing' has a wrong offset!");

}

