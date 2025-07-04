﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_BlessingChainLightning

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function BP_BlessingChainLightning.BP_BlessingChainLightning_C.ExecuteUbergraph_BP_BlessingChainLightning
// 0x0150 (0x0150 - 0x0000)
struct BP_BlessingChainLightning_C_ExecuteUbergraph_BP_BlessingChainLightning final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0004(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_11[0x3];                                       // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             CallFunc_MakeHitResult_ReturnValue;                // 0x0014(0x008C)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_A1[0x7];                                       // 0x00A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AController*                            CallFunc_GetControllerIncludingVehicle_ReturnValue; // 0x00A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_RandomFloatInRange_ReturnValue;           // 0x00B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_FloatFloat_ReturnValue;              // 0x00B4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_B5[0x3];                                       // 0x00B5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class AAdvancedCharacter*                     K2Node_CustomEvent_Source;                         // 0x00B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AAdvancedCharacter*                     K2Node_CustomEvent_Target;                         // 0x00C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x00C8(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_D4[0x4];                                       // 0x00D4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UParticleSystemComponent*               CallFunc_SpawnEmitterAtLocation_ReturnValue;       // 0x00D8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x00E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_E1[0x7];                                       // 0x00E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AAdvancedCharacter*                     CallFunc_GetNewTarget_NewTarget;                   // 0x00E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_2;        // 0x00F0(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasAuthority_ReturnValue;                 // 0x00FC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_FD[0x3];                                       // 0x00FD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x0100(0x0030)(IsPlainOldData, NoDestructor)
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x0130(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_BlessingChainLightning_C*           CallFunc_FinishSpawningActor_ReturnValue;          // 0x0138(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_MordhauTakeDamage_ReturnValue;            // 0x0140(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_BlessingChainLightning_C_ExecuteUbergraph_BP_BlessingChainLightning) == 0x000010, "Wrong alignment on BP_BlessingChainLightning_C_ExecuteUbergraph_BP_BlessingChainLightning");
static_assert(sizeof(BP_BlessingChainLightning_C_ExecuteUbergraph_BP_BlessingChainLightning) == 0x000150, "Wrong size on BP_BlessingChainLightning_C_ExecuteUbergraph_BP_BlessingChainLightning");
static_assert(offsetof(BP_BlessingChainLightning_C_ExecuteUbergraph_BP_BlessingChainLightning, EntryPoint) == 0x000000, "Member 'BP_BlessingChainLightning_C_ExecuteUbergraph_BP_BlessingChainLightning::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_BlessingChainLightning_C_ExecuteUbergraph_BP_BlessingChainLightning, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000004, "Member 'BP_BlessingChainLightning_C_ExecuteUbergraph_BP_BlessingChainLightning::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BlessingChainLightning_C_ExecuteUbergraph_BP_BlessingChainLightning, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'BP_BlessingChainLightning_C_ExecuteUbergraph_BP_BlessingChainLightning::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BlessingChainLightning_C_ExecuteUbergraph_BP_BlessingChainLightning, CallFunc_MakeHitResult_ReturnValue) == 0x000014, "Member 'BP_BlessingChainLightning_C_ExecuteUbergraph_BP_BlessingChainLightning::CallFunc_MakeHitResult_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BlessingChainLightning_C_ExecuteUbergraph_BP_BlessingChainLightning, CallFunc_IsValid_ReturnValue_1) == 0x0000A0, "Member 'BP_BlessingChainLightning_C_ExecuteUbergraph_BP_BlessingChainLightning::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_BlessingChainLightning_C_ExecuteUbergraph_BP_BlessingChainLightning, CallFunc_GetControllerIncludingVehicle_ReturnValue) == 0x0000A8, "Member 'BP_BlessingChainLightning_C_ExecuteUbergraph_BP_BlessingChainLightning::CallFunc_GetControllerIncludingVehicle_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BlessingChainLightning_C_ExecuteUbergraph_BP_BlessingChainLightning, CallFunc_RandomFloatInRange_ReturnValue) == 0x0000B0, "Member 'BP_BlessingChainLightning_C_ExecuteUbergraph_BP_BlessingChainLightning::CallFunc_RandomFloatInRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BlessingChainLightning_C_ExecuteUbergraph_BP_BlessingChainLightning, CallFunc_Less_FloatFloat_ReturnValue) == 0x0000B4, "Member 'BP_BlessingChainLightning_C_ExecuteUbergraph_BP_BlessingChainLightning::CallFunc_Less_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BlessingChainLightning_C_ExecuteUbergraph_BP_BlessingChainLightning, K2Node_CustomEvent_Source) == 0x0000B8, "Member 'BP_BlessingChainLightning_C_ExecuteUbergraph_BP_BlessingChainLightning::K2Node_CustomEvent_Source' has a wrong offset!");
static_assert(offsetof(BP_BlessingChainLightning_C_ExecuteUbergraph_BP_BlessingChainLightning, K2Node_CustomEvent_Target) == 0x0000C0, "Member 'BP_BlessingChainLightning_C_ExecuteUbergraph_BP_BlessingChainLightning::K2Node_CustomEvent_Target' has a wrong offset!");
static_assert(offsetof(BP_BlessingChainLightning_C_ExecuteUbergraph_BP_BlessingChainLightning, CallFunc_K2_GetActorLocation_ReturnValue_1) == 0x0000C8, "Member 'BP_BlessingChainLightning_C_ExecuteUbergraph_BP_BlessingChainLightning::CallFunc_K2_GetActorLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_BlessingChainLightning_C_ExecuteUbergraph_BP_BlessingChainLightning, CallFunc_SpawnEmitterAtLocation_ReturnValue) == 0x0000D8, "Member 'BP_BlessingChainLightning_C_ExecuteUbergraph_BP_BlessingChainLightning::CallFunc_SpawnEmitterAtLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BlessingChainLightning_C_ExecuteUbergraph_BP_BlessingChainLightning, CallFunc_IsValid_ReturnValue_2) == 0x0000E0, "Member 'BP_BlessingChainLightning_C_ExecuteUbergraph_BP_BlessingChainLightning::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_BlessingChainLightning_C_ExecuteUbergraph_BP_BlessingChainLightning, CallFunc_GetNewTarget_NewTarget) == 0x0000E8, "Member 'BP_BlessingChainLightning_C_ExecuteUbergraph_BP_BlessingChainLightning::CallFunc_GetNewTarget_NewTarget' has a wrong offset!");
static_assert(offsetof(BP_BlessingChainLightning_C_ExecuteUbergraph_BP_BlessingChainLightning, CallFunc_K2_GetActorLocation_ReturnValue_2) == 0x0000F0, "Member 'BP_BlessingChainLightning_C_ExecuteUbergraph_BP_BlessingChainLightning::CallFunc_K2_GetActorLocation_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_BlessingChainLightning_C_ExecuteUbergraph_BP_BlessingChainLightning, CallFunc_HasAuthority_ReturnValue) == 0x0000FC, "Member 'BP_BlessingChainLightning_C_ExecuteUbergraph_BP_BlessingChainLightning::CallFunc_HasAuthority_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BlessingChainLightning_C_ExecuteUbergraph_BP_BlessingChainLightning, CallFunc_MakeTransform_ReturnValue) == 0x000100, "Member 'BP_BlessingChainLightning_C_ExecuteUbergraph_BP_BlessingChainLightning::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BlessingChainLightning_C_ExecuteUbergraph_BP_BlessingChainLightning, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue) == 0x000130, "Member 'BP_BlessingChainLightning_C_ExecuteUbergraph_BP_BlessingChainLightning::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BlessingChainLightning_C_ExecuteUbergraph_BP_BlessingChainLightning, CallFunc_FinishSpawningActor_ReturnValue) == 0x000138, "Member 'BP_BlessingChainLightning_C_ExecuteUbergraph_BP_BlessingChainLightning::CallFunc_FinishSpawningActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BlessingChainLightning_C_ExecuteUbergraph_BP_BlessingChainLightning, CallFunc_MordhauTakeDamage_ReturnValue) == 0x000140, "Member 'BP_BlessingChainLightning_C_ExecuteUbergraph_BP_BlessingChainLightning::CallFunc_MordhauTakeDamage_ReturnValue' has a wrong offset!");

