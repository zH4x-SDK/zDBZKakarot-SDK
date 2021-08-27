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

// Class CriWareRuntime.AtomAsrRack
// 0x0008 (0x0030 - 0x0028)
class UAtomAsrRack : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CriWareRuntime.AtomAsrRack");
		return ptr;
	}

};


// Class CriWareRuntime.AtomCategory
// 0x0000 (0x0028 - 0x0028)
class UAtomCategory : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CriWareRuntime.AtomCategory");
		return ptr;
	}


	void STATIC_StopByName();
	void STATIC_SetVolumeByName();
	void STATIC_SetAisacControlByName();
	void STATIC_ResetAllAisacControlByName();
	void STATIC_ResetAllAisacControlById();
	void STATIC_PauseByName();
	void STATIC_IsPausedByName();
	void STATIC_GetVolumeByName();
	void STATIC_GetNumAttachedAisacsByName();
	void STATIC_GetNumAttachedAisacsById();
	void STATIC_GetCurrentAisacControlValueByName();
	void STATIC_GetCurrentAisacControlValueById();
	void STATIC_GetAttachedAisacInfoByName();
	void STATIC_GetAttachedAisacInfoById();
};


// Class CriWareRuntime.AtomComponent
// 0x0C60 (0x0EB0 - 0x0250)
class UAtomComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0xC60];                                     // 0x0250(0x0C60) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CriWareRuntime.AtomComponent");
		return ptr;
	}

};


// Class CriWareRuntime.AtomCueSheetLoaderComponent
// 0x0080 (0x02D0 - 0x0250)
class UAtomCueSheetLoaderComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0x80];                                      // 0x0250(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CriWareRuntime.AtomCueSheetLoaderComponent");
		return ptr;
	}

};


// Class CriWareRuntime.AtomDeviceWatcher
// 0x0028 (0x0050 - 0x0028)
class UAtomDeviceWatcher : public UObject
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0028(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CriWareRuntime.AtomDeviceWatcher");
		return ptr;
	}

};


// Class CriWareRuntime.AtomDisposer
// 0x0010 (0x0348 - 0x0338)
class AAtomDisposer : public AActor
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0338(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CriWareRuntime.AtomDisposer");
		return ptr;
	}

};


// Class CriWareRuntime.AtomListenerFocusPoint
// 0x0010 (0x0260 - 0x0250)
class UAtomListenerFocusPoint : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0250(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CriWareRuntime.AtomListenerFocusPoint");
		return ptr;
	}

};


// Class CriWareRuntime.AtomParameterComponent
// 0x0008 (0x0108 - 0x0100)
class UAtomParameterComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0100(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CriWareRuntime.AtomParameterComponent");
		return ptr;
	}

};


// Class CriWareRuntime.AtomProfileData
// 0x0000 (0x0028 - 0x0028)
class UAtomProfileData : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CriWareRuntime.AtomProfileData");
		return ptr;
	}


	void STATIC_CriWareAdx2ProfileDataUpdate();
	void STATIC_CriWareAdx2ProfileDataSort();
};


// Class CriWareRuntime.AtomSound
// 0x0008 (0x0340 - 0x0338)
class AAtomSound : public AActor
{
public:
	class UAtomComponent*                              AtomComponent;                                            // 0x0338(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CriWareRuntime.AtomSound");
		return ptr;
	}

};


// Class CriWareRuntime.AtomSoundData
// 0x0010 (0x0348 - 0x0338)
class AAtomSoundData : public AActor
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0338(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CriWareRuntime.AtomSoundData");
		return ptr;
	}

};


// Class CriWareRuntime.AtomSoundObject
// 0x0018 (0x0048 - 0x0030)
class UAtomSoundObject : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0030(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CriWareRuntime.AtomSoundObject");
		return ptr;
	}

};


// Class CriWareRuntime.AtomSpectrumAnalyzer
// 0x0000 (0x0028 - 0x0028)
class UAtomSpectrumAnalyzer : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CriWareRuntime.AtomSpectrumAnalyzer");
		return ptr;
	}


	void STATIC_GetLevelsDB();
	void STATIC_GetLevels();
	void STATIC_CreateDspSpectra();
};


// Class CriWareRuntime.AtomStatics
// 0x0000 (0x0028 - 0x0028)
class UAtomStatics : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CriWareRuntime.AtomStatics");
		return ptr;
	}


	void STATIC_StopAllSounds();
	void STATIC_SpawnSoundAttached();
	void STATIC_SpawnSoundAtLocation();
	void STATIC_SpawnSound2D();
	void STATIC_PlaySoundForAnimNotify();
	void STATIC_PlaySoundAttached();
	void STATIC_PlaySoundAtLocation();
	void STATIC_PauseAudioOutput();
	void STATIC_LoadAtomConfig();
	void STATIC_CreateRootedAtomComponent();
};


