﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ThrowingKnife_DIH

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_ThrowingKnife_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_ThrowingKnife_DIH.BP_ThrowingKnife_DIH_C
// 0x0010 (0x0D50 - 0x0D40)
class ABP_ThrowingKnife_DIH_C final : public ABP_ThrowingKnife_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_ThrowingKnife_DIH_C;             // 0x0D40(0x0008)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)

public:
	void ExecuteUbergraph_BP_ThrowingKnife_DIH(int32 EntryPoint);
	void SetupBlessingStats();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ThrowingKnife_DIH_C">();
	}
	static class ABP_ThrowingKnife_DIH_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_ThrowingKnife_DIH_C>();
	}
};
static_assert(alignof(ABP_ThrowingKnife_DIH_C) == 0x000010, "Wrong alignment on ABP_ThrowingKnife_DIH_C");
static_assert(sizeof(ABP_ThrowingKnife_DIH_C) == 0x000D50, "Wrong size on ABP_ThrowingKnife_DIH_C");
static_assert(offsetof(ABP_ThrowingKnife_DIH_C, UberGraphFrame_BP_ThrowingKnife_DIH_C) == 0x000D40, "Member 'ABP_ThrowingKnife_DIH_C::UberGraphFrame_BP_ThrowingKnife_DIH_C' has a wrong offset!");

}

