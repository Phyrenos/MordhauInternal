﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BTTask_MoveToDestination

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AIModule_structs.hpp"
#include "AIModule_classes.hpp"
#include "Mordhau_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BTTask_MoveToDestination.BTTask_MoveToDestination_C
// 0x00B0 (0x0158 - 0x00A8)
class UBTTask_MoveToDestination_C final : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x00A8(0x0008)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	struct FBlackboardKeySelector                 TargetActor;                                       // 0x00B0(0x0028)(Edit, BlueprintVisible)
	struct FBlackboardKeySelector                 TargetLocation;                                    // 0x00D8(0x0028)(Edit, BlueprintVisible)
	struct FVector                                LastActorLocation;                                 // 0x0100(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ForceWalk;                                         // 0x010C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_10D[0x3];                                      // 0x010D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         AcceptableRadius;                                  // 0x0110(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CurrentMovementDistance;                           // 0x0114(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CurrentMovementTime;                               // 0x0118(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          UseMidpoint;                                       // 0x011C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_11D[0x3];                                      // 0x011D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                MoveTargetLocation;                                // 0x0120(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_12C[0x4];                                      // 0x012C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_MordhauAIController_C*              MordhauAIController;                               // 0x0130(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_MordhauGameState_C*                 MordhauGameState;                                  // 0x0138(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_MordhauCharacter_C*                 MordhauCharacter;                                  // 0x0140(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CurrentMovementLocation;                           // 0x0148(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bGoToActor;                                        // 0x0154(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_BTTask_MoveToDestination(int32 EntryPoint);
	void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ReceiveAbortAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);
	void SetPath();
	void Init(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ResetTimeAndDistance();
	void GetTargetLoc(struct FVector* TargetLocation_0);
	void ClearTarget();
	void KeepMoving(bool* bKeepMoving);
	void GetFilterClass(class UClass** FilterClass);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BTTask_MoveToDestination_C">();
	}
	static class UBTTask_MoveToDestination_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBTTask_MoveToDestination_C>();
	}
};
static_assert(alignof(UBTTask_MoveToDestination_C) == 0x000008, "Wrong alignment on UBTTask_MoveToDestination_C");
static_assert(sizeof(UBTTask_MoveToDestination_C) == 0x000158, "Wrong size on UBTTask_MoveToDestination_C");
static_assert(offsetof(UBTTask_MoveToDestination_C, UberGraphFrame) == 0x0000A8, "Member 'UBTTask_MoveToDestination_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBTTask_MoveToDestination_C, TargetActor) == 0x0000B0, "Member 'UBTTask_MoveToDestination_C::TargetActor' has a wrong offset!");
static_assert(offsetof(UBTTask_MoveToDestination_C, TargetLocation) == 0x0000D8, "Member 'UBTTask_MoveToDestination_C::TargetLocation' has a wrong offset!");
static_assert(offsetof(UBTTask_MoveToDestination_C, LastActorLocation) == 0x000100, "Member 'UBTTask_MoveToDestination_C::LastActorLocation' has a wrong offset!");
static_assert(offsetof(UBTTask_MoveToDestination_C, ForceWalk) == 0x00010C, "Member 'UBTTask_MoveToDestination_C::ForceWalk' has a wrong offset!");
static_assert(offsetof(UBTTask_MoveToDestination_C, AcceptableRadius) == 0x000110, "Member 'UBTTask_MoveToDestination_C::AcceptableRadius' has a wrong offset!");
static_assert(offsetof(UBTTask_MoveToDestination_C, CurrentMovementDistance) == 0x000114, "Member 'UBTTask_MoveToDestination_C::CurrentMovementDistance' has a wrong offset!");
static_assert(offsetof(UBTTask_MoveToDestination_C, CurrentMovementTime) == 0x000118, "Member 'UBTTask_MoveToDestination_C::CurrentMovementTime' has a wrong offset!");
static_assert(offsetof(UBTTask_MoveToDestination_C, UseMidpoint) == 0x00011C, "Member 'UBTTask_MoveToDestination_C::UseMidpoint' has a wrong offset!");
static_assert(offsetof(UBTTask_MoveToDestination_C, MoveTargetLocation) == 0x000120, "Member 'UBTTask_MoveToDestination_C::MoveTargetLocation' has a wrong offset!");
static_assert(offsetof(UBTTask_MoveToDestination_C, MordhauAIController) == 0x000130, "Member 'UBTTask_MoveToDestination_C::MordhauAIController' has a wrong offset!");
static_assert(offsetof(UBTTask_MoveToDestination_C, MordhauGameState) == 0x000138, "Member 'UBTTask_MoveToDestination_C::MordhauGameState' has a wrong offset!");
static_assert(offsetof(UBTTask_MoveToDestination_C, MordhauCharacter) == 0x000140, "Member 'UBTTask_MoveToDestination_C::MordhauCharacter' has a wrong offset!");
static_assert(offsetof(UBTTask_MoveToDestination_C, CurrentMovementLocation) == 0x000148, "Member 'UBTTask_MoveToDestination_C::CurrentMovementLocation' has a wrong offset!");
static_assert(offsetof(UBTTask_MoveToDestination_C, bGoToActor) == 0x000154, "Member 'UBTTask_MoveToDestination_C::bGoToActor' has a wrong offset!");

}

