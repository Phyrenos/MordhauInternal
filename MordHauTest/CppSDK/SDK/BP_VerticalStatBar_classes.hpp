﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_VerticalStatBar

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SlateCore_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass BP_VerticalStatBar.BP_VerticalStatBar_C
// 0x0248 (0x04A8 - 0x0260)
class UBP_VerticalStatBar_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UProgressBar*                           Bar;                                               // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Icon;                                              // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_241;                                         // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FSlateBrush                            Icon_Brush;                                        // 0x0280(0x0088)(Edit, BlueprintVisible)
	struct FSlateBrush                            BarBackground;                                     // 0x0308(0x0088)(Edit, BlueprintVisible)
	struct FSlateBrush                            BarFill;                                           // 0x0390(0x0088)(Edit, BlueprintVisible)
	struct FSlateBrush                            BarMarquee;                                        // 0x0418(0x0088)(Edit, BlueprintVisible)
	float                                         Bar_Value;                                         // 0x04A0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_VerticalStatBar(int32 EntryPoint);
	void Construct();
	void PreConstruct(bool IsDesignTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_VerticalStatBar_C">();
	}
	static class UBP_VerticalStatBar_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_VerticalStatBar_C>();
	}
};
static_assert(alignof(UBP_VerticalStatBar_C) == 0x000008, "Wrong alignment on UBP_VerticalStatBar_C");
static_assert(sizeof(UBP_VerticalStatBar_C) == 0x0004A8, "Wrong size on UBP_VerticalStatBar_C");
static_assert(offsetof(UBP_VerticalStatBar_C, UberGraphFrame) == 0x000260, "Member 'UBP_VerticalStatBar_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_VerticalStatBar_C, Bar) == 0x000268, "Member 'UBP_VerticalStatBar_C::Bar' has a wrong offset!");
static_assert(offsetof(UBP_VerticalStatBar_C, Icon) == 0x000270, "Member 'UBP_VerticalStatBar_C::Icon' has a wrong offset!");
static_assert(offsetof(UBP_VerticalStatBar_C, Image_241) == 0x000278, "Member 'UBP_VerticalStatBar_C::Image_241' has a wrong offset!");
static_assert(offsetof(UBP_VerticalStatBar_C, Icon_Brush) == 0x000280, "Member 'UBP_VerticalStatBar_C::Icon_Brush' has a wrong offset!");
static_assert(offsetof(UBP_VerticalStatBar_C, BarBackground) == 0x000308, "Member 'UBP_VerticalStatBar_C::BarBackground' has a wrong offset!");
static_assert(offsetof(UBP_VerticalStatBar_C, BarFill) == 0x000390, "Member 'UBP_VerticalStatBar_C::BarFill' has a wrong offset!");
static_assert(offsetof(UBP_VerticalStatBar_C, BarMarquee) == 0x000418, "Member 'UBP_VerticalStatBar_C::BarMarquee' has a wrong offset!");
static_assert(offsetof(UBP_VerticalStatBar_C, Bar_Value) == 0x0004A0, "Member 'UBP_VerticalStatBar_C::Bar_Value' has a wrong offset!");

}

