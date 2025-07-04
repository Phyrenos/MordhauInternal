﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_BlessingLongswordFloating

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function BP_BlessingLongswordFloating.BP_BlessingLongswordFloating_C.ExecuteUbergraph_BP_BlessingLongswordFloating
// 0x0270 (0x0270 - 0x0000)
struct BP_BlessingLongswordFloating_C_ExecuteUbergraph_BP_BlessingLongswordFloating final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_Get_Aim_Rotation_Including_Horse_BaseAimRotation; // 0x0004(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_HasAuthority_ReturnValue;                 // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_12[0x2];                                       // 0x0012(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_19[0x3];                                       // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_21[0x3];                                       // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasAuthority_ReturnValue_1;               // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_IsHidden;                       // 0x002D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2E[0x2];                                       // 0x002E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class AMordhauEquipment*                      K2Node_CustomEvent_Equipment;                      // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AMordhauCharacter*                      CallFunc_GetParentCharacter_ReturnValue;           // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkinnedMeshComponent*                  K2Node_CustomEvent_Mesh_1;                         // 0x0040(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4C[0x4];                                       // 0x004C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UMaterialInterface*>             CallFunc_GetMaterials_ReturnValue;                 // 0x0050(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue_1;           // 0x0064(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0065(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_66[0x2];                                       // 0x0066(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_71[0x3];                                       // 0x0071(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRotator                               CallFunc_GetBaseAimRotation_ReturnValue;           // 0x0074(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetIsDead_ReturnValue;                    // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_81[0x7];                                       // 0x0081(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USceneComponent*                        K2Node_CustomEvent_Mesh;                           // 0x0088(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	struct FRotator                               CallFunc_K2_GetComponentRotation_ReturnValue;      // 0x0090(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                               CallFunc_RLerp_ReturnValue;                        // 0x009C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                             CallFunc_K2_SetWorldRotation_SweepHitResult;       // 0x00A8(0x008C)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FVector                                K2Node_CustomEvent_Location;                       // 0x0134(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_AddLocalRotation_SweepHitResult;       // 0x0140(0x008C)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	uint8                                         Pad_1CC[0x4];                                      // 0x01CC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x01D0(0x0030)(IsPlainOldData, NoDestructor)
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x0200(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AController*                            CallFunc_GetControllerIncludingVehicle_ReturnValue; // 0x0208(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_BlessingProjectile_Longsword_C*     CallFunc_FinishSpawningActor_ReturnValue;          // 0x0210(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0218(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21C[0x4];                                      // 0x021C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UArrowComponent*>                K2Node_MakeArray_Array;                            // 0x0220(0x0010)(ReferenceParm, ContainsInstancedReference)
	class UArrowComponent*                        CallFunc_Array_Get_Item;                           // 0x0230(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                        CallFunc_Array_Get_Item_1;                         // 0x0238(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x0240(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_24C[0x4];                                      // 0x024C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UParticleSystemComponent*               CallFunc_SpawnEmitterAtLocation_ReturnValue;       // 0x0250(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue_1;    // 0x0258(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_BlessingLongswordFloating_C_ExecuteUbergraph_BP_BlessingLongswordFloating) == 0x000010, "Wrong alignment on BP_BlessingLongswordFloating_C_ExecuteUbergraph_BP_BlessingLongswordFloating");
static_assert(sizeof(BP_BlessingLongswordFloating_C_ExecuteUbergraph_BP_BlessingLongswordFloating) == 0x000270, "Wrong size on BP_BlessingLongswordFloating_C_ExecuteUbergraph_BP_BlessingLongswordFloating");
static_assert(offsetof(BP_BlessingLongswordFloating_C_ExecuteUbergraph_BP_BlessingLongswordFloating, EntryPoint) == 0x000000, "Member 'BP_BlessingLongswordFloating_C_ExecuteUbergraph_BP_BlessingLongswordFloating::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_BlessingLongswordFloating_C_ExecuteUbergraph_BP_BlessingLongswordFloating, CallFunc_Get_Aim_Rotation_Including_Horse_BaseAimRotation) == 0x000004, "Member 'BP_BlessingLongswordFloating_C_ExecuteUbergraph_BP_BlessingLongswordFloating::CallFunc_Get_Aim_Rotation_Including_Horse_BaseAimRotation' has a wrong offset!");
static_assert(offsetof(BP_BlessingLongswordFloating_C_ExecuteUbergraph_BP_BlessingLongswordFloating, Temp_bool_Variable) == 0x000010, "Member 'BP_BlessingLongswordFloating_C_ExecuteUbergraph_BP_BlessingLongswordFloating::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BP_BlessingLongswordFloating_C_ExecuteUbergraph_BP_BlessingLongswordFloating, CallFunc_HasAuthority_ReturnValue) == 0x000011, "Member 'BP_BlessingLongswordFloating_C_ExecuteUbergraph_BP_BlessingLongswordFloating::CallFunc_HasAuthority_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BlessingLongswordFloating_C_ExecuteUbergraph_BP_BlessingLongswordFloating, Temp_int_Variable) == 0x000014, "Member 'BP_BlessingLongswordFloating_C_ExecuteUbergraph_BP_BlessingLongswordFloating::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(BP_BlessingLongswordFloating_C_ExecuteUbergraph_BP_BlessingLongswordFloating, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000018, "Member 'BP_BlessingLongswordFloating_C_ExecuteUbergraph_BP_BlessingLongswordFloating::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BlessingLongswordFloating_C_ExecuteUbergraph_BP_BlessingLongswordFloating, CallFunc_Add_IntInt_ReturnValue) == 0x00001C, "Member 'BP_BlessingLongswordFloating_C_ExecuteUbergraph_BP_BlessingLongswordFloating::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BlessingLongswordFloating_C_ExecuteUbergraph_BP_BlessingLongswordFloating, Temp_bool_Variable_1) == 0x000020, "Member 'BP_BlessingLongswordFloating_C_ExecuteUbergraph_BP_BlessingLongswordFloating::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_BlessingLongswordFloating_C_ExecuteUbergraph_BP_BlessingLongswordFloating, Temp_int_Loop_Counter_Variable) == 0x000024, "Member 'BP_BlessingLongswordFloating_C_ExecuteUbergraph_BP_BlessingLongswordFloating::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_BlessingLongswordFloating_C_ExecuteUbergraph_BP_BlessingLongswordFloating, CallFunc_Add_IntInt_ReturnValue_1) == 0x000028, "Member 'BP_BlessingLongswordFloating_C_ExecuteUbergraph_BP_BlessingLongswordFloating::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_BlessingLongswordFloating_C_ExecuteUbergraph_BP_BlessingLongswordFloating, CallFunc_HasAuthority_ReturnValue_1) == 0x00002C, "Member 'BP_BlessingLongswordFloating_C_ExecuteUbergraph_BP_BlessingLongswordFloating::CallFunc_HasAuthority_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_BlessingLongswordFloating_C_ExecuteUbergraph_BP_BlessingLongswordFloating, K2Node_CustomEvent_IsHidden) == 0x00002D, "Member 'BP_BlessingLongswordFloating_C_ExecuteUbergraph_BP_BlessingLongswordFloating::K2Node_CustomEvent_IsHidden' has a wrong offset!");
static_assert(offsetof(BP_BlessingLongswordFloating_C_ExecuteUbergraph_BP_BlessingLongswordFloating, K2Node_CustomEvent_Equipment) == 0x000030, "Member 'BP_BlessingLongswordFloating_C_ExecuteUbergraph_BP_BlessingLongswordFloating::K2Node_CustomEvent_Equipment' has a wrong offset!");
static_assert(offsetof(BP_BlessingLongswordFloating_C_ExecuteUbergraph_BP_BlessingLongswordFloating, CallFunc_GetParentCharacter_ReturnValue) == 0x000038, "Member 'BP_BlessingLongswordFloating_C_ExecuteUbergraph_BP_BlessingLongswordFloating::CallFunc_GetParentCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BlessingLongswordFloating_C_ExecuteUbergraph_BP_BlessingLongswordFloating, K2Node_CustomEvent_Mesh_1) == 0x000040, "Member 'BP_BlessingLongswordFloating_C_ExecuteUbergraph_BP_BlessingLongswordFloating::K2Node_CustomEvent_Mesh_1' has a wrong offset!");
static_assert(offsetof(BP_BlessingLongswordFloating_C_ExecuteUbergraph_BP_BlessingLongswordFloating, Temp_int_Variable_1) == 0x000048, "Member 'BP_BlessingLongswordFloating_C_ExecuteUbergraph_BP_BlessingLongswordFloating::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_BlessingLongswordFloating_C_ExecuteUbergraph_BP_BlessingLongswordFloating, CallFunc_GetMaterials_ReturnValue) == 0x000050, "Member 'BP_BlessingLongswordFloating_C_ExecuteUbergraph_BP_BlessingLongswordFloating::CallFunc_GetMaterials_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BlessingLongswordFloating_C_ExecuteUbergraph_BP_BlessingLongswordFloating, CallFunc_Array_Length_ReturnValue) == 0x000060, "Member 'BP_BlessingLongswordFloating_C_ExecuteUbergraph_BP_BlessingLongswordFloating::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BlessingLongswordFloating_C_ExecuteUbergraph_BP_BlessingLongswordFloating, CallFunc_LessEqual_IntInt_ReturnValue_1) == 0x000064, "Member 'BP_BlessingLongswordFloating_C_ExecuteUbergraph_BP_BlessingLongswordFloating::CallFunc_LessEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_BlessingLongswordFloating_C_ExecuteUbergraph_BP_BlessingLongswordFloating, CallFunc_Less_IntInt_ReturnValue) == 0x000065, "Member 'BP_BlessingLongswordFloating_C_ExecuteUbergraph_BP_BlessingLongswordFloating::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BlessingLongswordFloating_C_ExecuteUbergraph_BP_BlessingLongswordFloating, CallFunc_Add_IntInt_ReturnValue_2) == 0x000068, "Member 'BP_BlessingLongswordFloating_C_ExecuteUbergraph_BP_BlessingLongswordFloating::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_BlessingLongswordFloating_C_ExecuteUbergraph_BP_BlessingLongswordFloating, K2Node_Event_DeltaSeconds) == 0x00006C, "Member 'BP_BlessingLongswordFloating_C_ExecuteUbergraph_BP_BlessingLongswordFloating::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(BP_BlessingLongswordFloating_C_ExecuteUbergraph_BP_BlessingLongswordFloating, CallFunc_IsValid_ReturnValue) == 0x000070, "Member 'BP_BlessingLongswordFloating_C_ExecuteUbergraph_BP_BlessingLongswordFloating::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BlessingLongswordFloating_C_ExecuteUbergraph_BP_BlessingLongswordFloating, CallFunc_GetBaseAimRotation_ReturnValue) == 0x000074, "Member 'BP_BlessingLongswordFloating_C_ExecuteUbergraph_BP_BlessingLongswordFloating::CallFunc_GetBaseAimRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BlessingLongswordFloating_C_ExecuteUbergraph_BP_BlessingLongswordFloating, CallFunc_GetIsDead_ReturnValue) == 0x000080, "Member 'BP_BlessingLongswordFloating_C_ExecuteUbergraph_BP_BlessingLongswordFloating::CallFunc_GetIsDead_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BlessingLongswordFloating_C_ExecuteUbergraph_BP_BlessingLongswordFloating, K2Node_CustomEvent_Mesh) == 0x000088, "Member 'BP_BlessingLongswordFloating_C_ExecuteUbergraph_BP_BlessingLongswordFloating::K2Node_CustomEvent_Mesh' has a wrong offset!");
static_assert(offsetof(BP_BlessingLongswordFloating_C_ExecuteUbergraph_BP_BlessingLongswordFloating, CallFunc_K2_GetComponentRotation_ReturnValue) == 0x000090, "Member 'BP_BlessingLongswordFloating_C_ExecuteUbergraph_BP_BlessingLongswordFloating::CallFunc_K2_GetComponentRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BlessingLongswordFloating_C_ExecuteUbergraph_BP_BlessingLongswordFloating, CallFunc_RLerp_ReturnValue) == 0x00009C, "Member 'BP_BlessingLongswordFloating_C_ExecuteUbergraph_BP_BlessingLongswordFloating::CallFunc_RLerp_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BlessingLongswordFloating_C_ExecuteUbergraph_BP_BlessingLongswordFloating, CallFunc_K2_SetWorldRotation_SweepHitResult) == 0x0000A8, "Member 'BP_BlessingLongswordFloating_C_ExecuteUbergraph_BP_BlessingLongswordFloating::CallFunc_K2_SetWorldRotation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(BP_BlessingLongswordFloating_C_ExecuteUbergraph_BP_BlessingLongswordFloating, K2Node_CustomEvent_Location) == 0x000134, "Member 'BP_BlessingLongswordFloating_C_ExecuteUbergraph_BP_BlessingLongswordFloating::K2Node_CustomEvent_Location' has a wrong offset!");
static_assert(offsetof(BP_BlessingLongswordFloating_C_ExecuteUbergraph_BP_BlessingLongswordFloating, CallFunc_K2_AddLocalRotation_SweepHitResult) == 0x000140, "Member 'BP_BlessingLongswordFloating_C_ExecuteUbergraph_BP_BlessingLongswordFloating::CallFunc_K2_AddLocalRotation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(BP_BlessingLongswordFloating_C_ExecuteUbergraph_BP_BlessingLongswordFloating, CallFunc_MakeTransform_ReturnValue) == 0x0001D0, "Member 'BP_BlessingLongswordFloating_C_ExecuteUbergraph_BP_BlessingLongswordFloating::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BlessingLongswordFloating_C_ExecuteUbergraph_BP_BlessingLongswordFloating, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue) == 0x000200, "Member 'BP_BlessingLongswordFloating_C_ExecuteUbergraph_BP_BlessingLongswordFloating::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BlessingLongswordFloating_C_ExecuteUbergraph_BP_BlessingLongswordFloating, CallFunc_GetControllerIncludingVehicle_ReturnValue) == 0x000208, "Member 'BP_BlessingLongswordFloating_C_ExecuteUbergraph_BP_BlessingLongswordFloating::CallFunc_GetControllerIncludingVehicle_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BlessingLongswordFloating_C_ExecuteUbergraph_BP_BlessingLongswordFloating, CallFunc_FinishSpawningActor_ReturnValue) == 0x000210, "Member 'BP_BlessingLongswordFloating_C_ExecuteUbergraph_BP_BlessingLongswordFloating::CallFunc_FinishSpawningActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BlessingLongswordFloating_C_ExecuteUbergraph_BP_BlessingLongswordFloating, Temp_int_Array_Index_Variable) == 0x000218, "Member 'BP_BlessingLongswordFloating_C_ExecuteUbergraph_BP_BlessingLongswordFloating::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_BlessingLongswordFloating_C_ExecuteUbergraph_BP_BlessingLongswordFloating, K2Node_MakeArray_Array) == 0x000220, "Member 'BP_BlessingLongswordFloating_C_ExecuteUbergraph_BP_BlessingLongswordFloating::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(BP_BlessingLongswordFloating_C_ExecuteUbergraph_BP_BlessingLongswordFloating, CallFunc_Array_Get_Item) == 0x000230, "Member 'BP_BlessingLongswordFloating_C_ExecuteUbergraph_BP_BlessingLongswordFloating::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_BlessingLongswordFloating_C_ExecuteUbergraph_BP_BlessingLongswordFloating, CallFunc_Array_Get_Item_1) == 0x000238, "Member 'BP_BlessingLongswordFloating_C_ExecuteUbergraph_BP_BlessingLongswordFloating::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(BP_BlessingLongswordFloating_C_ExecuteUbergraph_BP_BlessingLongswordFloating, CallFunc_K2_GetComponentLocation_ReturnValue) == 0x000240, "Member 'BP_BlessingLongswordFloating_C_ExecuteUbergraph_BP_BlessingLongswordFloating::CallFunc_K2_GetComponentLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BlessingLongswordFloating_C_ExecuteUbergraph_BP_BlessingLongswordFloating, CallFunc_SpawnEmitterAtLocation_ReturnValue) == 0x000250, "Member 'BP_BlessingLongswordFloating_C_ExecuteUbergraph_BP_BlessingLongswordFloating::CallFunc_SpawnEmitterAtLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BlessingLongswordFloating_C_ExecuteUbergraph_BP_BlessingLongswordFloating, CallFunc_K2_GetComponentLocation_ReturnValue_1) == 0x000258, "Member 'BP_BlessingLongswordFloating_C_ExecuteUbergraph_BP_BlessingLongswordFloating::CallFunc_K2_GetComponentLocation_ReturnValue_1' has a wrong offset!");

