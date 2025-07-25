﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_2HThrowableTurd_DIH

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_2HThrowableRock_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_2HThrowableTurd_DIH.BP_2HThrowableTurd_DIH_C
// 0x0010 (0x0D40 - 0x0D30)
class ABP_2HThrowableTurd_DIH_C final : public ABP_2HThrowableRock_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0D30(0x0008)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)

public:
	void ExecuteUbergraph_BP_2HThrowableTurd_DIH(int32 EntryPoint);
	void SetupBlessingStats();
	void FireProjectile(const struct FVector& Origin, const struct FRotator& Orientation, class AController* OwningController, float ExpectedDelay);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_2HThrowableTurd_DIH_C">();
	}
	static class ABP_2HThrowableTurd_DIH_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_2HThrowableTurd_DIH_C>();
	}
};
static_assert(alignof(ABP_2HThrowableTurd_DIH_C) == 0x000010, "Wrong alignment on ABP_2HThrowableTurd_DIH_C");
static_assert(sizeof(ABP_2HThrowableTurd_DIH_C) == 0x000D40, "Wrong size on ABP_2HThrowableTurd_DIH_C");
static_assert(offsetof(ABP_2HThrowableTurd_DIH_C, UberGraphFrame) == 0x000D30, "Member 'ABP_2HThrowableTurd_DIH_C::UberGraphFrame' has a wrong offset!");

}

