#pragma once

// Name: DBZKakarot, Version: 1.0.3

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// Class CableComponent.CableActor
// 0x0008 (0x0340 - 0x0338)
class ACableActor : public AActor
{
public:
	class UCableComponent*                             CableComponent;                                           // 0x0338(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CableComponent.CableActor");
		return ptr;
	}

};


// Class CableComponent.CableComponent
// 0x0080 (0x0610 - 0x0590)
class UCableComponent : public UMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x80];                                      // 0x0590(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CableComponent.CableComponent");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
