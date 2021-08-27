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

// ScriptStruct AudioMixer.SubmixEffectDynamicsProcessorSettings
// 0x0028
struct FSubmixEffectDynamicsProcessorSettings
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
};

// ScriptStruct AudioMixer.SubmixEffectSubmixEQSettings
// 0x0010
struct FSubmixEffectSubmixEQSettings
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct AudioMixer.SubmixEffectReverbSettings
// 0x0034
struct FSubmixEffectReverbSettings
{
	unsigned char                                      UnknownData00[0x34];                                      // 0x0000(0x0034) MISSED OFFSET
};

// ScriptStruct AudioMixer.SubmixEffectEQBand
// 0x0010
struct FSubmixEffectEQBand
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
