﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Estoc_FacetedHandle

#include "Basic.hpp"

#include "BP_MordhauEquipmentPart_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Estoc_FacetedHandle.BP_Estoc_FacetedHandle_C
// 0x0008 (0x0090 - 0x0088)
class UBP_Estoc_FacetedHandle_C final : public UBP_MordhauEquipmentPart_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0088(0x0008)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)

public:
	void ExecuteUbergraph_BP_Estoc_FacetedHandle(int32 EntryPoint);
	void ReceiveTick(float DeltaSeconds);
	void ReceiveActorBeginOverlap(class AActor* OtherActor);
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Estoc_FacetedHandle_C">();
	}
	static class UBP_Estoc_FacetedHandle_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_Estoc_FacetedHandle_C>();
	}
};
static_assert(alignof(UBP_Estoc_FacetedHandle_C) == 0x000008, "Wrong alignment on UBP_Estoc_FacetedHandle_C");
static_assert(sizeof(UBP_Estoc_FacetedHandle_C) == 0x000090, "Wrong size on UBP_Estoc_FacetedHandle_C");
static_assert(offsetof(UBP_Estoc_FacetedHandle_C, UberGraphFrame) == 0x000088, "Member 'UBP_Estoc_FacetedHandle_C::UberGraphFrame' has a wrong offset!");

}

