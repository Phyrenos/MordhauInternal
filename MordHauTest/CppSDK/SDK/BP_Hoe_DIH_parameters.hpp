﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Hoe_DIH

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Mordhau_structs.hpp"


namespace SDK::Params
{

// Function BP_Hoe_DIH.BP_Hoe_DIH_C.ExecuteUbergraph_BP_Hoe_DIH
// 0x00C0 (0x00C0 - 0x0000)
struct BP_Hoe_DIH_C_ExecuteUbergraph_BP_Hoe_DIH final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                K2Node_CustomEvent_Location;                       // 0x0004(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               CallFunc_SpawnEmitterAtLocation_ReturnValue;       // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_IsClosed_Variable;                       // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Has_Been_Initd_Variable;                 // 0x001D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1E[0x2];                                       // 0x001E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasAuthority_ReturnValue;                 // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_25[0x3];                                       // 0x0025(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2C[0x4];                                       // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 K2Node_Event_Actor;                                // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EAttackMove                                   K2Node_Event_Move;                                 // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_39[0x3];                                       // 0x0039(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   K2Node_Event_Bone;                                 // 0x003C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                K2Node_Event_WorldLocation;                        // 0x0044(0x000C)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         K2Node_Event_Tier;                                 // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         K2Node_Event_SurfaceType;                          // 0x0051(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_52[0x6];                                       // 0x0052(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_BlessingComponent_C*                CallFunc_GetComponentByClass_ReturnValue;          // 0x0058(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_61[0x7];                                       // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AAdvancedCharacter*                     K2Node_DynamicCast_AsAdvanced_Character;           // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0071(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_72[0x6];                                       // 0x0072(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         CallFunc_GetOverlappingActors_OverlappingActors;   // 0x0078(0x0010)(ReferenceParm)
	class AActor*                                 CallFunc_Array_Get_Item;                           // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0090(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_94[0x4];                                       // 0x0094(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_DemonHordeCharacter_C*              K2Node_DynamicCast_AsBP_Demon_Horde_Character;     // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x00A1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_ByteByte_ReturnValue;                // 0x00A2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_A3[0x1];                                       // 0x00A3(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x00A4(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue;        // 0x00B0(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Hoe_DIH_C_ExecuteUbergraph_BP_Hoe_DIH) == 0x000008, "Wrong alignment on BP_Hoe_DIH_C_ExecuteUbergraph_BP_Hoe_DIH");
static_assert(sizeof(BP_Hoe_DIH_C_ExecuteUbergraph_BP_Hoe_DIH) == 0x0000C0, "Wrong size on BP_Hoe_DIH_C_ExecuteUbergraph_BP_Hoe_DIH");
static_assert(offsetof(BP_Hoe_DIH_C_ExecuteUbergraph_BP_Hoe_DIH, EntryPoint) == 0x000000, "Member 'BP_Hoe_DIH_C_ExecuteUbergraph_BP_Hoe_DIH::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_Hoe_DIH_C_ExecuteUbergraph_BP_Hoe_DIH, K2Node_CustomEvent_Location) == 0x000004, "Member 'BP_Hoe_DIH_C_ExecuteUbergraph_BP_Hoe_DIH::K2Node_CustomEvent_Location' has a wrong offset!");
static_assert(offsetof(BP_Hoe_DIH_C_ExecuteUbergraph_BP_Hoe_DIH, CallFunc_SpawnEmitterAtLocation_ReturnValue) == 0x000010, "Member 'BP_Hoe_DIH_C_ExecuteUbergraph_BP_Hoe_DIH::CallFunc_SpawnEmitterAtLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Hoe_DIH_C_ExecuteUbergraph_BP_Hoe_DIH, Temp_int_Array_Index_Variable) == 0x000018, "Member 'BP_Hoe_DIH_C_ExecuteUbergraph_BP_Hoe_DIH::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_Hoe_DIH_C_ExecuteUbergraph_BP_Hoe_DIH, Temp_bool_IsClosed_Variable) == 0x00001C, "Member 'BP_Hoe_DIH_C_ExecuteUbergraph_BP_Hoe_DIH::Temp_bool_IsClosed_Variable' has a wrong offset!");
static_assert(offsetof(BP_Hoe_DIH_C_ExecuteUbergraph_BP_Hoe_DIH, Temp_bool_Has_Been_Initd_Variable) == 0x00001D, "Member 'BP_Hoe_DIH_C_ExecuteUbergraph_BP_Hoe_DIH::Temp_bool_Has_Been_Initd_Variable' has a wrong offset!");
static_assert(offsetof(BP_Hoe_DIH_C_ExecuteUbergraph_BP_Hoe_DIH, Temp_int_Loop_Counter_Variable) == 0x000020, "Member 'BP_Hoe_DIH_C_ExecuteUbergraph_BP_Hoe_DIH::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_Hoe_DIH_C_ExecuteUbergraph_BP_Hoe_DIH, CallFunc_HasAuthority_ReturnValue) == 0x000024, "Member 'BP_Hoe_DIH_C_ExecuteUbergraph_BP_Hoe_DIH::CallFunc_HasAuthority_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Hoe_DIH_C_ExecuteUbergraph_BP_Hoe_DIH, CallFunc_Add_IntInt_ReturnValue) == 0x000028, "Member 'BP_Hoe_DIH_C_ExecuteUbergraph_BP_Hoe_DIH::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Hoe_DIH_C_ExecuteUbergraph_BP_Hoe_DIH, K2Node_Event_Actor) == 0x000030, "Member 'BP_Hoe_DIH_C_ExecuteUbergraph_BP_Hoe_DIH::K2Node_Event_Actor' has a wrong offset!");
static_assert(offsetof(BP_Hoe_DIH_C_ExecuteUbergraph_BP_Hoe_DIH, K2Node_Event_Move) == 0x000038, "Member 'BP_Hoe_DIH_C_ExecuteUbergraph_BP_Hoe_DIH::K2Node_Event_Move' has a wrong offset!");
static_assert(offsetof(BP_Hoe_DIH_C_ExecuteUbergraph_BP_Hoe_DIH, K2Node_Event_Bone) == 0x00003C, "Member 'BP_Hoe_DIH_C_ExecuteUbergraph_BP_Hoe_DIH::K2Node_Event_Bone' has a wrong offset!");
static_assert(offsetof(BP_Hoe_DIH_C_ExecuteUbergraph_BP_Hoe_DIH, K2Node_Event_WorldLocation) == 0x000044, "Member 'BP_Hoe_DIH_C_ExecuteUbergraph_BP_Hoe_DIH::K2Node_Event_WorldLocation' has a wrong offset!");
static_assert(offsetof(BP_Hoe_DIH_C_ExecuteUbergraph_BP_Hoe_DIH, K2Node_Event_Tier) == 0x000050, "Member 'BP_Hoe_DIH_C_ExecuteUbergraph_BP_Hoe_DIH::K2Node_Event_Tier' has a wrong offset!");
static_assert(offsetof(BP_Hoe_DIH_C_ExecuteUbergraph_BP_Hoe_DIH, K2Node_Event_SurfaceType) == 0x000051, "Member 'BP_Hoe_DIH_C_ExecuteUbergraph_BP_Hoe_DIH::K2Node_Event_SurfaceType' has a wrong offset!");
static_assert(offsetof(BP_Hoe_DIH_C_ExecuteUbergraph_BP_Hoe_DIH, CallFunc_GetComponentByClass_ReturnValue) == 0x000058, "Member 'BP_Hoe_DIH_C_ExecuteUbergraph_BP_Hoe_DIH::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Hoe_DIH_C_ExecuteUbergraph_BP_Hoe_DIH, CallFunc_IsValid_ReturnValue) == 0x000060, "Member 'BP_Hoe_DIH_C_ExecuteUbergraph_BP_Hoe_DIH::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Hoe_DIH_C_ExecuteUbergraph_BP_Hoe_DIH, K2Node_DynamicCast_AsAdvanced_Character) == 0x000068, "Member 'BP_Hoe_DIH_C_ExecuteUbergraph_BP_Hoe_DIH::K2Node_DynamicCast_AsAdvanced_Character' has a wrong offset!");
static_assert(offsetof(BP_Hoe_DIH_C_ExecuteUbergraph_BP_Hoe_DIH, K2Node_DynamicCast_bSuccess) == 0x000070, "Member 'BP_Hoe_DIH_C_ExecuteUbergraph_BP_Hoe_DIH::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_Hoe_DIH_C_ExecuteUbergraph_BP_Hoe_DIH, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000071, "Member 'BP_Hoe_DIH_C_ExecuteUbergraph_BP_Hoe_DIH::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Hoe_DIH_C_ExecuteUbergraph_BP_Hoe_DIH, CallFunc_GetOverlappingActors_OverlappingActors) == 0x000078, "Member 'BP_Hoe_DIH_C_ExecuteUbergraph_BP_Hoe_DIH::CallFunc_GetOverlappingActors_OverlappingActors' has a wrong offset!");
static_assert(offsetof(BP_Hoe_DIH_C_ExecuteUbergraph_BP_Hoe_DIH, CallFunc_Array_Get_Item) == 0x000088, "Member 'BP_Hoe_DIH_C_ExecuteUbergraph_BP_Hoe_DIH::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_Hoe_DIH_C_ExecuteUbergraph_BP_Hoe_DIH, CallFunc_Array_Length_ReturnValue) == 0x000090, "Member 'BP_Hoe_DIH_C_ExecuteUbergraph_BP_Hoe_DIH::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Hoe_DIH_C_ExecuteUbergraph_BP_Hoe_DIH, K2Node_DynamicCast_AsBP_Demon_Horde_Character) == 0x000098, "Member 'BP_Hoe_DIH_C_ExecuteUbergraph_BP_Hoe_DIH::K2Node_DynamicCast_AsBP_Demon_Horde_Character' has a wrong offset!");
static_assert(offsetof(BP_Hoe_DIH_C_ExecuteUbergraph_BP_Hoe_DIH, K2Node_DynamicCast_bSuccess_1) == 0x0000A0, "Member 'BP_Hoe_DIH_C_ExecuteUbergraph_BP_Hoe_DIH::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BP_Hoe_DIH_C_ExecuteUbergraph_BP_Hoe_DIH, CallFunc_Less_IntInt_ReturnValue) == 0x0000A1, "Member 'BP_Hoe_DIH_C_ExecuteUbergraph_BP_Hoe_DIH::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Hoe_DIH_C_ExecuteUbergraph_BP_Hoe_DIH, CallFunc_Less_ByteByte_ReturnValue) == 0x0000A2, "Member 'BP_Hoe_DIH_C_ExecuteUbergraph_BP_Hoe_DIH::CallFunc_Less_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Hoe_DIH_C_ExecuteUbergraph_BP_Hoe_DIH, CallFunc_K2_GetActorLocation_ReturnValue) == 0x0000A4, "Member 'BP_Hoe_DIH_C_ExecuteUbergraph_BP_Hoe_DIH::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Hoe_DIH_C_ExecuteUbergraph_BP_Hoe_DIH, CallFunc_Subtract_VectorVector_ReturnValue) == 0x0000B0, "Member 'BP_Hoe_DIH_C_ExecuteUbergraph_BP_Hoe_DIH::CallFunc_Subtract_VectorVector_ReturnValue' has a wrong offset!");

// Function BP_Hoe_DIH.BP_Hoe_DIH_C.HealEffectsMulti
// 0x000C (0x000C - 0x0000)
struct BP_Hoe_DIH_C_HealEffectsMulti final
{
public:
	struct FVector                                Location;                                          // 0x0000(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Hoe_DIH_C_HealEffectsMulti) == 0x000004, "Wrong alignment on BP_Hoe_DIH_C_HealEffectsMulti");
static_assert(sizeof(BP_Hoe_DIH_C_HealEffectsMulti) == 0x00000C, "Wrong size on BP_Hoe_DIH_C_HealEffectsMulti");
static_assert(offsetof(BP_Hoe_DIH_C_HealEffectsMulti, Location) == 0x000000, "Member 'BP_Hoe_DIH_C_HealEffectsMulti::Location' has a wrong offset!");

// Function BP_Hoe_DIH.BP_Hoe_DIH_C.OnHit
// 0x0028 (0x0028 - 0x0000)
struct BP_Hoe_DIH_C_OnHit final
{
public:
	class AActor*                                 Actor;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EAttackMove                                   Move;                                              // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9[0x3];                                        // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   bone;                                              // 0x000C(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                WorldLocation;                                     // 0x0014(0x000C)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Tier;                                              // 0x0020(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         SurfaceType;                                       // 0x0021(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Hoe_DIH_C_OnHit) == 0x000008, "Wrong alignment on BP_Hoe_DIH_C_OnHit");
static_assert(sizeof(BP_Hoe_DIH_C_OnHit) == 0x000028, "Wrong size on BP_Hoe_DIH_C_OnHit");
static_assert(offsetof(BP_Hoe_DIH_C_OnHit, Actor) == 0x000000, "Member 'BP_Hoe_DIH_C_OnHit::Actor' has a wrong offset!");
static_assert(offsetof(BP_Hoe_DIH_C_OnHit, Move) == 0x000008, "Member 'BP_Hoe_DIH_C_OnHit::Move' has a wrong offset!");
static_assert(offsetof(BP_Hoe_DIH_C_OnHit, bone) == 0x00000C, "Member 'BP_Hoe_DIH_C_OnHit::bone' has a wrong offset!");
static_assert(offsetof(BP_Hoe_DIH_C_OnHit, WorldLocation) == 0x000014, "Member 'BP_Hoe_DIH_C_OnHit::WorldLocation' has a wrong offset!");
static_assert(offsetof(BP_Hoe_DIH_C_OnHit, Tier) == 0x000020, "Member 'BP_Hoe_DIH_C_OnHit::Tier' has a wrong offset!");
static_assert(offsetof(BP_Hoe_DIH_C_OnHit, SurfaceType) == 0x000021, "Member 'BP_Hoe_DIH_C_OnHit::SurfaceType' has a wrong offset!");

}

