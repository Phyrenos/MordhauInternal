﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_SpawnProtectionBox

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function BP_SpawnProtectionBox.BP_SpawnProtectionBox_C.ExecuteUbergraph_BP_SpawnProtectionBox
// 0x0038 (0x0038 - 0x0000)
struct BP_SpawnProtectionBox_C_ExecuteUbergraph_BP_SpawnProtectionBox final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 K2Node_Event_OtherActor_1;                         // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_Event_OtherActor;                           // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AMordhauCharacter*                      K2Node_DynamicCast_AsMordhau_Character;            // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AMordhauCharacter*                      K2Node_DynamicCast_AsMordhau_Character_1;          // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_SpawnProtectionBox_C_ExecuteUbergraph_BP_SpawnProtectionBox) == 0x000008, "Wrong alignment on BP_SpawnProtectionBox_C_ExecuteUbergraph_BP_SpawnProtectionBox");
static_assert(sizeof(BP_SpawnProtectionBox_C_ExecuteUbergraph_BP_SpawnProtectionBox) == 0x000038, "Wrong size on BP_SpawnProtectionBox_C_ExecuteUbergraph_BP_SpawnProtectionBox");
static_assert(offsetof(BP_SpawnProtectionBox_C_ExecuteUbergraph_BP_SpawnProtectionBox, EntryPoint) == 0x000000, "Member 'BP_SpawnProtectionBox_C_ExecuteUbergraph_BP_SpawnProtectionBox::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_SpawnProtectionBox_C_ExecuteUbergraph_BP_SpawnProtectionBox, K2Node_Event_OtherActor_1) == 0x000008, "Member 'BP_SpawnProtectionBox_C_ExecuteUbergraph_BP_SpawnProtectionBox::K2Node_Event_OtherActor_1' has a wrong offset!");
static_assert(offsetof(BP_SpawnProtectionBox_C_ExecuteUbergraph_BP_SpawnProtectionBox, K2Node_Event_OtherActor) == 0x000010, "Member 'BP_SpawnProtectionBox_C_ExecuteUbergraph_BP_SpawnProtectionBox::K2Node_Event_OtherActor' has a wrong offset!");
static_assert(offsetof(BP_SpawnProtectionBox_C_ExecuteUbergraph_BP_SpawnProtectionBox, K2Node_DynamicCast_AsMordhau_Character) == 0x000018, "Member 'BP_SpawnProtectionBox_C_ExecuteUbergraph_BP_SpawnProtectionBox::K2Node_DynamicCast_AsMordhau_Character' has a wrong offset!");
static_assert(offsetof(BP_SpawnProtectionBox_C_ExecuteUbergraph_BP_SpawnProtectionBox, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'BP_SpawnProtectionBox_C_ExecuteUbergraph_BP_SpawnProtectionBox::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_SpawnProtectionBox_C_ExecuteUbergraph_BP_SpawnProtectionBox, K2Node_DynamicCast_AsMordhau_Character_1) == 0x000028, "Member 'BP_SpawnProtectionBox_C_ExecuteUbergraph_BP_SpawnProtectionBox::K2Node_DynamicCast_AsMordhau_Character_1' has a wrong offset!");
static_assert(offsetof(BP_SpawnProtectionBox_C_ExecuteUbergraph_BP_SpawnProtectionBox, K2Node_DynamicCast_bSuccess_1) == 0x000030, "Member 'BP_SpawnProtectionBox_C_ExecuteUbergraph_BP_SpawnProtectionBox::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");

// Function BP_SpawnProtectionBox.BP_SpawnProtectionBox_C.ReceiveActorEndOverlap
// 0x0008 (0x0008 - 0x0000)
struct BP_SpawnProtectionBox_C_ReceiveActorEndOverlap final
{
public:
	class AActor*                                 OtherActor;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SpawnProtectionBox_C_ReceiveActorEndOverlap) == 0x000008, "Wrong alignment on BP_SpawnProtectionBox_C_ReceiveActorEndOverlap");
static_assert(sizeof(BP_SpawnProtectionBox_C_ReceiveActorEndOverlap) == 0x000008, "Wrong size on BP_SpawnProtectionBox_C_ReceiveActorEndOverlap");
static_assert(offsetof(BP_SpawnProtectionBox_C_ReceiveActorEndOverlap, OtherActor) == 0x000000, "Member 'BP_SpawnProtectionBox_C_ReceiveActorEndOverlap::OtherActor' has a wrong offset!");

// Function BP_SpawnProtectionBox.BP_SpawnProtectionBox_C.ReceiveActorBeginOverlap
// 0x0008 (0x0008 - 0x0000)
struct BP_SpawnProtectionBox_C_ReceiveActorBeginOverlap final
{
public:
	class AActor*                                 OtherActor;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SpawnProtectionBox_C_ReceiveActorBeginOverlap) == 0x000008, "Wrong alignment on BP_SpawnProtectionBox_C_ReceiveActorBeginOverlap");
static_assert(sizeof(BP_SpawnProtectionBox_C_ReceiveActorBeginOverlap) == 0x000008, "Wrong size on BP_SpawnProtectionBox_C_ReceiveActorBeginOverlap");
static_assert(offsetof(BP_SpawnProtectionBox_C_ReceiveActorBeginOverlap, OtherActor) == 0x000000, "Member 'BP_SpawnProtectionBox_C_ReceiveActorBeginOverlap::OtherActor' has a wrong offset!");

// Function BP_SpawnProtectionBox.BP_SpawnProtectionBox_C.UserConstructionScript
// 0x0030 (0x0030 - 0x0000)
struct BP_SpawnProtectionBox_C_UserConstructionScript final
{
public:
	int32                                         Temp_int_Variable;                                 // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 Temp_class_Variable;                               // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 Temp_class_Variable_1;                             // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1A[0x6];                                       // 0x001A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 K2Node_Select_Default;                             // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_SpawnProtectionBox_C_UserConstructionScript) == 0x000008, "Wrong alignment on BP_SpawnProtectionBox_C_UserConstructionScript");
static_assert(sizeof(BP_SpawnProtectionBox_C_UserConstructionScript) == 0x000030, "Wrong size on BP_SpawnProtectionBox_C_UserConstructionScript");
static_assert(offsetof(BP_SpawnProtectionBox_C_UserConstructionScript, Temp_int_Variable) == 0x000000, "Member 'BP_SpawnProtectionBox_C_UserConstructionScript::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(BP_SpawnProtectionBox_C_UserConstructionScript, Temp_class_Variable) == 0x000008, "Member 'BP_SpawnProtectionBox_C_UserConstructionScript::Temp_class_Variable' has a wrong offset!");
static_assert(offsetof(BP_SpawnProtectionBox_C_UserConstructionScript, Temp_class_Variable_1) == 0x000010, "Member 'BP_SpawnProtectionBox_C_UserConstructionScript::Temp_class_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_SpawnProtectionBox_C_UserConstructionScript, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000018, "Member 'BP_SpawnProtectionBox_C_UserConstructionScript::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SpawnProtectionBox_C_UserConstructionScript, CallFunc_Less_IntInt_ReturnValue) == 0x000019, "Member 'BP_SpawnProtectionBox_C_UserConstructionScript::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SpawnProtectionBox_C_UserConstructionScript, K2Node_Select_Default) == 0x000020, "Member 'BP_SpawnProtectionBox_C_UserConstructionScript::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(BP_SpawnProtectionBox_C_UserConstructionScript, CallFunc_BooleanAND_ReturnValue) == 0x000028, "Member 'BP_SpawnProtectionBox_C_UserConstructionScript::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

// Function BP_SpawnProtectionBox.BP_SpawnProtectionBox_C.Enable
// 0x0002 (0x0002 - 0x0000)
struct BP_SpawnProtectionBox_C_Enable final
{
public:
	ECollisionEnabled                             CallFunc_GetCollisionEnabled_ReturnValue;          // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_SpawnProtectionBox_C_Enable) == 0x000001, "Wrong alignment on BP_SpawnProtectionBox_C_Enable");
static_assert(sizeof(BP_SpawnProtectionBox_C_Enable) == 0x000002, "Wrong size on BP_SpawnProtectionBox_C_Enable");
static_assert(offsetof(BP_SpawnProtectionBox_C_Enable, CallFunc_GetCollisionEnabled_ReturnValue) == 0x000000, "Member 'BP_SpawnProtectionBox_C_Enable::CallFunc_GetCollisionEnabled_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SpawnProtectionBox_C_Enable, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x000001, "Member 'BP_SpawnProtectionBox_C_Enable::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");

// Function BP_SpawnProtectionBox.BP_SpawnProtectionBox_C.Disable
// 0x0002 (0x0002 - 0x0000)
struct BP_SpawnProtectionBox_C_Disable final
{
public:
	ECollisionEnabled                             CallFunc_GetCollisionEnabled_ReturnValue;          // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_SpawnProtectionBox_C_Disable) == 0x000001, "Wrong alignment on BP_SpawnProtectionBox_C_Disable");
static_assert(sizeof(BP_SpawnProtectionBox_C_Disable) == 0x000002, "Wrong size on BP_SpawnProtectionBox_C_Disable");
static_assert(offsetof(BP_SpawnProtectionBox_C_Disable, CallFunc_GetCollisionEnabled_ReturnValue) == 0x000000, "Member 'BP_SpawnProtectionBox_C_Disable::CallFunc_GetCollisionEnabled_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SpawnProtectionBox_C_Disable, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x000001, "Member 'BP_SpawnProtectionBox_C_Disable::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");

}

