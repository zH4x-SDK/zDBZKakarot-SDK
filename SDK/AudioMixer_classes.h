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

// Class AudioMixer.SynthComponent
// 0x0380 (0x05D0 - 0x0250)
class USynthComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0x380];                                     // 0x0250(0x0380) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AudioMixer.SynthComponent");
		return ptr;
	}

};


// Class AudioMixer.AudioMixerBlueprintLibrary
// 0x0000 (0x0028 - 0x0028)
class UAudioMixerBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AudioMixer.AudioMixerBlueprintLibrary");
		return ptr;
	}


	void STATIC_StopRecordingOutput();
	void STATIC_StartRecordingOutput();
	void STATIC_SetBypassSourceEffectChainEntry();
	void STATIC_ResumeRecordingOutput();
	void STATIC_RemoveSourceEffectFromPresetChain();
	void STATIC_RemoveMasterSubmixEffect();
	void STATIC_PauseRecordingOutput();
	void STATIC_GetNumberOfEntriesInSourceEffectChain();
	void STATIC_ClearMasterSubmixEffects();
	void STATIC_AddSourceEffectToPresetChain();
	void STATIC_AddMasterSubmixEffect();
};


// Class AudioMixer.SubmixEffectDynamicsProcessorPreset
// 0x0078 (0x00B8 - 0x0040)
class USubmixEffectDynamicsProcessorPreset : public USoundEffectSubmixPreset
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0040(0x0050) MISSED OFFSET
	struct FSubmixEffectDynamicsProcessorSettings      Settings;                                                 // 0x0090(0x0028) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AudioMixer.SubmixEffectDynamicsProcessorPreset");
		return ptr;
	}


	void SetSettings();
};


// Class AudioMixer.SubmixEffectSubmixEQPreset
// 0x0048 (0x0088 - 0x0040)
class USubmixEffectSubmixEQPreset : public USoundEffectSubmixPreset
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0040(0x0038) MISSED OFFSET
	struct FSubmixEffectSubmixEQSettings               Settings;                                                 // 0x0078(0x0010) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AudioMixer.SubmixEffectSubmixEQPreset");
		return ptr;
	}


	void SetSettings();
};


// Class AudioMixer.SubmixEffectReverbPreset
// 0x0090 (0x00D0 - 0x0040)
class USubmixEffectReverbPreset : public USoundEffectSubmixPreset
{
public:
	unsigned char                                      UnknownData00[0x5C];                                      // 0x0040(0x005C) MISSED OFFSET
	struct FSubmixEffectReverbSettings                 Settings;                                                 // 0x009C(0x0034) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AudioMixer.SubmixEffectReverbPreset");
		return ptr;
	}


	void SetSettingsWithReverbEffect();
	void SetSettings();
};


// Class AudioMixer.SynthSound
// 0x0020 (0x0280 - 0x0260)
class USynthSound : public USoundWaveProcedural
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0260(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AudioMixer.SynthSound");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
