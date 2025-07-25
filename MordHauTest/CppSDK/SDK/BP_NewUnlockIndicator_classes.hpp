﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_NewUnlockIndicator

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass BP_NewUnlockIndicator.BP_NewUnlockIndicator_C
// 0x0048 (0x02A8 - 0x0260)
class UBP_NewUnlockIndicator_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UWidgetAnimation*                       Pulse;                                             // 0x0268(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Background;                                        // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_2;                                           // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Outline;                                           // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_2;                                       // 0x0288(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FLinearColor                           Color;                                             // 0x0290(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          Show;                                              // 0x02A0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_BP_NewUnlockIndicator(int32 EntryPoint);
	void Construct();
	void Hide_Indicator();
	void Show_Indicator();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_NewUnlockIndicator_C">();
	}
	static class UBP_NewUnlockIndicator_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_NewUnlockIndicator_C>();
	}
};
static_assert(alignof(UBP_NewUnlockIndicator_C) == 0x000008, "Wrong alignment on UBP_NewUnlockIndicator_C");
static_assert(sizeof(UBP_NewUnlockIndicator_C) == 0x0002A8, "Wrong size on UBP_NewUnlockIndicator_C");
static_assert(offsetof(UBP_NewUnlockIndicator_C, UberGraphFrame) == 0x000260, "Member 'UBP_NewUnlockIndicator_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_NewUnlockIndicator_C, Pulse) == 0x000268, "Member 'UBP_NewUnlockIndicator_C::Pulse' has a wrong offset!");
static_assert(offsetof(UBP_NewUnlockIndicator_C, Background) == 0x000270, "Member 'UBP_NewUnlockIndicator_C::Background' has a wrong offset!");
static_assert(offsetof(UBP_NewUnlockIndicator_C, Image_2) == 0x000278, "Member 'UBP_NewUnlockIndicator_C::Image_2' has a wrong offset!");
static_assert(offsetof(UBP_NewUnlockIndicator_C, Outline) == 0x000280, "Member 'UBP_NewUnlockIndicator_C::Outline' has a wrong offset!");
static_assert(offsetof(UBP_NewUnlockIndicator_C, TextBlock_2) == 0x000288, "Member 'UBP_NewUnlockIndicator_C::TextBlock_2' has a wrong offset!");
static_assert(offsetof(UBP_NewUnlockIndicator_C, Color) == 0x000290, "Member 'UBP_NewUnlockIndicator_C::Color' has a wrong offset!");
static_assert(offsetof(UBP_NewUnlockIndicator_C, Show) == 0x0002A0, "Member 'UBP_NewUnlockIndicator_C::Show' has a wrong offset!");

}

