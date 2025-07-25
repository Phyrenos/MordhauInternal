﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_OutGoreMeshNeck_Corpse

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BP_OutGoreMeshNeck_Corpse.BP_OutGoreMeshNeck_Corpse_C.ExecuteUbergraph_BP_OutGoreMeshNeck_Corpse
// 0x0098 (0x0098 - 0x0000)
struct BP_OutGoreMeshNeck_Corpse_C_ExecuteUbergraph_BP_OutGoreMeshNeck_Corpse final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_ComponentBoundEvent_EventName;              // 0x0004(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_ComponentBoundEvent_EmitterTime;            // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_ParticleTime;           // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                K2Node_ComponentBoundEvent_Location;               // 0x0014(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                K2Node_ComponentBoundEvent_Velocity;               // 0x0020(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                K2Node_ComponentBoundEvent_Direction;              // 0x002C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                K2Node_ComponentBoundEvent_Normal;                 // 0x0038(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_ComponentBoundEvent_BoneName;               // 0x0044(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4C[0x4];                                       // 0x004C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPhysicalMaterial*                      K2Node_ComponentBoundEvent_PhysMat;                // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_RandomIntegerInRange_ReturnValue;         // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue;         // 0x005C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue;              // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_MakeRotFromX_ReturnValue;                 // 0x006C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                         CallFunc_RandomIntegerInRange_ReturnValue_1;       // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7C[0x4];                                       // 0x007C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UDecalComponent*                        CallFunc_SpawnBloodDecalAtLocation_ReturnValue;    // 0x0080(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue_1;            // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x008C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8D[0x3];                                       // 0x008D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_OutGoreMeshNeck_Corpse_C_ExecuteUbergraph_BP_OutGoreMeshNeck_Corpse) == 0x000008, "Wrong alignment on BP_OutGoreMeshNeck_Corpse_C_ExecuteUbergraph_BP_OutGoreMeshNeck_Corpse");
static_assert(sizeof(BP_OutGoreMeshNeck_Corpse_C_ExecuteUbergraph_BP_OutGoreMeshNeck_Corpse) == 0x000098, "Wrong size on BP_OutGoreMeshNeck_Corpse_C_ExecuteUbergraph_BP_OutGoreMeshNeck_Corpse");
static_assert(offsetof(BP_OutGoreMeshNeck_Corpse_C_ExecuteUbergraph_BP_OutGoreMeshNeck_Corpse, EntryPoint) == 0x000000, "Member 'BP_OutGoreMeshNeck_Corpse_C_ExecuteUbergraph_BP_OutGoreMeshNeck_Corpse::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_OutGoreMeshNeck_Corpse_C_ExecuteUbergraph_BP_OutGoreMeshNeck_Corpse, K2Node_ComponentBoundEvent_EventName) == 0x000004, "Member 'BP_OutGoreMeshNeck_Corpse_C_ExecuteUbergraph_BP_OutGoreMeshNeck_Corpse::K2Node_ComponentBoundEvent_EventName' has a wrong offset!");
static_assert(offsetof(BP_OutGoreMeshNeck_Corpse_C_ExecuteUbergraph_BP_OutGoreMeshNeck_Corpse, K2Node_ComponentBoundEvent_EmitterTime) == 0x00000C, "Member 'BP_OutGoreMeshNeck_Corpse_C_ExecuteUbergraph_BP_OutGoreMeshNeck_Corpse::K2Node_ComponentBoundEvent_EmitterTime' has a wrong offset!");
static_assert(offsetof(BP_OutGoreMeshNeck_Corpse_C_ExecuteUbergraph_BP_OutGoreMeshNeck_Corpse, K2Node_ComponentBoundEvent_ParticleTime) == 0x000010, "Member 'BP_OutGoreMeshNeck_Corpse_C_ExecuteUbergraph_BP_OutGoreMeshNeck_Corpse::K2Node_ComponentBoundEvent_ParticleTime' has a wrong offset!");
static_assert(offsetof(BP_OutGoreMeshNeck_Corpse_C_ExecuteUbergraph_BP_OutGoreMeshNeck_Corpse, K2Node_ComponentBoundEvent_Location) == 0x000014, "Member 'BP_OutGoreMeshNeck_Corpse_C_ExecuteUbergraph_BP_OutGoreMeshNeck_Corpse::K2Node_ComponentBoundEvent_Location' has a wrong offset!");
static_assert(offsetof(BP_OutGoreMeshNeck_Corpse_C_ExecuteUbergraph_BP_OutGoreMeshNeck_Corpse, K2Node_ComponentBoundEvent_Velocity) == 0x000020, "Member 'BP_OutGoreMeshNeck_Corpse_C_ExecuteUbergraph_BP_OutGoreMeshNeck_Corpse::K2Node_ComponentBoundEvent_Velocity' has a wrong offset!");
static_assert(offsetof(BP_OutGoreMeshNeck_Corpse_C_ExecuteUbergraph_BP_OutGoreMeshNeck_Corpse, K2Node_ComponentBoundEvent_Direction) == 0x00002C, "Member 'BP_OutGoreMeshNeck_Corpse_C_ExecuteUbergraph_BP_OutGoreMeshNeck_Corpse::K2Node_ComponentBoundEvent_Direction' has a wrong offset!");
static_assert(offsetof(BP_OutGoreMeshNeck_Corpse_C_ExecuteUbergraph_BP_OutGoreMeshNeck_Corpse, K2Node_ComponentBoundEvent_Normal) == 0x000038, "Member 'BP_OutGoreMeshNeck_Corpse_C_ExecuteUbergraph_BP_OutGoreMeshNeck_Corpse::K2Node_ComponentBoundEvent_Normal' has a wrong offset!");
static_assert(offsetof(BP_OutGoreMeshNeck_Corpse_C_ExecuteUbergraph_BP_OutGoreMeshNeck_Corpse, K2Node_ComponentBoundEvent_BoneName) == 0x000044, "Member 'BP_OutGoreMeshNeck_Corpse_C_ExecuteUbergraph_BP_OutGoreMeshNeck_Corpse::K2Node_ComponentBoundEvent_BoneName' has a wrong offset!");
static_assert(offsetof(BP_OutGoreMeshNeck_Corpse_C_ExecuteUbergraph_BP_OutGoreMeshNeck_Corpse, K2Node_ComponentBoundEvent_PhysMat) == 0x000050, "Member 'BP_OutGoreMeshNeck_Corpse_C_ExecuteUbergraph_BP_OutGoreMeshNeck_Corpse::K2Node_ComponentBoundEvent_PhysMat' has a wrong offset!");
static_assert(offsetof(BP_OutGoreMeshNeck_Corpse_C_ExecuteUbergraph_BP_OutGoreMeshNeck_Corpse, CallFunc_RandomIntegerInRange_ReturnValue) == 0x000058, "Member 'BP_OutGoreMeshNeck_Corpse_C_ExecuteUbergraph_BP_OutGoreMeshNeck_Corpse::CallFunc_RandomIntegerInRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_OutGoreMeshNeck_Corpse_C_ExecuteUbergraph_BP_OutGoreMeshNeck_Corpse, CallFunc_Multiply_VectorFloat_ReturnValue) == 0x00005C, "Member 'BP_OutGoreMeshNeck_Corpse_C_ExecuteUbergraph_BP_OutGoreMeshNeck_Corpse::CallFunc_Multiply_VectorFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_OutGoreMeshNeck_Corpse_C_ExecuteUbergraph_BP_OutGoreMeshNeck_Corpse, CallFunc_Conv_IntToFloat_ReturnValue) == 0x000068, "Member 'BP_OutGoreMeshNeck_Corpse_C_ExecuteUbergraph_BP_OutGoreMeshNeck_Corpse::CallFunc_Conv_IntToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_OutGoreMeshNeck_Corpse_C_ExecuteUbergraph_BP_OutGoreMeshNeck_Corpse, CallFunc_MakeRotFromX_ReturnValue) == 0x00006C, "Member 'BP_OutGoreMeshNeck_Corpse_C_ExecuteUbergraph_BP_OutGoreMeshNeck_Corpse::CallFunc_MakeRotFromX_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_OutGoreMeshNeck_Corpse_C_ExecuteUbergraph_BP_OutGoreMeshNeck_Corpse, CallFunc_RandomIntegerInRange_ReturnValue_1) == 0x000078, "Member 'BP_OutGoreMeshNeck_Corpse_C_ExecuteUbergraph_BP_OutGoreMeshNeck_Corpse::CallFunc_RandomIntegerInRange_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_OutGoreMeshNeck_Corpse_C_ExecuteUbergraph_BP_OutGoreMeshNeck_Corpse, CallFunc_SpawnBloodDecalAtLocation_ReturnValue) == 0x000080, "Member 'BP_OutGoreMeshNeck_Corpse_C_ExecuteUbergraph_BP_OutGoreMeshNeck_Corpse::CallFunc_SpawnBloodDecalAtLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_OutGoreMeshNeck_Corpse_C_ExecuteUbergraph_BP_OutGoreMeshNeck_Corpse, CallFunc_Conv_IntToFloat_ReturnValue_1) == 0x000088, "Member 'BP_OutGoreMeshNeck_Corpse_C_ExecuteUbergraph_BP_OutGoreMeshNeck_Corpse::CallFunc_Conv_IntToFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_OutGoreMeshNeck_Corpse_C_ExecuteUbergraph_BP_OutGoreMeshNeck_Corpse, CallFunc_IsValid_ReturnValue) == 0x00008C, "Member 'BP_OutGoreMeshNeck_Corpse_C_ExecuteUbergraph_BP_OutGoreMeshNeck_Corpse::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_OutGoreMeshNeck_Corpse_C_ExecuteUbergraph_BP_OutGoreMeshNeck_Corpse, CallFunc_CreateDynamicMaterialInstance_ReturnValue) == 0x000090, "Member 'BP_OutGoreMeshNeck_Corpse_C_ExecuteUbergraph_BP_OutGoreMeshNeck_Corpse::CallFunc_CreateDynamicMaterialInstance_ReturnValue' has a wrong offset!");

