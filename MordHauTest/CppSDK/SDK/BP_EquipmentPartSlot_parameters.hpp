﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_EquipmentPartSlot

#include "Basic.hpp"

#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function BP_EquipmentPartSlot.BP_EquipmentPartSlot_C.ExecuteUbergraph_BP_EquipmentPartSlot
// 0x0050 (0x0050 - 0x0000)
struct BP_EquipmentPartSlot_C_ExecuteUbergraph_BP_EquipmentPartSlot final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class FText Primary_Text, class FText Secondary_Text)> K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1B[0x5];                                       // 0x001B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_CustomEvent_Primary_Text;                   // 0x0020(0x0018)()
	class FText                                   K2Node_CustomEvent_Secondary_Text;                 // 0x0038(0x0018)()
};
static_assert(alignof(BP_EquipmentPartSlot_C_ExecuteUbergraph_BP_EquipmentPartSlot) == 0x000008, "Wrong alignment on BP_EquipmentPartSlot_C_ExecuteUbergraph_BP_EquipmentPartSlot");
static_assert(sizeof(BP_EquipmentPartSlot_C_ExecuteUbergraph_BP_EquipmentPartSlot) == 0x000050, "Wrong size on BP_EquipmentPartSlot_C_ExecuteUbergraph_BP_EquipmentPartSlot");
static_assert(offsetof(BP_EquipmentPartSlot_C_ExecuteUbergraph_BP_EquipmentPartSlot, EntryPoint) == 0x000000, "Member 'BP_EquipmentPartSlot_C_ExecuteUbergraph_BP_EquipmentPartSlot::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_EquipmentPartSlot_C_ExecuteUbergraph_BP_EquipmentPartSlot, Temp_bool_Variable) == 0x000004, "Member 'BP_EquipmentPartSlot_C_ExecuteUbergraph_BP_EquipmentPartSlot::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BP_EquipmentPartSlot_C_ExecuteUbergraph_BP_EquipmentPartSlot, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'BP_EquipmentPartSlot_C_ExecuteUbergraph_BP_EquipmentPartSlot::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_EquipmentPartSlot_C_ExecuteUbergraph_BP_EquipmentPartSlot, Temp_byte_Variable) == 0x000018, "Member 'BP_EquipmentPartSlot_C_ExecuteUbergraph_BP_EquipmentPartSlot::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(BP_EquipmentPartSlot_C_ExecuteUbergraph_BP_EquipmentPartSlot, Temp_byte_Variable_1) == 0x000019, "Member 'BP_EquipmentPartSlot_C_ExecuteUbergraph_BP_EquipmentPartSlot::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_EquipmentPartSlot_C_ExecuteUbergraph_BP_EquipmentPartSlot, K2Node_Select_Default) == 0x00001A, "Member 'BP_EquipmentPartSlot_C_ExecuteUbergraph_BP_EquipmentPartSlot::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(BP_EquipmentPartSlot_C_ExecuteUbergraph_BP_EquipmentPartSlot, K2Node_CustomEvent_Primary_Text) == 0x000020, "Member 'BP_EquipmentPartSlot_C_ExecuteUbergraph_BP_EquipmentPartSlot::K2Node_CustomEvent_Primary_Text' has a wrong offset!");
static_assert(offsetof(BP_EquipmentPartSlot_C_ExecuteUbergraph_BP_EquipmentPartSlot, K2Node_CustomEvent_Secondary_Text) == 0x000038, "Member 'BP_EquipmentPartSlot_C_ExecuteUbergraph_BP_EquipmentPartSlot::K2Node_CustomEvent_Secondary_Text' has a wrong offset!");

// Function BP_EquipmentPartSlot.BP_EquipmentPartSlot_C.Update 
// 0x0030 (0x0030 - 0x0000)
struct BP_EquipmentPartSlot_C_Update_ final
{
public:
	class FText                                   Primary_Text_0;                                    // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FText                                   Secondary_Text_0;                                  // 0x0018(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(BP_EquipmentPartSlot_C_Update_) == 0x000008, "Wrong alignment on BP_EquipmentPartSlot_C_Update_");
static_assert(sizeof(BP_EquipmentPartSlot_C_Update_) == 0x000030, "Wrong size on BP_EquipmentPartSlot_C_Update_");
static_assert(offsetof(BP_EquipmentPartSlot_C_Update_, Primary_Text_0) == 0x000000, "Member 'BP_EquipmentPartSlot_C_Update_::Primary_Text_0' has a wrong offset!");
static_assert(offsetof(BP_EquipmentPartSlot_C_Update_, Secondary_Text_0) == 0x000018, "Member 'BP_EquipmentPartSlot_C_Update_::Secondary_Text_0' has a wrong offset!");

// Function BP_EquipmentPartSlot.BP_EquipmentPartSlot_C.GetVisibility_0
// 0x0020 (0x0020 - 0x0000)
struct BP_EquipmentPartSlot_C_GetVisibility_0 final
{
public:
	ESlateVisibility                              ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_StriStri_ReturnValue;          // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_EquipmentPartSlot_C_GetVisibility_0) == 0x000008, "Wrong alignment on BP_EquipmentPartSlot_C_GetVisibility_0");
static_assert(sizeof(BP_EquipmentPartSlot_C_GetVisibility_0) == 0x000020, "Wrong size on BP_EquipmentPartSlot_C_GetVisibility_0");
static_assert(offsetof(BP_EquipmentPartSlot_C_GetVisibility_0, ReturnValue) == 0x000000, "Member 'BP_EquipmentPartSlot_C_GetVisibility_0::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EquipmentPartSlot_C_GetVisibility_0, Temp_bool_Variable) == 0x000001, "Member 'BP_EquipmentPartSlot_C_GetVisibility_0::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BP_EquipmentPartSlot_C_GetVisibility_0, Temp_byte_Variable) == 0x000002, "Member 'BP_EquipmentPartSlot_C_GetVisibility_0::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(BP_EquipmentPartSlot_C_GetVisibility_0, Temp_byte_Variable_1) == 0x000003, "Member 'BP_EquipmentPartSlot_C_GetVisibility_0::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_EquipmentPartSlot_C_GetVisibility_0, CallFunc_Conv_TextToString_ReturnValue) == 0x000008, "Member 'BP_EquipmentPartSlot_C_GetVisibility_0::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EquipmentPartSlot_C_GetVisibility_0, CallFunc_EqualEqual_StriStri_ReturnValue) == 0x000018, "Member 'BP_EquipmentPartSlot_C_GetVisibility_0::CallFunc_EqualEqual_StriStri_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EquipmentPartSlot_C_GetVisibility_0, K2Node_Select_Default) == 0x000019, "Member 'BP_EquipmentPartSlot_C_GetVisibility_0::K2Node_Select_Default' has a wrong offset!");

}

