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

// ScriptStruct OnlineSubsystemUtils.BlueprintSessionResult
// 0x00B8
struct FBlueprintSessionResult
{
	unsigned char                                      UnknownData00[0xB8];                                      // 0x0000(0x00B8) MISSED OFFSET
};

// ScriptStruct OnlineSubsystemUtils.PIELoginSettingsInternal
// 0x0040
struct FPIELoginSettingsInternal
{
	struct FString                                     ID;                                                       // 0x0000(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData00[0x30];                                      // 0x0010(0x0030) MISSED OFFSET
};

// ScriptStruct OnlineSubsystemUtils.PartyReservation
// 0x0040
struct FPartyReservation
{
	unsigned char                                      UnknownData00[0x40];                                      // 0x0000(0x0040) MISSED OFFSET
};

// ScriptStruct OnlineSubsystemUtils.PlayerReservation
// 0x0050
struct FPlayerReservation
{
	unsigned char                                      UnknownData00[0x50];                                      // 0x0000(0x0050) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
