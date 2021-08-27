#pragma once

// Name: DBZKakarot, Version: 1.0.3

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// Class UMG.Visual
// 0x0000 (0x0028 - 0x0028)
class UVisual : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.Visual");
		return ptr;
	}

};


// Class UMG.Widget
// 0x00D8 (0x0100 - 0x0028)
class UWidget : public UVisual
{
public:
	unsigned char                                      UnknownData00[0xD8];                                      // 0x0028(0x00D8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.Widget");
		return ptr;
	}

};


// Class UMG.UserWidget
// 0x0108 (0x0208 - 0x0100)
class UUserWidget : public UWidget
{
public:
	unsigned char                                      UnknownData00[0x108];                                     // 0x0100(0x0108) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.UserWidget");
		return ptr;
	}

};


// Class UMG.Image
// 0x0100 (0x0200 - 0x0100)
class UImage : public UWidget
{
public:
	struct FSlateBrush                                 Brush;                                                    // 0x0100(0x0088) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData00[0x78];                                      // 0x0188(0x0078) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.Image");
		return ptr;
	}

};


// Class UMG.TextLayoutWidget
// 0x0020 (0x0120 - 0x0100)
class UTextLayoutWidget : public UWidget
{
public:
	struct FShapedTextOptions                          ShapedTextOptions;                                        // 0x0100(0x0003) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData00[0x1D];                                      // 0x0103(0x001D) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.TextLayoutWidget");
		return ptr;
	}

};


// Class UMG.RichTextBlockDecorator
// 0x0000 (0x0028 - 0x0028)
class URichTextBlockDecorator : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.RichTextBlockDecorator");
		return ptr;
	}

};


// Class UMG.RichTextBlock
// 0x0248 (0x0368 - 0x0120)
class URichTextBlock : public UTextLayoutWidget
{
public:
	struct FText                                       Text;                                                     // 0x0120(0x0018) (Edit)
	unsigned char                                      UnknownData00[0x230];                                     // 0x0138(0x0230) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.RichTextBlock");
		return ptr;
	}

};


// Class UMG.AsyncTaskDownloadImage
// 0x0020 (0x0050 - 0x0030)
class UAsyncTaskDownloadImage : public UBlueprintAsyncActionBase
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0030(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.AsyncTaskDownloadImage");
		return ptr;
	}

};


// Class UMG.PanelWidget
// 0x0018 (0x0118 - 0x0100)
class UPanelWidget : public UWidget
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0100(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.PanelWidget");
		return ptr;
	}

};


// Class UMG.ContentWidget
// 0x0000 (0x0118 - 0x0118)
class UContentWidget : public UPanelWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.ContentWidget");
		return ptr;
	}


	void SetContent();
	void GetContentSlot();
	void GetContent();
};


// Class UMG.BackgroundBlur
// 0x00B8 (0x01D0 - 0x0118)
class UBackgroundBlur : public UContentWidget
{
public:
	unsigned char                                      UnknownData00[0xB8];                                      // 0x0118(0x00B8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.BackgroundBlur");
		return ptr;
	}

};


// Class UMG.PanelSlot
// 0x0010 (0x0038 - 0x0028)
class UPanelSlot : public UVisual
{
public:
	class UPanelWidget*                                Parent;                                                   // 0x0028(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0030(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.PanelSlot");
		return ptr;
	}

};


// Class UMG.BackgroundBlurSlot
// 0x0028 (0x0060 - 0x0038)
class UBackgroundBlurSlot : public UPanelSlot
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0038(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.BackgroundBlurSlot");
		return ptr;
	}

};


// Class UMG.PropertyBinding
// 0x0038 (0x0060 - 0x0028)
class UPropertyBinding : public UObject
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0028(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.PropertyBinding");
		return ptr;
	}

};


// Class UMG.BoolBinding
// 0x0000 (0x0060 - 0x0060)
class UBoolBinding : public UPropertyBinding
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.BoolBinding");
		return ptr;
	}


	void GetValue();
};


// Class UMG.Border
// 0x0148 (0x0260 - 0x0118)
class UBorder : public UContentWidget
{
public:
	unsigned char                                      UnknownData00[0x148];                                     // 0x0118(0x0148) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.Border");
		return ptr;
	}

};


