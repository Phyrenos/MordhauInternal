﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_HolyGun_DIH

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function BP_HolyGun_DIH.BP_HolyGun_DIH_C.ExecuteUbergraph_BP_HolyGun_DIH
// 0x00E0 (0x00E0 - 0x0000)
struct BP_HolyGun_DIH_C_ExecuteUbergraph_BP_HolyGun_DIH final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AGameStateBase*                         CallFunc_GetGameState_ReturnValue;                 // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_DemonHordeGamestate_C*              K2Node_DynamicCast_AsBP_Demon_Horde_Gamestate;     // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_CanDoHolyGunEasterEgg_Return_Value;       // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1A[0x2];                                       // 0x001A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x001C(0x0010)(ZeroConstructor, NoDestructor)
	float                                         CallFunc_BreakVector2D_X;                          // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_Y;                          // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_X_1;                        // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_Y_1;                        // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_RandomFloatInRange_ReturnValue;           // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_RandomFloatInRange_ReturnValue_1;         // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasAuthority_ReturnValue;                 // 0x0044(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_45[0x3];                                       // 0x0045(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class AMordhauCharacter*                      K2Node_Event_Character_3;                          // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               CallFunc_SpawnEmitterAttached_ReturnValue;         // 0x0050(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_GetAmmo_ReturnValue;                      // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_59[0x7];                                       // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAudioComponent*                        CallFunc_SpawnSoundAttached_ReturnValue;           // 0x0060(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_Add_ByteByte_ReturnValue;                 // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x0069(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_GetCurrentMaxAmmo_ReturnValue;            // 0x006A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_ByteByte_ReturnValue;                // 0x006B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x006C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_GetAmmo_ReturnValue_1;                    // 0x006D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue_1;          // 0x006E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_GetCurrentMaxAmmo_ReturnValue_1;          // 0x006F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_ByteByte_ReturnValue_1;              // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x0071(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_72[0x6];                                       // 0x0072(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0078(0x0008)(NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue;           // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_81[0x7];                                       // 0x0081(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAudioComponent*                        CallFunc_SpawnSound2D_ReturnValue;                 // 0x0088(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        CallFunc_SpawnSound2D_ReturnValue_1;               // 0x0090(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AMordhauCharacter*                      CallFunc_GetParentCharacter_ReturnValue;           // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AMordhauCharacter*                      K2Node_Event_Character_2;                          // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AMordhauCharacter*                      K2Node_Event_Character_1;                          // 0x00A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AMordhauCharacter*                      K2Node_Event_Character;                            // 0x00B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                K2Node_Event_Origin;                               // 0x00B8(0x000C)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               K2Node_Event_Orientation;                          // 0x00C4(0x000C)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class AController*                            K2Node_Event_OwningController;                     // 0x00D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_ExpectedDelay;                        // 0x00D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_HolyGun_DIH_C_ExecuteUbergraph_BP_HolyGun_DIH) == 0x000008, "Wrong alignment on BP_HolyGun_DIH_C_ExecuteUbergraph_BP_HolyGun_DIH");
