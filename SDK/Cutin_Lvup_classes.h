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

// WidgetBlueprintGeneratedClass Cutin_Lvup.Cutin_Lvup_C
// 0x0010 (FullSize[0x0418] - InheritedSize[0x0408])
class UCutin_Lvup_C : public UAT_UICutinLevelUp
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0408(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UCanvasPanel*                                All_Nut;                                                   // 0x0410(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Cutin_Lvup.Cutin_Lvup_C");
		return ptr;
	}



	void ConstructFirstOnly();
	void ExecuteUbergraph_Cutin_Lvup(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
