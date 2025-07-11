﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_DemonHordeTorchPit

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_ItemDeliverySpawn_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_DemonHordeTorchPit.BP_DemonHordeTorchPit_C
// 0x0030 (0x04B0 - 0x0480)
class ABP_DemonHordeTorchPit_C final : public ABP_ItemDeliverySpawn_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_DemonHordeTorchPit_C;            // 0x0480(0x0008)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class USphereComponent*                       InteractHelper;                                    // 0x0488(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UAudioComponent*                        Audio;                                             // 0x0490(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Wood;                                              // 0x0498(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UParticleSystemComponent*               P_Firepot;                                         // 0x04A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_DemonHordeTorchPit(int32 EntryPoint);
	void OnInteractionStart(class AMordhauCharacter* Character);
	void DeactivateStageObjective(bool* Return_Value);
	void ActivateStageObjective(bool* Return_Value);
	void Activate();
	void Disable();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_DemonHordeTorchPit_C">();
	}
	static class ABP_DemonHordeTorchPit_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_DemonHordeTorchPit_C>();
	}
};
static_assert(alignof(ABP_DemonHordeTorchPit_C) == 0x000010, "Wrong alignment on ABP_DemonHordeTorchPit_C");
static_assert(sizeof(ABP_DemonHordeTorchPit_C) == 0x0004B0, "Wrong size on ABP_DemonHordeTorchPit_C");
static_assert(offsetof(ABP_DemonHordeTorchPit_C, UberGraphFrame_BP_DemonHordeTorchPit_C) == 0x000480, "Member 'ABP_DemonHordeTorchPit_C::UberGraphFrame_BP_DemonHordeTorchPit_C' has a wrong offset!");
static_assert(offsetof(ABP_DemonHordeTorchPit_C, InteractHelper) == 0x000488, "Member 'ABP_DemonHordeTorchPit_C::InteractHelper' has a wrong offset!");
static_assert(offsetof(ABP_DemonHordeTorchPit_C, Audio) == 0x000490, "Member 'ABP_DemonHordeTorchPit_C::Audio' has a wrong offset!");
static_assert(offsetof(ABP_DemonHordeTorchPit_C, Wood) == 0x000498, "Member 'ABP_DemonHordeTorchPit_C::Wood' has a wrong offset!");
static_assert(offsetof(ABP_DemonHordeTorchPit_C, P_Firepot) == 0x0004A0, "Member 'ABP_DemonHordeTorchPit_C::P_Firepot' has a wrong offset!");

}

