﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_MordhauAIController

#include "Basic.hpp"

#include "Mordhau_structs.hpp"


namespace SDK::Params
{

// Function BP_MordhauAIController.BP_MordhauAIController_C.ExecuteUbergraph_BP_MordhauAIController
// 0x0078 (0x0078 - 0x0000)
struct BP_MordhauAIController_C_ExecuteUbergraph_BP_MordhauAIController final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasAuthority_ReturnValue;                 // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  K2Node_Event_PossessedPawn;                        // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AMordhauCharacter*                      K2Node_DynamicCast_AsMordhau_Character;            // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1A[0x6];                                       // 0x001A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  CallFunc_K2_GetPawn_ReturnValue;                   // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBlackboardComponent*                   CallFunc_GetBlackboard_ReturnValue;                // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_PerceivesAlly_ReturnValue;                // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_31[0x7];                                       // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AAdvancedCharacter*                     K2Node_Event_PerceivedCharacter_1;                 // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPerceptionInfo                        K2Node_Event_PerceptionInfo_1;                     // 0x0040(0x0008)(ConstParm, NoDestructor)
	class AAdvancedCharacter*                     K2Node_Event_PerceivedCharacter;                   // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPerceptionInfo                        K2Node_Event_PerceptionInfo;                       // 0x0050(0x0008)(ConstParm, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_RunBehaviorTree_ReturnValue;              // 0x0059(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x005A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetIsDead_ReturnValue;                    // 0x005B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_ObjectObject_ReturnValue;        // 0x005C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x005D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5E[0x2];                                       // 0x005E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UAIPerceptionComponent*                 CallFunc_GetAIPerceptionComponent_ReturnValue;     // 0x0060(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_4;                    // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_69[0x7];                                       // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UBlackboardComponent*                   CallFunc_GetBlackboard_ReturnValue_1;              // 0x0070(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_MordhauAIController_C_ExecuteUbergraph_BP_MordhauAIController) == 0x000008, "Wrong alignment on BP_MordhauAIController_C_ExecuteUbergraph_BP_MordhauAIController");
static_assert(sizeof(BP_MordhauAIController_C_ExecuteUbergraph_BP_MordhauAIController) == 0x000078, "Wrong size on BP_MordhauAIController_C_ExecuteUbergraph_BP_MordhauAIController");
static_assert(offsetof(BP_MordhauAIController_C_ExecuteUbergraph_BP_MordhauAIController, EntryPoint) == 0x000000, "Member 'BP_MordhauAIController_C_ExecuteUbergraph_BP_MordhauAIController::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_MordhauAIController_C_ExecuteUbergraph_BP_MordhauAIController, CallFunc_HasAuthority_ReturnValue) == 0x000004, "Member 'BP_MordhauAIController_C_ExecuteUbergraph_BP_MordhauAIController::CallFunc_HasAuthority_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MordhauAIController_C_ExecuteUbergraph_BP_MordhauAIController, K2Node_Event_PossessedPawn) == 0x000008, "Member 'BP_MordhauAIController_C_ExecuteUbergraph_BP_MordhauAIController::K2Node_Event_PossessedPawn' has a wrong offset!");
static_assert(offsetof(BP_MordhauAIController_C_ExecuteUbergraph_BP_MordhauAIController, K2Node_DynamicCast_AsMordhau_Character) == 0x000010, "Member 'BP_MordhauAIController_C_ExecuteUbergraph_BP_MordhauAIController::K2Node_DynamicCast_AsMordhau_Character' has a wrong offset!");
static_assert(offsetof(BP_MordhauAIController_C_ExecuteUbergraph_BP_MordhauAIController, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'BP_MordhauAIController_C_ExecuteUbergraph_BP_MordhauAIController::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_MordhauAIController_C_ExecuteUbergraph_BP_MordhauAIController, CallFunc_IsValid_ReturnValue) == 0x000019, "Member 'BP_MordhauAIController_C_ExecuteUbergraph_BP_MordhauAIController::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MordhauAIController_C_ExecuteUbergraph_BP_MordhauAIController, CallFunc_K2_GetPawn_ReturnValue) == 0x000020, "Member 'BP_MordhauAIController_C_ExecuteUbergraph_BP_MordhauAIController::CallFunc_K2_GetPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MordhauAIController_C_ExecuteUbergraph_BP_MordhauAIController, CallFunc_GetBlackboard_ReturnValue) == 0x000028, "Member 'BP_MordhauAIController_C_ExecuteUbergraph_BP_MordhauAIController::CallFunc_GetBlackboard_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MordhauAIController_C_ExecuteUbergraph_BP_MordhauAIController, CallFunc_PerceivesAlly_ReturnValue) == 0x000030, "Member 'BP_MordhauAIController_C_ExecuteUbergraph_BP_MordhauAIController::CallFunc_PerceivesAlly_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MordhauAIController_C_ExecuteUbergraph_BP_MordhauAIController, K2Node_Event_PerceivedCharacter_1) == 0x000038, "Member 'BP_MordhauAIController_C_ExecuteUbergraph_BP_MordhauAIController::K2Node_Event_PerceivedCharacter_1' has a wrong offset!");
static_assert(offsetof(BP_MordhauAIController_C_ExecuteUbergraph_BP_MordhauAIController, K2Node_Event_PerceptionInfo_1) == 0x000040, "Member 'BP_MordhauAIController_C_ExecuteUbergraph_BP_MordhauAIController::K2Node_Event_PerceptionInfo_1' has a wrong offset!");
static_assert(offsetof(BP_MordhauAIController_C_ExecuteUbergraph_BP_MordhauAIController, K2Node_Event_PerceivedCharacter) == 0x000048, "Member 'BP_MordhauAIController_C_ExecuteUbergraph_BP_MordhauAIController::K2Node_Event_PerceivedCharacter' has a wrong offset!");
static_assert(offsetof(BP_MordhauAIController_C_ExecuteUbergraph_BP_MordhauAIController, K2Node_Event_PerceptionInfo) == 0x000050, "Member 'BP_MordhauAIController_C_ExecuteUbergraph_BP_MordhauAIController::K2Node_Event_PerceptionInfo' has a wrong offset!");
static_assert(offsetof(BP_MordhauAIController_C_ExecuteUbergraph_BP_MordhauAIController, CallFunc_IsValid_ReturnValue_1) == 0x000058, "Member 'BP_MordhauAIController_C_ExecuteUbergraph_BP_MordhauAIController::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_MordhauAIController_C_ExecuteUbergraph_BP_MordhauAIController, CallFunc_RunBehaviorTree_ReturnValue) == 0x000059, "Member 'BP_MordhauAIController_C_ExecuteUbergraph_BP_MordhauAIController::CallFunc_RunBehaviorTree_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MordhauAIController_C_ExecuteUbergraph_BP_MordhauAIController, CallFunc_IsValid_ReturnValue_2) == 0x00005A, "Member 'BP_MordhauAIController_C_ExecuteUbergraph_BP_MordhauAIController::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_MordhauAIController_C_ExecuteUbergraph_BP_MordhauAIController, CallFunc_GetIsDead_ReturnValue) == 0x00005B, "Member 'BP_MordhauAIController_C_ExecuteUbergraph_BP_MordhauAIController::CallFunc_GetIsDead_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MordhauAIController_C_ExecuteUbergraph_BP_MordhauAIController, CallFunc_NotEqual_ObjectObject_ReturnValue) == 0x00005C, "Member 'BP_MordhauAIController_C_ExecuteUbergraph_BP_MordhauAIController::CallFunc_NotEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MordhauAIController_C_ExecuteUbergraph_BP_MordhauAIController, CallFunc_IsValid_ReturnValue_3) == 0x00005D, "Member 'BP_MordhauAIController_C_ExecuteUbergraph_BP_MordhauAIController::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_MordhauAIController_C_ExecuteUbergraph_BP_MordhauAIController, CallFunc_GetAIPerceptionComponent_ReturnValue) == 0x000060, "Member 'BP_MordhauAIController_C_ExecuteUbergraph_BP_MordhauAIController::CallFunc_GetAIPerceptionComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MordhauAIController_C_ExecuteUbergraph_BP_MordhauAIController, CallFunc_IsValid_ReturnValue_4) == 0x000068, "Member 'BP_MordhauAIController_C_ExecuteUbergraph_BP_MordhauAIController::CallFunc_IsValid_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_MordhauAIController_C_ExecuteUbergraph_BP_MordhauAIController, CallFunc_GetBlackboard_ReturnValue_1) == 0x000070, "Member 'BP_MordhauAIController_C_ExecuteUbergraph_BP_MordhauAIController::CallFunc_GetBlackboard_ReturnValue_1' has a wrong offset!");

