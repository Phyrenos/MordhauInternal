﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_SelectionLayout

#include "Basic.hpp"

#include "BP_SelectionMenu_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass BP_SelectionLayout.BP_SelectionLayout_C
// 0x0050 (0x0358 - 0x0308)
class UBP_SelectionLayout_C : public UBP_SelectionMenu_C
{
public:
	TMulticastInlineDelegate<void()>              Clear_Children;                                    // 0x0308(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TMulticastInlineDelegate<void(class UBP_CustomizationItemEntry_C* Item_Entry)> Add_Child;                                         // 0x0318(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TMulticastInlineDelegate<void(int32 ID)>      Entry_Clicked;                                     // 0x0328(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TMulticastInlineDelegate<void(class UBP_CustomizationItemEntry_C* Entry)> Scroll_to_Entry;                                   // 0x0338(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TMulticastInlineDelegate<void(class UBP_CustomizationItemEntry_C* Entry)> Remove_Child;                                      // 0x0348(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_SelectionLayout_C">();
	}
	static class UBP_SelectionLayout_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_SelectionLayout_C>();
	}
};
static_assert(alignof(UBP_SelectionLayout_C) == 0x000008, "Wrong alignment on UBP_SelectionLayout_C");
static_assert(sizeof(UBP_SelectionLayout_C) == 0x000358, "Wrong size on UBP_SelectionLayout_C");
static_assert(offsetof(UBP_SelectionLayout_C, Clear_Children) == 0x000308, "Member 'UBP_SelectionLayout_C::Clear_Children' has a wrong offset!");
static_assert(offsetof(UBP_SelectionLayout_C, Add_Child) == 0x000318, "Member 'UBP_SelectionLayout_C::Add_Child' has a wrong offset!");
static_assert(offsetof(UBP_SelectionLayout_C, Entry_Clicked) == 0x000328, "Member 'UBP_SelectionLayout_C::Entry_Clicked' has a wrong offset!");
static_assert(offsetof(UBP_SelectionLayout_C, Scroll_to_Entry) == 0x000338, "Member 'UBP_SelectionLayout_C::Scroll_to_Entry' has a wrong offset!");
static_assert(offsetof(UBP_SelectionLayout_C, Remove_Child) == 0x000348, "Member 'UBP_SelectionLayout_C::Remove_Child' has a wrong offset!");

}

