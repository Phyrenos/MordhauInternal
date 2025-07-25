﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PurchasableWidget

#include "Basic.hpp"

#include "Mordhau_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass BP_PurchasableWidget.BP_PurchasableWidget_C
// 0x0028 (0x0290 - 0x0268)
class UBP_PurchasableWidget_C final : public UMordhauUserWidget
{
public:
	class UImage*                                 Image_0;                                           // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_1;                                           // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Outline;                                           // 0x0278(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_1;                                       // 0x0280(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_4;                                       // 0x0288(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	class FText GetText_0();
	struct FSlateColor GetColorAndOpacity_0();
	ESlateVisibility GetVisibility_0();
	ESlateVisibility GetVisibility_1();
	class FText GetText_1();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PurchasableWidget_C">();
	}
	static class UBP_PurchasableWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_PurchasableWidget_C>();
	}
};
static_assert(alignof(UBP_PurchasableWidget_C) == 0x000008, "Wrong alignment on UBP_PurchasableWidget_C");
static_assert(sizeof(UBP_PurchasableWidget_C) == 0x000290, "Wrong size on UBP_PurchasableWidget_C");
static_assert(offsetof(UBP_PurchasableWidget_C, Image_0) == 0x000268, "Member 'UBP_PurchasableWidget_C::Image_0' has a wrong offset!");
static_assert(offsetof(UBP_PurchasableWidget_C, Image_1) == 0x000270, "Member 'UBP_PurchasableWidget_C::Image_1' has a wrong offset!");
static_assert(offsetof(UBP_PurchasableWidget_C, Outline) == 0x000278, "Member 'UBP_PurchasableWidget_C::Outline' has a wrong offset!");
static_assert(offsetof(UBP_PurchasableWidget_C, TextBlock_1) == 0x000280, "Member 'UBP_PurchasableWidget_C::TextBlock_1' has a wrong offset!");
static_assert(offsetof(UBP_PurchasableWidget_C, TextBlock_4) == 0x000288, "Member 'UBP_PurchasableWidget_C::TextBlock_4' has a wrong offset!");

}

