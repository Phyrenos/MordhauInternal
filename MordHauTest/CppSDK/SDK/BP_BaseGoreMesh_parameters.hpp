﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_BaseGoreMesh

#include "Basic.hpp"


namespace SDK::Params
{

// Function BP_BaseGoreMesh.BP_BaseGoreMesh_C.ExecuteUbergraph_BP_BaseGoreMesh
// 0x0010 (0x0010 - 0x0000)
struct BP_BaseGoreMesh_C_ExecuteUbergraph_BP_BaseGoreMesh final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UParticleSystemComponent*               K2Node_ComponentBoundEvent_PSystem;                // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_BaseGoreMesh_C_ExecuteUbergraph_BP_BaseGoreMesh) == 0x000008, "Wrong alignment on BP_BaseGoreMesh_C_ExecuteUbergraph_BP_BaseGoreMesh");
static_assert(sizeof(BP_BaseGoreMesh_C_ExecuteUbergraph_BP_BaseGoreMesh) == 0x000010, "Wrong size on BP_BaseGoreMesh_C_ExecuteUbergraph_BP_BaseGoreMesh");
static_assert(offsetof(BP_BaseGoreMesh_C_ExecuteUbergraph_BP_BaseGoreMesh, EntryPoint) == 0x000000, "Member 'BP_BaseGoreMesh_C_ExecuteUbergraph_BP_BaseGoreMesh::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_BaseGoreMesh_C_ExecuteUbergraph_BP_BaseGoreMesh, K2Node_ComponentBoundEvent_PSystem) == 0x000008, "Member 'BP_BaseGoreMesh_C_ExecuteUbergraph_BP_BaseGoreMesh::K2Node_ComponentBoundEvent_PSystem' has a wrong offset!");

// Function BP_BaseGoreMesh.BP_BaseGoreMesh_C.BndEvt__Particle_K2Node_ComponentBoundEvent_1_OnSystemFinished__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct BP_BaseGoreMesh_C_BndEvt__Particle_K2Node_ComponentBoundEvent_1_OnSystemFinished__DelegateSignature final
{
public:
	class UParticleSystemComponent*               PSystem;                                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_BaseGoreMesh_C_BndEvt__Particle_K2Node_ComponentBoundEvent_1_OnSystemFinished__DelegateSignature) == 0x000008, "Wrong alignment on BP_BaseGoreMesh_C_BndEvt__Particle_K2Node_ComponentBoundEvent_1_OnSystemFinished__DelegateSignature");
static_assert(sizeof(BP_BaseGoreMesh_C_BndEvt__Particle_K2Node_ComponentBoundEvent_1_OnSystemFinished__DelegateSignature) == 0x000008, "Wrong size on BP_BaseGoreMesh_C_BndEvt__Particle_K2Node_ComponentBoundEvent_1_OnSystemFinished__DelegateSignature");
static_assert(offsetof(BP_BaseGoreMesh_C_BndEvt__Particle_K2Node_ComponentBoundEvent_1_OnSystemFinished__DelegateSignature, PSystem) == 0x000000, "Member 'BP_BaseGoreMesh_C_BndEvt__Particle_K2Node_ComponentBoundEvent_1_OnSystemFinished__DelegateSignature::PSystem' has a wrong offset!");

}

