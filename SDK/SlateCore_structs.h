#pragma once

// Name: DBZKakarot, Version: 1.0.3

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Enums
//---------------------------------------------------------------------------

// Enum SlateCore.EWidgetClipping
enum class EWidgetClipping : uint8_t
{

};


// Enum SlateCore.ECheckBoxState
enum class ECheckBoxState : uint8_t
{

};


// Enum SlateCore.EFontLoadingPolicy
enum class EFontLoadingPolicy : uint8_t
{

};


// Enum SlateCore.EColorVisionDeficiency
enum class EColorVisionDeficiency : uint8_t
{

};



//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct SlateCore.Geometry
// 0x0038
struct FGeometry
{
	unsigned char                                      UnknownData00[0x38];                                      // 0x0000(0x0038) MISSED OFFSET
};

// ScriptStruct SlateCore.SlateBrush
// 0x0088
struct FSlateBrush
{
	unsigned char                                      UnknownData00[0x88];                                      // 0x0000(0x0088) MISSED OFFSET
};

// ScriptStruct SlateCore.SlateColor
// 0x0028
struct FSlateColor
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
};

// ScriptStruct SlateCore.Margin
// 0x0010
struct FMargin
{
	float                                              Left;                                                     // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0004(0x000C) MISSED OFFSET
};

// ScriptStruct SlateCore.InputEvent
// 0x0018
struct FInputEvent
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct SlateCore.PointerEvent
// 0x0058 (0x0070 - 0x0018)
struct FPointerEvent : public FInputEvent
{
	unsigned char                                      UnknownData00[0x58];                                      // 0x0018(0x0058) MISSED OFFSET
};

// ScriptStruct SlateCore.CharacterEvent
// 0x0008 (0x0020 - 0x0018)
struct FCharacterEvent : public FInputEvent
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0018(0x0008) MISSED OFFSET
};

// ScriptStruct SlateCore.NavigationEvent
// 0x0008 (0x0020 - 0x0018)
struct FNavigationEvent : public FInputEvent
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0018(0x0008) MISSED OFFSET
};

// ScriptStruct SlateCore.KeyEvent
// 0x0020 (0x0038 - 0x0018)
struct FKeyEvent : public FInputEvent
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0018(0x0020) MISSED OFFSET
};

// ScriptStruct SlateCore.AnalogInputEvent
// 0x0008 (0x0040 - 0x0038)
struct FAnalogInputEvent : public FKeyEvent
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET
};

// ScriptStruct SlateCore.SlateFontInfo
// 0x0058
struct FSlateFontInfo
{
	unsigned char                                      UnknownData00[0x58];                                      // 0x0000(0x0058) MISSED OFFSET
};

// ScriptStruct SlateCore.FontOutlineSettings
// 0x0028
struct FFontOutlineSettings
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
};

// ScriptStruct SlateCore.SlateWidgetStyle
// 0x0008
struct FSlateWidgetStyle
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct SlateCore.TableRowStyle
// 0x06B0 (0x06B8 - 0x0008)
struct FTableRowStyle : public FSlateWidgetStyle
{
	unsigned char                                      UnknownData00[0x6B0];                                     // 0x0008(0x06B0) MISSED OFFSET
};

// ScriptStruct SlateCore.ButtonStyle
// 0x0270 (0x0278 - 0x0008)
struct FButtonStyle : public FSlateWidgetStyle
{
	struct FSlateBrush                                 Normal;                                                   // 0x0008(0x0088) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x1E8];                                     // 0x0090(0x01E8) MISSED OFFSET
};

// ScriptStruct SlateCore.ComboButtonStyle
// 0x0398 (0x03A0 - 0x0008)
struct FComboButtonStyle : public FSlateWidgetStyle
{
	struct FButtonStyle                                ButtonStyle;                                              // 0x0008(0x0278) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x120];                                     // 0x0280(0x0120) MISSED OFFSET
};

// ScriptStruct SlateCore.ComboBoxStyle
// 0x03D0 (0x03D8 - 0x0008)
struct FComboBoxStyle : public FSlateWidgetStyle
{
	struct FComboButtonStyle                           ComboButtonStyle;                                         // 0x0008(0x03A0) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x30];                                      // 0x03A8(0x0030) MISSED OFFSET
};

