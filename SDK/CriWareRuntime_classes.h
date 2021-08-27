#pragma once

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

// Class CriWareRuntime.AtomAsrRack
// 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
class UAtomAsrRack : public UObject
{
public:
	int                                                RackId;                                                    // 0x0028(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_LZ9O[0x4];                                     // 0x002C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CriWareRuntime.AtomAsrRack");
		return ptr;
	}



	void SetEffectBypass(const struct FString& BusName, const struct FString& EffectName, bool Bypasses);
	void SetBusVolumeByName(const struct FString& BusName, float Volume);
	void SetBusSendLevelByName(const struct FString& SourceBusName, const struct FString& DestBusName, float Level);
	class UAtomAsrRack* STATIC_GetDefaultAsrRack();
	bool GetBusAnalyzerInfo(const struct FString& DspBusName, int* num_channels, TArray<float>* rms_levels, TArray<float>* peak_levels, TArray<float>* peak_hold_levels);
	class UAtomAsrRack* STATIC_GetAsrRack(int AsrRackId);
	void DetachDspBusSetting();
	void AttachDspBusSetting(const struct FString& SettingName);
	void ApplyDspBusSnapshot(const struct FString& SnapshotName, int Milliseconds);
};

// Class CriWareRuntime.AtomCategory
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UAtomCategory : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CriWareRuntime.AtomCategory");
		return ptr;
	}



	void STATIC_StopByName(const struct FString& CategoryName);
	void STATIC_SetVolumeByName(const struct FString& CategoryName, float Volume);
	void STATIC_SetAisacControlByName(const struct FString& CategoryName, const struct FString& AisacName, float Value);
	bool STATIC_ResetAllAisacControlByName(const struct FString& CategoryName);
	bool STATIC_ResetAllAisacControlById(int CategoryId);
	void STATIC_PauseByName(const struct FString& CategoryName, bool bPause);
	bool STATIC_IsPausedByName(const struct FString& CategoryName);
	float STATIC_GetVolumeByName(const struct FString& CategoryName);
	int STATIC_GetNumAttachedAisacsByName(const struct FString& CategoryName);
	int STATIC_GetNumAttachedAisacsById(int CategoryId);
	float STATIC_GetCurrentAisacControlValueByName(const struct FString& CategoryName, const struct FString& AisacControlName);
	float STATIC_GetCurrentAisacControlValueById(int CategoryId, int AisacControlId);
	void STATIC_GetAttachedAisacInfoByName(const struct FString& CategoryName, int AisacAttachedIndex, bool* IsSuccess, struct FAtomAisacInfo* AisacInfo);
	void STATIC_GetAttachedAisacInfoById(int CategoryId, int AisacAttachedIndex, bool* IsSuccess, struct FAtomAisacInfo* AisacInfo);
};

// Class CriWareRuntime.AtomComponent
// 0x0C68 (FullSize[0x0EB0] - InheritedSize[0x0248])
class UAtomComponent : public USceneComponent
{
public:
	class USoundAtomCue*                               Sound;                                                     // 0x0248(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bAutoDestroy : 1;                                          // 0x0250(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_UTNW[0x3];                                     // 0x0251(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               bPersistAcrossLevelTransition;                             // 0x0254(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_V3S0[0x3];                                     // 0x0255(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      bStopWhenOwnerDestroyed : 1;                               // 0x0258(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bIsUISound : 1;                                            // 0x0258(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_UPVN[0x7];                                     // 0x0259(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              DefaultVolume;                                             // 0x0260(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bEnableMultipleSoundPlayback;                              // 0x0264(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUsePlaylist;                                              // 0x0265(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_93G2[0x2];                                     // 0x0266(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAtomSoundObject*                            DefaultSoundObject;                                        // 0x0268(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                DefaultBlockIndex;                                         // 0x0270(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_MBI4[0x4];                                     // 0x0274(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FAtomAisacControlParam>              DefaultAisacControl;                                       // 0x0278(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FAtomSelectorParam>                  DefaultSelectorLabel;                                      // 0x0288(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnAudioFinished;                                           // 0x0298(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UWorld*                                      PlayWorld;                                                 // 0x02A8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGameViewportClient*                         GameViewport;                                              // 0x02B0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_T7FR[0x18];                                    // 0x02B8(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      bOverrideAttenuation : 1;                                  // 0x02D0(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_NL24[0x7];                                     // 0x02D1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USoundAttenuation*                           AttenuationSettings;                                       // 0x02D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSoundAttenuationSettings                   AttenuationOverrides;                                      // 0x02E0(0x02A8) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_37RW[0x928];                                   // 0x0588(0x0928) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CriWareRuntime.AtomComponent");
		return ptr;
	}



	void Stop();
	void SetVolume(float Volume);
	void SetSoundObject(class UAtomSoundObject* SoundObject);
	void SetSound(class USoundAtomCue* NewSound);
	void SetSelectorLabel(const struct FString& Selector, const struct FString& Label);
	void SetPitchMultiplier(float NewPitchMultiplier);
	void SetPitch(float Pitch);
	void SetNextBlockIndex(int BlockIndex);
	void STATIC_SetDefaultAttenuationEnable(bool bEnable);
	void SetBusSendLevelOffsetByName(const struct FString& BusName, float LevelOffset);
	void SetBusSendLevelOffset(int BusId, float LevelOffset);
	void SetBusSendLevelByName(const struct FString& BusName, float Level);
	void SetBusSendLevel(int BusId, float Level);
	void SetAsrRackIdArray(TArray<int> AsrRackIDs);
	void SetAsrRackID(int asr_rack_id);
	void SetAisacByName(const struct FString& ControlName, float ControlValue);
	void Play(float StartTime);
	void Pause(bool bPause);
	void OnAudioFinished__DelegateSignature();
	bool IsPlaying();
	bool IsPaused();
	float GetTime();
	CriWareRuntime_EAtomComponentStatus GetStatus();
	float GetSequencePosition();
	int GetNumQueuedSounds();
	bool STATIC_GetDefaultAttenuationEnable();
	struct FString GetCueName();
	int GetAtomComponentID();
	void FadeOut(float FadeOutDuration, float FadeVolumeLevel);
	void FadeIn(float FadeInDuration, float FadeVolumeLevel, float StartTime);
	void EnqueueSound(class USoundAtomCue* NewSound);
	void STATIC_DestroyComponentByID(int TargetID);
};

