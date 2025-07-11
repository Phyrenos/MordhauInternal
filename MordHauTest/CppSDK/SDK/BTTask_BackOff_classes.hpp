﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BTTask_BackOff

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AIModule_structs.hpp"
#include "AIModule_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BTTask_BackOff.BTTask_BackOff_C
// 0x0020 (0x00C8 - 0x00A8)
class UBTTask_BackOff_C final : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x00A8(0x0008)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	float                                         RightOffset;                                       // 0x00B0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         OriginalAngle;                                     // 0x00B4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          RequiresInitialization;                            // 0x00B8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_B9[0x3];                                       // 0x00B9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         RandomSide;                                        // 0x00BC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Distance;                                          // 0x00C0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BTTask_BackOff(int32 EntryPoint);
	void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BTTask_BackOff_C">();
	}
	static class UBTTask_BackOff_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBTTask_BackOff_C>();
	}
};
static_assert(alignof(UBTTask_BackOff_C) == 0x000008, "Wrong alignment on UBTTask_BackOff_C");
static_assert(sizeof(UBTTask_BackOff_C) == 0x0000C8, "Wrong size on UBTTask_BackOff_C");
static_assert(offsetof(UBTTask_BackOff_C, UberGraphFrame) == 0x0000A8, "Member 'UBTTask_BackOff_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBTTask_BackOff_C, RightOffset) == 0x0000B0, "Member 'UBTTask_BackOff_C::RightOffset' has a wrong offset!");
static_assert(offsetof(UBTTask_BackOff_C, OriginalAngle) == 0x0000B4, "Member 'UBTTask_BackOff_C::OriginalAngle' has a wrong offset!");
static_assert(offsetof(UBTTask_BackOff_C, RequiresInitialization) == 0x0000B8, "Member 'UBTTask_BackOff_C::RequiresInitialization' has a wrong offset!");
static_assert(offsetof(UBTTask_BackOff_C, RandomSide) == 0x0000BC, "Member 'UBTTask_BackOff_C::RandomSide' has a wrong offset!");
static_assert(offsetof(UBTTask_BackOff_C, Distance) == 0x0000C0, "Member 'UBTTask_BackOff_C::Distance' has a wrong offset!");

}

