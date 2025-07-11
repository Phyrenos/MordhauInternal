﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_HordePlayerController

#include "Basic.hpp"

#include "BP_HordePlayerController_classes.hpp"
#include "BP_HordePlayerController_parameters.hpp"


namespace SDK
{

// Function BP_HordePlayerController.BP_HordePlayerController_C.ExecuteUbergraph_BP_HordePlayerController
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_HordePlayerController_C::ExecuteUbergraph_BP_HordePlayerController(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HordePlayerController_C", "ExecuteUbergraph_BP_HordePlayerController");

	Params::BP_HordePlayerController_C_ExecuteUbergraph_BP_HordePlayerController Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_HordePlayerController.BP_HordePlayerController_C.ReceivePossess
// (Event, Protected, BlueprintEvent)
// Parameters:
// class APawn*                            PossessedPawn                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_HordePlayerController_C::ReceivePossess(class APawn* PossessedPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HordePlayerController_C", "ReceivePossess");

	Params::BP_HordePlayerController_C_ReceivePossess Parms{};

	Parms.PossessedPawn = PossessedPawn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_HordePlayerController.BP_HordePlayerController_C.AdminSpawnSkillPoint
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void ABP_HordePlayerController_C::AdminSpawnSkillPoint()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HordePlayerController_C", "AdminSpawnSkillPoint");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_HordePlayerController.BP_HordePlayerController_C.AdminSpawnHordeGold
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void ABP_HordePlayerController_C::AdminSpawnHordeGold()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HordePlayerController_C", "AdminSpawnHordeGold");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_HordePlayerController.BP_HordePlayerController_C.AttemptPurchaseBuyMenuEntry
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Buy_Menu_Entry                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_HordePlayerController_C::AttemptPurchaseBuyMenuEntry(int32 Buy_Menu_Entry)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HordePlayerController_C", "AttemptPurchaseBuyMenuEntry");

	Params::BP_HordePlayerController_C_AttemptPurchaseBuyMenuEntry Parms{};

	Parms.Buy_Menu_Entry = Buy_Menu_Entry;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_HordePlayerController.BP_HordePlayerController_C.ReceiveEndPlay
// (Event, Protected, BlueprintEvent)
// Parameters:
// EEndPlayReason                          EndPlayReason                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_HordePlayerController_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HordePlayerController_C", "ReceiveEndPlay");

	Params::BP_HordePlayerController_C_ReceiveEndPlay Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_HordePlayerController.BP_HordePlayerController_C.RequestUpgradeSkill
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// E_HordeSkill                            Skill                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_HordePlayerController_C::RequestUpgradeSkill(E_HordeSkill Skill)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HordePlayerController_C", "RequestUpgradeSkill");

	Params::BP_HordePlayerController_C_RequestUpgradeSkill Parms{};

	Parms.Skill = Skill;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_HordePlayerController.BP_HordePlayerController_C.InpActEvt_Show Scoreboard_K2Node_InputActionEvent_0
// (BlueprintEvent)
// Parameters:
// struct FKey                             Key                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_HordePlayerController_C::InpActEvt_Show_Scoreboard_K2Node_InputActionEvent_0(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HordePlayerController_C", "InpActEvt_Show Scoreboard_K2Node_InputActionEvent_0");

	Params::BP_HordePlayerController_C_InpActEvt_Show_Scoreboard_K2Node_InputActionEvent_0 Parms{};

	Parms.Key = std::move(Key);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_HordePlayerController.BP_HordePlayerController_C.InpActEvt_Show Scoreboard_K2Node_InputActionEvent_1
// (BlueprintEvent)
// Parameters:
// struct FKey                             Key                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_HordePlayerController_C::InpActEvt_Show_Scoreboard_K2Node_InputActionEvent_1(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HordePlayerController_C", "InpActEvt_Show Scoreboard_K2Node_InputActionEvent_1");

	Params::BP_HordePlayerController_C_InpActEvt_Show_Scoreboard_K2Node_InputActionEvent_1 Parms{};

	Parms.Key = std::move(Key);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_HordePlayerController.BP_HordePlayerController_C.InpActEvt_Use Horde Ultimate_K2Node_InputActionEvent_2
// (BlueprintEvent)
// Parameters:
// struct FKey                             Key                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_HordePlayerController_C::InpActEvt_Use_Horde_Ultimate_K2Node_InputActionEvent_2(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HordePlayerController_C", "InpActEvt_Use Horde Ultimate_K2Node_InputActionEvent_2");

	Params::BP_HordePlayerController_C_InpActEvt_Use_Horde_Ultimate_K2Node_InputActionEvent_2 Parms{};

	Parms.Key = std::move(Key);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_HordePlayerController.BP_HordePlayerController_C.InpActEvt_Show Horde Skill Menu_K2Node_InputActionEvent_3
// (BlueprintEvent)
// Parameters:
// struct FKey                             Key                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_HordePlayerController_C::InpActEvt_Show_Horde_Skill_Menu_K2Node_InputActionEvent_3(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HordePlayerController_C", "InpActEvt_Show Horde Skill Menu_K2Node_InputActionEvent_3");

	Params::BP_HordePlayerController_C_InpActEvt_Show_Horde_Skill_Menu_K2Node_InputActionEvent_3 Parms{};

	Parms.Key = std::move(Key);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_HordePlayerController.BP_HordePlayerController_C.InpActEvt_Battlecry_K2Node_InputActionEvent_4
// (BlueprintEvent)
// Parameters:
// struct FKey                             Key                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_HordePlayerController_C::InpActEvt_Battlecry_K2Node_InputActionEvent_4(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HordePlayerController_C", "InpActEvt_Battlecry_K2Node_InputActionEvent_4");

	Params::BP_HordePlayerController_C_InpActEvt_Battlecry_K2Node_InputActionEvent_4 Parms{};

	Parms.Key = std::move(Key);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_HordePlayerController.BP_HordePlayerController_C.OnRep_PurchaseTrigger
// (BlueprintCallable, BlueprintEvent)

void ABP_HordePlayerController_C::OnRep_PurchaseTrigger()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HordePlayerController_C", "OnRep_PurchaseTrigger");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_HordePlayerController.BP_HordePlayerController_C.CustomizeEquipment
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMordhauEquipment*                Equipment                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_HordePlayerController_C::CustomizeEquipment(class AMordhauEquipment* Equipment)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HordePlayerController_C", "CustomizeEquipment");

	Params::BP_HordePlayerController_C_CustomizeEquipment Parms{};

	Parms.Equipment = Equipment;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_HordePlayerController.BP_HordePlayerController_C.UpgradeSkill
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// E_HordeSkill                            Skill                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Success                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_HordePlayerController_C::UpgradeSkill(E_HordeSkill Skill, bool* Success)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HordePlayerController_C", "UpgradeSkill");

	Params::BP_HordePlayerController_C_UpgradeSkill Parms{};

	Parms.Skill = Skill;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;
}


// Function BP_HordePlayerController.BP_HordePlayerController_C.GetSkillLevel
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// E_HordeSkill                            Skill                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                                   Level                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_HordePlayerController_C::GetSkillLevel(E_HordeSkill Skill, uint8* Level)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HordePlayerController_C", "GetSkillLevel");