// Class CriWareRuntime.AtomTriggerTableFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UAtomTriggerTableFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CriWareRuntime.AtomTriggerTableFunctionLibrary");
		return ptr;
	}


	void STATIC_GetDataTableRowFromName();
};


// Class CriWareRuntime.CriFsBinderComponent
// 0x0050 (0x02A0 - 0x0250)
class UCriFsBinderComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0250(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CriWareRuntime.CriFsBinderComponent");
		return ptr;
	}

};


// Class CriWareRuntime.CriFsLoader
// 0x0008 (0x0340 - 0x0338)
class ACriFsLoader : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0338(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CriWareRuntime.CriFsLoader");
		return ptr;
	}

};


// Class CriWareRuntime.CriFsLoaderComponent
// 0x0070 (0x02C0 - 0x0250)
class UCriFsLoaderComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0250(0x0008) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnLoadCompleted;                                          // 0x0258(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData01[0x58];                                      // 0x0268(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CriWareRuntime.CriFsLoaderComponent");
		return ptr;
	}

};


// Class CriWareRuntime.CriWareFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UCriWareFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CriWareRuntime.CriWareFunctionLibrary");
		return ptr;
	}


	void STATIC_SetSpeakerAngleArray();
	void STATIC_SetGlobalLabelToSelectorByName();
	void STATIC_SetGameVariableByName();
};


// Class CriWareRuntime.CriWareInitializer
// 0x0000 (0x0028 - 0x0028)
class UCriWareInitializer : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CriWareRuntime.CriWareInitializer");
		return ptr;
	}

};


// Class CriWareRuntime.CriWarePluginSettings
// 0x0268 (0x0290 - 0x0028)
class UCriWarePluginSettings : public UObject
{
public:
	unsigned char                                      UnknownData00[0x268];                                     // 0x0028(0x0268) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CriWareRuntime.CriWarePluginSettings");
		return ptr;
	}

};


// Class CriWareRuntime.ManaComponent
// 0x0150 (0x0250 - 0x0100)
class UManaComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x150];                                     // 0x0100(0x0150) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CriWareRuntime.ManaComponent");
		return ptr;
	}

};


// Class CriWareRuntime.ManaComponentTexture
// 0x0020 (0x00D0 - 0x00B0)
class UManaComponentTexture : public UTexture
{
public:
	int                                                SizeX;                                                    // 0x00B0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	int                                                SizeY;                                                    // 0x00B4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      Format;                                                   // 0x00B8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x17];                                      // 0x00B9(0x0017) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CriWareRuntime.ManaComponentTexture");
		return ptr;
	}

};


// Class CriWareRuntime.ManaSource
// 0x0000 (0x0028 - 0x0028)
class UManaSource : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CriWareRuntime.ManaSource");
		return ptr;
	}

};


// Class CriWareRuntime.ManaMovie
// 0x0040 (0x0068 - 0x0028)
class UManaMovie : public UManaSource
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0028(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CriWareRuntime.ManaMovie");
		return ptr;
	}

};


// Class CriWareRuntime.FileManaMovie
// 0x0018 (0x0080 - 0x0068)
class UFileManaMovie : public UManaMovie
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0068(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CriWareRuntime.FileManaMovie");
		return ptr;
	}

};


// Class CriWareRuntime.DataManaMovie
// 0x0008 (0x0070 - 0x0068)
class UDataManaMovie : public UManaMovie
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0068(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CriWareRuntime.DataManaMovie");
		return ptr;
	}


	void SetDataArray();
	void GetDataArray();
};


// Class CriWareRuntime.ManaPlaylist
// 0x0018 (0x0040 - 0x0028)
class UManaPlaylist : public UManaSource
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0028(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CriWareRuntime.ManaPlaylist");
		return ptr;
	}

};


// Class CriWareRuntime.ManaTexture
// 0x0070 (0x0120 - 0x00B0)
class UManaTexture : public UTexture
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x00B0(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CriWareRuntime.ManaTexture");
		return ptr;
	}

};


// Class CriWareRuntime.MaterialExpressionManaColorSpaceConverter
// 0x0080 (0x00C0 - 0x0040)
class UMaterialExpressionManaColorSpaceConverter : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x80];                                      // 0x0040(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CriWareRuntime.MaterialExpressionManaColorSpaceConverter");
		return ptr;
	}

};


// Class CriWareRuntime.MaterialExpressionManaMovieFormatSwitch
// 0x0048 (0x0088 - 0x0040)
class UMaterialExpressionManaMovieFormatSwitch : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0040(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CriWareRuntime.MaterialExpressionManaMovieFormatSwitch");
		return ptr;
	}

};


