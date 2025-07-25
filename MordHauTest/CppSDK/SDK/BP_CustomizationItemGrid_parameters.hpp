﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_CustomizationItemGrid

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BP_CustomizationItemGrid.BP_CustomizationItemGrid_C.ExecuteUbergraph_BP_CustomizationItemGrid
// 0x0048 (0x0048 - 0x0000)
struct BP_CustomizationItemGrid_C_ExecuteUbergraph_BP_CustomizationItemGrid final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UBP_CustomizationItemEntry_C* Item_Entry)> K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x0014(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(class UBP_CustomizationItemEntry_C* Entry)> K2Node_CreateDelegate_OutputDelegate_2;            // 0x0024(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_34[0x4];                                       // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_CustomizationItemEntry_C*           K2Node_CustomEvent_Item_Entry;                     // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_CustomizationItemEntry_C*           K2Node_CustomEvent_Entry;                          // 0x0040(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_CustomizationItemGrid_C_ExecuteUbergraph_BP_CustomizationItemGrid) == 0x000008, "Wrong alignment on BP_CustomizationItemGrid_C_ExecuteUbergraph_BP_CustomizationItemGrid");
static_assert(sizeof(BP_CustomizationItemGrid_C_ExecuteUbergraph_BP_CustomizationItemGrid) == 0x000048, "Wrong size on BP_CustomizationItemGrid_C_ExecuteUbergraph_BP_CustomizationItemGrid");
static_assert(offsetof(BP_CustomizationItemGrid_C_ExecuteUbergraph_BP_CustomizationItemGrid, EntryPoint) == 0x000000, "Member 'BP_CustomizationItemGrid_C_ExecuteUbergraph_BP_CustomizationItemGrid::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_CustomizationItemGrid_C_ExecuteUbergraph_BP_CustomizationItemGrid, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'BP_CustomizationItemGrid_C_ExecuteUbergraph_BP_CustomizationItemGrid::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_CustomizationItemGrid_C_ExecuteUbergraph_BP_CustomizationItemGrid, K2Node_CreateDelegate_OutputDelegate_1) == 0x000014, "Member 'BP_CustomizationItemGrid_C_ExecuteUbergraph_BP_CustomizationItemGrid::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(BP_CustomizationItemGrid_C_ExecuteUbergraph_BP_CustomizationItemGrid, K2Node_CreateDelegate_OutputDelegate_2) == 0x000024, "Member 'BP_CustomizationItemGrid_C_ExecuteUbergraph_BP_CustomizationItemGrid::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(BP_CustomizationItemGrid_C_ExecuteUbergraph_BP_CustomizationItemGrid, K2Node_CustomEvent_Item_Entry) == 0x000038, "Member 'BP_CustomizationItemGrid_C_ExecuteUbergraph_BP_CustomizationItemGrid::K2Node_CustomEvent_Item_Entry' has a wrong offset!");
static_assert(offsetof(BP_CustomizationItemGrid_C_ExecuteUbergraph_BP_CustomizationItemGrid, K2Node_CustomEvent_Entry) == 0x000040, "Member 'BP_CustomizationItemGrid_C_ExecuteUbergraph_BP_CustomizationItemGrid::K2Node_CustomEvent_Entry' has a wrong offset!");

// Function BP_CustomizationItemGrid.BP_CustomizationItemGrid_C.Scroll Into View
// 0x0008 (0x0008 - 0x0000)
struct BP_CustomizationItemGrid_C_Scroll_Into_View final
{
public:
	class UBP_CustomizationItemEntry_C*           Entry;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_CustomizationItemGrid_C_Scroll_Into_View) == 0x000008, "Wrong alignment on BP_CustomizationItemGrid_C_Scroll_Into_View");
static_assert(sizeof(BP_CustomizationItemGrid_C_Scroll_Into_View) == 0x000008, "Wrong size on BP_CustomizationItemGrid_C_Scroll_Into_View");
static_assert(offsetof(BP_CustomizationItemGrid_C_Scroll_Into_View, Entry) == 0x000000, "Member 'BP_CustomizationItemGrid_C_Scroll_Into_View::Entry' has a wrong offset!");

// Function BP_CustomizationItemGrid.BP_CustomizationItemGrid_C.Add
// 0x0008 (0x0008 - 0x0000)
struct BP_CustomizationItemGrid_C_Add final
{
public:
	class UBP_CustomizationItemEntry_C*           Item_Entry;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_CustomizationItemGrid_C_Add) == 0x000008, "Wrong alignment on BP_CustomizationItemGrid_C_Add");
static_assert(sizeof(BP_CustomizationItemGrid_C_Add) == 0x000008, "Wrong size on BP_CustomizationItemGrid_C_Add");
static_assert(offsetof(BP_CustomizationItemGrid_C_Add, Item_Entry) == 0x000000, "Member 'BP_CustomizationItemGrid_C_Add::Item_Entry' has a wrong offset!");

