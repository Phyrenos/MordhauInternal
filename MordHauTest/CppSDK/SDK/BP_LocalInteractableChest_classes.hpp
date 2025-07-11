﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_LocalInteractableChest

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_LocalCooldownInteractable_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_LocalInteractableChest.BP_LocalInteractableChest_C
// 0x0030 (0x0440 - 0x0410)
#pragma pack(push, 0x1)
class alignas(0x10) ABP_LocalInteractableChest_C : public ABP_LocalCooldownInteractable_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_LocalInteractableChest_C;        // 0x0410(0x0008)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UAudioComponent*                        Audio;                                             // 0x0418(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   ContentsMesh;                                      // 0x0420(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          Box;                                               // 0x0428(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 BoxMesh;                                           // 0x0430(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_LocalInteractableChest(int32 EntryPoint);
	void Depleted();
	void Refilled();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_LocalInteractableChest_C">();
	}
	static class ABP_LocalInteractableChest_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_LocalInteractableChest_C>();
	}
};
#pragma pack(pop)
static_assert(alignof(ABP_LocalInteractableChest_C) == 0x000010, "Wrong alignment on ABP_LocalInteractableChest_C");
static_assert(sizeof(ABP_LocalInteractableChest_C) == 0x000440, "Wrong size on ABP_LocalInteractableChest_C");
static_assert(offsetof(ABP_LocalInteractableChest_C, UberGraphFrame_BP_LocalInteractableChest_C) == 0x000410, "Member 'ABP_LocalInteractableChest_C::UberGraphFrame_BP_LocalInteractableChest_C' has a wrong offset!");
static_assert(offsetof(ABP_LocalInteractableChest_C, Audio) == 0x000418, "Member 'ABP_LocalInteractableChest_C::Audio' has a wrong offset!");
static_assert(offsetof(ABP_LocalInteractableChest_C, ContentsMesh) == 0x000420, "Member 'ABP_LocalInteractableChest_C::ContentsMesh' has a wrong offset!");
static_assert(offsetof(ABP_LocalInteractableChest_C, Box) == 0x000428, "Member 'ABP_LocalInteractableChest_C::Box' has a wrong offset!");
static_assert(offsetof(ABP_LocalInteractableChest_C, BoxMesh) == 0x000430, "Member 'ABP_LocalInteractableChest_C::BoxMesh' has a wrong offset!");

}

