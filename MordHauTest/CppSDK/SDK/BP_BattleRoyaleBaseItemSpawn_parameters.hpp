﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_BattleRoyaleBaseItemSpawn

#include "Basic.hpp"

#include "Mordhau_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BP_BattleRoyaleBaseItemSpawn.BP_BattleRoyaleBaseItemSpawn_C.RenormalizeChances
// 0x0088 (0x0088 - 0x0000)
struct BP_BattleRoyaleBaseItemSpawn_C_RenormalizeChances final
{
public:
	float                                         MaxChance;                                         // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Current;                                           // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         TotalChances;                                      // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue;           // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1D[0x3];                                       // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UClass*>                         CallFunc_Map_Keys_Keys;                            // 0x0028(0x0010)(ReferenceParm)
	int32                                         CallFunc_Map_Length_ReturnValue;                   // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3C[0x4];                                       // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 CallFunc_Array_Get_Item;                           // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_49[0x3];                                       // 0x0049(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Map_Find_Value;                           // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_51[0x3];                                       // 0x0051(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 CallFunc_Array_Get_Item_1;                         // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Map_Find_Value_1;                         // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue_1;                   // 0x0064(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_65[0x3];                                       // 0x0065(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Abs_ReturnValue;                          // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_71[0x3];                                       // 0x0071(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_FMax_ReturnValue;                         // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_BattleRoyaleBaseItemSpawn_C_RenormalizeChances) == 0x000008, "Wrong alignment on BP_BattleRoyaleBaseItemSpawn_C_RenormalizeChances");
static_assert(sizeof(BP_BattleRoyaleBaseItemSpawn_C_RenormalizeChances) == 0x000088, "Wrong size on BP_BattleRoyaleBaseItemSpawn_C_RenormalizeChances");
static_assert(offsetof(BP_BattleRoyaleBaseItemSpawn_C_RenormalizeChances, MaxChance) == 0x000000, "Member 'BP_BattleRoyaleBaseItemSpawn_C_RenormalizeChances::MaxChance' has a wrong offset!");
static_assert(offsetof(BP_BattleRoyaleBaseItemSpawn_C_RenormalizeChances, Current) == 0x000004, "Member 'BP_BattleRoyaleBaseItemSpawn_C_RenormalizeChances::Current' has a wrong offset!");
static_assert(offsetof(BP_BattleRoyaleBaseItemSpawn_C_RenormalizeChances, TotalChances) == 0x000008, "Member 'BP_BattleRoyaleBaseItemSpawn_C_RenormalizeChances::TotalChances' has a wrong offset!");
static_assert(offsetof(BP_BattleRoyaleBaseItemSpawn_C_RenormalizeChances, Temp_int_Loop_Counter_Variable) == 0x00000C, "Member 'BP_BattleRoyaleBaseItemSpawn_C_RenormalizeChances::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_BattleRoyaleBaseItemSpawn_C_RenormalizeChances, CallFunc_Add_IntInt_ReturnValue) == 0x000010, "Member 'BP_BattleRoyaleBaseItemSpawn_C_RenormalizeChances::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BattleRoyaleBaseItemSpawn_C_RenormalizeChances, Temp_int_Array_Index_Variable) == 0x000014, "Member 'BP_BattleRoyaleBaseItemSpawn_C_RenormalizeChances::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_BattleRoyaleBaseItemSpawn_C_RenormalizeChances, Temp_int_Array_Index_Variable_1) == 0x000018, "Member 'BP_BattleRoyaleBaseItemSpawn_C_RenormalizeChances::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_BattleRoyaleBaseItemSpawn_C_RenormalizeChances, CallFunc_Greater_FloatFloat_ReturnValue) == 0x00001C, "Member 'BP_BattleRoyaleBaseItemSpawn_C_RenormalizeChances::CallFunc_Greater_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BattleRoyaleBaseItemSpawn_C_RenormalizeChances, Temp_int_Loop_Counter_Variable_1) == 0x000020, "Member 'BP_BattleRoyaleBaseItemSpawn_C_RenormalizeChances::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_BattleRoyaleBaseItemSpawn_C_RenormalizeChances, CallFunc_Add_IntInt_ReturnValue_1) == 0x000024, "Member 'BP_BattleRoyaleBaseItemSpawn_C_RenormalizeChances::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_BattleRoyaleBaseItemSpawn_C_RenormalizeChances, CallFunc_Map_Keys_Keys) == 0x000028, "Member 'BP_BattleRoyaleBaseItemSpawn_C_RenormalizeChances::CallFunc_Map_Keys_Keys' has a wrong offset!");
static_assert(offsetof(BP_BattleRoyaleBaseItemSpawn_C_RenormalizeChances, CallFunc_Map_Length_ReturnValue) == 0x000038, "Member 'BP_BattleRoyaleBaseItemSpawn_C_RenormalizeChances::CallFunc_Map_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BattleRoyaleBaseItemSpawn_C_RenormalizeChances, CallFunc_Array_Get_Item) == 0x000040, "Member 'BP_BattleRoyaleBaseItemSpawn_C_RenormalizeChances::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_BattleRoyaleBaseItemSpawn_C_RenormalizeChances, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000048, "Member 'BP_BattleRoyaleBaseItemSpawn_C_RenormalizeChances::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BattleRoyaleBaseItemSpawn_C_RenormalizeChances, CallFunc_Map_Find_Value) == 0x00004C, "Member 'BP_BattleRoyaleBaseItemSpawn_C_RenormalizeChances::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(BP_BattleRoyaleBaseItemSpawn_C_RenormalizeChances, CallFunc_Map_Find_ReturnValue) == 0x000050, "Member 'BP_BattleRoyaleBaseItemSpawn_C_RenormalizeChances::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BattleRoyaleBaseItemSpawn_C_RenormalizeChances, CallFunc_Divide_FloatFloat_ReturnValue) == 0x000054, "Member 'BP_BattleRoyaleBaseItemSpawn_C_RenormalizeChances::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BattleRoyaleBaseItemSpawn_C_RenormalizeChances, CallFunc_Array_Get_Item_1) == 0x000058, "Member 'BP_BattleRoyaleBaseItemSpawn_C_RenormalizeChances::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(BP_BattleRoyaleBaseItemSpawn_C_RenormalizeChances, CallFunc_Map_Find_Value_1) == 0x000060, "Member 'BP_BattleRoyaleBaseItemSpawn_C_RenormalizeChances::CallFunc_Map_Find_Value_1' has a wrong offset!");
static_assert(offsetof(BP_BattleRoyaleBaseItemSpawn_C_RenormalizeChances, CallFunc_Map_Find_ReturnValue_1) == 0x000064, "Member 'BP_BattleRoyaleBaseItemSpawn_C_RenormalizeChances::CallFunc_Map_Find_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_BattleRoyaleBaseItemSpawn_C_RenormalizeChances, CallFunc_Array_Length_ReturnValue) == 0x000068, "Member 'BP_BattleRoyaleBaseItemSpawn_C_RenormalizeChances::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BattleRoyaleBaseItemSpawn_C_RenormalizeChances, CallFunc_Abs_ReturnValue) == 0x00006C, "Member 'BP_BattleRoyaleBaseItemSpawn_C_RenormalizeChances::CallFunc_Abs_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BattleRoyaleBaseItemSpawn_C_RenormalizeChances, CallFunc_Less_IntInt_ReturnValue) == 0x000070, "Member 'BP_BattleRoyaleBaseItemSpawn_C_RenormalizeChances::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BattleRoyaleBaseItemSpawn_C_RenormalizeChances, CallFunc_FMax_ReturnValue) == 0x000074, "Member 'BP_BattleRoyaleBaseItemSpawn_C_RenormalizeChances::CallFunc_FMax_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BattleRoyaleBaseItemSpawn_C_RenormalizeChances, CallFunc_Add_FloatFloat_ReturnValue) == 0x000078, "Member 'BP_BattleRoyaleBaseItemSpawn_C_RenormalizeChances::CallFunc_Add_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BattleRoyaleBaseItemSpawn_C_RenormalizeChances, CallFunc_Array_Length_ReturnValue_1) == 0x00007C, "Member 'BP_BattleRoyaleBaseItemSpawn_C_RenormalizeChances::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_BattleRoyaleBaseItemSpawn_C_RenormalizeChances, CallFunc_Less_IntInt_ReturnValue_1) == 0x000080, "Member 'BP_BattleRoyaleBaseItemSpawn_C_RenormalizeChances::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");

