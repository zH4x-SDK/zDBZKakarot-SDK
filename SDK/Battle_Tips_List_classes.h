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

// WidgetBlueprintGeneratedClass Battle_Tips_List.Battle_Tips_List_C
// 0x0018 (FullSize[0x0398] - InheritedSize[0x0380])
class UBattle_Tips_List_C : public UAT_UIBattleTipsList
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0380(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UInvalidationBox*                            All_Nut_InvalidationBox;                                   // 0x0388(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                                All_Tips_Tutorial;                                         // 0x0390(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Battle_Tips_List.Battle_Tips_List_C");
		return ptr;
	}



	void Construct();
	void ExecuteUbergraph_Battle_Tips_List(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
