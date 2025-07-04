﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MordhauML_MultilineTextItemWidget

#include "Basic.hpp"

#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass MordhauML_MultilineTextItemWidget.MordhauML_MultilineTextItemWidget_C
// 0x0010 (0x0270 - 0x0260)
class UMordhauML_MultilineTextItemWidget_C final : public UUserWidget
{
public:
	class URichTextBlock*                         Bullet;                                            // 0x0260(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URichTextBlock*                         MainText;                                          // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MordhauML_MultilineTextItemWidget_C">();
	}
	static class UMordhauML_MultilineTextItemWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMordhauML_MultilineTextItemWidget_C>();
	}
};
static_assert(alignof(UMordhauML_MultilineTextItemWidget_C) == 0x000008, "Wrong alignment on UMordhauML_MultilineTextItemWidget_C");
static_assert(sizeof(UMordhauML_MultilineTextItemWidget_C) == 0x000270, "Wrong size on UMordhauML_MultilineTextItemWidget_C");
static_assert(offsetof(UMordhauML_MultilineTextItemWidget_C, Bullet) == 0x000260, "Member 'UMordhauML_MultilineTextItemWidget_C::Bullet' has a wrong offset!");
static_assert(offsetof(UMordhauML_MultilineTextItemWidget_C, MainText) == 0x000268, "Member 'UMordhauML_MultilineTextItemWidget_C::MainText' has a wrong offset!");

}

