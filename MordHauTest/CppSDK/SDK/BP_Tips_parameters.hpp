﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Tips

#include "Basic.hpp"

#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function BP_Tips.BP_Tips_C.ExecuteUbergraph_BP_Tips
// 0x0038 (0x0038 - 0x0000)
struct BP_Tips_C_ExecuteUbergraph_BP_Tips final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMordhauGameUserSettings*               CallFunc_GetMordhauGameUserSettings_ReturnValue;   // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_ShouldShowTips_ReturnValue;               // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_MordhauPlayerController_C*          K2Node_DynamicCast_AsBP_Mordhau_Player_Controller; // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_Tips_C_ExecuteUbergraph_BP_Tips) == 0x000008, "Wrong alignment on BP_Tips_C_ExecuteUbergraph_BP_Tips");
static_assert(sizeof(BP_Tips_C_ExecuteUbergraph_BP_Tips) == 0x000038, "Wrong size on BP_Tips_C_ExecuteUbergraph_BP_Tips");
static_assert(offsetof(BP_Tips_C_ExecuteUbergraph_BP_Tips, EntryPoint) == 0x000000, "Member 'BP_Tips_C_ExecuteUbergraph_BP_Tips::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_Tips_C_ExecuteUbergraph_BP_Tips, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'BP_Tips_C_ExecuteUbergraph_BP_Tips::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Tips_C_ExecuteUbergraph_BP_Tips, CallFunc_GetMordhauGameUserSettings_ReturnValue) == 0x000010, "Member 'BP_Tips_C_ExecuteUbergraph_BP_Tips::CallFunc_GetMordhauGameUserSettings_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Tips_C_ExecuteUbergraph_BP_Tips, CallFunc_GetPlayerController_ReturnValue) == 0x000018, "Member 'BP_Tips_C_ExecuteUbergraph_BP_Tips::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Tips_C_ExecuteUbergraph_BP_Tips, CallFunc_ShouldShowTips_ReturnValue) == 0x000020, "Member 'BP_Tips_C_ExecuteUbergraph_BP_Tips::CallFunc_ShouldShowTips_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Tips_C_ExecuteUbergraph_BP_Tips, K2Node_DynamicCast_AsBP_Mordhau_Player_Controller) == 0x000028, "Member 'BP_Tips_C_ExecuteUbergraph_BP_Tips::K2Node_DynamicCast_AsBP_Mordhau_Player_Controller' has a wrong offset!");
static_assert(offsetof(BP_Tips_C_ExecuteUbergraph_BP_Tips, K2Node_DynamicCast_bSuccess) == 0x000030, "Member 'BP_Tips_C_ExecuteUbergraph_BP_Tips::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_Tips_C_ExecuteUbergraph_BP_Tips, CallFunc_BooleanAND_ReturnValue) == 0x000031, "Member 'BP_Tips_C_ExecuteUbergraph_BP_Tips::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

// Function BP_Tips.BP_Tips_C.Get_LoadoutTip_Text_0
// 0x0048 (0x0048 - 0x0000)
struct BP_Tips_C_Get_LoadoutTip_Text_0 final
{
public:
	class FText                                   ReturnValue;                                       // 0x0000(0x0018)(Parm, OutParm, ReturnParm)
	class FText                                   CallFunc_MakeLiteralText_ReturnValue;              // 0x0018(0x0018)()
	class FText                                   CallFunc_FormatText_ReturnValue;                   // 0x0030(0x0018)()
};
static_assert(alignof(BP_Tips_C_Get_LoadoutTip_Text_0) == 0x000008, "Wrong alignment on BP_Tips_C_Get_LoadoutTip_Text_0");
static_assert(sizeof(BP_Tips_C_Get_LoadoutTip_Text_0) == 0x000048, "Wrong size on BP_Tips_C_Get_LoadoutTip_Text_0");
static_assert(offsetof(BP_Tips_C_Get_LoadoutTip_Text_0, ReturnValue) == 0x000000, "Member 'BP_Tips_C_Get_LoadoutTip_Text_0::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Tips_C_Get_LoadoutTip_Text_0, CallFunc_MakeLiteralText_ReturnValue) == 0x000018, "Member 'BP_Tips_C_Get_LoadoutTip_Text_0::CallFunc_MakeLiteralText_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Tips_C_Get_LoadoutTip_Text_0, CallFunc_FormatText_ReturnValue) == 0x000030, "Member 'BP_Tips_C_Get_LoadoutTip_Text_0::CallFunc_FormatText_ReturnValue' has a wrong offset!");

// Function BP_Tips.BP_Tips_C.Get_TeamTip_Text_0
// 0x0048 (0x0048 - 0x0000)
struct BP_Tips_C_Get_TeamTip_Text_0 final
{
public:
	class FText                                   ReturnValue;                                       // 0x0000(0x0018)(Parm, OutParm, ReturnParm)
	class FText                                   CallFunc_MakeLiteralText_ReturnValue;              // 0x0018(0x0018)()
	class FText                                   CallFunc_FormatText_ReturnValue;                   // 0x0030(0x0018)()
};
static_assert(alignof(BP_Tips_C_Get_TeamTip_Text_0) == 0x000008, "Wrong alignment on BP_Tips_C_Get_TeamTip_Text_0");
static_assert(sizeof(BP_Tips_C_Get_TeamTip_Text_0) == 0x000048, "Wrong size on BP_Tips_C_Get_TeamTip_Text_0");
static_assert(offsetof(BP_Tips_C_Get_TeamTip_Text_0, ReturnValue) == 0x000000, "Member 'BP_Tips_C_Get_TeamTip_Text_0::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Tips_C_Get_TeamTip_Text_0, CallFunc_MakeLiteralText_ReturnValue) == 0x000018, "Member 'BP_Tips_C_Get_TeamTip_Text_0::CallFunc_MakeLiteralText_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Tips_C_Get_TeamTip_Text_0, CallFunc_FormatText_ReturnValue) == 0x000030, "Member 'BP_Tips_C_Get_TeamTip_Text_0::CallFunc_FormatText_ReturnValue' has a wrong offset!");

// Function BP_Tips.BP_Tips_C.Get_LoadoutTip_Visibility_0
// 0x0020 (0x0020 - 0x0000)
struct BP_Tips_C_Get_LoadoutTip_Visibility_0 final
{
public:
	ESlateVisibility                              ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_MordhauPlayerController_C*          K2Node_DynamicCast_AsBP_Mordhau_Player_Controller; // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_Tips_C_Get_LoadoutTip_Visibility_0) == 0x000008, "Wrong alignment on BP_Tips_C_Get_LoadoutTip_Visibility_0");
static_assert(sizeof(BP_Tips_C_Get_LoadoutTip_Visibility_0) == 0x000020, "Wrong size on BP_Tips_C_Get_LoadoutTip_Visibility_0");
static_assert(offsetof(BP_Tips_C_Get_LoadoutTip_Visibility_0, ReturnValue) == 0x000000, "Member 'BP_Tips_C_Get_LoadoutTip_Visibility_0::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Tips_C_Get_LoadoutTip_Visibility_0, CallFunc_GetPlayerController_ReturnValue) == 0x000008, "Member 'BP_Tips_C_Get_LoadoutTip_Visibility_0::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Tips_C_Get_LoadoutTip_Visibility_0, K2Node_DynamicCast_AsBP_Mordhau_Player_Controller) == 0x000010, "Member 'BP_Tips_C_Get_LoadoutTip_Visibility_0::K2Node_DynamicCast_AsBP_Mordhau_Player_Controller' has a wrong offset!");
static_assert(offsetof(BP_Tips_C_Get_LoadoutTip_Visibility_0, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'BP_Tips_C_Get_LoadoutTip_Visibility_0::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function BP_Tips.BP_Tips_C.Get_TeamTip_Visibility_0
// 0x0020 (0x0020 - 0x0000)
struct BP_Tips_C_Get_TeamTip_Visibility_0 final
{
public:
	ESlateVisibility                              ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_MordhauPlayerController_C*          K2Node_DynamicCast_AsBP_Mordhau_Player_Controller; // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_Tips_C_Get_TeamTip_Visibility_0) == 0x000008, "Wrong alignment on BP_Tips_C_Get_TeamTip_Visibility_0");
static_assert(sizeof(BP_Tips_C_Get_TeamTip_Visibility_0) == 0x000020, "Wrong size on BP_Tips_C_Get_TeamTip_Visibility_0");
static_assert(offsetof(BP_Tips_C_Get_TeamTip_Visibility_0, ReturnValue) == 0x000000, "Member 'BP_Tips_C_Get_TeamTip_Visibility_0::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Tips_C_Get_TeamTip_Visibility_0, CallFunc_GetPlayerController_ReturnValue) == 0x000008, "Member 'BP_Tips_C_Get_TeamTip_Visibility_0::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Tips_C_Get_TeamTip_Visibility_0, K2Node_DynamicCast_AsBP_Mordhau_Player_Controller) == 0x000010, "Member 'BP_Tips_C_Get_TeamTip_Visibility_0::K2Node_DynamicCast_AsBP_Mordhau_Player_Controller' has a wrong offset!");
static_assert(offsetof(BP_Tips_C_Get_TeamTip_Visibility_0, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'BP_Tips_C_Get_TeamTip_Visibility_0::K2Node_DynamicCast_bSuccess' has a wrong offset!");

}

