#pragma once

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
// Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass Xcmn_MultiLineText.Xcmn_MultiLineText_C
// 0x0040 (FullSize[0x0580] - InheritedSize[0x0540])
class UXcmn_MultiLineText_C : public UCFUIXcmnMultiLineText
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0540(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                      DebugFrameArea;                                            // 0x0548(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      DebugWrapArea;                                             // 0x0550(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCFExtendRichTextBlock*                      ExMainTxt;                                                 // 0x0558(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCFExtendRichTextBlock*                      ExSubTxt;                                                  // 0x0560(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCFUIMultiLineTextBox*                       mainTxt;                                                   // 0x0568(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URetainerBox*                                Pnl_Mask;                                                  // 0x0570(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCFUIMultiLineTextBox*                       SubTxt;                                                    // 0x0578(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Xcmn_MultiLineText.Xcmn_MultiLineText_C");
		return ptr;
	}



	void Construct();
	void ExecuteUbergraph_Xcmn_MultiLineText(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
