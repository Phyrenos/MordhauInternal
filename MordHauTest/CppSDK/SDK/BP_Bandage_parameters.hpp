﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Bandage

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function BP_Bandage.BP_Bandage_C.ExecuteUbergraph_BP_Bandage
// 0x0058 (0x0058 - 0x0000)
struct BP_Bandage_C_ExecuteUbergraph_BP_Bandage final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasAuthority_ReturnValue;                 // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_HasAuthority_ReturnValue_1;               // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_19[0x3];                                       // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                K2Node_Event_Origin;                               // 0x001C(0x000C)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               K2Node_Event_Orientation;                          // 0x0028(0x000C)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_34[0x4];                                       // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AController*                            K2Node_Event_OwningController;                     // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_ExpectedDelay;                        // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_44[0x4];                                       // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0048(0x0008)(NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue;           // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_GetAmmo_ReturnValue;                      // 0x0051(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_GetCurrentMaxAmmo_ReturnValue;            // 0x0052(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_Add_ByteByte_ReturnValue;                 // 0x0053(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_ByteByte_ReturnValue;                // 0x0054(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x0055(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0056(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_Bandage_C_ExecuteUbergraph_BP_Bandage) == 0x000008, "Wrong alignment on BP_Bandage_C_ExecuteUbergraph_BP_Bandage");
static_assert(sizeof(BP_Bandage_C_ExecuteUbergraph_BP_Bandage) == 0x000058, "Wrong size on BP_Bandage_C_ExecuteUbergraph_BP_Bandage");
static_assert(offsetof(BP_Bandage_C_ExecuteUbergraph_BP_Bandage, EntryPoint) == 0x000000, "Member 'BP_Bandage_C_ExecuteUbergraph_BP_Bandage::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_Bandage_C_ExecuteUbergraph_BP_Bandage, CallFunc_HasAuthority_ReturnValue) == 0x000004, "Member 'BP_Bandage_C_ExecuteUbergraph_BP_Bandage::CallFunc_HasAuthority_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Bandage_C_ExecuteUbergraph_BP_Bandage, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'BP_Bandage_C_ExecuteUbergraph_BP_Bandage::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_Bandage_C_ExecuteUbergraph_BP_Bandage, CallFunc_HasAuthority_ReturnValue_1) == 0x000018, "Member 'BP_Bandage_C_ExecuteUbergraph_BP_Bandage::CallFunc_HasAuthority_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Bandage_C_ExecuteUbergraph_BP_Bandage, K2Node_Event_Origin) == 0x00001C, "Member 'BP_Bandage_C_ExecuteUbergraph_BP_Bandage::K2Node_Event_Origin' has a wrong offset!");
static_assert(offsetof(BP_Bandage_C_ExecuteUbergraph_BP_Bandage, K2Node_Event_Orientation) == 0x000028, "Member 'BP_Bandage_C_ExecuteUbergraph_BP_Bandage::K2Node_Event_Orientation' has a wrong offset!");
static_assert(offsetof(BP_Bandage_C_ExecuteUbergraph_BP_Bandage, K2Node_Event_OwningController) == 0x000038, "Member 'BP_Bandage_C_ExecuteUbergraph_BP_Bandage::K2Node_Event_OwningController' has a wrong offset!");
static_assert(offsetof(BP_Bandage_C_ExecuteUbergraph_BP_Bandage, K2Node_Event_ExpectedDelay) == 0x000040, "Member 'BP_Bandage_C_ExecuteUbergraph_BP_Bandage::K2Node_Event_ExpectedDelay' has a wrong offset!");
static_assert(offsetof(BP_Bandage_C_ExecuteUbergraph_BP_Bandage, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000048, "Member 'BP_Bandage_C_ExecuteUbergraph_BP_Bandage::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Bandage_C_ExecuteUbergraph_BP_Bandage, CallFunc_Greater_FloatFloat_ReturnValue) == 0x000050, "Member 'BP_Bandage_C_ExecuteUbergraph_BP_Bandage::CallFunc_Greater_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Bandage_C_ExecuteUbergraph_BP_Bandage, CallFunc_GetAmmo_ReturnValue) == 0x000051, "Member 'BP_Bandage_C_ExecuteUbergraph_BP_Bandage::CallFunc_GetAmmo_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Bandage_C_ExecuteUbergraph_BP_Bandage, CallFunc_GetCurrentMaxAmmo_ReturnValue) == 0x000052, "Member 'BP_Bandage_C_ExecuteUbergraph_BP_Bandage::CallFunc_GetCurrentMaxAmmo_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Bandage_C_ExecuteUbergraph_BP_Bandage, CallFunc_Add_ByteByte_ReturnValue) == 0x000053, "Member 'BP_Bandage_C_ExecuteUbergraph_BP_Bandage::CallFunc_Add_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Bandage_C_ExecuteUbergraph_BP_Bandage, CallFunc_Less_ByteByte_ReturnValue) == 0x000054, "Member 'BP_Bandage_C_ExecuteUbergraph_BP_Bandage::CallFunc_Less_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Bandage_C_ExecuteUbergraph_BP_Bandage, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x000055, "Member 'BP_Bandage_C_ExecuteUbergraph_BP_Bandage::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Bandage_C_ExecuteUbergraph_BP_Bandage, CallFunc_BooleanAND_ReturnValue) == 0x000056, "Member 'BP_Bandage_C_ExecuteUbergraph_BP_Bandage::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

// Function BP_Bandage.BP_Bandage_C.FireProjectile
// 0x0028 (0x0028 - 0x0000)
struct BP_Bandage_C_FireProjectile final
{
public:
	struct FVector                                Origin;                                            // 0x0000(0x000C)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               Orientation;                                       // 0x000C(0x000C)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	class AController*                            OwningController;                                  // 0x0018(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ExpectedDelay;                                     // 0x0020(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Bandage_C_FireProjectile) == 0x000008, "Wrong alignment on BP_Bandage_C_FireProjectile");
static_assert(sizeof(BP_Bandage_C_FireProjectile) == 0x000028, "Wrong size on BP_Bandage_C_FireProjectile");
static_assert(offsetof(BP_Bandage_C_FireProjectile, Origin) == 0x000000, "Member 'BP_Bandage_C_FireProjectile::Origin' has a wrong offset!");
static_assert(offsetof(BP_Bandage_C_FireProjectile, Orientation) == 0x00000C, "Member 'BP_Bandage_C_FireProjectile::Orientation' has a wrong offset!");
static_assert(offsetof(BP_Bandage_C_FireProjectile, OwningController) == 0x000018, "Member 'BP_Bandage_C_FireProjectile::OwningController' has a wrong offset!");
static_assert(offsetof(BP_Bandage_C_FireProjectile, ExpectedDelay) == 0x000020, "Member 'BP_Bandage_C_FireProjectile::ExpectedDelay' has a wrong offset!");

// Function BP_Bandage.BP_Bandage_C.ApplyHeal
// 0x0018 (0x0018 - 0x0000)
struct BP_Bandage_C_ApplyHeal final
{
public:
	class AMordhauCharacter*                      Char;                                              // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_GetAmmo_ReturnValue;                      // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_Subtract_ByteByte_ReturnValue;            // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_GetAmmo_ReturnValue_1;                    // 0x000B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_ByteByte_ReturnValue;             // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x000D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetIsDead_ReturnValue;                    // 0x000E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_F[0x1];                                        // 0x000F(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class AMordhauCharacter*                      CallFunc_GetParentCharacter_ReturnValue;           // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Bandage_C_ApplyHeal) == 0x000008, "Wrong alignment on BP_Bandage_C_ApplyHeal");
static_assert(sizeof(BP_Bandage_C_ApplyHeal) == 0x000018, "Wrong size on BP_Bandage_C_ApplyHeal");
static_assert(offsetof(BP_Bandage_C_ApplyHeal, Char) == 0x000000, "Member 'BP_Bandage_C_ApplyHeal::Char' has a wrong offset!");
static_assert(offsetof(BP_Bandage_C_ApplyHeal, CallFunc_GetAmmo_ReturnValue) == 0x000008, "Member 'BP_Bandage_C_ApplyHeal::CallFunc_GetAmmo_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Bandage_C_ApplyHeal, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x000009, "Member 'BP_Bandage_C_ApplyHeal::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Bandage_C_ApplyHeal, CallFunc_Subtract_ByteByte_ReturnValue) == 0x00000A, "Member 'BP_Bandage_C_ApplyHeal::CallFunc_Subtract_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Bandage_C_ApplyHeal, CallFunc_GetAmmo_ReturnValue_1) == 0x00000B, "Member 'BP_Bandage_C_ApplyHeal::CallFunc_GetAmmo_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Bandage_C_ApplyHeal, CallFunc_Greater_ByteByte_ReturnValue) == 0x00000C, "Member 'BP_Bandage_C_ApplyHeal::CallFunc_Greater_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Bandage_C_ApplyHeal, CallFunc_IsValid_ReturnValue) == 0x00000D, "Member 'BP_Bandage_C_ApplyHeal::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Bandage_C_ApplyHeal, CallFunc_GetIsDead_ReturnValue) == 0x00000E, "Member 'BP_Bandage_C_ApplyHeal::CallFunc_GetIsDead_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Bandage_C_ApplyHeal, CallFunc_GetParentCharacter_ReturnValue) == 0x000010, "Member 'BP_Bandage_C_ApplyHeal::CallFunc_GetParentCharacter_ReturnValue' has a wrong offset!");

// Function BP_Bandage.BP_Bandage_C.OnRequestFire
// 0x0010 (0x0010 - 0x0000)
struct BP_Bandage_C_OnRequestFire final
{
public:
	class AMordhauCharacter*                      Character;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_OnRequestFire_ReturnValue;                // 0x000B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_ByteByte_ReturnValue;                // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x000D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_Bandage_C_OnRequestFire) == 0x000008, "Wrong alignment on BP_Bandage_C_OnRequestFire");
static_assert(sizeof(BP_Bandage_C_OnRequestFire) == 0x000010, "Wrong size on BP_Bandage_C_OnRequestFire");
static_assert(offsetof(BP_Bandage_C_OnRequestFire, Character) == 0x000000, "Member 'BP_Bandage_C_OnRequestFire::Character' has a wrong offset!");
static_assert(offsetof(BP_Bandage_C_OnRequestFire, ReturnValue) == 0x000008, "Member 'BP_Bandage_C_OnRequestFire::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Bandage_C_OnRequestFire, CallFunc_IsValid_ReturnValue) == 0x000009, "Member 'BP_Bandage_C_OnRequestFire::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Bandage_C_OnRequestFire, CallFunc_Not_PreBool_ReturnValue) == 0x00000A, "Member 'BP_Bandage_C_OnRequestFire::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Bandage_C_OnRequestFire, CallFunc_OnRequestFire_ReturnValue) == 0x00000B, "Member 'BP_Bandage_C_OnRequestFire::CallFunc_OnRequestFire_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Bandage_C_OnRequestFire, CallFunc_Less_ByteByte_ReturnValue) == 0x00000C, "Member 'BP_Bandage_C_OnRequestFire::CallFunc_Less_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Bandage_C_OnRequestFire, CallFunc_BooleanAND_ReturnValue) == 0x00000D, "Member 'BP_Bandage_C_OnRequestFire::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

// Function BP_Bandage.BP_Bandage_C.OnRequestModeSwitch
// 0x0010 (0x0010 - 0x0000)
struct BP_Bandage_C_OnRequestModeSwitch final
{
public:
	class AMordhauCharacter*                      Character;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_OnRequestModeSwitch_ReturnValue;          // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_ByteByte_ReturnValue;                // 0x000B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x000D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_Bandage_C_OnRequestModeSwitch) == 0x000008, "Wrong alignment on BP_Bandage_C_OnRequestModeSwitch");
static_assert(sizeof(BP_Bandage_C_OnRequestModeSwitch) == 0x000010, "Wrong size on BP_Bandage_C_OnRequestModeSwitch");
static_assert(offsetof(BP_Bandage_C_OnRequestModeSwitch, Character) == 0x000000, "Member 'BP_Bandage_C_OnRequestModeSwitch::Character' has a wrong offset!");
static_assert(offsetof(BP_Bandage_C_OnRequestModeSwitch, ReturnValue) == 0x000008, "Member 'BP_Bandage_C_OnRequestModeSwitch::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Bandage_C_OnRequestModeSwitch, CallFunc_IsValid_ReturnValue) == 0x000009, "Member 'BP_Bandage_C_OnRequestModeSwitch::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Bandage_C_OnRequestModeSwitch, CallFunc_OnRequestModeSwitch_ReturnValue) == 0x00000A, "Member 'BP_Bandage_C_OnRequestModeSwitch::CallFunc_OnRequestModeSwitch_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Bandage_C_OnRequestModeSwitch, CallFunc_Less_ByteByte_ReturnValue) == 0x00000B, "Member 'BP_Bandage_C_OnRequestModeSwitch::CallFunc_Less_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Bandage_C_OnRequestModeSwitch, CallFunc_Not_PreBool_ReturnValue) == 0x00000C, "Member 'BP_Bandage_C_OnRequestModeSwitch::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Bandage_C_OnRequestModeSwitch, CallFunc_BooleanAND_ReturnValue) == 0x00000D, "Member 'BP_Bandage_C_OnRequestModeSwitch::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

}