// Function BP_MordhauAIController.BP_MordhauAIController_C.OnStoppedPerceivingCharacter
// 0x0010 (0x0010 - 0x0000)
struct BP_MordhauAIController_C_OnStoppedPerceivingCharacter final
{
public:
	class AAdvancedCharacter*                     PerceivedCharacter;                                // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPerceptionInfo                        PerceptionInfo;                                    // 0x0008(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
};
static_assert(alignof(BP_MordhauAIController_C_OnStoppedPerceivingCharacter) == 0x000008, "Wrong alignment on BP_MordhauAIController_C_OnStoppedPerceivingCharacter");
static_assert(sizeof(BP_MordhauAIController_C_OnStoppedPerceivingCharacter) == 0x000010, "Wrong size on BP_MordhauAIController_C_OnStoppedPerceivingCharacter");
static_assert(offsetof(BP_MordhauAIController_C_OnStoppedPerceivingCharacter, PerceivedCharacter) == 0x000000, "Member 'BP_MordhauAIController_C_OnStoppedPerceivingCharacter::PerceivedCharacter' has a wrong offset!");
static_assert(offsetof(BP_MordhauAIController_C_OnStoppedPerceivingCharacter, PerceptionInfo) == 0x000008, "Member 'BP_MordhauAIController_C_OnStoppedPerceivingCharacter::PerceptionInfo' has a wrong offset!");