static_assert(sizeof(BP_HolyGun_DIH_C_ExecuteUbergraph_BP_HolyGun_DIH) == 0x0000E0, "Wrong size on BP_HolyGun_DIH_C_ExecuteUbergraph_BP_HolyGun_DIH");
static_assert(offsetof(BP_HolyGun_DIH_C_ExecuteUbergraph_BP_HolyGun_DIH, EntryPoint) == 0x000000, "Member 'BP_HolyGun_DIH_C_ExecuteUbergraph_BP_HolyGun_DIH::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_HolyGun_DIH_C_ExecuteUbergraph_BP_HolyGun_DIH, CallFunc_GetGameState_ReturnValue) == 0x000008, "Member 'BP_HolyGun_DIH_C_ExecuteUbergraph_BP_HolyGun_DIH::CallFunc_GetGameState_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_HolyGun_DIH_C_ExecuteUbergraph_BP_HolyGun_DIH, K2Node_DynamicCast_AsBP_Demon_Horde_Gamestate) == 0x000010, "Member 'BP_HolyGun_DIH_C_ExecuteUbergraph_BP_HolyGun_DIH::K2Node_DynamicCast_AsBP_Demon_Horde_Gamestate' has a wrong offset!");
static_assert(offsetof(BP_HolyGun_DIH_C_ExecuteUbergraph_BP_HolyGun_DIH, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'BP_HolyGun_DIH_C_ExecuteUbergraph_BP_HolyGun_DIH::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_HolyGun_DIH_C_ExecuteUbergraph_BP_HolyGun_DIH, CallFunc_CanDoHolyGunEasterEgg_Return_Value) == 0x000019, "Member 'BP_HolyGun_DIH_C_ExecuteUbergraph_BP_HolyGun_DIH::CallFunc_CanDoHolyGunEasterEgg_Return_Value' has a wrong offset!");
static_assert(offsetof(BP_HolyGun_DIH_C_ExecuteUbergraph_BP_HolyGun_DIH, K2Node_CreateDelegate_OutputDelegate) == 0x00001C, "Member 'BP_HolyGun_DIH_C_ExecuteUbergraph_BP_HolyGun_DIH::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_HolyGun_DIH_C_ExecuteUbergraph_BP_HolyGun_DIH, CallFunc_BreakVector2D_X) == 0x00002C, "Member 'BP_HolyGun_DIH_C_ExecuteUbergraph_BP_HolyGun_DIH::CallFunc_BreakVector2D_X' has a wrong offset!");
static_assert(offsetof(BP_HolyGun_DIH_C_ExecuteUbergraph_BP_HolyGun_DIH, CallFunc_BreakVector2D_Y) == 0x000030, "Member 'BP_HolyGun_DIH_C_ExecuteUbergraph_BP_HolyGun_DIH::CallFunc_BreakVector2D_Y' has a wrong offset!");
static_assert(offsetof(BP_HolyGun_DIH_C_ExecuteUbergraph_BP_HolyGun_DIH, CallFunc_BreakVector2D_X_1) == 0x000034, "Member 'BP_HolyGun_DIH_C_ExecuteUbergraph_BP_HolyGun_DIH::CallFunc_BreakVector2D_X_1' has a wrong offset!");
static_assert(offsetof(BP_HolyGun_DIH_C_ExecuteUbergraph_BP_HolyGun_DIH, CallFunc_BreakVector2D_Y_1) == 0x000038, "Member 'BP_HolyGun_DIH_C_ExecuteUbergraph_BP_HolyGun_DIH::CallFunc_BreakVector2D_Y_1' has a wrong offset!");
static_assert(offsetof(BP_HolyGun_DIH_C_ExecuteUbergraph_BP_HolyGun_DIH, CallFunc_RandomFloatInRange_ReturnValue) == 0x00003C, "Member 'BP_HolyGun_DIH_C_ExecuteUbergraph_BP_HolyGun_DIH::CallFunc_RandomFloatInRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_HolyGun_DIH_C_ExecuteUbergraph_BP_HolyGun_DIH, CallFunc_RandomFloatInRange_ReturnValue_1) == 0x000040, "Member 'BP_HolyGun_DIH_C_ExecuteUbergraph_BP_HolyGun_DIH::CallFunc_RandomFloatInRange_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_HolyGun_DIH_C_ExecuteUbergraph_BP_HolyGun_DIH, CallFunc_HasAuthority_ReturnValue) == 0x000044, "Member 'BP_HolyGun_DIH_C_ExecuteUbergraph_BP_HolyGun_DIH::CallFunc_HasAuthority_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_HolyGun_DIH_C_ExecuteUbergraph_BP_HolyGun_DIH, K2Node_Event_Character_3) == 0x000048, "Member 'BP_HolyGun_DIH_C_ExecuteUbergraph_BP_HolyGun_DIH::K2Node_Event_Character_3' has a wrong offset!");
static_assert(offsetof(BP_HolyGun_DIH_C_ExecuteUbergraph_BP_HolyGun_DIH, CallFunc_SpawnEmitterAttached_ReturnValue) == 0x000050, "Member 'BP_HolyGun_DIH_C_ExecuteUbergraph_BP_HolyGun_DIH::CallFunc_SpawnEmitterAttached_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_HolyGun_DIH_C_ExecuteUbergraph_BP_HolyGun_DIH, CallFunc_GetAmmo_ReturnValue) == 0x000058, "Member 'BP_HolyGun_DIH_C_ExecuteUbergraph_BP_HolyGun_DIH::CallFunc_GetAmmo_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_HolyGun_DIH_C_ExecuteUbergraph_BP_HolyGun_DIH, CallFunc_SpawnSoundAttached_ReturnValue) == 0x000060, "Member 'BP_HolyGun_DIH_C_ExecuteUbergraph_BP_HolyGun_DIH::CallFunc_SpawnSoundAttached_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_HolyGun_DIH_C_ExecuteUbergraph_BP_HolyGun_DIH, CallFunc_Add_ByteByte_ReturnValue) == 0x000068, "Member 'BP_HolyGun_DIH_C_ExecuteUbergraph_BP_HolyGun_DIH::CallFunc_Add_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_HolyGun_DIH_C_ExecuteUbergraph_BP_HolyGun_DIH, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x000069, "Member 'BP_HolyGun_DIH_C_ExecuteUbergraph_BP_HolyGun_DIH::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_HolyGun_DIH_C_ExecuteUbergraph_BP_HolyGun_DIH, CallFunc_GetCurrentMaxAmmo_ReturnValue) == 0x00006A, "Member 'BP_HolyGun_DIH_C_ExecuteUbergraph_BP_HolyGun_DIH::CallFunc_GetCurrentMaxAmmo_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_HolyGun_DIH_C_ExecuteUbergraph_BP_HolyGun_DIH, CallFunc_Less_ByteByte_ReturnValue) == 0x00006B, "Member 'BP_HolyGun_DIH_C_ExecuteUbergraph_BP_HolyGun_DIH::CallFunc_Less_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_HolyGun_DIH_C_ExecuteUbergraph_BP_HolyGun_DIH, CallFunc_BooleanAND_ReturnValue) == 0x00006C, "Member 'BP_HolyGun_DIH_C_ExecuteUbergraph_BP_HolyGun_DIH::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_HolyGun_DIH_C_ExecuteUbergraph_BP_HolyGun_DIH, CallFunc_GetAmmo_ReturnValue_1) == 0x00006D, "Member 'BP_HolyGun_DIH_C_ExecuteUbergraph_BP_HolyGun_DIH::CallFunc_GetAmmo_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_HolyGun_DIH_C_ExecuteUbergraph_BP_HolyGun_DIH, CallFunc_NotEqual_ByteByte_ReturnValue_1) == 0x00006E, "Member 'BP_HolyGun_DIH_C_ExecuteUbergraph_BP_HolyGun_DIH::CallFunc_NotEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_HolyGun_DIH_C_ExecuteUbergraph_BP_HolyGun_DIH, CallFunc_GetCurrentMaxAmmo_ReturnValue_1) == 0x00006F, "Member 'BP_HolyGun_DIH_C_ExecuteUbergraph_BP_HolyGun_DIH::CallFunc_GetCurrentMaxAmmo_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_HolyGun_DIH_C_ExecuteUbergraph_BP_HolyGun_DIH, CallFunc_Less_ByteByte_ReturnValue_1) == 0x000070, "Member 'BP_HolyGun_DIH_C_ExecuteUbergraph_BP_HolyGun_DIH::CallFunc_Less_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_HolyGun_DIH_C_ExecuteUbergraph_BP_HolyGun_DIH, CallFunc_BooleanAND_ReturnValue_1) == 0x000071, "Member 'BP_HolyGun_DIH_C_ExecuteUbergraph_BP_HolyGun_DIH::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_HolyGun_DIH_C_ExecuteUbergraph_BP_HolyGun_DIH, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000078, "Member 'BP_HolyGun_DIH_C_ExecuteUbergraph_BP_HolyGun_DIH::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_HolyGun_DIH_C_ExecuteUbergraph_BP_HolyGun_DIH, CallFunc_Greater_FloatFloat_ReturnValue) == 0x000080, "Member 'BP_HolyGun_DIH_C_ExecuteUbergraph_BP_HolyGun_DIH::CallFunc_Greater_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_HolyGun_DIH_C_ExecuteUbergraph_BP_HolyGun_DIH, CallFunc_SpawnSound2D_ReturnValue) == 0x000088, "Member 'BP_HolyGun_DIH_C_ExecuteUbergraph_BP_HolyGun_DIH::CallFunc_SpawnSound2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_HolyGun_DIH_C_ExecuteUbergraph_BP_HolyGun_DIH, CallFunc_SpawnSound2D_ReturnValue_1) == 0x000090, "Member 'BP_HolyGun_DIH_C_ExecuteUbergraph_BP_HolyGun_DIH::CallFunc_SpawnSound2D_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_HolyGun_DIH_C_ExecuteUbergraph_BP_HolyGun_DIH, CallFunc_GetParentCharacter_ReturnValue) == 0x000098, "Member 'BP_HolyGun_DIH_C_ExecuteUbergraph_BP_HolyGun_DIH::CallFunc_GetParentCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_HolyGun_DIH_C_ExecuteUbergraph_BP_HolyGun_DIH, K2Node_Event_Character_2) == 0x0000A0, "Member 'BP_HolyGun_DIH_C_ExecuteUbergraph_BP_HolyGun_DIH::K2Node_Event_Character_2' has a wrong offset!");
static_assert(offsetof(BP_HolyGun_DIH_C_ExecuteUbergraph_BP_HolyGun_DIH, K2Node_Event_Character_1) == 0x0000A8, "Member 'BP_HolyGun_DIH_C_ExecuteUbergraph_BP_HolyGun_DIH::K2Node_Event_Character_1' has a wrong offset!");
static_assert(offsetof(BP_HolyGun_DIH_C_ExecuteUbergraph_BP_HolyGun_DIH, K2Node_Event_Character) == 0x0000B0, "Member 'BP_HolyGun_DIH_C_ExecuteUbergraph_BP_HolyGun_DIH::K2Node_Event_Character' has a wrong offset!");
static_assert(offsetof(BP_HolyGun_DIH_C_ExecuteUbergraph_BP_HolyGun_DIH, K2Node_Event_Origin) == 0x0000B8, "Member 'BP_HolyGun_DIH_C_ExecuteUbergraph_BP_HolyGun_DIH::K2Node_Event_Origin' has a wrong offset!");
static_assert(offsetof(BP_HolyGun_DIH_C_ExecuteUbergraph_BP_HolyGun_DIH, K2Node_Event_Orientation) == 0x0000C4, "Member 'BP_HolyGun_DIH_C_ExecuteUbergraph_BP_HolyGun_DIH::K2Node_Event_Orientation' has a wrong offset!");
static_assert(offsetof(BP_HolyGun_DIH_C_ExecuteUbergraph_BP_HolyGun_DIH, K2Node_Event_OwningController) == 0x0000D0, "Member 'BP_HolyGun_DIH_C_ExecuteUbergraph_BP_HolyGun_DIH::K2Node_Event_OwningController' has a wrong offset!");
static_assert(offsetof(BP_HolyGun_DIH_C_ExecuteUbergraph_BP_HolyGun_DIH, K2Node_Event_ExpectedDelay) == 0x0000D8, "Member 'BP_HolyGun_DIH_C_ExecuteUbergraph_BP_HolyGun_DIH::K2Node_Event_ExpectedDelay' has a wrong offset!");

