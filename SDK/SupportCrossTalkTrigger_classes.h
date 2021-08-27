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

// BlueprintGeneratedClass SupportCrossTalkTrigger.SupportCrossTalkTrigger_C
// 0x0014 (FullSize[0x039C] - InheritedSize[0x0388])
class ASupportCrossTalkTrigger_C : public ATriggerStaticActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0388(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FName                                       crosstalk_id;                                              // 0x0390(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Distance;                                                  // 0x0398(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass SupportCrossTalkTrigger.SupportCrossTalkTrigger_C");
		return ptr;
	}



	void UserConstructionScript();
	void ReceiveActorBeginOverlap(class AActor* OtherActor);
	void ExecuteUbergraph_SupportCrossTalkTrigger(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