// ScriptStruct SlateCore.SlateSound
// 0x0018
struct FSlateSound
{
	class UObject*                                     ResourceObject;                                           // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0008(0x0010) MISSED OFFSET
};

// ScriptStruct SlateCore.EditableTextStyle
// 0x0218 (0x0220 - 0x0008)
struct FEditableTextStyle : public FSlateWidgetStyle
{
	struct FSlateFontInfo                              Font;                                                     // 0x0008(0x0058) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x1C0];                                     // 0x0060(0x01C0) MISSED OFFSET
};

// ScriptStruct SlateCore.EditableTextBoxStyle
// 0x07F0 (0x07F8 - 0x0008)
struct FEditableTextBoxStyle : public FSlateWidgetStyle
{
	unsigned char                                      UnknownData00[0x7F0];                                     // 0x0008(0x07F0) MISSED OFFSET
};

// ScriptStruct SlateCore.ScrollBarStyle
// 0x04C8 (0x04D0 - 0x0008)
struct FScrollBarStyle : public FSlateWidgetStyle
{
	unsigned char                                      UnknownData00[0x4C8];                                     // 0x0008(0x04C8) MISSED OFFSET
};

// ScriptStruct SlateCore.TextBlockStyle
// 0x01E0 (0x01E8 - 0x0008)
struct FTextBlockStyle : public FSlateWidgetStyle
{
	struct FSlateFontInfo                              Font;                                                     // 0x0008(0x0058) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x188];                                     // 0x0060(0x0188) MISSED OFFSET
};

// ScriptStruct SlateCore.SpinBoxStyle
// 0x02E0 (0x02E8 - 0x0008)
struct FSpinBoxStyle : public FSlateWidgetStyle
{
	unsigned char                                      UnknownData00[0x2E0];                                     // 0x0008(0x02E0) MISSED OFFSET
};

// ScriptStruct SlateCore.FocusEvent
// 0x0008
struct FFocusEvent
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct SlateCore.MotionEvent
// 0x0030 (0x0048 - 0x0018)
struct FMotionEvent : public FInputEvent
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0018(0x0030) MISSED OFFSET
};

// ScriptStruct SlateCore.CompositeFont
// 0x0038
struct FCompositeFont
{
	unsigned char                                      UnknownData00[0x38];                                      // 0x0000(0x0038) MISSED OFFSET
};

// ScriptStruct SlateCore.Typeface
// 0x0010
struct FTypeface
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct SlateCore.CompositeFallbackFont
// 0x0018
struct FCompositeFallbackFont
{
	struct FTypeface                                   Typeface;                                                 // 0x0000(0x0010)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0010(0x0008) MISSED OFFSET
};

// ScriptStruct SlateCore.FontData
// 0x0020
struct FFontData
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct SlateCore.TypefaceEntry
// 0x0028
struct FTypefaceEntry
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FFontData                                   Font;                                                     // 0x0008(0x0020)
};

// ScriptStruct SlateCore.CompositeSubFont
// 0x0020 (0x0038 - 0x0018)
struct FCompositeSubFont : public FCompositeFallbackFont
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0018(0x0020) MISSED OFFSET
};

// ScriptStruct SlateCore.CaptureLostEvent
// 0x0008
struct FCaptureLostEvent
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct SlateCore.WindowStyle
// 0x0FD0 (0x0FD8 - 0x0008)
struct FWindowStyle : public FSlateWidgetStyle
{
	unsigned char                                      UnknownData00[0xFD0];                                     // 0x0008(0x0FD0) MISSED OFFSET
};

// ScriptStruct SlateCore.ScrollBorderStyle
// 0x0110 (0x0118 - 0x0008)
struct FScrollBorderStyle : public FSlateWidgetStyle
{
	unsigned char                                      UnknownData00[0x110];                                     // 0x0008(0x0110) MISSED OFFSET
};

// ScriptStruct SlateCore.ScrollBoxStyle
// 0x0220 (0x0228 - 0x0008)
struct FScrollBoxStyle : public FSlateWidgetStyle
{
	unsigned char                                      UnknownData00[0x220];                                     // 0x0008(0x0220) MISSED OFFSET
};