// Class UMG.BorderSlot
// 0x0028 (0x0060 - 0x0038)
class UBorderSlot : public UPanelSlot
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0038(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.BorderSlot");
		return ptr;
	}

};


// Class UMG.BrushBinding
// 0x0008 (0x0068 - 0x0060)
class UBrushBinding : public UPropertyBinding
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0060(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.BrushBinding");
		return ptr;
	}


	void GetValue();
};


// Class UMG.Button
// 0x0308 (0x0420 - 0x0118)
class UButton : public UContentWidget
{
public:
	unsigned char                                      UnknownData00[0x308];                                     // 0x0118(0x0308) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.Button");
		return ptr;
	}

};


// Class UMG.ButtonSlot
// 0x0028 (0x0060 - 0x0038)
class UButtonSlot : public UPanelSlot
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0038(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.ButtonSlot");
		return ptr;
	}

};


// Class UMG.CanvasPanel
// 0x0010 (0x0128 - 0x0118)
class UCanvasPanel : public UPanelWidget
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0118(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.CanvasPanel");
		return ptr;
	}


	void AddChildToCanvas();
};


// Class UMG.CanvasPanelSlot
// 0x0038 (0x0070 - 0x0038)
class UCanvasPanelSlot : public UPanelSlot
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0038(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.CanvasPanelSlot");
		return ptr;
	}

};


// Class UMG.CheckBox
// 0x0650 (0x0768 - 0x0118)
class UCheckBox : public UContentWidget
{
public:
	unsigned char                                      UnknownData00[0x650];                                     // 0x0118(0x0650) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.CheckBox");
		return ptr;
	}

};


// Class UMG.CheckedStateBinding
// 0x0008 (0x0068 - 0x0060)
class UCheckedStateBinding : public UPropertyBinding
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0060(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.CheckedStateBinding");
		return ptr;
	}


	void GetValue();
};


// Class UMG.CircularThrobber
// 0x00B8 (0x01B8 - 0x0100)
class UCircularThrobber : public UWidget
{
public:
	unsigned char                                      UnknownData00[0xB8];                                      // 0x0100(0x00B8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.CircularThrobber");
		return ptr;
	}

};


// Class UMG.ColorBinding
// 0x0008 (0x0068 - 0x0060)
class UColorBinding : public UPropertyBinding
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0060(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.ColorBinding");
		return ptr;
	}


	void GetSlateValue();
	void GetLinearValue();
};


// Class UMG.ComboBox
// 0x0038 (0x0138 - 0x0100)
class UComboBox : public UWidget
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0100(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.ComboBox");
		return ptr;
	}

};


// Class UMG.ComboBoxString
// 0x0BC0 (0x0CC0 - 0x0100)
class UComboBoxString : public UWidget
{
public:
	unsigned char                                      UnknownData00[0xBC0];                                     // 0x0100(0x0BC0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.ComboBoxString");
		return ptr;
	}

};


// Class UMG.DragDropOperation
// 0x0060 (0x0088 - 0x0028)
class UDragDropOperation : public UObject
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0028(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.DragDropOperation");
		return ptr;
	}

};


// Class UMG.DynamicEntryBox
// 0x00D0 (0x01D0 - 0x0100)
class UDynamicEntryBox : public UWidget
{
public:
	unsigned char                                      UnknownData00[0xD0];                                      // 0x0100(0x00D0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.DynamicEntryBox");
		return ptr;
	}

};


// Class UMG.EditableText
// 0x0358 (0x0458 - 0x0100)
class UEditableText : public UWidget
{
public:
	struct FText                                       Text;                                                     // 0x0100(0x0018) (Edit)
	unsigned char                                      UnknownData00[0x340];                                     // 0x0118(0x0340) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.EditableText");
		return ptr;
	}

};


// Class UMG.EditableTextBox
// 0x0930 (0x0A30 - 0x0100)
class UEditableTextBox : public UWidget
{
public:
	struct FText                                       Text;                                                     // 0x0100(0x0018) (Edit)
	unsigned char                                      UnknownData00[0x918];                                     // 0x0118(0x0918) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.EditableTextBox");
		return ptr;
	}

};


// Class UMG.ExpandableArea
// 0x0230 (0x0330 - 0x0100)
class UExpandableArea : public UWidget
{
public:
	unsigned char                                      UnknownData00[0x230];                                     // 0x0100(0x0230) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.ExpandableArea");
		return ptr;
	}

};


