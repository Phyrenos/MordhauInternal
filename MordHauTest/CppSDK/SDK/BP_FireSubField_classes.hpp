﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_FireSubField

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_SubField_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_FireSubField.BP_FireSubField_C
// 0x0018 (0x0270 - 0x0258)
class ABP_FireSubField_C final : public ABP_SubField_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_FireSubField_C;                  // 0x0258(0x0008)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UDecalComponent*                        Decal;                                             // 0x0260(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                          FadedOutDecal;                                     // 0x0268(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_BP_FireSubField(int32 EntryPoint);
	void ReceiveBeginPlay();
	void DeactivateSubField();
	void BeginSubFieldDeactivation();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_FireSubField_C">();
	}
	static class ABP_FireSubField_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_FireSubField_C>();
	}
};
static_assert(alignof(ABP_FireSubField_C) == 0x000008, "Wrong alignment on ABP_FireSubField_C");
static_assert(sizeof(ABP_FireSubField_C) == 0x000270, "Wrong size on ABP_FireSubField_C");
static_assert(offsetof(ABP_FireSubField_C, UberGraphFrame_BP_FireSubField_C) == 0x000258, "Member 'ABP_FireSubField_C::UberGraphFrame_BP_FireSubField_C' has a wrong offset!");
static_assert(offsetof(ABP_FireSubField_C, Decal) == 0x000260, "Member 'ABP_FireSubField_C::Decal' has a wrong offset!");
static_assert(offsetof(ABP_FireSubField_C, FadedOutDecal) == 0x000268, "Member 'ABP_FireSubField_C::FadedOutDecal' has a wrong offset!");

}

