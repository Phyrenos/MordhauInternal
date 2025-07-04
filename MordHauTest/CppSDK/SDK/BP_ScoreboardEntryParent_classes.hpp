﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ScoreboardEntryParent

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "E_ScoreboardEntryTypes_structs.hpp"
#include "UMG_classes.hpp"
#include "E_ChatUserTypes_structs.hpp"
#include "MordhauOnlineSubsystem_structs.hpp"
#include "Mordhau_structs.hpp"
#include "E_ChatMuteTypes_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass BP_ScoreboardEntryParent.BP_ScoreboardEntryParent_C
// 0x01E8 (0x0448 - 0x0260)
class UBP_ScoreboardEntryParent_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	int32                                         Rank;                                              // 0x0268(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_26C[0x4];                                      // 0x026C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   Assists;                                           // 0x0270(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   Score;                                             // 0x0288(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   Deaths;                                            // 0x02A0(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                         PingInt;                                           // 0x02B8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2BC[0x4];                                      // 0x02BC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   Ping;                                              // 0x02C0(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FString                                 Name_0;                                            // 0x02D8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class FText                                   Kills;                                             // 0x02E8(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class AMordhauPlayerState*                    PlayerState;                                       // 0x0300(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Highlight;                                         // 0x0308(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          Dead;                                              // 0x0309(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	E_ScoreboardEntryTypes                        Entry_Type;                                        // 0x030A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_30B[0x1];                                      // 0x030B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Index_0;                                           // 0x030C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMulticastInlineDelegate<void()>              Refreshed;                                         // 0x0310(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FPlayFabPlayer                         Player;                                            // 0x0320(0x0060)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	class UBP_TextInputDialog_C*                  LastTextInputDialog;                               // 0x0380(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   BanDuration;                                       // 0x0388(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          shouldRefresh;                                     // 0x03A0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3A1[0x3];                                      // 0x03A1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Team;                                              // 0x03A4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ScoreValue;                                        // 0x03A8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         ModeratorBadge;                                    // 0x03AC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         DevBadge;                                          // 0x03AD(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_ChatUserTypes                               User_Type;                                         // 0x03AE(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3AF[0x1];                                      // 0x03AF(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_ReportDialog_C*                     LastReportDialog;                                  // 0x03B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_InformationDialog_C*                LastInformationDialog;                             // 0x03B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   ReportResponseText;                                // 0x03C0(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class FText>                           ContextOptions;                                    // 0x03D8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FPlayFabPlayer                         SelectedPlayer;                                    // 0x03E8(0x0060)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_ScoreboardEntryParent(int32 EntryPoint);
	void OnContextMenuClosed();
	void OnInformationDialogConfirmed();
	void OnCancel();
	void OnSubmit();
	void Report_Player();
	void MessageDialogCanceled();
	void MessageDialogEntered();
	void ADMIN___Message();
	void CreateWrapper(const TMap<class FString, class FText>& InOptions);
	void OptionSelected(const class FString& Option);
	void Construct();
	void CreateWrapper_Complex(const TMap<class FString, class FText>& InOptions, const TArray<class UTexture2D*>& Icons, const TArray<struct FLinearColor>& Colors, const class FText& Title);
	void CallContextMenu();
	void View_Profile();
	void Chat_Mute();
	void Context_Button_Clicked(int32 Button_Index);
	void VoteKick();
	void BanReasonDialogEntered();
	void BanReasonDialogCanceled();
	void ADMIN___Ban();
	void ADMIN___Kick();
	void ADMIN___Mute();
	void BanDurationDialogCanceled();
	void BanDurationDialogEntered();
	void KickDialogCanceled();
	void KickDialogEntered();
	void MuteDialogCanceled();
	void MuteDialogEntered();
	void Refresh_Entry(class AMordhauPlayerState* PlayerState_0, E_ScoreboardEntryTypes Entry_Type_0);
	void Find_Option_Selection_ID(const class FString& OptionSelectionString, int32* SelectionStringID);
	void InitializeOptions(TMap<class FString, class FText>* OptionsMap);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ScoreboardEntryParent_C">();
	}
	static class UBP_ScoreboardEntryParent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_ScoreboardEntryParent_C>();
	}
};
static_assert(alignof(UBP_ScoreboardEntryParent_C) == 0x000008, "Wrong alignment on UBP_ScoreboardEntryParent_C");
static_assert(sizeof(UBP_ScoreboardEntryParent_C) == 0x000448, "Wrong size on UBP_ScoreboardEntryParent_C");
static_assert(offsetof(UBP_ScoreboardEntryParent_C, UberGraphFrame) == 0x000260, "Member 'UBP_ScoreboardEntryParent_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_ScoreboardEntryParent_C, Rank) == 0x000268, "Member 'UBP_ScoreboardEntryParent_C::Rank' has a wrong offset!");
static_assert(offsetof(UBP_ScoreboardEntryParent_C, Assists) == 0x000270, "Member 'UBP_ScoreboardEntryParent_C::Assists' has a wrong offset!");
static_assert(offsetof(UBP_ScoreboardEntryParent_C, Score) == 0x000288, "Member 'UBP_ScoreboardEntryParent_C::Score' has a wrong offset!");
static_assert(offsetof(UBP_ScoreboardEntryParent_C, Deaths) == 0x0002A0, "Member 'UBP_ScoreboardEntryParent_C::Deaths' has a wrong offset!");
static_assert(offsetof(UBP_ScoreboardEntryParent_C, PingInt) == 0x0002B8, "Member 'UBP_ScoreboardEntryParent_C::PingInt' has a wrong offset!");
static_assert(offsetof(UBP_ScoreboardEntryParent_C, Ping) == 0x0002C0, "Member 'UBP_ScoreboardEntryParent_C::Ping' has a wrong offset!");
static_assert(offsetof(UBP_ScoreboardEntryParent_C, Name_0) == 0x0002D8, "Member 'UBP_ScoreboardEntryParent_C::Name_0' has a wrong offset!");
static_assert(offsetof(UBP_ScoreboardEntryParent_C, Kills) == 0x0002E8, "Member 'UBP_ScoreboardEntryParent_C::Kills' has a wrong offset!");
static_assert(offsetof(UBP_ScoreboardEntryParent_C, PlayerState) == 0x000300, "Member 'UBP_ScoreboardEntryParent_C::PlayerState' has a wrong offset!");
static_assert(offsetof(UBP_ScoreboardEntryParent_C, Highlight) == 0x000308, "Member 'UBP_ScoreboardEntryParent_C::Highlight' has a wrong offset!");
static_assert(offsetof(UBP_ScoreboardEntryParent_C, Dead) == 0x000309, "Member 'UBP_ScoreboardEntryParent_C::Dead' has a wrong offset!");
static_assert(offsetof(UBP_ScoreboardEntryParent_C, Entry_Type) == 0x00030A, "Member 'UBP_ScoreboardEntryParent_C::Entry_Type' has a wrong offset!");
static_assert(offsetof(UBP_ScoreboardEntryParent_C, Index_0) == 0x00030C, "Member 'UBP_ScoreboardEntryParent_C::Index_0' has a wrong offset!");
static_assert(offsetof(UBP_ScoreboardEntryParent_C, Refreshed) == 0x000310, "Member 'UBP_ScoreboardEntryParent_C::Refreshed' has a wrong offset!");
static_assert(offsetof(UBP_ScoreboardEntryParent_C, Player) == 0x000320, "Member 'UBP_ScoreboardEntryParent_C::Player' has a wrong offset!");
static_assert(offsetof(UBP_ScoreboardEntryParent_C, LastTextInputDialog) == 0x000380, "Member 'UBP_ScoreboardEntryParent_C::LastTextInputDialog' has a wrong offset!");
static_assert(offsetof(UBP_ScoreboardEntryParent_C, BanDuration) == 0x000388, "Member 'UBP_ScoreboardEntryParent_C::BanDuration' has a wrong offset!");
static_assert(offsetof(UBP_ScoreboardEntryParent_C, shouldRefresh) == 0x0003A0, "Member 'UBP_ScoreboardEntryParent_C::shouldRefresh' has a wrong offset!");
static_assert(offsetof(UBP_ScoreboardEntryParent_C, Team) == 0x0003A4, "Member 'UBP_ScoreboardEntryParent_C::Team' has a wrong offset!");
static_assert(offsetof(UBP_ScoreboardEntryParent_C, ScoreValue) == 0x0003A8, "Member 'UBP_ScoreboardEntryParent_C::ScoreValue' has a wrong offset!");
static_assert(offsetof(UBP_ScoreboardEntryParent_C, ModeratorBadge) == 0x0003AC, "Member 'UBP_ScoreboardEntryParent_C::ModeratorBadge' has a wrong offset!");
static_assert(offsetof(UBP_ScoreboardEntryParent_C, DevBadge) == 0x0003AD, "Member 'UBP_ScoreboardEntryParent_C::DevBadge' has a wrong offset!");
static_assert(offsetof(UBP_ScoreboardEntryParent_C, User_Type) == 0x0003AE, "Member 'UBP_ScoreboardEntryParent_C::User_Type' has a wrong offset!");
static_assert(offsetof(UBP_ScoreboardEntryParent_C, LastReportDialog) == 0x0003B0, "Member 'UBP_ScoreboardEntryParent_C::LastReportDialog' has a wrong offset!");
static_assert(offsetof(UBP_ScoreboardEntryParent_C, LastInformationDialog) == 0x0003B8, "Member 'UBP_ScoreboardEntryParent_C::LastInformationDialog' has a wrong offset!");
static_assert(offsetof(UBP_ScoreboardEntryParent_C, ReportResponseText) == 0x0003C0, "Member 'UBP_ScoreboardEntryParent_C::ReportResponseText' has a wrong offset!");
static_assert(offsetof(UBP_ScoreboardEntryParent_C, ContextOptions) == 0x0003D8, "Member 'UBP_ScoreboardEntryParent_C::ContextOptions' has a wrong offset!");
static_assert(offsetof(UBP_ScoreboardEntryParent_C, SelectedPlayer) == 0x0003E8, "Member 'UBP_ScoreboardEntryParent_C::SelectedPlayer' has a wrong offset!");

}