// Class CriWareRuntime.AtomCueSheetLoaderComponent
// 0x0088 (FullSize[0x02D0] - InheritedSize[0x0248])
class UAtomCueSheetLoaderComponent : public USceneComponent
{
public:
	struct FSoftObjectPath                             CueSheetReference;                                         // 0x0248(0x0018) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCriFsBinderComponent*                       BinderComponent;                                           // 0x0260(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnLoadCompleted;                                           // 0x0268(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnLoadError;                                               // 0x0278(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_6JE3[0x30];                                    // 0x0288(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USoundAtomCueSheet*                          CueSheet;                                                  // 0x02B8(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_S3S8[0x10];                                    // 0x02C0(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CriWareRuntime.AtomCueSheetLoaderComponent");
		return ptr;
	}



	void OnLoadError__DelegateSignature();
	void OnLoadCompleted__DelegateSignature();
	void OnAtomCueSheetLoaded__DelegateSignature(class USoundAtomCueSheet* Loaded);
	void STATIC_LoadAtomCueSheet(class UObject* WorldContextObject, const struct FScriptDelegate& OnLoaded, const struct FLatentActionInfo& LatentInfo);
	void Load();
	CriWareRuntime_EAtomCueSheetLoaderComponentStatus GetStatus();
	class USoundAtomCueSheet* GetAtomCueSheet();
};

// Class CriWareRuntime.AtomDeviceWatcher
// 0x0028 (FullSize[0x0050] - InheritedSize[0x0028])
class UAtomDeviceWatcher : public UObject
{
public:
	struct FScriptMulticastDelegate                    OnDeviceUpdated;                                           // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_7U8Z[0x18];                                    // 0x0038(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CriWareRuntime.AtomDeviceWatcher");
		return ptr;
	}



	void OnDeviceUpdated__DelegateSignature();
	struct FString GetDeviceName();
	int GetDeviceChannelCount();
};

// Class CriWareRuntime.AtomDisposer
// 0x0010 (FullSize[0x0348] - InheritedSize[0x0338])
class AAtomDisposer : public AActor
{
public:
	unsigned char                                      UnknownData_JCZ5[0x10];                                    // 0x0338(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CriWareRuntime.AtomDisposer");
		return ptr;
	}



};

// Class CriWareRuntime.AtomListenerFocusPoint
// 0x0018 (FullSize[0x0260] - InheritedSize[0x0248])
class UAtomListenerFocusPoint : public USceneComponent
{
public:
	unsigned char                                      UnknownData_7MU3[0x4];                                     // 0x0248(0x0004) Fix Super Size
	float                                              DirectionFocusLevel;                                       // 0x024C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_WVEX[0x10];                                    // 0x0250(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CriWareRuntime.AtomListenerFocusPoint");
		return ptr;
	}



};

// Class CriWareRuntime.AtomParameterComponent
// 0x0008 (FullSize[0x0108] - InheritedSize[0x0100])
class UAtomParameterComponent : public UActorComponent
{
public:
	class UAtomSoundObject*                            SoundObject;                                               // 0x0100(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CriWareRuntime.AtomParameterComponent");
		return ptr;
	}



};

// Class CriWareRuntime.AtomProfileData
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UAtomProfileData : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CriWareRuntime.AtomProfileData");
		return ptr;
	}



	TArray<struct FAtomProfileItem> STATIC_CriWareAdx2ProfileDataUpdate(class UObject* WorldContextObject);
	void STATIC_CriWareAdx2ProfileDataSort(TArray<struct FAtomProfileItem> original_item, CriWareRuntime_EAtomProfileSortType sort_type, CriWareRuntime_EAtomSortOrderType order_type, TArray<struct FAtomProfileItem>* sorted_item);
};

// Class CriWareRuntime.AtomSound
// 0x0008 (FullSize[0x0340] - InheritedSize[0x0338])
class AAtomSound : public AActor
{
public:
	class UAtomComponent*                              AtomComponent;                                             // 0x0338(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CriWareRuntime.AtomSound");
		return ptr;
	}



};

// Class CriWareRuntime.AtomSoundData
// 0x0010 (FullSize[0x0348] - InheritedSize[0x0338])
class AAtomSoundData : public AActor
{
public:
	class USoundAtomCueSheet*                          CueSheet;                                                  // 0x0338(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_TJ79[0x8];                                     // 0x0340(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CriWareRuntime.AtomSoundData");
		return ptr;
	}



};

// Class CriWareRuntime.AtomSoundObject
// 0x0018 (FullSize[0x0048] - InheritedSize[0x0030])
class UAtomSoundObject : public UDataAsset
{
public:
	bool                                               EnableVoiceLimitScope;                                     // 0x0030(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               EnableCategoryCueLimitScope;                               // 0x0031(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_8Q5J[0x16];                                    // 0x0032(0x0016) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CriWareRuntime.AtomSoundObject");
		return ptr;
	}



};