// Function BP_BattleRoyaleBaseItemSpawn.BP_BattleRoyaleBaseItemSpawn_C.GetRandomItem
// 0x0070 (0x0070 - 0x0000)
struct BP_BattleRoyaleBaseItemSpawn_C_GetRandomItem final
{
public:
	class UClass*                                 FoundItem;                                         // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         BestId;                                            // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Current;                                           // 0x000C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         RandomNumber;                                      // 0x0010(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_True_if_break_was_hit_Variable;          // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_15[0x3];                                       // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1D[0x3];                                       // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_RandomFloat_ReturnValue;                  // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_FloatFloat_ReturnValue;      // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_25[0x3];                                       // 0x0025(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UClass*>                         CallFunc_Map_Keys_Keys;                            // 0x0028(0x0010)(ReferenceParm)
	class UClass*                                 CallFunc_Array_Get_Item;                           // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 CallFunc_Array_Get_Item_1;                         // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Map_Find_Value;                           // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x004C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4D[0x3];                                       // 0x004D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0061(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_62[0x2];                                       // 0x0062(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_BattleRoyaleBaseItemSpawn_C_GetRandomItem) == 0x000008, "Wrong alignment on BP_BattleRoyaleBaseItemSpawn_C_GetRandomItem");
static_assert(sizeof(BP_BattleRoyaleBaseItemSpawn_C_GetRandomItem) == 0x000070, "Wrong size on BP_BattleRoyaleBaseItemSpawn_C_GetRandomItem");
static_assert(offsetof(BP_BattleRoyaleBaseItemSpawn_C_GetRandomItem, FoundItem) == 0x000000, "Member 'BP_BattleRoyaleBaseItemSpawn_C_GetRandomItem::FoundItem' has a wrong offset!");
static_assert(offsetof(BP_BattleRoyaleBaseItemSpawn_C_GetRandomItem, BestId) == 0x000008, "Member 'BP_BattleRoyaleBaseItemSpawn_C_GetRandomItem::BestId' has a wrong offset!");
static_assert(offsetof(BP_BattleRoyaleBaseItemSpawn_C_GetRandomItem, Current) == 0x00000C, "Member 'BP_BattleRoyaleBaseItemSpawn_C_GetRandomItem::Current' has a wrong offset!");
static_assert(offsetof(BP_BattleRoyaleBaseItemSpawn_C_GetRandomItem, RandomNumber) == 0x000010, "Member 'BP_BattleRoyaleBaseItemSpawn_C_GetRandomItem::RandomNumber' has a wrong offset!");
static_assert(offsetof(BP_BattleRoyaleBaseItemSpawn_C_GetRandomItem, Temp_bool_True_if_break_was_hit_Variable) == 0x000014, "Member 'BP_BattleRoyaleBaseItemSpawn_C_GetRandomItem::Temp_bool_True_if_break_was_hit_Variable' has a wrong offset!");
static_assert(offsetof(BP_BattleRoyaleBaseItemSpawn_C_GetRandomItem, Temp_int_Array_Index_Variable) == 0x000018, "Member 'BP_BattleRoyaleBaseItemSpawn_C_GetRandomItem::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_BattleRoyaleBaseItemSpawn_C_GetRandomItem, CallFunc_Not_PreBool_ReturnValue) == 0x00001C, "Member 'BP_BattleRoyaleBaseItemSpawn_C_GetRandomItem::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BattleRoyaleBaseItemSpawn_C_GetRandomItem, CallFunc_RandomFloat_ReturnValue) == 0x000020, "Member 'BP_BattleRoyaleBaseItemSpawn_C_GetRandomItem::CallFunc_RandomFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BattleRoyaleBaseItemSpawn_C_GetRandomItem, CallFunc_GreaterEqual_FloatFloat_ReturnValue) == 0x000024, "Member 'BP_BattleRoyaleBaseItemSpawn_C_GetRandomItem::CallFunc_GreaterEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BattleRoyaleBaseItemSpawn_C_GetRandomItem, CallFunc_Map_Keys_Keys) == 0x000028, "Member 'BP_BattleRoyaleBaseItemSpawn_C_GetRandomItem::CallFunc_Map_Keys_Keys' has a wrong offset!");
static_assert(offsetof(BP_BattleRoyaleBaseItemSpawn_C_GetRandomItem, CallFunc_Array_Get_Item) == 0x000038, "Member 'BP_BattleRoyaleBaseItemSpawn_C_GetRandomItem::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_BattleRoyaleBaseItemSpawn_C_GetRandomItem, CallFunc_Array_Get_Item_1) == 0x000040, "Member 'BP_BattleRoyaleBaseItemSpawn_C_GetRandomItem::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(BP_BattleRoyaleBaseItemSpawn_C_GetRandomItem, CallFunc_Map_Find_Value) == 0x000048, "Member 'BP_BattleRoyaleBaseItemSpawn_C_GetRandomItem::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(BP_BattleRoyaleBaseItemSpawn_C_GetRandomItem, CallFunc_Map_Find_ReturnValue) == 0x00004C, "Member 'BP_BattleRoyaleBaseItemSpawn_C_GetRandomItem::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BattleRoyaleBaseItemSpawn_C_GetRandomItem, CallFunc_Add_FloatFloat_ReturnValue) == 0x000050, "Member 'BP_BattleRoyaleBaseItemSpawn_C_GetRandomItem::CallFunc_Add_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BattleRoyaleBaseItemSpawn_C_GetRandomItem, CallFunc_Array_Length_ReturnValue) == 0x000054, "Member 'BP_BattleRoyaleBaseItemSpawn_C_GetRandomItem::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BattleRoyaleBaseItemSpawn_C_GetRandomItem, CallFunc_Array_Length_ReturnValue_1) == 0x000058, "Member 'BP_BattleRoyaleBaseItemSpawn_C_GetRandomItem::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_BattleRoyaleBaseItemSpawn_C_GetRandomItem, Temp_int_Loop_Counter_Variable) == 0x00005C, "Member 'BP_BattleRoyaleBaseItemSpawn_C_GetRandomItem::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_BattleRoyaleBaseItemSpawn_C_GetRandomItem, CallFunc_Greater_IntInt_ReturnValue) == 0x000060, "Member 'BP_BattleRoyaleBaseItemSpawn_C_GetRandomItem::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BattleRoyaleBaseItemSpawn_C_GetRandomItem, CallFunc_Less_IntInt_ReturnValue) == 0x000061, "Member 'BP_BattleRoyaleBaseItemSpawn_C_GetRandomItem::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BattleRoyaleBaseItemSpawn_C_GetRandomItem, CallFunc_Add_IntInt_ReturnValue) == 0x000064, "Member 'BP_BattleRoyaleBaseItemSpawn_C_GetRandomItem::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BattleRoyaleBaseItemSpawn_C_GetRandomItem, CallFunc_BooleanAND_ReturnValue) == 0x000068, "Member 'BP_BattleRoyaleBaseItemSpawn_C_GetRandomItem::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

