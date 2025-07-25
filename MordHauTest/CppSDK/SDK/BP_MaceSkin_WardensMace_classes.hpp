﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_MaceSkin_WardensMace

#include "Basic.hpp"

#include "BP_MordhauEquipmentPart_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_MaceSkin_WardensMace.BP_MaceSkin_WardensMace_C
// 0x0008 (0x0090 - 0x0088)
class UBP_MaceSkin_WardensMace_C final : public UBP_MordhauEquipmentPart_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0088(0x0008)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)

public:
	void ExecuteUbergraph_BP_MaceSkin_WardensMace(int32 EntryPoint);
	void ReceiveTick(float DeltaSeconds);
	void ReceiveActorBeginOverlap(class AActor* OtherActor);
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_MaceSkin_WardensMace_C">();
	}
	static class UBP_MaceSkin_WardensMace_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_MaceSkin_WardensMace_C>();
	}
};
static_assert(alignof(UBP_MaceSkin_WardensMace_C) == 0x000008, "Wrong alignment on UBP_MaceSkin_WardensMace_C");
static_assert(sizeof(UBP_MaceSkin_WardensMace_C) == 0x000090, "Wrong size on UBP_MaceSkin_WardensMace_C");
static_assert(offsetof(UBP_MaceSkin_WardensMace_C, UberGraphFrame) == 0x000088, "Member 'UBP_MaceSkin_WardensMace_C::UberGraphFrame' has a wrong offset!");

}

