﻿#pragma once

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

// BlueprintGeneratedClass AT_Character_cpl057A_BP.AT_Character_cpl057A_BP_C
// 0x0010 (FullSize[0x0FB0] - InheritedSize[0x0FA0])
class AAT_Character_cpl057A_BP_C : public AATCharacterCpl057Base
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0FA0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UATAttachParticleComponent*                  AttachParticle;                                            // 0x0FA8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass AT_Character_cpl057A_BP.AT_Character_cpl057A_BP_C");
		return ptr;
	}



	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_AT_Character_cpl057A_BP(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
