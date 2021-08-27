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

// Class AssetRegistry.AssetRegistryImpl
// 0x06E8 (0x0710 - 0x0028)
class UAssetRegistryImpl : public UObject
{
public:
	unsigned char                                      UnknownData00[0x6E8];                                     // 0x0028(0x06E8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AssetRegistry.AssetRegistryImpl");
		return ptr;
	}

};


// Class AssetRegistry.AssetRegistryHelpers
// 0x0000 (0x0028 - 0x0028)
class UAssetRegistryHelpers : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AssetRegistry.AssetRegistryHelpers");
		return ptr;
	}


	void STATIC_ToSoftObjectPath();
	void STATIC_SetFilterTagsAndValues();
	void STATIC_IsValid();
	void STATIC_IsUAsset();
	void STATIC_IsRedirector();
	void STATIC_IsAssetLoaded();
	void STATIC_GetTagValue();
	void STATIC_GetFullName();
	void STATIC_GetExportTextName();
	void STATIC_GetClass();
	void STATIC_GetAssetRegistry();
	void STATIC_GetAsset();
	void STATIC_CreateAssetData();
};


// Class AssetRegistry.AssetRegistry
// 0x0000 (0x0028 - 0x0028)
class UAssetRegistry : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AssetRegistry.AssetRegistry");
		return ptr;
	}


	void SearchAllAssets();
	void ScanPathsSynchronous();
	void ScanModifiedAssetFiles();
	void ScanFilesSynchronous();
	void RunAssetsThroughFilter();
	void PrioritizeSearchPath();
	void IsLoadingAssets();
	void HasAssets();
	void GetSubPaths();
	void GetAssetsByPath();
	void GetAssetsByPackageName(const struct FName& PackageName);
	void GetAssetsByClass(const struct FName& ClassName);
	void GetAssets(const struct FARFilter& Filter);
	void GetAssetByObjectPath();
	void GetAllCachedPaths();
	void GetAllAssets();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
