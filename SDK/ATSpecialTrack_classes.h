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

// Class ATSpecialTrack.ATMovieSceneCharaIntroductionPropertyTrack
// 0x0000 (0x0080 - 0x0080)
class UATMovieSceneCharaIntroductionPropertyTrack : public UMovieScenePropertyTrack
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATSpecialTrack.ATMovieSceneCharaIntroductionPropertyTrack");
		return ptr;
	}

};


// Class ATSpecialTrack.ATMovieSceneCharaIntroductionSection
// 0x0018 (0x00F8 - 0x00E0)
class UATMovieSceneCharaIntroductionSection : public UMovieSceneSection
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x00E0(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATSpecialTrack.ATMovieSceneCharaIntroductionSection");
		return ptr;
	}

};


// Class ATSpecialTrack.ATMovieSceneDirectionPropertyTrack
// 0x0000 (0x0080 - 0x0080)
class UATMovieSceneDirectionPropertyTrack : public UMovieScenePropertyTrack
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATSpecialTrack.ATMovieSceneDirectionPropertyTrack");
		return ptr;
	}

};


// Class ATSpecialTrack.ATMovieSceneDirectionSection
// 0x00F8 (0x01D8 - 0x00E0)
class UATMovieSceneDirectionSection : public UMovieSceneSection
{
public:
	unsigned char                                      UnknownData00[0xF8];                                      // 0x00E0(0x00F8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATSpecialTrack.ATMovieSceneDirectionSection");
		return ptr;
	}

};


// Class ATSpecialTrack.ATMovieSceneFadePropertyTrack
// 0x0000 (0x0080 - 0x0080)
class UATMovieSceneFadePropertyTrack : public UMovieScenePropertyTrack
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATSpecialTrack.ATMovieSceneFadePropertyTrack");
		return ptr;
	}

};


// Class ATSpecialTrack.ATMovieSceneFadeSection
// 0x0008 (0x00E8 - 0x00E0)
class UATMovieSceneFadeSection : public UMovieSceneSection
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00E0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATSpecialTrack.ATMovieSceneFadeSection");
		return ptr;
	}

};


// Class ATSpecialTrack.ATMovieSceneFloatSection
// 0x00A0 (0x0180 - 0x00E0)
class UATMovieSceneFloatSection : public UMovieSceneSection
{
public:
	struct FMovieSceneFloatChannel                     FloatCurve;                                               // 0x00E0(0x00A0)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATSpecialTrack.ATMovieSceneFloatSection");
		return ptr;
	}

};


// Class ATSpecialTrack.ATMovieSceneForcedLodPropertyTrack
// 0x0000 (0x0080 - 0x0080)
class UATMovieSceneForcedLodPropertyTrack : public UMovieScenePropertyTrack
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATSpecialTrack.ATMovieSceneForcedLodPropertyTrack");
		return ptr;
	}

};


// Class ATSpecialTrack.ATMovieSceneForcedLodForCharacterPropertyTrack
// 0x0000 (0x0080 - 0x0080)
class UATMovieSceneForcedLodForCharacterPropertyTrack : public UATMovieSceneForcedLodPropertyTrack
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATSpecialTrack.ATMovieSceneForcedLodForCharacterPropertyTrack");
		return ptr;
	}

};


// Class ATSpecialTrack.ATMovieSceneForcedLodForLandscapePropertyTrack
// 0x0000 (0x0080 - 0x0080)
class UATMovieSceneForcedLodForLandscapePropertyTrack : public UATMovieSceneForcedLodPropertyTrack
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATSpecialTrack.ATMovieSceneForcedLodForLandscapePropertyTrack");
		return ptr;
	}

};


// Class ATSpecialTrack.ATMovieSceneForcedLodForOtherPropertyTrack
// 0x0000 (0x0080 - 0x0080)
class UATMovieSceneForcedLodForOtherPropertyTrack : public UATMovieSceneForcedLodPropertyTrack
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATSpecialTrack.ATMovieSceneForcedLodForOtherPropertyTrack");
		return ptr;
	}

};


// Class ATSpecialTrack.ATMovieSceneForcedLodSection
// 0x0008 (0x00E8 - 0x00E0)
class UATMovieSceneForcedLodSection : public UMovieSceneSection
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00E0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATSpecialTrack.ATMovieSceneForcedLodSection");
		return ptr;
	}

};


// Class ATSpecialTrack.ATMovieSceneLipSyncSection
// 0x0010 (0x00F0 - 0x00E0)
class UATMovieSceneLipSyncSection : public UMovieSceneSection
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x00E0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATSpecialTrack.ATMovieSceneLipSyncSection");
		return ptr;
	}

};


// Class ATSpecialTrack.ATMovieSceneLipSyncTrack
// 0x0010 (0x0068 - 0x0058)
class UATMovieSceneLipSyncTrack : public UMovieSceneNameableTrack
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0058(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATSpecialTrack.ATMovieSceneLipSyncTrack");
		return ptr;
	}

};


