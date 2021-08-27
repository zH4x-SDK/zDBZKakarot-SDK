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

// Function UMG.ContentWidget.SetContent
struct UContentWidget_SetContent_Params
{
};

// Function UMG.ContentWidget.GetContentSlot
struct UContentWidget_GetContentSlot_Params
{
};

// Function UMG.ContentWidget.GetContent
struct UContentWidget_GetContent_Params
{
};

// Function UMG.BoolBinding.GetValue
struct UBoolBinding_GetValue_Params
{
};

// Function UMG.BrushBinding.GetValue
struct UBrushBinding_GetValue_Params
{
};

// Function UMG.CanvasPanel.AddChildToCanvas
struct UCanvasPanel_AddChildToCanvas_Params
{
};

// Function UMG.CheckedStateBinding.GetValue
struct UCheckedStateBinding_GetValue_Params
{
};

// Function UMG.ColorBinding.GetSlateValue
struct UColorBinding_GetSlateValue_Params
{
};

// Function UMG.ColorBinding.GetLinearValue
struct UColorBinding_GetLinearValue_Params
{
};

// Function UMG.FloatBinding.GetValue
struct UFloatBinding_GetValue_Params
{
};

// Function UMG.HorizontalBox.AddChildToHorizontalBox
struct UHorizontalBox_AddChildToHorizontalBox_Params
{
};

// Function UMG.Int32Binding.GetValue
struct UInt32Binding_GetValue_Params
{
};

// Function UMG.NativeUserListEntry.IsListItemSelected
struct UNativeUserListEntry_IsListItemSelected_Params
{
};

// Function UMG.NativeUserListEntry.IsListItemExpanded
struct UNativeUserListEntry_IsListItemExpanded_Params
{
};

// Function UMG.UserListEntry.BP_OnItemSelectionChanged
struct UUserListEntry_BP_OnItemSelectionChanged_Params
{
};

// Function UMG.UserListEntry.BP_OnItemExpansionChanged
struct UUserListEntry_BP_OnItemExpansionChanged_Params
{
};

// Function UMG.UserListEntry.BP_OnEntryReleased
struct UUserListEntry_BP_OnEntryReleased_Params
{
};

// Function UMG.UserObjectListEntry.OnListItemObjectSet
struct UUserObjectListEntry_OnListItemObjectSet_Params
{
};

// Function UMG.UserObjectListEntry.GetListItemObject
struct UUserObjectListEntry_GetListItemObject_Params
{
};

// Function UMG.MouseCursorBinding.GetValue
struct UMouseCursorBinding_GetValue_Params
{
};

// Function UMG.Overlay.AddChildToOverlay
struct UOverlay_AddChildToOverlay_Params
{
};

// Function UMG.SlateBlueprintLibrary.ScreenToWidgetLocal
struct USlateBlueprintLibrary_ScreenToWidgetLocal_Params
{
};

// Function UMG.SlateBlueprintLibrary.ScreenToWidgetAbsolute
struct USlateBlueprintLibrary_ScreenToWidgetAbsolute_Params
{
};

// Function UMG.SlateBlueprintLibrary.ScreenToViewport
struct USlateBlueprintLibrary_ScreenToViewport_Params
{
};

// Function UMG.SlateBlueprintLibrary.LocalToViewport
struct USlateBlueprintLibrary_LocalToViewport_Params
{
};

