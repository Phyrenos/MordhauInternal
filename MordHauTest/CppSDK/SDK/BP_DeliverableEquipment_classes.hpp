﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_DeliverableEquipment

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Mordhau_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_DeliverableEquipment.BP_DeliverableEquipment_C
// 0x0030 (0x0D60 - 0x0D30)
#pragma pack(push, 0x1)
class alignas(0x10) ABP_DeliverableEquipment_C : public AMordhauEquipment
{
public:
	uint8                                         Pad_D28[0x8];                                      // 0x0D28(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0D30(0x0008)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UBoxComponent*                          DeliverableCollision;                              // 0x0D38(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          Consumed;                                          // 0x0D40(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          MustThrow;                                         // 0x0D41(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          DestroysOnDelivery;                                // 0x0D42(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_D43[0x5];                                      // 0x0D43(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class AMordhauPlayerController*               LastEquippedByPlayerController;                    // 0x0D48(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Broke;                                             // 0x0D50(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	uint8                                         UsableByTeam;                                      // 0x0D51(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_D52[0x2];                                      // 0x0D52(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Type;                                              // 0x0D54(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_DeliverableEquipment(int32 EntryPoint);
	void OnHeldInteractionStart(class AMordhauCharacter* Character);
	void OnBroken();
	void OnPickedUp(class AMordhauCharacter* Character);
	void FireProjectile(const struct FVector& Origin, const struct FRotator& Orientation, class AController* OwningController, float ExpectedDelay);
	void OnThud();
	void UserConstructionScript();
	void Consume();
	void OnRep_Broke();
	void Break();

	bool CanHeldInteract(class AMordhauCharacter* Character) const;
	bool CanInteract(class AMordhauCharacter* Character) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_DeliverableEquipment_C">();
	}
	static class ABP_DeliverableEquipment_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_DeliverableEquipment_C>();
	}
};
#pragma pack(pop)
static_assert(alignof(ABP_DeliverableEquipment_C) == 0x000010, "Wrong alignment on ABP_DeliverableEquipment_C");
static_assert(sizeof(ABP_DeliverableEquipment_C) == 0x000D60, "Wrong size on ABP_DeliverableEquipment_C");
static_assert(offsetof(ABP_DeliverableEquipment_C, UberGraphFrame) == 0x000D30, "Member 'ABP_DeliverableEquipment_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_DeliverableEquipment_C, DeliverableCollision) == 0x000D38, "Member 'ABP_DeliverableEquipment_C::DeliverableCollision' has a wrong offset!");
static_assert(offsetof(ABP_DeliverableEquipment_C, Consumed) == 0x000D40, "Member 'ABP_DeliverableEquipment_C::Consumed' has a wrong offset!");
static_assert(offsetof(ABP_DeliverableEquipment_C, MustThrow) == 0x000D41, "Member 'ABP_DeliverableEquipment_C::MustThrow' has a wrong offset!");
static_assert(offsetof(ABP_DeliverableEquipment_C, DestroysOnDelivery) == 0x000D42, "Member 'ABP_DeliverableEquipment_C::DestroysOnDelivery' has a wrong offset!");
static_assert(offsetof(ABP_DeliverableEquipment_C, LastEquippedByPlayerController) == 0x000D48, "Member 'ABP_DeliverableEquipment_C::LastEquippedByPlayerController' has a wrong offset!");
static_assert(offsetof(ABP_DeliverableEquipment_C, Broke) == 0x000D50, "Member 'ABP_DeliverableEquipment_C::Broke' has a wrong offset!");
static_assert(offsetof(ABP_DeliverableEquipment_C, UsableByTeam) == 0x000D51, "Member 'ABP_DeliverableEquipment_C::UsableByTeam' has a wrong offset!");
static_assert(offsetof(ABP_DeliverableEquipment_C, Type) == 0x000D54, "Member 'ABP_DeliverableEquipment_C::Type' has a wrong offset!");

}