// Function BP_MordhauAIController.BP_MordhauAIController_C.OnStartedPerceivingCharacter
// 0x0010 (0x0010 - 0x0000)
struct BP_MordhauAIController_C_OnStartedPerceivingCharacter final
{
public:
	class AAdvancedCharacter*                     PerceivedCharacter;                                // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPerceptionInfo                        PerceptionInfo;                                    // 0x0008(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
};
static_assert(alignof(BP_MordhauAIController_C_OnStartedPerceivingCharacter) == 0x000008, "Wrong alignment on BP_MordhauAIController_C_OnStartedPerceivingCharacter");
static_assert(sizeof(BP_MordhauAIController_C_OnStartedPerceivingCharacter) == 0x000010, "Wrong size on BP_MordhauAIController_C_OnStartedPerceivingCharacter");
static_assert(offsetof(BP_MordhauAIController_C_OnStartedPerceivingCharacter, PerceivedCharacter) == 0x000000, "Member 'BP_MordhauAIController_C_OnStartedPerceivingCharacter::PerceivedCharacter' has a wrong offset!");
static_assert(offsetof(BP_MordhauAIController_C_OnStartedPerceivingCharacter, PerceptionInfo) == 0x000008, "Member 'BP_MordhauAIController_C_OnStartedPerceivingCharacter::PerceptionInfo' has a wrong offset!");

