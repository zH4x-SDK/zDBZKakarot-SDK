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

// Class DatasmithContent.DatasmithObjectTemplate
// 0x0000 (0x0028 - 0x0028)
class UDatasmithObjectTemplate : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DatasmithContent.DatasmithObjectTemplate");
		return ptr;
	}

};


// Class DatasmithContent.DatasmithActorTemplate
// 0x00A0 (0x00C8 - 0x0028)
class UDatasmithActorTemplate : public UDatasmithObjectTemplate
{
public:
	unsigned char                                      UnknownData00[0xA0];                                      // 0x0028(0x00A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DatasmithContent.DatasmithActorTemplate");
		return ptr;
	}

};


// Class DatasmithContent.DatasmithAreaLightActor
// 0x0020 (0x0358 - 0x0338)
class ADatasmithAreaLightActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0338(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DatasmithContent.DatasmithAreaLightActor");
		return ptr;
	}

};


// Class DatasmithContent.DatasmithAreaLightActorTemplate
// 0x0028 (0x0050 - 0x0028)
class UDatasmithAreaLightActorTemplate : public UDatasmithObjectTemplate
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0028(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DatasmithContent.DatasmithAreaLightActorTemplate");
		return ptr;
	}

};


// Class DatasmithContent.DatasmithAssetImportData
// 0x0000 (0x0028 - 0x0028)
class UDatasmithAssetImportData : public UAssetImportData
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DatasmithContent.DatasmithAssetImportData");
		return ptr;
	}

};


// Class DatasmithContent.DatasmithStaticMeshImportData
// 0x0000 (0x0028 - 0x0028)
class UDatasmithStaticMeshImportData : public UDatasmithAssetImportData
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DatasmithContent.DatasmithStaticMeshImportData");
		return ptr;
	}

};


// Class DatasmithContent.DatasmithStaticMeshCADImportData
// 0x0000 (0x0028 - 0x0028)
class UDatasmithStaticMeshCADImportData : public UDatasmithStaticMeshImportData
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DatasmithContent.DatasmithStaticMeshCADImportData");
		return ptr;
	}

};


// Class DatasmithContent.DatasmithSceneImportData
// 0x0000 (0x0028 - 0x0028)
class UDatasmithSceneImportData : public UAssetImportData
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DatasmithContent.DatasmithSceneImportData");
		return ptr;
	}

};


// Class DatasmithContent.DatasmithCADImportSceneData
// 0x0000 (0x0028 - 0x0028)
class UDatasmithCADImportSceneData : public UDatasmithSceneImportData
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DatasmithContent.DatasmithCADImportSceneData");
		return ptr;
	}

};


// Class DatasmithContent.DatasmithMDLSceneImportData
// 0x0000 (0x0028 - 0x0028)
class UDatasmithMDLSceneImportData : public UDatasmithSceneImportData
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DatasmithContent.DatasmithMDLSceneImportData");
		return ptr;
	}

};


// Class DatasmithContent.DatasmithDeltaGenAssetImportData
// 0x0000 (0x0028 - 0x0028)
class UDatasmithDeltaGenAssetImportData : public UDatasmithAssetImportData
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DatasmithContent.DatasmithDeltaGenAssetImportData");
		return ptr;
	}

};


// Class DatasmithContent.DatasmithDeltaGenSceneImportData
// 0x0000 (0x0028 - 0x0028)
class UDatasmithDeltaGenSceneImportData : public UDatasmithSceneImportData
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DatasmithContent.DatasmithDeltaGenSceneImportData");
		return ptr;
	}

};


// Class DatasmithContent.DatasmithVREDAssetImportData
// 0x0008 (0x0030 - 0x0028)
class UDatasmithVREDAssetImportData : public UDatasmithAssetImportData
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DatasmithContent.DatasmithVREDAssetImportData");
		return ptr;
	}

};


// Class DatasmithContent.DatasmithVREDSceneImportData
// 0x0000 (0x0028 - 0x0028)
class UDatasmithVREDSceneImportData : public UDatasmithSceneImportData
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DatasmithContent.DatasmithVREDSceneImportData");
		return ptr;
	}

};


// Class DatasmithContent.DatasmithAssetUserData
// 0x0050 (0x0078 - 0x0028)
class UDatasmithAssetUserData : public UAssetUserData
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0028(0x0050) UNKNOWN PROPERTY: MapProperty DatasmithContent.DatasmithAssetUserData.MetaData

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DatasmithContent.DatasmithAssetUserData");
		return ptr;
	}

};


