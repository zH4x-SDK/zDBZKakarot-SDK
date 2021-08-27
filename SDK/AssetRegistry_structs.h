#pragma once

// Name: DBZKakarot, Version: 1.0.3

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct AssetRegistry.ARFilter
// 0x00E8
struct FARFilter
{
	unsigned char                                      UnknownData00[0xE8];                                      // 0x0000(0x00E8) MISSED OFFSET
};

// ScriptStruct AssetRegistry.AssetBundleData
// 0x0010
struct FAssetBundleData
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct AssetRegistry.AssetBundleEntry
// 0x0028
struct FAssetBundleEntry
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
};

// ScriptStruct AssetRegistry.AssetData
// 0x0050
struct FAssetData
{
	unsigned char                                      UnknownData00[0x50];                                      // 0x0000(0x0050) MISSED OFFSET
};

// ScriptStruct AssetRegistry.TagAndValue
// 0x0018
struct FTagAndValue
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
