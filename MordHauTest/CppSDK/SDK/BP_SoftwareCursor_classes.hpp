﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_SoftwareCursor

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass BP_SoftwareCursor.BP_SoftwareCursor_C
// 0x0020 (0x0280 - 0x0260)
class UBP_SoftwareCursor_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       HoverAnim;                                         // 0x0268(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Image_0;                                           // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_162;                                         // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_SoftwareCursor(int32 EntryPoint);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_SoftwareCursor_C">();
	}
	static class UBP_SoftwareCursor_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_SoftwareCursor_C>();
	}
};
static_assert(alignof(UBP_SoftwareCursor_C) == 0x000008, "Wrong alignment on UBP_SoftwareCursor_C");
static_assert(sizeof(UBP_SoftwareCursor_C) == 0x000280, "Wrong size on UBP_SoftwareCursor_C");
static_assert(offsetof(UBP_SoftwareCursor_C, UberGraphFrame) == 0x000260, "Member 'UBP_SoftwareCursor_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_SoftwareCursor_C, HoverAnim) == 0x000268, "Member 'UBP_SoftwareCursor_C::HoverAnim' has a wrong offset!");
static_assert(offsetof(UBP_SoftwareCursor_C, Image_0) == 0x000270, "Member 'UBP_SoftwareCursor_C::Image_0' has a wrong offset!");
static_assert(offsetof(UBP_SoftwareCursor_C, Image_162) == 0x000278, "Member 'UBP_SoftwareCursor_C::Image_162' has a wrong offset!");

}