// Class UMG.FloatBinding
// 0x0000 (0x0060 - 0x0060)
class UFloatBinding : public UPropertyBinding
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.FloatBinding");
		return ptr;
	}


	void GetValue();
};


// Class UMG.GridPanel
// 0x0030 (0x0148 - 0x0118)
class UGridPanel : public UPanelWidget
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0118(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.GridPanel");
		return ptr;
	}

};


// Class UMG.GridSlot
// 0x0038 (0x0070 - 0x0038)
class UGridSlot : public UPanelSlot
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0038(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.GridSlot");
		return ptr;
	}

};


// Class UMG.HorizontalBox
// 0x0010 (0x0128 - 0x0118)
class UHorizontalBox : public UPanelWidget
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0118(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.HorizontalBox");
		return ptr;
	}


	void AddChildToHorizontalBox();
};


// Class UMG.HorizontalBoxSlot
// 0x0028 (0x0060 - 0x0038)
class UHorizontalBoxSlot : public UPanelSlot
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0038(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.HorizontalBoxSlot");
		return ptr;
	}

};


// Class UMG.InputKeySelector
// 0x0570 (0x0670 - 0x0100)
class UInputKeySelector : public UWidget
{
public:
	unsigned char                                      UnknownData00[0x570];                                     // 0x0100(0x0570) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.InputKeySelector");
		return ptr;
	}

};


// Class UMG.Int32Binding
// 0x0000 (0x0060 - 0x0060)
class UInt32Binding : public UPropertyBinding
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.Int32Binding");
		return ptr;
	}


	void GetValue();
};


// Class UMG.InvalidationBox
// 0x0018 (0x0130 - 0x0118)
class UInvalidationBox : public UContentWidget
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0118(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.InvalidationBox");
		return ptr;
	}

};


// Class UMG.NativeUserListEntry
// 0x0000 (0x0028 - 0x0028)
class UNativeUserListEntry : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.NativeUserListEntry");
		return ptr;
	}


	void IsListItemSelected();
	void IsListItemExpanded();
};


// Class UMG.UserListEntry
// 0x0000 (0x0028 - 0x0028)
class UUserListEntry : public UNativeUserListEntry
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.UserListEntry");
		return ptr;
	}


	void BP_OnItemSelectionChanged();
	void BP_OnItemExpansionChanged();
	void BP_OnEntryReleased();
};


// Class UMG.UserObjectListEntry
// 0x0000 (0x0028 - 0x0028)
class UUserObjectListEntry : public UUserListEntry
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.UserObjectListEntry");
		return ptr;
	}


	void OnListItemObjectSet();
	void GetListItemObject();
};


// Class UMG.ListViewBase
// 0x0108 (0x0208 - 0x0100)
class UListViewBase : public UWidget
{
public:
	unsigned char                                      UnknownData00[0x108];                                     // 0x0100(0x0108) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.ListViewBase");
		return ptr;
	}

};


// Class UMG.ListView
// 0x0120 (0x0328 - 0x0208)
class UListView : public UListViewBase
{
public:
	unsigned char                                      UnknownData00[0x120];                                     // 0x0208(0x0120) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.ListView");
		return ptr;
	}

};


// Class UMG.ListViewDesignerPreviewItem
// 0x0000 (0x0028 - 0x0028)
class UListViewDesignerPreviewItem : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.ListViewDesignerPreviewItem");
		return ptr;
	}

};


// Class UMG.MenuAnchor
// 0x0040 (0x0158 - 0x0118)
class UMenuAnchor : public UContentWidget
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0118(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.MenuAnchor");
		return ptr;
	}

};


// Class UMG.MouseCursorBinding
// 0x0000 (0x0060 - 0x0060)
class UMouseCursorBinding : public UPropertyBinding
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.MouseCursorBinding");
		return ptr;
	}


	void GetValue();
};


// Class UMG.MovieScene2DTransformSection
// 0x0470 (0x0550 - 0x00E0)
class UMovieScene2DTransformSection : public UMovieSceneSection
{
public:
	unsigned char                                      UnknownData00[0x470];                                     // 0x00E0(0x0470) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.MovieScene2DTransformSection");
		return ptr;
	}

};