// Function BP_BlessingChainLightning.BP_BlessingChainLightning_C.LightningEffectsMulti
// 0x0010 (0x0010 - 0x0000)
struct BP_BlessingChainLightning_C_LightningEffectsMulti final
{
public:
	class AAdvancedCharacter*                     Source;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AAdvancedCharacter*                     Target;                                            // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_BlessingChainLightning_C_LightningEffectsMulti) == 0x000008, "Wrong alignment on BP_BlessingChainLightning_C_LightningEffectsMulti");
static_assert(sizeof(BP_BlessingChainLightning_C_LightningEffectsMulti) == 0x000010, "Wrong size on BP_BlessingChainLightning_C_LightningEffectsMulti");
static_assert(offsetof(BP_BlessingChainLightning_C_LightningEffectsMulti, Source) == 0x000000, "Member 'BP_BlessingChainLightning_C_LightningEffectsMulti::Source' has a wrong offset!");
static_assert(offsetof(BP_BlessingChainLightning_C_LightningEffectsMulti, Target) == 0x000008, "Member 'BP_BlessingChainLightning_C_LightningEffectsMulti::Target' has a wrong offset!");

// Function BP_BlessingChainLightning.BP_BlessingChainLightning_C.GetNewTarget
// 0x0088 (0x0088 - 0x0000)
struct BP_BlessingChainLightning_C_GetNewTarget final
{
public:
	class AAdvancedCharacter*                     NewTarget;                                         // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                         Targets;                                           // 0x0008(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_Array_Random_OutItem;                     // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Random_OutIndex;                    // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_35[0x3];                                       // 0x0035(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class AAdvancedCharacter*                     K2Node_DynamicCast_AsAdvanced_Character;           // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_41[0x7];                                       // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_Array_Get_Item;                           // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_54[0x4];                                       // 0x0054(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AAdvancedCharacter*                     K2Node_DynamicCast_AsAdvanced_Character_1;         // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0061(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_62[0x6];                                       // 0x0062(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class AMordhauVehicle*                        K2Node_DynamicCast_AsMordhau_Vehicle;              // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Array_RemoveItem_ReturnValue;             // 0x0071(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0072(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Array_RemoveItem_ReturnValue_1;           // 0x0073(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_74[0x4];                                       // 0x0074(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         CallFunc_GetOverlappingActors_OverlappingActors;   // 0x0078(0x0010)(ReferenceParm)
};
static_assert(alignof(BP_BlessingChainLightning_C_GetNewTarget) == 0x000008, "Wrong alignment on BP_BlessingChainLightning_C_GetNewTarget");
static_assert(sizeof(BP_BlessingChainLightning_C_GetNewTarget) == 0x000088, "Wrong size on BP_BlessingChainLightning_C_GetNewTarget");
static_assert(offsetof(BP_BlessingChainLightning_C_GetNewTarget, NewTarget) == 0x000000, "Member 'BP_BlessingChainLightning_C_GetNewTarget::NewTarget' has a wrong offset!");
static_assert(offsetof(BP_BlessingChainLightning_C_GetNewTarget, Targets) == 0x000008, "Member 'BP_BlessingChainLightning_C_GetNewTarget::Targets' has a wrong offset!");
static_assert(offsetof(BP_BlessingChainLightning_C_GetNewTarget, Temp_int_Array_Index_Variable) == 0x000018, "Member 'BP_BlessingChainLightning_C_GetNewTarget::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_BlessingChainLightning_C_GetNewTarget, Temp_int_Loop_Counter_Variable) == 0x00001C, "Member 'BP_BlessingChainLightning_C_GetNewTarget::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_BlessingChainLightning_C_GetNewTarget, CallFunc_Add_IntInt_ReturnValue) == 0x000020, "Member 'BP_BlessingChainLightning_C_GetNewTarget::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BlessingChainLightning_C_GetNewTarget, CallFunc_Array_Length_ReturnValue) == 0x000024, "Member 'BP_BlessingChainLightning_C_GetNewTarget::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BlessingChainLightning_C_GetNewTarget, CallFunc_Array_Random_OutItem) == 0x000028, "Member 'BP_BlessingChainLightning_C_GetNewTarget::CallFunc_Array_Random_OutItem' has a wrong offset!");
static_assert(offsetof(BP_BlessingChainLightning_C_GetNewTarget, CallFunc_Array_Random_OutIndex) == 0x000030, "Member 'BP_BlessingChainLightning_C_GetNewTarget::CallFunc_Array_Random_OutIndex' has a wrong offset!");
static_assert(offsetof(BP_BlessingChainLightning_C_GetNewTarget, CallFunc_Greater_IntInt_ReturnValue) == 0x000034, "Member 'BP_BlessingChainLightning_C_GetNewTarget::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BlessingChainLightning_C_GetNewTarget, K2Node_DynamicCast_AsAdvanced_Character) == 0x000038, "Member 'BP_BlessingChainLightning_C_GetNewTarget::K2Node_DynamicCast_AsAdvanced_Character' has a wrong offset!");
static_assert(offsetof(BP_BlessingChainLightning_C_GetNewTarget, K2Node_DynamicCast_bSuccess) == 0x000040, "Member 'BP_BlessingChainLightning_C_GetNewTarget::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_BlessingChainLightning_C_GetNewTarget, CallFunc_Array_Get_Item) == 0x000048, "Member 'BP_BlessingChainLightning_C_GetNewTarget::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_BlessingChainLightning_C_GetNewTarget, CallFunc_Array_Length_ReturnValue_1) == 0x000050, "Member 'BP_BlessingChainLightning_C_GetNewTarget::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_BlessingChainLightning_C_GetNewTarget, K2Node_DynamicCast_AsAdvanced_Character_1) == 0x000058, "Member 'BP_BlessingChainLightning_C_GetNewTarget::K2Node_DynamicCast_AsAdvanced_Character_1' has a wrong offset!");
static_assert(offsetof(BP_BlessingChainLightning_C_GetNewTarget, K2Node_DynamicCast_bSuccess_1) == 0x000060, "Member 'BP_BlessingChainLightning_C_GetNewTarget::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BP_BlessingChainLightning_C_GetNewTarget, CallFunc_Less_IntInt_ReturnValue) == 0x000061, "Member 'BP_BlessingChainLightning_C_GetNewTarget::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BlessingChainLightning_C_GetNewTarget, K2Node_DynamicCast_AsMordhau_Vehicle) == 0x000068, "Member 'BP_BlessingChainLightning_C_GetNewTarget::K2Node_DynamicCast_AsMordhau_Vehicle' has a wrong offset!");
static_assert(offsetof(BP_BlessingChainLightning_C_GetNewTarget, K2Node_DynamicCast_bSuccess_2) == 0x000070, "Member 'BP_BlessingChainLightning_C_GetNewTarget::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(BP_BlessingChainLightning_C_GetNewTarget, CallFunc_Array_RemoveItem_ReturnValue) == 0x000071, "Member 'BP_BlessingChainLightning_C_GetNewTarget::CallFunc_Array_RemoveItem_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BlessingChainLightning_C_GetNewTarget, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000072, "Member 'BP_BlessingChainLightning_C_GetNewTarget::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BlessingChainLightning_C_GetNewTarget, CallFunc_Array_RemoveItem_ReturnValue_1) == 0x000073, "Member 'BP_BlessingChainLightning_C_GetNewTarget::CallFunc_Array_RemoveItem_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_BlessingChainLightning_C_GetNewTarget, CallFunc_GetOverlappingActors_OverlappingActors) == 0x000078, "Member 'BP_BlessingChainLightning_C_GetNewTarget::CallFunc_GetOverlappingActors_OverlappingActors' has a wrong offset!");

}

