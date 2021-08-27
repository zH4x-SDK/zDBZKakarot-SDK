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

// BlueprintGeneratedClass TargetPointIngameDemoCharacter_BP.TargetPointIngameDemoCharacter_BP_C
// 0x0008 (FullSize[0x0368] - InheritedSize[0x0360])
class ATargetPointIngameDemoCharacter_BP_C : public ATargetPointIngameDemoCharacter
{
public:
	class UArrowComponent*                             Arrow1;                                                    // 0x0360(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass TargetPointIngameDemoCharacter_BP.TargetPointIngameDemoCharacter_BP_C");
		return ptr;
	}



	void UserConstructionScript();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