// Class CriWareRuntime.MatineeTrackAtomFloatBase
// 0x0000 (0x0090 - 0x0090)
class UMatineeTrackAtomFloatBase : public UInterpTrackFloatBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CriWareRuntime.MatineeTrackAtomFloatBase");
		return ptr;
	}

};


// Class CriWareRuntime.MatineeTrackAisacControlName
// 0x0000 (0x0090 - 0x0090)
class UMatineeTrackAisacControlName : public UMatineeTrackAtomFloatBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CriWareRuntime.MatineeTrackAisacControlName");
		return ptr;
	}

};


// Class CriWareRuntime.MatineeTrackAtomBase
// 0x0000 (0x0070 - 0x0070)
class UMatineeTrackAtomBase : public UInterpTrack
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CriWareRuntime.MatineeTrackAtomBase");
		return ptr;
	}

};


// Class CriWareRuntime.MatineeTrackAtomSoundBase
// 0x0008 (0x0078 - 0x0070)
class UMatineeTrackAtomSoundBase : public UMatineeTrackAtomBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0070(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CriWareRuntime.MatineeTrackAtomSoundBase");
		return ptr;
	}

};


// Class CriWareRuntime.MatineeTrackAtom
// 0x0030 (0x00A8 - 0x0078)
class UMatineeTrackAtom : public UMatineeTrackAtomSoundBase
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0078(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CriWareRuntime.MatineeTrackAtom");
		return ptr;
	}

};


// Class CriWareRuntime.MatineeTrackAtomCategoryName
// 0x0018 (0x0088 - 0x0070)
class UMatineeTrackAtomCategoryName : public UMatineeTrackAtomBase
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0070(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CriWareRuntime.MatineeTrackAtomCategoryName");
		return ptr;
	}

};


// Class CriWareRuntime.MatineeTrackAtomCategoryVolume
// 0x0000 (0x0090 - 0x0090)
class UMatineeTrackAtomCategoryVolume : public UMatineeTrackAtomFloatBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CriWareRuntime.MatineeTrackAtomCategoryVolume");
		return ptr;
	}

};


// Class CriWareRuntime.MatineeTrackAtomCueId
// 0x0038 (0x00B0 - 0x0078)
class UMatineeTrackAtomCueId : public UMatineeTrackAtomSoundBase
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0078(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CriWareRuntime.MatineeTrackAtomCueId");
		return ptr;
	}

};


// Class CriWareRuntime.MatineeTrackAtomCueName
// 0x0038 (0x00B0 - 0x0078)
class UMatineeTrackAtomCueName : public UMatineeTrackAtomSoundBase
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0078(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CriWareRuntime.MatineeTrackAtomCueName");
		return ptr;
	}

};


// Class CriWareRuntime.MatineeTrackAtomSelector
// 0x0010 (0x0080 - 0x0070)
class UMatineeTrackAtomSelector : public UInterpTrack
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0070(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CriWareRuntime.MatineeTrackAtomSelector");
		return ptr;
	}

};


// Class CriWareRuntime.MatineeTrackInstAtom
// 0x0020 (0x0048 - 0x0028)
class UMatineeTrackInstAtom : public UInterpTrackInst
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0028(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CriWareRuntime.MatineeTrackInstAtom");
		return ptr;
	}

};


// Class CriWareRuntime.MovieSceneAtomSection
// 0x0158 (0x0238 - 0x00E0)
class UMovieSceneAtomSection : public UMovieSceneSection
{
public:
	unsigned char                                      UnknownData00[0x158];                                     // 0x00E0(0x0158) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CriWareRuntime.MovieSceneAtomSection");
		return ptr;
	}

};


// Class CriWareRuntime.MovieSceneAtomTrack
// 0x0010 (0x0068 - 0x0058)
class UMovieSceneAtomTrack : public UMovieSceneNameableTrack
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0058(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CriWareRuntime.MovieSceneAtomTrack");
		return ptr;
	}

};


// Class CriWareRuntime.SoundAtomConfig
// 0x0080 (0x00A8 - 0x0028)
class USoundAtomConfig : public UObject
{
public:
	unsigned char                                      UnknownData00[0x80];                                      // 0x0028(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CriWareRuntime.SoundAtomConfig");
		return ptr;
	}

};


// Class CriWareRuntime.SoundAtomCue
// 0x0070 (0x0098 - 0x0028)
class USoundAtomCue : public UObject
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x0028(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CriWareRuntime.SoundAtomCue");
		return ptr;
	}

};


// Class CriWareRuntime.SoundAtomCueSheet
// 0x0100 (0x0128 - 0x0028)
class USoundAtomCueSheet : public UObject
{
public:
	bool                                               Contains;                                                 // 0x0028(0x0001) (Edit, ZeroConstructor, Transient, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0xFF];                                      // 0x0029(0x00FF) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CriWareRuntime.SoundAtomCueSheet");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