// Function BP_HolyGun_DIH.BP_HolyGun_DIH_C.FireProjectile
// 0x0028 (0x0028 - 0x0000)
struct BP_HolyGun_DIH_C_FireProjectile final
{
public:
	struct FVector                                Origin;                                            // 0x0000(0x000C)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               Orientation;                                       // 0x000C(0x000C)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	class AController*                            OwningController;                                  // 0x0018(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ExpectedDelay;                                     // 0x0020(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_HolyGun_DIH_C_FireProjectile) == 0x000008, "Wrong alignment on BP_HolyGun_DIH_C_FireProjectile");
static_assert(sizeof(BP_HolyGun_DIH_C_FireProjectile) == 0x000028, "Wrong size on BP_HolyGun_DIH_C_FireProjectile");
static_assert(offsetof(BP_HolyGun_DIH_C_FireProjectile, Origin) == 0x000000, "Member 'BP_HolyGun_DIH_C_FireProjectile::Origin' has a wrong offset!");
static_assert(offsetof(BP_HolyGun_DIH_C_FireProjectile, Orientation) == 0x00000C, "Member 'BP_HolyGun_DIH_C_FireProjectile::Orientation' has a wrong offset!");
static_assert(offsetof(BP_HolyGun_DIH_C_FireProjectile, OwningController) == 0x000018, "Member 'BP_HolyGun_DIH_C_FireProjectile::OwningController' has a wrong offset!");
static_assert(offsetof(BP_HolyGun_DIH_C_FireProjectile, ExpectedDelay) == 0x000020, "Member 'BP_HolyGun_DIH_C_FireProjectile::ExpectedDelay' has a wrong offset!");

// Function BP_HolyGun_DIH.BP_HolyGun_DIH_C.OnEquipped
// 0x0008 (0x0008 - 0x0000)
struct BP_HolyGun_DIH_C_OnEquipped final
{
public:
	class AMordhauCharacter*                      Character;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_HolyGun_DIH_C_OnEquipped) == 0x000008, "Wrong alignment on BP_HolyGun_DIH_C_OnEquipped");
