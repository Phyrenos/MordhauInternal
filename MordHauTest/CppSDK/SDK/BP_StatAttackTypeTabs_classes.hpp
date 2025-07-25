﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_StatAttackTypeTabs

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Mordhau_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass BP_StatAttackTypeTabs.BP_StatAttackTypeTabs_C
// 0x0058 (0x02B8 - 0x0260)
class UBP_StatAttackTypeTabs_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UButton*                                Button;                                            // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ic;                                                // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Background;                                  // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_hover;                                       // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          Selected;                                          // 0x0288(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_289[0x7];                                      // 0x0289(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TMulticastInlineDelegate<void(class UBP_StatAttackTypeTabs_C* Button)> On_Clicked;                                        // 0x0290(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UTexture2D*                             Icon;                                              // 0x02A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EAttackMove                                   Move;                                              // 0x02A8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2A9[0x7];                                      // 0x02A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_SimpleTooltip_C*                    SimpleTooltip;                                     // 0x02B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_StatAttackTypeTabs(int32 EntryPoint);
	void Construct();
	void BndEvt__StrikeButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void Update();
	ESlateVisibility Get_Image_hover_Visibility_0();
	class UWidget* Get_Button_ToolTipWidget_0();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_StatAttackTypeTabs_C">();
	}
	static class UBP_StatAttackTypeTabs_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_StatAttackTypeTabs_C>();
	}
};
static_assert(alignof(UBP_StatAttackTypeTabs_C) == 0x000008, "Wrong alignment on UBP_StatAttackTypeTabs_C");
static_assert(sizeof(UBP_StatAttackTypeTabs_C) == 0x0002B8, "Wrong size on UBP_StatAttackTypeTabs_C");
static_assert(offsetof(UBP_StatAttackTypeTabs_C, UberGraphFrame) == 0x000260, "Member 'UBP_StatAttackTypeTabs_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_StatAttackTypeTabs_C, Button) == 0x000268, "Member 'UBP_StatAttackTypeTabs_C::Button' has a wrong offset!");
static_assert(offsetof(UBP_StatAttackTypeTabs_C, ic) == 0x000270, "Member 'UBP_StatAttackTypeTabs_C::ic' has a wrong offset!");
static_assert(offsetof(UBP_StatAttackTypeTabs_C, Image_Background) == 0x000278, "Member 'UBP_StatAttackTypeTabs_C::Image_Background' has a wrong offset!");
static_assert(offsetof(UBP_StatAttackTypeTabs_C, Image_hover) == 0x000280, "Member 'UBP_StatAttackTypeTabs_C::Image_hover' has a wrong offset!");
static_assert(offsetof(UBP_StatAttackTypeTabs_C, Selected) == 0x000288, "Member 'UBP_StatAttackTypeTabs_C::Selected' has a wrong offset!");
static_assert(offsetof(UBP_StatAttackTypeTabs_C, On_Clicked) == 0x000290, "Member 'UBP_StatAttackTypeTabs_C::On_Clicked' has a wrong offset!");
static_assert(offsetof(UBP_StatAttackTypeTabs_C, Icon) == 0x0002A0, "Member 'UBP_StatAttackTypeTabs_C::Icon' has a wrong offset!");
static_assert(offsetof(UBP_StatAttackTypeTabs_C, Move) == 0x0002A8, "Member 'UBP_StatAttackTypeTabs_C::Move' has a wrong offset!");
static_assert(offsetof(UBP_StatAttackTypeTabs_C, SimpleTooltip) == 0x0002B0, "Member 'UBP_StatAttackTypeTabs_C::SimpleTooltip' has a wrong offset!");

}