// Class CriWareRuntime.AtomSpectrumAnalyzer
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UAtomSpectrumAnalyzer : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CriWareRuntime.AtomSpectrumAnalyzer");
		return ptr;
	}



	void STATIC_GetLevelsDB(float display_range, TArray<float>* spectra);
	void STATIC_GetLevels(TArray<float>* spectra);
	void STATIC_CreateDspSpectra(class UAtomAsrRack* asr_rack, const struct FString& bus_name, int num_bands);
};

// Class CriWareRuntime.AtomStatics
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UAtomStatics : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CriWareRuntime.AtomStatics");
		return ptr;
	}



	void STATIC_StopAllSounds();
	class UAtomComponent* STATIC_SpawnSoundAttached(class USoundAtomCue* Sound, class USceneComponent* AttachToComponent, const struct FName& AttachPointName, const struct FVector& Location, const struct FRotator& Rotation, TEnumAsByte<Engine_EAttachLocation> LocationType, bool bStopWhenAttachedToDestroyed, float VolumeMultiplier, float PitchMultiplier, float StartTime, class USoundAttenuation* AttenuationSettings, class USoundConcurrency* ConcurrencySettings, bool bAutoDestroy);
	class UAtomComponent* STATIC_SpawnSoundAtLocation(class UObject* WorldContextObject, class USoundAtomCue* Sound, const struct FVector& Location, const struct FRotator& Rotation, float VolumeMultiplier, float PitchMultiplier, float StartTime, class USoundAttenuation* AttenuationSettings, class USoundConcurrency* ConcurrencySettings, bool bAutoDestroy);
	class UAtomComponent* STATIC_SpawnSound2D(class UObject* WorldContextObject, class USoundAtomCue* Sound, float PitchMultiplier, float StartTime, bool bPersistAcrossLevelTransition, bool bAutoDestroy);
	void STATIC_PlaySoundForAnimNotify(class USoundAtomCue* Sound, class USceneComponent* AttachToComponent, const struct FName& AttachPointName, const struct FVector& Location, bool bStopWhenAttachedToDestroyed, float VolumeMultiplier, float PitchMultiplier, float StartTime, class USoundAttenuation* AttenuationSettings);
	class UAtomComponent* STATIC_PlaySoundAttached(class USoundAtomCue* Sound, class USceneComponent* AttachToComponent, const struct FName& AttachPointName, const struct FVector& Location, bool bStopWhenAttachedToDestroyed, float VolumeMultiplier, float PitchMultiplier, float StartTime, class USoundAttenuation* AttenuationSettings);
	void STATIC_PlaySoundAtLocation(class UObject* WorldContextObject, class USoundAtomCue* Sound, const struct FVector& Location, const struct FRotator& Rotation, float VolumeMultiplier, float PitchMultiplier, float StartTime, class USoundAttenuation* AttenuationSettings, class USoundConcurrency* ConcurrencySettings);
	void STATIC_PauseAudioOutput(bool bPause);
	bool STATIC_LoadAtomConfig(class USoundAtomConfig* AcfObject);
	class UAtomComponent* STATIC_CreateRootedAtomComponent(class UObject* WorldContextObject, bool bAutoDestroy);
};

// Class CriWareRuntime.AtomTriggerTableFunctionLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UAtomTriggerTableFunctionLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CriWareRuntime.AtomTriggerTableFunctionLibrary");
		return ptr;
	}



	bool STATIC_GetDataTableRowFromName(class UDataTable* Table, const struct FName& RowName, struct FAtomTriggerRow* OutRow);
};

// Class CriWareRuntime.CriFsBinderComponent
// 0x0058 (FullSize[0x02A0] - InheritedSize[0x0248])
class UCriFsBinderComponent : public USceneComponent
{
public:
	struct FString                                     FilePath;                                                  // 0x0248(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnBindCompleted;                                           // 0x0258(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnBindError;                                               // 0x0268(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_XFY8[0x28];                                    // 0x0278(0x0028) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CriWareRuntime.CriFsBinderComponent");
		return ptr;
	}



	void Stop();
	void OnBindError__DelegateSignature();
	void OnBindCompleted__DelegateSignature();
	CriWareRuntime_ECriFsBinderStatus GetStatus();
	void Bind();
};

// Class CriWareRuntime.CriFsLoader
// 0x0008 (FullSize[0x0340] - InheritedSize[0x0338])
class ACriFsLoader : public AActor
{
public:
	class UCriFsLoaderComponent*                       LoaderComponent;                                           // 0x0338(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CriWareRuntime.CriFsLoader");
		return ptr;
	}



};

// Class CriWareRuntime.CriFsLoaderComponent
// 0x0078 (FullSize[0x02C0] - InheritedSize[0x0248])
class UCriFsLoaderComponent : public USceneComponent
{
public:
	struct FString                                     FilePath;                                                  // 0x0248(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnLoadCompleted;                                           // 0x0258(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnLoadError;                                               // 0x0268(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_9A9O[0x48];                                    // 0x0278(0x0048) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CriWareRuntime.CriFsLoaderComponent");
		return ptr;
	}



	void OnLoadError__DelegateSignature();
	void OnLoadCompleted__DelegateSignature();
	void Load();
	CriWareRuntime_ECriFsLoaderStatus GetStatus();
	TArray<unsigned char> GetDataArray();
};

