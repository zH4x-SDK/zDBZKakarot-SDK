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

// ScriptStruct EngineSettings.AutoCompleteCommand
// 0x0028
struct FAutoCompleteCommand
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
};

// ScriptStruct EngineSettings.GameModeName
// 0x0028
struct FGameModeName
{
	struct FString                                     Name;                                                     // 0x0000(0x0010) (Edit, ZeroConstructor)
	struct FSoftClassPath                              GameMode;                                                 // 0x0010(0x0018) (Edit, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
