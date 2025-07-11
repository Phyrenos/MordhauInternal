﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_SlaveProgressDriver

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_MordhauActor_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_SlaveProgressDriver.BP_SlaveProgressDriver_C
// 0x0050 (0x0430 - 0x03E0)
class ABP_SlaveProgressDriver_C final : public ABP_MordhauActor_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03E0(0x0008)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UBoxComponent*                          Box;                                               // 0x03E8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 SkeletalMesh;                                      // 0x03F0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         SmoothedValue;                                     // 0x03F8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3FC[0x4];                                      // 0x03FC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               AnimatedMaterial;                                  // 0x0400(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         RaiseSpeed;                                        // 0x0408(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         LowerSpeed;                                        // 0x040C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        CurrentMovementSound;                              // 0x0410(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_ProgressDriver_C*                   MasterCrank;                                       // 0x0418(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveFloat*                            Curve;                                             // 0x0420(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         AnimatedMaterialIndex;                             // 0x0428(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SmoothedValuePostCurve;                            // 0x042C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_SlaveProgressDriver(int32 EntryPoint);
	void OnInteractionStart(class AMordhauCharacter* Character);
	void ReceiveBeginPlay();
	void UpdateProgress(float Progress);

	bool CanInteract(class AMordhauCharacter* Character) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_SlaveProgressDriver_C">();
	}
	static class ABP_SlaveProgressDriver_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_SlaveProgressDriver_C>();
	}
};
static_assert(alignof(ABP_SlaveProgressDriver_C) == 0x000010, "Wrong alignment on ABP_SlaveProgressDriver_C");
static_assert(sizeof(ABP_SlaveProgressDriver_C) == 0x000430, "Wrong size on ABP_SlaveProgressDriver_C");
static_assert(offsetof(ABP_SlaveProgressDriver_C, UberGraphFrame) == 0x0003E0, "Member 'ABP_SlaveProgressDriver_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_SlaveProgressDriver_C, Box) == 0x0003E8, "Member 'ABP_SlaveProgressDriver_C::Box' has a wrong offset!");
static_assert(offsetof(ABP_SlaveProgressDriver_C, SkeletalMesh) == 0x0003F0, "Member 'ABP_SlaveProgressDriver_C::SkeletalMesh' has a wrong offset!");
static_assert(offsetof(ABP_SlaveProgressDriver_C, SmoothedValue) == 0x0003F8, "Member 'ABP_SlaveProgressDriver_C::SmoothedValue' has a wrong offset!");
static_assert(offsetof(ABP_SlaveProgressDriver_C, AnimatedMaterial) == 0x000400, "Member 'ABP_SlaveProgressDriver_C::AnimatedMaterial' has a wrong offset!");
static_assert(offsetof(ABP_SlaveProgressDriver_C, RaiseSpeed) == 0x000408, "Member 'ABP_SlaveProgressDriver_C::RaiseSpeed' has a wrong offset!");
static_assert(offsetof(ABP_SlaveProgressDriver_C, LowerSpeed) == 0x00040C, "Member 'ABP_SlaveProgressDriver_C::LowerSpeed' has a wrong offset!");
static_assert(offsetof(ABP_SlaveProgressDriver_C, CurrentMovementSound) == 0x000410, "Member 'ABP_SlaveProgressDriver_C::CurrentMovementSound' has a wrong offset!");
static_assert(offsetof(ABP_SlaveProgressDriver_C, MasterCrank) == 0x000418, "Member 'ABP_SlaveProgressDriver_C::MasterCrank' has a wrong offset!");
static_assert(offsetof(ABP_SlaveProgressDriver_C, Curve) == 0x000420, "Member 'ABP_SlaveProgressDriver_C::Curve' has a wrong offset!");
static_assert(offsetof(ABP_SlaveProgressDriver_C, AnimatedMaterialIndex) == 0x000428, "Member 'ABP_SlaveProgressDriver_C::AnimatedMaterialIndex' has a wrong offset!");
static_assert(offsetof(ABP_SlaveProgressDriver_C, SmoothedValuePostCurve) == 0x00042C, "Member 'ABP_SlaveProgressDriver_C::SmoothedValuePostCurve' has a wrong offset!");

}