// Class CriWareRuntime.CriWareFunctionLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UCriWareFunctionLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CriWareRuntime.CriWareFunctionLibrary");
		return ptr;
	}



	void STATIC_SetSpeakerAngleArray(CriWareRuntime_ECriWareSpeakerSystem SpeakerSystem, TArray<float> Angles);
	void STATIC_SetGlobalLabelToSelectorByName(const struct FString& SelectorName, const struct FString& LabelName);
	void STATIC_SetGameVariableByName(const struct FString& GameVariableName, float Value);
};

// Class CriWareRuntime.CriWareInitializer
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
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
// 0x0268 (FullSize[0x0290] - InheritedSize[0x0028])
class UCriWarePluginSettings : public UObject
{
public:
	bool                                               bNoExistCriWareIni;                                        // 0x0028(0x0001) (Edit, ZeroConstructor, Config, DisableEditOnInstance, EditConst, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_2QXT[0x7];                                     // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FDirectoryPath                              NonAssetContentDir;                                        // 0x0030(0x0010) (Edit, NativeAccessSpecifierPublic)
	struct FString                                     ContentDir;                                                // 0x0040(0x0010) (ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_JTIR[0x10];                                    // 0x0050(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                NumBinders;                                                // 0x0060(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_8NXR[0x4];                                     // 0x0064(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                MaxBinds;                                                  // 0x0068(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_1J6E[0x4];                                     // 0x006C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                NumLoaders;                                                // 0x0070(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_HCBA[0x4];                                     // 0x0074(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                MaxPath;                                                   // 0x0078(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_4CI0[0x4];                                     // 0x007C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               OutputsLogFileSystem;                                      // 0x0080(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_OAJL[0x3];                                     // 0x0081(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                PS4_FileAccessThreadAffinityMask;                          // 0x0084(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_HLDN[0x4];                                     // 0x0088(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                PS4_DataDecompressionThreadAffinityMask;                   // 0x008C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_SUQS[0x4];                                     // 0x0090(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                PS4_MemoryFileSystemThreadAffinityMask;                    // 0x0094(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_APA2[0x4];                                     // 0x0098(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                PS4_FileAccessThreadPriority;                              // 0x009C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_O4YM[0x4];                                     // 0x00A0(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                PS4_DataDecompressionThreadPriority;                       // 0x00A4(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_VEH5[0x4];                                     // 0x00A8(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                PS4_MemoryFileSystemThreadPriority;                        // 0x00AC(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_345H[0x4];                                     // 0x00B0(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               AutomaticallyCreateCueAsset;                               // 0x00B4(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               UsesInGamePreview;                                         // 0x00B5(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_UWFZ[0x1];                                     // 0x00B6(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               OutputsLogAtom;                                            // 0x00B7(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_I6FJ[0x4];                                     // 0x00B8(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                MaxVirtualVoices;                                          // 0x00BC(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_J7JW[0x4];                                     // 0x00C0(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                NumStandardMemoryVoices;                                   // 0x00C4(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_JK8G[0x4];                                     // 0x00C8(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                StandardMemoryVoiceNumChannels;                            // 0x00CC(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_2OE1[0x4];                                     // 0x00D0(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                StandardMemoryVoiceSamplingRate;                           // 0x00D4(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_BJWA[0x4];                                     // 0x00D8(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                NumStandardStreamingVoices;                                // 0x00DC(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_N6FJ[0x4];                                     // 0x00E0(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                StandardStreamingVoiceNumChannels;                         // 0x00E4(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_2NRN[0x4];                                     // 0x00E8(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                StandardStreamingVoiceSamplingRate;                        // 0x00EC(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_Q626[0x8];                                     // 0x00F0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FSoftObjectPath                             AtomConfig;                                                // 0x00F8(0x0018) (Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_O0JD[0x18];                                    // 0x0110(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     AcfFileName;                                               // 0x0128(0x0010) (ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DistanceFactor;                                            // 0x0138(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_K1TR[0x4];                                     // 0x013C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TEnumAsByte<CriWareRuntime_EAtomSoundRendererType> SoundRendererTypeUI;                                       // 0x0140(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_UBCK[0x3];                                     // 0x0141(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                SoundRendererType;                                         // 0x0144(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_GBDP[0x8];                                     // 0x0148(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FAtomAsrRackConfigUI>                AsrRackConfigUI;                                           // 0x0150(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FAtomAsrRackConfig>                  AsrRackConfig;                                             // 0x0160(0x0010) (ZeroConstructor, Config, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_9FML[0x10];                                    // 0x0170(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Hardware1;                                                 // 0x0180(0x0010) (ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Hardware2;                                                 // 0x0190(0x0010) (ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Hardware3;                                                 // 0x01A0(0x0010) (ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Hardware4;                                                 // 0x01B0(0x0010) (ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                HcaMxVoiceSamplingRate;                                    // 0x01C0(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_15Q5[0x4];                                     // 0x01C4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                NumHcaMxMemoryVoices;                                      // 0x01C8(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_P5GM[0x4];                                     // 0x01CC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                HcaMxMemoryVoiceNumChannels;                               // 0x01D0(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_RB1C[0x4];                                     // 0x01D4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                NumHcaMxStreamingVoices;                                   // 0x01D8(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_EARJ[0x4];                                     // 0x01DC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                HcaMxStreamingVoiceNumChannels;                            // 0x01E0(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ZEPL[0x4];                                     // 0x01E4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               WASAPI_IsExclusive;                                        // 0x01E8(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_34D1[0x3];                                     // 0x01E9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                WASAPI_BitsPerSample;                                      // 0x01EC(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_KCXM[0x4];                                     // 0x01F0(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                WASAPI_SamplingRate;                                       // 0x01F4(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_1R6J[0x4];                                     // 0x01F8(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                WASAPI_NumChannels;                                        // 0x01FC(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_N8LO[0x4];                                     // 0x0200(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                PS4_ServerThreadAffinityMask;                              // 0x0204(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_KXCZ[0x4];                                     // 0x0208(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                PS4_OutputThreadAffinityMask;                              // 0x020C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_502E[0x4];                                     // 0x0210(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                PS4_ServerThreadPriority;                                  // 0x0214(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_JAKZ[0x4];                                     // 0x0218(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                PS4_OutputThreadPriority;                                  // 0x021C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_W5V4[0x4];                                     // 0x0220(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               PS4_UseAudio3d;                                            // 0x0224(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_0BR7[0x3];                                     // 0x0225(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                PS4_NumberOfAudio3dMemoryVoices;                           // 0x0228(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_2ZUM[0x4];                                     // 0x022C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                PS4_SamplingRateOfAudio3dMemoryVoices;                     // 0x0230(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_H3VA[0x4];                                     // 0x0234(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                PS4_NumberOfAudio3dStreamingVoices;                        // 0x0238(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ESYG[0x4];                                     // 0x023C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                PS4_SamplingRateOfAudio3dStreamingVoices;                  // 0x0240(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ZC8C[0x4];                                     // 0x0244(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               InitializeMana;                                            // 0x0248(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_C0QD[0x1];                                     // 0x0249(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               EnableDecodeSkip;                                          // 0x024A(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_B8SJ[0x1];                                     // 0x024B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                MaxDecoderHandles;                                         // 0x024C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_1805[0x4];                                     // 0x0250(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                MaxManaBPS;                                                // 0x0254(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_5CSM[0x4];                                     // 0x0258(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                MaxManaStreams;                                            // 0x025C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_QNWV[0x4];                                     // 0x0260(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               UseH264Decoder;                                            // 0x0264(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_DZRB[0x1];                                     // 0x0265(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               bUseManaStartupMovies;                                     // 0x0266(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bWaitForMoviesToComplete;                                  // 0x0267(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bMoviesAreSkippable;                                       // 0x0268(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_E2A0[0x7];                                     // 0x0269(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FString>                             StartupMovies;                                             // 0x0270(0x0010) (Edit, ZeroConstructor, Config, GlobalConfig, AdvancedDisplay, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_MEAT[0x10];                                    // 0x0280(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CriWareRuntime.CriWarePluginSettings");
		return ptr;
	}



};