// Function BP_OutGoreMeshNeck_Corpse.BP_OutGoreMeshNeck_Corpse_C.BndEvt__Particle_K2Node_ComponentBoundEvent_0_ParticleCollisionSignature__DelegateSignature
// 0x0050 (0x0050 - 0x0000)
struct BP_OutGoreMeshNeck_Corpse_C_BndEvt__Particle_K2Node_ComponentBoundEvent_0_ParticleCollisionSignature__DelegateSignature final
{
public:
	class FName                                   EventName;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         EmitterTime;                                       // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ParticleTime;                                      // 0x000C(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Location;                                          // 0x0010(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Velocity;                                          // 0x001C(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Direction;                                         // 0x0028(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Normal;                                            // 0x0034(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   BoneName;                                          // 0x0040(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPhysicalMaterial*                      PhysMat;                                           // 0x0048(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_OutGoreMeshNeck_Corpse_C_BndEvt__Particle_K2Node_ComponentBoundEvent_0_ParticleCollisionSignature__DelegateSignature) == 0x000008, "Wrong alignment on BP_OutGoreMeshNeck_Corpse_C_BndEvt__Particle_K2Node_ComponentBoundEvent_0_ParticleCollisionSignature__DelegateSignature");
static_assert(sizeof(BP_OutGoreMeshNeck_Corpse_C_BndEvt__Particle_K2Node_ComponentBoundEvent_0_ParticleCollisionSignature__DelegateSignature) == 0x000050, "Wrong size on BP_OutGoreMeshNeck_Corpse_C_BndEvt__Particle_K2Node_ComponentBoundEvent_0_ParticleCollisionSignature__DelegateSignature");
static_assert(offsetof(BP_OutGoreMeshNeck_Corpse_C_BndEvt__Particle_K2Node_ComponentBoundEvent_0_ParticleCollisionSignature__DelegateSignature, EventName) == 0x000000, "Member 'BP_OutGoreMeshNeck_Corpse_C_BndEvt__Particle_K2Node_ComponentBoundEvent_0_ParticleCollisionSignature__DelegateSignature::EventName' has a wrong offset!");
static_assert(offsetof(BP_OutGoreMeshNeck_Corpse_C_BndEvt__Particle_K2Node_ComponentBoundEvent_0_ParticleCollisionSignature__DelegateSignature, EmitterTime) == 0x000008, "Member 'BP_OutGoreMeshNeck_Corpse_C_BndEvt__Particle_K2Node_ComponentBoundEvent_0_ParticleCollisionSignature__DelegateSignature::EmitterTime' has a wrong offset!");
static_assert(offsetof(BP_OutGoreMeshNeck_Corpse_C_BndEvt__Particle_K2Node_ComponentBoundEvent_0_ParticleCollisionSignature__DelegateSignature, ParticleTime) == 0x00000C, "Member 'BP_OutGoreMeshNeck_Corpse_C_BndEvt__Particle_K2Node_ComponentBoundEvent_0_ParticleCollisionSignature__DelegateSignature::ParticleTime' has a wrong offset!");
static_assert(offsetof(BP_OutGoreMeshNeck_Corpse_C_BndEvt__Particle_K2Node_ComponentBoundEvent_0_ParticleCollisionSignature__DelegateSignature, Location) == 0x000010, "Member 'BP_OutGoreMeshNeck_Corpse_C_BndEvt__Particle_K2Node_ComponentBoundEvent_0_ParticleCollisionSignature__DelegateSignature::Location' has a wrong offset!");
static_assert(offsetof(BP_OutGoreMeshNeck_Corpse_C_BndEvt__Particle_K2Node_ComponentBoundEvent_0_ParticleCollisionSignature__DelegateSignature, Velocity) == 0x00001C, "Member 'BP_OutGoreMeshNeck_Corpse_C_BndEvt__Particle_K2Node_ComponentBoundEvent_0_ParticleCollisionSignature__DelegateSignature::Velocity' has a wrong offset!");
static_assert(offsetof(BP_OutGoreMeshNeck_Corpse_C_BndEvt__Particle_K2Node_ComponentBoundEvent_0_ParticleCollisionSignature__DelegateSignature, Direction) == 0x000028, "Member 'BP_OutGoreMeshNeck_Corpse_C_BndEvt__Particle_K2Node_ComponentBoundEvent_0_ParticleCollisionSignature__DelegateSignature::Direction' has a wrong offset!");
static_assert(offsetof(BP_OutGoreMeshNeck_Corpse_C_BndEvt__Particle_K2Node_ComponentBoundEvent_0_ParticleCollisionSignature__DelegateSignature, Normal) == 0x000034, "Member 'BP_OutGoreMeshNeck_Corpse_C_BndEvt__Particle_K2Node_ComponentBoundEvent_0_ParticleCollisionSignature__DelegateSignature::Normal' has a wrong offset!");
static_assert(offsetof(BP_OutGoreMeshNeck_Corpse_C_BndEvt__Particle_K2Node_ComponentBoundEvent_0_ParticleCollisionSignature__DelegateSignature, BoneName) == 0x000040, "Member 'BP_OutGoreMeshNeck_Corpse_C_BndEvt__Particle_K2Node_ComponentBoundEvent_0_ParticleCollisionSignature__DelegateSignature::BoneName' has a wrong offset!");
static_assert(offsetof(BP_OutGoreMeshNeck_Corpse_C_BndEvt__Particle_K2Node_ComponentBoundEvent_0_ParticleCollisionSignature__DelegateSignature, PhysMat) == 0x000048, "Member 'BP_OutGoreMeshNeck_Corpse_C_BndEvt__Particle_K2Node_ComponentBoundEvent_0_ParticleCollisionSignature__DelegateSignature::PhysMat' has a wrong offset!");

}

