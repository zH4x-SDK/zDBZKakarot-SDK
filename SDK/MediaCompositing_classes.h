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

// Class MediaCompositing.MovieSceneMediaSection
// 0x0030 (0x0110 - 0x00E0)
class UMovieSceneMediaSection : public UMovieSceneSection
{
public:
	class UMediaSource*                                MediaSource;                                              // 0x00E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x28];                                      // 0x00E8(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MediaCompositing.MovieSceneMediaSection");
		return ptr;
	}

};


// Class MediaCompositing.MovieSceneMediaTrack
// 0x0010 (0x0068 - 0x0058)
class UMovieSceneMediaTrack : public UMovieSceneNameableTrack
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0058(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MediaCompositing.MovieSceneMediaTrack");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
