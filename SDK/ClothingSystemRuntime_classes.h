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

// Class ClothingSystemRuntime.ClothingAssetCustomData
// 0x0000 (0x0028 - 0x0028)
class UClothingAssetCustomData : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ClothingSystemRuntime.ClothingAssetCustomData");
		return ptr;
	}

};


// Class ClothingSystemRuntime.ClothingAsset
// 0x0130 (0x0178 - 0x0048)
class UClothingAsset : public UClothingAssetBase
{
public:
	class UPhysicsAsset*                               PhysicsAsset;                                             // 0x0048(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FClothConfig                                ClothConfig;                                              // 0x0050(0x00D4) (Edit)
	unsigned char                                      UnknownData00[0x54];                                      // 0x0124(0x0054) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ClothingSystemRuntime.ClothingAsset");
		return ptr;
	}

};


// Class ClothingSystemRuntime.ClothingSimulationFactoryNv
// 0x0000 (0x0028 - 0x0028)
class UClothingSimulationFactoryNv : public UClothingSimulationFactory
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ClothingSystemRuntime.ClothingSimulationFactoryNv");
		return ptr;
	}

};


// Class ClothingSystemRuntime.ClothingSimulationInteractorNv
// 0x0010 (0x0040 - 0x0030)
class UClothingSimulationInteractorNv : public UClothingSimulationInteractor
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ClothingSystemRuntime.ClothingSimulationInteractorNv");
		return ptr;
	}


	void SetAnimDriveSpringStiffness();
	void SetAnimDriveDamperStiffness();
	void EnableGravityOverride();
	void DisableGravityOverride();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