	Params::BP_HordePlayerController_C_GetSkillLevel Parms{};

	Parms.Skill = Skill;

	UObject::ProcessEvent(Func, &Parms);

	if (Level != nullptr)
		*Level = Parms.Level;
}


// Function BP_HordePlayerController.BP_HordePlayerController_C.HasPrerequisite
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// E_HordeSkill                            Skill                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Result                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_HordePlayerController_C::HasPrerequisite(E_HordeSkill Skill, bool* Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HordePlayerController_C", "HasPrerequisite");

	Params::BP_HordePlayerController_C_HasPrerequisite Parms{};

	Parms.Skill = Skill;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;
}


// Function BP_HordePlayerController.BP_HordePlayerController_C.SkillsUpdated
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_HordePlayerController_C::SkillsUpdated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HordePlayerController_C", "SkillsUpdated");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_HordePlayerController.BP_HordePlayerController_C.GetSkillLevelFloat
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// E_HordeSkill                            Skill                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   SkillLevel                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_HordePlayerController_C::GetSkillLevelFloat(E_HordeSkill Skill, float* SkillLevel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HordePlayerController_C", "GetSkillLevelFloat");

	Params::BP_HordePlayerController_C_GetSkillLevelFloat Parms{};

	Parms.Skill = Skill;

	UObject::ProcessEvent(Func, &Parms);

	if (SkillLevel != nullptr)
		*SkillLevel = Parms.SkillLevel;
}


