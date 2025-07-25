﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_crucifixDagger

#include "Basic.hpp"

#include "BP_MordhauEquipmentPart_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_crucifixDagger.BP_crucifixDagger_C
// 0x0008 (0x0090 - 0x0088)
class UBP_crucifixDagger_C final : public UBP_MordhauEquipmentPart_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0088(0x0008)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)

public:
	void ExecuteUbergraph_BP_crucifixDagger(int32 EntryPoint);
	void ReceiveTick(float DeltaSeconds);
	void ReceiveActorBeginOverlap(class AActor* OtherActor);
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_crucifixDagger_C">();
	}
	static class UBP_crucifixDagger_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_crucifixDagger_C>();
	}
};
static_assert(alignof(UBP_crucifixDagger_C) == 0x000008, "Wrong alignment on UBP_crucifixDagger_C");
static_assert(sizeof(UBP_crucifixDagger_C) == 0x000090, "Wrong size on UBP_crucifixDagger_C");
static_assert(offsetof(UBP_crucifixDagger_C, UberGraphFrame) == 0x000088, "Member 'UBP_crucifixDagger_C::UberGraphFrame' has a wrong offset!");

}

