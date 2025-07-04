﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_FireArrowPit

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function BP_FireArrowPit.BP_FireArrowPit_C.ExecuteUbergraph_BP_FireArrowPit
// 0x0148 (0x0148 - 0x0000)
struct BP_FireArrowPit_C_ExecuteUbergraph_BP_FireArrowPit final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AMordhauPlayerController*               K2Node_DynamicCast_AsMordhau_Player_Controller;    // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_19[0x3];                                       // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x001C(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_2C[0x4];                                       // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AMordhauPlayerState*                    K2Node_DynamicCast_AsMordhau_Player_State;         // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_39[0x7];                                       // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0040(0x0008)(NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue;               // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_49[0x3];                                       // 0x0049(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasAuthority_ReturnValue;                 // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_51[0x3];                                       // 0x0051(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                         CallFunc_GetOverlappingActors_OverlappingActors;   // 0x0058(0x0010)(ReferenceParm)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6C[0x4];                                       // 0x006C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_Array_Get_Item;                           // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x0078(0x0010)(ZeroConstructor, NoDestructor)
	class ABP_Catapult_C*                         K2Node_DynamicCast_AsBP_Catapult;                  // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_91[0x7];                                       // 0x0091(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue_1;        // 0x0098(0x0008)(NoDestructor, HasGetValueTypeHash)
	class UProjectileArmShooterComponent*         CallFunc_GetComponentByClass_ReturnValue;          // 0x00A0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AMordhauCharacter*                      K2Node_DynamicCast_AsMordhau_Character;            // 0x00A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_3;                     // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_B1[0x7];                                       // 0x00B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_DeployableBallista_C*               K2Node_DynamicCast_AsBP_Deployable_Ballista;       // 0x00B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_4;                     // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_C1[0x7];                                       // 0x00C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_Bow_C*                              K2Node_DynamicCast_AsBP_Bow;                       // 0x00C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_5;                     // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_D1[0x7];                                       // 0x00D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UProjectileTurretShooterComponent*      CallFunc_GetComponentByClass_ReturnValue_1;        // 0x00D8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_Ballista_C*                         K2Node_DynamicCast_AsBP_Ballista;                  // 0x00E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_6;                     // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_E9[0x7];                                       // 0x00E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AAdvancedCharacter*                     K2Node_DynamicCast_AsAdvanced_Character;           // 0x00F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_7;                     // 0x00F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_F9[0x7];                                       // 0x00F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UProjectileTurretShooterComponent*      CallFunc_GetComponentByClass_ReturnValue_2;        // 0x0100(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetIsDead_ReturnValue;                    // 0x0108(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_109[0x3];                                      // 0x0109(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x010C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0110(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_111[0x3];                                      // 0x0111(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_ApplyDamage_ReturnValue;                  // 0x0114(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwner_ReturnValue_1;                   // 0x0118(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue;               // 0x0120(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_124[0x4];                                      // 0x0124(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AMordhauPlayerController*               K2Node_DynamicCast_AsMordhau_Player_Controller_1;  // 0x0128(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_8;                     // 0x0130(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_131[0x3];                                      // 0x0131(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_ApplyDamage_ReturnValue_1;                // 0x0134(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AMordhauPlayerState*                    K2Node_DynamicCast_AsMordhau_Player_State_1;       // 0x0138(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_9;                     // 0x0140(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0141(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_FireArrowPit_C_ExecuteUbergraph_BP_FireArrowPit) == 0x000008, "Wrong alignment on BP_FireArrowPit_C_ExecuteUbergraph_BP_FireArrowPit");