// Class UMG.MovieScene2DTransformTrack
// 0x0000 (0x0080 - 0x0080)
class UMovieScene2DTransformTrack : public UMovieScenePropertyTrack
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.MovieScene2DTransformTrack");
		return ptr;
	}

};


// Class UMG.MovieSceneMarginSection
// 0x0280 (0x0360 - 0x00E0)
class UMovieSceneMarginSection : public UMovieSceneSection
{
public:
	unsigned char                                      UnknownData00[0x280];                                     // 0x00E0(0x0280) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.MovieSceneMarginSection");
		return ptr;
	}

};


// Class UMG.MovieSceneMarginTrack
// 0x0000 (0x0080 - 0x0080)
class UMovieSceneMarginTrack : public UMovieScenePropertyTrack
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.MovieSceneMarginTrack");
		return ptr;
	}

};


// Class UMG.MovieSceneWidgetMaterialTrack
// 0x0018 (0x0080 - 0x0068)
class UMovieSceneWidgetMaterialTrack : public UMovieSceneMaterialTrack
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0068(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.MovieSceneWidgetMaterialTrack");
		return ptr;
	}

};


// Class UMG.MultiLineEditableText
// 0x02C0 (0x03E0 - 0x0120)
class UMultiLineEditableText : public UTextLayoutWidget
{
public:
	struct FText                                       Text;                                                     // 0x0120(0x0018) (Edit)
	unsigned char                                      UnknownData00[0x2A8];                                     // 0x0138(0x02A8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.MultiLineEditableText");
		return ptr;
	}

};


// Class UMG.MultiLineEditableTextBox
// 0x0AE8 (0x0C08 - 0x0120)
class UMultiLineEditableTextBox : public UTextLayoutWidget
{
public:
	struct FText                                       Text;                                                     // 0x0120(0x0018) (Edit)
	unsigned char                                      UnknownData00[0xAD0];                                     // 0x0138(0x0AD0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.MultiLineEditableTextBox");
		return ptr;
	}

};


// Class UMG.NamedSlot
// 0x0010 (0x0128 - 0x0118)
class UNamedSlot : public UContentWidget
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0118(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.NamedSlot");
		return ptr;
	}

};


// Class UMG.NamedSlotInterface
// 0x0000 (0x0028 - 0x0028)
class UNamedSlotInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.NamedSlotInterface");
		return ptr;
	}

};


// Class UMG.NativeWidgetHost
// 0x0010 (0x0110 - 0x0100)
class UNativeWidgetHost : public UWidget
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0100(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.NativeWidgetHost");
		return ptr;
	}

};


// Class UMG.Overlay
// 0x0010 (0x0128 - 0x0118)
class UOverlay : public UPanelWidget
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0118(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.Overlay");
		return ptr;
	}


	void AddChildToOverlay();
};


// Class UMG.OverlaySlot
// 0x0020 (0x0058 - 0x0038)
class UOverlaySlot : public UPanelSlot
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0038(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.OverlaySlot");
		return ptr;
	}

};


// Class UMG.ProgressBar
// 0x0210 (0x0310 - 0x0100)
class UProgressBar : public UWidget
{
public:
	unsigned char                                      UnknownData00[0x210];                                     // 0x0100(0x0210) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.ProgressBar");
		return ptr;
	}

};


// Class UMG.RetainerBox
// 0x0030 (0x0148 - 0x0118)
class URetainerBox : public UContentWidget
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0118(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.RetainerBox");
		return ptr;
	}

};


// Class UMG.RichTextBlockImageDecorator
// 0x0008 (0x0030 - 0x0028)
class URichTextBlockImageDecorator : public URichTextBlockDecorator
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.RichTextBlockImageDecorator");
		return ptr;
	}

};


// Class UMG.SafeZone
// 0x0018 (0x0130 - 0x0118)
class USafeZone : public UContentWidget
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0118(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.SafeZone");
		return ptr;
	}

};


// Class UMG.SafeZoneSlot
// 0x0028 (0x0060 - 0x0038)
class USafeZoneSlot : public UPanelSlot
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0038(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.SafeZoneSlot");
		return ptr;
	}

};


// Class UMG.ScaleBox
// 0x0020 (0x0138 - 0x0118)
class UScaleBox : public UContentWidget
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0118(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.ScaleBox");
		return ptr;
	}

};