// Class CriWareRuntime.ManaComponent
// 0x0150 (FullSize[0x0250] - InheritedSize[0x0100])
class UManaComponent : public UActorComponent
{
public:
	class UManaTexture*                                Movie;                                                     // 0x0100(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnEventPoint;                                              // 0x0108(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnSubtitleChanged;                                         // 0x0118(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnStatusChanged;                                           // 0x0128(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnMovieChanged;                                            // 0x0138(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnRequestData;                                             // 0x0148(0x0010) (BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_IO8J[0x40];                                    // 0x0158(0x0040) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UManaPlaylist*                               Playlist;                                                  // 0x0198(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                PlaylistIndex;                                             // 0x01A0(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_727X[0x4];                                     // 0x01A4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               bLoop;                                                     // 0x01A8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_7G8M[0x3];                                     // 0x01A9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                AudioTrack;                                                // 0x01AC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                SubAudioTrack;                                             // 0x01B0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                ExtraAudioTrack;                                           // 0x01B4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bSubtitlesEnabled;                                         // 0x01B8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_KS1B[0x3];                                     // 0x01B9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                SubtitlesChannel;                                          // 0x01BC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	CriWareRuntime_EManaSubtitlesEncoding              SubtitlesEncoding;                                         // 0x01C0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	CriWareRuntime_EManaFrameAction                    EndFrameAction;                                            // 0x01C1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	CriWareRuntime_EManaPlaybackTimer                  PlaybackTimer;                                             // 0x01C2(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	CriWareRuntime_EManaMaxFrameDrop                   MaxFrameDrop;                                              // 0x01C3(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_R2P2[0x8C];                                    // 0x01C4(0x008C) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CriWareRuntime.ManaComponent");
		return ptr;
	}



	bool ToIndex(int Index);
	void StopAndWaitCompletion();
	void Stop();
	void SetVolume(float Volume);
	void SetTexture(class UManaTexture* Texture);
	void SetSubVolume(float Volume);
	void SetSubAudioTrack(int Track);
	void SetPlaybackTimer(CriWareRuntime_EManaPlaybackTimer InPlaybackTimer);
	void SetMaxDropFrames(CriWareRuntime_EManaMaxFrameDrop InMaxDropFrames);
	void SetFile(const struct FString& MovieFilePath);
	void SetExtraVolume(float Volume);
	void SetExtraAudioTrack(int Track);
	void SetCachedData(TArray<unsigned char> DataArray);
	void SetAudioTrack(int Track);
	void SeekToPosition(int FrameNumber);
	void ResetCachedData();
	bool Previous();
	void PreparePlaylistIndex(int Index);
	void Prepare();
	void Play();
	void Pause(bool bPause);
	void OnSubtitleChanged__DelegateSignature(const struct FText& Subtitle);
	void OnStatusChanged__DelegateSignature(CriWareRuntime_EManaComponentStatus Status, class UManaComponent* ManaComponent);
	void OnRequestData__DelegateSignature(class UManaComponent* ManaComponent);
	void OnMovieChanged__DelegateSignature(class UManaMovie* Movie, class UManaComponent* ManaComponent);
	void OnEventPoint__DelegateSignature(const struct FManaEventPointInfo& EventPointInfo);
	bool Next();
	void Loop(bool bInLoop);
	bool IsReady();
	bool IsPreparing();
	bool IsPlaying();
	bool IsPaused();
	bool IsLooping();
	float GetVolume();
	float GetTime();
	class UManaTexture* GetTexture();
	float GetSubVolume();
	CriWareRuntime_EManaComponentStatus GetStatus();
	class UManaMovie* GetSource();
	int GetFrameNumber();
	float GetExtraVolume();
	void EnableSubtitles(bool bEnable);
	void EnableSeamless(bool bEnable);
	void ChangeSubtitlesEncoding(CriWareRuntime_EManaSubtitlesEncoding Encoding);
	void ChangeSubtitlesChannel(int Channel);
};