// Function UMG.SlateBlueprintLibrary.LocalToAbsolute
struct USlateBlueprintLibrary_LocalToAbsolute_Params
{
	struct FGeometry                                   Geometry;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function UMG.SlateBlueprintLibrary.IsUnderLocation
struct USlateBlueprintLibrary_IsUnderLocation_Params
{
	struct FGeometry                                   Geometry;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function UMG.SlateBlueprintLibrary.GetLocalSize
struct USlateBlueprintLibrary_GetLocalSize_Params
{
	struct FGeometry                                   Geometry;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function UMG.SlateBlueprintLibrary.GetAbsoluteSize
struct USlateBlueprintLibrary_GetAbsoluteSize_Params
{
	struct FGeometry                                   Geometry;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function UMG.SlateBlueprintLibrary.EqualEqual_SlateBrush
struct USlateBlueprintLibrary_EqualEqual_SlateBrush_Params
{
	struct FSlateBrush                                 A;                                                        // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FSlateBrush                                 B;                                                        // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function UMG.SlateBlueprintLibrary.AbsoluteToViewport
struct USlateBlueprintLibrary_AbsoluteToViewport_Params
{
};

// Function UMG.SlateBlueprintLibrary.AbsoluteToLocal
struct USlateBlueprintLibrary_AbsoluteToLocal_Params
{
	struct FGeometry                                   Geometry;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function UMG.Spacer.SetSize
struct USpacer_SetSize_Params
{
	struct FVector2D                                   InSize;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.TextBinding.GetTextValue
struct UTextBinding_GetTextValue_Params
{
};

// Function UMG.TextBinding.GetStringValue
struct UTextBinding_GetStringValue_Params
{
};

// Function UMG.VerticalBox.AddChildToVerticalBox
struct UVerticalBox_AddChildToVerticalBox_Params
{
};

// Function UMG.VisibilityBinding.GetValue
struct UVisibilityBinding_GetValue_Params
{
};

// Function UMG.WidgetBinding.GetValue
struct UWidgetBinding_GetValue_Params
{
};

// Function UMG.WidgetBlueprintLibrary.UnlockMouse
struct UWidgetBlueprintLibrary_UnlockMouse_Params
{
};

// Function UMG.WidgetBlueprintLibrary.Unhandled
struct UWidgetBlueprintLibrary_Unhandled_Params
{
};

// Function UMG.WidgetBlueprintLibrary.SetWindowTitleBarState
struct UWidgetBlueprintLibrary_SetWindowTitleBarState_Params
{
};

// Function UMG.WidgetBlueprintLibrary.SetWindowTitleBarOnCloseClickedDelegate
struct UWidgetBlueprintLibrary_SetWindowTitleBarOnCloseClickedDelegate_Params
{
};

// Function UMG.WidgetBlueprintLibrary.SetWindowTitleBarCloseButtonActive
struct UWidgetBlueprintLibrary_SetWindowTitleBarCloseButtonActive_Params
{
};

// Function UMG.WidgetBlueprintLibrary.SetUserFocus
struct UWidgetBlueprintLibrary_SetUserFocus_Params
{
};

// Function UMG.WidgetBlueprintLibrary.SetMousePosition
struct UWidgetBlueprintLibrary_SetMousePosition_Params
{
};

// Function UMG.WidgetBlueprintLibrary.SetInputMode_UIOnlyEx
struct UWidgetBlueprintLibrary_SetInputMode_UIOnlyEx_Params
{
	class APlayerController*                           PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.WidgetBlueprintLibrary.SetInputMode_UIOnly
struct UWidgetBlueprintLibrary_SetInputMode_UIOnly_Params
{
	class APlayerController*                           Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.WidgetBlueprintLibrary.SetInputMode_GameOnly
struct UWidgetBlueprintLibrary_SetInputMode_GameOnly_Params
{
	class APlayerController*                           PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.WidgetBlueprintLibrary.SetInputMode_GameAndUIEx
struct UWidgetBlueprintLibrary_SetInputMode_GameAndUIEx_Params
{
	class APlayerController*                           PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.WidgetBlueprintLibrary.SetInputMode_GameAndUI
struct UWidgetBlueprintLibrary_SetInputMode_GameAndUI_Params
{
	class APlayerController*                           Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.WidgetBlueprintLibrary.SetHardwareCursor
struct UWidgetBlueprintLibrary_SetHardwareCursor_Params
{
};

// Function UMG.WidgetBlueprintLibrary.SetFocusToGameViewport
struct UWidgetBlueprintLibrary_SetFocusToGameViewport_Params
{
};

// Function UMG.WidgetBlueprintLibrary.SetBrushResourceToTexture
struct UWidgetBlueprintLibrary_SetBrushResourceToTexture_Params
{
	struct FSlateBrush                                 Brush;                                                    // (Parm, OutParm, ReferenceParm)
	class UTexture2D*                                  Texture;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.WidgetBlueprintLibrary.SetBrushResourceToMaterial
struct UWidgetBlueprintLibrary_SetBrushResourceToMaterial_Params
{
	struct FSlateBrush                                 Brush;                                                    // (Parm, OutParm, ReferenceParm)
	class UMaterialInterface*                          Material;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.WidgetBlueprintLibrary.RestorePreviousWindowTitleBarState
struct UWidgetBlueprintLibrary_RestorePreviousWindowTitleBarState_Params
{
};

// Function UMG.WidgetBlueprintLibrary.ReleaseMouseCapture
struct UWidgetBlueprintLibrary_ReleaseMouseCapture_Params
{
};

// Function UMG.WidgetBlueprintLibrary.ReleaseJoystickCapture
struct UWidgetBlueprintLibrary_ReleaseJoystickCapture_Params
{
};

// Function UMG.WidgetLayoutLibrary.SlotAsVerticalBoxSlot
struct UWidgetLayoutLibrary_SlotAsVerticalBoxSlot_Params
{
	class UWidget*                                     Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function UMG.WidgetLayoutLibrary.SlotAsUniformGridSlot
struct UWidgetLayoutLibrary_SlotAsUniformGridSlot_Params
{
	class UWidget*                                     Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function UMG.WidgetLayoutLibrary.SlotAsOverlaySlot
struct UWidgetLayoutLibrary_SlotAsOverlaySlot_Params
{
	class UWidget*                                     Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function UMG.WidgetLayoutLibrary.SlotAsHorizontalBoxSlot
struct UWidgetLayoutLibrary_SlotAsHorizontalBoxSlot_Params
{
	class UWidget*                                     Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function UMG.WidgetLayoutLibrary.SlotAsGridSlot
struct UWidgetLayoutLibrary_SlotAsGridSlot_Params
{
	class UWidget*                                     Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function UMG.WidgetLayoutLibrary.SlotAsCanvasSlot
struct UWidgetLayoutLibrary_SlotAsCanvasSlot_Params
{
	class UWidget*                                     Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function UMG.WidgetLayoutLibrary.SlotAsBorderSlot
struct UWidgetLayoutLibrary_SlotAsBorderSlot_Params
{
	class UWidget*                                     Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function UMG.WidgetLayoutLibrary.RemoveAllWidgets
struct UWidgetLayoutLibrary_RemoveAllWidgets_Params
{
};

// Function UMG.WidgetLayoutLibrary.ProjectWorldLocationToWidgetPosition
struct UWidgetLayoutLibrary_ProjectWorldLocationToWidgetPosition_Params
{
	class APlayerController*                           PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     WorldLocation;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.WidgetLayoutLibrary.GetViewportWidgetGeometry
struct UWidgetLayoutLibrary_GetViewportWidgetGeometry_Params
{
};

// Function UMG.WidgetLayoutLibrary.GetViewportSize
struct UWidgetLayoutLibrary_GetViewportSize_Params
{
};

// Function UMG.WidgetLayoutLibrary.GetViewportScale
struct UWidgetLayoutLibrary_GetViewportScale_Params
{
};

// Function UMG.WidgetLayoutLibrary.GetPlayerScreenWidgetGeometry
struct UWidgetLayoutLibrary_GetPlayerScreenWidgetGeometry_Params
{
	class APlayerController*                           PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.WidgetLayoutLibrary.GetMousePositionScaledByDPI
struct UWidgetLayoutLibrary_GetMousePositionScaledByDPI_Params
{
	class APlayerController*                           Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.WidgetLayoutLibrary.GetMousePositionOnViewport
struct UWidgetLayoutLibrary_GetMousePositionOnViewport_Params
{
};

// Function UMG.WidgetLayoutLibrary.GetMousePositionOnPlatform
struct UWidgetLayoutLibrary_GetMousePositionOnPlatform_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