// Function BP_CustomizationItemGrid.BP_CustomizationItemGrid_C.Add Entry To Grid
// 0x0030 (0x0030 - 0x0000)
struct BP_CustomizationItemGrid_C_Add_Entry_To_Grid final
{
public:
	class UBP_CustomizationItemEntry_C*           Entry;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Index_0;                                           // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUniformGridSlot*                       CallFunc_AddChildToUniformGrid_ReturnValue;        // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Percent_IntInt_ReturnValue;               // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_21[0x3];                                       // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_CustomizationItemGrid_C_Add_Entry_To_Grid) == 0x000008, "Wrong alignment on BP_CustomizationItemGrid_C_Add_Entry_To_Grid");
static_assert(sizeof(BP_CustomizationItemGrid_C_Add_Entry_To_Grid) == 0x000030, "Wrong size on BP_CustomizationItemGrid_C_Add_Entry_To_Grid");
static_assert(offsetof(BP_CustomizationItemGrid_C_Add_Entry_To_Grid, Entry) == 0x000000, "Member 'BP_CustomizationItemGrid_C_Add_Entry_To_Grid::Entry' has a wrong offset!");
static_assert(offsetof(BP_CustomizationItemGrid_C_Add_Entry_To_Grid, Index_0) == 0x000008, "Member 'BP_CustomizationItemGrid_C_Add_Entry_To_Grid::Index_0' has a wrong offset!");
static_assert(offsetof(BP_CustomizationItemGrid_C_Add_Entry_To_Grid, CallFunc_AddChildToUniformGrid_ReturnValue) == 0x000010, "Member 'BP_CustomizationItemGrid_C_Add_Entry_To_Grid::CallFunc_AddChildToUniformGrid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CustomizationItemGrid_C_Add_Entry_To_Grid, CallFunc_Subtract_IntInt_ReturnValue) == 0x000018, "Member 'BP_CustomizationItemGrid_C_Add_Entry_To_Grid::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CustomizationItemGrid_C_Add_Entry_To_Grid, CallFunc_Percent_IntInt_ReturnValue) == 0x00001C, "Member 'BP_CustomizationItemGrid_C_Add_Entry_To_Grid::CallFunc_Percent_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CustomizationItemGrid_C_Add_Entry_To_Grid, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000020, "Member 'BP_CustomizationItemGrid_C_Add_Entry_To_Grid::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CustomizationItemGrid_C_Add_Entry_To_Grid, Temp_int_Variable) == 0x000024, "Member 'BP_CustomizationItemGrid_C_Add_Entry_To_Grid::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(BP_CustomizationItemGrid_C_Add_Entry_To_Grid, CallFunc_Add_IntInt_ReturnValue) == 0x000028, "Member 'BP_CustomizationItemGrid_C_Add_Entry_To_Grid::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");

// Function BP_CustomizationItemGrid.BP_CustomizationItemGrid_C.Update Scroll Bar
// 0x0018 (0x0018 - 0x0000)
struct BP_CustomizationItemGrid_C_Update_Scroll_Bar final
{
public:
	float                                         CallFunc_SelectFloat_ReturnValue;                  // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;                 // 0x0004(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SelectFloat_ReturnValue_1;                // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue_1;               // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_CustomizationItemGrid_C_Update_Scroll_Bar) == 0x000004, "Wrong alignment on BP_CustomizationItemGrid_C_Update_Scroll_Bar");
static_assert(sizeof(BP_CustomizationItemGrid_C_Update_Scroll_Bar) == 0x000018, "Wrong size on BP_CustomizationItemGrid_C_Update_Scroll_Bar");
static_assert(offsetof(BP_CustomizationItemGrid_C_Update_Scroll_Bar, CallFunc_SelectFloat_ReturnValue) == 0x000000, "Member 'BP_CustomizationItemGrid_C_Update_Scroll_Bar::CallFunc_SelectFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CustomizationItemGrid_C_Update_Scroll_Bar, CallFunc_MakeVector2D_ReturnValue) == 0x000004, "Member 'BP_CustomizationItemGrid_C_Update_Scroll_Bar::CallFunc_MakeVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CustomizationItemGrid_C_Update_Scroll_Bar, CallFunc_SelectFloat_ReturnValue_1) == 0x00000C, "Member 'BP_CustomizationItemGrid_C_Update_Scroll_Bar::CallFunc_SelectFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_CustomizationItemGrid_C_Update_Scroll_Bar, CallFunc_MakeVector2D_ReturnValue_1) == 0x000010, "Member 'BP_CustomizationItemGrid_C_Update_Scroll_Bar::CallFunc_MakeVector2D_ReturnValue_1' has a wrong offset!");

}

