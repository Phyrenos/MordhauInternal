﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_HierarchicalInstancedStaticMesh

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BP_HierarchicalInstancedStaticMesh.BP_HierarchicalInstancedStaticMesh_C.ExecuteUbergraph_BP_HierarchicalInstancedStaticMesh
// 0x0090 (0x0090 - 0x0000)
struct BP_HierarchicalInstancedStaticMesh_C_ExecuteUbergraph_BP_HierarchicalInstancedStaticMesh final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetInstanceCount_ReturnValue;             // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                     CallFunc_GetMaterial_ReturnValue;                  // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetNumMaterials_ReturnValue;              // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_29[0x3];                                       // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Subtract_IntInt_ReturnValue_1;            // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue_1;           // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_31[0xF];                                       // 0x0031(0x000F)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_GetInstanceTransform_OutInstanceTransform; // 0x0040(0x0030)(IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetInstanceTransform_ReturnValue;         // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_71[0x7];                                       // 0x0071(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AStaticMeshActor*                       CallFunc_FinishSpawningActor_ReturnValue;          // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_SetStaticMesh_ReturnValue;                // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_HierarchicalInstancedStaticMesh_C_ExecuteUbergraph_BP_HierarchicalInstancedStaticMesh) == 0x000010, "Wrong alignment on BP_HierarchicalInstancedStaticMesh_C_ExecuteUbergraph_BP_HierarchicalInstancedStaticMesh");
static_assert(sizeof(BP_HierarchicalInstancedStaticMesh_C_ExecuteUbergraph_BP_HierarchicalInstancedStaticMesh) == 0x000090, "Wrong size on BP_HierarchicalInstancedStaticMesh_C_ExecuteUbergraph_BP_HierarchicalInstancedStaticMesh");
static_assert(offsetof(BP_HierarchicalInstancedStaticMesh_C_ExecuteUbergraph_BP_HierarchicalInstancedStaticMesh, EntryPoint) == 0x000000, "Member 'BP_HierarchicalInstancedStaticMesh_C_ExecuteUbergraph_BP_HierarchicalInstancedStaticMesh::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_HierarchicalInstancedStaticMesh_C_ExecuteUbergraph_BP_HierarchicalInstancedStaticMesh, Temp_int_Variable) == 0x000004, "Member 'BP_HierarchicalInstancedStaticMesh_C_ExecuteUbergraph_BP_HierarchicalInstancedStaticMesh::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(BP_HierarchicalInstancedStaticMesh_C_ExecuteUbergraph_BP_HierarchicalInstancedStaticMesh, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'BP_HierarchicalInstancedStaticMesh_C_ExecuteUbergraph_BP_HierarchicalInstancedStaticMesh::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_HierarchicalInstancedStaticMesh_C_ExecuteUbergraph_BP_HierarchicalInstancedStaticMesh, Temp_int_Variable_1) == 0x00000C, "Member 'BP_HierarchicalInstancedStaticMesh_C_ExecuteUbergraph_BP_HierarchicalInstancedStaticMesh::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_HierarchicalInstancedStaticMesh_C_ExecuteUbergraph_BP_HierarchicalInstancedStaticMesh, CallFunc_Add_IntInt_ReturnValue_1) == 0x000010, "Member 'BP_HierarchicalInstancedStaticMesh_C_ExecuteUbergraph_BP_HierarchicalInstancedStaticMesh::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_HierarchicalInstancedStaticMesh_C_ExecuteUbergraph_BP_HierarchicalInstancedStaticMesh, CallFunc_GetInstanceCount_ReturnValue) == 0x000014, "Member 'BP_HierarchicalInstancedStaticMesh_C_ExecuteUbergraph_BP_HierarchicalInstancedStaticMesh::CallFunc_GetInstanceCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_HierarchicalInstancedStaticMesh_C_ExecuteUbergraph_BP_HierarchicalInstancedStaticMesh, CallFunc_GetMaterial_ReturnValue) == 0x000018, "Member 'BP_HierarchicalInstancedStaticMesh_C_ExecuteUbergraph_BP_HierarchicalInstancedStaticMesh::CallFunc_GetMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_HierarchicalInstancedStaticMesh_C_ExecuteUbergraph_BP_HierarchicalInstancedStaticMesh, CallFunc_Subtract_IntInt_ReturnValue) == 0x000020, "Member 'BP_HierarchicalInstancedStaticMesh_C_ExecuteUbergraph_BP_HierarchicalInstancedStaticMesh::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_HierarchicalInstancedStaticMesh_C_ExecuteUbergraph_BP_HierarchicalInstancedStaticMesh, CallFunc_GetNumMaterials_ReturnValue) == 0x000024, "Member 'BP_HierarchicalInstancedStaticMesh_C_ExecuteUbergraph_BP_HierarchicalInstancedStaticMesh::CallFunc_GetNumMaterials_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_HierarchicalInstancedStaticMesh_C_ExecuteUbergraph_BP_HierarchicalInstancedStaticMesh, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000028, "Member 'BP_HierarchicalInstancedStaticMesh_C_ExecuteUbergraph_BP_HierarchicalInstancedStaticMesh::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_HierarchicalInstancedStaticMesh_C_ExecuteUbergraph_BP_HierarchicalInstancedStaticMesh, CallFunc_Subtract_IntInt_ReturnValue_1) == 0x00002C, "Member 'BP_HierarchicalInstancedStaticMesh_C_ExecuteUbergraph_BP_HierarchicalInstancedStaticMesh::CallFunc_Subtract_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_HierarchicalInstancedStaticMesh_C_ExecuteUbergraph_BP_HierarchicalInstancedStaticMesh, CallFunc_LessEqual_IntInt_ReturnValue_1) == 0x000030, "Member 'BP_HierarchicalInstancedStaticMesh_C_ExecuteUbergraph_BP_HierarchicalInstancedStaticMesh::CallFunc_LessEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_HierarchicalInstancedStaticMesh_C_ExecuteUbergraph_BP_HierarchicalInstancedStaticMesh, CallFunc_GetInstanceTransform_OutInstanceTransform) == 0x000040, "Member 'BP_HierarchicalInstancedStaticMesh_C_ExecuteUbergraph_BP_HierarchicalInstancedStaticMesh::CallFunc_GetInstanceTransform_OutInstanceTransform' has a wrong offset!");
static_assert(offsetof(BP_HierarchicalInstancedStaticMesh_C_ExecuteUbergraph_BP_HierarchicalInstancedStaticMesh, CallFunc_GetInstanceTransform_ReturnValue) == 0x000070, "Member 'BP_HierarchicalInstancedStaticMesh_C_ExecuteUbergraph_BP_HierarchicalInstancedStaticMesh::CallFunc_GetInstanceTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_HierarchicalInstancedStaticMesh_C_ExecuteUbergraph_BP_HierarchicalInstancedStaticMesh, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue) == 0x000078, "Member 'BP_HierarchicalInstancedStaticMesh_C_ExecuteUbergraph_BP_HierarchicalInstancedStaticMesh::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_HierarchicalInstancedStaticMesh_C_ExecuteUbergraph_BP_HierarchicalInstancedStaticMesh, CallFunc_FinishSpawningActor_ReturnValue) == 0x000080, "Member 'BP_HierarchicalInstancedStaticMesh_C_ExecuteUbergraph_BP_HierarchicalInstancedStaticMesh::CallFunc_FinishSpawningActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_HierarchicalInstancedStaticMesh_C_ExecuteUbergraph_BP_HierarchicalInstancedStaticMesh, CallFunc_SetStaticMesh_ReturnValue) == 0x000088, "Member 'BP_HierarchicalInstancedStaticMesh_C_ExecuteUbergraph_BP_HierarchicalInstancedStaticMesh::CallFunc_SetStaticMesh_ReturnValue' has a wrong offset!");

// Function BP_HierarchicalInstancedStaticMesh.BP_HierarchicalInstancedStaticMesh_C.UserConstructionScript
// 0x0008 (0x0008 - 0x0000)
struct BP_HierarchicalInstancedStaticMesh_C_UserConstructionScript final
{
public:
	int32                                         CallFunc_RandomInteger_ReturnValue;                // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_HierarchicalInstancedStaticMesh_C_UserConstructionScript) == 0x000004, "Wrong alignment on BP_HierarchicalInstancedStaticMesh_C_UserConstructionScript");
static_assert(sizeof(BP_HierarchicalInstancedStaticMesh_C_UserConstructionScript) == 0x000008, "Wrong size on BP_HierarchicalInstancedStaticMesh_C_UserConstructionScript");
static_assert(offsetof(BP_HierarchicalInstancedStaticMesh_C_UserConstructionScript, CallFunc_RandomInteger_ReturnValue) == 0x000000, "Member 'BP_HierarchicalInstancedStaticMesh_C_UserConstructionScript::CallFunc_RandomInteger_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_HierarchicalInstancedStaticMesh_C_UserConstructionScript, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000004, "Member 'BP_HierarchicalInstancedStaticMesh_C_UserConstructionScript::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");

}

