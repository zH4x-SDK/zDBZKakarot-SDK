#pragma once

// Name: DBZKakarot, Version: 1.0.3

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct UMG.ShapedTextOptions
// 0x0003
struct FShapedTextOptions
{
	unsigned char                                      UnknownData00[0x3];                                       // 0x0000(0x0003) MISSED OFFSET
};

// ScriptStruct UMG.WidgetNavigationData
// 0x0028
struct FWidgetNavigationData
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
};

// ScriptStruct UMG.EventReply
// 0x00B8
struct FEventReply
{
	unsigned char                                      UnknownData00[0xB8];                                      // 0x0000(0x00B8) MISSED OFFSET
};

// ScriptStruct UMG.WidgetTransform
// 0x001C
struct FWidgetTransform
{
	struct FVector2D                                   Translation;                                              // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x14];                                      // 0x0008(0x0014) MISSED OFFSET
};

// ScriptStruct UMG.PaintContext
// 0x0030
struct FPaintContext
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0000(0x0030) MISSED OFFSET
};

// ScriptStruct UMG.NamedSlotBinding
// 0x0010
struct FNamedSlotBinding
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct UMG.AnchorData
// 0x0028
struct FAnchorData
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
};

// ScriptStruct UMG.DynamicPropertyPath
// 0x0000 (0x0028 - 0x0028)
struct FDynamicPropertyPath : public FCachedPropertyPath
{

};

// ScriptStruct UMG.MovieScene2DTransformMask
// 0x0004
struct FMovieScene2DTransformMask
{
	uint32_t                                           Mask;                                                     // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct UMG.MovieScene2DTransformSectionTemplate
// 0x0468 (0x04B0 - 0x0048)
struct FMovieScene2DTransformSectionTemplate : public FMovieScenePropertySectionTemplate
{
	struct FMovieSceneFloatChannel                     Translation[0x2];                                         // 0x0048(0x00A0)
	struct FMovieSceneFloatChannel                     Rotation;                                                 // 0x0188(0x00A0)
	unsigned char                                      UnknownData00[0x288];                                     // 0x0228(0x0288) MISSED OFFSET
};

// ScriptStruct UMG.MovieSceneMarginSectionTemplate
// 0x0288 (0x02D0 - 0x0048)
struct FMovieSceneMarginSectionTemplate : public FMovieScenePropertySectionTemplate
{
	unsigned char                                      UnknownData00[0x288];                                     // 0x0048(0x0288) MISSED OFFSET
};

// ScriptStruct UMG.MovieSceneWidgetMaterialSectionTemplate
// 0x0010 (0x0060 - 0x0050)
struct FMovieSceneWidgetMaterialSectionTemplate : public FMovieSceneParameterSectionTemplate
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0050(0x0010) MISSED OFFSET
};

// ScriptStruct UMG.RichTextStyleRow
// 0x01E8 (0x01F0 - 0x0008)
struct FRichTextStyleRow : public FTableRowBase
{
	struct FTextBlockStyle                             TextStyle;                                                // 0x0008(0x01E8) (Edit)
};

// ScriptStruct UMG.RichImageRow
// 0x0088 (0x0090 - 0x0008)
struct FRichImageRow : public FTableRowBase
{
	struct FSlateBrush                                 Brush;                                                    // 0x0008(0x0088) (Edit)
};

// ScriptStruct UMG.SlateMeshVertex
// 0x003C
struct FSlateMeshVertex
{
	struct FVector2D                                   Position;                                                 // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FColor                                      Color;                                                    // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x30];                                      // 0x000C(0x0030) MISSED OFFSET
};

// ScriptStruct UMG.SlateChildSize
// 0x0008
struct FSlateChildSize
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct UMG.WidgetAnimationBinding
// 0x0028
struct FWidgetAnimationBinding
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
};

// ScriptStruct UMG.DelegateRuntimeBinding
// 0x0050
struct FDelegateRuntimeBinding
{
	unsigned char                                      UnknownData00[0x50];                                      // 0x0000(0x0050) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
