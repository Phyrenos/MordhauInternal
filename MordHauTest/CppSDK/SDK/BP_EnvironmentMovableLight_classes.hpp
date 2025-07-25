﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_EnvironmentMovableLight

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_EnvironmentMovableLight.BP_EnvironmentMovableLight_C
// 0x00C0 (0x02E0 - 0x0220)
class ABP_EnvironmentMovableLight_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0220(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USpotLightComponent*                    SpotLight;                                         // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        SwayHolder;                                        // 0x0230(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0238(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         Pitch_Frequency;                                   // 0x0240(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Pitch_Magnitude;                                   // 0x0244(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Jaw_Frequency;                                     // 0x0248(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Jaw_Magnitude;                                     // 0x024C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Roll_Frequency;                                    // 0x0250(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Roll_Magnitude;                                    // 0x0254(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Pitch_Speed;                                       // 0x0258(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Jaw_Speed;                                         // 0x025C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Roll_Speed;                                        // 0x0260(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_264[0xC];                                      // 0x0264(0x000C)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             Transform;                                         // 0x0270(0x0030)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor)
	float                                         Transform_Frequency;                               // 0x02A0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2A4[0xC];                                      // 0x02A4(0x000C)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             Original_Transform;                                // 0x02B0(0x0030)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_BP_EnvironmentMovableLight(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_EnvironmentMovableLight_C">();
	}
	static class ABP_EnvironmentMovableLight_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_EnvironmentMovableLight_C>();
	}
};
static_assert(alignof(ABP_EnvironmentMovableLight_C) == 0x000010, "Wrong alignment on ABP_EnvironmentMovableLight_C");
static_assert(sizeof(ABP_EnvironmentMovableLight_C) == 0x0002E0, "Wrong size on ABP_EnvironmentMovableLight_C");
static_assert(offsetof(ABP_EnvironmentMovableLight_C, UberGraphFrame) == 0x000220, "Member 'ABP_EnvironmentMovableLight_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_EnvironmentMovableLight_C, SpotLight) == 0x000228, "Member 'ABP_EnvironmentMovableLight_C::SpotLight' has a wrong offset!");
static_assert(offsetof(ABP_EnvironmentMovableLight_C, SwayHolder) == 0x000230, "Member 'ABP_EnvironmentMovableLight_C::SwayHolder' has a wrong offset!");
static_assert(offsetof(ABP_EnvironmentMovableLight_C, DefaultSceneRoot) == 0x000238, "Member 'ABP_EnvironmentMovableLight_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_EnvironmentMovableLight_C, Pitch_Frequency) == 0x000240, "Member 'ABP_EnvironmentMovableLight_C::Pitch_Frequency' has a wrong offset!");
static_assert(offsetof(ABP_EnvironmentMovableLight_C, Pitch_Magnitude) == 0x000244, "Member 'ABP_EnvironmentMovableLight_C::Pitch_Magnitude' has a wrong offset!");
static_assert(offsetof(ABP_EnvironmentMovableLight_C, Jaw_Frequency) == 0x000248, "Member 'ABP_EnvironmentMovableLight_C::Jaw_Frequency' has a wrong offset!");
static_assert(offsetof(ABP_EnvironmentMovableLight_C, Jaw_Magnitude) == 0x00024C, "Member 'ABP_EnvironmentMovableLight_C::Jaw_Magnitude' has a wrong offset!");
static_assert(offsetof(ABP_EnvironmentMovableLight_C, Roll_Frequency) == 0x000250, "Member 'ABP_EnvironmentMovableLight_C::Roll_Frequency' has a wrong offset!");
static_assert(offsetof(ABP_EnvironmentMovableLight_C, Roll_Magnitude) == 0x000254, "Member 'ABP_EnvironmentMovableLight_C::Roll_Magnitude' has a wrong offset!");
static_assert(offsetof(ABP_EnvironmentMovableLight_C, Pitch_Speed) == 0x000258, "Member 'ABP_EnvironmentMovableLight_C::Pitch_Speed' has a wrong offset!");
static_assert(offsetof(ABP_EnvironmentMovableLight_C, Jaw_Speed) == 0x00025C, "Member 'ABP_EnvironmentMovableLight_C::Jaw_Speed' has a wrong offset!");
static_assert(offsetof(ABP_EnvironmentMovableLight_C, Roll_Speed) == 0x000260, "Member 'ABP_EnvironmentMovableLight_C::Roll_Speed' has a wrong offset!");
static_assert(offsetof(ABP_EnvironmentMovableLight_C, Transform) == 0x000270, "Member 'ABP_EnvironmentMovableLight_C::Transform' has a wrong offset!");
static_assert(offsetof(ABP_EnvironmentMovableLight_C, Transform_Frequency) == 0x0002A0, "Member 'ABP_EnvironmentMovableLight_C::Transform_Frequency' has a wrong offset!");
static_assert(offsetof(ABP_EnvironmentMovableLight_C, Original_Transform) == 0x0002B0, "Member 'ABP_EnvironmentMovableLight_C::Original_Transform' has a wrong offset!");

}

