﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_HordeAIController

#include "Basic.hpp"


namespace SDK::Params
{

// Function BP_HordeAIController.BP_HordeAIController_C.ExecuteUbergraph_BP_HordeAIController
// 0x0030 (0x0030 - 0x0000)
struct BP_HordeAIController_C_ExecuteUbergraph_BP_HordeAIController final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  K2Node_Event_PossessedPawn;                        // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_HordeEnemy_C*                       K2Node_DynamicCast_AsBP_Horde_Enemy;               // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  K2Node_Event_UnpossessedPawn;                      // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_RunBehaviorTree_ReturnValue;              // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_HordeAIController_C_ExecuteUbergraph_BP_HordeAIController) == 0x000008, "Wrong alignment on BP_HordeAIController_C_ExecuteUbergraph_BP_HordeAIController");
static_assert(sizeof(BP_HordeAIController_C_ExecuteUbergraph_BP_HordeAIController) == 0x000030, "Wrong size on BP_HordeAIController_C_ExecuteUbergraph_BP_HordeAIController");
static_assert(offsetof(BP_HordeAIController_C_ExecuteUbergraph_BP_HordeAIController, EntryPoint) == 0x000000, "Member 'BP_HordeAIController_C_ExecuteUbergraph_BP_HordeAIController::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_HordeAIController_C_ExecuteUbergraph_BP_HordeAIController, K2Node_Event_PossessedPawn) == 0x000008, "Member 'BP_HordeAIController_C_ExecuteUbergraph_BP_HordeAIController::K2Node_Event_PossessedPawn' has a wrong offset!");
static_assert(offsetof(BP_HordeAIController_C_ExecuteUbergraph_BP_HordeAIController, K2Node_DynamicCast_AsBP_Horde_Enemy) == 0x000010, "Member 'BP_HordeAIController_C_ExecuteUbergraph_BP_HordeAIController::K2Node_DynamicCast_AsBP_Horde_Enemy' has a wrong offset!");
static_assert(offsetof(BP_HordeAIController_C_ExecuteUbergraph_BP_HordeAIController, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'BP_HordeAIController_C_ExecuteUbergraph_BP_HordeAIController::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_HordeAIController_C_ExecuteUbergraph_BP_HordeAIController, K2Node_Event_UnpossessedPawn) == 0x000020, "Member 'BP_HordeAIController_C_ExecuteUbergraph_BP_HordeAIController::K2Node_Event_UnpossessedPawn' has a wrong offset!");
static_assert(offsetof(BP_HordeAIController_C_ExecuteUbergraph_BP_HordeAIController, CallFunc_IsValid_ReturnValue) == 0x000028, "Member 'BP_HordeAIController_C_ExecuteUbergraph_BP_HordeAIController::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_HordeAIController_C_ExecuteUbergraph_BP_HordeAIController, CallFunc_RunBehaviorTree_ReturnValue) == 0x000029, "Member 'BP_HordeAIController_C_ExecuteUbergraph_BP_HordeAIController::CallFunc_RunBehaviorTree_ReturnValue' has a wrong offset!");

// Function BP_HordeAIController.BP_HordeAIController_C.ReceiveUnPossess
// 0x0008 (0x0008 - 0x0000)
struct BP_HordeAIController_C_ReceiveUnPossess final
{
public:
	class APawn*                                  UnpossessedPawn;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_HordeAIController_C_ReceiveUnPossess) == 0x000008, "Wrong alignment on BP_HordeAIController_C_ReceiveUnPossess");
static_assert(sizeof(BP_HordeAIController_C_ReceiveUnPossess) == 0x000008, "Wrong size on BP_HordeAIController_C_ReceiveUnPossess");
static_assert(offsetof(BP_HordeAIController_C_ReceiveUnPossess, UnpossessedPawn) == 0x000000, "Member 'BP_HordeAIController_C_ReceiveUnPossess::UnpossessedPawn' has a wrong offset!");

// Function BP_HordeAIController.BP_HordeAIController_C.ReceivePossess
// 0x0008 (0x0008 - 0x0000)
struct BP_HordeAIController_C_ReceivePossess final
{
public:
	class APawn*                                  PossessedPawn;                                     // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_HordeAIController_C_ReceivePossess) == 0x000008, "Wrong alignment on BP_HordeAIController_C_ReceivePossess");
static_assert(sizeof(BP_HordeAIController_C_ReceivePossess) == 0x000008, "Wrong size on BP_HordeAIController_C_ReceivePossess");
static_assert(offsetof(BP_HordeAIController_C_ReceivePossess, PossessedPawn) == 0x000000, "Member 'BP_HordeAIController_C_ReceivePossess::PossessedPawn' has a wrong offset!");

}

