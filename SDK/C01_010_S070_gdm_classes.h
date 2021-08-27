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

// BlueprintGeneratedClass C01_010_S070_gdm.C01_010_S070_gdm_C
// 0x0010 (FullSize[0x0350] - InheritedSize[0x0340])
class AC01_010_S070_gdm_C : public AATLevelScriptActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0340(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class ALevelSequenceActor*                         C01_010_S070_gdm_Master_ExecuteUbergraph_C01_010_S070_gdm_RefProperty; // 0x0348(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass C01_010_S070_gdm.C01_010_S070_gdm_C");
		return ptr;
	}



	void ReceiveBeginPlay();
	void ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason);
	void ExecuteUbergraph_C01_010_S070_gdm(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
