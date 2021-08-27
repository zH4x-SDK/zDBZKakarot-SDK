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

// WidgetBlueprintGeneratedClass Xcmn_Win00_Choice.Xcmn_Win00_Choice_C
// 0x0018 (FullSize[0x03C8] - InheritedSize[0x03B0])
class UXcmn_Win00_Choice_C : public UAT_UISystemWindowChoice
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x03B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                      Img_Xwin01_List;                                           // 0x03B8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UXcmn_MultiLineText_C*                       Txt_Choice;                                                // 0x03C0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Xcmn_Win00_Choice.Xcmn_Win00_Choice_C");
		return ptr;
	}



	void SetSelectState(bool IsSelected);
	void Construct();
	void ExecuteUbergraph_Xcmn_Win00_Choice(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
