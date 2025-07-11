﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Scoreboard

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "E_ScoreboardEntryTypes_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass BP_Scoreboard.BP_Scoreboard_C
// 0x0050 (0x02B0 - 0x0260)
class UBP_Scoreboard_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	TArray<class UBP_ScoreboardTeamEntries_C*>    TeamEntries;                                       // 0x0268(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<class UHorizontalBox*>                 TeamBoxes;                                         // 0x0278(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<int32>                                 PlayerCounts;                                      // 0x0288(0x0010)(Edit, BlueprintVisible)
	TArray<class AMordhauPlayerState*>            Players;                                           // 0x0298(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	E_ScoreboardEntryTypes                        Scoreboard_Entry_Type;                             // 0x02A8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          Use_Gamestate_Entry_Type;                          // 0x02A9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                          Should_Keep_Local_Entry_in_View;                   // 0x02AA(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                          isShowing;                                         // 0x02AB(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bIsUIInput;                                        // 0x02AC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_BP_Scoreboard(int32 EntryPoint);
	void Construct();
	void Refresh_Players_Array();
	void Show();
	void Hide();
	void GetScoreboardTime(class FText* Time);
	void GetTeam1Name(class FText* Text);
	void GetTeamName(int32 Team, class FText* Text);
	void GetTeam2Name(class FText* Text);
	void GetTeamPlayers(int32 Team, class FText* Text);
	void GetTeam1Players(class FText* Text);
	void GetTeam2Players(class FText* Text);
	void GetGameModeName(class FText* Text);
	void GetObjectiveName(class FText* Text);
	void GetTeam1ObjectiveValue(class FText* Text);
	void GetTeam2ObjectiveValue(class FText* Text);
	void GetTeamObjectiveValue(int32 Team, class FText* Text);
	void GetMapName(class FText* Text);
	void GetServerName(class FText* Text);
	void GetMaxPlayers(int32 DivideBy, int32* Text);
	void Refresh(class AMordhauPlayerState* PlayerState);
	void Update();
	void Get_Team_Color(int32 Team, struct FLinearColor* Output__Linear_, struct FSlateColor* Output__Slate_);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Scoreboard_C">();
	}
	static class UBP_Scoreboard_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_Scoreboard_C>();
	}
};
static_assert(alignof(UBP_Scoreboard_C) == 0x000008, "Wrong alignment on UBP_Scoreboard_C");
static_assert(sizeof(UBP_Scoreboard_C) == 0x0002B0, "Wrong size on UBP_Scoreboard_C");
static_assert(offsetof(UBP_Scoreboard_C, UberGraphFrame) == 0x000260, "Member 'UBP_Scoreboard_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_Scoreboard_C, TeamEntries) == 0x000268, "Member 'UBP_Scoreboard_C::TeamEntries' has a wrong offset!");
static_assert(offsetof(UBP_Scoreboard_C, TeamBoxes) == 0x000278, "Member 'UBP_Scoreboard_C::TeamBoxes' has a wrong offset!");
static_assert(offsetof(UBP_Scoreboard_C, PlayerCounts) == 0x000288, "Member 'UBP_Scoreboard_C::PlayerCounts' has a wrong offset!");
static_assert(offsetof(UBP_Scoreboard_C, Players) == 0x000298, "Member 'UBP_Scoreboard_C::Players' has a wrong offset!");
static_assert(offsetof(UBP_Scoreboard_C, Scoreboard_Entry_Type) == 0x0002A8, "Member 'UBP_Scoreboard_C::Scoreboard_Entry_Type' has a wrong offset!");
static_assert(offsetof(UBP_Scoreboard_C, Use_Gamestate_Entry_Type) == 0x0002A9, "Member 'UBP_Scoreboard_C::Use_Gamestate_Entry_Type' has a wrong offset!");
static_assert(offsetof(UBP_Scoreboard_C, Should_Keep_Local_Entry_in_View) == 0x0002AA, "Member 'UBP_Scoreboard_C::Should_Keep_Local_Entry_in_View' has a wrong offset!");
static_assert(offsetof(UBP_Scoreboard_C, isShowing) == 0x0002AB, "Member 'UBP_Scoreboard_C::isShowing' has a wrong offset!");
static_assert(offsetof(UBP_Scoreboard_C, bIsUIInput) == 0x0002AC, "Member 'UBP_Scoreboard_C::bIsUIInput' has a wrong offset!");

}

