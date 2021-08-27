﻿#pragma once

// Name: DBZ-Kakarot, Version: 4.21.2


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function CFramework.CFGameInstance.OnViewportCreated
struct UCFGameInstance_OnViewportCreated_Params
{
};

// Function CFramework.CFGameInstance.GetSceneManager
struct UCFGameInstance_GetSceneManager_Params
{
	class UCFSceneManager*                             ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CFramework.CFLevelManager.OnCreateGameState
struct ACFLevelManager_OnCreateGameState_Params
{
	class ACFGameState*                                InGameState;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CFramework.CFDebugMenuHandler.SaveSetting
struct UCFDebugMenuHandler_SaveSetting_Params
{
};

// Function CFramework.CFDebugMenuHandler.OnSetLoadSetting
struct UCFDebugMenuHandler_OnSetLoadSetting_Params
{
	bool                                               bLoad;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CFramework.CFDebugMenuHandler.OnReleasedRightStick
struct UCFDebugMenuHandler_OnReleasedRightStick_Params
{
};

// Function CFramework.CFDebugMenuHandler.OnReleasedLeftStick
struct UCFDebugMenuHandler_OnReleasedLeftStick_Params
{
};

// Function CFramework.CFDebugMenuHandler.OnPressedRightStick
struct UCFDebugMenuHandler_OnPressedRightStick_Params
{
};

// Function CFramework.CFDebugMenuHandler.OnPressedLeftStick
struct UCFDebugMenuHandler_OnPressedLeftStick_Params
{
};

// Function CFramework.CFDebugMenuHandler.IsLoadSetting
struct UCFDebugMenuHandler_IsLoadSetting_Params
{
	SlateCore_ECheckBoxState                           ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CFramework.CFDebugMenuHandler.ClearSetting
struct UCFDebugMenuHandler_ClearSetting_Params
{
};

// Function CFramework.CFDebugMenuEventHandlerBool.Set
struct UCFDebugMenuEventHandlerBool_Set_Params
{
	bool                                               bChecked;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CFramework.CFDebugMenuEventHandlerBool.Get
struct UCFDebugMenuEventHandlerBool_Get_Params
{
	SlateCore_ECheckBoxState                           ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
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

// Function CFramework.CFAsyncLoader.OnLoaded
struct UCFAsyncLoader_OnLoaded_Params
{
};

// Function CFramework.CFDebugMenu.OnReleasedRight
struct UCFDebugMenu_OnReleasedRight_Params
{
};

// Function CFramework.CFDebugMenu.OnReleasedLeft
struct UCFDebugMenu_OnReleasedLeft_Params
{
};

// Function CFramework.CFDebugMenu.OnPressedUp
struct UCFDebugMenu_OnPressedUp_Params
{
};

// Function CFramework.CFDebugMenu.OnPressedSelect
struct UCFDebugMenu_OnPressedSelect_Params
{
};

// Function CFramework.CFDebugMenu.OnPressedRight
struct UCFDebugMenu_OnPressedRight_Params
{
};

// Function CFramework.CFDebugMenu.OnPressedLeft
struct UCFDebugMenu_OnPressedLeft_Params
{
};

// Function CFramework.CFDebugMenu.OnPressedDown
struct UCFDebugMenu_OnPressedDown_Params
{
};

// Function CFramework.CFDebugMenu.OnPressedCancel
struct UCFDebugMenu_OnPressedCancel_Params
{
};

// Function CFramework.CFDebugMenu.OnKeyDownEnter
struct UCFDebugMenu_OnKeyDownEnter_Params
{
};

// Function CFramework.CFDebugMenu.GetHorizontalBox
struct UCFDebugMenu_GetHorizontalBox_Params
{
	class UHorizontalBox*                              ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CFramework.CFDebugMenu.GetContentsArea
struct UCFDebugMenu_GetContentsArea_Params
{
	class UOverlay*                                    ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CFramework.CFDebugMenuContent.OnPushedBP
struct UCFDebugMenuContent_OnPushedBP_Params
{
	class UCFDebugMenuContent*                         to;                                                        // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CFramework.CFDebugMenuContent.OnPoppedBP
struct UCFDebugMenuContent_OnPoppedBP_Params
{
	class UCFDebugMenuContent*                         from;                                                      // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CFramework.CFDebugMenuContent.OnDeactivatedBP
struct UCFDebugMenuContent_OnDeactivatedBP_Params
{
};

// Function CFramework.CFDebugMenuContent.OnContentSelectedBP
struct UCFDebugMenuContent_OnContentSelectedBP_Params
{
	bool                                               byKeyboard;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
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
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CFramework.CFDebugMenuContent.IsSelected
struct UCFDebugMenuContent_IsSelected_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CFramework.CFDebugMenuContent.IsActive
struct UCFDebugMenuContent_IsActive_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CFramework.CFDebugMenuContent.GetTextColor
struct UCFDebugMenuContent_GetTextColor_Params
{
	struct FLinearColor                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CFramework.CFDebugMenuContent.GetTextBlock
struct UCFDebugMenuContent_GetTextBlock_Params
{
	class UTextBlock*                                  ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CFramework.CFDebugMenuContent.GetContentColor
struct UCFDebugMenuContent_GetContentColor_Params
{
	struct FSlateColor                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function CFramework.CFDebugMenuList.GetVerticalBox
struct UCFDebugMenuList_GetVerticalBox_Params
{
	class UVerticalBox*                                ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CFramework.CFDebugMenuList.GetTextColor
struct UCFDebugMenuList_GetTextColor_Params
{
	struct FLinearColor                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CFramework.CFDebugMenuList.GetBackColor
struct UCFDebugMenuList_GetBackColor_Params
{
	struct FSlateColor                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function CFramework.CFDebugMenuContentFolder.GetMenuContent
struct UCFDebugMenuContentFolder_GetMenuContent_Params
{
	class UWidget*                                     ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CFramework.CFDebugMenuContentFolder.GetMenuAnchor
struct UCFDebugMenuContentFolder_GetMenuAnchor_Params
{
	class UMenuAnchor*                                 ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CFramework.CFDebugMenuContentNumeric.OnValueCommitted
struct UCFDebugMenuContentNumeric_OnValueCommitted_Params
{
	float                                              InValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<SlateCore_ETextCommit>                 CommitMethod;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CFramework.CFDebugMenuContentNumeric.GetSpinBox
struct UCFDebugMenuContentNumeric_GetSpinBox_Params
{
	class USpinBox*                                    ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CFramework.CFDebugMenuContentCheck.GetCheckBox
struct UCFDebugMenuContentCheck_GetCheckBox_Params
{
	class UCheckBox*                                   ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CFramework.CFDebugMenuContentCombo.GetComboBox
struct UCFDebugMenuContentCombo_GetComboBox_Params
{
	class UComboBoxString*                             ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CFramework.CFDebugMenuContentText.OnTextCommitted
struct UCFDebugMenuContentText_OnTextCommitted_Params
{
	struct FText                                       Text;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	TEnumAsByte<SlateCore_ETextCommit>                 CommitMethod;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CFramework.CFDebugMenuContentText.GetTextBox
struct UCFDebugMenuContentText_GetTextBox_Params
{
	class UEditableTextBox*                            ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CFramework.CFDebugMenuContentButton.GetButtonBox
struct UCFDebugMenuContentButton_GetButtonBox_Params
{
	class UButton*                                     ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CFramework.CFDebugMenuContentClass.OnSetClass
struct UCFDebugMenuContentClass_OnSetClass_Params
{
	class UClass*                                      setClass;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CFramework.CFDebugMenuContentClass.GetPropEdit
struct UCFDebugMenuContentClass_GetPropEdit_Params
{
	class UCFPropertyEditorClass*                      ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CFramework.CFDebugMenuEventHandlerFloat.Set
struct UCFDebugMenuEventHandlerFloat_Set_Params
{
	float                                              Value;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CFramework.CFDebugMenuEventHandlerFloat.GetParam
struct UCFDebugMenuEventHandlerFloat_GetParam_Params
{
	struct FDebugMenuNumericParam                      Param;                                                     // (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function CFramework.CFDebugMenuEventHandlerFloat.Get
struct UCFDebugMenuEventHandlerFloat_Get_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CFramework.CFDebugMenuEventHandlerText.Set
struct UCFDebugMenuEventHandlerText_Set_Params
{
	struct FText                                       Text;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function CFramework.CFDebugMenuEventHandlerText.Get
struct UCFDebugMenuEventHandlerText_Get_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function CFramework.CFDebugMenuEventHandlerCombo.Set
struct UCFDebugMenuEventHandlerCombo_Set_Params
{
	struct FString                                     selected;                                                  // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<SlateCore_ESelectInfo>                 Type;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CFramework.CFDebugMenuEventHandlerCombo.Build
struct UCFDebugMenuEventHandlerCombo_Build_Params
{
	TArray<struct FString>                             Options;                                                   // (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FString                                     current;                                                   // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CFramework.CFDebugMenuEventHandlerExample.SetFExample
struct UCFDebugMenuEventHandlerExample_SetFExample_Params
{
	float                                              F;                                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CFramework.CFDebugMenuEventHandlerExample.GetFParam
struct UCFDebugMenuEventHandlerExample_GetFParam_Params
{
	struct FDebugMenuNumericParam                      Param;                                                     // (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function CFramework.CFDebugMenuEventHandlerExample.GetFExample
struct UCFDebugMenuEventHandlerExample_GetFExample_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CFramework.DMDispLoadStatus.Tick
struct UDMDispLoadStatus_Tick_Params
{
	float                                              DeltaTime;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
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
	class UObject*                                     WorldContext;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CFramework.DMDispLoadStatus.OnAttachInput
struct UDMDispLoadStatus_OnAttachInput_Params
{
	class UObject*                                     WorldContext;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
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
	class USkeletalMeshComponent*                      SkeletalMeshComponent;                                     // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Enable;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CFramework.CFDynamicsBlueprintFunctionLibrary.SetAllEnable
struct UCFDynamicsBlueprintFunctionLibrary_SetAllEnable_Params
{
	bool                                               Enabled;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CFramework.CFDynamicsBlueprintFunctionLibrary.Reset
struct UCFDynamicsBlueprintFunctionLibrary_Reset_Params
{
	class USkeletalMeshComponent*                      SkeletalMeshComponent;                                     // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CFramework.CFDynamicsBlueprintFunctionLibrary.IsEnable
struct UCFDynamicsBlueprintFunctionLibrary_IsEnable_Params
{
	class USkeletalMeshComponent*                      SkeletalMeshComponent;                                     // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CFramework.CFDynamicsBlueprintFunctionLibrary.IsAllEnable
struct UCFDynamicsBlueprintFunctionLibrary_IsAllEnable_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CFramework.CFExtendRichTextBlock.SetText
struct UCFExtendRichTextBlock_SetText_Params
{
	struct FText                                       InText;                                                    // (Parm, NativeAccessSpecifierPublic)
};

// Function CFramework.CFExtendRichTextBlock.SetRevealedIndex
struct UCFExtendRichTextBlock_SetRevealedIndex_Params
{
	int                                                RevealedIndex;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CFramework.CFExtendRichTextBlock.SetIconToKeyConfigByName
struct UCFExtendRichTextBlock_SetIconToKeyConfigByName_Params
{
	struct FString                                     SearchConfigName;                                          // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     SetIconName;                                               // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CFramework.CFExtendRichTextBlock.SetIconToKeyConfigByIndex
struct UCFExtendRichTextBlock_SetIconToKeyConfigByIndex_Params
{
	int                                                SearchConfigIndex;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     SetIconName;                                               // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CFramework.CFExtendRichTextBlock.SetIconToKeyConfigAll
struct UCFExtendRichTextBlock_SetIconToKeyConfigAll_Params
{
	TArray<int>                                        IconIndexList;                                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function CFramework.CFExtendRichTextBlock.SetExtendRichTextIconData
struct UCFExtendRichTextBlock_SetExtendRichTextIconData_Params
{
	class UCFExtendRichTextIconData*                   InInputDisplayData;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CFramework.CFExtendRichTextBlock.GetText
struct UCFExtendRichTextBlock_GetText_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function CFramework.CFExtendRichTextBlock.AddDecorator
struct UCFExtendRichTextBlock_AddDecorator_Params
{
	class URichTextBlockDecorator*                     Decorator;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CFramework.CFGameOperatingEnvironment.IsConfirmAButton
struct UCFGameOperatingEnvironment_IsConfirmAButton_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CFramework.CFGameOperatingEnvironment.GetReplaceLanguagePath
struct UCFGameOperatingEnvironment_GetReplaceLanguagePath_Params
{
	struct FString                                     Path;                                                      // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<CFramework_ELanguageType>              InLanguageType;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsDefaultPlatform;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CFramework.CFGameOperatingEnvironment.GetReplaceEnvironmentPath
struct UCFGameOperatingEnvironment_GetReplaceEnvironmentPath_Params
{
	struct FString                                     Path;                                                      // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsDefaultPlatform;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CFramework.CFGameOperatingEnvironment.GetRegionType
struct UCFGameOperatingEnvironment_GetRegionType_Params
{
	TEnumAsByte<CFramework_ERegionType>                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CFramework.CFGameOperatingEnvironment.GetLanguageCode
struct UCFGameOperatingEnvironment_GetLanguageCode_Params
{
	TEnumAsByte<CFramework_ELanguageType>              Type;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CFramework.CFGameOperatingEnvironment.GetLangType
struct UCFGameOperatingEnvironment_GetLangType_Params
{
	TEnumAsByte<CFramework_ELanguageType>              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CFramework.CFMessageManager.GetSpeaker
struct UCFMessageManager_GetSpeaker_Params
{
	struct FString                                     speakerID;                                                 // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CFramework.CFMessageManager.GetNounParamFromName
struct UCFMessageManager_GetNounParamFromName_Params
{
	struct FName                                       StringID;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCFNounParamTableRow                        ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function CFramework.CFMessageManager.GetNounParam
struct UCFMessageManager_GetNounParam_Params
{
	struct FString                                     StringID;                                                  // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCFNounParamTableRow                        ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function CFramework.CFMessageManager.GetMessageDataFromName
struct UCFMessageManager_GetMessageDataFromName_Params
{
	struct FName                                       StringID;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCFMessageTableRow                          ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function CFramework.CFMessageManager.GetMessageData
struct UCFMessageManager_GetMessageData_Params
{
	struct FString                                     StringID;                                                  // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCFMessageTableRow                          ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function CFramework.CFParticleManager.OnSystemFinished
struct UCFParticleManager_OnSystemFinished_Params
{
	class UParticleSystemComponent*                    InFinishedComponent;                                       // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CFramework.CFParticleManager.GetParticleComponent
struct UCFParticleManager_GetParticleComponent_Params
{
	int                                                InUID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleSystemComponent*                    ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CFramework.CFParticleManager.DeactiveParticleComponent
struct UCFParticleManager_DeactiveParticleComponent_Params
{
	int                                                InUID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CFramework.CFRegistFontAtlasText.SetWriteFontAtlas
struct UCFRegistFontAtlasText_SetWriteFontAtlas_Params
{
	struct FString                                     FontFamilyPath;                                            // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     FontTextDataTablePath;                                     // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCanvasPanel*                                CanvasPanel;                                               // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsEnableBold;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CFramework.CFRegistFontAtlasText.ReleaseWriteFontAtlas
struct UCFRegistFontAtlasText_ReleaseWriteFontAtlas_Params
{
};

// Function CFramework.CFUIMultiLineTextBox.SetText
struct UCFUIMultiLineTextBox_SetText_Params
{
	struct FText                                       InText;                                                    // (Parm, NativeAccessSpecifierPublic)
};

// Function CFramework.CFUIMultiLineTextBox.GetText
struct UCFUIMultiLineTextBox_GetText_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function CFramework.CFUIMultiLineTextBox.AdaptTextSetting
struct UCFUIMultiLineTextBox_AdaptTextSetting_Params
{
};

// Function CFramework.CFUIUtil.SetNumberTextureTiling
struct UCFUIUtil_SetNumberTextureTiling_Params
{
	class UImage*                                      ImageIns;                                                  // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TilingNo;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CFramework.CFUIWidgetPathAnimManager.RegisterPathAnimation
struct UCFUIWidgetPathAnimManager_RegisterPathAnimation_Params
{
	class UWidget*                                     inTarget;                                                  // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCFUIWidgetPathAnimationParam               InParam;                                                   // (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function CFramework.CFUIWidgetPathAnimManager.InterruptPathAnimation
struct UCFUIWidgetPathAnimManager_InterruptPathAnimation_Params
{
	class UWidget*                                     inTarget;                                                  // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CFramework.CFUIWidgetPathAnimManager.GetCurrentAnimTime
struct UCFUIWidgetPathAnimManager_GetCurrentAnimTime_Params
{
	class UWidget*                                     inTarget;                                                  // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CFramework.CFUIXcmnMultiLineText.SetText
struct UCFUIXcmnMultiLineText_SetText_Params
{
	struct FText                                       InText;                                                    // (Parm, NativeAccessSpecifierPublic)
};

// Function CFramework.CFUIXcmnMultiLineText.GetText
struct UCFUIXcmnMultiLineText_GetText_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function CFramework.CFUIXcmnMultiLineText.AdaptTextSetting
struct UCFUIXcmnMultiLineText_AdaptTextSetting_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
