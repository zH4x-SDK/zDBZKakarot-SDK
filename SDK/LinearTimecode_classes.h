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

// Class LinearTimecode.LinearTimecodeComponent
// 0x0060 (0x02B0 - 0x0250)
class ULinearTimecodeComponent : public USceneComponent
{
public:
	struct FDropTimecode                               DropTimecode;                                             // 0x0250(0x001C) (BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData00[0x44];                                      // 0x026C(0x0044) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LinearTimecode.LinearTimecodeComponent");
		return ptr;
	}

};


// Class LinearTimecode.DropTimecodeToStringConversion
// 0x0000 (0x0028 - 0x0028)
class UDropTimecodeToStringConversion : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LinearTimecode.DropTimecodeToStringConversion");
		return ptr;
	}


	void STATIC_Conv_DropTimecodeToString();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
