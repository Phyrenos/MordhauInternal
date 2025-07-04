﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_DemonHordeStage

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_DemonHordeStage.W_DemonHordeStage_C
// 0x0008 (0x0268 - 0x0260)
class UW_DemonHordeStage_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)

public:
	void ExecuteUbergraph_W_DemonHordeStage(int32 EntryPoint);
	void StageFinished();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_DemonHordeStage_C">();
	}
	static class UW_DemonHordeStage_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_DemonHordeStage_C>();
	}
};
static_assert(alignof(UW_DemonHordeStage_C) == 0x000008, "Wrong alignment on UW_DemonHordeStage_C");
static_assert(sizeof(UW_DemonHordeStage_C) == 0x000268, "Wrong size on UW_DemonHordeStage_C");
static_assert(offsetof(UW_DemonHordeStage_C, UberGraphFrame) == 0x000260, "Member 'UW_DemonHordeStage_C::UberGraphFrame' has a wrong offset!");

}

