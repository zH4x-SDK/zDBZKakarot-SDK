#pragma once

#include "../SDK.h"

// Name: DBZKakarot, Version: 1.0.3

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function CFramework.CFDebugMenuEventHandlerBool.Set
struct UCFDebugMenuEventHandlerBool_Set_Params
{
};

// Function CFramework.CFDebugMenuEventHandlerBool.Get
struct UCFDebugMenuEventHandlerBool_Get_Params
{
};

// Function CFramework.CFDebugMenuEventHandlerTrigger.Exec
struct UCFDebugMenuEventHandlerTrigger_Exec_Params
{
};

// Function CFramework.CFHUDDebugNodeSelectorComponent.OnReleased
struct UCFHUDDebugNodeSelectorComponent_OnReleased_Params
{
};

// Function CFramework.CFHUDDebugNodeSelectorComponent.OnPressedUp
struct UCFHUDDebugNodeSelectorComponent_OnPressedUp_Params
{
};

// Function CFramework.CFHUDDebugNodeSelectorComponent.OnPressedRight
struct UCFHUDDebugNodeSelectorComponent_OnPressedRight_Params
{
};

// Function CFramework.CFHUDDebugNodeSelectorComponent.OnPressedOption_C
struct UCFHUDDebugNodeSelectorComponent_OnPressedOption_C_Params
{
};

// Function CFramework.CFHUDDebugNodeSelectorComponent.OnPressedOption_B
struct UCFHUDDebugNodeSelectorComponent_OnPressedOption_B_Params
{
};

// Function CFramework.CFHUDDebugNodeSelectorComponent.OnPressedOption_A
struct UCFHUDDebugNodeSelectorComponent_OnPressedOption_A_Params
{
};

// Function CFramework.CFHUDDebugNodeSelectorComponent.OnPressedLeft
struct UCFHUDDebugNodeSelectorComponent_OnPressedLeft_Params
{
};

// Function CFramework.CFHUDDebugNodeSelectorComponent.OnPressedEnter
struct UCFHUDDebugNodeSelectorComponent_OnPressedEnter_Params
{
};

// Function CFramework.CFHUDDebugNodeSelectorComponent.OnPressedDown
struct UCFHUDDebugNodeSelectorComponent_OnPressedDown_Params
{
};

// Function CFramework.CFHUDDebugNodeSelectorComponent.OnPressedBack
struct UCFHUDDebugNodeSelectorComponent_OnPressedBack_Params
{
};

// Function CFramework.CFDebugMenuContent.OnPushedBP
struct UCFDebugMenuContent_OnPushedBP_Params
{
};

// Function CFramework.CFDebugMenuContent.OnPoppedBP
struct UCFDebugMenuContent_OnPoppedBP_Params
{
};

// Function CFramework.CFDebugMenuContent.OnDeactivatedBP
struct UCFDebugMenuContent_OnDeactivatedBP_Params
{
};

// Function CFramework.CFDebugMenuContent.OnContentSelectedBP
struct UCFDebugMenuContent_OnContentSelectedBP_Params
{
};

// Function CFramework.CFDebugMenuContent.OnContentCanceledBP
struct UCFDebugMenuContent_OnContentCanceledBP_Params
{
};

// Function CFramework.CFDebugMenuContent.OnActivatedBP
struct UCFDebugMenuContent_OnActivatedBP_Params
{
};

// Function CFramework.CFDebugMenuContent.IsSelectedByKeyboard
struct UCFDebugMenuContent_IsSelectedByKeyboard_Params
{
};

// Function CFramework.CFDebugMenuContent.IsSelected
struct UCFDebugMenuContent_IsSelected_Params
{
};

// Function CFramework.CFDebugMenuContent.IsActive
struct UCFDebugMenuContent_IsActive_Params
{
};

// Function CFramework.CFDebugMenuContent.GetTextColor
struct UCFDebugMenuContent_GetTextColor_Params
{
};

// Function CFramework.CFDebugMenuContent.GetTextBlock
struct UCFDebugMenuContent_GetTextBlock_Params
{
};

// Function CFramework.CFDebugMenuContent.GetContentColor
struct UCFDebugMenuContent_GetContentColor_Params
{
};

// Function CFramework.CFDebugMenuList.GetVerticalBox
struct UCFDebugMenuList_GetVerticalBox_Params
{
};

// Function CFramework.CFDebugMenuList.GetTextColor
struct UCFDebugMenuList_GetTextColor_Params
{
};

// Function CFramework.CFDebugMenuList.GetBackColor
struct UCFDebugMenuList_GetBackColor_Params
{
};

// Function CFramework.CFDebugMenuContentCheck.GetCheckBox
struct UCFDebugMenuContentCheck_GetCheckBox_Params
{
};

// Function CFramework.CFDebugMenuContentNumeric.OnValueCommitted
struct UCFDebugMenuContentNumeric_OnValueCommitted_Params
{
};

// Function CFramework.CFDebugMenuContentNumeric.GetSpinBox
struct UCFDebugMenuContentNumeric_GetSpinBox_Params
{
};

