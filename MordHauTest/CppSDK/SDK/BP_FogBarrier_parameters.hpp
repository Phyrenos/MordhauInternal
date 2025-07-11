﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_FogBarrier

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function BP_FogBarrier.BP_FogBarrier_C.ExecuteUbergraph_BP_FogBarrier
// 0x0348 (0x0348 - 0x0000)
struct BP_FogBarrier_C_ExecuteUbergraph_BP_FogBarrier final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OverlappedComponent_2;  // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_ComponentBoundEvent_OtherActor_2;           // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OtherComp_2;            // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_OtherBodyIndex_2;       // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ComponentBoundEvent_bFromSweep_1;           // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2D[0x3];                                       // 0x002D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             K2Node_ComponentBoundEvent_SweepResult_1;          // 0x0030(0x008C)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	uint8                                         Pad_BC[0x4];                                       // 0x00BC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OverlappedComponent_1;  // 0x00C0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_ComponentBoundEvent_OtherActor_1;           // 0x00C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OtherComp_1;            // 0x00D0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_OtherBodyIndex_1;       // 0x00D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_DC[0x4];                                       // 0x00DC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_DemonHordeCharacter_C*              K2Node_DynamicCast_AsBP_Demon_Horde_Character;     // 0x00E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_E9[0x7];                                       // 0x00E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IBounds>               K2Node_DynamicCast_AsBounds;                       // 0x00F0(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0100(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_101[0x7];                                      // 0x0101(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IBounds>               K2Node_DynamicCast_AsBounds_1;                     // 0x0108(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0118(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_119[0x7];                                      // 0x0119(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OverlappedComponent;    // 0x0120(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_ComponentBoundEvent_OtherActor;             // 0x0128(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OtherComp;              // 0x0130(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_OtherBodyIndex;         // 0x0138(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ComponentBoundEvent_bFromSweep;             // 0x013C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_13D[0x3];                                      // 0x013D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             K2Node_ComponentBoundEvent_SweepResult;            // 0x0140(0x008C)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	uint8                                         Pad_1CC[0x4];                                      // 0x01CC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_Horse_C*                            K2Node_DynamicCast_AsBP_Horse;                     // 0x01D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_3;                     // 0x01D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1D9[0x7];                                      // 0x01D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_DemonHordeCharacter_C*              K2Node_DynamicCast_AsBP_Demon_Horde_Character_1;   // 0x01E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_4;                     // 0x01E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1E9[0x3];                                      // 0x01E9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_ApplyDamage_ReturnValue;                  // 0x01EC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_MakeHitResult_ReturnValue;                // 0x01F0(0x008C)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	float                                         CallFunc_MordhauTakeDamage_ReturnValue;            // 0x027C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                         CallFunc_GetOverlappingActors_OverlappingActors;   // 0x0280(0x0010)(ReferenceParm)
	struct FHitResult                             CallFunc_MakeHitResult_ReturnValue_1;              // 0x0290(0x008C)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	uint8                                         Pad_31C[0x4];                                      // 0x031C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_Array_Get_Item;                           // 0x0320(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0328(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_32C[0x4];                                      // 0x032C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_DemonHordeCharacter_C*              K2Node_DynamicCast_AsBP_Demon_Horde_Character_2;   // 0x0330(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_5;                     // 0x0338(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0339(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetIsDead_ReturnValue;                    // 0x033A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_33B[0x1];                                      // 0x033B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_MordhauTakeDamage_ReturnValue_1;          // 0x033C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0340(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_FogBarrier_C_ExecuteUbergraph_BP_FogBarrier) == 0x000008, "Wrong alignment on BP_FogBarrier_C_ExecuteUbergraph_BP_FogBarrier");
