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

// WidgetBlueprintGeneratedClass Xmenu_Scrollbar_Custom.Xmenu_Scrollbar_Custom_C
// 0x0010 (FullSize[0x03E8] - InheritedSize[0x03D8])
class UXmenu_Scrollbar_Custom_C : public UAT_UIScrollBar
{
public:
	class UImage*                                      Ins_Scrollbar;                                             // 0x03D8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Ins_Scrollbar_Base;                                        // 0x03E0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Xmenu_Scrollbar_Custom.Xmenu_Scrollbar_Custom_C");
		return ptr;
	}



	struct FLinearColor Get_Img_List01_ColorAndOpacity_2();
	void Get_Img_List01_ColorAndOpacity_1();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
