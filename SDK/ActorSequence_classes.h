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

// Class ActorSequence.ActorSequence
// 0x0028 (0x0370 - 0x0348)
class UActorSequence : public UMovieSceneSequence
{
public:
	class UMovieScene*                                 MovieScene;                                               // 0x0348(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0350(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ActorSequence.ActorSequence");
		return ptr;
	}

};


// Class ActorSequence.ActorSequenceComponent
// 0x0058 (0x0158 - 0x0100)
class UActorSequenceComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0100(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ActorSequence.ActorSequenceComponent");
		return ptr;
	}

};


// Class ActorSequence.ActorSequencePlayer
// 0x0000 (0x07C8 - 0x07C8)
class UActorSequencePlayer : public UMovieSceneSequencePlayer
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ActorSequence.ActorSequencePlayer");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