// Function CFramework.CFDebugMenuContentText.OnTextCommitted
struct UCFDebugMenuContentText_OnTextCommitted_Params
{
	struct FText                                       Text;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function CFramework.CFDebugMenuContentText.GetTextBox
struct UCFDebugMenuContentText_GetTextBox_Params
{
};

// Function CFramework.CFDebugMenuContentButton.GetButtonBox
struct UCFDebugMenuContentButton_GetButtonBox_Params
{
};

// Function CFramework.CFDebugMenuEventHandlerFloat.Set
struct UCFDebugMenuEventHandlerFloat_Set_Params
{
};

// Function CFramework.CFDebugMenuEventHandlerFloat.GetParam
struct UCFDebugMenuEventHandlerFloat_GetParam_Params
{
	struct FDebugMenuNumericParam                      Param;                                                    // (Parm, OutParm)
};

// Function CFramework.CFDebugMenuEventHandlerFloat.Get
struct UCFDebugMenuEventHandlerFloat_Get_Params
{
};

// Function CFramework.CFDebugMenuEventHandlerText.Set
struct UCFDebugMenuEventHandlerText_Set_Params
{
	struct FText                                       Text;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function CFramework.CFDebugMenuEventHandlerText.Get
struct UCFDebugMenuEventHandlerText_Get_Params
{
};

// Function CFramework.CFDebugMenuEventHandlerCombo.Set
struct UCFDebugMenuEventHandlerCombo_Set_Params
{
};

// Function CFramework.CFDebugMenuEventHandlerCombo.Build
struct UCFDebugMenuEventHandlerCombo_Build_Params
{
};

// Function CFramework.DMDispLoadStatus.Tick
struct UDMDispLoadStatus_Tick_Params
{
};

// Function CFramework.DMDispLoadStatus.OnPressedRight
struct UDMDispLoadStatus_OnPressedRight_Params
{
};

// Function CFramework.DMDispLoadStatus.OnPressedLeft
struct UDMDispLoadStatus_OnPressedLeft_Params
{
};

// Function CFramework.DMDispLoadStatus.OnDetachInput
struct UDMDispLoadStatus_OnDetachInput_Params
{
	class UObject*                                     WorldContext;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CFramework.DMDispLoadStatus.OnAttachInput
struct UDMDispLoadStatus_OnAttachInput_Params
{
	class UObject*                                     WorldContext;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CFramework.CFDebugXmlSelector.OnPressedUp
struct UCFDebugXmlSelector_OnPressedUp_Params
{
};

// Function CFramework.CFDebugXmlSelector.OnPressedRight
struct UCFDebugXmlSelector_OnPressedRight_Params
{
};

// Function CFramework.CFDebugXmlSelector.OnPressedR1
struct UCFDebugXmlSelector_OnPressedR1_Params
{
};

// Function CFramework.CFDebugXmlSelector.OnPressedLeft
struct UCFDebugXmlSelector_OnPressedLeft_Params
{
};

// Function CFramework.CFDebugXmlSelector.OnPressedL1
struct UCFDebugXmlSelector_OnPressedL1_Params
{
};

// Function CFramework.CFDebugXmlSelector.OnPressedEnter
struct UCFDebugXmlSelector_OnPressedEnter_Params
{
};

// Function CFramework.CFDebugXmlSelector.OnPressedDown
struct UCFDebugXmlSelector_OnPressedDown_Params
{
};

// Function CFramework.CFDebugXmlSelector.OnPressedBack
struct UCFDebugXmlSelector_OnPressedBack_Params
{
};

// Function CFramework.CFDynamicsBlueprintFunctionLibrary.SetEnable
struct UCFDynamicsBlueprintFunctionLibrary_SetEnable_Params
{
	class USkeletalMeshComponent*                      SkeletalMeshComponent;                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               Enable;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CFramework.CFDynamicsBlueprintFunctionLibrary.SetAllEnable
struct UCFDynamicsBlueprintFunctionLibrary_SetAllEnable_Params
{
	bool                                               Enabled;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CFramework.CFDynamicsBlueprintFunctionLibrary.Reset
struct UCFDynamicsBlueprintFunctionLibrary_Reset_Params
{
	class USkeletalMeshComponent*                      SkeletalMeshComponent;                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function CFramework.CFDynamicsBlueprintFunctionLibrary.IsEnable
struct UCFDynamicsBlueprintFunctionLibrary_IsEnable_Params
{
	class USkeletalMeshComponent*                      SkeletalMeshComponent;                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function CFramework.CFDynamicsBlueprintFunctionLibrary.IsAllEnable
struct UCFDynamicsBlueprintFunctionLibrary_IsAllEnable_Params
{
};

// Function CFramework.CFGameOperatingEnvironment.IsConfirmAButton
struct UCFGameOperatingEnvironment_IsConfirmAButton_Params
{
};

// Function CFramework.CFGameOperatingEnvironment.GetReplaceLanguagePath
struct UCFGameOperatingEnvironment_GetReplaceLanguagePath_Params
{
};

// Function CFramework.CFGameOperatingEnvironment.GetReplaceEnvironmentPath
struct UCFGameOperatingEnvironment_GetReplaceEnvironmentPath_Params
{
};

// Function CFramework.CFGameOperatingEnvironment.GetRegionType
struct UCFGameOperatingEnvironment_GetRegionType_Params
{
};

// Function CFramework.CFGameOperatingEnvironment.GetLanguageCode
struct UCFGameOperatingEnvironment_GetLanguageCode_Params
{
	unsigned char                                      Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CFramework.CFGameOperatingEnvironment.GetLangType
struct UCFGameOperatingEnvironment_GetLangType_Params
{
};

// Function CFramework.CFUIUtil.SetNumberTextureTiling
struct UCFUIUtil_SetNumberTextureTiling_Params
{
};

// Function CFramework.CFDebugMenuContentCombo.GetComboBox
struct UCFDebugMenuContentCombo_GetComboBox_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
