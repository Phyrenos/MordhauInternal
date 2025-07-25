﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_MordhauCameraManager

#include "Basic.hpp"


namespace SDK::Params
{

// Function BP_MordhauCameraManager.BP_MordhauCameraManager_C.ExecuteUbergraph_BP_MordhauCameraManager
// 0x0028 (0x0028 - 0x0000)
struct BP_MordhauCameraManager_C_ExecuteUbergraph_BP_MordhauCameraManager final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bIsDirectional;                       // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 K2Node_Event_Source;                               // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AMordhauHUD*                            CallFunc_GetMordhauHUD_ReturnValue;                // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_MordhauHUD_C*                       K2Node_DynamicCast_AsBP_Mordhau_HUD;               // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_MordhauCameraManager_C_ExecuteUbergraph_BP_MordhauCameraManager) == 0x000008, "Wrong alignment on BP_MordhauCameraManager_C_ExecuteUbergraph_BP_MordhauCameraManager");
static_assert(sizeof(BP_MordhauCameraManager_C_ExecuteUbergraph_BP_MordhauCameraManager) == 0x000028, "Wrong size on BP_MordhauCameraManager_C_ExecuteUbergraph_BP_MordhauCameraManager");
static_assert(offsetof(BP_MordhauCameraManager_C_ExecuteUbergraph_BP_MordhauCameraManager, EntryPoint) == 0x000000, "Member 'BP_MordhauCameraManager_C_ExecuteUbergraph_BP_MordhauCameraManager::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_MordhauCameraManager_C_ExecuteUbergraph_BP_MordhauCameraManager, K2Node_Event_bIsDirectional) == 0x000004, "Member 'BP_MordhauCameraManager_C_ExecuteUbergraph_BP_MordhauCameraManager::K2Node_Event_bIsDirectional' has a wrong offset!");
static_assert(offsetof(BP_MordhauCameraManager_C_ExecuteUbergraph_BP_MordhauCameraManager, K2Node_Event_Source) == 0x000008, "Member 'BP_MordhauCameraManager_C_ExecuteUbergraph_BP_MordhauCameraManager::K2Node_Event_Source' has a wrong offset!");
static_assert(offsetof(BP_MordhauCameraManager_C_ExecuteUbergraph_BP_MordhauCameraManager, CallFunc_GetMordhauHUD_ReturnValue) == 0x000010, "Member 'BP_MordhauCameraManager_C_ExecuteUbergraph_BP_MordhauCameraManager::CallFunc_GetMordhauHUD_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MordhauCameraManager_C_ExecuteUbergraph_BP_MordhauCameraManager, K2Node_DynamicCast_AsBP_Mordhau_HUD) == 0x000018, "Member 'BP_MordhauCameraManager_C_ExecuteUbergraph_BP_MordhauCameraManager::K2Node_DynamicCast_AsBP_Mordhau_HUD' has a wrong offset!");
static_assert(offsetof(BP_MordhauCameraManager_C_ExecuteUbergraph_BP_MordhauCameraManager, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'BP_MordhauCameraManager_C_ExecuteUbergraph_BP_MordhauCameraManager::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function BP_MordhauCameraManager.BP_MordhauCameraManager_C.OnHitFlash
// 0x0010 (0x0010 - 0x0000)
struct BP_MordhauCameraManager_C_OnHitFlash final
{
public:
	bool                                          bIsDirectional;                                    // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 Source;                                            // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_MordhauCameraManager_C_OnHitFlash) == 0x000008, "Wrong alignment on BP_MordhauCameraManager_C_OnHitFlash");
static_assert(sizeof(BP_MordhauCameraManager_C_OnHitFlash) == 0x000010, "Wrong size on BP_MordhauCameraManager_C_OnHitFlash");
static_assert(offsetof(BP_MordhauCameraManager_C_OnHitFlash, bIsDirectional) == 0x000000, "Member 'BP_MordhauCameraManager_C_OnHitFlash::bIsDirectional' has a wrong offset!");
static_assert(offsetof(BP_MordhauCameraManager_C_OnHitFlash, Source) == 0x000008, "Member 'BP_MordhauCameraManager_C_OnHitFlash::Source' has a wrong offset!");

}