// Class CriWareRuntime.ManaComponentTexture
// 0x0020 (FullSize[0x00D0] - InheritedSize[0x00B0])
class UManaComponentTexture : public UTexture
{
public:
	int                                                SizeX;                                                     // 0x00B0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SizeY;                                                     // 0x00B4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<CoreUObject_EPixelFormat>              Format;                                                    // 0x00B8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	CriWareRuntime_EManaComponentTextureType           ComponentType;                                             // 0x00B9(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_ETextureAddress>                AddressX;                                                  // 0x00BA(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, AssetRegistrySearchable, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_ETextureAddress>                AddressY;                                                  // 0x00BB(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, AssetRegistrySearchable, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_X70A[0x14];                                    // 0x00BC(0x0014) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CriWareRuntime.ManaComponentTexture");
		return ptr;
	}



};

// Class CriWareRuntime.ManaSource
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
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
// 0x0040 (FullSize[0x0068] - InheritedSize[0x0028])
class UManaMovie : public UManaSource
{
public:
	TArray<struct FManaVideoTrackInfo>                 VideoTracks;                                               // 0x0028(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, Protected, NativeAccessSpecifierProtected)
	TArray<struct FManaAudioTrackInfo>                 AudioTracks;                                               // 0x0038(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, Protected, NativeAccessSpecifierProtected)
	TArray<struct FManaEventPointInfo>                 EventPoints;                                               // 0x0048(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, Protected, NativeAccessSpecifierProtected)
	int                                                NumSubtitleChannels;                                       // 0x0058(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                MaxSubtitleSize;                                           // 0x005C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      bIsAlpha : 1;                                              // 0x0060(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_0VW4[0x7];                                     // 0x0061(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CriWareRuntime.ManaMovie");
		return ptr;
	}



};

// Class CriWareRuntime.FileManaMovie
// 0x0018 (FullSize[0x0080] - InheritedSize[0x0068])
class UFileManaMovie : public UManaMovie
{
public:
	bool                                               bPrecacheFile;                                             // 0x0068(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_5AOI[0x7];                                     // 0x0069(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     FilePath;                                                  // 0x0070(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, AssetRegistrySearchable, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CriWareRuntime.FileManaMovie");
		return ptr;
	}



	void SetFilePath(const struct FString& Path);
};

// Class CriWareRuntime.DataManaMovie
// 0x0008 (FullSize[0x0070] - InheritedSize[0x0068])
class UDataManaMovie : public UManaMovie
{
public:
	unsigned char                                      UnknownData_5BW5[0x8];                                     // 0x0068(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CriWareRuntime.DataManaMovie");
		return ptr;
	}



	void SetDataArray(TArray<unsigned char>* InDataArray);
	TArray<unsigned char> GetDataArray();
};

// Class CriWareRuntime.ManaPlaylist
// 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
class UManaPlaylist : public UManaSource
{
public:
	TArray<class UManaMovie*>                          Movies;                                                    // 0x0028(0x0010) (Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	bool                                               bIsAlpha;                                                  // 0x0038(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bIsMixedTypes;                                             // 0x0039(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bIsSeamless;                                               // 0x003A(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_9708[0x5];                                     // 0x003B(0x0005) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CriWareRuntime.ManaPlaylist");
		return ptr;
	}



	void RemoveAt(int Index);
	void Remove(class UManaMovie* ManaMovie);
	int Num();
	bool IsSeamless();
	bool IsMixedTypes();
	bool IsAlpha();
	void Insert(class UManaMovie* ManaMovie, int Index);
	class UManaMovie* GetRandom(int* InOutIndex);
	class UManaMovie* GetPrevious(int* InOutIndex);
	class UManaMovie* GetNext(int* InOutIndex);
	class UManaMovie* Get(int Index);
	void Add(class UManaMovie* ManaMovie);
};

// Class CriWareRuntime.ManaTexture
// 0x0070 (FullSize[0x0120] - InheritedSize[0x00B0])
class UManaTexture : public UTexture
{
public:
	class UManaSource*                                 MovieSource;                                               // 0x00B0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FString                                     MovieFilePath;                                             // 0x00B8(0x0010) (ZeroConstructor, Deprecated, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      bRenderToTexture : 1;                                      // 0x00C8(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_X7V1[0x3];                                     // 0x00C9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              TargetGamma;                                               // 0x00CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bHDR : 1;                                                  // 0x00D0(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AssetRegistrySearchable, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_HI5H[0x3];                                     // 0x00D1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TEnumAsByte<Engine_ETextureAddress>                AddressX;                                                  // 0x00D4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_ETextureAddress>                AddressY;                                                  // 0x00D5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_STX6[0x2];                                     // 0x00D6(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FLinearColor                                ClearColor;                                                // 0x00D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<CoreUObject_EPixelFormat>              OverrideFormat;                                            // 0x00E8(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_YZUH[0x7];                                     // 0x00E9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UManaComponentTexture*>               ComponentTextures;                                         // 0x00F0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, AdvancedDisplay, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_BUBC[0x20];                                    // 0x0100(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CriWareRuntime.ManaTexture");
		return ptr;
	}



	void SetMovieSource(class UManaSource* InSource);
};

