﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_MOTD

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"
#include "InputCore_structs.hpp"


namespace SDK::Params
{

// Function BP_MOTD.BP_MOTD_C.ExecuteUbergraph_BP_MOTD
// 0x0030 (0x0030 - 0x0000)
struct BP_MOTD_C_ExecuteUbergraph_BP_MOTD final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGameStateBase*                         CallFunc_GetGameState_ReturnValue;                 // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AMordhauGameState*                      K2Node_DynamicCast_AsMordhau_Game_State;           // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_MOTD_C_ExecuteUbergraph_BP_MOTD) == 0x000008, "Wrong alignment on BP_MOTD_C_ExecuteUbergraph_BP_MOTD");
static_assert(sizeof(BP_MOTD_C_ExecuteUbergraph_BP_MOTD) == 0x000030, "Wrong size on BP_MOTD_C_ExecuteUbergraph_BP_MOTD");
static_assert(offsetof(BP_MOTD_C_ExecuteUbergraph_BP_MOTD, EntryPoint) == 0x000000, "Member 'BP_MOTD_C_ExecuteUbergraph_BP_MOTD::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_MOTD_C_ExecuteUbergraph_BP_MOTD, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'BP_MOTD_C_ExecuteUbergraph_BP_MOTD::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MOTD_C_ExecuteUbergraph_BP_MOTD, CallFunc_GetPlayerController_ReturnValue) == 0x000010, "Member 'BP_MOTD_C_ExecuteUbergraph_BP_MOTD::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MOTD_C_ExecuteUbergraph_BP_MOTD, CallFunc_GetGameState_ReturnValue) == 0x000018, "Member 'BP_MOTD_C_ExecuteUbergraph_BP_MOTD::CallFunc_GetGameState_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MOTD_C_ExecuteUbergraph_BP_MOTD, K2Node_DynamicCast_AsMordhau_Game_State) == 0x000020, "Member 'BP_MOTD_C_ExecuteUbergraph_BP_MOTD::K2Node_DynamicCast_AsMordhau_Game_State' has a wrong offset!");
static_assert(offsetof(BP_MOTD_C_ExecuteUbergraph_BP_MOTD, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'BP_MOTD_C_ExecuteUbergraph_BP_MOTD::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function BP_MOTD.BP_MOTD_C.Get_TextBlock_1_Text_0
// 0x0048 (0x0048 - 0x0000)
struct BP_MOTD_C_Get_TextBlock_1_Text_0 final
{
public:
	class FText                                   ReturnValue;                                       // 0x0000(0x0018)(Parm, OutParm, ReturnParm)
	class UGameInstance*                          CallFunc_GetGameInstance_ReturnValue;              // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMordhauGameInstance*                   K2Node_DynamicCast_AsMordhau_Game_Instance;        // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0030(0x0018)()
};
static_assert(alignof(BP_MOTD_C_Get_TextBlock_1_Text_0) == 0x000008, "Wrong alignment on BP_MOTD_C_Get_TextBlock_1_Text_0");
static_assert(sizeof(BP_MOTD_C_Get_TextBlock_1_Text_0) == 0x000048, "Wrong size on BP_MOTD_C_Get_TextBlock_1_Text_0");
static_assert(offsetof(BP_MOTD_C_Get_TextBlock_1_Text_0, ReturnValue) == 0x000000, "Member 'BP_MOTD_C_Get_TextBlock_1_Text_0::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MOTD_C_Get_TextBlock_1_Text_0, CallFunc_GetGameInstance_ReturnValue) == 0x000018, "Member 'BP_MOTD_C_Get_TextBlock_1_Text_0::CallFunc_GetGameInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MOTD_C_Get_TextBlock_1_Text_0, K2Node_DynamicCast_AsMordhau_Game_Instance) == 0x000020, "Member 'BP_MOTD_C_Get_TextBlock_1_Text_0::K2Node_DynamicCast_AsMordhau_Game_Instance' has a wrong offset!");
static_assert(offsetof(BP_MOTD_C_Get_TextBlock_1_Text_0, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'BP_MOTD_C_Get_TextBlock_1_Text_0::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_MOTD_C_Get_TextBlock_1_Text_0, CallFunc_Conv_StringToText_ReturnValue) == 0x000030, "Member 'BP_MOTD_C_Get_TextBlock_1_Text_0::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function BP_MOTD.BP_MOTD_C.OnKeyDown
// 0x02B8 (0x02B8 - 0x0000)
struct BP_MOTD_C_OnKeyDown final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FKeyEvent                              InKeyEvent;                                        // 0x0038(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                            ReturnValue;                                       // 0x0070(0x00B8)(Parm, OutParm, ReturnParm)
	struct FEventReply                            CallFunc_Handled_ReturnValue;                      // 0x0128(0x00B8)()
	struct FKey                                   CallFunc_GetKey_ReturnValue;                       // 0x01E0(0x0018)(HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_KeyKey_ReturnValue;            // 0x01F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1F9[0x7];                                      // 0x01F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FEventReply                            CallFunc_Unhandled_ReturnValue;                    // 0x0200(0x00B8)()
};
static_assert(alignof(BP_MOTD_C_OnKeyDown) == 0x000008, "Wrong alignment on BP_MOTD_C_OnKeyDown");
static_assert(sizeof(BP_MOTD_C_OnKeyDown) == 0x0002B8, "Wrong size on BP_MOTD_C_OnKeyDown");
static_assert(offsetof(BP_MOTD_C_OnKeyDown, MyGeometry) == 0x000000, "Member 'BP_MOTD_C_OnKeyDown::MyGeometry' has a wrong offset!");
static_assert(offsetof(BP_MOTD_C_OnKeyDown, InKeyEvent) == 0x000038, "Member 'BP_MOTD_C_OnKeyDown::InKeyEvent' has a wrong offset!");
static_assert(offsetof(BP_MOTD_C_OnKeyDown, ReturnValue) == 0x000070, "Member 'BP_MOTD_C_OnKeyDown::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MOTD_C_OnKeyDown, CallFunc_Handled_ReturnValue) == 0x000128, "Member 'BP_MOTD_C_OnKeyDown::CallFunc_Handled_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MOTD_C_OnKeyDown, CallFunc_GetKey_ReturnValue) == 0x0001E0, "Member 'BP_MOTD_C_OnKeyDown::CallFunc_GetKey_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MOTD_C_OnKeyDown, CallFunc_EqualEqual_KeyKey_ReturnValue) == 0x0001F8, "Member 'BP_MOTD_C_OnKeyDown::CallFunc_EqualEqual_KeyKey_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MOTD_C_OnKeyDown, CallFunc_Unhandled_ReturnValue) == 0x000200, "Member 'BP_MOTD_C_OnKeyDown::CallFunc_Unhandled_ReturnValue' has a wrong offset!");

}