static_assert(sizeof(BP_FogBarrier_C_ExecuteUbergraph_BP_FogBarrier) == 0x000348, "Wrong size on BP_FogBarrier_C_ExecuteUbergraph_BP_FogBarrier");
static_assert(offsetof(BP_FogBarrier_C_ExecuteUbergraph_BP_FogBarrier, EntryPoint) == 0x000000, "Member 'BP_FogBarrier_C_ExecuteUbergraph_BP_FogBarrier::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_FogBarrier_C_ExecuteUbergraph_BP_FogBarrier, Temp_int_Array_Index_Variable) == 0x000004, "Member 'BP_FogBarrier_C_ExecuteUbergraph_BP_FogBarrier::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_FogBarrier_C_ExecuteUbergraph_BP_FogBarrier, Temp_int_Loop_Counter_Variable) == 0x000008, "Member 'BP_FogBarrier_C_ExecuteUbergraph_BP_FogBarrier::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_FogBarrier_C_ExecuteUbergraph_BP_FogBarrier, CallFunc_Add_IntInt_ReturnValue) == 0x00000C, "Member 'BP_FogBarrier_C_ExecuteUbergraph_BP_FogBarrier::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FogBarrier_C_ExecuteUbergraph_BP_FogBarrier, K2Node_ComponentBoundEvent_OverlappedComponent_2) == 0x000010, "Member 'BP_FogBarrier_C_ExecuteUbergraph_BP_FogBarrier::K2Node_ComponentBoundEvent_OverlappedComponent_2' has a wrong offset!");
static_assert(offsetof(BP_FogBarrier_C_ExecuteUbergraph_BP_FogBarrier, K2Node_ComponentBoundEvent_OtherActor_2) == 0x000018, "Member 'BP_FogBarrier_C_ExecuteUbergraph_BP_FogBarrier::K2Node_ComponentBoundEvent_OtherActor_2' has a wrong offset!");
static_assert(offsetof(BP_FogBarrier_C_ExecuteUbergraph_BP_FogBarrier, K2Node_ComponentBoundEvent_OtherComp_2) == 0x000020, "Member 'BP_FogBarrier_C_ExecuteUbergraph_BP_FogBarrier::K2Node_ComponentBoundEvent_OtherComp_2' has a wrong offset!");
static_assert(offsetof(BP_FogBarrier_C_ExecuteUbergraph_BP_FogBarrier, K2Node_ComponentBoundEvent_OtherBodyIndex_2) == 0x000028, "Member 'BP_FogBarrier_C_ExecuteUbergraph_BP_FogBarrier::K2Node_ComponentBoundEvent_OtherBodyIndex_2' has a wrong offset!");
static_assert(offsetof(BP_FogBarrier_C_ExecuteUbergraph_BP_FogBarrier, K2Node_ComponentBoundEvent_bFromSweep_1) == 0x00002C, "Member 'BP_FogBarrier_C_ExecuteUbergraph_BP_FogBarrier::K2Node_ComponentBoundEvent_bFromSweep_1' has a wrong offset!");
static_assert(offsetof(BP_FogBarrier_C_ExecuteUbergraph_BP_FogBarrier, K2Node_ComponentBoundEvent_SweepResult_1) == 0x000030, "Member 'BP_FogBarrier_C_ExecuteUbergraph_BP_FogBarrier::K2Node_ComponentBoundEvent_SweepResult_1' has a wrong offset!");
static_assert(offsetof(BP_FogBarrier_C_ExecuteUbergraph_BP_FogBarrier, K2Node_ComponentBoundEvent_OverlappedComponent_1) == 0x0000C0, "Member 'BP_FogBarrier_C_ExecuteUbergraph_BP_FogBarrier::K2Node_ComponentBoundEvent_OverlappedComponent_1' has a wrong offset!");
static_assert(offsetof(BP_FogBarrier_C_ExecuteUbergraph_BP_FogBarrier, K2Node_ComponentBoundEvent_OtherActor_1) == 0x0000C8, "Member 'BP_FogBarrier_C_ExecuteUbergraph_BP_FogBarrier::K2Node_ComponentBoundEvent_OtherActor_1' has a wrong offset!");
static_assert(offsetof(BP_FogBarrier_C_ExecuteUbergraph_BP_FogBarrier, K2Node_ComponentBoundEvent_OtherComp_1) == 0x0000D0, "Member 'BP_FogBarrier_C_ExecuteUbergraph_BP_FogBarrier::K2Node_ComponentBoundEvent_OtherComp_1' has a wrong offset!");
static_assert(offsetof(BP_FogBarrier_C_ExecuteUbergraph_BP_FogBarrier, K2Node_ComponentBoundEvent_OtherBodyIndex_1) == 0x0000D8, "Member 'BP_FogBarrier_C_ExecuteUbergraph_BP_FogBarrier::K2Node_ComponentBoundEvent_OtherBodyIndex_1' has a wrong offset!");
static_assert(offsetof(BP_FogBarrier_C_ExecuteUbergraph_BP_FogBarrier, K2Node_DynamicCast_AsBP_Demon_Horde_Character) == 0x0000E0, "Member 'BP_FogBarrier_C_ExecuteUbergraph_BP_FogBarrier::K2Node_DynamicCast_AsBP_Demon_Horde_Character' has a wrong offset!");
static_assert(offsetof(BP_FogBarrier_C_ExecuteUbergraph_BP_FogBarrier, K2Node_DynamicCast_bSuccess) == 0x0000E8, "Member 'BP_FogBarrier_C_ExecuteUbergraph_BP_FogBarrier::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_FogBarrier_C_ExecuteUbergraph_BP_FogBarrier, K2Node_DynamicCast_AsBounds) == 0x0000F0, "Member 'BP_FogBarrier_C_ExecuteUbergraph_BP_FogBarrier::K2Node_DynamicCast_AsBounds' has a wrong offset!");
static_assert(offsetof(BP_FogBarrier_C_ExecuteUbergraph_BP_FogBarrier, K2Node_DynamicCast_bSuccess_1) == 0x000100, "Member 'BP_FogBarrier_C_ExecuteUbergraph_BP_FogBarrier::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BP_FogBarrier_C_ExecuteUbergraph_BP_FogBarrier, K2Node_DynamicCast_AsBounds_1) == 0x000108, "Member 'BP_FogBarrier_C_ExecuteUbergraph_BP_FogBarrier::K2Node_DynamicCast_AsBounds_1' has a wrong offset!");
static_assert(offsetof(BP_FogBarrier_C_ExecuteUbergraph_BP_FogBarrier, K2Node_DynamicCast_bSuccess_2) == 0x000118, "Member 'BP_FogBarrier_C_ExecuteUbergraph_BP_FogBarrier::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(BP_FogBarrier_C_ExecuteUbergraph_BP_FogBarrier, K2Node_ComponentBoundEvent_OverlappedComponent) == 0x000120, "Member 'BP_FogBarrier_C_ExecuteUbergraph_BP_FogBarrier::K2Node_ComponentBoundEvent_OverlappedComponent' has a wrong offset!");
static_assert(offsetof(BP_FogBarrier_C_ExecuteUbergraph_BP_FogBarrier, K2Node_ComponentBoundEvent_OtherActor) == 0x000128, "Member 'BP_FogBarrier_C_ExecuteUbergraph_BP_FogBarrier::K2Node_ComponentBoundEvent_OtherActor' has a wrong offset!");
static_assert(offsetof(BP_FogBarrier_C_ExecuteUbergraph_BP_FogBarrier, K2Node_ComponentBoundEvent_OtherComp) == 0x000130, "Member 'BP_FogBarrier_C_ExecuteUbergraph_BP_FogBarrier::K2Node_ComponentBoundEvent_OtherComp' has a wrong offset!");
static_assert(offsetof(BP_FogBarrier_C_ExecuteUbergraph_BP_FogBarrier, K2Node_ComponentBoundEvent_OtherBodyIndex) == 0x000138, "Member 'BP_FogBarrier_C_ExecuteUbergraph_BP_FogBarrier::K2Node_ComponentBoundEvent_OtherBodyIndex' has a wrong offset!");
static_assert(offsetof(BP_FogBarrier_C_ExecuteUbergraph_BP_FogBarrier, K2Node_ComponentBoundEvent_bFromSweep) == 0x00013C, "Member 'BP_FogBarrier_C_ExecuteUbergraph_BP_FogBarrier::K2Node_ComponentBoundEvent_bFromSweep' has a wrong offset!");
static_assert(offsetof(BP_FogBarrier_C_ExecuteUbergraph_BP_FogBarrier, K2Node_ComponentBoundEvent_SweepResult) == 0x000140, "Member 'BP_FogBarrier_C_ExecuteUbergraph_BP_FogBarrier::K2Node_ComponentBoundEvent_SweepResult' has a wrong offset!");
static_assert(offsetof(BP_FogBarrier_C_ExecuteUbergraph_BP_FogBarrier, K2Node_DynamicCast_AsBP_Horse) == 0x0001D0, "Member 'BP_FogBarrier_C_ExecuteUbergraph_BP_FogBarrier::K2Node_DynamicCast_AsBP_Horse' has a wrong offset!");
static_assert(offsetof(BP_FogBarrier_C_ExecuteUbergraph_BP_FogBarrier, K2Node_DynamicCast_bSuccess_3) == 0x0001D8, "Member 'BP_FogBarrier_C_ExecuteUbergraph_BP_FogBarrier::K2Node_DynamicCast_bSuccess_3' has a wrong offset!");
static_assert(offsetof(BP_FogBarrier_C_ExecuteUbergraph_BP_FogBarrier, K2Node_DynamicCast_AsBP_Demon_Horde_Character_1) == 0x0001E0, "Member 'BP_FogBarrier_C_ExecuteUbergraph_BP_FogBarrier::K2Node_DynamicCast_AsBP_Demon_Horde_Character_1' has a wrong offset!");
static_assert(offsetof(BP_FogBarrier_C_ExecuteUbergraph_BP_FogBarrier, K2Node_DynamicCast_bSuccess_4) == 0x0001E8, "Member 'BP_FogBarrier_C_ExecuteUbergraph_BP_FogBarrier::K2Node_DynamicCast_bSuccess_4' has a wrong offset!");
static_assert(offsetof(BP_FogBarrier_C_ExecuteUbergraph_BP_FogBarrier, CallFunc_ApplyDamage_ReturnValue) == 0x0001EC, "Member 'BP_FogBarrier_C_ExecuteUbergraph_BP_FogBarrier::CallFunc_ApplyDamage_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FogBarrier_C_ExecuteUbergraph_BP_FogBarrier, CallFunc_MakeHitResult_ReturnValue) == 0x0001F0, "Member 'BP_FogBarrier_C_ExecuteUbergraph_BP_FogBarrier::CallFunc_MakeHitResult_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FogBarrier_C_ExecuteUbergraph_BP_FogBarrier, CallFunc_MordhauTakeDamage_ReturnValue) == 0x00027C, "Member 'BP_FogBarrier_C_ExecuteUbergraph_BP_FogBarrier::CallFunc_MordhauTakeDamage_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FogBarrier_C_ExecuteUbergraph_BP_FogBarrier, CallFunc_GetOverlappingActors_OverlappingActors) == 0x000280, "Member 'BP_FogBarrier_C_ExecuteUbergraph_BP_FogBarrier::CallFunc_GetOverlappingActors_OverlappingActors' has a wrong offset!");
static_assert(offsetof(BP_FogBarrier_C_ExecuteUbergraph_BP_FogBarrier, CallFunc_MakeHitResult_ReturnValue_1) == 0x000290, "Member 'BP_FogBarrier_C_ExecuteUbergraph_BP_FogBarrier::CallFunc_MakeHitResult_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_FogBarrier_C_ExecuteUbergraph_BP_FogBarrier, CallFunc_Array_Get_Item) == 0x000320, "Member 'BP_FogBarrier_C_ExecuteUbergraph_BP_FogBarrier::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_FogBarrier_C_ExecuteUbergraph_BP_FogBarrier, CallFunc_Array_Length_ReturnValue) == 0x000328, "Member 'BP_FogBarrier_C_ExecuteUbergraph_BP_FogBarrier::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FogBarrier_C_ExecuteUbergraph_BP_FogBarrier, K2Node_DynamicCast_AsBP_Demon_Horde_Character_2) == 0x000330, "Member 'BP_FogBarrier_C_ExecuteUbergraph_BP_FogBarrier::K2Node_DynamicCast_AsBP_Demon_Horde_Character_2' has a wrong offset!");
static_assert(offsetof(BP_FogBarrier_C_ExecuteUbergraph_BP_FogBarrier, K2Node_DynamicCast_bSuccess_5) == 0x000338, "Member 'BP_FogBarrier_C_ExecuteUbergraph_BP_FogBarrier::K2Node_DynamicCast_bSuccess_5' has a wrong offset!");
static_assert(offsetof(BP_FogBarrier_C_ExecuteUbergraph_BP_FogBarrier, CallFunc_Less_IntInt_ReturnValue) == 0x000339, "Member 'BP_FogBarrier_C_ExecuteUbergraph_BP_FogBarrier::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FogBarrier_C_ExecuteUbergraph_BP_FogBarrier, CallFunc_GetIsDead_ReturnValue) == 0x00033A, "Member 'BP_FogBarrier_C_ExecuteUbergraph_BP_FogBarrier::CallFunc_GetIsDead_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FogBarrier_C_ExecuteUbergraph_BP_FogBarrier, CallFunc_MordhauTakeDamage_ReturnValue_1) == 0x00033C, "Member 'BP_FogBarrier_C_ExecuteUbergraph_BP_FogBarrier::CallFunc_MordhauTakeDamage_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_FogBarrier_C_ExecuteUbergraph_BP_FogBarrier, K2Node_Event_DeltaSeconds) == 0x000340, "Member 'BP_FogBarrier_C_ExecuteUbergraph_BP_FogBarrier::K2Node_Event_DeltaSeconds' has a wrong offset!");

