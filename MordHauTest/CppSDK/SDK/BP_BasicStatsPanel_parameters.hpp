﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_BasicStatsPanel

#include "Basic.hpp"

#include "Mordhau_structs.hpp"


namespace SDK::Params
{

// Function BP_BasicStatsPanel.BP_BasicStatsPanel_C.ExecuteUbergraph_BP_BasicStatsPanel
// 0x0014 (0x0014 - 0x0000)
struct BP_BasicStatsPanel_C_ExecuteUbergraph_BP_BasicStatsPanel final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class AMordhauEquipment* Equipment)> K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor)
};
static_assert(alignof(BP_BasicStatsPanel_C_ExecuteUbergraph_BP_BasicStatsPanel) == 0x000004, "Wrong alignment on BP_BasicStatsPanel_C_ExecuteUbergraph_BP_BasicStatsPanel");
static_assert(sizeof(BP_BasicStatsPanel_C_ExecuteUbergraph_BP_BasicStatsPanel) == 0x000014, "Wrong size on BP_BasicStatsPanel_C_ExecuteUbergraph_BP_BasicStatsPanel");
static_assert(offsetof(BP_BasicStatsPanel_C_ExecuteUbergraph_BP_BasicStatsPanel, EntryPoint) == 0x000000, "Member 'BP_BasicStatsPanel_C_ExecuteUbergraph_BP_BasicStatsPanel::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_BasicStatsPanel_C_ExecuteUbergraph_BP_BasicStatsPanel, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'BP_BasicStatsPanel_C_ExecuteUbergraph_BP_BasicStatsPanel::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");

