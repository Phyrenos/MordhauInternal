﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_MordhauCameraManager

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Mordhau_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_MordhauCameraManager.BP_MordhauCameraManager_C
// 0x0010 (0x2E30 - 0x2E20)
class ABP_MordhauCameraManager_C final : public AMordhauCameraManager
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x2E20(0x0008)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)

public:
	void ExecuteUbergraph_BP_MordhauCameraManager(int32 EntryPoint);
	void OnHitFlash(bool bIsDirectional, class AActor* Source);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_MordhauCameraManager_C">();
	}
	static class ABP_MordhauCameraManager_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_MordhauCameraManager_C>();
	}
};
static_assert(alignof(ABP_MordhauCameraManager_C) == 0x000010, "Wrong alignment on ABP_MordhauCameraManager_C");
static_assert(sizeof(ABP_MordhauCameraManager_C) == 0x002E30, "Wrong size on ABP_MordhauCameraManager_C");
static_assert(offsetof(ABP_MordhauCameraManager_C, UberGraphFrame) == 0x002E20, "Member 'ABP_MordhauCameraManager_C::UberGraphFrame' has a wrong offset!");

}