// Class CriWareRuntime.MaterialExpressionManaColorSpaceConverter
// 0x0080 (FullSize[0x00C0] - InheritedSize[0x0040])
class UMaterialExpressionManaColorSpaceConverter : public UMaterialExpression
{
public:
	struct FExpressionInput                            Luma;                                                      // 0x0040(0x0010) (NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_7P7B[0x8];                                     // 0x0050(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FExpressionInput                            ChromaB;                                                   // 0x0058(0x0010) (NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_4QPT[0x8];                                     // 0x0068(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FExpressionInput                            ChromaR;                                                   // 0x0070(0x0010) (NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_3R7D[0x8];                                     // 0x0080(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FExpressionInput                            Alpha;                                                     // 0x0088(0x0010) (NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_5S99[0x8];                                     // 0x0098(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FExpressionInput                            Gamma;                                                     // 0x00A0(0x0010) (NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_VK72[0x8];                                     // 0x00B0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               bH264;                                                     // 0x00B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	CriWareRuntime_EManaColorSpace                     ColorSpace;                                                // 0x00B9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUseGammaExponent;                                         // 0x00BA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_QM05[0x1];                                     // 0x00BB(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              ConstGamma;                                                // 0x00BC(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CriWareRuntime.MaterialExpressionManaColorSpaceConverter");
		return ptr;
	}



};

// Class CriWareRuntime.MaterialExpressionManaMovieFormatSwitch
// 0x0048 (FullSize[0x0088] - InheritedSize[0x0040])
class UMaterialExpressionManaMovieFormatSwitch : public UMaterialExpression
{
public:
	struct FExpressionInput                            Inputs[0x3];                                               // 0x0040(0x0030) (NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_QZ2G[0x18];                                    // 0x0070(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CriWareRuntime.MaterialExpressionManaMovieFormatSwitch");
		return ptr;
	}



};

// Class CriWareRuntime.MatineeTrackAtomFloatBase
// 0x0000 (FullSize[0x0090] - InheritedSize[0x0090])
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
// 0x0000 (FullSize[0x0090] - InheritedSize[0x0090])
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
// 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
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
// 0x0008 (FullSize[0x0078] - InheritedSize[0x0070])
class UMatineeTrackAtomSoundBase : public UMatineeTrackAtomBase
{
public:
	bool                                               bContinueSoundOnMatineeEnd;                                // 0x0070(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_5F96[0x7];                                     // 0x0071(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CriWareRuntime.MatineeTrackAtomSoundBase");
		return ptr;
	}



};

// Class CriWareRuntime.MatineeTrackAtom
// 0x0030 (FullSize[0x00A8] - InheritedSize[0x0078])
class UMatineeTrackAtom : public UMatineeTrackAtomSoundBase
{
public:
	TArray<struct FString>                             AisacList;                                                 // 0x0078(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FString>                             SelectorList;                                              // 0x0088(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FAtomTrackKeyframe>                  KeyframeList;                                              // 0x0098(0x0010) (Edit, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CriWareRuntime.MatineeTrackAtom");
		return ptr;
	}



};

// Class CriWareRuntime.MatineeTrackAtomCategoryName
// 0x0018 (FullSize[0x0088] - InheritedSize[0x0070])
class UMatineeTrackAtomCategoryName : public UMatineeTrackAtomBase
{
public:
	struct FString                                     CategoryName;                                              // 0x0070(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bEnableVolumeTrack;                                        // 0x0080(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_NXZA[0x7];                                     // 0x0081(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CriWareRuntime.MatineeTrackAtomCategoryName");
		return ptr;
	}



};

// Class CriWareRuntime.MatineeTrackAtomCategoryVolume
// 0x0000 (FullSize[0x0090] - InheritedSize[0x0090])
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
// 0x0038 (FullSize[0x00B0] - InheritedSize[0x0078])
class UMatineeTrackAtomCueId : public UMatineeTrackAtomSoundBase
{
public:
	TArray<struct FString>                             AisacList;                                                 // 0x0078(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FString>                             SelectorList;                                              // 0x0088(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	class USoundAtomCueSheet*                          CueSheet;                                                  // 0x0098(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FAtomCueIdTrackKeyframe>             KeyframeList;                                              // 0x00A0(0x0010) (Edit, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CriWareRuntime.MatineeTrackAtomCueId");
		return ptr;
	}



};

// Class CriWareRuntime.MatineeTrackAtomCueName
// 0x0038 (FullSize[0x00B0] - InheritedSize[0x0078])
class UMatineeTrackAtomCueName : public UMatineeTrackAtomSoundBase
{
public:
	TArray<struct FString>                             AisacList;                                                 // 0x0078(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FString>                             SelectorList;                                              // 0x0088(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	class USoundAtomCueSheet*                          CueSheet;                                                  // 0x0098(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FAtomCueNameTrackKeyframe>           KeyframeList;                                              // 0x00A0(0x0010) (Edit, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CriWareRuntime.MatineeTrackAtomCueName");
		return ptr;
	}



};

