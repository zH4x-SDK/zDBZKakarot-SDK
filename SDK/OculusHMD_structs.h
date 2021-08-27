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

// ScriptStruct OculusHMD.GuardianTestResult
// 0x0020
struct FGuardianTestResult
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct OculusHMD.HmdUserProfile
// 0x0048
struct FHmdUserProfile
{
	struct FString                                     Name;                                                     // 0x0000(0x0010) (BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData00[0x38];                                      // 0x0010(0x0038) MISSED OFFSET
};

// ScriptStruct OculusHMD.HmdUserProfileField
// 0x0020
struct FHmdUserProfileField
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct OculusHMD.OculusSplashDesc
// 0x00A0
struct FOculusSplashDesc
{
	unsigned char                                      UnknownData00[0xA0];                                      // 0x0000(0x00A0) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
