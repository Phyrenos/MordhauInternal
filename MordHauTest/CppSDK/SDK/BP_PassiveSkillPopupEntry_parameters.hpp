﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PassiveSkillPopupEntry

#include "Basic.hpp"


namespace SDK::Params
{

// Function BP_PassiveSkillPopupEntry.BP_PassiveSkillPopupEntry_C.Initialize
// 0x0038 (0x0038 - 0x0000)
struct BP_PassiveSkillPopupEntry_C_Initialize final
{
public:
	class FText                                   InText;                                            // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UTexture2D*                             Texture;                                           // 0x0018(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0020(0x0010)(ZeroConstructor, NoDestructor)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PassiveSkillPopupEntry_C_Initialize) == 0x000008, "Wrong alignment on BP_PassiveSkillPopupEntry_C_Initialize");
static_assert(sizeof(BP_PassiveSkillPopupEntry_C_Initialize) == 0x000038, "Wrong size on BP_PassiveSkillPopupEntry_C_Initialize");
static_assert(offsetof(BP_PassiveSkillPopupEntry_C_Initialize, InText) == 0x000000, "Member 'BP_PassiveSkillPopupEntry_C_Initialize::InText' has a wrong offset!");
static_assert(offsetof(BP_PassiveSkillPopupEntry_C_Initialize, Texture) == 0x000018, "Member 'BP_PassiveSkillPopupEntry_C_Initialize::Texture' has a wrong offset!");
static_assert(offsetof(BP_PassiveSkillPopupEntry_C_Initialize, K2Node_CreateDelegate_OutputDelegate) == 0x000020, "Member 'BP_PassiveSkillPopupEntry_C_Initialize::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_PassiveSkillPopupEntry_C_Initialize, CallFunc_PlayAnimation_ReturnValue) == 0x000030, "Member 'BP_PassiveSkillPopupEntry_C_Initialize::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

}

