﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_DeathBarrier

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "BP_MordhauActor_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_DeathBarrier.BP_DeathBarrier_C
// 0x0020 (0x0400 - 0x03E0)
class ABP_DeathBarrier_C final : public ABP_MordhauActor_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03E0(0x0008)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UBoxComponent*                          Kill;                                              // 0x03E8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Kill_Extents;                                      // 0x03F0(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_DeathBarrier(int32 EntryPoint);
	void BndEvt__BP_FlameBarrier_Kill_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_DeathBarrier_C">();
	}
	static class ABP_DeathBarrier_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_DeathBarrier_C>();
	}
};
static_assert(alignof(ABP_DeathBarrier_C) == 0x000010, "Wrong alignment on ABP_DeathBarrier_C");
static_assert(sizeof(ABP_DeathBarrier_C) == 0x000400, "Wrong size on ABP_DeathBarrier_C");
static_assert(offsetof(ABP_DeathBarrier_C, UberGraphFrame) == 0x0003E0, "Member 'ABP_DeathBarrier_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_DeathBarrier_C, Kill) == 0x0003E8, "Member 'ABP_DeathBarrier_C::Kill' has a wrong offset!");
static_assert(offsetof(ABP_DeathBarrier_C, Kill_Extents) == 0x0003F0, "Member 'ABP_DeathBarrier_C::Kill_Extents' has a wrong offset!");

}