// Class CriWareRuntime.MatineeTrackAtomSelector
// 0x0010 (FullSize[0x0080] - InheritedSize[0x0070])
class UMatineeTrackAtomSelector : public UInterpTrack
{
public:
	TArray<struct FAtomSelectorTrackKeyframe>          KeyframeList;                                              // 0x0070(0x0010) (Edit, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CriWareRuntime.MatineeTrackAtomSelector");
		return ptr;
	}



};

// Class CriWareRuntime.MatineeTrackInstAtom
// 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
class UMatineeTrackInstAtom : public UInterpTrackInst
{
public:
	float                                              LastUpdatePosition;                                        // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_68H2[0x4];                                     // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAtomComponent*                              AtomComponent;                                             // 0x0030(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMatineeTrackAtomSoundBase*                  AtomTrack;                                                 // 0x0038(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_TSTM[0x8];                                     // 0x0040(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CriWareRuntime.MatineeTrackInstAtom");
		return ptr;
	}



};

// Class CriWareRuntime.MovieSceneAtomSection
// 0x0158 (FullSize[0x0238] - InheritedSize[0x00E0])
class UMovieSceneAtomSection : public UMovieSceneSection
{
public:
	class USoundAtomCue*                               Sound;                                                     // 0x00E0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              StartOffset;                                               // 0x00E8(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_J9NQ[0x4];                                     // 0x00EC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FMovieSceneFloatChannel                     SoundVolume;                                               // 0x00F0(0x00A0) (NativeAccessSpecifierPrivate)
	struct FMovieSceneFloatChannel                     PitchMultiplier;                                           // 0x0190(0x00A0) (NativeAccessSpecifierPrivate)
	bool                                               bSuppressSubtitles;                                        // 0x0230(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_EJJZ[0x7];                                     // 0x0231(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CriWareRuntime.MovieSceneAtomSection");
		return ptr;
	}



};

// Class CriWareRuntime.MovieSceneAtomTrack
// 0x0010 (FullSize[0x0068] - InheritedSize[0x0058])
class UMovieSceneAtomTrack : public UMovieSceneNameableTrack
{
public:
	TArray<class UMovieSceneSection*>                  AtomSections;                                              // 0x0058(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CriWareRuntime.MovieSceneAtomTrack");
		return ptr;
	}



};

// Class CriWareRuntime.SoundAtomConfig
// 0x0080 (FullSize[0x00A8] - InheritedSize[0x0028])
class USoundAtomConfig : public UObject
{
public:
	struct FString                                     AcfFilePath;                                               // 0x0028(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_DXHW[0x70];                                    // 0x0038(0x0070) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CriWareRuntime.SoundAtomConfig");
		return ptr;
	}



};

// Class CriWareRuntime.SoundAtomCue
// 0x0070 (FullSize[0x0098] - InheritedSize[0x0028])
class USoundAtomCue : public UObject
{
public:
	unsigned char                                      UnknownData_DERJ[0x10];                                    // 0x0028(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USoundAtomCueSheet*                          CueSheet;                                                  // 0x0038(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     CueName;                                                   // 0x0040(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bApplyAtomParameter;                                       // 0x0050(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_5X34[0x3];                                     // 0x0051(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      bOverrideConcurrency : 1;                                  // 0x0054(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_JHZR[0x3];                                     // 0x0055(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USoundConcurrency*                           SoundConcurrencySettings;                                  // 0x0058(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSoundConcurrencySettings                   ConcurrencyOverrides;                                      // 0x0060(0x0010) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	float                                              Priority;                                                  // 0x0070(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_KNJW[0x4];                                     // 0x0074(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USoundAttenuation*                           DefaultAttenuation;                                        // 0x0078(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_IPK7[0x18];                                    // 0x0080(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CriWareRuntime.SoundAtomCue");
		return ptr;
	}



	struct FString GetUserData();
	int GetLength();
};

// Class CriWareRuntime.SoundAtomCueSheet
// 0x0100 (FullSize[0x0128] - InheritedSize[0x0028])
class USoundAtomCueSheet : public UObject
{
public:
	bool                                               Contains;                                                  // 0x0028(0x0001) (Edit, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_R40Y[0x7];                                     // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     AcbFilePath;                                               // 0x0030(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_SGUH[0x70];                                    // 0x0040(0x0070) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               bOverrideAwbDirectory;                                     // 0x00B0(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_T86L[0x7];                                     // 0x00B1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FDirectoryPath                              AwbDirectory;                                              // 0x00B8(0x0010) (Edit, NativeAccessSpecifierPublic)
	struct FString                                     CueSheetName;                                              // 0x00C8(0x0010) (Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                NumSlots;                                                  // 0x00D8(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_U6PM[0x4C];                                    // 0x00DC(0x004C) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CriWareRuntime.SoundAtomCueSheet");
		return ptr;
	}



	void STATIC_ReleaseAcb(const struct FName& AcbName);
	class USoundAtomCueSheet* STATIC_LoadAtomCueSheet(class USoundAtomCueSheet* CueSheet);
	class USoundAtomCueSheet* STATIC_LoadAcb(const struct FName& AcbName);
	bool IsLoaded();
	class USoundAtomCue* GetAtomCueByName(const struct FString& CueName);
	class USoundAtomCue* GetAtomCueByIndex(int CueIndex);
	class USoundAtomCue* GetAtomCueById(int CueId);
	void STATIC_DetachDspBusSetting();
	void STATIC_AttachDspBusSetting(const struct FString& SettingName);
	void STATIC_ApplyDspBusSnapshot(const struct FString& SnapshotName, int Milliseconds);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
