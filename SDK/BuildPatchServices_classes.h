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

// Class BuildPatchServices.BuildPatchManifest
// 0x00F8 (0x0120 - 0x0028)
class UBuildPatchManifest : public UObject
{
public:
	unsigned char                                      UnknownData00[0xF8];                                      // 0x0028(0x00F8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BuildPatchServices.BuildPatchManifest");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