static_assert(sizeof(BP_FireArrowPit_C_ExecuteUbergraph_BP_FireArrowPit) == 0x000148, "Wrong size on BP_FireArrowPit_C_ExecuteUbergraph_BP_FireArrowPit");
static_assert(offsetof(BP_FireArrowPit_C_ExecuteUbergraph_BP_FireArrowPit, EntryPoint) == 0x000000, "Member 'BP_FireArrowPit_C_ExecuteUbergraph_BP_FireArrowPit::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_FireArrowPit_C_ExecuteUbergraph_BP_FireArrowPit, CallFunc_GetOwner_ReturnValue) == 0x000008, "Member 'BP_FireArrowPit_C_ExecuteUbergraph_BP_FireArrowPit::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FireArrowPit_C_ExecuteUbergraph_BP_FireArrowPit, K2Node_DynamicCast_AsMordhau_Player_Controller) == 0x000010, "Member 'BP_FireArrowPit_C_ExecuteUbergraph_BP_FireArrowPit::K2Node_DynamicCast_AsMordhau_Player_Controller' has a wrong offset!");
static_assert(offsetof(BP_FireArrowPit_C_ExecuteUbergraph_BP_FireArrowPit, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'BP_FireArrowPit_C_ExecuteUbergraph_BP_FireArrowPit::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_FireArrowPit_C_ExecuteUbergraph_BP_FireArrowPit, K2Node_CreateDelegate_OutputDelegate) == 0x00001C, "Member 'BP_FireArrowPit_C_ExecuteUbergraph_BP_FireArrowPit::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_FireArrowPit_C_ExecuteUbergraph_BP_FireArrowPit, K2Node_DynamicCast_AsMordhau_Player_State) == 0x000030, "Member 'BP_FireArrowPit_C_ExecuteUbergraph_BP_FireArrowPit::K2Node_DynamicCast_AsMordhau_Player_State' has a wrong offset!");
static_assert(offsetof(BP_FireArrowPit_C_ExecuteUbergraph_BP_FireArrowPit, K2Node_DynamicCast_bSuccess_1) == 0x000038, "Member 'BP_FireArrowPit_C_ExecuteUbergraph_BP_FireArrowPit::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BP_FireArrowPit_C_ExecuteUbergraph_BP_FireArrowPit, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000040, "Member 'BP_FireArrowPit_C_ExecuteUbergraph_BP_FireArrowPit::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FireArrowPit_C_ExecuteUbergraph_BP_FireArrowPit, CallFunc_Conv_IntToByte_ReturnValue) == 0x000048, "Member 'BP_FireArrowPit_C_ExecuteUbergraph_BP_FireArrowPit::CallFunc_Conv_IntToByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FireArrowPit_C_ExecuteUbergraph_BP_FireArrowPit, Temp_int_Array_Index_Variable) == 0x00004C, "Member 'BP_FireArrowPit_C_ExecuteUbergraph_BP_FireArrowPit::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_FireArrowPit_C_ExecuteUbergraph_BP_FireArrowPit, CallFunc_HasAuthority_ReturnValue) == 0x000050, "Member 'BP_FireArrowPit_C_ExecuteUbergraph_BP_FireArrowPit::CallFunc_HasAuthority_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FireArrowPit_C_ExecuteUbergraph_BP_FireArrowPit, Temp_int_Loop_Counter_Variable) == 0x000054, "Member 'BP_FireArrowPit_C_ExecuteUbergraph_BP_FireArrowPit::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_FireArrowPit_C_ExecuteUbergraph_BP_FireArrowPit, CallFunc_GetOverlappingActors_OverlappingActors) == 0x000058, "Member 'BP_FireArrowPit_C_ExecuteUbergraph_BP_FireArrowPit::CallFunc_GetOverlappingActors_OverlappingActors' has a wrong offset!");
static_assert(offsetof(BP_FireArrowPit_C_ExecuteUbergraph_BP_FireArrowPit, CallFunc_Add_IntInt_ReturnValue) == 0x000068, "Member 'BP_FireArrowPit_C_ExecuteUbergraph_BP_FireArrowPit::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FireArrowPit_C_ExecuteUbergraph_BP_FireArrowPit, CallFunc_Array_Get_Item) == 0x000070, "Member 'BP_FireArrowPit_C_ExecuteUbergraph_BP_FireArrowPit::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_FireArrowPit_C_ExecuteUbergraph_BP_FireArrowPit, K2Node_CreateDelegate_OutputDelegate_1) == 0x000078, "Member 'BP_FireArrowPit_C_ExecuteUbergraph_BP_FireArrowPit::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(BP_FireArrowPit_C_ExecuteUbergraph_BP_FireArrowPit, K2Node_DynamicCast_AsBP_Catapult) == 0x000088, "Member 'BP_FireArrowPit_C_ExecuteUbergraph_BP_FireArrowPit::K2Node_DynamicCast_AsBP_Catapult' has a wrong offset!");
static_assert(offsetof(BP_FireArrowPit_C_ExecuteUbergraph_BP_FireArrowPit, K2Node_DynamicCast_bSuccess_2) == 0x000090, "Member 'BP_FireArrowPit_C_ExecuteUbergraph_BP_FireArrowPit::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(BP_FireArrowPit_C_ExecuteUbergraph_BP_FireArrowPit, CallFunc_K2_SetTimerDelegate_ReturnValue_1) == 0x000098, "Member 'BP_FireArrowPit_C_ExecuteUbergraph_BP_FireArrowPit::CallFunc_K2_SetTimerDelegate_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_FireArrowPit_C_ExecuteUbergraph_BP_FireArrowPit, CallFunc_GetComponentByClass_ReturnValue) == 0x0000A0, "Member 'BP_FireArrowPit_C_ExecuteUbergraph_BP_FireArrowPit::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FireArrowPit_C_ExecuteUbergraph_BP_FireArrowPit, K2Node_DynamicCast_AsMordhau_Character) == 0x0000A8, "Member 'BP_FireArrowPit_C_ExecuteUbergraph_BP_FireArrowPit::K2Node_DynamicCast_AsMordhau_Character' has a wrong offset!");
static_assert(offsetof(BP_FireArrowPit_C_ExecuteUbergraph_BP_FireArrowPit, K2Node_DynamicCast_bSuccess_3) == 0x0000B0, "Member 'BP_FireArrowPit_C_ExecuteUbergraph_BP_FireArrowPit::K2Node_DynamicCast_bSuccess_3' has a wrong offset!");
static_assert(offsetof(BP_FireArrowPit_C_ExecuteUbergraph_BP_FireArrowPit, K2Node_DynamicCast_AsBP_Deployable_Ballista) == 0x0000B8, "Member 'BP_FireArrowPit_C_ExecuteUbergraph_BP_FireArrowPit::K2Node_DynamicCast_AsBP_Deployable_Ballista' has a wrong offset!");
static_assert(offsetof(BP_FireArrowPit_C_ExecuteUbergraph_BP_FireArrowPit, K2Node_DynamicCast_bSuccess_4) == 0x0000C0, "Member 'BP_FireArrowPit_C_ExecuteUbergraph_BP_FireArrowPit::K2Node_DynamicCast_bSuccess_4' has a wrong offset!");
static_assert(offsetof(BP_FireArrowPit_C_ExecuteUbergraph_BP_FireArrowPit, K2Node_DynamicCast_AsBP_Bow) == 0x0000C8, "Member 'BP_FireArrowPit_C_ExecuteUbergraph_BP_FireArrowPit::K2Node_DynamicCast_AsBP_Bow' has a wrong offset!");
static_assert(offsetof(BP_FireArrowPit_C_ExecuteUbergraph_BP_FireArrowPit, K2Node_DynamicCast_bSuccess_5) == 0x0000D0, "Member 'BP_FireArrowPit_C_ExecuteUbergraph_BP_FireArrowPit::K2Node_DynamicCast_bSuccess_5' has a wrong offset!");
static_assert(offsetof(BP_FireArrowPit_C_ExecuteUbergraph_BP_FireArrowPit, CallFunc_GetComponentByClass_ReturnValue_1) == 0x0000D8, "Member 'BP_FireArrowPit_C_ExecuteUbergraph_BP_FireArrowPit::CallFunc_GetComponentByClass_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_FireArrowPit_C_ExecuteUbergraph_BP_FireArrowPit, K2Node_DynamicCast_AsBP_Ballista) == 0x0000E0, "Member 'BP_FireArrowPit_C_ExecuteUbergraph_BP_FireArrowPit::K2Node_DynamicCast_AsBP_Ballista' has a wrong offset!");
static_assert(offsetof(BP_FireArrowPit_C_ExecuteUbergraph_BP_FireArrowPit, K2Node_DynamicCast_bSuccess_6) == 0x0000E8, "Member 'BP_FireArrowPit_C_ExecuteUbergraph_BP_FireArrowPit::K2Node_DynamicCast_bSuccess_6' has a wrong offset!");
static_assert(offsetof(BP_FireArrowPit_C_ExecuteUbergraph_BP_FireArrowPit, K2Node_DynamicCast_AsAdvanced_Character) == 0x0000F0, "Member 'BP_FireArrowPit_C_ExecuteUbergraph_BP_FireArrowPit::K2Node_DynamicCast_AsAdvanced_Character' has a wrong offset!");
static_assert(offsetof(BP_FireArrowPit_C_ExecuteUbergraph_BP_FireArrowPit, K2Node_DynamicCast_bSuccess_7) == 0x0000F8, "Member 'BP_FireArrowPit_C_ExecuteUbergraph_BP_FireArrowPit::K2Node_DynamicCast_bSuccess_7' has a wrong offset!");
static_assert(offsetof(BP_FireArrowPit_C_ExecuteUbergraph_BP_FireArrowPit, CallFunc_GetComponentByClass_ReturnValue_2) == 0x000100, "Member 'BP_FireArrowPit_C_ExecuteUbergraph_BP_FireArrowPit::CallFunc_GetComponentByClass_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_FireArrowPit_C_ExecuteUbergraph_BP_FireArrowPit, CallFunc_GetIsDead_ReturnValue) == 0x000108, "Member 'BP_FireArrowPit_C_ExecuteUbergraph_BP_FireArrowPit::CallFunc_GetIsDead_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FireArrowPit_C_ExecuteUbergraph_BP_FireArrowPit, CallFunc_Array_Length_ReturnValue) == 0x00010C, "Member 'BP_FireArrowPit_C_ExecuteUbergraph_BP_FireArrowPit::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FireArrowPit_C_ExecuteUbergraph_BP_FireArrowPit, CallFunc_Less_IntInt_ReturnValue) == 0x000110, "Member 'BP_FireArrowPit_C_ExecuteUbergraph_BP_FireArrowPit::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FireArrowPit_C_ExecuteUbergraph_BP_FireArrowPit, CallFunc_ApplyDamage_ReturnValue) == 0x000114, "Member 'BP_FireArrowPit_C_ExecuteUbergraph_BP_FireArrowPit::CallFunc_ApplyDamage_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FireArrowPit_C_ExecuteUbergraph_BP_FireArrowPit, CallFunc_GetOwner_ReturnValue_1) == 0x000118, "Member 'BP_FireArrowPit_C_ExecuteUbergraph_BP_FireArrowPit::CallFunc_GetOwner_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_FireArrowPit_C_ExecuteUbergraph_BP_FireArrowPit, CallFunc_Conv_ByteToInt_ReturnValue) == 0x000120, "Member 'BP_FireArrowPit_C_ExecuteUbergraph_BP_FireArrowPit::CallFunc_Conv_ByteToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FireArrowPit_C_ExecuteUbergraph_BP_FireArrowPit, K2Node_DynamicCast_AsMordhau_Player_Controller_1) == 0x000128, "Member 'BP_FireArrowPit_C_ExecuteUbergraph_BP_FireArrowPit::K2Node_DynamicCast_AsMordhau_Player_Controller_1' has a wrong offset!");
static_assert(offsetof(BP_FireArrowPit_C_ExecuteUbergraph_BP_FireArrowPit, K2Node_DynamicCast_bSuccess_8) == 0x000130, "Member 'BP_FireArrowPit_C_ExecuteUbergraph_BP_FireArrowPit::K2Node_DynamicCast_bSuccess_8' has a wrong offset!");
static_assert(offsetof(BP_FireArrowPit_C_ExecuteUbergraph_BP_FireArrowPit, CallFunc_ApplyDamage_ReturnValue_1) == 0x000134, "Member 'BP_FireArrowPit_C_ExecuteUbergraph_BP_FireArrowPit::CallFunc_ApplyDamage_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_FireArrowPit_C_ExecuteUbergraph_BP_FireArrowPit, K2Node_DynamicCast_AsMordhau_Player_State_1) == 0x000138, "Member 'BP_FireArrowPit_C_ExecuteUbergraph_BP_FireArrowPit::K2Node_DynamicCast_AsMordhau_Player_State_1' has a wrong offset!");
static_assert(offsetof(BP_FireArrowPit_C_ExecuteUbergraph_BP_FireArrowPit, K2Node_DynamicCast_bSuccess_9) == 0x000140, "Member 'BP_FireArrowPit_C_ExecuteUbergraph_BP_FireArrowPit::K2Node_DynamicCast_bSuccess_9' has a wrong offset!");
static_assert(offsetof(BP_FireArrowPit_C_ExecuteUbergraph_BP_FireArrowPit, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000141, "Member 'BP_FireArrowPit_C_ExecuteUbergraph_BP_FireArrowPit::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");

// Function BP_FireArrowPit.BP_FireArrowPit_C.SetOnFire
// 0x0018 (0x0018 - 0x0000)
struct BP_FireArrowPit_C_SetOnFire final
{
public:
	class UProjectileArmShooterComponent*         ProjectileArmComponent;                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UProjectileTurretShooterComponent*      ProjectileTurretComponent;                         // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0013(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x0015(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x0016(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x0017(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_FireArrowPit_C_SetOnFire) == 0x000008, "Wrong alignment on BP_FireArrowPit_C_SetOnFire");
static_assert(sizeof(BP_FireArrowPit_C_SetOnFire) == 0x000018, "Wrong size on BP_FireArrowPit_C_SetOnFire");
static_assert(offsetof(BP_FireArrowPit_C_SetOnFire, ProjectileArmComponent) == 0x000000, "Member 'BP_FireArrowPit_C_SetOnFire::ProjectileArmComponent' has a wrong offset!");
static_assert(offsetof(BP_FireArrowPit_C_SetOnFire, ProjectileTurretComponent) == 0x000008, "Member 'BP_FireArrowPit_C_SetOnFire::ProjectileTurretComponent' has a wrong offset!");
static_assert(offsetof(BP_FireArrowPit_C_SetOnFire, CallFunc_Not_PreBool_ReturnValue) == 0x000010, "Member 'BP_FireArrowPit_C_SetOnFire::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FireArrowPit_C_SetOnFire, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000011, "Member 'BP_FireArrowPit_C_SetOnFire::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FireArrowPit_C_SetOnFire, CallFunc_IsValid_ReturnValue) == 0x000012, "Member 'BP_FireArrowPit_C_SetOnFire::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FireArrowPit_C_SetOnFire, CallFunc_BooleanAND_ReturnValue) == 0x000013, "Member 'BP_FireArrowPit_C_SetOnFire::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FireArrowPit_C_SetOnFire, CallFunc_IsValid_ReturnValue_1) == 0x000014, "Member 'BP_FireArrowPit_C_SetOnFire::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_FireArrowPit_C_SetOnFire, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x000015, "Member 'BP_FireArrowPit_C_SetOnFire::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_FireArrowPit_C_SetOnFire, CallFunc_Not_PreBool_ReturnValue_1) == 0x000016, "Member 'BP_FireArrowPit_C_SetOnFire::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_FireArrowPit_C_SetOnFire, CallFunc_BooleanAND_ReturnValue_1) == 0x000017, "Member 'BP_FireArrowPit_C_SetOnFire::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");

}

