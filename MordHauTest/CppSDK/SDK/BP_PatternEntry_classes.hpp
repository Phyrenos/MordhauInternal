﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PatternEntry

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Mordhau_structs.hpp"
#include "Engine_structs.hpp"
#include "BP_CustomizationItemEntry_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass BP_PatternEntry.BP_PatternEntry_C
// 0x0090 (0x0550 - 0x04C0)
class UBP_PatternEntry_C final : public UBP_CustomizationItemEntry_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_PatternEntry_C;                  // 0x04C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UWidgetAnimation*                       SelectedAnim;                                      // 0x04C8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UButton*                                Button;                                            // 0x04D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_0;                                           // 0x04D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Selected;                                    // 0x04E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Selected_anim;                               // 0x04E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             NameText;                                          // 0x04F0(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Overlay_Selected;                                  // 0x04F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBox_13658;                                     // 0x0500(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_157;                                     // 0x0508(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                   Tooltip_Text;                                      // 0x0510(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FLinearColor                           Display_Color;                                     // 0x0528(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsDisplayEntry;                                   // 0x0538(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_539[0x7];                                      // 0x0539(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPatternInfo                           Pattern;                                           // 0x0540(0x0010)(Edit, BlueprintVisible, NoDestructor)

public:
	void ExecuteUbergraph_BP_PatternEntry(int32 EntryPoint);
	void Update_Entry();
	void Construct();
	void BndEvt__ImageButton_K2Node_ComponentBoundEvent_2238_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__ImageButton_K2Node_ComponentBoundEvent_9595_OnButtonClickedEvent__DelegateSignature();
	void Update(int32 ID_0, const struct FPatternInfo& Pattern_Info, bool bIsSelected);
	class UWidget* Get_Button_ToolTipWidget_0();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PatternEntry_C">();
	}
	static class UBP_PatternEntry_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_PatternEntry_C>();
	}
};
static_assert(alignof(UBP_PatternEntry_C) == 0x000008, "Wrong alignment on UBP_PatternEntry_C");
static_assert(sizeof(UBP_PatternEntry_C) == 0x000550, "Wrong size on UBP_PatternEntry_C");
static_assert(offsetof(UBP_PatternEntry_C, UberGraphFrame_BP_PatternEntry_C) == 0x0004C0, "Member 'UBP_PatternEntry_C::UberGraphFrame_BP_PatternEntry_C' has a wrong offset!");
static_assert(offsetof(UBP_PatternEntry_C, SelectedAnim) == 0x0004C8, "Member 'UBP_PatternEntry_C::SelectedAnim' has a wrong offset!");
static_assert(offsetof(UBP_PatternEntry_C, Button) == 0x0004D0, "Member 'UBP_PatternEntry_C::Button' has a wrong offset!");
static_assert(offsetof(UBP_PatternEntry_C, Image_0) == 0x0004D8, "Member 'UBP_PatternEntry_C::Image_0' has a wrong offset!");
static_assert(offsetof(UBP_PatternEntry_C, Image_Selected) == 0x0004E0, "Member 'UBP_PatternEntry_C::Image_Selected' has a wrong offset!");
static_assert(offsetof(UBP_PatternEntry_C, Image_Selected_anim) == 0x0004E8, "Member 'UBP_PatternEntry_C::Image_Selected_anim' has a wrong offset!");
static_assert(offsetof(UBP_PatternEntry_C, NameText) == 0x0004F0, "Member 'UBP_PatternEntry_C::NameText' has a wrong offset!");
static_assert(offsetof(UBP_PatternEntry_C, Overlay_Selected) == 0x0004F8, "Member 'UBP_PatternEntry_C::Overlay_Selected' has a wrong offset!");
static_assert(offsetof(UBP_PatternEntry_C, SizeBox_13658) == 0x000500, "Member 'UBP_PatternEntry_C::SizeBox_13658' has a wrong offset!");
static_assert(offsetof(UBP_PatternEntry_C, TextBlock_157) == 0x000508, "Member 'UBP_PatternEntry_C::TextBlock_157' has a wrong offset!");
static_assert(offsetof(UBP_PatternEntry_C, Tooltip_Text) == 0x000510, "Member 'UBP_PatternEntry_C::Tooltip_Text' has a wrong offset!");
static_assert(offsetof(UBP_PatternEntry_C, Display_Color) == 0x000528, "Member 'UBP_PatternEntry_C::Display_Color' has a wrong offset!");
static_assert(offsetof(UBP_PatternEntry_C, bIsDisplayEntry) == 0x000538, "Member 'UBP_PatternEntry_C::bIsDisplayEntry' has a wrong offset!");
static_assert(offsetof(UBP_PatternEntry_C, Pattern) == 0x000540, "Member 'UBP_PatternEntry_C::Pattern' has a wrong offset!");

}

