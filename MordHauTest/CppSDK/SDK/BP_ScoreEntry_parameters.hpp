﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ScoreEntry

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function BP_ScoreEntry.BP_ScoreEntry_C.ExecuteUbergraph_BP_ScoreEntry
// 0x0004 (0x0004 - 0x0000)
struct BP_ScoreEntry_C_ExecuteUbergraph_BP_ScoreEntry final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ScoreEntry_C_ExecuteUbergraph_BP_ScoreEntry) == 0x000004, "Wrong alignment on BP_ScoreEntry_C_ExecuteUbergraph_BP_ScoreEntry");
static_assert(sizeof(BP_ScoreEntry_C_ExecuteUbergraph_BP_ScoreEntry) == 0x000004, "Wrong size on BP_ScoreEntry_C_ExecuteUbergraph_BP_ScoreEntry");
static_assert(offsetof(BP_ScoreEntry_C_ExecuteUbergraph_BP_ScoreEntry, EntryPoint) == 0x000000, "Member 'BP_ScoreEntry_C_ExecuteUbergraph_BP_ScoreEntry::EntryPoint' has a wrong offset!");

// Function BP_ScoreEntry.BP_ScoreEntry_C.AddPoints
// 0x0018 (0x0018 - 0x0000)
struct BP_ScoreEntry_C_AddPoints final
{
public:
	float                                         InPoints;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ScoreEntry_C_AddPoints) == 0x000008, "Wrong alignment on BP_ScoreEntry_C_AddPoints");
static_assert(sizeof(BP_ScoreEntry_C_AddPoints) == 0x000018, "Wrong size on BP_ScoreEntry_C_AddPoints");
static_assert(offsetof(BP_ScoreEntry_C_AddPoints, InPoints) == 0x000000, "Member 'BP_ScoreEntry_C_AddPoints::InPoints' has a wrong offset!");
static_assert(offsetof(BP_ScoreEntry_C_AddPoints, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'BP_ScoreEntry_C_AddPoints::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScoreEntry_C_AddPoints, CallFunc_Add_FloatFloat_ReturnValue) == 0x000010, "Member 'BP_ScoreEntry_C_AddPoints::CallFunc_Add_FloatFloat_ReturnValue' has a wrong offset!");

// Function BP_ScoreEntry.BP_ScoreEntry_C.Initialize
// 0x0048 (0x0048 - 0x0000)
struct BP_ScoreEntry_C_Initialize final
{
public:
	float                                         StartingPoints;                                    // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 InPlayerName;                                      // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FText                                   InLabel;                                           // 0x0018(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UBP_ScoreFeed_C*                        InScoreFeed;                                       // 0x0030(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ScoreEntry_C_Initialize) == 0x000008, "Wrong alignment on BP_ScoreEntry_C_Initialize");
static_assert(sizeof(BP_ScoreEntry_C_Initialize) == 0x000048, "Wrong size on BP_ScoreEntry_C_Initialize");
static_assert(offsetof(BP_ScoreEntry_C_Initialize, StartingPoints) == 0x000000, "Member 'BP_ScoreEntry_C_Initialize::StartingPoints' has a wrong offset!");
static_assert(offsetof(BP_ScoreEntry_C_Initialize, InPlayerName) == 0x000008, "Member 'BP_ScoreEntry_C_Initialize::InPlayerName' has a wrong offset!");
static_assert(offsetof(BP_ScoreEntry_C_Initialize, InLabel) == 0x000018, "Member 'BP_ScoreEntry_C_Initialize::InLabel' has a wrong offset!");
static_assert(offsetof(BP_ScoreEntry_C_Initialize, InScoreFeed) == 0x000030, "Member 'BP_ScoreEntry_C_Initialize::InScoreFeed' has a wrong offset!");
static_assert(offsetof(BP_ScoreEntry_C_Initialize, CallFunc_PlayAnimation_ReturnValue) == 0x000038, "Member 'BP_ScoreEntry_C_Initialize::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScoreEntry_C_Initialize, CallFunc_PlayAnimation_ReturnValue_1) == 0x000040, "Member 'BP_ScoreEntry_C_Initialize::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");

// Function BP_ScoreEntry.BP_ScoreEntry_C.UpdatePointsText
// 0x0108 (0x0108 - 0x0000)
struct BP_ScoreEntry_C_UpdatePointsText final
{
public:
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0000(0x0028)(UObjectWrapper)
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x0028(0x0028)(UObjectWrapper)
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_2;                    // 0x0050(0x0028)()
	class FText                                   CallFunc_Conv_FloatToText_ReturnValue;             // 0x0078(0x0018)()
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue;           // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_91[0x7];                                       // 0x0091(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0098(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x00D8(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x00E8(0x0018)()
	bool                                          CallFunc_EqualEqual_FloatFloat_ReturnValue;        // 0x0100(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_ScoreEntry_C_UpdatePointsText) == 0x000008, "Wrong alignment on BP_ScoreEntry_C_UpdatePointsText");
static_assert(sizeof(BP_ScoreEntry_C_UpdatePointsText) == 0x000108, "Wrong size on BP_ScoreEntry_C_UpdatePointsText");
static_assert(offsetof(BP_ScoreEntry_C_UpdatePointsText, K2Node_MakeStruct_SlateColor) == 0x000000, "Member 'BP_ScoreEntry_C_UpdatePointsText::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(BP_ScoreEntry_C_UpdatePointsText, K2Node_MakeStruct_SlateColor_1) == 0x000028, "Member 'BP_ScoreEntry_C_UpdatePointsText::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");
static_assert(offsetof(BP_ScoreEntry_C_UpdatePointsText, K2Node_MakeStruct_SlateColor_2) == 0x000050, "Member 'BP_ScoreEntry_C_UpdatePointsText::K2Node_MakeStruct_SlateColor_2' has a wrong offset!");
static_assert(offsetof(BP_ScoreEntry_C_UpdatePointsText, CallFunc_Conv_FloatToText_ReturnValue) == 0x000078, "Member 'BP_ScoreEntry_C_UpdatePointsText::CallFunc_Conv_FloatToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScoreEntry_C_UpdatePointsText, CallFunc_Greater_FloatFloat_ReturnValue) == 0x000090, "Member 'BP_ScoreEntry_C_UpdatePointsText::CallFunc_Greater_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScoreEntry_C_UpdatePointsText, K2Node_MakeStruct_FormatArgumentData) == 0x000098, "Member 'BP_ScoreEntry_C_UpdatePointsText::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(BP_ScoreEntry_C_UpdatePointsText, K2Node_MakeArray_Array) == 0x0000D8, "Member 'BP_ScoreEntry_C_UpdatePointsText::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(BP_ScoreEntry_C_UpdatePointsText, CallFunc_Format_ReturnValue) == 0x0000E8, "Member 'BP_ScoreEntry_C_UpdatePointsText::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScoreEntry_C_UpdatePointsText, CallFunc_EqualEqual_FloatFloat_ReturnValue) == 0x000100, "Member 'BP_ScoreEntry_C_UpdatePointsText::CallFunc_EqualEqual_FloatFloat_ReturnValue' has a wrong offset!");

}

