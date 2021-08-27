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

// BlueprintGeneratedClass Sub_Npc011_00_03.Sub_Npc011_00_03_C
// 0x0010 (FullSize[0x04D0] - InheritedSize[0x04C0])
class ASub_Npc011_00_03_C : public AQuestGeneral_BP_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x04C0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FName                                       quest_id;                                                  // 0x04C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Sub_Npc011_00_03.Sub_Npc011_00_03_C");
		return ptr;
	}



	void UserConstructionScript();
	void PhaseEvent();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_Sub_Npc011_00_03(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
