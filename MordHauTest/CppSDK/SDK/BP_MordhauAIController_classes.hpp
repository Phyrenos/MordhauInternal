﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_MordhauAIController

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Mordhau_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_MordhauAIController.BP_MordhauAIController_C
// 0x0038 (0x0640 - 0x0608)
class ABP_MordhauAIController_C : public AMordhauAIController
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0608(0x0008)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class FName                                   PerceivesEnemyKey;                                 // 0x0610(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   PerceivesAllyKey;                                  // 0x0618(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   MoveDestinationKey;                                // 0x0620(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   TargetLocationKey;                                 // 0x0628(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBehaviorTree*                          BehaviorTree;                                      // 0x0630(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AMordhauCharacter*                      LastPossessedCharacter;                            // 0x0638(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_MordhauAIController(int32 EntryPoint);
	void OnStoppedPerceivingCharacter(class AAdvancedCharacter* PerceivedCharacter, const struct FPerceptionInfo& PerceptionInfo);
	void OnStartedPerceivingCharacter(class AAdvancedCharacter* PerceivedCharacter, const struct FPerceptionInfo& PerceptionInfo);
	void ReceiveBeginPlay();
	void OnAfterUnPossess();
	void ReceivePossess(class APawn* PossessedPawn);
	void GetTeamFilterClass(class UClass** FilterClass);
	void Filter_Out_Demon_Horde_Cosmetic();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_MordhauAIController_C">();
	}
	static class ABP_MordhauAIController_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_MordhauAIController_C>();
	}
};
static_assert(alignof(ABP_MordhauAIController_C) == 0x000008, "Wrong alignment on ABP_MordhauAIController_C");
static_assert(sizeof(ABP_MordhauAIController_C) == 0x000640, "Wrong size on ABP_MordhauAIController_C");
static_assert(offsetof(ABP_MordhauAIController_C, UberGraphFrame) == 0x000608, "Member 'ABP_MordhauAIController_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_MordhauAIController_C, PerceivesEnemyKey) == 0x000610, "Member 'ABP_MordhauAIController_C::PerceivesEnemyKey' has a wrong offset!");
static_assert(offsetof(ABP_MordhauAIController_C, PerceivesAllyKey) == 0x000618, "Member 'ABP_MordhauAIController_C::PerceivesAllyKey' has a wrong offset!");
static_assert(offsetof(ABP_MordhauAIController_C, MoveDestinationKey) == 0x000620, "Member 'ABP_MordhauAIController_C::MoveDestinationKey' has a wrong offset!");
static_assert(offsetof(ABP_MordhauAIController_C, TargetLocationKey) == 0x000628, "Member 'ABP_MordhauAIController_C::TargetLocationKey' has a wrong offset!");
static_assert(offsetof(ABP_MordhauAIController_C, BehaviorTree) == 0x000630, "Member 'ABP_MordhauAIController_C::BehaviorTree' has a wrong offset!");
static_assert(offsetof(ABP_MordhauAIController_C, LastPossessedCharacter) == 0x000638, "Member 'ABP_MordhauAIController_C::LastPossessedCharacter' has a wrong offset!");

}