// Function BP_BasicStatsPanel.BP_BasicStatsPanel_C.Update Basic Stats
// 0x0018 (0x0018 - 0x0000)
struct BP_BasicStatsPanel_C_Update_Basic_Stats final
{
public:
	class AMordhauEquipment*                      Equipment_0;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EEquipmentType                                Temp_byte_Variable;                                // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                K2Node_Select_Default;                             // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_BasicStatsPanel_C_Update_Basic_Stats) == 0x000008, "Wrong alignment on BP_BasicStatsPanel_C_Update_Basic_Stats");
static_assert(sizeof(BP_BasicStatsPanel_C_Update_Basic_Stats) == 0x000018, "Wrong size on BP_BasicStatsPanel_C_Update_Basic_Stats");
static_assert(offsetof(BP_BasicStatsPanel_C_Update_Basic_Stats, Equipment_0) == 0x000000, "Member 'BP_BasicStatsPanel_C_Update_Basic_Stats::Equipment_0' has a wrong offset!");
static_assert(offsetof(BP_BasicStatsPanel_C_Update_Basic_Stats, Temp_byte_Variable) == 0x000008, "Member 'BP_BasicStatsPanel_C_Update_Basic_Stats::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(BP_BasicStatsPanel_C_Update_Basic_Stats, K2Node_Select_Default) == 0x000010, "Member 'BP_BasicStatsPanel_C_Update_Basic_Stats::K2Node_Select_Default' has a wrong offset!");

// Function BP_BasicStatsPanel.BP_BasicStatsPanel_C.Update Damage Bar
// 0x0280 (0x0280 - 0x0000)
struct BP_BasicStatsPanel_C_Update_Damage_Bar final
{
public:
	struct FAttackInfo                            CallFunc_Get_Melee_Attack_Info_Attack_Info;        // 0x0000(0x0128)()
	class AMordhauWeapon*                         CallFunc_Get_Melee_Attack_Info_AsMordhau_Weapon;   // 0x0128(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAttackInfo                            CallFunc_Get_Melee_Attack_Info_Attack_Info_1;      // 0x0130(0x0128)()
	class AMordhauWeapon*                         CallFunc_Get_Melee_Attack_Info_AsMordhau_Weapon_1; // 0x0258(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Get_Average_Damage_ReturnValue;           // 0x0260(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Get_Average_Damage_ReturnValue_1;         // 0x0264(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_MapRangeUnclamped_ReturnValue;            // 0x0268(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_MapRangeUnclamped_ReturnValue_1;          // 0x026C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Get_Average_Projectile_Damage_ReturnValue; // 0x0270(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0274(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_275[0x3];                                      // 0x0275(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_MapRangeUnclamped_ReturnValue_2;          // 0x0278(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_BasicStatsPanel_C_Update_Damage_Bar) == 0x000008, "Wrong alignment on BP_BasicStatsPanel_C_Update_Damage_Bar");
static_assert(sizeof(BP_BasicStatsPanel_C_Update_Damage_Bar) == 0x000280, "Wrong size on BP_BasicStatsPanel_C_Update_Damage_Bar");
static_assert(offsetof(BP_BasicStatsPanel_C_Update_Damage_Bar, CallFunc_Get_Melee_Attack_Info_Attack_Info) == 0x000000, "Member 'BP_BasicStatsPanel_C_Update_Damage_Bar::CallFunc_Get_Melee_Attack_Info_Attack_Info' has a wrong offset!");
static_assert(offsetof(BP_BasicStatsPanel_C_Update_Damage_Bar, CallFunc_Get_Melee_Attack_Info_AsMordhau_Weapon) == 0x000128, "Member 'BP_BasicStatsPanel_C_Update_Damage_Bar::CallFunc_Get_Melee_Attack_Info_AsMordhau_Weapon' has a wrong offset!");
static_assert(offsetof(BP_BasicStatsPanel_C_Update_Damage_Bar, CallFunc_Get_Melee_Attack_Info_Attack_Info_1) == 0x000130, "Member 'BP_BasicStatsPanel_C_Update_Damage_Bar::CallFunc_Get_Melee_Attack_Info_Attack_Info_1' has a wrong offset!");
static_assert(offsetof(BP_BasicStatsPanel_C_Update_Damage_Bar, CallFunc_Get_Melee_Attack_Info_AsMordhau_Weapon_1) == 0x000258, "Member 'BP_BasicStatsPanel_C_Update_Damage_Bar::CallFunc_Get_Melee_Attack_Info_AsMordhau_Weapon_1' has a wrong offset!");
static_assert(offsetof(BP_BasicStatsPanel_C_Update_Damage_Bar, CallFunc_Get_Average_Damage_ReturnValue) == 0x000260, "Member 'BP_BasicStatsPanel_C_Update_Damage_Bar::CallFunc_Get_Average_Damage_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BasicStatsPanel_C_Update_Damage_Bar, CallFunc_Get_Average_Damage_ReturnValue_1) == 0x000264, "Member 'BP_BasicStatsPanel_C_Update_Damage_Bar::CallFunc_Get_Average_Damage_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_BasicStatsPanel_C_Update_Damage_Bar, CallFunc_MapRangeUnclamped_ReturnValue) == 0x000268, "Member 'BP_BasicStatsPanel_C_Update_Damage_Bar::CallFunc_MapRangeUnclamped_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BasicStatsPanel_C_Update_Damage_Bar, CallFunc_MapRangeUnclamped_ReturnValue_1) == 0x00026C, "Member 'BP_BasicStatsPanel_C_Update_Damage_Bar::CallFunc_MapRangeUnclamped_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_BasicStatsPanel_C_Update_Damage_Bar, CallFunc_Get_Average_Projectile_Damage_ReturnValue) == 0x000270, "Member 'BP_BasicStatsPanel_C_Update_Damage_Bar::CallFunc_Get_Average_Projectile_Damage_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BasicStatsPanel_C_Update_Damage_Bar, K2Node_SwitchEnum_CmpSuccess) == 0x000274, "Member 'BP_BasicStatsPanel_C_Update_Damage_Bar::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(BP_BasicStatsPanel_C_Update_Damage_Bar, CallFunc_MapRangeUnclamped_ReturnValue_2) == 0x000278, "Member 'BP_BasicStatsPanel_C_Update_Damage_Bar::CallFunc_MapRangeUnclamped_ReturnValue_2' has a wrong offset!");

// Function BP_BasicStatsPanel.BP_BasicStatsPanel_C.Update Speed Bar
// 0x0288 (0x0288 - 0x0000)
struct BP_BasicStatsPanel_C_Update_Speed_Bar final
{
public:
	bool                                          Temp_bool_Variable;                                // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAttackInfo                            CallFunc_Get_Melee_Attack_Info_Attack_Info;        // 0x0008(0x0128)()
	class AMordhauWeapon*                         CallFunc_Get_Melee_Attack_Info_AsMordhau_Weapon;   // 0x0130(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue;           // 0x0138(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_139[0x7];                                      // 0x0139(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAttackInfo                            CallFunc_Get_Melee_Attack_Info_Attack_Info_1;      // 0x0140(0x0128)()
	class AMordhauWeapon*                         CallFunc_Get_Melee_Attack_Info_AsMordhau_Weapon_1; // 0x0268(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Select_Default;                             // 0x0270(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_MapRangeUnclamped_ReturnValue;            // 0x0274(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x0278(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x027C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_MapRangeUnclamped_ReturnValue_1;          // 0x0280(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0284(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_BasicStatsPanel_C_Update_Speed_Bar) == 0x000008, "Wrong alignment on BP_BasicStatsPanel_C_Update_Speed_Bar");
static_assert(sizeof(BP_BasicStatsPanel_C_Update_Speed_Bar) == 0x000288, "Wrong size on BP_BasicStatsPanel_C_Update_Speed_Bar");
static_assert(offsetof(BP_BasicStatsPanel_C_Update_Speed_Bar, Temp_bool_Variable) == 0x000000, "Member 'BP_BasicStatsPanel_C_Update_Speed_Bar::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BP_BasicStatsPanel_C_Update_Speed_Bar, CallFunc_Get_Melee_Attack_Info_Attack_Info) == 0x000008, "Member 'BP_BasicStatsPanel_C_Update_Speed_Bar::CallFunc_Get_Melee_Attack_Info_Attack_Info' has a wrong offset!");
static_assert(offsetof(BP_BasicStatsPanel_C_Update_Speed_Bar, CallFunc_Get_Melee_Attack_Info_AsMordhau_Weapon) == 0x000130, "Member 'BP_BasicStatsPanel_C_Update_Speed_Bar::CallFunc_Get_Melee_Attack_Info_AsMordhau_Weapon' has a wrong offset!");
static_assert(offsetof(BP_BasicStatsPanel_C_Update_Speed_Bar, CallFunc_Greater_FloatFloat_ReturnValue) == 0x000138, "Member 'BP_BasicStatsPanel_C_Update_Speed_Bar::CallFunc_Greater_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BasicStatsPanel_C_Update_Speed_Bar, CallFunc_Get_Melee_Attack_Info_Attack_Info_1) == 0x000140, "Member 'BP_BasicStatsPanel_C_Update_Speed_Bar::CallFunc_Get_Melee_Attack_Info_Attack_Info_1' has a wrong offset!");
static_assert(offsetof(BP_BasicStatsPanel_C_Update_Speed_Bar, CallFunc_Get_Melee_Attack_Info_AsMordhau_Weapon_1) == 0x000268, "Member 'BP_BasicStatsPanel_C_Update_Speed_Bar::CallFunc_Get_Melee_Attack_Info_AsMordhau_Weapon_1' has a wrong offset!");
static_assert(offsetof(BP_BasicStatsPanel_C_Update_Speed_Bar, K2Node_Select_Default) == 0x000270, "Member 'BP_BasicStatsPanel_C_Update_Speed_Bar::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(BP_BasicStatsPanel_C_Update_Speed_Bar, CallFunc_MapRangeUnclamped_ReturnValue) == 0x000274, "Member 'BP_BasicStatsPanel_C_Update_Speed_Bar::CallFunc_MapRangeUnclamped_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BasicStatsPanel_C_Update_Speed_Bar, CallFunc_Add_FloatFloat_ReturnValue) == 0x000278, "Member 'BP_BasicStatsPanel_C_Update_Speed_Bar::CallFunc_Add_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BasicStatsPanel_C_Update_Speed_Bar, CallFunc_Divide_FloatFloat_ReturnValue) == 0x00027C, "Member 'BP_BasicStatsPanel_C_Update_Speed_Bar::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BasicStatsPanel_C_Update_Speed_Bar, CallFunc_MapRangeUnclamped_ReturnValue_1) == 0x000280, "Member 'BP_BasicStatsPanel_C_Update_Speed_Bar::CallFunc_MapRangeUnclamped_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_BasicStatsPanel_C_Update_Speed_Bar, K2Node_SwitchEnum_CmpSuccess) == 0x000284, "Member 'BP_BasicStatsPanel_C_Update_Speed_Bar::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

// Function BP_BasicStatsPanel.BP_BasicStatsPanel_C.Update Reach Bar
// 0x0060 (0x0060 - 0x0000)
struct BP_BasicStatsPanel_C_Update_Reach_Bar final
{
public:
	class AMordhauWeapon*                         K2Node_DynamicCast_AsMordhau_Weapon;               // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_FloatToString_ReturnValue;           // 0x0010(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetDefaultActor_ReturnValue;              // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0028(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class AMordhauProjectile*                     K2Node_DynamicCast_AsMordhau_Projectile;           // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_41[0x3];                                       // 0x0041(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_MapRangeUnclamped_ReturnValue;            // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetMaxSpeed_ReturnValue;                  // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_51[0x3];                                       // 0x0051(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue_1;          // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_MapRangeUnclamped_ReturnValue_1;          // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_BasicStatsPanel_C_Update_Reach_Bar) == 0x000008, "Wrong alignment on BP_BasicStatsPanel_C_Update_Reach_Bar");
static_assert(sizeof(BP_BasicStatsPanel_C_Update_Reach_Bar) == 0x000060, "Wrong size on BP_BasicStatsPanel_C_Update_Reach_Bar");
static_assert(offsetof(BP_BasicStatsPanel_C_Update_Reach_Bar, K2Node_DynamicCast_AsMordhau_Weapon) == 0x000000, "Member 'BP_BasicStatsPanel_C_Update_Reach_Bar::K2Node_DynamicCast_AsMordhau_Weapon' has a wrong offset!");
static_assert(offsetof(BP_BasicStatsPanel_C_Update_Reach_Bar, K2Node_DynamicCast_bSuccess) == 0x000008, "Member 'BP_BasicStatsPanel_C_Update_Reach_Bar::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_BasicStatsPanel_C_Update_Reach_Bar, CallFunc_Conv_FloatToString_ReturnValue) == 0x000010, "Member 'BP_BasicStatsPanel_C_Update_Reach_Bar::CallFunc_Conv_FloatToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BasicStatsPanel_C_Update_Reach_Bar, CallFunc_GetDefaultActor_ReturnValue) == 0x000020, "Member 'BP_BasicStatsPanel_C_Update_Reach_Bar::CallFunc_GetDefaultActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BasicStatsPanel_C_Update_Reach_Bar, CallFunc_Concat_StrStr_ReturnValue) == 0x000028, "Member 'BP_BasicStatsPanel_C_Update_Reach_Bar::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BasicStatsPanel_C_Update_Reach_Bar, K2Node_DynamicCast_AsMordhau_Projectile) == 0x000038, "Member 'BP_BasicStatsPanel_C_Update_Reach_Bar::K2Node_DynamicCast_AsMordhau_Projectile' has a wrong offset!");
static_assert(offsetof(BP_BasicStatsPanel_C_Update_Reach_Bar, K2Node_DynamicCast_bSuccess_1) == 0x000040, "Member 'BP_BasicStatsPanel_C_Update_Reach_Bar::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BP_BasicStatsPanel_C_Update_Reach_Bar, CallFunc_MapRangeUnclamped_ReturnValue) == 0x000044, "Member 'BP_BasicStatsPanel_C_Update_Reach_Bar::CallFunc_MapRangeUnclamped_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BasicStatsPanel_C_Update_Reach_Bar, CallFunc_GetMaxSpeed_ReturnValue) == 0x000048, "Member 'BP_BasicStatsPanel_C_Update_Reach_Bar::CallFunc_GetMaxSpeed_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BasicStatsPanel_C_Update_Reach_Bar, CallFunc_Add_FloatFloat_ReturnValue) == 0x00004C, "Member 'BP_BasicStatsPanel_C_Update_Reach_Bar::CallFunc_Add_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BasicStatsPanel_C_Update_Reach_Bar, K2Node_SwitchEnum_CmpSuccess) == 0x000050, "Member 'BP_BasicStatsPanel_C_Update_Reach_Bar::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(BP_BasicStatsPanel_C_Update_Reach_Bar, CallFunc_Divide_FloatFloat_ReturnValue) == 0x000054, "Member 'BP_BasicStatsPanel_C_Update_Reach_Bar::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BasicStatsPanel_C_Update_Reach_Bar, CallFunc_Divide_FloatFloat_ReturnValue_1) == 0x000058, "Member 'BP_BasicStatsPanel_C_Update_Reach_Bar::CallFunc_Divide_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_BasicStatsPanel_C_Update_Reach_Bar, CallFunc_MapRangeUnclamped_ReturnValue_1) == 0x00005C, "Member 'BP_BasicStatsPanel_C_Update_Reach_Bar::CallFunc_MapRangeUnclamped_ReturnValue_1' has a wrong offset!");

// Function BP_BasicStatsPanel.BP_BasicStatsPanel_C.Update Flavour Text
// 0x0128 (0x0128 - 0x0000)
struct BP_BasicStatsPanel_C_Update_Flavour_Text final
{
public:
	bool                                          Temp_bool_Variable;                                // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   Temp_text_Variable;                                // 0x0008(0x0018)()
	class FText                                   Temp_text_Variable_1;                              // 0x0020(0x0018)()
	bool                                          Temp_bool_Variable_1;                              // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_39[0x7];                                       // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   Temp_text_Variable_2;                              // 0x0040(0x0018)()
	class ABP_BearTrap_C*                         K2Node_DynamicCast_AsBP_Bear_Trap;                 // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_61[0x7];                                       // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_Shawm_C*                            K2Node_DynamicCast_AsBP_Shawm;                     // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_71[0x7];                                       // 0x0071(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_Lute_C*                             K2Node_DynamicCast_AsBP_Lute;                      // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_81[0x7];                                       // 0x0081(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_ToolBox_C*                          K2Node_DynamicCast_AsBP_Tool_Box;                  // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_3;                     // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_91[0x7];                                       // 0x0091(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_Medpack_C*                          K2Node_DynamicCast_AsBP_Medpack;                   // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_4;                     // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_A1[0x7];                                       // 0x00A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_PaviseShield_C*                     K2Node_DynamicCast_AsBP_Pavise_Shield;             // 0x00A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_5;                     // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_B1[0x7];                                       // 0x00B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_Bandage_C*                          K2Node_DynamicCast_AsBP_Bandage;                   // 0x00B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_6;                     // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_C1[0x7];                                       // 0x00C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_SmokeBomb_C*                        K2Node_DynamicCast_AsBP_Smoke_Bomb;                // 0x00C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_7;                     // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_D1[0x7];                                       // 0x00D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_FireBomb_C*                         K2Node_DynamicCast_AsBP_Fire_Bomb;                 // 0x00D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_8;                     // 0x00E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_E1[0x7];                                       // 0x00E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AMordhauShield*                         K2Node_DynamicCast_AsMordhau_Shield;               // 0x00E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_9;                     // 0x00F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x00F1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_F2[0x6];                                       // 0x00F2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_Select_Default;                             // 0x00F8(0x0018)()
	class FText                                   K2Node_Select_Default_1;                           // 0x0110(0x0018)()
};
static_assert(alignof(BP_BasicStatsPanel_C_Update_Flavour_Text) == 0x000008, "Wrong alignment on BP_BasicStatsPanel_C_Update_Flavour_Text");
static_assert(sizeof(BP_BasicStatsPanel_C_Update_Flavour_Text) == 0x000128, "Wrong size on BP_BasicStatsPanel_C_Update_Flavour_Text");
static_assert(offsetof(BP_BasicStatsPanel_C_Update_Flavour_Text, Temp_bool_Variable) == 0x000000, "Member 'BP_BasicStatsPanel_C_Update_Flavour_Text::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BP_BasicStatsPanel_C_Update_Flavour_Text, Temp_text_Variable) == 0x000008, "Member 'BP_BasicStatsPanel_C_Update_Flavour_Text::Temp_text_Variable' has a wrong offset!");
static_assert(offsetof(BP_BasicStatsPanel_C_Update_Flavour_Text, Temp_text_Variable_1) == 0x000020, "Member 'BP_BasicStatsPanel_C_Update_Flavour_Text::Temp_text_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_BasicStatsPanel_C_Update_Flavour_Text, Temp_bool_Variable_1) == 0x000038, "Member 'BP_BasicStatsPanel_C_Update_Flavour_Text::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_BasicStatsPanel_C_Update_Flavour_Text, Temp_text_Variable_2) == 0x000040, "Member 'BP_BasicStatsPanel_C_Update_Flavour_Text::Temp_text_Variable_2' has a wrong offset!");
static_assert(offsetof(BP_BasicStatsPanel_C_Update_Flavour_Text, K2Node_DynamicCast_AsBP_Bear_Trap) == 0x000058, "Member 'BP_BasicStatsPanel_C_Update_Flavour_Text::K2Node_DynamicCast_AsBP_Bear_Trap' has a wrong offset!");
static_assert(offsetof(BP_BasicStatsPanel_C_Update_Flavour_Text, K2Node_DynamicCast_bSuccess) == 0x000060, "Member 'BP_BasicStatsPanel_C_Update_Flavour_Text::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_BasicStatsPanel_C_Update_Flavour_Text, K2Node_DynamicCast_AsBP_Shawm) == 0x000068, "Member 'BP_BasicStatsPanel_C_Update_Flavour_Text::K2Node_DynamicCast_AsBP_Shawm' has a wrong offset!");
static_assert(offsetof(BP_BasicStatsPanel_C_Update_Flavour_Text, K2Node_DynamicCast_bSuccess_1) == 0x000070, "Member 'BP_BasicStatsPanel_C_Update_Flavour_Text::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BP_BasicStatsPanel_C_Update_Flavour_Text, K2Node_DynamicCast_AsBP_Lute) == 0x000078, "Member 'BP_BasicStatsPanel_C_Update_Flavour_Text::K2Node_DynamicCast_AsBP_Lute' has a wrong offset!");
static_assert(offsetof(BP_BasicStatsPanel_C_Update_Flavour_Text, K2Node_DynamicCast_bSuccess_2) == 0x000080, "Member 'BP_BasicStatsPanel_C_Update_Flavour_Text::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(BP_BasicStatsPanel_C_Update_Flavour_Text, K2Node_DynamicCast_AsBP_Tool_Box) == 0x000088, "Member 'BP_BasicStatsPanel_C_Update_Flavour_Text::K2Node_DynamicCast_AsBP_Tool_Box' has a wrong offset!");
static_assert(offsetof(BP_BasicStatsPanel_C_Update_Flavour_Text, K2Node_DynamicCast_bSuccess_3) == 0x000090, "Member 'BP_BasicStatsPanel_C_Update_Flavour_Text::K2Node_DynamicCast_bSuccess_3' has a wrong offset!");
static_assert(offsetof(BP_BasicStatsPanel_C_Update_Flavour_Text, K2Node_DynamicCast_AsBP_Medpack) == 0x000098, "Member 'BP_BasicStatsPanel_C_Update_Flavour_Text::K2Node_DynamicCast_AsBP_Medpack' has a wrong offset!");
static_assert(offsetof(BP_BasicStatsPanel_C_Update_Flavour_Text, K2Node_DynamicCast_bSuccess_4) == 0x0000A0, "Member 'BP_BasicStatsPanel_C_Update_Flavour_Text::K2Node_DynamicCast_bSuccess_4' has a wrong offset!");
static_assert(offsetof(BP_BasicStatsPanel_C_Update_Flavour_Text, K2Node_DynamicCast_AsBP_Pavise_Shield) == 0x0000A8, "Member 'BP_BasicStatsPanel_C_Update_Flavour_Text::K2Node_DynamicCast_AsBP_Pavise_Shield' has a wrong offset!");
static_assert(offsetof(BP_BasicStatsPanel_C_Update_Flavour_Text, K2Node_DynamicCast_bSuccess_5) == 0x0000B0, "Member 'BP_BasicStatsPanel_C_Update_Flavour_Text::K2Node_DynamicCast_bSuccess_5' has a wrong offset!");
static_assert(offsetof(BP_BasicStatsPanel_C_Update_Flavour_Text, K2Node_DynamicCast_AsBP_Bandage) == 0x0000B8, "Member 'BP_BasicStatsPanel_C_Update_Flavour_Text::K2Node_DynamicCast_AsBP_Bandage' has a wrong offset!");
static_assert(offsetof(BP_BasicStatsPanel_C_Update_Flavour_Text, K2Node_DynamicCast_bSuccess_6) == 0x0000C0, "Member 'BP_BasicStatsPanel_C_Update_Flavour_Text::K2Node_DynamicCast_bSuccess_6' has a wrong offset!");
static_assert(offsetof(BP_BasicStatsPanel_C_Update_Flavour_Text, K2Node_DynamicCast_AsBP_Smoke_Bomb) == 0x0000C8, "Member 'BP_BasicStatsPanel_C_Update_Flavour_Text::K2Node_DynamicCast_AsBP_Smoke_Bomb' has a wrong offset!");
static_assert(offsetof(BP_BasicStatsPanel_C_Update_Flavour_Text, K2Node_DynamicCast_bSuccess_7) == 0x0000D0, "Member 'BP_BasicStatsPanel_C_Update_Flavour_Text::K2Node_DynamicCast_bSuccess_7' has a wrong offset!");
static_assert(offsetof(BP_BasicStatsPanel_C_Update_Flavour_Text, K2Node_DynamicCast_AsBP_Fire_Bomb) == 0x0000D8, "Member 'BP_BasicStatsPanel_C_Update_Flavour_Text::K2Node_DynamicCast_AsBP_Fire_Bomb' has a wrong offset!");
static_assert(offsetof(BP_BasicStatsPanel_C_Update_Flavour_Text, K2Node_DynamicCast_bSuccess_8) == 0x0000E0, "Member 'BP_BasicStatsPanel_C_Update_Flavour_Text::K2Node_DynamicCast_bSuccess_8' has a wrong offset!");
static_assert(offsetof(BP_BasicStatsPanel_C_Update_Flavour_Text, K2Node_DynamicCast_AsMordhau_Shield) == 0x0000E8, "Member 'BP_BasicStatsPanel_C_Update_Flavour_Text::K2Node_DynamicCast_AsMordhau_Shield' has a wrong offset!");
static_assert(offsetof(BP_BasicStatsPanel_C_Update_Flavour_Text, K2Node_DynamicCast_bSuccess_9) == 0x0000F0, "Member 'BP_BasicStatsPanel_C_Update_Flavour_Text::K2Node_DynamicCast_bSuccess_9' has a wrong offset!");
static_assert(offsetof(BP_BasicStatsPanel_C_Update_Flavour_Text, K2Node_SwitchEnum_CmpSuccess) == 0x0000F1, "Member 'BP_BasicStatsPanel_C_Update_Flavour_Text::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(BP_BasicStatsPanel_C_Update_Flavour_Text, K2Node_Select_Default) == 0x0000F8, "Member 'BP_BasicStatsPanel_C_Update_Flavour_Text::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(BP_BasicStatsPanel_C_Update_Flavour_Text, K2Node_Select_Default_1) == 0x000110, "Member 'BP_BasicStatsPanel_C_Update_Flavour_Text::K2Node_Select_Default_1' has a wrong offset!");

}

