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

// WidgetBlueprintGeneratedClass FullScreenMovie.FullScreenMovie_C
// 0x0010 (FullSize[0x0390] - InheritedSize[0x0380])
class UFullScreenMovie_C : public UATUIFullscreenMovie
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0380(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                      Image;                                                     // 0x0388(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass FullScreenMovie.FullScreenMovie_C");
		return ptr;
	}



	void ConstructFirstOnly();
	void ExecuteUbergraph_FullScreenMovie(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
