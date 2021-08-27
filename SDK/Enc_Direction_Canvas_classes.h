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

// WidgetBlueprintGeneratedClass Enc_Direction_Canvas.Enc_Direction_Canvas_C
// 0x0010 (FullSize[0x0458] - InheritedSize[0x0448])
class UEnc_Direction_Canvas_C : public UAT_UIEncounterDirection
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0448(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                            Roll;                                                      // 0x0450(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Enc_Direction_Canvas.Enc_Direction_Canvas_C");
		return ptr;
	}



	void Construct();
	void ExecuteUbergraph_Enc_Direction_Canvas(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