// Function BP_HordePlayerController.BP_HordePlayerController_C.TryFletcherRestock
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_HordePlayerController_C::TryFletcherRestock()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HordePlayerController_C", "TryFletcherRestock");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_HordePlayerController.BP_HordePlayerController_C.TryScatterShot
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMordhauProjectile*               SourceProjectile                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_HordePlayerController_C::TryScatterShot(class AMordhauProjectile* SourceProjectile)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HordePlayerController_C", "TryScatterShot");

	Params::BP_HordePlayerController_C_TryScatterShot Parms{};

	Parms.SourceProjectile = SourceProjectile;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_HordePlayerController.BP_HordePlayerController_C.AssignFireArrowValues
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           Arrow                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_HordePlayerController_C::AssignFireArrowValues(class AActor* Arrow)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HordePlayerController_C", "AssignFireArrowValues");

	Params::BP_HordePlayerController_C_AssignFireArrowValues Parms{};

	Parms.Arrow = Arrow;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_HordePlayerController.BP_HordePlayerController_C.GetDiscountedPrice
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   BasePrice                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                           Horde_Purchasable                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   DiscountedPrice                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_HordePlayerController_C::GetDiscountedPrice(int32 BasePrice, class UClass* Horde_Purchasable, int32* DiscountedPrice)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HordePlayerController_C", "GetDiscountedPrice");

	Params::BP_HordePlayerController_C_GetDiscountedPrice Parms{};

	Parms.BasePrice = BasePrice;
	Parms.Horde_Purchasable = Horde_Purchasable;

	UObject::ProcessEvent(Func, &Parms);

	if (DiscountedPrice != nullptr)
		*DiscountedPrice = Parms.DiscountedPrice;
}


// Function BP_HordePlayerController.BP_HordePlayerController_C.OnRep_BackstabCounter
// (BlueprintCallable, BlueprintEvent)

void ABP_HordePlayerController_C::OnRep_BackstabCounter()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HordePlayerController_C", "OnRep_BackstabCounter");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_HordePlayerController.BP_HordePlayerController_C.OnRep_CriticalCounter
// (BlueprintCallable, BlueprintEvent)

void ABP_HordePlayerController_C::OnRep_CriticalCounter()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HordePlayerController_C", "OnRep_CriticalCounter");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_HordePlayerController.BP_HordePlayerController_C.OnRep_NextSpecialTime
// (BlueprintCallable, BlueprintEvent)

void ABP_HordePlayerController_C::OnRep_NextSpecialTime()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HordePlayerController_C", "OnRep_NextSpecialTime");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_HordePlayerController.BP_HordePlayerController_C.GetScaledSkillLevelParams
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// E_HordeSkill                            Skill                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Bias                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   PercentA                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   PercentB                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   IntegerA                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   TimeA                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_HordePlayerController_C::GetScaledSkillLevelParams(E_HordeSkill Skill, int32 Bias, float* PercentA, float* PercentB, int32* IntegerA, float* TimeA)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HordePlayerController_C", "GetScaledSkillLevelParams");

	Params::BP_HordePlayerController_C_GetScaledSkillLevelParams Parms{};

	Parms.Skill = Skill;
	Parms.Bias = Bias;

	UObject::ProcessEvent(Func, &Parms);

	if (PercentA != nullptr)
		*PercentA = Parms.PercentA;

	if (PercentB != nullptr)
		*PercentB = Parms.PercentB;

	if (IntegerA != nullptr)
		*IntegerA = Parms.IntegerA;

	if (TimeA != nullptr)
		*TimeA = Parms.TimeA;
}


// Function BP_HordePlayerController.BP_HordePlayerController_C.OnRep_OverpowerCounter
// (BlueprintCallable, BlueprintEvent)

void ABP_HordePlayerController_C::OnRep_OverpowerCounter()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HordePlayerController_C", "OnRep_OverpowerCounter");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_HordePlayerController.BP_HordePlayerController_C.OnRep_SweepCounter
// (BlueprintCallable, BlueprintEvent)

void ABP_HordePlayerController_C::OnRep_SweepCounter()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HordePlayerController_C", "OnRep_SweepCounter");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_HordePlayerController.BP_HordePlayerController_C.OnRep_RecoilCounter
// (BlueprintCallable, BlueprintEvent)

