﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_FriendSearchEntryData

#include "Basic.hpp"

#include "MordhauOnlineSubsystem_structs.hpp"
#include "CoreUObject_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_FriendSearchEntryData.BP_FriendSearchEntryData_C
// 0x0078 (0x00A0 - 0x0028)
class UBP_FriendSearchEntryData_C final : public UObject
{
public:
	struct FUserSearchResult                      UserSearchData;                                    // 0x0028(0x0078)(Edit, BlueprintVisible)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_FriendSearchEntryData_C">();
	}
	static class UBP_FriendSearchEntryData_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_FriendSearchEntryData_C>();
	}
};
static_assert(alignof(UBP_FriendSearchEntryData_C) == 0x000008, "Wrong alignment on UBP_FriendSearchEntryData_C");
static_assert(sizeof(UBP_FriendSearchEntryData_C) == 0x0000A0, "Wrong size on UBP_FriendSearchEntryData_C");
static_assert(offsetof(UBP_FriendSearchEntryData_C, UserSearchData) == 0x000028, "Member 'UBP_FriendSearchEntryData_C::UserSearchData' has a wrong offset!");

}