// Class DatasmithContent.DatasmithCineCameraComponentTemplate
// 0x0068 (0x0090 - 0x0028)
class UDatasmithCineCameraComponentTemplate : public UDatasmithObjectTemplate
{
public:
	unsigned char                                      UnknownData00[0x68];                                      // 0x0028(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DatasmithContent.DatasmithCineCameraComponentTemplate");
		return ptr;
	}

};


// Class DatasmithContent.DatasmithContentBlueprintLibrary
// 0x0000 (0x0028 - 0x0028)
class UDatasmithContentBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DatasmithContent.DatasmithContentBlueprintLibrary");
		return ptr;
	}


	void STATIC_GetDatasmithUserDataValueForKey(class UObject* Object, const struct FName& Key);
	void STATIC_GetDatasmithUserDataKeysAndValuesForValue(class UObject* Object);
	void STATIC_GetDatasmithUserData(class UObject* Object);
};


// Class DatasmithContent.DatasmithImportOptions
// 0x0060 (0x0088 - 0x0028)
class UDatasmithImportOptions : public UObject
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0028(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DatasmithContent.DatasmithImportOptions");
		return ptr;
	}

};


// Class DatasmithContent.DatasmithLandscapeTemplate
// 0x0010 (0x0038 - 0x0028)
class UDatasmithLandscapeTemplate : public UDatasmithObjectTemplate
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DatasmithContent.DatasmithLandscapeTemplate");
		return ptr;
	}

};


// Class DatasmithContent.DatasmithLightComponentTemplate
// 0x0038 (0x0060 - 0x0028)
class UDatasmithLightComponentTemplate : public UDatasmithObjectTemplate
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0028(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DatasmithContent.DatasmithLightComponentTemplate");
		return ptr;
	}

};


// Class DatasmithContent.DatasmithPointLightComponentTemplate
// 0x0010 (0x0038 - 0x0028)
class UDatasmithPointLightComponentTemplate : public UDatasmithObjectTemplate
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DatasmithContent.DatasmithPointLightComponentTemplate");
		return ptr;
	}

};


// Class DatasmithContent.DatasmithScene
// 0x0000 (0x0028 - 0x0028)
class UDatasmithScene : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DatasmithContent.DatasmithScene");
		return ptr;
	}

};


// Class DatasmithContent.DatasmithSceneActor
// 0x0058 (0x0390 - 0x0338)
class ADatasmithSceneActor : public AActor
{
public:
	class UDatasmithScene*                             Scene;                                                    // 0x0338(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x50];                                      // 0x0340(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DatasmithContent.DatasmithSceneActor");
		return ptr;
	}

};


// Class DatasmithContent.DatasmithSceneComponentTemplate
// 0x00B8 (0x00E0 - 0x0028)
class UDatasmithSceneComponentTemplate : public UDatasmithObjectTemplate
{
public:
	unsigned char                                      UnknownData00[0xB8];                                      // 0x0028(0x00B8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DatasmithContent.DatasmithSceneComponentTemplate");
		return ptr;
	}

};


// Class DatasmithContent.DatasmithSkyLightComponentTemplate
// 0x0010 (0x0038 - 0x0028)
class UDatasmithSkyLightComponentTemplate : public UDatasmithObjectTemplate
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DatasmithContent.DatasmithSkyLightComponentTemplate");
		return ptr;
	}

};


// Class DatasmithContent.DatasmithSpotLightComponentTemplate
// 0x0008 (0x0030 - 0x0028)
class UDatasmithSpotLightComponentTemplate : public UDatasmithObjectTemplate
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DatasmithContent.DatasmithSpotLightComponentTemplate");
		return ptr;
	}

};


// Class DatasmithContent.DatasmithStaticMeshComponentTemplate
// 0x0020 (0x0100 - 0x00E0)
class UDatasmithStaticMeshComponentTemplate : public UDatasmithSceneComponentTemplate
{
public:
	class UStaticMesh*                                 StaticMesh;                                               // 0x00E0(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<class UMaterialInterface*>                  OverrideMaterials;                                        // 0x00E8(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x00F8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DatasmithContent.DatasmithStaticMeshComponentTemplate");
		return ptr;
	}

};


// Class DatasmithContent.DatasmithStaticMeshTemplate
// 0x0078 (0x00A0 - 0x0028)
class UDatasmithStaticMeshTemplate : public UDatasmithObjectTemplate
{
public:
	unsigned char                                      UnknownData00[0x78];                                      // 0x0028(0x0078) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DatasmithContent.DatasmithStaticMeshTemplate");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
