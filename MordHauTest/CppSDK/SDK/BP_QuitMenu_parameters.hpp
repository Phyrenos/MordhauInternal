﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_QuitMenu

#include "Basic.hpp"

#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function BP_QuitMenu.BP_QuitMenu_C.ExecuteUbergraph_BP_QuitMenu
// 0x0058 (0x0058 - 0x0000)
struct BP_QuitMenu_C_ExecuteUbergraph_BP_QuitMenu final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AMordhauHUD*                            CallFunc_GetMordhauHUD_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_MordhauHUD_C*                       K2Node_DynamicCast_AsBP_Mordhau_HUD;               // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AMordhauHUD*                            CallFunc_GetMordhauHUD_ReturnValue_1;              // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_MainMenu_C*                         K2Node_DynamicCast_AsBP_Main_Menu;                 // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_31[0x7];                                       // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_MordhauHUD_C*                       K2Node_DynamicCast_AsBP_Mordhau_HUD_1;             // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_41[0x7];                                       // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_MainMenu_C*                         K2Node_DynamicCast_AsBP_Main_Menu_1;               // 0x0048(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_3;                     // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_QuitMenu_C_ExecuteUbergraph_BP_QuitMenu) == 0x000008, "Wrong alignment on BP_QuitMenu_C_ExecuteUbergraph_BP_QuitMenu");
static_assert(sizeof(BP_QuitMenu_C_ExecuteUbergraph_BP_QuitMenu) == 0x000058, "Wrong size on BP_QuitMenu_C_ExecuteUbergraph_BP_QuitMenu");
static_assert(offsetof(BP_QuitMenu_C_ExecuteUbergraph_BP_QuitMenu, EntryPoint) == 0x000000, "Member 'BP_QuitMenu_C_ExecuteUbergraph_BP_QuitMenu::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_QuitMenu_C_ExecuteUbergraph_BP_QuitMenu, CallFunc_GetMordhauHUD_ReturnValue) == 0x000008, "Member 'BP_QuitMenu_C_ExecuteUbergraph_BP_QuitMenu::CallFunc_GetMordhauHUD_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_QuitMenu_C_ExecuteUbergraph_BP_QuitMenu, K2Node_DynamicCast_AsBP_Mordhau_HUD) == 0x000010, "Member 'BP_QuitMenu_C_ExecuteUbergraph_BP_QuitMenu::K2Node_DynamicCast_AsBP_Mordhau_HUD' has a wrong offset!");
static_assert(offsetof(BP_QuitMenu_C_ExecuteUbergraph_BP_QuitMenu, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'BP_QuitMenu_C_ExecuteUbergraph_BP_QuitMenu::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_QuitMenu_C_ExecuteUbergraph_BP_QuitMenu, CallFunc_GetMordhauHUD_ReturnValue_1) == 0x000020, "Member 'BP_QuitMenu_C_ExecuteUbergraph_BP_QuitMenu::CallFunc_GetMordhauHUD_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_QuitMenu_C_ExecuteUbergraph_BP_QuitMenu, K2Node_DynamicCast_AsBP_Main_Menu) == 0x000028, "Member 'BP_QuitMenu_C_ExecuteUbergraph_BP_QuitMenu::K2Node_DynamicCast_AsBP_Main_Menu' has a wrong offset!");
static_assert(offsetof(BP_QuitMenu_C_ExecuteUbergraph_BP_QuitMenu, K2Node_DynamicCast_bSuccess_1) == 0x000030, "Member 'BP_QuitMenu_C_ExecuteUbergraph_BP_QuitMenu::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BP_QuitMenu_C_ExecuteUbergraph_BP_QuitMenu, K2Node_DynamicCast_AsBP_Mordhau_HUD_1) == 0x000038, "Member 'BP_QuitMenu_C_ExecuteUbergraph_BP_QuitMenu::K2Node_DynamicCast_AsBP_Mordhau_HUD_1' has a wrong offset!");
static_assert(offsetof(BP_QuitMenu_C_ExecuteUbergraph_BP_QuitMenu, K2Node_DynamicCast_bSuccess_2) == 0x000040, "Member 'BP_QuitMenu_C_ExecuteUbergraph_BP_QuitMenu::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(BP_QuitMenu_C_ExecuteUbergraph_BP_QuitMenu, K2Node_DynamicCast_AsBP_Main_Menu_1) == 0x000048, "Member 'BP_QuitMenu_C_ExecuteUbergraph_BP_QuitMenu::K2Node_DynamicCast_AsBP_Main_Menu_1' has a wrong offset!");
static_assert(offsetof(BP_QuitMenu_C_ExecuteUbergraph_BP_QuitMenu, K2Node_DynamicCast_bSuccess_3) == 0x000050, "Member 'BP_QuitMenu_C_ExecuteUbergraph_BP_QuitMenu::K2Node_DynamicCast_bSuccess_3' has a wrong offset!");

// Function BP_QuitMenu.BP_QuitMenu_C.GetVisibility_0
// 0x0020 (0x0020 - 0x0000)
struct BP_QuitMenu_C_GetVisibility_0 final
{
public:
	ESlateVisibility                              ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetMapName_ReturnValue;                   // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_QuitMenu_C_GetVisibility_0) == 0x000008, "Wrong alignment on BP_QuitMenu_C_GetVisibility_0");
static_assert(sizeof(BP_QuitMenu_C_GetVisibility_0) == 0x000020, "Wrong size on BP_QuitMenu_C_GetVisibility_0");
static_assert(offsetof(BP_QuitMenu_C_GetVisibility_0, ReturnValue) == 0x000000, "Member 'BP_QuitMenu_C_GetVisibility_0::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_QuitMenu_C_GetVisibility_0, CallFunc_GetMapName_ReturnValue) == 0x000008, "Member 'BP_QuitMenu_C_GetVisibility_0::CallFunc_GetMapName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_QuitMenu_C_GetVisibility_0, CallFunc_EqualEqual_StrStr_ReturnValue) == 0x000018, "Member 'BP_QuitMenu_C_GetVisibility_0::CallFunc_EqualEqual_StrStr_ReturnValue' has a wrong offset!");

}

