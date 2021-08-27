﻿#pragma once

// Name: DBZ-Kakarot, Version: 4.21.2


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// Class ATSpecialTrack.ATMovieSceneCharaIntroductionPropertyTrack
// 0x0000 (FullSize[0x0080] - InheritedSize[0x0080])
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
// 0x0018 (FullSize[0x00F8] - InheritedSize[0x00E0])
class UATMovieSceneCharaIntroductionSection : public UMovieSceneSection
{
public:
	struct FName                                       CharacterID;                                               // 0x00E0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FName                                       PopularNameID;                                             // 0x00E8(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FVector2D                                   Position;                                                  // 0x00F0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATSpecialTrack.ATMovieSceneCharaIntroductionSection");
		return ptr;
	}



};

// Class ATSpecialTrack.ATMovieSceneDirectionPropertyTrack
// 0x0000 (FullSize[0x0080] - InheritedSize[0x0080])
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
// 0x00F8 (FullSize[0x01D8] - InheritedSize[0x00E0])
class UATMovieSceneDirectionSection : public UMovieSceneSection
{
public:
	struct FNameCurve                                  Directions;                                                // 0x00E0(0x0068) (Deprecated, NativeAccessSpecifierPrivate)
	struct FMovieSceneDirectionSectionData             DirectionData;                                             // 0x0148(0x0090) (NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATSpecialTrack.ATMovieSceneDirectionSection");
		return ptr;
	}



};

// Class ATSpecialTrack.ATMovieSceneFadePropertyTrack
// 0x0000 (FullSize[0x0080] - InheritedSize[0x0080])
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
// 0x0008 (FullSize[0x00E8] - InheritedSize[0x00E0])
class UATMovieSceneFadeSection : public UMovieSceneSection
{
public:
	AT_EUMG_FADE_TYPE                                  FadeType;                                                  // 0x00E0(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	AT_EUMG_FADE_COLOR                                 FadeColor;                                                 // 0x00E1(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               bImmidiate;                                                // 0x00E2(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               bStartZero;                                                // 0x00E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               bFirstSection;                                             // 0x00E4(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_V524[0x3];                                     // 0x00E5(0x0003) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATSpecialTrack.ATMovieSceneFadeSection");
		return ptr;
	}



};

// Class ATSpecialTrack.ATMovieSceneFloatSection
// 0x00A0 (FullSize[0x0180] - InheritedSize[0x00E0])
class UATMovieSceneFloatSection : public UMovieSceneSection
{
public:
	struct FMovieSceneFloatChannel                     FloatCurve;                                                // 0x00E0(0x00A0) (NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATSpecialTrack.ATMovieSceneFloatSection");
		return ptr;
	}



};

// Class ATSpecialTrack.ATMovieSceneForcedLodPropertyTrack
// 0x0000 (FullSize[0x0080] - InheritedSize[0x0080])
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
// 0x0000 (FullSize[0x0080] - InheritedSize[0x0080])
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
// 0x0000 (FullSize[0x0080] - InheritedSize[0x0080])
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
// 0x0000 (FullSize[0x0080] - InheritedSize[0x0080])
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
// 0x0008 (FullSize[0x00E8] - InheritedSize[0x00E0])
class UATMovieSceneForcedLodSection : public UMovieSceneSection
{
public:
	int                                                ForcedLodModel;                                            // 0x00E0(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_P5Y4[0x4];                                     // 0x00E4(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATSpecialTrack.ATMovieSceneForcedLodSection");
		return ptr;
	}



};

// Class ATSpecialTrack.ATMovieSceneLipSyncSection
// 0x0010 (FullSize[0x00F0] - InheritedSize[0x00E0])
class UATMovieSceneLipSyncSection : public UMovieSceneSection
{
public:
	struct FName                                       SubtitleID;                                                // 0x00E0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UBlendSpace*                                 BlendSpaceAsset;                                           // 0x00E8(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATSpecialTrack.ATMovieSceneLipSyncSection");
		return ptr;
	}



};

// Class ATSpecialTrack.ATMovieSceneLipSyncTrack
// 0x0010 (FullSize[0x0068] - InheritedSize[0x0058])
class UATMovieSceneLipSyncTrack : public UMovieSceneNameableTrack
{
public:
	TArray<class UMovieSceneSection*>                  AnimationSections;                                         // 0x0058(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATSpecialTrack.ATMovieSceneLipSyncTrack");
		return ptr;
	}



};

// Class ATSpecialTrack.ATMovieSceneLocationPropertyTrack
// 0x0000 (FullSize[0x0080] - InheritedSize[0x0080])
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
// 0x0020 (FullSize[0x0100] - InheritedSize[0x00E0])
class UATMovieSceneLocationSection : public UMovieSceneSection
{
public:
	struct FName                                       AreaID;                                                    // 0x00E0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	AT_EDEMO_TYPE                                      DemoType;                                                  // 0x00E8(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_UJNW[0x7];                                     // 0x00E9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FDemoLocationInfo>                   LocationInfo;                                              // 0x00F0(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATSpecialTrack.ATMovieSceneLocationSection");
		return ptr;
	}



};

