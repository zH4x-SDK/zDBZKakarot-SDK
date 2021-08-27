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

// BlueprintGeneratedClass AT_GameHUD_BP.AT_GameHUD_BP_C
// 0x0010 (FullSize[0x0628] - InheritedSize[0x0618])
class AAT_GameHUD_BP_C : public AAT_GameHUD
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0618(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                          // 0x0620(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass AT_GameHUD_BP.AT_GameHUD_BP_C");
		return ptr;
	}



	void UserConstructionScript();
	void ReceiveDrawHUD(int SizeX, int SizeY);
	void ExecuteUbergraph_AT_GameHUD_BP(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