// Class UMG.ScaleBoxSlot
// 0x0028 (0x0060 - 0x0038)
class UScaleBoxSlot : public UPanelSlot
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0038(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.ScaleBoxSlot");
		return ptr;
	}

};


// Class UMG.ScrollBar
// 0x04F8 (0x05F8 - 0x0100)
class UScrollBar : public UWidget
{
public:
	unsigned char                                      UnknownData00[0x4F8];                                     // 0x0100(0x04F8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.ScrollBar");
		return ptr;
	}

};


// Class UMG.ScrollBox
// 0x0748 (0x0860 - 0x0118)
class UScrollBox : public UPanelWidget
{
public:
	unsigned char                                      UnknownData00[0x748];                                     // 0x0118(0x0748) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.ScrollBox");
		return ptr;
	}

};


// Class UMG.ScrollBoxSlot
// 0x0020 (0x0058 - 0x0038)
class UScrollBoxSlot : public UPanelSlot
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0038(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.ScrollBoxSlot");
		return ptr;
	}

};


// Class UMG.SizeBox
// 0x0030 (0x0148 - 0x0118)
class USizeBox : public UContentWidget
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0118(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.SizeBox");
		return ptr;
	}

};


// Class UMG.SizeBoxSlot
// 0x0028 (0x0060 - 0x0038)
class USizeBoxSlot : public UPanelSlot
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0038(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.SizeBoxSlot");
		return ptr;
	}

};


// Class UMG.SlateBlueprintLibrary
// 0x0000 (0x0028 - 0x0028)
class USlateBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.SlateBlueprintLibrary");
		return ptr;
	}


	void STATIC_ScreenToWidgetLocal();
	void STATIC_ScreenToWidgetAbsolute();
	void STATIC_ScreenToViewport();
	void STATIC_LocalToViewport();
	void STATIC_LocalToAbsolute(const struct FGeometry& Geometry);
	void STATIC_IsUnderLocation(const struct FGeometry& Geometry);
	void STATIC_GetLocalSize(const struct FGeometry& Geometry);
	void STATIC_GetAbsoluteSize(const struct FGeometry& Geometry);
	void STATIC_EqualEqual_SlateBrush(const struct FSlateBrush& A, const struct FSlateBrush& B);
	void STATIC_AbsoluteToViewport();
	void STATIC_AbsoluteToLocal(const struct FGeometry& Geometry);
};


// Class UMG.SlateVectorArtData
// 0x0038 (0x0060 - 0x0028)
class USlateVectorArtData : public UObject
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0028(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.SlateVectorArtData");
		return ptr;
	}

};


// Class UMG.Slider
// 0x03E8 (0x04E8 - 0x0100)
class USlider : public UWidget
{
public:
	unsigned char                                      UnknownData00[0x3E8];                                     // 0x0100(0x03E8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.Slider");
		return ptr;
	}

};


// Class UMG.Spacer
// 0x0018 (0x0118 - 0x0100)
class USpacer : public UWidget
{
public:
	struct FVector2D                                   Size;                                                     // 0x0100(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0108(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.Spacer");
		return ptr;
	}


	void SetSize(const struct FVector2D& InSize);
};


// Class UMG.SpinBox
// 0x0408 (0x0508 - 0x0100)
class USpinBox : public UWidget
{
public:
	unsigned char                                      UnknownData00[0x408];                                     // 0x0100(0x0408) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.SpinBox");
		return ptr;
	}

};


// Class UMG.TextBinding
// 0x0008 (0x0068 - 0x0060)
class UTextBinding : public UPropertyBinding
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0060(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.TextBinding");
		return ptr;
	}


	void GetTextValue();
	void GetStringValue();
};


// Class UMG.TextBlock
// 0x00F8 (0x0218 - 0x0120)
class UTextBlock : public UTextLayoutWidget
{
public:
	struct FText                                       Text;                                                     // 0x0120(0x0018) (Edit)
	unsigned char                                      UnknownData00[0xE0];                                      // 0x0138(0x00E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.TextBlock");
		return ptr;
	}

};


// Class UMG.Throbber
// 0x00A8 (0x01A8 - 0x0100)
class UThrobber : public UWidget
{
public:
	unsigned char                                      UnknownData00[0xA8];                                      // 0x0100(0x00A8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.Throbber");
		return ptr;
	}

};


