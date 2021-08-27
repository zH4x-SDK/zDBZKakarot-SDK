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

// BlueprintGeneratedClass TriggerStaticActor_BP.TriggerStaticActor_BP_C
// 0x0008 (FullSize[0x0390] - InheritedSize[0x0388])
class ATriggerStaticActor_BP_C : public ATriggerStaticActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0388(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass TriggerStaticActor_BP.TriggerStaticActor_BP_C");
		return ptr;
	}



	void UserConstructionScript();
	void ReceiveActorBeginOverlap(class AActor* OtherActor);
	void ReceiveActorEndOverlap(class AActor* OtherActor);
	void ExecuteUbergraph_TriggerStaticActor_BP(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