// Class ATSpecialTrack.ATMovieSceneMoviePropertyTrack
// 0x0000 (FullSize[0x0080] - InheritedSize[0x0080])
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
// 0x0000 (FullSize[0x00E0] - InheritedSize[0x00E0])
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
// 0x0000 (FullSize[0x0080] - InheritedSize[0x0080])
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
// 0x0040 (FullSize[0x0120] - InheritedSize[0x00E0])
class UATMovieSceneNextPreviewSection : public UMovieSceneSection
{
public:
	unsigned char                                      bTitle : 1;                                                // 0x00E0(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_07TG[0x7];                                     // 0x00E1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FATMovieSceneNextPreviewTitleData           TitleData;                                                 // 0x00E8(0x0010) (Edit, NativeAccessSpecifierPrivate)
	unsigned char                                      bDetail : 1;                                               // 0x00F8(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_7SWE[0x7];                                     // 0x00F9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FATMovieSceneNextPreviewDetailData          DetailData;                                                // 0x0100(0x0020) (Edit, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATSpecialTrack.ATMovieSceneNextPreviewSection");
		return ptr;
	}



};

// Class ATSpecialTrack.ATMovieSceneNextPreviewTrack
// 0x0000 (FullSize[0x0080] - InheritedSize[0x0080])
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
// 0x0000 (FullSize[0x0080] - InheritedSize[0x0080])
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
// 0x0000 (FullSize[0x00E0] - InheritedSize[0x00E0])
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
// 0x0008 (FullSize[0x0088] - InheritedSize[0x0080])
class UATMovieSceneRimLightPropertyTrack : public UMovieScenePropertyTrack
{
public:
	class UMaterialParameterCollection*                MPC;                                                       // 0x0080(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATSpecialTrack.ATMovieSceneRimLightPropertyTrack");
		return ptr;
	}



};

// Class ATSpecialTrack.ATMovieSceneSoundPropertyTrack
// 0x0000 (FullSize[0x0080] - InheritedSize[0x0080])
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
// 0x0030 (FullSize[0x0110] - InheritedSize[0x00E0])
class UATMovieSceneSoundSection : public UMovieSceneSection
{
public:
	struct FName                                       SectionName;                                               // 0x00E0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ATSpecialTrack_EFUNC_TYPE                          FuncCallStart;                                             // 0x00E8(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ATSpecialTrack_EFUNC_TYPE                          FuncCallEnd;                                               // 0x00E9(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_5LOE[0x2];                                     // 0x00EA(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Volume;                                                    // 0x00EC(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SeReqNum;                                                  // 0x00F0(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSoundSeOptionData                          SeOption;                                                  // 0x00F4(0x000C) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FSoundBgmOptionData                         BgmOption;                                                 // 0x0100(0x0008) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FSoundVoiceOptionData                       VoiceOption;                                               // 0x0108(0x0002) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_CCGB[0x6];                                     // 0x010A(0x0006) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATSpecialTrack.ATMovieSceneSoundSection");
		return ptr;
	}



};

// Class ATSpecialTrack.ATMovieSceneSubtitlePropertyTrack
// 0x0000 (FullSize[0x0080] - InheritedSize[0x0080])
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
// 0x0028 (FullSize[0x0108] - InheritedSize[0x00E0])
class UATMovieSceneSubtitleSection : public UMovieSceneSection
{
public:
	bool                                               bEnableSubtitle;                                           // 0x00E0(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_A456[0x7];                                     // 0x00E1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       SubtitleID;                                                // 0x00E8(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               bContinue;                                                 // 0x00F0(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_X3PO[0x3];                                     // 0x00F1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                CharacterNumber;                                           // 0x00F4(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               bEnableLipSync;                                            // 0x00F8(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_CV2G[0x3];                                     // 0x00F9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                BlendSpaceID;                                              // 0x00FC(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               bOnlyVoice;                                                // 0x0100(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               bEnableTargetCh;                                           // 0x0101(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_46U2[0x2];                                     // 0x0102(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                TargetCh;                                                  // 0x0104(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATSpecialTrack.ATMovieSceneSubtitleSection");
		return ptr;
	}



};

// Class ATSpecialTrack.ATMovieSceneTelopSection
// 0x0050 (FullSize[0x0130] - InheritedSize[0x00E0])
class UATMovieSceneTelopSection : public UMovieSceneSection
{
public:
	struct FTelopInfo                                  TelopInfo;                                                 // 0x00E0(0x0028) (Edit, NoDestructor, NativeAccessSpecifierPrivate)
	struct FTelopInfo                                  TelopInfo2;                                                // 0x0108(0x0028) (Edit, NoDestructor, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATSpecialTrack.ATMovieSceneTelopSection");
		return ptr;
	}



};

// Class ATSpecialTrack.ATMovieSceneTelopTrack
// 0x0000 (FullSize[0x0080] - InheritedSize[0x0080])
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
