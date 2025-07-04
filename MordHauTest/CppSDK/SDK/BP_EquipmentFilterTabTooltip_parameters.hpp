﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_EquipmentFilterTabTooltip

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "Mordhau_structs.hpp"


namespace SDK::Params
{

// Function BP_EquipmentFilterTabTooltip.BP_EquipmentFilterTabTooltip_C.Update Tooltip
// 0x0050 (0x0050 - 0x0000)
struct BP_EquipmentFilterTabTooltip_C_Update_Tooltip final
{
public:
	class FText                                   Title_Text;                                        // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FText                                   Decription_Text;                                   // 0x0018(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	EEquipmentCategory                            Category;                                          // 0x0030(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bHasSelectedItem;                                  // 0x0031(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_32[0x6];                                       // 0x0032(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_EquipmentFilterTabTooltip_C*        Toolip;                                            // 0x0038(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AMordhauEquipment*                      Current_Equipment;                                 // 0x0040(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_EquipmentFilterTabTooltip_C_Update_Tooltip) == 0x000008, "Wrong alignment on BP_EquipmentFilterTabTooltip_C_Update_Tooltip");
static_assert(sizeof(BP_EquipmentFilterTabTooltip_C_Update_Tooltip) == 0x000050, "Wrong size on BP_EquipmentFilterTabTooltip_C_Update_Tooltip");
static_assert(offsetof(BP_EquipmentFilterTabTooltip_C_Update_Tooltip, Title_Text) == 0x000000, "Member 'BP_EquipmentFilterTabTooltip_C_Update_Tooltip::Title_Text' has a wrong offset!");
static_assert(offsetof(BP_EquipmentFilterTabTooltip_C_Update_Tooltip, Decription_Text) == 0x000018, "Member 'BP_EquipmentFilterTabTooltip_C_Update_Tooltip::Decription_Text' has a wrong offset!");
static_assert(offsetof(BP_EquipmentFilterTabTooltip_C_Update_Tooltip, Category) == 0x000030, "Member 'BP_EquipmentFilterTabTooltip_C_Update_Tooltip::Category' has a wrong offset!");
static_assert(offsetof(BP_EquipmentFilterTabTooltip_C_Update_Tooltip, bHasSelectedItem) == 0x000031, "Member 'BP_EquipmentFilterTabTooltip_C_Update_Tooltip::bHasSelectedItem' has a wrong offset!");
static_assert(offsetof(BP_EquipmentFilterTabTooltip_C_Update_Tooltip, Toolip) == 0x000038, "Member 'BP_EquipmentFilterTabTooltip_C_Update_Tooltip::Toolip' has a wrong offset!");
static_assert(offsetof(BP_EquipmentFilterTabTooltip_C_Update_Tooltip, Current_Equipment) == 0x000040, "Member 'BP_EquipmentFilterTabTooltip_C_Update_Tooltip::Current_Equipment' has a wrong offset!");
static_assert(offsetof(BP_EquipmentFilterTabTooltip_C_Update_Tooltip, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000048, "Member 'BP_EquipmentFilterTabTooltip_C_Update_Tooltip::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");

// Function BP_EquipmentFilterTabTooltip.BP_EquipmentFilterTabTooltip_C.GetVisibility_0
// 0x0005 (0x0005 - 0x0000)
struct BP_EquipmentFilterTabTooltip_C_GetVisibility_0 final
{
public:
	ESlateVisibility                              ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_EquipmentFilterTabTooltip_C_GetVisibility_0) == 0x000001, "Wrong alignment on BP_EquipmentFilterTabTooltip_C_GetVisibility_0");
static_assert(sizeof(BP_EquipmentFilterTabTooltip_C_GetVisibility_0) == 0x000005, "Wrong size on BP_EquipmentFilterTabTooltip_C_GetVisibility_0");
static_assert(offsetof(BP_EquipmentFilterTabTooltip_C_GetVisibility_0, ReturnValue) == 0x000000, "Member 'BP_EquipmentFilterTabTooltip_C_GetVisibility_0::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EquipmentFilterTabTooltip_C_GetVisibility_0, Temp_bool_Variable) == 0x000001, "Member 'BP_EquipmentFilterTabTooltip_C_GetVisibility_0::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BP_EquipmentFilterTabTooltip_C_GetVisibility_0, Temp_byte_Variable) == 0x000002, "Member 'BP_EquipmentFilterTabTooltip_C_GetVisibility_0::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(BP_EquipmentFilterTabTooltip_C_GetVisibility_0, Temp_byte_Variable_1) == 0x000003, "Member 'BP_EquipmentFilterTabTooltip_C_GetVisibility_0::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_EquipmentFilterTabTooltip_C_GetVisibility_0, K2Node_Select_Default) == 0x000004, "Member 'BP_EquipmentFilterTabTooltip_C_GetVisibility_0::K2Node_Select_Default' has a wrong offset!");

}