// Class UMG.TileView
// 0x0020 (0x0348 - 0x0328)
class UTileView : public UListView
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0328(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.TileView");
		return ptr;
	}

};


// Class UMG.TreeView
// 0x0058 (0x0380 - 0x0328)
class UTreeView : public UListView
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0328(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.TreeView");
		return ptr;
	}

};


// Class UMG.UMGSequencePlayer
// 0x06C0 (0x06E8 - 0x0028)
class UUMGSequencePlayer : public UObject
{
public:
	unsigned char                                      UnknownData00[0x348];                                     // 0x0028(0x0348) MISSED OFFSET
	class UWidgetAnimation*                            Animation;                                                // 0x0370(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x370];                                     // 0x0378(0x0370) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.UMGSequencePlayer");
		return ptr;
	}

};


// Class UMG.UniformGridPanel
// 0x0028 (0x0140 - 0x0118)
class UUniformGridPanel : public UPanelWidget
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0118(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.UniformGridPanel");
		return ptr;
	}

};


// Class UMG.UniformGridSlot
// 0x0018 (0x0050 - 0x0038)
class UUniformGridSlot : public UPanelSlot
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0038(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.UniformGridSlot");
		return ptr;
	}

};


// Class UMG.VerticalBox
// 0x0010 (0x0128 - 0x0118)
class UVerticalBox : public UPanelWidget
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0118(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.VerticalBox");
		return ptr;
	}


	void AddChildToVerticalBox();
};


// Class UMG.VerticalBoxSlot
// 0x0028 (0x0060 - 0x0038)
class UVerticalBoxSlot : public UPanelSlot
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0038(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.VerticalBoxSlot");
		return ptr;
	}

};


// Class UMG.Viewport
// 0x0028 (0x0140 - 0x0118)
class UViewport : public UContentWidget
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0118(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.Viewport");
		return ptr;
	}

};


// Class UMG.VisibilityBinding
// 0x0000 (0x0060 - 0x0060)
class UVisibilityBinding : public UPropertyBinding
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.VisibilityBinding");
		return ptr;
	}


	void GetValue();
};


// Class UMG.WidgetAnimation
// 0x0050 (0x0398 - 0x0348)
class UWidgetAnimation : public UMovieSceneSequence
{
public:
	struct FScriptMulticastDelegate                    OnAnimationStarted;                                       // 0x0348(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnAnimationFinished;                                      // 0x0358(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	class UMovieScene*                                 MovieScene;                                               // 0x0368(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0370(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.WidgetAnimation");
		return ptr;
	}

};


// Class UMG.WidgetBinding
// 0x0000 (0x0060 - 0x0060)
class UWidgetBinding : public UPropertyBinding
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.WidgetBinding");
		return ptr;
	}


	void GetValue();
};


// Class UMG.WidgetBlueprintGeneratedClass
// 0x0070 (0x0350 - 0x02E0)
class UWidgetBlueprintGeneratedClass : public UBlueprintGeneratedClass
{
public:
	class UWidgetTree*                                 WidgetTree;                                               // 0x02E0(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x68];                                      // 0x02E8(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.WidgetBlueprintGeneratedClass");
		return ptr;
	}

};


// Class UMG.WidgetBlueprintLibrary
// 0x0000 (0x0028 - 0x0028)
class UWidgetBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.WidgetBlueprintLibrary");
		return ptr;
	}


	void STATIC_UnlockMouse();
	void STATIC_Unhandled();
	void STATIC_SetWindowTitleBarState();
	void STATIC_SetWindowTitleBarOnCloseClickedDelegate();
	void STATIC_SetWindowTitleBarCloseButtonActive();
	void STATIC_SetUserFocus();
	void STATIC_SetMousePosition();
	void STATIC_SetInputMode_UIOnlyEx(class APlayerController* PlayerController);
	void STATIC_SetInputMode_UIOnly(class APlayerController* Target);
	void STATIC_SetInputMode_GameOnly(class APlayerController* PlayerController);
	void STATIC_SetInputMode_GameAndUIEx(class APlayerController* PlayerController);
	void STATIC_SetInputMode_GameAndUI(class APlayerController* Target);
	void STATIC_SetHardwareCursor();
	void STATIC_SetFocusToGameViewport();
	void STATIC_SetBrushResourceToTexture(class UTexture2D* Texture, struct FSlateBrush* Brush);
	void STATIC_SetBrushResourceToMaterial(class UMaterialInterface* Material, struct FSlateBrush* Brush);
	void STATIC_RestorePreviousWindowTitleBarState();
	void STATIC_ReleaseMouseCapture();
	void STATIC_ReleaseJoystickCapture();
};


