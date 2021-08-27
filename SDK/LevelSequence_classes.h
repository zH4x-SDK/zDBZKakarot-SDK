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

// Class LevelSequence.DefaultLevelSequenceInstanceData
// 0x0048 (0x0070 - 0x0028)
class UDefaultLevelSequenceInstanceData : public UObject
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0028(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LevelSequence.DefaultLevelSequenceInstanceData");
		return ptr;
	}

};


// Class LevelSequence.LevelSequence
// 0x0150 (0x0498 - 0x0348)
class ULevelSequence : public UMovieSceneSequence
{
public:
	class UMovieScene*                                 MovieScene;                                               // 0x0348(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x148];                                     // 0x0350(0x0148) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LevelSequence.LevelSequence");
		return ptr;
	}

};


// Class LevelSequence.LevelSequenceBurnInInitSettings
// 0x0000 (0x0028 - 0x0028)
class ULevelSequenceBurnInInitSettings : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LevelSequence.LevelSequenceBurnInInitSettings");
		return ptr;
	}

};


// Class LevelSequence.LevelSequenceBurnInOptions
// 0x0028 (0x0050 - 0x0028)
class ULevelSequenceBurnInOptions : public UObject
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0028(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LevelSequence.LevelSequenceBurnInOptions");
		return ptr;
	}

};


// Class LevelSequence.LevelSequenceActor
// 0x00A8 (0x03E0 - 0x0338)
class ALevelSequenceActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0xA8];                                      // 0x0338(0x00A8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LevelSequence.LevelSequenceActor");
		return ptr;
	}

};


// Class LevelSequence.LevelSequenceBurnIn
// 0x0090 (0x0298 - 0x0208)
class ULevelSequenceBurnIn : public UUserWidget
{
public:
	unsigned char                                      UnknownData00[0x90];                                      // 0x0208(0x0090) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LevelSequence.LevelSequenceBurnIn");
		return ptr;
	}

};


// Class LevelSequence.LevelSequenceDirector
// 0x0008 (0x0030 - 0x0028)
class ULevelSequenceDirector : public UObject
{
public:
	class ULevelSequencePlayer*                        Player;                                                   // 0x0028(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LevelSequence.LevelSequenceDirector");
		return ptr;
	}


	void OnCreated();
};


// Class LevelSequence.LegacyLevelSequenceDirectorBlueprint
// 0x0000 (0x00E0 - 0x00E0)
class ULegacyLevelSequenceDirectorBlueprint : public UBlueprint
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LevelSequence.LegacyLevelSequenceDirectorBlueprint");
		return ptr;
	}

};


// Class LevelSequence.LevelSequencePlayer
// 0x00A0 (0x0868 - 0x07C8)
class ULevelSequencePlayer : public UMovieSceneSequencePlayer
{
public:
	unsigned char                                      UnknownData00[0xA0];                                      // 0x07C8(0x00A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LevelSequence.LevelSequencePlayer");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