// Function BP_MordhauAIController.BP_MordhauAIController_C.ReceivePossess
// 0x0008 (0x0008 - 0x0000)
struct BP_MordhauAIController_C_ReceivePossess final
{
public:
	class APawn*                                  PossessedPawn;                                     // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_MordhauAIController_C_ReceivePossess) == 0x000008, "Wrong alignment on BP_MordhauAIController_C_ReceivePossess");
static_assert(sizeof(BP_MordhauAIController_C_ReceivePossess) == 0x000008, "Wrong size on BP_MordhauAIController_C_ReceivePossess");
static_assert(offsetof(BP_MordhauAIController_C_ReceivePossess, PossessedPawn) == 0x000000, "Member 'BP_MordhauAIController_C_ReceivePossess::PossessedPawn' has a wrong offset!");

// Function BP_MordhauAIController.BP_MordhauAIController_C.GetTeamFilterClass
// 0x0048 (0x0048 - 0x0000)
struct BP_MordhauAIController_C_GetTeamFilterClass final
{
public:
	class UClass*                                 FilterClass;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Temp_byte_Variable;                                // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  CallFunc_K2_GetPawn_ReturnValue;                   // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGameStateBase*                         CallFunc_GetGameState_ReturnValue;                 // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AAdvancedCharacter*                     K2Node_DynamicCast_AsAdvanced_Character;           // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_MordhauGameState_C*                 K2Node_DynamicCast_AsBP_Mordhau_Game_State;        // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_39[0x7];                                       // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 K2Node_Select_Default;                             // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_MordhauAIController_C_GetTeamFilterClass) == 0x000008, "Wrong alignment on BP_MordhauAIController_C_GetTeamFilterClass");
static_assert(sizeof(BP_MordhauAIController_C_GetTeamFilterClass) == 0x000048, "Wrong size on BP_MordhauAIController_C_GetTeamFilterClass");
static_assert(offsetof(BP_MordhauAIController_C_GetTeamFilterClass, FilterClass) == 0x000000, "Member 'BP_MordhauAIController_C_GetTeamFilterClass::FilterClass' has a wrong offset!");
static_assert(offsetof(BP_MordhauAIController_C_GetTeamFilterClass, Temp_byte_Variable) == 0x000008, "Member 'BP_MordhauAIController_C_GetTeamFilterClass::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(BP_MordhauAIController_C_GetTeamFilterClass, CallFunc_K2_GetPawn_ReturnValue) == 0x000010, "Member 'BP_MordhauAIController_C_GetTeamFilterClass::CallFunc_K2_GetPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MordhauAIController_C_GetTeamFilterClass, CallFunc_GetGameState_ReturnValue) == 0x000018, "Member 'BP_MordhauAIController_C_GetTeamFilterClass::CallFunc_GetGameState_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MordhauAIController_C_GetTeamFilterClass, K2Node_DynamicCast_AsAdvanced_Character) == 0x000020, "Member 'BP_MordhauAIController_C_GetTeamFilterClass::K2Node_DynamicCast_AsAdvanced_Character' has a wrong offset!");
static_assert(offsetof(BP_MordhauAIController_C_GetTeamFilterClass, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'BP_MordhauAIController_C_GetTeamFilterClass::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_MordhauAIController_C_GetTeamFilterClass, K2Node_DynamicCast_AsBP_Mordhau_Game_State) == 0x000030, "Member 'BP_MordhauAIController_C_GetTeamFilterClass::K2Node_DynamicCast_AsBP_Mordhau_Game_State' has a wrong offset!");
static_assert(offsetof(BP_MordhauAIController_C_GetTeamFilterClass, K2Node_DynamicCast_bSuccess_1) == 0x000038, "Member 'BP_MordhauAIController_C_GetTeamFilterClass::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BP_MordhauAIController_C_GetTeamFilterClass, K2Node_Select_Default) == 0x000040, "Member 'BP_MordhauAIController_C_GetTeamFilterClass::K2Node_Select_Default' has a wrong offset!");

// Function BP_MordhauAIController.BP_MordhauAIController_C.Filter Out Demon Horde Cosmetic
// 0x01E8 (0x01E8 - 0x0000)
struct BP_MordhauAIController_C_Filter_Out_Demon_Horde_Cosmetic final
{
public:
	uint8                                         LocalCurrentVoice;                                 // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         LocalCurrentFace;                                  // 0x0001(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2[0x6];                                        // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAppearanceCustomization               LocalAppearanceCustomization;                      // 0x0008(0x0028)(Edit, BlueprintVisible)
	struct FCharacterProfile                      LocalCharacterProfile;                             // 0x0030(0x00B8)(Edit, BlueprintVisible)
	bool                                          Temp_bool_Variable;                                // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_E9[0x3];                                       // 0x00E9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue;               // 0x00EC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue_1;             // 0x00F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x00F4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_F5[0x3];                                       // 0x00F5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class AGameModeBase*                          CallFunc_GetGameMode_ReturnValue;                  // 0x00F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_DemonHordeGamemode_C*               K2Node_DynamicCast_AsBP_Demon_Horde_Gamemode;      // 0x0100(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0108(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_109[0x7];                                      // 0x0109(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMordhauSingleton*                      CallFunc_GetMordhauSingleton_ReturnValue;          // 0x0110(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<TSoftClassPtr<class UClass>>           CallFunc_GetFemaleVoices_ReturnValue;              // 0x0118(0x0010)(ConstParm, ReferenceParm)
	TArray<TSoftClassPtr<class UClass>>           CallFunc_GetMaleVoices_ReturnValue;                // 0x0128(0x0010)(ConstParm, ReferenceParm)
	TArray<TSubclassOf<class UCharacterFace>>     K2Node_Select_Default;                             // 0x0138(0x0010)(ReferenceParm)
	TArray<TSoftClassPtr<class UClass>>           K2Node_Select_Default_1;                           // 0x0148(0x0010)(ConstParm, ReferenceParm)
	class UClass*                                 CallFunc_Array_Get_Item;                           // 0x0158(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSoftClassPtr<class UClass>                   CallFunc_Array_Get_Item_1;                         // 0x0160(0x0028)(HasGetValueTypeHash)
	bool                                          CallFunc_ClassIsChildOf_ReturnValue;               // 0x0188(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_189[0x7];                                      // 0x0189(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TSubclassOf<class UObject>                    CallFunc_Conv_SoftClassReferenceToClass_ReturnValue; // 0x0190(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TSubclassOf<class UCharacterVoice>            K2Node_ClassDynamicCast_AsCharacter_Voice;         // 0x0198(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          K2Node_ClassDynamicCast_bSuccess;                  // 0x01A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1A1[0x7];                                      // 0x01A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftClassPtr<class UClass>                   CallFunc_Array_Random_OutItem;                     // 0x01A8(0x0028)(HasGetValueTypeHash)
	int32                                         CallFunc_Array_Random_OutIndex;                    // 0x01D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_ClassIsChildOf_ReturnValue_1;             // 0x01D4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue;               // 0x01D5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1D6[0x2];                                      // 0x01D6(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 CallFunc_Array_Random_OutItem_1;                   // 0x01D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Random_OutIndex_1;                  // 0x01E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue_1;             // 0x01E4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_MordhauAIController_C_Filter_Out_Demon_Horde_Cosmetic) == 0x000008, "Wrong alignment on BP_MordhauAIController_C_Filter_Out_Demon_Horde_Cosmetic");
static_assert(sizeof(BP_MordhauAIController_C_Filter_Out_Demon_Horde_Cosmetic) == 0x0001E8, "Wrong size on BP_MordhauAIController_C_Filter_Out_Demon_Horde_Cosmetic");
static_assert(offsetof(BP_MordhauAIController_C_Filter_Out_Demon_Horde_Cosmetic, LocalCurrentVoice) == 0x000000, "Member 'BP_MordhauAIController_C_Filter_Out_Demon_Horde_Cosmetic::LocalCurrentVoice' has a wrong offset!");
static_assert(offsetof(BP_MordhauAIController_C_Filter_Out_Demon_Horde_Cosmetic, LocalCurrentFace) == 0x000001, "Member 'BP_MordhauAIController_C_Filter_Out_Demon_Horde_Cosmetic::LocalCurrentFace' has a wrong offset!");
static_assert(offsetof(BP_MordhauAIController_C_Filter_Out_Demon_Horde_Cosmetic, LocalAppearanceCustomization) == 0x000008, "Member 'BP_MordhauAIController_C_Filter_Out_Demon_Horde_Cosmetic::LocalAppearanceCustomization' has a wrong offset!");
static_assert(offsetof(BP_MordhauAIController_C_Filter_Out_Demon_Horde_Cosmetic, LocalCharacterProfile) == 0x000030, "Member 'BP_MordhauAIController_C_Filter_Out_Demon_Horde_Cosmetic::LocalCharacterProfile' has a wrong offset!");
static_assert(offsetof(BP_MordhauAIController_C_Filter_Out_Demon_Horde_Cosmetic, Temp_bool_Variable) == 0x0000E8, "Member 'BP_MordhauAIController_C_Filter_Out_Demon_Horde_Cosmetic::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BP_MordhauAIController_C_Filter_Out_Demon_Horde_Cosmetic, CallFunc_Conv_ByteToInt_ReturnValue) == 0x0000EC, "Member 'BP_MordhauAIController_C_Filter_Out_Demon_Horde_Cosmetic::CallFunc_Conv_ByteToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MordhauAIController_C_Filter_Out_Demon_Horde_Cosmetic, CallFunc_Conv_ByteToInt_ReturnValue_1) == 0x0000F0, "Member 'BP_MordhauAIController_C_Filter_Out_Demon_Horde_Cosmetic::CallFunc_Conv_ByteToInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_MordhauAIController_C_Filter_Out_Demon_Horde_Cosmetic, Temp_bool_Variable_1) == 0x0000F4, "Member 'BP_MordhauAIController_C_Filter_Out_Demon_Horde_Cosmetic::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_MordhauAIController_C_Filter_Out_Demon_Horde_Cosmetic, CallFunc_GetGameMode_ReturnValue) == 0x0000F8, "Member 'BP_MordhauAIController_C_Filter_Out_Demon_Horde_Cosmetic::CallFunc_GetGameMode_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MordhauAIController_C_Filter_Out_Demon_Horde_Cosmetic, K2Node_DynamicCast_AsBP_Demon_Horde_Gamemode) == 0x000100, "Member 'BP_MordhauAIController_C_Filter_Out_Demon_Horde_Cosmetic::K2Node_DynamicCast_AsBP_Demon_Horde_Gamemode' has a wrong offset!");
static_assert(offsetof(BP_MordhauAIController_C_Filter_Out_Demon_Horde_Cosmetic, K2Node_DynamicCast_bSuccess) == 0x000108, "Member 'BP_MordhauAIController_C_Filter_Out_Demon_Horde_Cosmetic::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_MordhauAIController_C_Filter_Out_Demon_Horde_Cosmetic, CallFunc_GetMordhauSingleton_ReturnValue) == 0x000110, "Member 'BP_MordhauAIController_C_Filter_Out_Demon_Horde_Cosmetic::CallFunc_GetMordhauSingleton_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MordhauAIController_C_Filter_Out_Demon_Horde_Cosmetic, CallFunc_GetFemaleVoices_ReturnValue) == 0x000118, "Member 'BP_MordhauAIController_C_Filter_Out_Demon_Horde_Cosmetic::CallFunc_GetFemaleVoices_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MordhauAIController_C_Filter_Out_Demon_Horde_Cosmetic, CallFunc_GetMaleVoices_ReturnValue) == 0x000128, "Member 'BP_MordhauAIController_C_Filter_Out_Demon_Horde_Cosmetic::CallFunc_GetMaleVoices_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MordhauAIController_C_Filter_Out_Demon_Horde_Cosmetic, K2Node_Select_Default) == 0x000138, "Member 'BP_MordhauAIController_C_Filter_Out_Demon_Horde_Cosmetic::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(BP_MordhauAIController_C_Filter_Out_Demon_Horde_Cosmetic, K2Node_Select_Default_1) == 0x000148, "Member 'BP_MordhauAIController_C_Filter_Out_Demon_Horde_Cosmetic::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(BP_MordhauAIController_C_Filter_Out_Demon_Horde_Cosmetic, CallFunc_Array_Get_Item) == 0x000158, "Member 'BP_MordhauAIController_C_Filter_Out_Demon_Horde_Cosmetic::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_MordhauAIController_C_Filter_Out_Demon_Horde_Cosmetic, CallFunc_Array_Get_Item_1) == 0x000160, "Member 'BP_MordhauAIController_C_Filter_Out_Demon_Horde_Cosmetic::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(BP_MordhauAIController_C_Filter_Out_Demon_Horde_Cosmetic, CallFunc_ClassIsChildOf_ReturnValue) == 0x000188, "Member 'BP_MordhauAIController_C_Filter_Out_Demon_Horde_Cosmetic::CallFunc_ClassIsChildOf_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MordhauAIController_C_Filter_Out_Demon_Horde_Cosmetic, CallFunc_Conv_SoftClassReferenceToClass_ReturnValue) == 0x000190, "Member 'BP_MordhauAIController_C_Filter_Out_Demon_Horde_Cosmetic::CallFunc_Conv_SoftClassReferenceToClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MordhauAIController_C_Filter_Out_Demon_Horde_Cosmetic, K2Node_ClassDynamicCast_AsCharacter_Voice) == 0x000198, "Member 'BP_MordhauAIController_C_Filter_Out_Demon_Horde_Cosmetic::K2Node_ClassDynamicCast_AsCharacter_Voice' has a wrong offset!");
static_assert(offsetof(BP_MordhauAIController_C_Filter_Out_Demon_Horde_Cosmetic, K2Node_ClassDynamicCast_bSuccess) == 0x0001A0, "Member 'BP_MordhauAIController_C_Filter_Out_Demon_Horde_Cosmetic::K2Node_ClassDynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_MordhauAIController_C_Filter_Out_Demon_Horde_Cosmetic, CallFunc_Array_Random_OutItem) == 0x0001A8, "Member 'BP_MordhauAIController_C_Filter_Out_Demon_Horde_Cosmetic::CallFunc_Array_Random_OutItem' has a wrong offset!");
static_assert(offsetof(BP_MordhauAIController_C_Filter_Out_Demon_Horde_Cosmetic, CallFunc_Array_Random_OutIndex) == 0x0001D0, "Member 'BP_MordhauAIController_C_Filter_Out_Demon_Horde_Cosmetic::CallFunc_Array_Random_OutIndex' has a wrong offset!");
static_assert(offsetof(BP_MordhauAIController_C_Filter_Out_Demon_Horde_Cosmetic, CallFunc_ClassIsChildOf_ReturnValue_1) == 0x0001D4, "Member 'BP_MordhauAIController_C_Filter_Out_Demon_Horde_Cosmetic::CallFunc_ClassIsChildOf_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_MordhauAIController_C_Filter_Out_Demon_Horde_Cosmetic, CallFunc_Conv_IntToByte_ReturnValue) == 0x0001D5, "Member 'BP_MordhauAIController_C_Filter_Out_Demon_Horde_Cosmetic::CallFunc_Conv_IntToByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MordhauAIController_C_Filter_Out_Demon_Horde_Cosmetic, CallFunc_Array_Random_OutItem_1) == 0x0001D8, "Member 'BP_MordhauAIController_C_Filter_Out_Demon_Horde_Cosmetic::CallFunc_Array_Random_OutItem_1' has a wrong offset!");
static_assert(offsetof(BP_MordhauAIController_C_Filter_Out_Demon_Horde_Cosmetic, CallFunc_Array_Random_OutIndex_1) == 0x0001E0, "Member 'BP_MordhauAIController_C_Filter_Out_Demon_Horde_Cosmetic::CallFunc_Array_Random_OutIndex_1' has a wrong offset!");
static_assert(offsetof(BP_MordhauAIController_C_Filter_Out_Demon_Horde_Cosmetic, CallFunc_Conv_IntToByte_ReturnValue_1) == 0x0001E4, "Member 'BP_MordhauAIController_C_Filter_Out_Demon_Horde_Cosmetic::CallFunc_Conv_IntToByte_ReturnValue_1' has a wrong offset!");

}

