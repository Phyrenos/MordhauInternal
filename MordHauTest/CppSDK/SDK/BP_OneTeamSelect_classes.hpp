﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_OneTeamSelect

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_TeamSelect_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass BP_OneTeamSelect.BP_OneTeamSelect_C
// 0x0080 (0x0300 - 0x0280)
class UBP_OneTeamSelect_C final : public UBP_TeamSelect_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0280(0x0008)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UButton*                                AutoAssignButton;                                  // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_ButtonPrompt_C*                     BP_ButtonPrompt_OneTeam;                           // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_OneTeamSelectEntry_C*               BP_OneTeamSelectEntry;                             // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                Button_0;                                          // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           HeaderCanvas;                                      // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_1;                                           // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_8;                                           // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_194;                                         // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_195;                                         // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_196;                                         // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UInvalidationBox*                       InvalidationBox_3;                                 // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 spectateIcon;                                      // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                SpectatorButton;                                   // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_29;                                      // 0x02F0(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_33;                                      // 0x02F8(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_OneTeamSelect(int32 EntryPoint);
	void OnShow_();
	void OnHide_();
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__SpectatorButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void Construct();
	void PreConstruct(bool IsDesignTime);
	class FText GetText_0();
	class FText GetText_1();
	ESlateVisibility Get_CloseButton_Visibility_0();
	bool Get_SpectatorButton_bIsEnabled_0();
	void Show();
	struct FEventReply OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_OneTeamSelect_C">();
	}
	static class UBP_OneTeamSelect_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_OneTeamSelect_C>();
	}
};
static_assert(alignof(UBP_OneTeamSelect_C) == 0x000008, "Wrong alignment on UBP_OneTeamSelect_C");
static_assert(sizeof(UBP_OneTeamSelect_C) == 0x000300, "Wrong size on UBP_OneTeamSelect_C");
static_assert(offsetof(UBP_OneTeamSelect_C, UberGraphFrame) == 0x000280, "Member 'UBP_OneTeamSelect_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_OneTeamSelect_C, AutoAssignButton) == 0x000288, "Member 'UBP_OneTeamSelect_C::AutoAssignButton' has a wrong offset!");
static_assert(offsetof(UBP_OneTeamSelect_C, BP_ButtonPrompt_OneTeam) == 0x000290, "Member 'UBP_OneTeamSelect_C::BP_ButtonPrompt_OneTeam' has a wrong offset!");
static_assert(offsetof(UBP_OneTeamSelect_C, BP_OneTeamSelectEntry) == 0x000298, "Member 'UBP_OneTeamSelect_C::BP_OneTeamSelectEntry' has a wrong offset!");
static_assert(offsetof(UBP_OneTeamSelect_C, Button_0) == 0x0002A0, "Member 'UBP_OneTeamSelect_C::Button_0' has a wrong offset!");
static_assert(offsetof(UBP_OneTeamSelect_C, HeaderCanvas) == 0x0002A8, "Member 'UBP_OneTeamSelect_C::HeaderCanvas' has a wrong offset!");
static_assert(offsetof(UBP_OneTeamSelect_C, Image_1) == 0x0002B0, "Member 'UBP_OneTeamSelect_C::Image_1' has a wrong offset!");
static_assert(offsetof(UBP_OneTeamSelect_C, Image_8) == 0x0002B8, "Member 'UBP_OneTeamSelect_C::Image_8' has a wrong offset!");
static_assert(offsetof(UBP_OneTeamSelect_C, Image_194) == 0x0002C0, "Member 'UBP_OneTeamSelect_C::Image_194' has a wrong offset!");
static_assert(offsetof(UBP_OneTeamSelect_C, Image_195) == 0x0002C8, "Member 'UBP_OneTeamSelect_C::Image_195' has a wrong offset!");
static_assert(offsetof(UBP_OneTeamSelect_C, Image_196) == 0x0002D0, "Member 'UBP_OneTeamSelect_C::Image_196' has a wrong offset!");
static_assert(offsetof(UBP_OneTeamSelect_C, InvalidationBox_3) == 0x0002D8, "Member 'UBP_OneTeamSelect_C::InvalidationBox_3' has a wrong offset!");
static_assert(offsetof(UBP_OneTeamSelect_C, spectateIcon) == 0x0002E0, "Member 'UBP_OneTeamSelect_C::spectateIcon' has a wrong offset!");
static_assert(offsetof(UBP_OneTeamSelect_C, SpectatorButton) == 0x0002E8, "Member 'UBP_OneTeamSelect_C::SpectatorButton' has a wrong offset!");
static_assert(offsetof(UBP_OneTeamSelect_C, TextBlock_29) == 0x0002F0, "Member 'UBP_OneTeamSelect_C::TextBlock_29' has a wrong offset!");
static_assert(offsetof(UBP_OneTeamSelect_C, TextBlock_33) == 0x0002F8, "Member 'UBP_OneTeamSelect_C::TextBlock_33' has a wrong offset!");

}