static_assert(sizeof(BP_HolyGun_DIH_C_OnEquipped) == 0x000008, "Wrong size on BP_HolyGun_DIH_C_OnEquipped");
static_assert(offsetof(BP_HolyGun_DIH_C_OnEquipped, Character) == 0x000000, "Member 'BP_HolyGun_DIH_C_OnEquipped::Character' has a wrong offset!");

// Function BP_HolyGun_DIH.BP_HolyGun_DIH_C.OnDropped
// 0x0008 (0x0008 - 0x0000)
struct BP_HolyGun_DIH_C_OnDropped final
{
public:
	class AMordhauCharacter*                      Character;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_HolyGun_DIH_C_OnDropped) == 0x000008, "Wrong alignment on BP_HolyGun_DIH_C_OnDropped");
static_assert(sizeof(BP_HolyGun_DIH_C_OnDropped) == 0x000008, "Wrong size on BP_HolyGun_DIH_C_OnDropped");
static_assert(offsetof(BP_HolyGun_DIH_C_OnDropped, Character) == 0x000000, "Member 'BP_HolyGun_DIH_C_OnDropped::Character' has a wrong offset!");

// Function BP_HolyGun_DIH.BP_HolyGun_DIH_C.OnHolsteredOrDropped
// 0x0008 (0x0008 - 0x0000)
struct BP_HolyGun_DIH_C_OnHolsteredOrDropped final
{
public:
	class AMordhauCharacter*                      Character;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_HolyGun_DIH_C_OnHolsteredOrDropped) == 0x000008, "Wrong alignment on BP_HolyGun_DIH_C_OnHolsteredOrDropped");
static_assert(sizeof(BP_HolyGun_DIH_C_OnHolsteredOrDropped) == 0x000008, "Wrong size on BP_HolyGun_DIH_C_OnHolsteredOrDropped");
static_assert(offsetof(BP_HolyGun_DIH_C_OnHolsteredOrDropped, Character) == 0x000000, "Member 'BP_HolyGun_DIH_C_OnHolsteredOrDropped::Character' has a wrong offset!");

// Function BP_HolyGun_DIH.BP_HolyGun_DIH_C.OnPickedUp
// 0x0008 (0x0008 - 0x0000)
struct BP_HolyGun_DIH_C_OnPickedUp final
{
public:
	class AMordhauCharacter*                      Character;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_HolyGun_DIH_C_OnPickedUp) == 0x000008, "Wrong alignment on BP_HolyGun_DIH_C_OnPickedUp");
static_assert(sizeof(BP_HolyGun_DIH_C_OnPickedUp) == 0x000008, "Wrong size on BP_HolyGun_DIH_C_OnPickedUp");
static_assert(offsetof(BP_HolyGun_DIH_C_OnPickedUp, Character) == 0x000000, "Member 'BP_HolyGun_DIH_C_OnPickedUp::Character' has a wrong offset!");

}