// Class ATSpecialTrack.ATMovieSceneLocationPropertyTrack
// 0x0000 (0x0080 - 0x0080)
class UATMovieSceneLocationPropertyTrack : public UMovieScenePropertyTrack
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATSpecialTrack.ATMovieSceneLocationPropertyTrack");
		return ptr;
	}

};


// Class ATSpecialTrack.ATMovieSceneLocationSection
// 0x0020 (0x0100 - 0x00E0)
class UATMovieSceneLocationSection : public UMovieSceneSection
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x00E0(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATSpecialTrack.ATMovieSceneLocationSection");
		return ptr;
	}

};


// Class ATSpecialTrack.ATMovieSceneMoviePropertyTrack
// 0x0000 (0x0080 - 0x0080)
class UATMovieSceneMoviePropertyTrack : public UMovieScenePropertyTrack
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATSpecialTrack.ATMovieSceneMoviePropertyTrack");
		return ptr;
	}

};


// Class ATSpecialTrack.ATMovieSceneMovieSection
// 0x0000 (0x00E0 - 0x00E0)
class UATMovieSceneMovieSection : public UMovieSceneSection
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATSpecialTrack.ATMovieSceneMovieSection");
		return ptr;
	}

};


// Class ATSpecialTrack.ATMovieSceneNearClipPropertyTrack
// 0x0000 (0x0080 - 0x0080)
class UATMovieSceneNearClipPropertyTrack : public UMovieScenePropertyTrack
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATSpecialTrack.ATMovieSceneNearClipPropertyTrack");
		return ptr;
	}

};


// Class ATSpecialTrack.ATMovieSceneNextPreviewSection
// 0x0040 (0x0120 - 0x00E0)
class UATMovieSceneNextPreviewSection : public UMovieSceneSection
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x00E0(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATSpecialTrack.ATMovieSceneNextPreviewSection");
		return ptr;
	}

};


// Class ATSpecialTrack.ATMovieSceneNextPreviewTrack
// 0x0000 (0x0080 - 0x0080)
class UATMovieSceneNextPreviewTrack : public UMovieScenePropertyTrack
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATSpecialTrack.ATMovieSceneNextPreviewTrack");
		return ptr;
	}

};


// Class ATSpecialTrack.ATMovieSceneQuestMainLogoPropertyTrack
// 0x0000 (0x0080 - 0x0080)
class UATMovieSceneQuestMainLogoPropertyTrack : public UMovieScenePropertyTrack
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATSpecialTrack.ATMovieSceneQuestMainLogoPropertyTrack");
		return ptr;
	}

};


// Class ATSpecialTrack.ATMovieSceneQuestMainLogoSection
// 0x0000 (0x00E0 - 0x00E0)
class UATMovieSceneQuestMainLogoSection : public UMovieSceneSection
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATSpecialTrack.ATMovieSceneQuestMainLogoSection");
		return ptr;
	}

};


// Class ATSpecialTrack.ATMovieSceneRimLightPropertyTrack
// 0x0008 (0x0088 - 0x0080)
class UATMovieSceneRimLightPropertyTrack : public UMovieScenePropertyTrack
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0080(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATSpecialTrack.ATMovieSceneRimLightPropertyTrack");
		return ptr;
	}

};


// Class ATSpecialTrack.ATMovieSceneSoundPropertyTrack
// 0x0000 (0x0080 - 0x0080)
class UATMovieSceneSoundPropertyTrack : public UMovieScenePropertyTrack
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATSpecialTrack.ATMovieSceneSoundPropertyTrack");
		return ptr;
	}

};


// Class ATSpecialTrack.ATMovieSceneSoundSection
// 0x0030 (0x0110 - 0x00E0)
class UATMovieSceneSoundSection : public UMovieSceneSection
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x00E0(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATSpecialTrack.ATMovieSceneSoundSection");
		return ptr;
	}

};


// Class ATSpecialTrack.ATMovieSceneSubtitlePropertyTrack
// 0x0000 (0x0080 - 0x0080)
class UATMovieSceneSubtitlePropertyTrack : public UMovieScenePropertyTrack
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATSpecialTrack.ATMovieSceneSubtitlePropertyTrack");
		return ptr;
	}

};


// Class ATSpecialTrack.ATMovieSceneSubtitleSection
// 0x0028 (0x0108 - 0x00E0)
class UATMovieSceneSubtitleSection : public UMovieSceneSection
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x00E0(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATSpecialTrack.ATMovieSceneSubtitleSection");
		return ptr;
	}

};


// Class ATSpecialTrack.ATMovieSceneTelopSection
// 0x0050 (0x0130 - 0x00E0)
class UATMovieSceneTelopSection : public UMovieSceneSection
{
public:
	struct FTelopInfo                                  TelopInfo;                                                // 0x00E0(0x0028) (Edit)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0108(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATSpecialTrack.ATMovieSceneTelopSection");
		return ptr;
	}

};


// Class ATSpecialTrack.ATMovieSceneTelopTrack
// 0x0000 (0x0080 - 0x0080)
class UATMovieSceneTelopTrack : public UMovieScenePropertyTrack
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATSpecialTrack.ATMovieSceneTelopTrack");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
