﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_FriendsListViewEntry

#include "Basic.hpp"

#include "E_FriendsListEntryType_structs.hpp"
#include "Engine_structs.hpp"
#include "MordhauOnlineSubsystem_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass BP_FriendsListViewEntry.BP_FriendsListViewEntry_C
// 0x0188 (0x03E8 - 0x0260)
class UBP_FriendsListViewEntry_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UBorder*                                Background_DpadSelected;                           // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_ButtonPrompt_C*                     BP_ButtonGamepad;                                  // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PlatformIcon_C*                     BP_PlatformIcon;                                   // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PlayerAvatar_C*                     BP_PlayerAvatar;                                   // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                Button_FriendEntry;                                // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_123;                                         // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Name_0;                                            // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Overlay_ButtonGamepad;                             // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FPlayFabPlayer                         Player;                                            // 0x02A8(0x0060)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FPlayFabPlayer                         DefaultPlayer;                                     // 0x0308(0x0060)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	class UBP_FriendsList_C*                      FriendsMainPage;                                   // 0x0368(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<class FString, class FText>              Options;                                           // 0x0370(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UBP_MordhauGameInstance_C*              GameInstance;                                      // 0x03C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	E_FriendsListEntryType                        EListType;                                         // 0x03C8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3C9[0x7];                                      // 0x03C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_FriendListEntryData_C*              BP_FriendsListEntryData;                           // 0x03D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FText>                           ContextOptions;                                    // 0x03D8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_BP_FriendsListViewEntry(int32 EntryPoint);
	void BP_OnItemSelectionChanged(bool bIsSelected);
	void BP_OnEntryReleased();
	void OnListItemObjectSet(class UObject* ListItemObject);
	void OptionSelected(const class FString& Option);
	void CreateWrapper(const TMap<class FString, class FText>& InOptions);
	void BndEvt__BP_FriendsListEntry_ContextMenuButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void CreateWrapper_Complex(const TMap<class FString, class FText>& InOptions, const TArray<class UTexture2D*>& Icons, const TArray<struct FLinearColor>& Colors, const class FText& Title);
	void BP_OnItemExpansionChanged(bool bIsExpanded);
	void Update(const struct FPlayFabPlayer& Player_0, E_FriendsListEntryType Type);
	void InvokeContextMenu();
	void OnContextMenuSelected(const class FString& Selection);
	void ResetEntry();
	void DistanceFromTarget(const struct FVector2D& TargetPoint, float* Distance);
	void DisableContextTooltipsIfConsole();
	void GetContextTitle(int32 ID, class FString* ContextTitle);
	void FindSelectionID(const class FString& Selection, int32* ID);
	void InitializeOptions(TMap<class FString, class FText>* OptionsMap);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_FriendsListViewEntry_C">();
	}
	static class UBP_FriendsListViewEntry_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_FriendsListViewEntry_C>();
	}
};
static_assert(alignof(UBP_FriendsListViewEntry_C) == 0x000008, "Wrong alignment on UBP_FriendsListViewEntry_C");
static_assert(sizeof(UBP_FriendsListViewEntry_C) == 0x0003E8, "Wrong size on UBP_FriendsListViewEntry_C");
static_assert(offsetof(UBP_FriendsListViewEntry_C, UberGraphFrame) == 0x000260, "Member 'UBP_FriendsListViewEntry_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_FriendsListViewEntry_C, Background_DpadSelected) == 0x000268, "Member 'UBP_FriendsListViewEntry_C::Background_DpadSelected' has a wrong offset!");
static_assert(offsetof(UBP_FriendsListViewEntry_C, BP_ButtonGamepad) == 0x000270, "Member 'UBP_FriendsListViewEntry_C::BP_ButtonGamepad' has a wrong offset!");
static_assert(offsetof(UBP_FriendsListViewEntry_C, BP_PlatformIcon) == 0x000278, "Member 'UBP_FriendsListViewEntry_C::BP_PlatformIcon' has a wrong offset!");
static_assert(offsetof(UBP_FriendsListViewEntry_C, BP_PlayerAvatar) == 0x000280, "Member 'UBP_FriendsListViewEntry_C::BP_PlayerAvatar' has a wrong offset!");
static_assert(offsetof(UBP_FriendsListViewEntry_C, Button_FriendEntry) == 0x000288, "Member 'UBP_FriendsListViewEntry_C::Button_FriendEntry' has a wrong offset!");
static_assert(offsetof(UBP_FriendsListViewEntry_C, Image_123) == 0x000290, "Member 'UBP_FriendsListViewEntry_C::Image_123' has a wrong offset!");
static_assert(offsetof(UBP_FriendsListViewEntry_C, Name_0) == 0x000298, "Member 'UBP_FriendsListViewEntry_C::Name_0' has a wrong offset!");
static_assert(offsetof(UBP_FriendsListViewEntry_C, Overlay_ButtonGamepad) == 0x0002A0, "Member 'UBP_FriendsListViewEntry_C::Overlay_ButtonGamepad' has a wrong offset!");
static_assert(offsetof(UBP_FriendsListViewEntry_C, Player) == 0x0002A8, "Member 'UBP_FriendsListViewEntry_C::Player' has a wrong offset!");
static_assert(offsetof(UBP_FriendsListViewEntry_C, DefaultPlayer) == 0x000308, "Member 'UBP_FriendsListViewEntry_C::DefaultPlayer' has a wrong offset!");
static_assert(offsetof(UBP_FriendsListViewEntry_C, FriendsMainPage) == 0x000368, "Member 'UBP_FriendsListViewEntry_C::FriendsMainPage' has a wrong offset!");
static_assert(offsetof(UBP_FriendsListViewEntry_C, Options) == 0x000370, "Member 'UBP_FriendsListViewEntry_C::Options' has a wrong offset!");
static_assert(offsetof(UBP_FriendsListViewEntry_C, GameInstance) == 0x0003C0, "Member 'UBP_FriendsListViewEntry_C::GameInstance' has a wrong offset!");
static_assert(offsetof(UBP_FriendsListViewEntry_C, EListType) == 0x0003C8, "Member 'UBP_FriendsListViewEntry_C::EListType' has a wrong offset!");
static_assert(offsetof(UBP_FriendsListViewEntry_C, BP_FriendsListEntryData) == 0x0003D0, "Member 'UBP_FriendsListViewEntry_C::BP_FriendsListEntryData' has a wrong offset!");
static_assert(offsetof(UBP_FriendsListViewEntry_C, ContextOptions) == 0x0003D8, "Member 'UBP_FriendsListViewEntry_C::ContextOptions' has a wrong offset!");

}

