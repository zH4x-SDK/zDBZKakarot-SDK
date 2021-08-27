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

// BlueprintGeneratedClass GeneralDemoCharacterBase_BP.GeneralDemoCharacterBase_BP_C
// 0x0008 (FullSize[0x08E8] - InheritedSize[0x08E0])
class AGeneralDemoCharacterBase_BP_C : public AATGeneralDemoCharacter
{
public:
	class ULipSyncComponent*                           LipSyncComp;                                               // 0x08E0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GeneralDemoCharacterBase_BP.GeneralDemoCharacterBase_BP_C");
		return ptr;
	}



	void UserConstructionScript();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
