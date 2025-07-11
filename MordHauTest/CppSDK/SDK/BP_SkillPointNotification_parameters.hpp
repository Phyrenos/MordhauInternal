﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_SkillPointNotification

#include "Basic.hpp"


namespace SDK::Params
{

// Function BP_SkillPointNotification.BP_SkillPointNotification_C.Trigger
// 0x0078 (0x0078 - 0x0000)
struct BP_SkillPointNotification_C_Trigger final
{
public:
	uint8                                         Skill_Points_Gained;                               // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3[0x5];                                        // 0x0003(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_ByteToText_ReturnValue;              // 0x0008(0x0018)()
	class FText                                   Temp_text_Variable;                                // 0x0020(0x0018)()
	class FText                                   Temp_text_Variable_1;                              // 0x0038(0x0018)()
	class FText                                   K2Node_Select_Default;                             // 0x0050(0x0018)()
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue;           // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_SkillPointNotification_C_Trigger) == 0x000008, "Wrong alignment on BP_SkillPointNotification_C_Trigger");
static_assert(sizeof(BP_SkillPointNotification_C_Trigger) == 0x000078, "Wrong size on BP_SkillPointNotification_C_Trigger");
static_assert(offsetof(BP_SkillPointNotification_C_Trigger, Skill_Points_Gained) == 0x000000, "Member 'BP_SkillPointNotification_C_Trigger::Skill_Points_Gained' has a wrong offset!");
static_assert(offsetof(BP_SkillPointNotification_C_Trigger, Temp_bool_Variable) == 0x000001, "Member 'BP_SkillPointNotification_C_Trigger::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BP_SkillPointNotification_C_Trigger, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000002, "Member 'BP_SkillPointNotification_C_Trigger::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillPointNotification_C_Trigger, CallFunc_Conv_ByteToText_ReturnValue) == 0x000008, "Member 'BP_SkillPointNotification_C_Trigger::CallFunc_Conv_ByteToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillPointNotification_C_Trigger, Temp_text_Variable) == 0x000020, "Member 'BP_SkillPointNotification_C_Trigger::Temp_text_Variable' has a wrong offset!");
static_assert(offsetof(BP_SkillPointNotification_C_Trigger, Temp_text_Variable_1) == 0x000038, "Member 'BP_SkillPointNotification_C_Trigger::Temp_text_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_SkillPointNotification_C_Trigger, K2Node_Select_Default) == 0x000050, "Member 'BP_SkillPointNotification_C_Trigger::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(BP_SkillPointNotification_C_Trigger, CallFunc_PlayAnimation_ReturnValue) == 0x000068, "Member 'BP_SkillPointNotification_C_Trigger::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillPointNotification_C_Trigger, CallFunc_IsAnimationPlaying_ReturnValue) == 0x000070, "Member 'BP_SkillPointNotification_C_Trigger::CallFunc_IsAnimationPlaying_ReturnValue' has a wrong offset!");

}