// Function BP_BlessingLongswordFloating.BP_BlessingLongswordFloating_C.CreateAndFireProjectile
// 0x000C (0x000C - 0x0000)
struct BP_BlessingLongswordFloating_C_CreateAndFireProjectile final
{
public:
	struct FVector                                Location;                                          // 0x0000(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_BlessingLongswordFloating_C_CreateAndFireProjectile) == 0x000004, "Wrong alignment on BP_BlessingLongswordFloating_C_CreateAndFireProjectile");
static_assert(sizeof(BP_BlessingLongswordFloating_C_CreateAndFireProjectile) == 0x00000C, "Wrong size on BP_BlessingLongswordFloating_C_CreateAndFireProjectile");
static_assert(offsetof(BP_BlessingLongswordFloating_C_CreateAndFireProjectile, Location) == 0x000000, "Member 'BP_BlessingLongswordFloating_C_CreateAndFireProjectile::Location' has a wrong offset!");

// Function BP_BlessingLongswordFloating.BP_BlessingLongswordFloating_C.RotateSwords
// 0x0008 (0x0008 - 0x0000)
struct BP_BlessingLongswordFloating_C_RotateSwords final
{
public:
	class USceneComponent*                        Mesh;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
};
static_assert(alignof(BP_BlessingLongswordFloating_C_RotateSwords) == 0x000008, "Wrong alignment on BP_BlessingLongswordFloating_C_RotateSwords");
static_assert(sizeof(BP_BlessingLongswordFloating_C_RotateSwords) == 0x000008, "Wrong size on BP_BlessingLongswordFloating_C_RotateSwords");
static_assert(offsetof(BP_BlessingLongswordFloating_C_RotateSwords, Mesh) == 0x000000, "Member 'BP_BlessingLongswordFloating_C_RotateSwords::Mesh' has a wrong offset!");

// Function BP_BlessingLongswordFloating.BP_BlessingLongswordFloating_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct BP_BlessingLongswordFloating_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_BlessingLongswordFloating_C_ReceiveTick) == 0x000004, "Wrong alignment on BP_BlessingLongswordFloating_C_ReceiveTick");
static_assert(sizeof(BP_BlessingLongswordFloating_C_ReceiveTick) == 0x000004, "Wrong size on BP_BlessingLongswordFloating_C_ReceiveTick");
static_assert(offsetof(BP_BlessingLongswordFloating_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'BP_BlessingLongswordFloating_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

// Function BP_BlessingLongswordFloating.BP_BlessingLongswordFloating_C.ApplyMesh
// 0x0008 (0x0008 - 0x0000)
struct BP_BlessingLongswordFloating_C_ApplyMesh final
{
public:
	class USkinnedMeshComponent*                  Mesh;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
};
static_assert(alignof(BP_BlessingLongswordFloating_C_ApplyMesh) == 0x000008, "Wrong alignment on BP_BlessingLongswordFloating_C_ApplyMesh");
static_assert(sizeof(BP_BlessingLongswordFloating_C_ApplyMesh) == 0x000008, "Wrong size on BP_BlessingLongswordFloating_C_ApplyMesh");
static_assert(offsetof(BP_BlessingLongswordFloating_C_ApplyMesh, Mesh) == 0x000000, "Member 'BP_BlessingLongswordFloating_C_ApplyMesh::Mesh' has a wrong offset!");

// Function BP_BlessingLongswordFloating.BP_BlessingLongswordFloating_C.ApplyMeshMulti
// 0x0008 (0x0008 - 0x0000)
struct BP_BlessingLongswordFloating_C_ApplyMeshMulti final
{
public:
	class AMordhauEquipment*                      Equipment;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_BlessingLongswordFloating_C_ApplyMeshMulti) == 0x000008, "Wrong alignment on BP_BlessingLongswordFloating_C_ApplyMeshMulti");
static_assert(sizeof(BP_BlessingLongswordFloating_C_ApplyMeshMulti) == 0x000008, "Wrong size on BP_BlessingLongswordFloating_C_ApplyMeshMulti");
static_assert(offsetof(BP_BlessingLongswordFloating_C_ApplyMeshMulti, Equipment) == 0x000000, "Member 'BP_BlessingLongswordFloating_C_ApplyMeshMulti::Equipment' has a wrong offset!");

// Function BP_BlessingLongswordFloating.BP_BlessingLongswordFloating_C.SetHiddenMulti
// 0x0001 (0x0001 - 0x0000)
struct BP_BlessingLongswordFloating_C_SetHiddenMulti final
{
public:
	bool                                          IsHidden;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_BlessingLongswordFloating_C_SetHiddenMulti) == 0x000001, "Wrong alignment on BP_BlessingLongswordFloating_C_SetHiddenMulti");
static_assert(sizeof(BP_BlessingLongswordFloating_C_SetHiddenMulti) == 0x000001, "Wrong size on BP_BlessingLongswordFloating_C_SetHiddenMulti");
static_assert(offsetof(BP_BlessingLongswordFloating_C_SetHiddenMulti, IsHidden) == 0x000000, "Member 'BP_BlessingLongswordFloating_C_SetHiddenMulti::IsHidden' has a wrong offset!");

}

