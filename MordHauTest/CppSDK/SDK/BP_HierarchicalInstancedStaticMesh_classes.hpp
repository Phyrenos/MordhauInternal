﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_HierarchicalInstancedStaticMesh

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_HierarchicalInstancedStaticMesh.BP_HierarchicalInstancedStaticMesh_C
// 0x0020 (0x0240 - 0x0220)
class ABP_HierarchicalInstancedStaticMesh_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0220(0x0008)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UHierarchicalInstancedStaticMeshComponent* HierarchicalInstancedStaticMesh;                   // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0230(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	int32                                         RandomSeed;                                        // 0x0238(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_HierarchicalInstancedStaticMesh(int32 EntryPoint);
	void SplitInstances();
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_HierarchicalInstancedStaticMesh_C">();
	}
	static class ABP_HierarchicalInstancedStaticMesh_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_HierarchicalInstancedStaticMesh_C>();
	}
};
static_assert(alignof(ABP_HierarchicalInstancedStaticMesh_C) == 0x000008, "Wrong alignment on ABP_HierarchicalInstancedStaticMesh_C");
static_assert(sizeof(ABP_HierarchicalInstancedStaticMesh_C) == 0x000240, "Wrong size on ABP_HierarchicalInstancedStaticMesh_C");
static_assert(offsetof(ABP_HierarchicalInstancedStaticMesh_C, UberGraphFrame) == 0x000220, "Member 'ABP_HierarchicalInstancedStaticMesh_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_HierarchicalInstancedStaticMesh_C, HierarchicalInstancedStaticMesh) == 0x000228, "Member 'ABP_HierarchicalInstancedStaticMesh_C::HierarchicalInstancedStaticMesh' has a wrong offset!");
static_assert(offsetof(ABP_HierarchicalInstancedStaticMesh_C, DefaultSceneRoot) == 0x000230, "Member 'ABP_HierarchicalInstancedStaticMesh_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_HierarchicalInstancedStaticMesh_C, RandomSeed) == 0x000238, "Member 'ABP_HierarchicalInstancedStaticMesh_C::RandomSeed' has a wrong offset!");

}

