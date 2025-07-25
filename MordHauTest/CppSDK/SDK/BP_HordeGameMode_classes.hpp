﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_HordeGameMode

#include "Basic.hpp"

#include "Mordhau_structs.hpp"
#include "STRUCT_HordeWaveInfo_structs.hpp"
#include "Engine_structs.hpp"
#include "STRUCT_HordeEnemyInfo_structs.hpp"
#include "STRUCT_HordeSquadWaveInfo_structs.hpp"
#include "BP_MordhauGameMode_classes.hpp"
#include "STRUCT_HordeWaveSpawningData_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_HordeGameMode.BP_HordeGameMode_C
// 0x0288 (0x0870 - 0x05E8)
class ABP_HordeGameMode_C : public ABP_MordhauGameMode_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_HordeGameMode_C;                 // 0x05E8(0x0008)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	TArray<class ABP_HordeAIController_C*>        AIControllers;                                     // 0x05F0(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class ABP_HordeSpawn_C*>               HordeSpawns;                                       // 0x0600(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	int32                                         Wave;                                              // 0x0610(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          HasStarted;                                        // 0x0614(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_615[0x3];                                      // 0x0615(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         WaveStartTime;                                     // 0x0618(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         WaveEnemySpawnOffset;                              // 0x061C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          WaveHasSpawned;                                    // 0x0620(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_621[0x7];                                      // 0x0621(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FSTRUCT_HordeWaveInfo>          Waves;                                             // 0x0628(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class AAdvancedCharacter*>             SpawnedEnemies;                                    // 0x0638(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	int32                                         EnemiesRemaining;                                  // 0x0648(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_64C[0x4];                                      // 0x064C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<class FName, struct FSTRUCT_HordeEnemyInfo> EnemyDatabase;                                     // 0x0650(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	float                                         DeadWaveCompletionMultiplier;                      // 0x06A0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         TeamKillCoinPunishment;                            // 0x06A4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveFloat*                            ReceivedDamageByPlayerNum;                         // 0x06A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_HordeKillObjective_C*               KillObjectiveCached;                               // 0x06B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ABP_HordeTask_C*>                HordeTasks;                                        // 0x06B8(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	int32                                         TotalAwardedGoldPerPlayer;                         // 0x06C8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6CC[0x4];                                      // 0x06CC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TSet<class FString>                           LeaverPlayFabIDs;                                  // 0x06D0(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	float                                         NewPlayerOnJoinGoldMultiplier;                     // 0x0720(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         MaxNewPlayerOnJoinGold;                            // 0x0724(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<class FName, struct FArrayOfActor>       EnemyVariantCustomizationActor;                    // 0x0728(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FSTRUCT_HordeSquadWaveInfo>     SquadWaves;                                        // 0x0778(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class USquadInfo*>                     SquadsToSpawnInWave;                               // 0x0788(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSTRUCT_HordeWaveSpawningData          WaveSpawningData;                                  // 0x0798(0x0038)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                          IsSquadSpawningEnabled;                            // 0x07D0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7D1[0x7];                                      // 0x07D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class USquadInfo*>                     SquadDatabase;                                     // 0x07D8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	float                                         MinPlayerDifficultyModifier;                       // 0x07E8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         MaxPlayerDifficultyModifier;                       // 0x07EC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         MaxEnemiesInWave;                                  // 0x07F0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         MinPlayerDelayModifier;                            // 0x07F4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         MaxPlayerDelayModifier;                            // 0x07F8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         EnemiesSpawned;                                    // 0x07FC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ABP_HordePlayerGrave_C*>         Graves;                                            // 0x0800(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	float                                         RoundReceivedDamageModifier;                       // 0x0810(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_814[0x4];                                      // 0x0814(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<int32, int32>                            SquadMembersRemaining;                             // 0x0818(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	float                                         ConsoleDifficultyModifier;                         // 0x0868(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ConsoleDelayModifier;                              // 0x086C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_HordeGameMode(int32 EntryPoint);
	void K2_OnLogout(class AController* ExitingController);
	void K2_PostLogin(class APlayerController* NewPlayer);
	void OnKilled(class AController* Killer, class AController* KilledPlayer, class APawn* KilledPawn, EMordhauDamageType Type, uint8 SubType, class AActor* DamageSource, class AActor* DamageAgent);
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void SpawnWave();
	void StartHordeMatch();
	void ProgressWave();
	void SetupCustomizationReplicationActors();
	void PrepareAIControllers();
	void SpawnEquipmentFor(TArray<class UClass*>& EquipList, class AMordhauCharacter* Char);
	void TriggerDefeat();
	void HandlePostLogin(class APlayerController* Controller);
	void SpawnSquadWave();
	void Find_Squad(float MinDifficulty, class USquadInfo** SquadInfo);
	void Generate_Squads_in_Wave();
	void SpawnSquad(class USquadInfo* SquadToSpawn, float DefaultDelay, float ModifiedDelay);
	void ClearSquadWaveSpawningData();
	void Sort_by_Squad_Difficulty(class UObject* ObjA, class UObject* ObjB, bool* RetVal);
	void GetDifficultyRatio(float* DifficultyModifier, int32* AmountOfPlayers);
	void GetSpawnDelayRatio(float* DelayModifier, int32* AmountOfPlayers);
	void SortBySpawnOrderWeightMagnitude(class UObject* ObjA, class UObject* ObjB, bool* RetVal);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_HordeGameMode_C">();
	}
	static class ABP_HordeGameMode_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_HordeGameMode_C>();
	}
};
static_assert(alignof(ABP_HordeGameMode_C) == 0x000008, "Wrong alignment on ABP_HordeGameMode_C");
static_assert(sizeof(ABP_HordeGameMode_C) == 0x000870, "Wrong size on ABP_HordeGameMode_C");
static_assert(offsetof(ABP_HordeGameMode_C, UberGraphFrame_BP_HordeGameMode_C) == 0x0005E8, "Member 'ABP_HordeGameMode_C::UberGraphFrame_BP_HordeGameMode_C' has a wrong offset!");
static_assert(offsetof(ABP_HordeGameMode_C, AIControllers) == 0x0005F0, "Member 'ABP_HordeGameMode_C::AIControllers' has a wrong offset!");
static_assert(offsetof(ABP_HordeGameMode_C, HordeSpawns) == 0x000600, "Member 'ABP_HordeGameMode_C::HordeSpawns' has a wrong offset!");
static_assert(offsetof(ABP_HordeGameMode_C, Wave) == 0x000610, "Member 'ABP_HordeGameMode_C::Wave' has a wrong offset!");
static_assert(offsetof(ABP_HordeGameMode_C, HasStarted) == 0x000614, "Member 'ABP_HordeGameMode_C::HasStarted' has a wrong offset!");
static_assert(offsetof(ABP_HordeGameMode_C, WaveStartTime) == 0x000618, "Member 'ABP_HordeGameMode_C::WaveStartTime' has a wrong offset!");
static_assert(offsetof(ABP_HordeGameMode_C, WaveEnemySpawnOffset) == 0x00061C, "Member 'ABP_HordeGameMode_C::WaveEnemySpawnOffset' has a wrong offset!");
static_assert(offsetof(ABP_HordeGameMode_C, WaveHasSpawned) == 0x000620, "Member 'ABP_HordeGameMode_C::WaveHasSpawned' has a wrong offset!");
static_assert(offsetof(ABP_HordeGameMode_C, Waves) == 0x000628, "Member 'ABP_HordeGameMode_C::Waves' has a wrong offset!");
static_assert(offsetof(ABP_HordeGameMode_C, SpawnedEnemies) == 0x000638, "Member 'ABP_HordeGameMode_C::SpawnedEnemies' has a wrong offset!");
static_assert(offsetof(ABP_HordeGameMode_C, EnemiesRemaining) == 0x000648, "Member 'ABP_HordeGameMode_C::EnemiesRemaining' has a wrong offset!");
static_assert(offsetof(ABP_HordeGameMode_C, EnemyDatabase) == 0x000650, "Member 'ABP_HordeGameMode_C::EnemyDatabase' has a wrong offset!");
static_assert(offsetof(ABP_HordeGameMode_C, DeadWaveCompletionMultiplier) == 0x0006A0, "Member 'ABP_HordeGameMode_C::DeadWaveCompletionMultiplier' has a wrong offset!");
static_assert(offsetof(ABP_HordeGameMode_C, TeamKillCoinPunishment) == 0x0006A4, "Member 'ABP_HordeGameMode_C::TeamKillCoinPunishment' has a wrong offset!");
static_assert(offsetof(ABP_HordeGameMode_C, ReceivedDamageByPlayerNum) == 0x0006A8, "Member 'ABP_HordeGameMode_C::ReceivedDamageByPlayerNum' has a wrong offset!");
static_assert(offsetof(ABP_HordeGameMode_C, KillObjectiveCached) == 0x0006B0, "Member 'ABP_HordeGameMode_C::KillObjectiveCached' has a wrong offset!");
static_assert(offsetof(ABP_HordeGameMode_C, HordeTasks) == 0x0006B8, "Member 'ABP_HordeGameMode_C::HordeTasks' has a wrong offset!");
static_assert(offsetof(ABP_HordeGameMode_C, TotalAwardedGoldPerPlayer) == 0x0006C8, "Member 'ABP_HordeGameMode_C::TotalAwardedGoldPerPlayer' has a wrong offset!");
static_assert(offsetof(ABP_HordeGameMode_C, LeaverPlayFabIDs) == 0x0006D0, "Member 'ABP_HordeGameMode_C::LeaverPlayFabIDs' has a wrong offset!");
static_assert(offsetof(ABP_HordeGameMode_C, NewPlayerOnJoinGoldMultiplier) == 0x000720, "Member 'ABP_HordeGameMode_C::NewPlayerOnJoinGoldMultiplier' has a wrong offset!");
static_assert(offsetof(ABP_HordeGameMode_C, MaxNewPlayerOnJoinGold) == 0x000724, "Member 'ABP_HordeGameMode_C::MaxNewPlayerOnJoinGold' has a wrong offset!");
static_assert(offsetof(ABP_HordeGameMode_C, EnemyVariantCustomizationActor) == 0x000728, "Member 'ABP_HordeGameMode_C::EnemyVariantCustomizationActor' has a wrong offset!");
static_assert(offsetof(ABP_HordeGameMode_C, SquadWaves) == 0x000778, "Member 'ABP_HordeGameMode_C::SquadWaves' has a wrong offset!");
static_assert(offsetof(ABP_HordeGameMode_C, SquadsToSpawnInWave) == 0x000788, "Member 'ABP_HordeGameMode_C::SquadsToSpawnInWave' has a wrong offset!");
static_assert(offsetof(ABP_HordeGameMode_C, WaveSpawningData) == 0x000798, "Member 'ABP_HordeGameMode_C::WaveSpawningData' has a wrong offset!");
static_assert(offsetof(ABP_HordeGameMode_C, IsSquadSpawningEnabled) == 0x0007D0, "Member 'ABP_HordeGameMode_C::IsSquadSpawningEnabled' has a wrong offset!");
static_assert(offsetof(ABP_HordeGameMode_C, SquadDatabase) == 0x0007D8, "Member 'ABP_HordeGameMode_C::SquadDatabase' has a wrong offset!");
static_assert(offsetof(ABP_HordeGameMode_C, MinPlayerDifficultyModifier) == 0x0007E8, "Member 'ABP_HordeGameMode_C::MinPlayerDifficultyModifier' has a wrong offset!");
static_assert(offsetof(ABP_HordeGameMode_C, MaxPlayerDifficultyModifier) == 0x0007EC, "Member 'ABP_HordeGameMode_C::MaxPlayerDifficultyModifier' has a wrong offset!");
static_assert(offsetof(ABP_HordeGameMode_C, MaxEnemiesInWave) == 0x0007F0, "Member 'ABP_HordeGameMode_C::MaxEnemiesInWave' has a wrong offset!");
static_assert(offsetof(ABP_HordeGameMode_C, MinPlayerDelayModifier) == 0x0007F4, "Member 'ABP_HordeGameMode_C::MinPlayerDelayModifier' has a wrong offset!");
static_assert(offsetof(ABP_HordeGameMode_C, MaxPlayerDelayModifier) == 0x0007F8, "Member 'ABP_HordeGameMode_C::MaxPlayerDelayModifier' has a wrong offset!");
static_assert(offsetof(ABP_HordeGameMode_C, EnemiesSpawned) == 0x0007FC, "Member 'ABP_HordeGameMode_C::EnemiesSpawned' has a wrong offset!");
static_assert(offsetof(ABP_HordeGameMode_C, Graves) == 0x000800, "Member 'ABP_HordeGameMode_C::Graves' has a wrong offset!");
static_assert(offsetof(ABP_HordeGameMode_C, RoundReceivedDamageModifier) == 0x000810, "Member 'ABP_HordeGameMode_C::RoundReceivedDamageModifier' has a wrong offset!");
static_assert(offsetof(ABP_HordeGameMode_C, SquadMembersRemaining) == 0x000818, "Member 'ABP_HordeGameMode_C::SquadMembersRemaining' has a wrong offset!");
static_assert(offsetof(ABP_HordeGameMode_C, ConsoleDifficultyModifier) == 0x000868, "Member 'ABP_HordeGameMode_C::ConsoleDifficultyModifier' has a wrong offset!");
static_assert(offsetof(ABP_HordeGameMode_C, ConsoleDelayModifier) == 0x00086C, "Member 'ABP_HordeGameMode_C::ConsoleDelayModifier' has a wrong offset!");

}

