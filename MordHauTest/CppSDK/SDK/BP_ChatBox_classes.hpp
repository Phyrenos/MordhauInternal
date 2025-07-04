﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ChatBox

#include "Basic.hpp"

#include "E_ChatMuteTypes_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "S_ChatMessage_structs.hpp"
#include "Engine_structs.hpp"
#include "E_ChatUserTypes_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass BP_ChatBox.BP_ChatBox_C
// 0x0228 (0x0488 - 0x0260)
class UBP_ChatBox_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UWidgetAnimation*                       CharCountAnim;                                     // 0x0268(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       CooldownNotifierAnim;                              // 0x0270(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UTextBlock*                             CharCount;                                         // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             ChatCooldownText;                                  // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                             Entries;                                           // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         HorizontalBox_1;                                   // 0x0290(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         HorizontalBox_3;                                   // 0x0298(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         HorizontalBox_6;                                   // 0x02A0(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         HorizontalBox_3377;                                // 0x02A8(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_0;                                           // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_1;                                           // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_2;                                           // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_3;                                           // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_6;                                           // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_14;                                          // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               MutedPlayerContainer;                              // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           MutedPlayersList;                                  // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Overlay_1;                                         // 0x02F0(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Overlay_5;                                         // 0x02F8(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Overlay_1035;                                      // 0x0300(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCheckBox*                              PauseChatCheckbox;                                 // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCheckBox*                              ProfanityFilterCheckbox;                           // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                ReportServerLagButton;                             // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMultiLineEditableTextBox*              TextArea;                                          // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock;                                         // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_2;                                       // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_3;                                       // 0x0338(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_15;                                      // 0x0340(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_178;                                     // 0x0348(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VerticalBox_90;                                    // 0x0350(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                             ViewMode;                                          // 0x0358(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          IsChatVisible;                                     // 0x0360(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsMouseOver;                                       // 0x0361(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_362[0x2];                                      // 0x0362(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         MaxMessageLength;                                  // 0x0364(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          isViewModeOn;                                      // 0x0368(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_369[0x7];                                      // 0x0369(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UBP_ChatBoxEntry_C*>             ViewModelArray;                                    // 0x0370(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	int32                                         MaxNumOfEntries;                                   // 0x0380(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         NumOfMessagesToDisplayInViewMode;                  // 0x0384(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UBP_ChatBoxEntry_C*>             EntriesArray;                                      // 0x0388(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	float                                         TimeForViewModeDisappear;                          // 0x0398(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          TeamMode;                                          // 0x039C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_39D[0x3];                                      // 0x039D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         MessageLengthToCooldownRatio;                      // 0x03A0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ChatCooldownEndsAt;                                // 0x03A4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         NumberOfRecentSentMessages;                        // 0x03A8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         LastRecievedMessageAt;                             // 0x03AC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         MsgCountThreshold;                                 // 0x03B0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         NumOfMessagesSentInThreshold;                      // 0x03B4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 MessagesInThreshold;                               // 0x03B8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	float                                         ThresholdCooldown;                                 // 0x03C8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CharCountThreshold;                                // 0x03CC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         TimeWhenLastMessageWasSent;                        // 0x03D0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3D4[0x4];                                      // 0x03D4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FText>                           MotivationalMessages;                              // 0x03D8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UBP_ContextPopupWrapper_C*              ContextPopupWrapper_Ref;                           // 0x03E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FString>                         List_of_profane_words;                             // 0x03F0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class FString>                         List_of_banned_words;                              // 0x0400(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          isMuted;                                           // 0x0410(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          isChatMode;                                        // 0x0411(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_412[0x2];                                      // 0x0412(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Mute_Duration;                                     // 0x0414(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsChatPaused;                                     // 0x0418(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	uint8                                         Pad_419[0x7];                                      // 0x0419(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FS_ChatMessage>                 QueuedMessages;                                    // 0x0420(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	uint8                                         ModeratorBadge;                                    // 0x0430(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         DevBadge;                                          // 0x0431(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_432[0x6];                                      // 0x0432(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<class FString, struct FLinearColor>      ChatColorOverrideMap;                              // 0x0438(0x0050)(Edit, BlueprintVisible, Config, DisableEditOnInstance)

