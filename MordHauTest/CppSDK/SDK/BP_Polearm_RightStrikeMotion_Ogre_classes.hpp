﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Polearm_RightStrikeMotion_Ogre

#include "Basic.hpp"

#include "BP_Polearm_RightStrikeMotion_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Polearm_RightStrikeMotion_Ogre.BP_Polearm_RightStrikeMotion_Ogre_C
// 0x0008 (0x1178 - 0x1170)
class UBP_Polearm_RightStrikeMotion_Ogre_C final : public UBP_Polearm_RightStrikeMotion_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x1170(0x0008)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)

public:
	void ExecuteUbergraph_BP_Polearm_RightStrikeMotion_Ogre(int32 EntryPoint);
	void OnBegin();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Polearm_RightStrikeMotion_Ogre_C">();
	}
	static class UBP_Polearm_RightStrikeMotion_Ogre_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_Polearm_RightStrikeMotion_Ogre_C>();
	}
};
static_assert(alignof(UBP_Polearm_RightStrikeMotion_Ogre_C) == 0x000008, "Wrong alignment on UBP_Polearm_RightStrikeMotion_Ogre_C");
static_assert(sizeof(UBP_Polearm_RightStrikeMotion_Ogre_C) == 0x001178, "Wrong size on UBP_Polearm_RightStrikeMotion_Ogre_C");
static_assert(offsetof(UBP_Polearm_RightStrikeMotion_Ogre_C, UberGraphFrame) == 0x001170, "Member 'UBP_Polearm_RightStrikeMotion_Ogre_C::UberGraphFrame' has a wrong offset!");

}

