﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BOT_ArcherCrossbow

#include "Basic.hpp"

#include "BP_BotProfile_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BOT_ArcherCrossbow.BOT_ArcherCrossbow_C
// 0x0000 (0x0108 - 0x0108)
class UBOT_ArcherCrossbow_C final : public UBP_BotProfile_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BOT_ArcherCrossbow_C">();
	}
	static class UBOT_ArcherCrossbow_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBOT_ArcherCrossbow_C>();
	}
};
static_assert(alignof(UBOT_ArcherCrossbow_C) == 0x000008, "Wrong alignment on UBOT_ArcherCrossbow_C");
static_assert(sizeof(UBOT_ArcherCrossbow_C) == 0x000108, "Wrong size on UBOT_ArcherCrossbow_C");

}

