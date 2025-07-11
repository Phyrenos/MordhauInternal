﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_DemonHordeDeliverable

#include "Basic.hpp"

#include "BP_2HDeliverable_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_DemonHordeDeliverable.BP_DemonHordeDeliverable_C
// 0x0020 (0x0D80 - 0x0D60)
class ABP_DemonHordeDeliverable_C final : public ABP_2HDeliverable_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_DemonHordeDeliverable_C;         // 0x0D58(0x0008)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UMordhauWidgetComponent*                MordhauWidget;                                     // 0x0D60(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                         ActivateOnStage;                                   // 0x0D68(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_D69[0x7];                                      // 0x0D69(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UParticleSystem*                        BeakingParticle;                                   // 0x0D70(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_DemonHordeDeliverable(int32 EntryPoint);
	void InitialPickupActivationMulti();
	void SetActivationMulti(uint8 CurrentStage);
	void CheckCorrectStage();
	void ReceiveBeginPlay();
	void Activate();
	void Disable();
	void OnPickedUp(class AMordhauCharacter* Character);
	void OnBroken();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_DemonHordeDeliverable_C">();
	}
	static class ABP_DemonHordeDeliverable_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_DemonHordeDeliverable_C>();
	}
};
static_assert(alignof(ABP_DemonHordeDeliverable_C) == 0x000010, "Wrong alignment on ABP_DemonHordeDeliverable_C");
static_assert(sizeof(ABP_DemonHordeDeliverable_C) == 0x000D80, "Wrong size on ABP_DemonHordeDeliverable_C");
static_assert(offsetof(ABP_DemonHordeDeliverable_C, UberGraphFrame_BP_DemonHordeDeliverable_C) == 0x000D58, "Member 'ABP_DemonHordeDeliverable_C::UberGraphFrame_BP_DemonHordeDeliverable_C' has a wrong offset!");
static_assert(offsetof(ABP_DemonHordeDeliverable_C, MordhauWidget) == 0x000D60, "Member 'ABP_DemonHordeDeliverable_C::MordhauWidget' has a wrong offset!");
static_assert(offsetof(ABP_DemonHordeDeliverable_C, ActivateOnStage) == 0x000D68, "Member 'ABP_DemonHordeDeliverable_C::ActivateOnStage' has a wrong offset!");
static_assert(offsetof(ABP_DemonHordeDeliverable_C, BeakingParticle) == 0x000D70, "Member 'ABP_DemonHordeDeliverable_C::BeakingParticle' has a wrong offset!");

}

