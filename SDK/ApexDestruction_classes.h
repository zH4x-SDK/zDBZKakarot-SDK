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

// Class ApexDestruction.DestructibleActor
// 0x0020 (0x0358 - 0x0338)
class ADestructibleActor : public AActor
{
public:
	class UDestructibleComponent*                      DestructibleComponent;                                    // 0x0338(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0340(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ApexDestruction.DestructibleActor");
		return ptr;
	}

};


// Class ApexDestruction.DestructibleComponent
// 0x00E0 (0x07B0 - 0x06D0)
class UDestructibleComponent : public USkinnedMeshComponent
{
public:
	unsigned char                                      UnknownData00[0xE0];                                      // 0x06D0(0x00E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ApexDestruction.DestructibleComponent");
		return ptr;
	}

};


// Class ApexDestruction.DestructibleFractureSettings
// 0x0090 (0x00B8 - 0x0028)
class UDestructibleFractureSettings : public UObject
{
public:
	unsigned char                                      UnknownData00[0x90];                                      // 0x0028(0x0090) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ApexDestruction.DestructibleFractureSettings");
		return ptr;
	}

};


// Class ApexDestruction.DestructibleMesh
// 0x00A0 (0x03A8 - 0x0308)
class UDestructibleMesh : public USkeletalMesh
{
public:
	unsigned char                                      UnknownData00[0xA0];                                      // 0x0308(0x00A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ApexDestruction.DestructibleMesh");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
