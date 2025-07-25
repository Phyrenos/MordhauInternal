﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PurchasableWidget

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function BP_PurchasableWidget.BP_PurchasableWidget_C.GetText_0
// 0x00A0 (0x00A0 - 0x0000)
struct BP_PurchasableWidget_C_GetText_0 final
{
public:
	class FText                                   ReturnValue;                                       // 0x0000(0x0018)(Parm, OutParm, ReturnParm)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_HordePlayerController_C*            K2Node_DynamicCast_AsBP_Horde_Player_Controller;   // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_HordePurchasable_C*                 K2Node_DynamicCast_AsBP_Horde_Purchasable;         // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_41[0x7];                                       // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_HordeChestBase_C*                   K2Node_DynamicCast_AsBP_Horde_Chest_Base;          // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_51[0x7];                                       // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 CallFunc_GetObjectClass_ReturnValue;               // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetDiscountedPrice_DiscountedPrice;       // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_64[0x4];                                       // 0x0064(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0068(0x0018)()
	int32                                         CallFunc_GetDiscountedPrice_DiscountedPrice_1;     // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_84[0x4];                                       // 0x0084(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_1;             // 0x0088(0x0018)()
};
static_assert(alignof(BP_PurchasableWidget_C_GetText_0) == 0x000008, "Wrong alignment on BP_PurchasableWidget_C_GetText_0");
static_assert(sizeof(BP_PurchasableWidget_C_GetText_0) == 0x0000A0, "Wrong size on BP_PurchasableWidget_C_GetText_0");
static_assert(offsetof(BP_PurchasableWidget_C_GetText_0, ReturnValue) == 0x000000, "Member 'BP_PurchasableWidget_C_GetText_0::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PurchasableWidget_C_GetText_0, CallFunc_GetPlayerController_ReturnValue) == 0x000018, "Member 'BP_PurchasableWidget_C_GetText_0::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PurchasableWidget_C_GetText_0, K2Node_DynamicCast_AsBP_Horde_Player_Controller) == 0x000020, "Member 'BP_PurchasableWidget_C_GetText_0::K2Node_DynamicCast_AsBP_Horde_Player_Controller' has a wrong offset!");
static_assert(offsetof(BP_PurchasableWidget_C_GetText_0, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'BP_PurchasableWidget_C_GetText_0::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_PurchasableWidget_C_GetText_0, CallFunc_GetOwner_ReturnValue) == 0x000030, "Member 'BP_PurchasableWidget_C_GetText_0::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PurchasableWidget_C_GetText_0, K2Node_DynamicCast_AsBP_Horde_Purchasable) == 0x000038, "Member 'BP_PurchasableWidget_C_GetText_0::K2Node_DynamicCast_AsBP_Horde_Purchasable' has a wrong offset!");
static_assert(offsetof(BP_PurchasableWidget_C_GetText_0, K2Node_DynamicCast_bSuccess_1) == 0x000040, "Member 'BP_PurchasableWidget_C_GetText_0::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BP_PurchasableWidget_C_GetText_0, K2Node_DynamicCast_AsBP_Horde_Chest_Base) == 0x000048, "Member 'BP_PurchasableWidget_C_GetText_0::K2Node_DynamicCast_AsBP_Horde_Chest_Base' has a wrong offset!");
static_assert(offsetof(BP_PurchasableWidget_C_GetText_0, K2Node_DynamicCast_bSuccess_2) == 0x000050, "Member 'BP_PurchasableWidget_C_GetText_0::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(BP_PurchasableWidget_C_GetText_0, CallFunc_GetObjectClass_ReturnValue) == 0x000058, "Member 'BP_PurchasableWidget_C_GetText_0::CallFunc_GetObjectClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PurchasableWidget_C_GetText_0, CallFunc_GetDiscountedPrice_DiscountedPrice) == 0x000060, "Member 'BP_PurchasableWidget_C_GetText_0::CallFunc_GetDiscountedPrice_DiscountedPrice' has a wrong offset!");
static_assert(offsetof(BP_PurchasableWidget_C_GetText_0, CallFunc_Conv_IntToText_ReturnValue) == 0x000068, "Member 'BP_PurchasableWidget_C_GetText_0::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PurchasableWidget_C_GetText_0, CallFunc_GetDiscountedPrice_DiscountedPrice_1) == 0x000080, "Member 'BP_PurchasableWidget_C_GetText_0::CallFunc_GetDiscountedPrice_DiscountedPrice_1' has a wrong offset!");
static_assert(offsetof(BP_PurchasableWidget_C_GetText_0, CallFunc_Conv_IntToText_ReturnValue_1) == 0x000088, "Member 'BP_PurchasableWidget_C_GetText_0::CallFunc_Conv_IntToText_ReturnValue_1' has a wrong offset!");

// Function BP_PurchasableWidget.BP_PurchasableWidget_C.GetColorAndOpacity_0
// 0x00A0 (0x00A0 - 0x0000)
struct BP_PurchasableWidget_C_GetColorAndOpacity_0 final
{
public:
	struct FSlateColor                            ReturnValue;                                       // 0x0000(0x0028)(Parm, OutParm, ReturnParm)
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0028(0x0028)(UObjectWrapper)
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x0050(0x0028)()
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_HordePurchasable_C*                 K2Node_DynamicCast_AsBP_Horde_Purchasable;         // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_89[0x7];                                       // 0x0089(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_HordeChestBase_C*                   K2Node_DynamicCast_AsBP_Horde_Chest_Base;          // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0099(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_PurchasableWidget_C_GetColorAndOpacity_0) == 0x000008, "Wrong alignment on BP_PurchasableWidget_C_GetColorAndOpacity_0");
static_assert(sizeof(BP_PurchasableWidget_C_GetColorAndOpacity_0) == 0x0000A0, "Wrong size on BP_PurchasableWidget_C_GetColorAndOpacity_0");
static_assert(offsetof(BP_PurchasableWidget_C_GetColorAndOpacity_0, ReturnValue) == 0x000000, "Member 'BP_PurchasableWidget_C_GetColorAndOpacity_0::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PurchasableWidget_C_GetColorAndOpacity_0, K2Node_MakeStruct_SlateColor) == 0x000028, "Member 'BP_PurchasableWidget_C_GetColorAndOpacity_0::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(BP_PurchasableWidget_C_GetColorAndOpacity_0, K2Node_MakeStruct_SlateColor_1) == 0x000050, "Member 'BP_PurchasableWidget_C_GetColorAndOpacity_0::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");
static_assert(offsetof(BP_PurchasableWidget_C_GetColorAndOpacity_0, CallFunc_GetOwner_ReturnValue) == 0x000078, "Member 'BP_PurchasableWidget_C_GetColorAndOpacity_0::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PurchasableWidget_C_GetColorAndOpacity_0, K2Node_DynamicCast_AsBP_Horde_Purchasable) == 0x000080, "Member 'BP_PurchasableWidget_C_GetColorAndOpacity_0::K2Node_DynamicCast_AsBP_Horde_Purchasable' has a wrong offset!");
static_assert(offsetof(BP_PurchasableWidget_C_GetColorAndOpacity_0, K2Node_DynamicCast_bSuccess) == 0x000088, "Member 'BP_PurchasableWidget_C_GetColorAndOpacity_0::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_PurchasableWidget_C_GetColorAndOpacity_0, K2Node_DynamicCast_AsBP_Horde_Chest_Base) == 0x000090, "Member 'BP_PurchasableWidget_C_GetColorAndOpacity_0::K2Node_DynamicCast_AsBP_Horde_Chest_Base' has a wrong offset!");
static_assert(offsetof(BP_PurchasableWidget_C_GetColorAndOpacity_0, K2Node_DynamicCast_bSuccess_1) == 0x000098, "Member 'BP_PurchasableWidget_C_GetColorAndOpacity_0::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BP_PurchasableWidget_C_GetColorAndOpacity_0, CallFunc_BooleanAND_ReturnValue) == 0x000099, "Member 'BP_PurchasableWidget_C_GetColorAndOpacity_0::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

// Function BP_PurchasableWidget.BP_PurchasableWidget_C.GetVisibility_0
// 0x0020 (0x0020 - 0x0000)
struct BP_PurchasableWidget_C_GetVisibility_0 final
{
public:
	ESlateVisibility                              ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_HordePurchasable_C*                 K2Node_DynamicCast_AsBP_Horde_Purchasable;         // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_PurchasableWidget_C_GetVisibility_0) == 0x000008, "Wrong alignment on BP_PurchasableWidget_C_GetVisibility_0");
static_assert(sizeof(BP_PurchasableWidget_C_GetVisibility_0) == 0x000020, "Wrong size on BP_PurchasableWidget_C_GetVisibility_0");
static_assert(offsetof(BP_PurchasableWidget_C_GetVisibility_0, ReturnValue) == 0x000000, "Member 'BP_PurchasableWidget_C_GetVisibility_0::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PurchasableWidget_C_GetVisibility_0, CallFunc_GetOwner_ReturnValue) == 0x000008, "Member 'BP_PurchasableWidget_C_GetVisibility_0::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PurchasableWidget_C_GetVisibility_0, K2Node_DynamicCast_AsBP_Horde_Purchasable) == 0x000010, "Member 'BP_PurchasableWidget_C_GetVisibility_0::K2Node_DynamicCast_AsBP_Horde_Purchasable' has a wrong offset!");
static_assert(offsetof(BP_PurchasableWidget_C_GetVisibility_0, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'BP_PurchasableWidget_C_GetVisibility_0::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function BP_PurchasableWidget.BP_PurchasableWidget_C.GetVisibility_1
// 0x0030 (0x0030 - 0x0000)
struct BP_PurchasableWidget_C_GetVisibility_1 final
{
public:
	ESlateVisibility                              ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_HordePurchasable_C*                 K2Node_DynamicCast_AsBP_Horde_Purchasable;         // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_HordeChestBase_C*                   K2Node_DynamicCast_AsBP_Horde_Chest_Base;          // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_PurchasableWidget_C_GetVisibility_1) == 0x000008, "Wrong alignment on BP_PurchasableWidget_C_GetVisibility_1");
static_assert(sizeof(BP_PurchasableWidget_C_GetVisibility_1) == 0x000030, "Wrong size on BP_PurchasableWidget_C_GetVisibility_1");
static_assert(offsetof(BP_PurchasableWidget_C_GetVisibility_1, ReturnValue) == 0x000000, "Member 'BP_PurchasableWidget_C_GetVisibility_1::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PurchasableWidget_C_GetVisibility_1, CallFunc_GetOwner_ReturnValue) == 0x000008, "Member 'BP_PurchasableWidget_C_GetVisibility_1::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PurchasableWidget_C_GetVisibility_1, K2Node_DynamicCast_AsBP_Horde_Purchasable) == 0x000010, "Member 'BP_PurchasableWidget_C_GetVisibility_1::K2Node_DynamicCast_AsBP_Horde_Purchasable' has a wrong offset!");
static_assert(offsetof(BP_PurchasableWidget_C_GetVisibility_1, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'BP_PurchasableWidget_C_GetVisibility_1::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_PurchasableWidget_C_GetVisibility_1, K2Node_DynamicCast_AsBP_Horde_Chest_Base) == 0x000020, "Member 'BP_PurchasableWidget_C_GetVisibility_1::K2Node_DynamicCast_AsBP_Horde_Chest_Base' has a wrong offset!");
static_assert(offsetof(BP_PurchasableWidget_C_GetVisibility_1, K2Node_DynamicCast_bSuccess_1) == 0x000028, "Member 'BP_PurchasableWidget_C_GetVisibility_1::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BP_PurchasableWidget_C_GetVisibility_1, CallFunc_BooleanAND_ReturnValue) == 0x000029, "Member 'BP_PurchasableWidget_C_GetVisibility_1::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

// Function BP_PurchasableWidget.BP_PurchasableWidget_C.GetText_1
// 0x0040 (0x0040 - 0x0000)
struct BP_PurchasableWidget_C_GetText_1 final
{
public:
	class FText                                   ReturnValue;                                       // 0x0000(0x0018)(Parm, OutParm, ReturnParm)
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_HordePurchasable_C*                 K2Node_DynamicCast_AsBP_Horde_Purchasable;         // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_HordeChestBase_C*                   K2Node_DynamicCast_AsBP_Horde_Chest_Base;          // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_PurchasableWidget_C_GetText_1) == 0x000008, "Wrong alignment on BP_PurchasableWidget_C_GetText_1");
static_assert(sizeof(BP_PurchasableWidget_C_GetText_1) == 0x000040, "Wrong size on BP_PurchasableWidget_C_GetText_1");
static_assert(offsetof(BP_PurchasableWidget_C_GetText_1, ReturnValue) == 0x000000, "Member 'BP_PurchasableWidget_C_GetText_1::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PurchasableWidget_C_GetText_1, CallFunc_GetOwner_ReturnValue) == 0x000018, "Member 'BP_PurchasableWidget_C_GetText_1::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PurchasableWidget_C_GetText_1, K2Node_DynamicCast_AsBP_Horde_Purchasable) == 0x000020, "Member 'BP_PurchasableWidget_C_GetText_1::K2Node_DynamicCast_AsBP_Horde_Purchasable' has a wrong offset!");
static_assert(offsetof(BP_PurchasableWidget_C_GetText_1, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'BP_PurchasableWidget_C_GetText_1::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_PurchasableWidget_C_GetText_1, K2Node_DynamicCast_AsBP_Horde_Chest_Base) == 0x000030, "Member 'BP_PurchasableWidget_C_GetText_1::K2Node_DynamicCast_AsBP_Horde_Chest_Base' has a wrong offset!");
static_assert(offsetof(BP_PurchasableWidget_C_GetText_1, K2Node_DynamicCast_bSuccess_1) == 0x000038, "Member 'BP_PurchasableWidget_C_GetText_1::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");

}