// ScriptStruct SlateCore.DockTabStyle
// 0x06F8 (0x0700 - 0x0008)
struct FDockTabStyle : public FSlateWidgetStyle
{
	unsigned char                                      UnknownData00[0x6F8];                                     // 0x0008(0x06F8) MISSED OFFSET
};

// ScriptStruct SlateCore.HeaderRowStyle
// 0x0B68 (0x0B70 - 0x0008)
struct FHeaderRowStyle : public FSlateWidgetStyle
{
	unsigned char                                      UnknownData00[0xB68];                                     // 0x0008(0x0B68) MISSED OFFSET
};

// ScriptStruct SlateCore.SplitterStyle
// 0x0110 (0x0118 - 0x0008)
struct FSplitterStyle : public FSlateWidgetStyle
{
	unsigned char                                      UnknownData00[0x110];                                     // 0x0008(0x0110) MISSED OFFSET
};

// ScriptStruct SlateCore.TableColumnHeaderStyle
// 0x04C8 (0x04D0 - 0x0008)
struct FTableColumnHeaderStyle : public FSlateWidgetStyle
{
	unsigned char                                      UnknownData00[0x4C8];                                     // 0x0008(0x04C8) MISSED OFFSET
};

// ScriptStruct SlateCore.InlineTextImageStyle
// 0x0090 (0x0098 - 0x0008)
struct FInlineTextImageStyle : public FSlateWidgetStyle
{
	struct FSlateBrush                                 Image;                                                    // 0x0008(0x0088) (Edit)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0090(0x0008) MISSED OFFSET
};

// ScriptStruct SlateCore.SliderStyle
// 0x0338 (0x0340 - 0x0008)
struct FSliderStyle : public FSlateWidgetStyle
{
	unsigned char                                      UnknownData00[0x338];                                     // 0x0008(0x0338) MISSED OFFSET
};

// ScriptStruct SlateCore.VolumeControlStyle
// 0x05E8 (0x05F0 - 0x0008)
struct FVolumeControlStyle : public FSlateWidgetStyle
{
	struct FSliderStyle                                SliderStyle;                                              // 0x0008(0x0340) (Edit)
	unsigned char                                      UnknownData00[0x2A8];                                     // 0x0348(0x02A8) MISSED OFFSET
};

// ScriptStruct SlateCore.SearchBoxStyle
// 0x0A88 (0x0A90 - 0x0008)
struct FSearchBoxStyle : public FSlateWidgetStyle
{
	unsigned char                                      UnknownData00[0xA88];                                     // 0x0008(0x0A88) MISSED OFFSET
};

// ScriptStruct SlateCore.ExpandableAreaStyle
// 0x0118 (0x0120 - 0x0008)
struct FExpandableAreaStyle : public FSlateWidgetStyle
{
	unsigned char                                      UnknownData00[0x118];                                     // 0x0008(0x0118) MISSED OFFSET
};

// ScriptStruct SlateCore.ProgressBarStyle
// 0x0198 (0x01A0 - 0x0008)
struct FProgressBarStyle : public FSlateWidgetStyle
{
	unsigned char                                      UnknownData00[0x198];                                     // 0x0008(0x0198) MISSED OFFSET
};

// ScriptStruct SlateCore.InlineEditableTextBlockStyle
// 0x09E0 (0x09E8 - 0x0008)
struct FInlineEditableTextBlockStyle : public FSlateWidgetStyle
{
	struct FEditableTextBoxStyle                       EditableTextBoxStyle;                                     // 0x0008(0x07F8) (Edit, BlueprintVisible)
	struct FTextBlockStyle                             TextStyle;                                                // 0x0800(0x01E8) (Edit, BlueprintVisible)
};

// ScriptStruct SlateCore.HyperlinkStyle
// 0x0470 (0x0478 - 0x0008)
struct FHyperlinkStyle : public FSlateWidgetStyle
{
	unsigned char                                      UnknownData00[0x470];                                     // 0x0008(0x0470) MISSED OFFSET
};

// ScriptStruct SlateCore.CheckBoxStyle
// 0x0578 (0x0580 - 0x0008)
struct FCheckBoxStyle : public FSlateWidgetStyle
{
	unsigned char                                      UnknownData00[0x578];                                     // 0x0008(0x0578) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
