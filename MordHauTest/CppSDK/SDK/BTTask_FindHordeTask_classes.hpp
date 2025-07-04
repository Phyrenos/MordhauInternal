﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BTTask_FindHordeTask

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AIModule_structs.hpp"
#include "AIModule_classes.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BTTask_FindHordeTask.BTTask_FindHordeTask_C
// 0x0040 (0x00E8 - 0x00A8)
class UBTTask_FindHordeTask_C final : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x00A8(0x0008)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	struct FBlackboardKeySelector                 TargetLocation;                                    // 0x00B0(0x0028)(Edit, BlueprintVisible)
	TArray<struct FVector>                        EnemyPositions;                                    // 0x00D8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_BTTask_FindHordeTask(int32 EntryPoint);
	void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BTTask_FindHordeTask_C">();
	}
	static class UBTTask_FindHordeTask_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBTTask_FindHordeTask_C>();
	}
};
static_assert(alignof(UBTTask_FindHordeTask_C) == 0x000008, "Wrong alignment on UBTTask_FindHordeTask_C");
static_assert(sizeof(UBTTask_FindHordeTask_C) == 0x0000E8, "Wrong size on UBTTask_FindHordeTask_C");
static_assert(offsetof(UBTTask_FindHordeTask_C, UberGraphFrame) == 0x0000A8, "Member 'UBTTask_FindHordeTask_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBTTask_FindHordeTask_C, TargetLocation) == 0x0000B0, "Member 'UBTTask_FindHordeTask_C::TargetLocation' has a wrong offset!");
static_assert(offsetof(UBTTask_FindHordeTask_C, EnemyPositions) == 0x0000D8, "Member 'UBTTask_FindHordeTask_C::EnemyPositions' has a wrong offset!");

}

