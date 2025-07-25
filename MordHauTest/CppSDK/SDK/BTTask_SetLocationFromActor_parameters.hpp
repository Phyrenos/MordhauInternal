﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BTTask_SetLocationFromActor

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BTTask_SetLocationFromActor.BTTask_SetLocationFromActor_C.ExecuteUbergraph_BTTask_SetLocationFromActor
// 0x0030 (0x0030 - 0x0000)
struct BTTask_SetLocationFromActor_C_ExecuteUbergraph_BTTask_SetLocationFromActor final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AAIController*                          K2Node_Event_OwnerController;                      // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  K2Node_Event_ControlledPawn;                       // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetBlackboardValueAsActor_ReturnValue;    // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0020(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BTTask_SetLocationFromActor_C_ExecuteUbergraph_BTTask_SetLocationFromActor) == 0x000008, "Wrong alignment on BTTask_SetLocationFromActor_C_ExecuteUbergraph_BTTask_SetLocationFromActor");
static_assert(sizeof(BTTask_SetLocationFromActor_C_ExecuteUbergraph_BTTask_SetLocationFromActor) == 0x000030, "Wrong size on BTTask_SetLocationFromActor_C_ExecuteUbergraph_BTTask_SetLocationFromActor");
static_assert(offsetof(BTTask_SetLocationFromActor_C_ExecuteUbergraph_BTTask_SetLocationFromActor, EntryPoint) == 0x000000, "Member 'BTTask_SetLocationFromActor_C_ExecuteUbergraph_BTTask_SetLocationFromActor::EntryPoint' has a wrong offset!");
static_assert(offsetof(BTTask_SetLocationFromActor_C_ExecuteUbergraph_BTTask_SetLocationFromActor, K2Node_Event_OwnerController) == 0x000008, "Member 'BTTask_SetLocationFromActor_C_ExecuteUbergraph_BTTask_SetLocationFromActor::K2Node_Event_OwnerController' has a wrong offset!");
static_assert(offsetof(BTTask_SetLocationFromActor_C_ExecuteUbergraph_BTTask_SetLocationFromActor, K2Node_Event_ControlledPawn) == 0x000010, "Member 'BTTask_SetLocationFromActor_C_ExecuteUbergraph_BTTask_SetLocationFromActor::K2Node_Event_ControlledPawn' has a wrong offset!");
static_assert(offsetof(BTTask_SetLocationFromActor_C_ExecuteUbergraph_BTTask_SetLocationFromActor, CallFunc_GetBlackboardValueAsActor_ReturnValue) == 0x000018, "Member 'BTTask_SetLocationFromActor_C_ExecuteUbergraph_BTTask_SetLocationFromActor::CallFunc_GetBlackboardValueAsActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTTask_SetLocationFromActor_C_ExecuteUbergraph_BTTask_SetLocationFromActor, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000020, "Member 'BTTask_SetLocationFromActor_C_ExecuteUbergraph_BTTask_SetLocationFromActor::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");

// Function BTTask_SetLocationFromActor.BTTask_SetLocationFromActor_C.ReceiveExecuteAI
// 0x0010 (0x0010 - 0x0000)
struct BTTask_SetLocationFromActor_C_ReceiveExecuteAI final
{
public:
	class AAIController*                          OwnerController;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  ControlledPawn;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BTTask_SetLocationFromActor_C_ReceiveExecuteAI) == 0x000008, "Wrong alignment on BTTask_SetLocationFromActor_C_ReceiveExecuteAI");
static_assert(sizeof(BTTask_SetLocationFromActor_C_ReceiveExecuteAI) == 0x000010, "Wrong size on BTTask_SetLocationFromActor_C_ReceiveExecuteAI");
static_assert(offsetof(BTTask_SetLocationFromActor_C_ReceiveExecuteAI, OwnerController) == 0x000000, "Member 'BTTask_SetLocationFromActor_C_ReceiveExecuteAI::OwnerController' has a wrong offset!");
static_assert(offsetof(BTTask_SetLocationFromActor_C_ReceiveExecuteAI, ControlledPawn) == 0x000008, "Member 'BTTask_SetLocationFromActor_C_ReceiveExecuteAI::ControlledPawn' has a wrong offset!");

}

