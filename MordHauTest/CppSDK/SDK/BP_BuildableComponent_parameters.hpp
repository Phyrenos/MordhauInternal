﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_BuildableComponent

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function BP_BuildableComponent.BP_BuildableComponent_C.ExecuteUbergraph_BP_BuildableComponent
// 0x0038 (0x0038 - 0x0000)
struct BP_BuildableComponent_C_ExecuteUbergraph_BP_BuildableComponent final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class AAdvancedCharacter* Character)> K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor)
	EEndPlayReason                                K2Node_Event_EndPlayReason;                        // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_15[0x3];                                       // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AAdvancedCharacter*                     K2Node_CustomEvent_Character;                      // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AAdvancedCharacter*                     K2Node_DynamicCast_AsAdvanced_Character;           // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_BuildableComponent_C_ExecuteUbergraph_BP_BuildableComponent) == 0x000008, "Wrong alignment on BP_BuildableComponent_C_ExecuteUbergraph_BP_BuildableComponent");
static_assert(sizeof(BP_BuildableComponent_C_ExecuteUbergraph_BP_BuildableComponent) == 0x000038, "Wrong size on BP_BuildableComponent_C_ExecuteUbergraph_BP_BuildableComponent");
static_assert(offsetof(BP_BuildableComponent_C_ExecuteUbergraph_BP_BuildableComponent, EntryPoint) == 0x000000, "Member 'BP_BuildableComponent_C_ExecuteUbergraph_BP_BuildableComponent::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_BuildableComponent_C_ExecuteUbergraph_BP_BuildableComponent, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'BP_BuildableComponent_C_ExecuteUbergraph_BP_BuildableComponent::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_BuildableComponent_C_ExecuteUbergraph_BP_BuildableComponent, K2Node_Event_EndPlayReason) == 0x000014, "Member 'BP_BuildableComponent_C_ExecuteUbergraph_BP_BuildableComponent::K2Node_Event_EndPlayReason' has a wrong offset!");
static_assert(offsetof(BP_BuildableComponent_C_ExecuteUbergraph_BP_BuildableComponent, CallFunc_GetOwner_ReturnValue) == 0x000018, "Member 'BP_BuildableComponent_C_ExecuteUbergraph_BP_BuildableComponent::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BuildableComponent_C_ExecuteUbergraph_BP_BuildableComponent, K2Node_CustomEvent_Character) == 0x000020, "Member 'BP_BuildableComponent_C_ExecuteUbergraph_BP_BuildableComponent::K2Node_CustomEvent_Character' has a wrong offset!");
static_assert(offsetof(BP_BuildableComponent_C_ExecuteUbergraph_BP_BuildableComponent, K2Node_DynamicCast_AsAdvanced_Character) == 0x000028, "Member 'BP_BuildableComponent_C_ExecuteUbergraph_BP_BuildableComponent::K2Node_DynamicCast_AsAdvanced_Character' has a wrong offset!");
static_assert(offsetof(BP_BuildableComponent_C_ExecuteUbergraph_BP_BuildableComponent, K2Node_DynamicCast_bSuccess) == 0x000030, "Member 'BP_BuildableComponent_C_ExecuteUbergraph_BP_BuildableComponent::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function BP_BuildableComponent.BP_BuildableComponent_C.OnParentCharacterDied
// 0x0008 (0x0008 - 0x0000)
struct BP_BuildableComponent_C_OnParentCharacterDied final
{
public:
	class AAdvancedCharacter*                     Character;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_BuildableComponent_C_OnParentCharacterDied) == 0x000008, "Wrong alignment on BP_BuildableComponent_C_OnParentCharacterDied");
static_assert(sizeof(BP_BuildableComponent_C_OnParentCharacterDied) == 0x000008, "Wrong size on BP_BuildableComponent_C_OnParentCharacterDied");
static_assert(offsetof(BP_BuildableComponent_C_OnParentCharacterDied, Character) == 0x000000, "Member 'BP_BuildableComponent_C_OnParentCharacterDied::Character' has a wrong offset!");

// Function BP_BuildableComponent.BP_BuildableComponent_C.ReceiveEndPlay
// 0x0001 (0x0001 - 0x0000)
struct BP_BuildableComponent_C_ReceiveEndPlay final
{
public:
	EEndPlayReason                                EndPlayReason;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_BuildableComponent_C_ReceiveEndPlay) == 0x000001, "Wrong alignment on BP_BuildableComponent_C_ReceiveEndPlay");
static_assert(sizeof(BP_BuildableComponent_C_ReceiveEndPlay) == 0x000001, "Wrong size on BP_BuildableComponent_C_ReceiveEndPlay");
static_assert(offsetof(BP_BuildableComponent_C_ReceiveEndPlay, EndPlayReason) == 0x000000, "Member 'BP_BuildableComponent_C_ReceiveEndPlay::EndPlayReason' has a wrong offset!");

// Function BP_BuildableComponent.BP_BuildableComponent_C.Notify Actor Death
// 0x0020 (0x0020 - 0x0000)
struct BP_BuildableComponent_C_Notify_Actor_Death final
{
public:
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_MordhauPlayerController_C*          K2Node_DynamicCast_AsBP_Mordhau_Player_Controller; // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_HasAuthority_ReturnValue;                 // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x001B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_BuildableComponent_C_Notify_Actor_Death) == 0x000008, "Wrong alignment on BP_BuildableComponent_C_Notify_Actor_Death");
static_assert(sizeof(BP_BuildableComponent_C_Notify_Actor_Death) == 0x000020, "Wrong size on BP_BuildableComponent_C_Notify_Actor_Death");
static_assert(offsetof(BP_BuildableComponent_C_Notify_Actor_Death, CallFunc_Not_PreBool_ReturnValue) == 0x000000, "Member 'BP_BuildableComponent_C_Notify_Actor_Death::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BuildableComponent_C_Notify_Actor_Death, CallFunc_GetOwner_ReturnValue) == 0x000008, "Member 'BP_BuildableComponent_C_Notify_Actor_Death::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BuildableComponent_C_Notify_Actor_Death, K2Node_DynamicCast_AsBP_Mordhau_Player_Controller) == 0x000010, "Member 'BP_BuildableComponent_C_Notify_Actor_Death::K2Node_DynamicCast_AsBP_Mordhau_Player_Controller' has a wrong offset!");
static_assert(offsetof(BP_BuildableComponent_C_Notify_Actor_Death, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'BP_BuildableComponent_C_Notify_Actor_Death::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_BuildableComponent_C_Notify_Actor_Death, CallFunc_HasAuthority_ReturnValue) == 0x000019, "Member 'BP_BuildableComponent_C_Notify_Actor_Death::CallFunc_HasAuthority_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BuildableComponent_C_Notify_Actor_Death, CallFunc_IsValid_ReturnValue) == 0x00001A, "Member 'BP_BuildableComponent_C_Notify_Actor_Death::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BuildableComponent_C_Notify_Actor_Death, CallFunc_BooleanAND_ReturnValue) == 0x00001B, "Member 'BP_BuildableComponent_C_Notify_Actor_Death::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

}

