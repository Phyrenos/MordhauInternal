﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_MordhauSingleton

#include "Basic.hpp"

#include "InputCore_structs.hpp"
#include "MordhauOnlineSubsystem_structs.hpp"
#include "Mordhau_classes.hpp"
#include "E_ChatMuteTypes_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_MordhauSingleton.BP_MordhauSingleton_C
// 0x0140 (0x0A50 - 0x0910)
class UBP_MordhauSingleton_C final : public UMordhauSingleton
{
public:
	TMap<struct FKey, class UTexture2D*>          PC_Xbox_ButtonPromptImageMap;                      // 0x0910(0x0050)(Edit, BlueprintVisible)
	TMap<struct FPlayFabPlayer, E_ChatMuteTypes>  ChatMutedPlayers;                                  // 0x0960(0x0050)(Edit, BlueprintVisible)
	TMap<struct FKey, class UTexture2D*>          PS4_ButtonPromptImageMap;                          // 0x09B0(0x0050)(Edit, BlueprintVisible)
	TMap<struct FKey, class UTexture2D*>          PS5_ButtonPromptImageMap;                          // 0x0A00(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_MordhauSingleton_C">();
	}
	static class UBP_MordhauSingleton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_MordhauSingleton_C>();
	}
};
static_assert(alignof(UBP_MordhauSingleton_C) == 0x000008, "Wrong alignment on UBP_MordhauSingleton_C");
static_assert(sizeof(UBP_MordhauSingleton_C) == 0x000A50, "Wrong size on UBP_MordhauSingleton_C");
static_assert(offsetof(UBP_MordhauSingleton_C, PC_Xbox_ButtonPromptImageMap) == 0x000910, "Member 'UBP_MordhauSingleton_C::PC_Xbox_ButtonPromptImageMap' has a wrong offset!");
static_assert(offsetof(UBP_MordhauSingleton_C, ChatMutedPlayers) == 0x000960, "Member 'UBP_MordhauSingleton_C::ChatMutedPlayers' has a wrong offset!");
static_assert(offsetof(UBP_MordhauSingleton_C, PS4_ButtonPromptImageMap) == 0x0009B0, "Member 'UBP_MordhauSingleton_C::PS4_ButtonPromptImageMap' has a wrong offset!");
static_assert(offsetof(UBP_MordhauSingleton_C, PS5_ButtonPromptImageMap) == 0x000A00, "Member 'UBP_MordhauSingleton_C::PS5_ButtonPromptImageMap' has a wrong offset!");

}

