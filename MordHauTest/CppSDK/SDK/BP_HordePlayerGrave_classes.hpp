﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_HordePlayerGrave

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Mordhau_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_HordePlayerGrave.BP_HordePlayerGrave_C
// 0x0050 (0x0430 - 0x03E0)
class ABP_HordePlayerGrave_C final : public AMordhauActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03E0(0x0008)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UStaticMeshComponent*                   SM_Horde_PlayerGrave;                              // 0x03E8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UMordhauWidgetComponent*                MordhauWidget;                                     // 0x03F0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class AMordhauPlayerState*                    AssociatedPlayerState;                             // 0x03F8(0x0008)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	uint8                                         ReplicatedLifeSpanSeconds;                         // 0x0400(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_401[0x3];                                      // 0x0401(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         RevivePeriod;                                      // 0x0404(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          BeingInteractedWith;                               // 0x0408(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_409[0x3];                                      // 0x0409(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         AutoReviveTime;                                    // 0x040C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Expired;                                           // 0x0410(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	uint8                                         Pad_411[0x3];                                      // 0x0411(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         WillAutoReviveAtTime;                              // 0x0414(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AMordhauPlayerStart*>            Starts;                                            // 0x0418(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)

public:
	void ExecuteUbergraph_BP_HordePlayerGrave(int32 EntryPoint);
	void ForceRespawn();
	void ReceiveDestroyed();
	void ReceiveBeginPlay();
	void StartAutoReviveTimer();
	void AutoRevive();
	void OnInteractionMaintained(class AMordhauCharacter* Character);
	void OnHeldInteractionStart(class AMordhauCharacter* Character);
	void ReceiveTick(float DeltaSeconds);
	void OnRep_AssociatedPlayerState();
	void OnRep_Expired();

	bool CanInteract(class AMordhauCharacter* Character) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_HordePlayerGrave_C">();
	}
	static class ABP_HordePlayerGrave_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_HordePlayerGrave_C>();
	}
};
static_assert(alignof(ABP_HordePlayerGrave_C) == 0x000010, "Wrong alignment on ABP_HordePlayerGrave_C");
static_assert(sizeof(ABP_HordePlayerGrave_C) == 0x000430, "Wrong size on ABP_HordePlayerGrave_C");
static_assert(offsetof(ABP_HordePlayerGrave_C, UberGraphFrame) == 0x0003E0, "Member 'ABP_HordePlayerGrave_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_HordePlayerGrave_C, SM_Horde_PlayerGrave) == 0x0003E8, "Member 'ABP_HordePlayerGrave_C::SM_Horde_PlayerGrave' has a wrong offset!");
static_assert(offsetof(ABP_HordePlayerGrave_C, MordhauWidget) == 0x0003F0, "Member 'ABP_HordePlayerGrave_C::MordhauWidget' has a wrong offset!");
static_assert(offsetof(ABP_HordePlayerGrave_C, AssociatedPlayerState) == 0x0003F8, "Member 'ABP_HordePlayerGrave_C::AssociatedPlayerState' has a wrong offset!");
static_assert(offsetof(ABP_HordePlayerGrave_C, ReplicatedLifeSpanSeconds) == 0x000400, "Member 'ABP_HordePlayerGrave_C::ReplicatedLifeSpanSeconds' has a wrong offset!");
static_assert(offsetof(ABP_HordePlayerGrave_C, RevivePeriod) == 0x000404, "Member 'ABP_HordePlayerGrave_C::RevivePeriod' has a wrong offset!");
static_assert(offsetof(ABP_HordePlayerGrave_C, BeingInteractedWith) == 0x000408, "Member 'ABP_HordePlayerGrave_C::BeingInteractedWith' has a wrong offset!");
static_assert(offsetof(ABP_HordePlayerGrave_C, AutoReviveTime) == 0x00040C, "Member 'ABP_HordePlayerGrave_C::AutoReviveTime' has a wrong offset!");
static_assert(offsetof(ABP_HordePlayerGrave_C, Expired) == 0x000410, "Member 'ABP_HordePlayerGrave_C::Expired' has a wrong offset!");
static_assert(offsetof(ABP_HordePlayerGrave_C, WillAutoReviveAtTime) == 0x000414, "Member 'ABP_HordePlayerGrave_C::WillAutoReviveAtTime' has a wrong offset!");
static_assert(offsetof(ABP_HordePlayerGrave_C, Starts) == 0x000418, "Member 'ABP_HordePlayerGrave_C::Starts' has a wrong offset!");

}