// Function BP_BattleRoyaleBaseItemSpawn.BP_BattleRoyaleBaseItemSpawn_C.SpawnRandomItem
// 0x0220 (0x0220 - 0x0000)
struct BP_BattleRoyaleBaseItemSpawn_C_SpawnRandomItem final
{
public:
	struct FTransform                             InSpawnTransform;                                  // 0x0000(0x0030)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	class AMordhauPlayerController*               CustomizeFor;                                      // 0x0030(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 SpawnedActor;                                      // 0x0038(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         EmblemColor2;                                      // 0x0040(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         EmblemColor1;                                      // 0x0041(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_42[0x2];                                       // 0x0042(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Emblem;                                            // 0x0044(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FEquipmentCustomization                CustomizationToApply;                              // 0x0048(0x0030)(Edit, BlueprintVisible)
	uint8                                         Pad_78[0x8];                                       // 0x0078(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             SpawnTransform;                                    // 0x0080(0x0030)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_Array_Get_Item;                           // 0x00B1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_Array_Get_Item_1;                         // 0x00B2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B3[0xD];                                       // 0x00B3(0x000D)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x00C0(0x0030)(IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue;               // 0x00F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_F1[0x7];                                       // 0x00F1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 CallFunc_GetRandomItem_FoundItem;                  // 0x00F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValidClass_ReturnValue;                 // 0x0100(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_101[0x7];                                      // 0x0101(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x0108(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_FinishSpawningActor_ReturnValue;          // 0x0110(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TSubclassOf<class AMordhauEquipment>          K2Node_ClassDynamicCast_AsMordhau_Equipment;       // 0x0118(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          K2Node_ClassDynamicCast_bSuccess;                  // 0x0120(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_121[0x7];                                      // 0x0121(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AMordhauEquipment*                      K2Node_DynamicCast_AsMordhau_Equipment;            // 0x0128(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0130(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_131[0xF];                                      // 0x0131(0x000F)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_ComposeTransforms_ReturnValue;            // 0x0140(0x0030)(IsPlainOldData, NoDestructor)
	class UClass*                                 CallFunc_GetObjectClass_ReturnValue;               // 0x0170(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_178[0x8];                                      // 0x0178(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_ComposeTransforms_ReturnValue_1;          // 0x0180(0x0030)(IsPlainOldData, NoDestructor)
	struct FEquipmentCustomization                CallFunc_GetDefaultEquipmentCustomizationFor_OutCustomization; // 0x01B0(0x0030)()
	bool                                          CallFunc_GetDefaultEquipmentCustomizationFor_ReturnValue; // 0x01E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1E1[0x7];                                      // 0x01E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FEquipmentCustomization                CallFunc_GetRandomCustomization_ReturnValue;       // 0x01E8(0x0030)()
};
static_assert(alignof(BP_BattleRoyaleBaseItemSpawn_C_SpawnRandomItem) == 0x000010, "Wrong alignment on BP_BattleRoyaleBaseItemSpawn_C_SpawnRandomItem");
static_assert(sizeof(BP_BattleRoyaleBaseItemSpawn_C_SpawnRandomItem) == 0x000220, "Wrong size on BP_BattleRoyaleBaseItemSpawn_C_SpawnRandomItem");
static_assert(offsetof(BP_BattleRoyaleBaseItemSpawn_C_SpawnRandomItem, InSpawnTransform) == 0x000000, "Member 'BP_BattleRoyaleBaseItemSpawn_C_SpawnRandomItem::InSpawnTransform' has a wrong offset!");
static_assert(offsetof(BP_BattleRoyaleBaseItemSpawn_C_SpawnRandomItem, CustomizeFor) == 0x000030, "Member 'BP_BattleRoyaleBaseItemSpawn_C_SpawnRandomItem::CustomizeFor' has a wrong offset!");
static_assert(offsetof(BP_BattleRoyaleBaseItemSpawn_C_SpawnRandomItem, SpawnedActor) == 0x000038, "Member 'BP_BattleRoyaleBaseItemSpawn_C_SpawnRandomItem::SpawnedActor' has a wrong offset!");
static_assert(offsetof(BP_BattleRoyaleBaseItemSpawn_C_SpawnRandomItem, EmblemColor2) == 0x000040, "Member 'BP_BattleRoyaleBaseItemSpawn_C_SpawnRandomItem::EmblemColor2' has a wrong offset!");
static_assert(offsetof(BP_BattleRoyaleBaseItemSpawn_C_SpawnRandomItem, EmblemColor1) == 0x000041, "Member 'BP_BattleRoyaleBaseItemSpawn_C_SpawnRandomItem::EmblemColor1' has a wrong offset!");
static_assert(offsetof(BP_BattleRoyaleBaseItemSpawn_C_SpawnRandomItem, Emblem) == 0x000044, "Member 'BP_BattleRoyaleBaseItemSpawn_C_SpawnRandomItem::Emblem' has a wrong offset!");
static_assert(offsetof(BP_BattleRoyaleBaseItemSpawn_C_SpawnRandomItem, CustomizationToApply) == 0x000048, "Member 'BP_BattleRoyaleBaseItemSpawn_C_SpawnRandomItem::CustomizationToApply' has a wrong offset!");
static_assert(offsetof(BP_BattleRoyaleBaseItemSpawn_C_SpawnRandomItem, SpawnTransform) == 0x000080, "Member 'BP_BattleRoyaleBaseItemSpawn_C_SpawnRandomItem::SpawnTransform' has a wrong offset!");
static_assert(offsetof(BP_BattleRoyaleBaseItemSpawn_C_SpawnRandomItem, CallFunc_IsValid_ReturnValue) == 0x0000B0, "Member 'BP_BattleRoyaleBaseItemSpawn_C_SpawnRandomItem::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BattleRoyaleBaseItemSpawn_C_SpawnRandomItem, CallFunc_Array_Get_Item) == 0x0000B1, "Member 'BP_BattleRoyaleBaseItemSpawn_C_SpawnRandomItem::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_BattleRoyaleBaseItemSpawn_C_SpawnRandomItem, CallFunc_Array_Get_Item_1) == 0x0000B2, "Member 'BP_BattleRoyaleBaseItemSpawn_C_SpawnRandomItem::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(BP_BattleRoyaleBaseItemSpawn_C_SpawnRandomItem, CallFunc_MakeTransform_ReturnValue) == 0x0000C0, "Member 'BP_BattleRoyaleBaseItemSpawn_C_SpawnRandomItem::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BattleRoyaleBaseItemSpawn_C_SpawnRandomItem, CallFunc_Conv_IntToByte_ReturnValue) == 0x0000F0, "Member 'BP_BattleRoyaleBaseItemSpawn_C_SpawnRandomItem::CallFunc_Conv_IntToByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BattleRoyaleBaseItemSpawn_C_SpawnRandomItem, CallFunc_GetRandomItem_FoundItem) == 0x0000F8, "Member 'BP_BattleRoyaleBaseItemSpawn_C_SpawnRandomItem::CallFunc_GetRandomItem_FoundItem' has a wrong offset!");
static_assert(offsetof(BP_BattleRoyaleBaseItemSpawn_C_SpawnRandomItem, CallFunc_IsValidClass_ReturnValue) == 0x000100, "Member 'BP_BattleRoyaleBaseItemSpawn_C_SpawnRandomItem::CallFunc_IsValidClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BattleRoyaleBaseItemSpawn_C_SpawnRandomItem, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue) == 0x000108, "Member 'BP_BattleRoyaleBaseItemSpawn_C_SpawnRandomItem::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BattleRoyaleBaseItemSpawn_C_SpawnRandomItem, CallFunc_FinishSpawningActor_ReturnValue) == 0x000110, "Member 'BP_BattleRoyaleBaseItemSpawn_C_SpawnRandomItem::CallFunc_FinishSpawningActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BattleRoyaleBaseItemSpawn_C_SpawnRandomItem, K2Node_ClassDynamicCast_AsMordhau_Equipment) == 0x000118, "Member 'BP_BattleRoyaleBaseItemSpawn_C_SpawnRandomItem::K2Node_ClassDynamicCast_AsMordhau_Equipment' has a wrong offset!");
static_assert(offsetof(BP_BattleRoyaleBaseItemSpawn_C_SpawnRandomItem, K2Node_ClassDynamicCast_bSuccess) == 0x000120, "Member 'BP_BattleRoyaleBaseItemSpawn_C_SpawnRandomItem::K2Node_ClassDynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_BattleRoyaleBaseItemSpawn_C_SpawnRandomItem, K2Node_DynamicCast_AsMordhau_Equipment) == 0x000128, "Member 'BP_BattleRoyaleBaseItemSpawn_C_SpawnRandomItem::K2Node_DynamicCast_AsMordhau_Equipment' has a wrong offset!");
static_assert(offsetof(BP_BattleRoyaleBaseItemSpawn_C_SpawnRandomItem, K2Node_DynamicCast_bSuccess) == 0x000130, "Member 'BP_BattleRoyaleBaseItemSpawn_C_SpawnRandomItem::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_BattleRoyaleBaseItemSpawn_C_SpawnRandomItem, CallFunc_ComposeTransforms_ReturnValue) == 0x000140, "Member 'BP_BattleRoyaleBaseItemSpawn_C_SpawnRandomItem::CallFunc_ComposeTransforms_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BattleRoyaleBaseItemSpawn_C_SpawnRandomItem, CallFunc_GetObjectClass_ReturnValue) == 0x000170, "Member 'BP_BattleRoyaleBaseItemSpawn_C_SpawnRandomItem::CallFunc_GetObjectClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BattleRoyaleBaseItemSpawn_C_SpawnRandomItem, CallFunc_ComposeTransforms_ReturnValue_1) == 0x000180, "Member 'BP_BattleRoyaleBaseItemSpawn_C_SpawnRandomItem::CallFunc_ComposeTransforms_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_BattleRoyaleBaseItemSpawn_C_SpawnRandomItem, CallFunc_GetDefaultEquipmentCustomizationFor_OutCustomization) == 0x0001B0, "Member 'BP_BattleRoyaleBaseItemSpawn_C_SpawnRandomItem::CallFunc_GetDefaultEquipmentCustomizationFor_OutCustomization' has a wrong offset!");
static_assert(offsetof(BP_BattleRoyaleBaseItemSpawn_C_SpawnRandomItem, CallFunc_GetDefaultEquipmentCustomizationFor_ReturnValue) == 0x0001E0, "Member 'BP_BattleRoyaleBaseItemSpawn_C_SpawnRandomItem::CallFunc_GetDefaultEquipmentCustomizationFor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BattleRoyaleBaseItemSpawn_C_SpawnRandomItem, CallFunc_GetRandomCustomization_ReturnValue) == 0x0001E8, "Member 'BP_BattleRoyaleBaseItemSpawn_C_SpawnRandomItem::CallFunc_GetRandomCustomization_ReturnValue' has a wrong offset!");

}