// Function BP_FogBarrier.BP_FogBarrier_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct BP_FogBarrier_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_FogBarrier_C_ReceiveTick) == 0x000004, "Wrong alignment on BP_FogBarrier_C_ReceiveTick");
static_assert(sizeof(BP_FogBarrier_C_ReceiveTick) == 0x000004, "Wrong size on BP_FogBarrier_C_ReceiveTick");
static_assert(offsetof(BP_FogBarrier_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'BP_FogBarrier_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

// Function BP_FogBarrier.BP_FogBarrier_C.BndEvt__BP_FlameBarrier_Kill_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature
// 0x00B0 (0x00B0 - 0x0000)
struct BP_FogBarrier_C_BndEvt__BP_FlameBarrier_Kill_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature final
{
public:
	class UPrimitiveComponent*                    OverlappedComponent;                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 OtherActor;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    OtherComp;                                         // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         OtherBodyIndex;                                    // 0x0018(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bFromSweep;                                        // 0x001C(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1D[0x3];                                       // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             SweepResult;                                       // 0x0020(0x008C)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(BP_FogBarrier_C_BndEvt__BP_FlameBarrier_Kill_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature) == 0x000008, "Wrong alignment on BP_FogBarrier_C_BndEvt__BP_FlameBarrier_Kill_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature");
static_assert(sizeof(BP_FogBarrier_C_BndEvt__BP_FlameBarrier_Kill_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature) == 0x0000B0, "Wrong size on BP_FogBarrier_C_BndEvt__BP_FlameBarrier_Kill_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature");
static_assert(offsetof(BP_FogBarrier_C_BndEvt__BP_FlameBarrier_Kill_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature, OverlappedComponent) == 0x000000, "Member 'BP_FogBarrier_C_BndEvt__BP_FlameBarrier_Kill_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature::OverlappedComponent' has a wrong offset!");
static_assert(offsetof(BP_FogBarrier_C_BndEvt__BP_FlameBarrier_Kill_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature, OtherActor) == 0x000008, "Member 'BP_FogBarrier_C_BndEvt__BP_FlameBarrier_Kill_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature::OtherActor' has a wrong offset!");
static_assert(offsetof(BP_FogBarrier_C_BndEvt__BP_FlameBarrier_Kill_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature, OtherComp) == 0x000010, "Member 'BP_FogBarrier_C_BndEvt__BP_FlameBarrier_Kill_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature::OtherComp' has a wrong offset!");
static_assert(offsetof(BP_FogBarrier_C_BndEvt__BP_FlameBarrier_Kill_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature, OtherBodyIndex) == 0x000018, "Member 'BP_FogBarrier_C_BndEvt__BP_FlameBarrier_Kill_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature::OtherBodyIndex' has a wrong offset!");
static_assert(offsetof(BP_FogBarrier_C_BndEvt__BP_FlameBarrier_Kill_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature, bFromSweep) == 0x00001C, "Member 'BP_FogBarrier_C_BndEvt__BP_FlameBarrier_Kill_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature::bFromSweep' has a wrong offset!");
static_assert(offsetof(BP_FogBarrier_C_BndEvt__BP_FlameBarrier_Kill_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature, SweepResult) == 0x000020, "Member 'BP_FogBarrier_C_BndEvt__BP_FlameBarrier_Kill_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature::SweepResult' has a wrong offset!");

// Function BP_FogBarrier.BP_FogBarrier_C.BndEvt__BP_FlameBarrier_Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
// 0x0020 (0x0020 - 0x0000)
struct BP_FogBarrier_C_BndEvt__BP_FlameBarrier_Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature final
{
public:
	class UPrimitiveComponent*                    OverlappedComponent;                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 OtherActor;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    OtherComp;                                         // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         OtherBodyIndex;                                    // 0x0018(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_FogBarrier_C_BndEvt__BP_FlameBarrier_Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature) == 0x000008, "Wrong alignment on BP_FogBarrier_C_BndEvt__BP_FlameBarrier_Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature");
static_assert(sizeof(BP_FogBarrier_C_BndEvt__BP_FlameBarrier_Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature) == 0x000020, "Wrong size on BP_FogBarrier_C_BndEvt__BP_FlameBarrier_Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature");
static_assert(offsetof(BP_FogBarrier_C_BndEvt__BP_FlameBarrier_Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature, OverlappedComponent) == 0x000000, "Member 'BP_FogBarrier_C_BndEvt__BP_FlameBarrier_Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature::OverlappedComponent' has a wrong offset!");
static_assert(offsetof(BP_FogBarrier_C_BndEvt__BP_FlameBarrier_Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature, OtherActor) == 0x000008, "Member 'BP_FogBarrier_C_BndEvt__BP_FlameBarrier_Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature::OtherActor' has a wrong offset!");
static_assert(offsetof(BP_FogBarrier_C_BndEvt__BP_FlameBarrier_Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature, OtherComp) == 0x000010, "Member 'BP_FogBarrier_C_BndEvt__BP_FlameBarrier_Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature::OtherComp' has a wrong offset!");
static_assert(offsetof(BP_FogBarrier_C_BndEvt__BP_FlameBarrier_Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature, OtherBodyIndex) == 0x000018, "Member 'BP_FogBarrier_C_BndEvt__BP_FlameBarrier_Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature::OtherBodyIndex' has a wrong offset!");

// Function BP_FogBarrier.BP_FogBarrier_C.BndEvt__BP_FlameBarrier_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// 0x00B0 (0x00B0 - 0x0000)
struct BP_FogBarrier_C_BndEvt__BP_FlameBarrier_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature final
{
public:
	class UPrimitiveComponent*                    OverlappedComponent;                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 OtherActor;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    OtherComp;                                         // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         OtherBodyIndex;                                    // 0x0018(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bFromSweep;                                        // 0x001C(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1D[0x3];                                       // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             SweepResult;                                       // 0x0020(0x008C)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(BP_FogBarrier_C_BndEvt__BP_FlameBarrier_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature) == 0x000008, "Wrong alignment on BP_FogBarrier_C_BndEvt__BP_FlameBarrier_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");
static_assert(sizeof(BP_FogBarrier_C_BndEvt__BP_FlameBarrier_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature) == 0x0000B0, "Wrong size on BP_FogBarrier_C_BndEvt__BP_FlameBarrier_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");
static_assert(offsetof(BP_FogBarrier_C_BndEvt__BP_FlameBarrier_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OverlappedComponent) == 0x000000, "Member 'BP_FogBarrier_C_BndEvt__BP_FlameBarrier_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OverlappedComponent' has a wrong offset!");
static_assert(offsetof(BP_FogBarrier_C_BndEvt__BP_FlameBarrier_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OtherActor) == 0x000008, "Member 'BP_FogBarrier_C_BndEvt__BP_FlameBarrier_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OtherActor' has a wrong offset!");
static_assert(offsetof(BP_FogBarrier_C_BndEvt__BP_FlameBarrier_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OtherComp) == 0x000010, "Member 'BP_FogBarrier_C_BndEvt__BP_FlameBarrier_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OtherComp' has a wrong offset!");
static_assert(offsetof(BP_FogBarrier_C_BndEvt__BP_FlameBarrier_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OtherBodyIndex) == 0x000018, "Member 'BP_FogBarrier_C_BndEvt__BP_FlameBarrier_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OtherBodyIndex' has a wrong offset!");
static_assert(offsetof(BP_FogBarrier_C_BndEvt__BP_FlameBarrier_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, bFromSweep) == 0x00001C, "Member 'BP_FogBarrier_C_BndEvt__BP_FlameBarrier_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::bFromSweep' has a wrong offset!");
static_assert(offsetof(BP_FogBarrier_C_BndEvt__BP_FlameBarrier_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, SweepResult) == 0x000020, "Member 'BP_FogBarrier_C_BndEvt__BP_FlameBarrier_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::SweepResult' has a wrong offset!");

}

