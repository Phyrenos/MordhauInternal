﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ControlsSettings

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_MenuContentWidget_classes.hpp"
#include "E_MainMenuAction_structs.hpp"
#include "UMG_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass BP_ControlsSettings.BP_ControlsSettings_C
// 0x0128 (0x0398 - 0x0270)
class UBP_ControlsSettings_C final : public UBP_MenuContentWidget_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0270(0x0008)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UWidgetAnimation*                       ApplyAnim;                                         // 0x0278(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBP_CheckboxEntry_C*                    AngleAttackAfterPressCheckbox;                     // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_CheckboxEntry_C*                    AngleAttacksWithMovementCheckbox;                  // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                ApplyButton;                                       // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_ButtonPrompt_C*                     BP_ButtonPrompt;                                   // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_ButtonPrompt_C*                     BP_ButtonPrompt_80;                                // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_HoveredSetting_C*                   BP_HoveredSetting;                                 // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_DropdownEntry_C*                    ControlSchemeDropdown;                             // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_CheckboxEntry_C*                    FlipAttackSideCheckbox;                            // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_SliderEntry_C*                      GamepadLeftXDeadzoneSlider;                        // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_SliderEntry_C*                      GamepadLeftXSensitivitySlider;                     // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_SliderEntry_C*                      GamepadLeftYDeadzoneSlider;                        // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_SliderEntry_C*                      GamepadLeftYSensitivitySlider;                     // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_SliderEntry_C*                      GamepadRangedSensitivitySlider;                    // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_SliderEntry_C*                      GamepadRightXDeadzoneSlider;                       // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_SliderEntry_C*                      GamepadRightXSensitivitySlider;                    // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_SliderEntry_C*                      GamepadRightYDeadzoneSlider;                       // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_SliderEntry_C*                      GamepadRightYSensitivitySlider;                    // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_1;                                           // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_8;                                           // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_CheckboxEntry_C*                    InverseAttackDirectionXCheckbox;                   // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_CheckboxEntry_C*                    InverseAttackDirectionYCheckbox;                   // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_CheckboxEntry_C*                    InvertGamepadLeftXCheckbox;                        // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_CheckboxEntry_C*                    InvertGamepadLeftYCheckbox;                        // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_CheckboxEntry_C*                    InvertGamepadRightXCheckbox;                       // 0x0338(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_CheckboxEntry_C*                    InvertGamepadRightYCheckbox;                       // 0x0340(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_CheckboxEntry_C*                    InvertMouseXCheckbox;                              // 0x0348(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_CheckboxEntry_C*                    InvertMouseYCheckbox;                              // 0x0350(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_SliderEntry_C*                      MouseXSensitivitySlider;                           // 0x0358(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_SliderEntry_C*                      MouseYSensitivitySlider;                           // 0x0360(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                ResetButton;                                       // 0x0368(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_CheckboxEntry_C*                    ToggleCrouchCheckbox;                              // 0x0370(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_CheckboxEntry_C*                    ToggleSprintCheckbox;                              // 0x0378(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         CurrentControlScheme;                              // 0x0380(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_384[0x4];                                      // 0x0384(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_ChoiceDialog_C*                     ControlSchemeWarningDialog;                        // 0x0388(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Default_ranged_sensitivity;                        // 0x0390(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_ControlsSettings(int32 EntryPoint);
	void BndEvt__BP_ControlsSettings_ToggleCrouchCheckbox_K2Node_ComponentBoundEvent_8_OnHovered__DelegateSignature();
	void Reset_Settings();
	void ResetCancel();
	void ResetConfirm();
	void BndEvt__GameoadRangedSensitivitySlider_K2Node_ComponentBoundEvent_7_OnHovered__DelegateSignature();
	void CancelButtonClicked();
	void ContinueButtonClicked();
	void BndEvt__ControlSchemeDropdown_K2Node_ComponentBoundEvent_5_OnSelectionChanged__DelegateSignature(const class FText& SelectedItem, ESelectInfo SelectionType);
	void BndEvt__ControlSchemeDropdown_K2Node_ComponentBoundEvent_3_OnHovered__DelegateSignature();
	void BndEvt__AngleAttacksWithMovementCheckbox_K2Node_ComponentBoundEvent_2_OnHovered__DelegateSignature();
	void BndEvt__InverseAttackDirectionYCheckbox_K2Node_ComponentBoundEvent_1_OnHovered__DelegateSignature();
	void BndEvt__applyButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__GamepadRightYDeadzoneSlider_K2Node_ComponentBoundEvent_329_OnHovered__DelegateSignature();
	void BndEvt__GamepadRightYSensitivitySlider_K2Node_ComponentBoundEvent_303_OnHovered__DelegateSignature();
	void BndEvt__InvertGamepadRightYCheckbox_K2Node_ComponentBoundEvent_278_OnHovered__DelegateSignature();
	void BndEvt__GamepadRightXDeadzoneSlider_K2Node_ComponentBoundEvent_254_OnHovered__DelegateSignature();
	void BndEvt__GamepadRightXSensitivitySlider_K2Node_ComponentBoundEvent_231_OnHovered__DelegateSignature();
	void BndEvt__InvertGamepadRightXCheckbox_K2Node_ComponentBoundEvent_209_OnHovered__DelegateSignature();
	void BndEvt__GamepadLeftYDeadzoneSlider_K2Node_ComponentBoundEvent_188_OnHovered__DelegateSignature();
	void BndEvt__GamepadLeftYSensitivitySlider_K2Node_ComponentBoundEvent_168_OnHovered__DelegateSignature();
	void BndEvt__InvertGamepadLeftYCheckbox_K2Node_ComponentBoundEvent_149_OnHovered__DelegateSignature();
	void BndEvt__GamepadLeftXDeadzoneSlider_K2Node_ComponentBoundEvent_131_OnHovered__DelegateSignature();
	void BndEvt__GamepadLeftXSensitivitySlider_K2Node_ComponentBoundEvent_114_OnHovered__DelegateSignature();
	void BndEvt__InvertGamepadLeftXCheckbox_K2Node_ComponentBoundEvent_98_OnHovered__DelegateSignature();
	void BndEvt__MouseYSensitivitySlider_K2Node_ComponentBoundEvent_83_OnHovered__DelegateSignature();
	void BndEvt__InvertMouseYCheckbox_K2Node_ComponentBoundEvent_69_OnHovered__DelegateSignature();
	void BndEvt__MouseXSensitivitySlider_K2Node_ComponentBoundEvent_56_OnHovered__DelegateSignature();
	void BndEvt__InvertMouseXCheckbox_K2Node_ComponentBoundEvent_44_OnHovered__DelegateSignature();
	void BndEvt__FlipAttackSideCheckbox_K2Node_ComponentBoundEvent_33_OnHovered__DelegateSignature();
	void BndEvt__AngleAttackAfterPressCheckbox_K2Node_ComponentBoundEvent_23_OnHovered__DelegateSignature();
	void BndEvt__InverseAttackDirectionCheckbox_K2Node_ComponentBoundEvent_14_OnHovered__DelegateSignature();
	void BndEvt__ToggleSprintCheckbox_K2Node_ComponentBoundEvent_6_OnHovered__DelegateSignature();
	void UpdateWidgets();
	void OnShown();
	void BndEvt__resetButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature();
	void UpdateInvertMouseXCheckbox();
	void ApplyInvertMouseX();
	void UpdateInvertMouseYCheckbox();
	void ApplyInvertMouseY();
	void UpdateInvertGamepadLeftXCheckbox();
	void UpdateInvertGamepadLeftYCheckbox();
	void ApplyInvertGamepadLeftX();
	void ApplyInvertGamepadLeftY();
	void UpdateFlipAttackSideCheckbox();
	void ApplyFlipAttackSide();
	void UpdateMouseXSensitivitySlider();
	void UpdateMouseYSensitivitySlider();
	void UpdateGamepadLeftXSensitivitySlider();
	void UpdateGamepadLeftYSensitivitySlider();
	void UpdateGamepadRightXSensitivitySlider();
	void UpdateGamepadRightYSensitivitySlider();
	void ApplyMouseXSensitivity();
	void ApplyMouseYSensitivity();
	void ApplyGamepadLeftXSensitivity();
	void ApplyGamepadLeftYSensitivity();
	void ApplyGamepadRightXSensitivity();
	void ApplyGamepadRightYSensitivity();
	void UpdateGamepadLeftXDeadzoneSlider();
	void UpdateGamepadLeftYDeadzoneSlider();
	void UpdateGamepadRightXDeadzoneSlider();
	void UpdateGamepadRightYDeadzoneSlider();
	void UpdateInvertGamepadRightXCheckbox();
	void UpdateInvertGamepadRightYCheckbox();
	void ApplyInvertGamepadRightX();
	void ApplyInvertGamepadRightY();
	void ApplyGamepadLeftXDeadzone();
	void ApplyGamepadLeftYDeadzone();
	void ApplyGamepadRightXDeadzone();
	void ApplyGamepadRightYDeadzone();
	void UpdateSlider(class UBP_SliderEntry_C* Slider, float Value, const struct FVector2D& Limits);
	void UpdateToggleSprintCheckbox();
	void GetSliderValue(class UBP_SliderEntry_C* Slider, const struct FVector2D& Limits, float* Value);
	void ApplyToggleSprint();
	void UpdateInverseAttackDirectionCheckbox();
	void ApplyInverseAttackDirection();
	void ApplyAngleAttackAfterPress();
	void UpdateAngleAttackAfterPressCheckbox();
	void UpdateAngleAttacksWithMovementCheckbox();
	void ApplyAngleAttacksWithMovement();
	void UpdateControlSchemeDropdown();
	void UpdateGamepadRangedSensititySlider();
	void ApplyGamepadRangedSensitivity();
	ESlateVisibility CollapseVisibilityIfConsole();
	void SaveSettings(E_MainMenuAction Action);
	void UpdateToggleCrouchCheckbox();
	void ApplyToggleCrouch();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ControlsSettings_C">();
	}
	static class UBP_ControlsSettings_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_ControlsSettings_C>();
	}
};
static_assert(alignof(UBP_ControlsSettings_C) == 0x000008, "Wrong alignment on UBP_ControlsSettings_C");
static_assert(sizeof(UBP_ControlsSettings_C) == 0x000398, "Wrong size on UBP_ControlsSettings_C");
static_assert(offsetof(UBP_ControlsSettings_C, UberGraphFrame) == 0x000270, "Member 'UBP_ControlsSettings_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_ControlsSettings_C, ApplyAnim) == 0x000278, "Member 'UBP_ControlsSettings_C::ApplyAnim' has a wrong offset!");
static_assert(offsetof(UBP_ControlsSettings_C, AngleAttackAfterPressCheckbox) == 0x000280, "Member 'UBP_ControlsSettings_C::AngleAttackAfterPressCheckbox' has a wrong offset!");
static_assert(offsetof(UBP_ControlsSettings_C, AngleAttacksWithMovementCheckbox) == 0x000288, "Member 'UBP_ControlsSettings_C::AngleAttacksWithMovementCheckbox' has a wrong offset!");
static_assert(offsetof(UBP_ControlsSettings_C, ApplyButton) == 0x000290, "Member 'UBP_ControlsSettings_C::ApplyButton' has a wrong offset!");
static_assert(offsetof(UBP_ControlsSettings_C, BP_ButtonPrompt) == 0x000298, "Member 'UBP_ControlsSettings_C::BP_ButtonPrompt' has a wrong offset!");
static_assert(offsetof(UBP_ControlsSettings_C, BP_ButtonPrompt_80) == 0x0002A0, "Member 'UBP_ControlsSettings_C::BP_ButtonPrompt_80' has a wrong offset!");
static_assert(offsetof(UBP_ControlsSettings_C, BP_HoveredSetting) == 0x0002A8, "Member 'UBP_ControlsSettings_C::BP_HoveredSetting' has a wrong offset!");
static_assert(offsetof(UBP_ControlsSettings_C, ControlSchemeDropdown) == 0x0002B0, "Member 'UBP_ControlsSettings_C::ControlSchemeDropdown' has a wrong offset!");
static_assert(offsetof(UBP_ControlsSettings_C, FlipAttackSideCheckbox) == 0x0002B8, "Member 'UBP_ControlsSettings_C::FlipAttackSideCheckbox' has a wrong offset!");
static_assert(offsetof(UBP_ControlsSettings_C, GamepadLeftXDeadzoneSlider) == 0x0002C0, "Member 'UBP_ControlsSettings_C::GamepadLeftXDeadzoneSlider' has a wrong offset!");
static_assert(offsetof(UBP_ControlsSettings_C, GamepadLeftXSensitivitySlider) == 0x0002C8, "Member 'UBP_ControlsSettings_C::GamepadLeftXSensitivitySlider' has a wrong offset!");
static_assert(offsetof(UBP_ControlsSettings_C, GamepadLeftYDeadzoneSlider) == 0x0002D0, "Member 'UBP_ControlsSettings_C::GamepadLeftYDeadzoneSlider' has a wrong offset!");
static_assert(offsetof(UBP_ControlsSettings_C, GamepadLeftYSensitivitySlider) == 0x0002D8, "Member 'UBP_ControlsSettings_C::GamepadLeftYSensitivitySlider' has a wrong offset!");
static_assert(offsetof(UBP_ControlsSettings_C, GamepadRangedSensitivitySlider) == 0x0002E0, "Member 'UBP_ControlsSettings_C::GamepadRangedSensitivitySlider' has a wrong offset!");
static_assert(offsetof(UBP_ControlsSettings_C, GamepadRightXDeadzoneSlider) == 0x0002E8, "Member 'UBP_ControlsSettings_C::GamepadRightXDeadzoneSlider' has a wrong offset!");
static_assert(offsetof(UBP_ControlsSettings_C, GamepadRightXSensitivitySlider) == 0x0002F0, "Member 'UBP_ControlsSettings_C::GamepadRightXSensitivitySlider' has a wrong offset!");
static_assert(offsetof(UBP_ControlsSettings_C, GamepadRightYDeadzoneSlider) == 0x0002F8, "Member 'UBP_ControlsSettings_C::GamepadRightYDeadzoneSlider' has a wrong offset!");
static_assert(offsetof(UBP_ControlsSettings_C, GamepadRightYSensitivitySlider) == 0x000300, "Member 'UBP_ControlsSettings_C::GamepadRightYSensitivitySlider' has a wrong offset!");
static_assert(offsetof(UBP_ControlsSettings_C, Image_1) == 0x000308, "Member 'UBP_ControlsSettings_C::Image_1' has a wrong offset!");
static_assert(offsetof(UBP_ControlsSettings_C, Image_8) == 0x000310, "Member 'UBP_ControlsSettings_C::Image_8' has a wrong offset!");
static_assert(offsetof(UBP_ControlsSettings_C, InverseAttackDirectionXCheckbox) == 0x000318, "Member 'UBP_ControlsSettings_C::InverseAttackDirectionXCheckbox' has a wrong offset!");
static_assert(offsetof(UBP_ControlsSettings_C, InverseAttackDirectionYCheckbox) == 0x000320, "Member 'UBP_ControlsSettings_C::InverseAttackDirectionYCheckbox' has a wrong offset!");
static_assert(offsetof(UBP_ControlsSettings_C, InvertGamepadLeftXCheckbox) == 0x000328, "Member 'UBP_ControlsSettings_C::InvertGamepadLeftXCheckbox' has a wrong offset!");
static_assert(offsetof(UBP_ControlsSettings_C, InvertGamepadLeftYCheckbox) == 0x000330, "Member 'UBP_ControlsSettings_C::InvertGamepadLeftYCheckbox' has a wrong offset!");
static_assert(offsetof(UBP_ControlsSettings_C, InvertGamepadRightXCheckbox) == 0x000338, "Member 'UBP_ControlsSettings_C::InvertGamepadRightXCheckbox' has a wrong offset!");
static_assert(offsetof(UBP_ControlsSettings_C, InvertGamepadRightYCheckbox) == 0x000340, "Member 'UBP_ControlsSettings_C::InvertGamepadRightYCheckbox' has a wrong offset!");
static_assert(offsetof(UBP_ControlsSettings_C, InvertMouseXCheckbox) == 0x000348, "Member 'UBP_ControlsSettings_C::InvertMouseXCheckbox' has a wrong offset!");
static_assert(offsetof(UBP_ControlsSettings_C, InvertMouseYCheckbox) == 0x000350, "Member 'UBP_ControlsSettings_C::InvertMouseYCheckbox' has a wrong offset!");
static_assert(offsetof(UBP_ControlsSettings_C, MouseXSensitivitySlider) == 0x000358, "Member 'UBP_ControlsSettings_C::MouseXSensitivitySlider' has a wrong offset!");
static_assert(offsetof(UBP_ControlsSettings_C, MouseYSensitivitySlider) == 0x000360, "Member 'UBP_ControlsSettings_C::MouseYSensitivitySlider' has a wrong offset!");
static_assert(offsetof(UBP_ControlsSettings_C, ResetButton) == 0x000368, "Member 'UBP_ControlsSettings_C::ResetButton' has a wrong offset!");
static_assert(offsetof(UBP_ControlsSettings_C, ToggleCrouchCheckbox) == 0x000370, "Member 'UBP_ControlsSettings_C::ToggleCrouchCheckbox' has a wrong offset!");
static_assert(offsetof(UBP_ControlsSettings_C, ToggleSprintCheckbox) == 0x000378, "Member 'UBP_ControlsSettings_C::ToggleSprintCheckbox' has a wrong offset!");
static_assert(offsetof(UBP_ControlsSettings_C, CurrentControlScheme) == 0x000380, "Member 'UBP_ControlsSettings_C::CurrentControlScheme' has a wrong offset!");
static_assert(offsetof(UBP_ControlsSettings_C, ControlSchemeWarningDialog) == 0x000388, "Member 'UBP_ControlsSettings_C::ControlSchemeWarningDialog' has a wrong offset!");
static_assert(offsetof(UBP_ControlsSettings_C, Default_ranged_sensitivity) == 0x000390, "Member 'UBP_ControlsSettings_C::Default_ranged_sensitivity' has a wrong offset!");

}

