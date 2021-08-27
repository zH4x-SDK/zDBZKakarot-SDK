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

// BlueprintGeneratedClass BP_ATGameModeMain.BP_ATGameModeMain_C
// 0x0010 (FullSize[0x0608] - InheritedSize[0x05F8])
class ABP_ATGameModeMain_C : public AATGameMode
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x05F8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                          // 0x0600(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_ATGameModeMain.BP_ATGameModeMain_C");
		return ptr;
	}



	void UserConstructionScript();
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_BP_ATGameModeMain(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
