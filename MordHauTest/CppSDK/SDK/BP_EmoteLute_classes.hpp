﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_EmoteLute

#include "Basic.hpp"

#include "Mordhau_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_EmoteLute.BP_EmoteLute_C
// 0x0000 (0x0130 - 0x0130)
class UBP_EmoteLute_C final : public UEmoteMotion
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_EmoteLute_C">();
	}
	static class UBP_EmoteLute_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_EmoteLute_C>();
	}
};
static_assert(alignof(UBP_EmoteLute_C) == 0x000008, "Wrong alignment on UBP_EmoteLute_C");
static_assert(sizeof(UBP_EmoteLute_C) == 0x000130, "Wrong size on UBP_EmoteLute_C");

}

