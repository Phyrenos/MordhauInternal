﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_TraitInfoEntry

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BP_TraitInfoEntry.BP_TraitInfoEntry_C.Update
// 0x00A8 (0x00A8 - 0x0000)
struct BP_TraitInfoEntry_C_Update final
{
public:
	class FText                                   Text_0;                                            // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                          Temp_bool_Variable;                                // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_19[0x3];                                       // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           Temp_struct_Variable;                              // 0x001C(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Temp_struct_Variable_1;                            // 0x002C(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3D[0x3];                                       // 0x003D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           Temp_struct_Variable_2;                            // 0x0040(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x0050(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	TArray<class FString>                         CallFunc_GetCharacterArrayFromString_ReturnValue;  // 0x0060(0x0010)(ReferenceParm)
	class FString                                 CallFunc_Array_Get_Item;                           // 0x0070(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue_1;          // 0x0081(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_82[0x2];                                       // 0x0082(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           K2Node_Select_Default;                             // 0x0084(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           K2Node_Select_Default_1;                           // 0x0094(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_TraitInfoEntry_C_Update) == 0x000008, "Wrong alignment on BP_TraitInfoEntry_C_Update");
static_assert(sizeof(BP_TraitInfoEntry_C_Update) == 0x0000A8, "Wrong size on BP_TraitInfoEntry_C_Update");
static_assert(offsetof(BP_TraitInfoEntry_C_Update, Text_0) == 0x000000, "Member 'BP_TraitInfoEntry_C_Update::Text_0' has a wrong offset!");
static_assert(offsetof(BP_TraitInfoEntry_C_Update, Temp_bool_Variable) == 0x000018, "Member 'BP_TraitInfoEntry_C_Update::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BP_TraitInfoEntry_C_Update, Temp_struct_Variable) == 0x00001C, "Member 'BP_TraitInfoEntry_C_Update::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(BP_TraitInfoEntry_C_Update, Temp_struct_Variable_1) == 0x00002C, "Member 'BP_TraitInfoEntry_C_Update::Temp_struct_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_TraitInfoEntry_C_Update, Temp_bool_Variable_1) == 0x00003C, "Member 'BP_TraitInfoEntry_C_Update::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_TraitInfoEntry_C_Update, Temp_struct_Variable_2) == 0x000040, "Member 'BP_TraitInfoEntry_C_Update::Temp_struct_Variable_2' has a wrong offset!");
static_assert(offsetof(BP_TraitInfoEntry_C_Update, CallFunc_Conv_TextToString_ReturnValue) == 0x000050, "Member 'BP_TraitInfoEntry_C_Update::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TraitInfoEntry_C_Update, CallFunc_GetCharacterArrayFromString_ReturnValue) == 0x000060, "Member 'BP_TraitInfoEntry_C_Update::CallFunc_GetCharacterArrayFromString_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TraitInfoEntry_C_Update, CallFunc_Array_Get_Item) == 0x000070, "Member 'BP_TraitInfoEntry_C_Update::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_TraitInfoEntry_C_Update, CallFunc_EqualEqual_StrStr_ReturnValue) == 0x000080, "Member 'BP_TraitInfoEntry_C_Update::CallFunc_EqualEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TraitInfoEntry_C_Update, CallFunc_EqualEqual_StrStr_ReturnValue_1) == 0x000081, "Member 'BP_TraitInfoEntry_C_Update::CallFunc_EqualEqual_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_TraitInfoEntry_C_Update, K2Node_Select_Default) == 0x000084, "Member 'BP_TraitInfoEntry_C_Update::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(BP_TraitInfoEntry_C_Update, K2Node_Select_Default_1) == 0x000094, "Member 'BP_TraitInfoEntry_C_Update::K2Node_Select_Default_1' has a wrong offset!");

}