void ABP_HordePlayerController_C::OnRep_RecoilCounter()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HordePlayerController_C", "OnRep_RecoilCounter");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_HordePlayerController.BP_HordePlayerController_C.OnRep_ScavengerCounter
// (BlueprintCallable, BlueprintEvent)

void ABP_HordePlayerController_C::OnRep_ScavengerCounter()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HordePlayerController_C", "OnRep_ScavengerCounter");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_HordePlayerController.BP_HordePlayerController_C.OnRep_LastChanceCounter
// (BlueprintCallable, BlueprintEvent)

void ABP_HordePlayerController_C::OnRep_LastChanceCounter()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HordePlayerController_C", "OnRep_LastChanceCounter");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_HordePlayerController.BP_HordePlayerController_C.OnRep_MiracleCounter
// (BlueprintCallable, BlueprintEvent)

void ABP_HordePlayerController_C::OnRep_MiracleCounter()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HordePlayerController_C", "OnRep_MiracleCounter");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_HordePlayerController.BP_HordePlayerController_C.OnRep_CriticalShotCounter
// (BlueprintCallable, BlueprintEvent)

void ABP_HordePlayerController_C::OnRep_CriticalShotCounter()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HordePlayerController_C", "OnRep_CriticalShotCounter");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_HordePlayerController.BP_HordePlayerController_C.OnAfterPossess
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn*                            APawn                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_HordePlayerController_C::OnAfterPossess(class APawn* APawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HordePlayerController_C", "OnAfterPossess");

	Params::BP_HordePlayerController_C_OnAfterPossess Parms{};

	Parms.APawn = APawn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_HordePlayerController.BP_HordePlayerController_C.OnRep_ScattershotCounter
// (BlueprintCallable, BlueprintEvent)

void ABP_HordePlayerController_C::OnRep_ScattershotCounter()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HordePlayerController_C", "OnRep_ScattershotCounter");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_HordePlayerController.BP_HordePlayerController_C.OnRep_SellTrigger
// (BlueprintCallable, BlueprintEvent)

void ABP_HordePlayerController_C::OnRep_SellTrigger()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HordePlayerController_C", "OnRep_SellTrigger");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_HordePlayerController.BP_HordePlayerController_C.GetMerchantDuplicateChance
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                           Purchased_Actor                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    DispenseBonus                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_HordePlayerController_C::GetMerchantDuplicateChance(class UClass* Purchased_Actor, bool* DispenseBonus)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HordePlayerController_C", "GetMerchantDuplicateChance");

	Params::BP_HordePlayerController_C_GetMerchantDuplicateChance Parms{};

	Parms.Purchased_Actor = Purchased_Actor;

	UObject::ProcessEvent(Func, &Parms);

	if (DispenseBonus != nullptr)
		*DispenseBonus = Parms.DispenseBonus;
}


// Function BP_HordePlayerController.BP_HordePlayerController_C.ReassignWearablePickupsToProfile
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                           Wearable_Pickups                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AMordhauCharacter*                Mordhau_Character                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_HordePlayerController_C::ReassignWearablePickupsToProfile(class UClass* Wearable_Pickups, class AMordhauCharacter* Mordhau_Character)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HordePlayerController_C", "ReassignWearablePickupsToProfile");

	Params::BP_HordePlayerController_C_ReassignWearablePickupsToProfile Parms{};

	Parms.Wearable_Pickups = Wearable_Pickups;
	Parms.Mordhau_Character = Mordhau_Character;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_HordePlayerController.BP_HordePlayerController_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_HordePlayerController_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HordePlayerController_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_HordePlayerController.BP_HordePlayerController_C.InpActEvt_Battlecry_K2Node_InputActionEvent_5
// (BlueprintEvent)
// Parameters:
// struct FKey                             Key                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_HordePlayerController_C::InpActEvt_Battlecry_K2Node_InputActionEvent_5(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HordePlayerController_C", "InpActEvt_Battlecry_K2Node_InputActionEvent_5");

	Params::BP_HordePlayerController_C_InpActEvt_Battlecry_K2Node_InputActionEvent_5 Parms{};

	Parms.Key = std::move(Key);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_HordePlayerController.BP_HordePlayerController_C.OnBuilt
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           Structure                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_HordePlayerController_C::OnBuilt(class AActor* Structure)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HordePlayerController_C", "OnBuilt");

	Params::BP_HordePlayerController_C_OnBuilt Parms{};

	Parms.Structure = Structure;

	UObject::ProcessEvent(Func, &Parms);
}

}