public:
	void ExecuteUbergraph_BP_ChatBox(int32 EntryPoint);
	void BndEvt__Button_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature();
	void BndEvt__PauseChatCheckbox_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
	void OnServerRestrictionInfoReceived(const struct FServerRestrictionInfo& ServerRestrictionInfo);
	void BndEvt__CheckBox_0_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
	void Construct();
	void GoToViewModeCallback();
	void GoToViewMode();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void OnMouseLeave(const struct FPointerEvent& MouseEvent);
	void BndEvt__TextArea_K2Node_ComponentBoundEvent_594_OnMultiLineEditableTextBoxChangedEvent__DelegateSignature(const class FText& Text);
	void AddEntry(const class FString& Name_0, const class FText& Message, const struct FLinearColor& NameColor, const class FText& Prefix, const struct FPlayFabPlayer& Player, E_ChatUserTypes Chat_User_Type);
	struct FEventReply OnPreviewKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
	ESlateVisibility GetInputContainerVisibility();
	ESlateVisibility GetViewModeVisibility();
	void GoToChatMode(bool Team);
	void OnEnter();
	void OnMessageReceived(const class FText& Message, class APlayerState* Player, const class FText& Prefix);
	void OnEscape();
	ESlateVisibility GetChatBoxVisibility();
	ESlateVisibility GetEntriesVisibility();
	void AddEntriesEntry(class UBP_ChatBoxEntry_C* Entry);
	void AddViewModeEntry(class UBP_ChatBoxEntry_C* Entry);
	class FText GetText_0();
	void ResetThreshold();
	ESlateVisibility GetVisibility_0();
	void MutePlayer(E_ChatMuteTypes MuteType, const struct FPlayFabPlayer& Player);
	void UnmutePlayer(const struct FPlayFabPlayer& Player);
	void Get_Keys_From_Value(const TMap<class UBP_ChatBoxEntry_C*, class FString>& PreviousMessagesMap, const class FString& Value__SteamID_, TArray<class UBP_ChatBoxEntry_C*>* Keys);
	void AddPlayerToMutedMap(const struct FPlayFabPlayer& Player, E_ChatMuteTypes Mute_Type);
	void IsPlayerMuted(const struct FPlayFabPlayer& Player, E_ChatMuteTypes* Mute_Type, bool* isMuted_0);
	void RemovePlayerFromMutedMap(const struct FPlayFabPlayer& Player, int32* Player_Index);
	void Repopulate_Muted_Player_List();
	ESlateVisibility GetVisibility_1();
	bool Get_TextArea_bIsEnabled_0();
	ESlateVisibility GetVisibility_2();
	ESlateVisibility GetVisibility_3();
	class FText GetText_1();
	void OnRep_bIsChatPaused();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ChatBox_C">();
	}
	static class UBP_ChatBox_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_ChatBox_C>();
	}
};
static_assert(alignof(UBP_ChatBox_C) == 0x000008, "Wrong alignment on UBP_ChatBox_C");
static_assert(sizeof(UBP_ChatBox_C) == 0x000488, "Wrong size on UBP_ChatBox_C");
static_assert(offsetof(UBP_ChatBox_C, UberGraphFrame) == 0x000260, "Member 'UBP_ChatBox_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_ChatBox_C, CharCountAnim) == 0x000268, "Member 'UBP_ChatBox_C::CharCountAnim' has a wrong offset!");
static_assert(offsetof(UBP_ChatBox_C, CooldownNotifierAnim) == 0x000270, "Member 'UBP_ChatBox_C::CooldownNotifierAnim' has a wrong offset!");
static_assert(offsetof(UBP_ChatBox_C, CharCount) == 0x000278, "Member 'UBP_ChatBox_C::CharCount' has a wrong offset!");
static_assert(offsetof(UBP_ChatBox_C, ChatCooldownText) == 0x000280, "Member 'UBP_ChatBox_C::ChatCooldownText' has a wrong offset!");
static_assert(offsetof(UBP_ChatBox_C, Entries) == 0x000288, "Member 'UBP_ChatBox_C::Entries' has a wrong offset!");
static_assert(offsetof(UBP_ChatBox_C, HorizontalBox_1) == 0x000290, "Member 'UBP_ChatBox_C::HorizontalBox_1' has a wrong offset!");
static_assert(offsetof(UBP_ChatBox_C, HorizontalBox_3) == 0x000298, "Member 'UBP_ChatBox_C::HorizontalBox_3' has a wrong offset!");
static_assert(offsetof(UBP_ChatBox_C, HorizontalBox_6) == 0x0002A0, "Member 'UBP_ChatBox_C::HorizontalBox_6' has a wrong offset!");
static_assert(offsetof(UBP_ChatBox_C, HorizontalBox_3377) == 0x0002A8, "Member 'UBP_ChatBox_C::HorizontalBox_3377' has a wrong offset!");
static_assert(offsetof(UBP_ChatBox_C, Image_0) == 0x0002B0, "Member 'UBP_ChatBox_C::Image_0' has a wrong offset!");
static_assert(offsetof(UBP_ChatBox_C, Image_1) == 0x0002B8, "Member 'UBP_ChatBox_C::Image_1' has a wrong offset!");
static_assert(offsetof(UBP_ChatBox_C, Image_2) == 0x0002C0, "Member 'UBP_ChatBox_C::Image_2' has a wrong offset!");
static_assert(offsetof(UBP_ChatBox_C, Image_3) == 0x0002C8, "Member 'UBP_ChatBox_C::Image_3' has a wrong offset!");
static_assert(offsetof(UBP_ChatBox_C, Image_6) == 0x0002D0, "Member 'UBP_ChatBox_C::Image_6' has a wrong offset!");
static_assert(offsetof(UBP_ChatBox_C, Image_14) == 0x0002D8, "Member 'UBP_ChatBox_C::Image_14' has a wrong offset!");
static_assert(offsetof(UBP_ChatBox_C, MutedPlayerContainer) == 0x0002E0, "Member 'UBP_ChatBox_C::MutedPlayerContainer' has a wrong offset!");
static_assert(offsetof(UBP_ChatBox_C, MutedPlayersList) == 0x0002E8, "Member 'UBP_ChatBox_C::MutedPlayersList' has a wrong offset!");
static_assert(offsetof(UBP_ChatBox_C, Overlay_1) == 0x0002F0, "Member 'UBP_ChatBox_C::Overlay_1' has a wrong offset!");
static_assert(offsetof(UBP_ChatBox_C, Overlay_5) == 0x0002F8, "Member 'UBP_ChatBox_C::Overlay_5' has a wrong offset!");
static_assert(offsetof(UBP_ChatBox_C, Overlay_1035) == 0x000300, "Member 'UBP_ChatBox_C::Overlay_1035' has a wrong offset!");
static_assert(offsetof(UBP_ChatBox_C, PauseChatCheckbox) == 0x000308, "Member 'UBP_ChatBox_C::PauseChatCheckbox' has a wrong offset!");
static_assert(offsetof(UBP_ChatBox_C, ProfanityFilterCheckbox) == 0x000310, "Member 'UBP_ChatBox_C::ProfanityFilterCheckbox' has a wrong offset!");
static_assert(offsetof(UBP_ChatBox_C, ReportServerLagButton) == 0x000318, "Member 'UBP_ChatBox_C::ReportServerLagButton' has a wrong offset!");
static_assert(offsetof(UBP_ChatBox_C, TextArea) == 0x000320, "Member 'UBP_ChatBox_C::TextArea' has a wrong offset!");
static_assert(offsetof(UBP_ChatBox_C, TextBlock) == 0x000328, "Member 'UBP_ChatBox_C::TextBlock' has a wrong offset!");
static_assert(offsetof(UBP_ChatBox_C, TextBlock_2) == 0x000330, "Member 'UBP_ChatBox_C::TextBlock_2' has a wrong offset!");
static_assert(offsetof(UBP_ChatBox_C, TextBlock_3) == 0x000338, "Member 'UBP_ChatBox_C::TextBlock_3' has a wrong offset!");
static_assert(offsetof(UBP_ChatBox_C, TextBlock_15) == 0x000340, "Member 'UBP_ChatBox_C::TextBlock_15' has a wrong offset!");
static_assert(offsetof(UBP_ChatBox_C, TextBlock_178) == 0x000348, "Member 'UBP_ChatBox_C::TextBlock_178' has a wrong offset!");
static_assert(offsetof(UBP_ChatBox_C, VerticalBox_90) == 0x000350, "Member 'UBP_ChatBox_C::VerticalBox_90' has a wrong offset!");
static_assert(offsetof(UBP_ChatBox_C, ViewMode) == 0x000358, "Member 'UBP_ChatBox_C::ViewMode' has a wrong offset!");
static_assert(offsetof(UBP_ChatBox_C, IsChatVisible) == 0x000360, "Member 'UBP_ChatBox_C::IsChatVisible' has a wrong offset!");
static_assert(offsetof(UBP_ChatBox_C, IsMouseOver) == 0x000361, "Member 'UBP_ChatBox_C::IsMouseOver' has a wrong offset!");
static_assert(offsetof(UBP_ChatBox_C, MaxMessageLength) == 0x000364, "Member 'UBP_ChatBox_C::MaxMessageLength' has a wrong offset!");
static_assert(offsetof(UBP_ChatBox_C, isViewModeOn) == 0x000368, "Member 'UBP_ChatBox_C::isViewModeOn' has a wrong offset!");
static_assert(offsetof(UBP_ChatBox_C, ViewModelArray) == 0x000370, "Member 'UBP_ChatBox_C::ViewModelArray' has a wrong offset!");
static_assert(offsetof(UBP_ChatBox_C, MaxNumOfEntries) == 0x000380, "Member 'UBP_ChatBox_C::MaxNumOfEntries' has a wrong offset!");
static_assert(offsetof(UBP_ChatBox_C, NumOfMessagesToDisplayInViewMode) == 0x000384, "Member 'UBP_ChatBox_C::NumOfMessagesToDisplayInViewMode' has a wrong offset!");
static_assert(offsetof(UBP_ChatBox_C, EntriesArray) == 0x000388, "Member 'UBP_ChatBox_C::EntriesArray' has a wrong offset!");
static_assert(offsetof(UBP_ChatBox_C, TimeForViewModeDisappear) == 0x000398, "Member 'UBP_ChatBox_C::TimeForViewModeDisappear' has a wrong offset!");
static_assert(offsetof(UBP_ChatBox_C, TeamMode) == 0x00039C, "Member 'UBP_ChatBox_C::TeamMode' has a wrong offset!");
static_assert(offsetof(UBP_ChatBox_C, MessageLengthToCooldownRatio) == 0x0003A0, "Member 'UBP_ChatBox_C::MessageLengthToCooldownRatio' has a wrong offset!");
static_assert(offsetof(UBP_ChatBox_C, ChatCooldownEndsAt) == 0x0003A4, "Member 'UBP_ChatBox_C::ChatCooldownEndsAt' has a wrong offset!");
static_assert(offsetof(UBP_ChatBox_C, NumberOfRecentSentMessages) == 0x0003A8, "Member 'UBP_ChatBox_C::NumberOfRecentSentMessages' has a wrong offset!");
static_assert(offsetof(UBP_ChatBox_C, LastRecievedMessageAt) == 0x0003AC, "Member 'UBP_ChatBox_C::LastRecievedMessageAt' has a wrong offset!");
static_assert(offsetof(UBP_ChatBox_C, MsgCountThreshold) == 0x0003B0, "Member 'UBP_ChatBox_C::MsgCountThreshold' has a wrong offset!");
static_assert(offsetof(UBP_ChatBox_C, NumOfMessagesSentInThreshold) == 0x0003B4, "Member 'UBP_ChatBox_C::NumOfMessagesSentInThreshold' has a wrong offset!");
static_assert(offsetof(UBP_ChatBox_C, MessagesInThreshold) == 0x0003B8, "Member 'UBP_ChatBox_C::MessagesInThreshold' has a wrong offset!");
static_assert(offsetof(UBP_ChatBox_C, ThresholdCooldown) == 0x0003C8, "Member 'UBP_ChatBox_C::ThresholdCooldown' has a wrong offset!");
static_assert(offsetof(UBP_ChatBox_C, CharCountThreshold) == 0x0003CC, "Member 'UBP_ChatBox_C::CharCountThreshold' has a wrong offset!");
static_assert(offsetof(UBP_ChatBox_C, TimeWhenLastMessageWasSent) == 0x0003D0, "Member 'UBP_ChatBox_C::TimeWhenLastMessageWasSent' has a wrong offset!");
static_assert(offsetof(UBP_ChatBox_C, MotivationalMessages) == 0x0003D8, "Member 'UBP_ChatBox_C::MotivationalMessages' has a wrong offset!");
static_assert(offsetof(UBP_ChatBox_C, ContextPopupWrapper_Ref) == 0x0003E8, "Member 'UBP_ChatBox_C::ContextPopupWrapper_Ref' has a wrong offset!");
static_assert(offsetof(UBP_ChatBox_C, List_of_profane_words) == 0x0003F0, "Member 'UBP_ChatBox_C::List_of_profane_words' has a wrong offset!");
static_assert(offsetof(UBP_ChatBox_C, List_of_banned_words) == 0x000400, "Member 'UBP_ChatBox_C::List_of_banned_words' has a wrong offset!");
static_assert(offsetof(UBP_ChatBox_C, isMuted) == 0x000410, "Member 'UBP_ChatBox_C::isMuted' has a wrong offset!");
static_assert(offsetof(UBP_ChatBox_C, isChatMode) == 0x000411, "Member 'UBP_ChatBox_C::isChatMode' has a wrong offset!");
static_assert(offsetof(UBP_ChatBox_C, Mute_Duration) == 0x000414, "Member 'UBP_ChatBox_C::Mute_Duration' has a wrong offset!");
static_assert(offsetof(UBP_ChatBox_C, bIsChatPaused) == 0x000418, "Member 'UBP_ChatBox_C::bIsChatPaused' has a wrong offset!");
static_assert(offsetof(UBP_ChatBox_C, QueuedMessages) == 0x000420, "Member 'UBP_ChatBox_C::QueuedMessages' has a wrong offset!");
static_assert(offsetof(UBP_ChatBox_C, ModeratorBadge) == 0x000430, "Member 'UBP_ChatBox_C::ModeratorBadge' has a wrong offset!");
static_assert(offsetof(UBP_ChatBox_C, DevBadge) == 0x000431, "Member 'UBP_ChatBox_C::DevBadge' has a wrong offset!");
static_assert(offsetof(UBP_ChatBox_C, ChatColorOverrideMap) == 0x000438, "Member 'UBP_ChatBox_C::ChatColorOverrideMap' has a wrong offset!");

}

