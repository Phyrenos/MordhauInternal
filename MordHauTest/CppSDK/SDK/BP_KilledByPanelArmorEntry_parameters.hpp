﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_KilledByPanelArmorEntry

#include "Basic.hpp"

#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function BP_KilledByPanelArmorEntry.BP_KilledByPanelArmorEntry_C.ExecuteUbergraph_BP_KilledByPanelArmorEntry
// 0x0008 (0x0008 - 0x0000)
struct BP_KilledByPanelArmorEntry_C_ExecuteUbergraph_BP_KilledByPanelArmorEntry final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_KilledByPanelArmorEntry_C_ExecuteUbergraph_BP_KilledByPanelArmorEntry) == 0x000004, "Wrong alignment on BP_KilledByPanelArmorEntry_C_ExecuteUbergraph_BP_KilledByPanelArmorEntry");
static_assert(sizeof(BP_KilledByPanelArmorEntry_C_ExecuteUbergraph_BP_KilledByPanelArmorEntry) == 0x000008, "Wrong size on BP_KilledByPanelArmorEntry_C_ExecuteUbergraph_BP_KilledByPanelArmorEntry");
static_assert(offsetof(BP_KilledByPanelArmorEntry_C_ExecuteUbergraph_BP_KilledByPanelArmorEntry, EntryPoint) == 0x000000, "Member 'BP_KilledByPanelArmorEntry_C_ExecuteUbergraph_BP_KilledByPanelArmorEntry::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_KilledByPanelArmorEntry_C_ExecuteUbergraph_BP_KilledByPanelArmorEntry, K2Node_SwitchEnum_CmpSuccess) == 0x000004, "Member 'BP_KilledByPanelArmorEntry_C_ExecuteUbergraph_BP_KilledByPanelArmorEntry::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

// Function BP_KilledByPanelArmorEntry.BP_KilledByPanelArmorEntry_C.SetArmorClass
// 0x00B0 (0x00B0 - 0x0000)
struct BP_KilledByPanelArmorEntry_C_SetArmorClass final
{
public:
	int32                                         NewArmorClass;                                     // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchInteger_CmpSuccess;                   // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0008(0x0028)(UObjectWrapper)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_31[0x7];                                       // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x0038(0x0028)(UObjectWrapper)
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_2;                    // 0x0060(0x0028)(UObjectWrapper)
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_3;                    // 0x0088(0x0028)()
};
static_assert(alignof(BP_KilledByPanelArmorEntry_C_SetArmorClass) == 0x000008, "Wrong alignment on BP_KilledByPanelArmorEntry_C_SetArmorClass");
static_assert(sizeof(BP_KilledByPanelArmorEntry_C_SetArmorClass) == 0x0000B0, "Wrong size on BP_KilledByPanelArmorEntry_C_SetArmorClass");
static_assert(offsetof(BP_KilledByPanelArmorEntry_C_SetArmorClass, NewArmorClass) == 0x000000, "Member 'BP_KilledByPanelArmorEntry_C_SetArmorClass::NewArmorClass' has a wrong offset!");
static_assert(offsetof(BP_KilledByPanelArmorEntry_C_SetArmorClass, K2Node_SwitchInteger_CmpSuccess) == 0x000004, "Member 'BP_KilledByPanelArmorEntry_C_SetArmorClass::K2Node_SwitchInteger_CmpSuccess' has a wrong offset!");
static_assert(offsetof(BP_KilledByPanelArmorEntry_C_SetArmorClass, K2Node_MakeStruct_SlateColor) == 0x000008, "Member 'BP_KilledByPanelArmorEntry_C_SetArmorClass::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(BP_KilledByPanelArmorEntry_C_SetArmorClass, CallFunc_NotEqual_IntInt_ReturnValue) == 0x000030, "Member 'BP_KilledByPanelArmorEntry_C_SetArmorClass::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_KilledByPanelArmorEntry_C_SetArmorClass, K2Node_MakeStruct_SlateColor_1) == 0x000038, "Member 'BP_KilledByPanelArmorEntry_C_SetArmorClass::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");
static_assert(offsetof(BP_KilledByPanelArmorEntry_C_SetArmorClass, K2Node_MakeStruct_SlateColor_2) == 0x000060, "Member 'BP_KilledByPanelArmorEntry_C_SetArmorClass::K2Node_MakeStruct_SlateColor_2' has a wrong offset!");
static_assert(offsetof(BP_KilledByPanelArmorEntry_C_SetArmorClass, K2Node_MakeStruct_SlateColor_3) == 0x000088, "Member 'BP_KilledByPanelArmorEntry_C_SetArmorClass::K2Node_MakeStruct_SlateColor_3' has a wrong offset!");

// Function BP_KilledByPanelArmorEntry.BP_KilledByPanelArmorEntry_C.Flash
// 0x0008 (0x0008 - 0x0000)
struct BP_KilledByPanelArmorEntry_C_Flash final
{
public:
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_KilledByPanelArmorEntry_C_Flash) == 0x000008, "Wrong alignment on BP_KilledByPanelArmorEntry_C_Flash");
static_assert(sizeof(BP_KilledByPanelArmorEntry_C_Flash) == 0x000008, "Wrong size on BP_KilledByPanelArmorEntry_C_Flash");
static_assert(offsetof(BP_KilledByPanelArmorEntry_C_Flash, CallFunc_PlayAnimation_ReturnValue) == 0x000000, "Member 'BP_KilledByPanelArmorEntry_C_Flash::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

}