// Class UMG.WidgetComponent
// 0x0140 (0x06D0 - 0x0590)
class UWidgetComponent : public UMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x140];                                     // 0x0590(0x0140) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.WidgetComponent");
		return ptr;
	}

};


// Class UMG.WidgetInteractionComponent
// 0x01F0 (0x0440 - 0x0250)
class UWidgetInteractionComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0x1F0];                                     // 0x0250(0x01F0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.WidgetInteractionComponent");
		return ptr;
	}

};


// Class UMG.WidgetLayoutLibrary
// 0x0000 (0x0028 - 0x0028)
class UWidgetLayoutLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.WidgetLayoutLibrary");
		return ptr;
	}


	void STATIC_SlotAsVerticalBoxSlot(class UWidget* Widget);
	void STATIC_SlotAsUniformGridSlot(class UWidget* Widget);
	void STATIC_SlotAsOverlaySlot(class UWidget* Widget);
	void STATIC_SlotAsHorizontalBoxSlot(class UWidget* Widget);
	void STATIC_SlotAsGridSlot(class UWidget* Widget);
	void STATIC_SlotAsCanvasSlot(class UWidget* Widget);
	void STATIC_SlotAsBorderSlot(class UWidget* Widget);
	void STATIC_RemoveAllWidgets();
	void STATIC_ProjectWorldLocationToWidgetPosition(class APlayerController* PlayerController, const struct FVector& WorldLocation);
	void STATIC_GetViewportWidgetGeometry();
	void STATIC_GetViewportSize();
	void STATIC_GetViewportScale();
	void STATIC_GetPlayerScreenWidgetGeometry(class APlayerController* PlayerController);
	void STATIC_GetMousePositionScaledByDPI(class APlayerController* Player);
	void STATIC_GetMousePositionOnViewport();
	void STATIC_GetMousePositionOnPlatform();
};


// Class UMG.WidgetNavigation
// 0x00F0 (0x0118 - 0x0028)
class UWidgetNavigation : public UObject
{
public:
	struct FWidgetNavigationData                       Up;                                                       // 0x0028(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FWidgetNavigationData                       Down;                                                     // 0x0050(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FWidgetNavigationData                       Left;                                                     // 0x0078(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FWidgetNavigationData                       Right;                                                    // 0x00A0(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FWidgetNavigationData                       Next;                                                     // 0x00C8(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FWidgetNavigationData                       Previous;                                                 // 0x00F0(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.WidgetNavigation");
		return ptr;
	}

};


// Class UMG.WidgetSwitcher
// 0x0018 (0x0130 - 0x0118)
class UWidgetSwitcher : public UPanelWidget
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0118(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.WidgetSwitcher");
		return ptr;
	}

};


// Class UMG.WidgetSwitcherSlot
// 0x0020 (0x0058 - 0x0038)
class UWidgetSwitcherSlot : public UPanelSlot
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0038(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.WidgetSwitcherSlot");
		return ptr;
	}

};


// Class UMG.WidgetTree
// 0x0008 (0x0030 - 0x0028)
class UWidgetTree : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.WidgetTree");
		return ptr;
	}

};


// Class UMG.WindowTitleBarArea
// 0x0020 (0x0138 - 0x0118)
class UWindowTitleBarArea : public UContentWidget
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0118(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.WindowTitleBarArea");
		return ptr;
	}

};


// Class UMG.WindowTitleBarAreaSlot
// 0x0028 (0x0060 - 0x0038)
class UWindowTitleBarAreaSlot : public UPanelSlot
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0038(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.WindowTitleBarAreaSlot");
		return ptr;
	}

};


// Class UMG.WrapBox
// 0x0020 (0x0138 - 0x0118)
class UWrapBox : public UPanelWidget
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0118(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.WrapBox");
		return ptr;
	}

};


// Class UMG.WrapBoxSlot
// 0x0028 (0x0060 - 0x0038)
class UWrapBoxSlot : public UPanelSlot
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0038(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.WrapBoxSlot");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
