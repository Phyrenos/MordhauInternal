﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ClothShoulders

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_MordhauWearable_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_ClothShoulders.BP_ClothShoulders_C
// 0x0008 (0x0230 - 0x0228)
class UBP_ClothShoulders_C final : public UBP_MordhauWearable_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0228(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_BP_ClothShoulders(int32 EntryPoint);
	void ReceiveTick(float DeltaSeconds);
	void ReceiveActorBeginOverlap(class AActor* OtherActor);
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ClothShoulders_C">();
	}
	static class UBP_ClothShoulders_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_ClothShoulders_C>();
	}
};
static_assert(alignof(UBP_ClothShoulders_C) == 0x000008, "Wrong alignment on UBP_ClothShoulders_C");
static_assert(sizeof(UBP_ClothShoulders_C) == 0x000230, "Wrong size on UBP_ClothShoulders_C");
static_assert(offsetof(UBP_ClothShoulders_C, UberGraphFrame) == 0x000228, "Member 'UBP_ClothShoulders_C::UberGraphFrame' has a wrong offset!");

}

