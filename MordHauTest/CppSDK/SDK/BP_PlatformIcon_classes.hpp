﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PlatformIcon

#include "Basic.hpp"

#include "MordhauOnlineSubsystem_structs.hpp"
#include "SlateCore_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass BP_PlatformIcon.BP_PlatformIcon_C
// 0x0058 (0x02B8 - 0x0260)
class UBP_PlatformIcon_C final : public UUserWidget
{
public:
	class UImage*                                 Image_platform;                                    // 0x0260(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TMap<EPlatform, struct FSlateBrush>           PlatformImages;                                    // 0x0268(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void UpdatePlaformIcon(EPlatform Platform);
	void CheckForConsolePrivacyIcon(EPlatform IconPlatform, EPlatformSpecific MyPlatform, EPlatform* CalculatedIconPlatform);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PlatformIcon_C">();
	}
	static class UBP_PlatformIcon_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_PlatformIcon_C>();
	}
};
static_assert(alignof(UBP_PlatformIcon_C) == 0x000008, "Wrong alignment on UBP_PlatformIcon_C");
static_assert(sizeof(UBP_PlatformIcon_C) == 0x0002B8, "Wrong size on UBP_PlatformIcon_C");
static_assert(offsetof(UBP_PlatformIcon_C, Image_platform) == 0x000260, "Member 'UBP_PlatformIcon_C::Image_platform' has a wrong offset!");
static_assert(offsetof(UBP_PlatformIcon_C, PlatformImages) == 0x000268, "Member 'UBP_PlatformIcon_C::PlatformImages' has a wrong offset!");

}

