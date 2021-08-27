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
// Parameters
//---------------------------------------------------------------------------

// Function CriWareRuntime.AtomAsrRack.SetEffectBypass
struct UAtomAsrRack_SetEffectBypass_Params
{
	struct FString                                     BusName;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     EffectName;                                                // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Bypasses;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CriWareRuntime.AtomAsrRack.SetBusVolumeByName
struct UAtomAsrRack_SetBusVolumeByName_Params
{
	struct FString                                     BusName;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Volume;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CriWareRuntime.AtomAsrRack.SetBusSendLevelByName
struct UAtomAsrRack_SetBusSendLevelByName_Params
{
	struct FString                                     SourceBusName;                                             // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     DestBusName;                                               // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Level;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CriWareRuntime.AtomAsrRack.GetDefaultAsrRack
struct UAtomAsrRack_GetDefaultAsrRack_Params
{
	class UAtomAsrRack*                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CriWareRuntime.AtomAsrRack.GetBusAnalyzerInfo
struct UAtomAsrRack_GetBusAnalyzerInfo_Params
{
	struct FString                                     DspBusName;                                                // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                num_channels;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<float>                                      rms_levels;                                                // (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<float>                                      peak_levels;                                               // (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<float>                                      peak_hold_levels;                                          // (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CriWareRuntime.AtomAsrRack.GetAsrRack
struct UAtomAsrRack_GetAsrRack_Params
{
	int                                                AsrRackId;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAtomAsrRack*                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CriWareRuntime.AtomAsrRack.DetachDspBusSetting
struct UAtomAsrRack_DetachDspBusSetting_Params
{
};

// Function CriWareRuntime.AtomAsrRack.AttachDspBusSetting
struct UAtomAsrRack_AttachDspBusSetting_Params
{
	struct FString                                     SettingName;                                               // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CriWareRuntime.AtomAsrRack.ApplyDspBusSnapshot
struct UAtomAsrRack_ApplyDspBusSnapshot_Params
{
	struct FString                                     SnapshotName;                                              // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Milliseconds;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CriWareRuntime.AtomCategory.StopByName
struct UAtomCategory_StopByName_Params
{
	struct FString                                     CategoryName;                                              // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CriWareRuntime.AtomCategory.SetVolumeByName
struct UAtomCategory_SetVolumeByName_Params
{
	struct FString                                     CategoryName;                                              // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Volume;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CriWareRuntime.AtomCategory.SetAisacControlByName
struct UAtomCategory_SetAisacControlByName_Params
{
	struct FString                                     CategoryName;                                              // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     AisacName;                                                 // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Value;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CriWareRuntime.AtomCategory.ResetAllAisacControlByName
struct UAtomCategory_ResetAllAisacControlByName_Params
{
	struct FString                                     CategoryName;                                              // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CriWareRuntime.AtomCategory.ResetAllAisacControlById
struct UAtomCategory_ResetAllAisacControlById_Params
{
	int                                                CategoryId;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CriWareRuntime.AtomCategory.PauseByName
struct UAtomCategory_PauseByName_Params
{
	struct FString                                     CategoryName;                                              // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bPause;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CriWareRuntime.AtomCategory.IsPausedByName
struct UAtomCategory_IsPausedByName_Params
{
	struct FString                                     CategoryName;                                              // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CriWareRuntime.AtomCategory.GetVolumeByName
struct UAtomCategory_GetVolumeByName_Params
{
	struct FString                                     CategoryName;                                              // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CriWareRuntime.AtomCategory.GetNumAttachedAisacsByName
struct UAtomCategory_GetNumAttachedAisacsByName_Params
{
	struct FString                                     CategoryName;                                              // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CriWareRuntime.AtomCategory.GetNumAttachedAisacsById
struct UAtomCategory_GetNumAttachedAisacsById_Params
{
	int                                                CategoryId;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CriWareRuntime.AtomCategory.GetCurrentAisacControlValueByName
struct UAtomCategory_GetCurrentAisacControlValueByName_Params
{
	struct FString                                     CategoryName;                                              // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     AisacControlName;                                          // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CriWareRuntime.AtomCategory.GetCurrentAisacControlValueById
struct UAtomCategory_GetCurrentAisacControlValueById_Params
{
	int                                                CategoryId;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AisacControlId;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CriWareRuntime.AtomCategory.GetAttachedAisacInfoByName
struct UAtomCategory_GetAttachedAisacInfoByName_Params
{
	struct FString                                     CategoryName;                                              // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AisacAttachedIndex;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAtomAisacInfo                              AisacInfo;                                                 // (Parm, OutParm, NativeAccessSpecifierPublic)
};

// Function CriWareRuntime.AtomCategory.GetAttachedAisacInfoById
struct UAtomCategory_GetAttachedAisacInfoById_Params
{
	int                                                CategoryId;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AisacAttachedIndex;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAtomAisacInfo                              AisacInfo;                                                 // (Parm, OutParm, NativeAccessSpecifierPublic)
};

// Function CriWareRuntime.AtomComponent.Stop
struct UAtomComponent_Stop_Params
{
};

// Function CriWareRuntime.AtomComponent.SetVolume
struct UAtomComponent_SetVolume_Params
{
	float                                              Volume;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CriWareRuntime.AtomComponent.SetSoundObject
struct UAtomComponent_SetSoundObject_Params
{
	class UAtomSoundObject*                            SoundObject;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CriWareRuntime.AtomComponent.SetSound
struct UAtomComponent_SetSound_Params
{
	class USoundAtomCue*                               NewSound;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CriWareRuntime.AtomComponent.SetSelectorLabel
struct UAtomComponent_SetSelectorLabel_Params
{
	struct FString                                     Selector;                                                  // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Label;                                                     // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CriWareRuntime.AtomComponent.SetPitchMultiplier
struct UAtomComponent_SetPitchMultiplier_Params
{
	float                                              NewPitchMultiplier;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CriWareRuntime.AtomComponent.SetPitch
struct UAtomComponent_SetPitch_Params
{
	float                                              Pitch;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CriWareRuntime.AtomComponent.SetNextBlockIndex
struct UAtomComponent_SetNextBlockIndex_Params
{
	int                                                BlockIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CriWareRuntime.AtomComponent.SetDefaultAttenuationEnable
struct UAtomComponent_SetDefaultAttenuationEnable_Params
{
	bool                                               bEnable;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CriWareRuntime.AtomComponent.SetBusSendLevelOffsetByName
struct UAtomComponent_SetBusSendLevelOffsetByName_Params
{
	struct FString                                     BusName;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LevelOffset;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CriWareRuntime.AtomComponent.SetBusSendLevelOffset
struct UAtomComponent_SetBusSendLevelOffset_Params
{
	int                                                BusId;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LevelOffset;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CriWareRuntime.AtomComponent.SetBusSendLevelByName
struct UAtomComponent_SetBusSendLevelByName_Params
{
	struct FString                                     BusName;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Level;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CriWareRuntime.AtomComponent.SetBusSendLevel
struct UAtomComponent_SetBusSendLevel_Params
{
	int                                                BusId;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Level;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CriWareRuntime.AtomComponent.SetAsrRackIdArray
struct UAtomComponent_SetAsrRackIdArray_Params
{
	TArray<int>                                        AsrRackIDs;                                                // (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// Function CriWareRuntime.AtomComponent.SetAsrRackID
struct UAtomComponent_SetAsrRackID_Params
{
	int                                                asr_rack_id;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CriWareRuntime.AtomComponent.SetAisacByName
struct UAtomComponent_SetAisacByName_Params
{
	struct FString                                     ControlName;                                               // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ControlValue;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CriWareRuntime.AtomComponent.Play
struct UAtomComponent_Play_Params
{
	float                                              StartTime;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CriWareRuntime.AtomComponent.Pause
struct UAtomComponent_Pause_Params
{
	bool                                               bPause;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// DelegateFunction CriWareRuntime.AtomComponent.OnAudioFinished__DelegateSignature
struct UAtomComponent_OnAudioFinished__DelegateSignature_Params
{
};

// Function CriWareRuntime.AtomComponent.IsPlaying
struct UAtomComponent_IsPlaying_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CriWareRuntime.AtomComponent.IsPaused
struct UAtomComponent_IsPaused_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CriWareRuntime.AtomComponent.GetTime
struct UAtomComponent_GetTime_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CriWareRuntime.AtomComponent.GetStatus
struct UAtomComponent_GetStatus_Params
{
	CriWareRuntime_EAtomComponentStatus                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CriWareRuntime.AtomComponent.GetSequencePosition
struct UAtomComponent_GetSequencePosition_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CriWareRuntime.AtomComponent.GetNumQueuedSounds
struct UAtomComponent_GetNumQueuedSounds_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CriWareRuntime.AtomComponent.GetDefaultAttenuationEnable
struct UAtomComponent_GetDefaultAttenuationEnable_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CriWareRuntime.AtomComponent.GetCueName
struct UAtomComponent_GetCueName_Params
{
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CriWareRuntime.AtomComponent.GetAtomComponentID
struct UAtomComponent_GetAtomComponentID_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CriWareRuntime.AtomComponent.FadeOut
struct UAtomComponent_FadeOut_Params
{
	float                                              FadeOutDuration;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FadeVolumeLevel;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CriWareRuntime.AtomComponent.FadeIn
struct UAtomComponent_FadeIn_Params
{
	float                                              FadeInDuration;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FadeVolumeLevel;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              StartTime;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CriWareRuntime.AtomComponent.EnqueueSound
struct UAtomComponent_EnqueueSound_Params
{
	class USoundAtomCue*                               NewSound;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CriWareRuntime.AtomComponent.DestroyComponentByID
struct UAtomComponent_DestroyComponentByID_Params
{
	int                                                TargetID;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// DelegateFunction CriWareRuntime.AtomCueSheetLoaderComponent.OnLoadError__DelegateSignature
struct UAtomCueSheetLoaderComponent_OnLoadError__DelegateSignature_Params
{
};

// DelegateFunction CriWareRuntime.AtomCueSheetLoaderComponent.OnLoadCompleted__DelegateSignature
struct UAtomCueSheetLoaderComponent_OnLoadCompleted__DelegateSignature_Params
{
};

// DelegateFunction CriWareRuntime.AtomCueSheetLoaderComponent.OnAtomCueSheetLoaded__DelegateSignature
struct UAtomCueSheetLoaderComponent_OnAtomCueSheetLoaded__DelegateSignature_Params
{
	class USoundAtomCueSheet*                          Loaded;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CriWareRuntime.AtomCueSheetLoaderComponent.LoadAtomCueSheet
struct UAtomCueSheetLoaderComponent_LoadAtomCueSheet_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnLoaded;                                                  // (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function CriWareRuntime.AtomCueSheetLoaderComponent.Load
struct UAtomCueSheetLoaderComponent_Load_Params
{
};

// Function CriWareRuntime.AtomCueSheetLoaderComponent.GetStatus
struct UAtomCueSheetLoaderComponent_GetStatus_Params
{
	CriWareRuntime_EAtomCueSheetLoaderComponentStatus  ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CriWareRuntime.AtomCueSheetLoaderComponent.GetAtomCueSheet
struct UAtomCueSheetLoaderComponent_GetAtomCueSheet_Params
{
	class USoundAtomCueSheet*                          ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// DelegateFunction CriWareRuntime.AtomDeviceWatcher.OnDeviceUpdated__DelegateSignature
struct UAtomDeviceWatcher_OnDeviceUpdated__DelegateSignature_Params
{
};

// Function CriWareRuntime.AtomDeviceWatcher.GetDeviceName
struct UAtomDeviceWatcher_GetDeviceName_Params
{
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CriWareRuntime.AtomDeviceWatcher.GetDeviceChannelCount
struct UAtomDeviceWatcher_GetDeviceChannelCount_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CriWareRuntime.AtomProfileData.CriWareAdx2ProfileDataUpdate
struct UAtomProfileData_CriWareAdx2ProfileDataUpdate_Params
{
	class UObject*                                     WorldContextObject;                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FAtomProfileItem>                    ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function CriWareRuntime.AtomProfileData.CriWareAdx2ProfileDataSort
struct UAtomProfileData_CriWareAdx2ProfileDataSort_Params
{
	TArray<struct FAtomProfileItem>                    original_item;                                             // (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	CriWareRuntime_EAtomProfileSortType                sort_type;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	CriWareRuntime_EAtomSortOrderType                  order_type;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FAtomProfileItem>                    sorted_item;                                               // (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// Function CriWareRuntime.AtomSpectrumAnalyzer.GetLevelsDB
struct UAtomSpectrumAnalyzer_GetLevelsDB_Params
{
	float                                              display_range;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<float>                                      spectra;                                                   // (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// Function CriWareRuntime.AtomSpectrumAnalyzer.GetLevels
struct UAtomSpectrumAnalyzer_GetLevels_Params
{
	TArray<float>                                      spectra;                                                   // (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// Function CriWareRuntime.AtomSpectrumAnalyzer.CreateDspSpectra
struct UAtomSpectrumAnalyzer_CreateDspSpectra_Params
{
	class UAtomAsrRack*                                asr_rack;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     bus_name;                                                  // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                num_bands;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CriWareRuntime.AtomStatics.StopAllSounds
struct UAtomStatics_StopAllSounds_Params
{
};

// Function CriWareRuntime.AtomStatics.SpawnSoundAttached
struct UAtomStatics_SpawnSoundAttached_Params
{
	class USoundAtomCue*                               Sound;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USceneComponent*                             AttachToComponent;                                         // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       AttachPointName;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Location;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    Rotation;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_EAttachLocation>                LocationType;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bStopWhenAttachedToDestroyed;                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              VolumeMultiplier;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PitchMultiplier;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              StartTime;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundAttenuation*                           AttenuationSettings;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundConcurrency*                           ConcurrencySettings;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAutoDestroy;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAtomComponent*                              ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CriWareRuntime.AtomStatics.SpawnSoundAtLocation
struct UAtomStatics_SpawnSoundAtLocation_Params
{
	class UObject*                                     WorldContextObject;                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundAtomCue*                               Sound;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Location;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    Rotation;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	float                                              VolumeMultiplier;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PitchMultiplier;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              StartTime;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundAttenuation*                           AttenuationSettings;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundConcurrency*                           ConcurrencySettings;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAutoDestroy;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAtomComponent*                              ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CriWareRuntime.AtomStatics.SpawnSound2D
struct UAtomStatics_SpawnSound2D_Params
{
	class UObject*                                     WorldContextObject;                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundAtomCue*                               Sound;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PitchMultiplier;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              StartTime;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bPersistAcrossLevelTransition;                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAutoDestroy;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAtomComponent*                              ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CriWareRuntime.AtomStatics.PlaySoundForAnimNotify
struct UAtomStatics_PlaySoundForAnimNotify_Params
{
	class USoundAtomCue*                               Sound;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USceneComponent*                             AttachToComponent;                                         // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       AttachPointName;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Location;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bStopWhenAttachedToDestroyed;                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              VolumeMultiplier;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PitchMultiplier;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              StartTime;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundAttenuation*                           AttenuationSettings;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CriWareRuntime.AtomStatics.PlaySoundAttached
struct UAtomStatics_PlaySoundAttached_Params
{
	class USoundAtomCue*                               Sound;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USceneComponent*                             AttachToComponent;                                         // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       AttachPointName;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Location;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bStopWhenAttachedToDestroyed;                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              VolumeMultiplier;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PitchMultiplier;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              StartTime;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundAttenuation*                           AttenuationSettings;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAtomComponent*                              ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CriWareRuntime.AtomStatics.PlaySoundAtLocation
struct UAtomStatics_PlaySoundAtLocation_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundAtomCue*                               Sound;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Location;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    Rotation;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	float                                              VolumeMultiplier;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PitchMultiplier;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              StartTime;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundAttenuation*                           AttenuationSettings;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundConcurrency*                           ConcurrencySettings;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CriWareRuntime.AtomStatics.PauseAudioOutput
struct UAtomStatics_PauseAudioOutput_Params
{
	bool                                               bPause;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CriWareRuntime.AtomStatics.LoadAtomConfig
struct UAtomStatics_LoadAtomConfig_Params
{
	class USoundAtomConfig*                            AcfObject;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CriWareRuntime.AtomStatics.CreateRootedAtomComponent
struct UAtomStatics_CreateRootedAtomComponent_Params
{
	class UObject*                                     WorldContextObject;                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAutoDestroy;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAtomComponent*                              ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CriWareRuntime.AtomTriggerTableFunctionLibrary.GetDataTableRowFromName
struct UAtomTriggerTableFunctionLibrary_GetDataTableRowFromName_Params
{
	class UDataTable*                                  Table;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       RowName;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAtomTriggerRow                             OutRow;                                                    // (Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CriWareRuntime.CriFsBinderComponent.Stop
struct UCriFsBinderComponent_Stop_Params
{
};

// DelegateFunction CriWareRuntime.CriFsBinderComponent.OnBindError__DelegateSignature
struct UCriFsBinderComponent_OnBindError__DelegateSignature_Params
{
};

// DelegateFunction CriWareRuntime.CriFsBinderComponent.OnBindCompleted__DelegateSignature
struct UCriFsBinderComponent_OnBindCompleted__DelegateSignature_Params
{
};

// Function CriWareRuntime.CriFsBinderComponent.GetStatus
struct UCriFsBinderComponent_GetStatus_Params
{
	CriWareRuntime_ECriFsBinderStatus                  ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CriWareRuntime.CriFsBinderComponent.Bind
struct UCriFsBinderComponent_Bind_Params
{
};

// DelegateFunction CriWareRuntime.CriFsLoaderComponent.OnLoadError__DelegateSignature
struct UCriFsLoaderComponent_OnLoadError__DelegateSignature_Params
{
};

// DelegateFunction CriWareRuntime.CriFsLoaderComponent.OnLoadCompleted__DelegateSignature
struct UCriFsLoaderComponent_OnLoadCompleted__DelegateSignature_Params
{
};

// Function CriWareRuntime.CriFsLoaderComponent.Load
struct UCriFsLoaderComponent_Load_Params
{
};

// Function CriWareRuntime.CriFsLoaderComponent.GetStatus
struct UCriFsLoaderComponent_GetStatus_Params
{
	CriWareRuntime_ECriFsLoaderStatus                  ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CriWareRuntime.CriFsLoaderComponent.GetDataArray
struct UCriFsLoaderComponent_GetDataArray_Params
{
	TArray<unsigned char>                              ReturnValue;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function CriWareRuntime.CriWareFunctionLibrary.SetSpeakerAngleArray
struct UCriWareFunctionLibrary_SetSpeakerAngleArray_Params
{
	CriWareRuntime_ECriWareSpeakerSystem               SpeakerSystem;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<float>                                      Angles;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function CriWareRuntime.CriWareFunctionLibrary.SetGlobalLabelToSelectorByName
struct UCriWareFunctionLibrary_SetGlobalLabelToSelectorByName_Params
{
	struct FString                                     SelectorName;                                              // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     LabelName;                                                 // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CriWareRuntime.CriWareFunctionLibrary.SetGameVariableByName
struct UCriWareFunctionLibrary_SetGameVariableByName_Params
{
	struct FString                                     GameVariableName;                                          // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Value;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CriWareRuntime.ManaComponent.ToIndex
struct UManaComponent_ToIndex_Params
{
	int                                                Index;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CriWareRuntime.ManaComponent.StopAndWaitCompletion
struct UManaComponent_StopAndWaitCompletion_Params
{
};

// Function CriWareRuntime.ManaComponent.Stop
struct UManaComponent_Stop_Params
{
};

// Function CriWareRuntime.ManaComponent.SetVolume
struct UManaComponent_SetVolume_Params
{
	float                                              Volume;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CriWareRuntime.ManaComponent.SetTexture
struct UManaComponent_SetTexture_Params
{
	class UManaTexture*                                Texture;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CriWareRuntime.ManaComponent.SetSubVolume
struct UManaComponent_SetSubVolume_Params
{
	float                                              Volume;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CriWareRuntime.ManaComponent.SetSubAudioTrack
struct UManaComponent_SetSubAudioTrack_Params
{
	int                                                Track;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CriWareRuntime.ManaComponent.SetPlaybackTimer
struct UManaComponent_SetPlaybackTimer_Params
{
	CriWareRuntime_EManaPlaybackTimer                  InPlaybackTimer;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CriWareRuntime.ManaComponent.SetMaxDropFrames
struct UManaComponent_SetMaxDropFrames_Params
{
	CriWareRuntime_EManaMaxFrameDrop                   InMaxDropFrames;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CriWareRuntime.ManaComponent.SetFile
struct UManaComponent_SetFile_Params
{
	struct FString                                     MovieFilePath;                                             // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CriWareRuntime.ManaComponent.SetExtraVolume
struct UManaComponent_SetExtraVolume_Params
{
	float                                              Volume;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CriWareRuntime.ManaComponent.SetExtraAudioTrack
struct UManaComponent_SetExtraAudioTrack_Params
{
	int                                                Track;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CriWareRuntime.ManaComponent.SetCachedData
struct UManaComponent_SetCachedData_Params
{
	TArray<unsigned char>                              DataArray;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function CriWareRuntime.ManaComponent.SetAudioTrack
struct UManaComponent_SetAudioTrack_Params
{
	int                                                Track;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CriWareRuntime.ManaComponent.SeekToPosition
struct UManaComponent_SeekToPosition_Params
{
	int                                                FrameNumber;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CriWareRuntime.ManaComponent.ResetCachedData
struct UManaComponent_ResetCachedData_Params
{
};

// Function CriWareRuntime.ManaComponent.Previous
struct UManaComponent_Previous_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CriWareRuntime.ManaComponent.PreparePlaylistIndex
struct UManaComponent_PreparePlaylistIndex_Params
{
	int                                                Index;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CriWareRuntime.ManaComponent.Prepare
struct UManaComponent_Prepare_Params
{
};

// Function CriWareRuntime.ManaComponent.Play
struct UManaComponent_Play_Params
{
};

// Function CriWareRuntime.ManaComponent.Pause
struct UManaComponent_Pause_Params
{
	bool                                               bPause;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// DelegateFunction CriWareRuntime.ManaComponent.OnSubtitleChanged__DelegateSignature
struct UManaComponent_OnSubtitleChanged__DelegateSignature_Params
{
	struct FText                                       Subtitle;                                                  // (Parm, NativeAccessSpecifierPublic)
};

// DelegateFunction CriWareRuntime.ManaComponent.OnStatusChanged__DelegateSignature
struct UManaComponent_OnStatusChanged__DelegateSignature_Params
{
	CriWareRuntime_EManaComponentStatus                Status;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UManaComponent*                              ManaComponent;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// DelegateFunction CriWareRuntime.ManaComponent.OnRequestData__DelegateSignature
struct UManaComponent_OnRequestData__DelegateSignature_Params
{
	class UManaComponent*                              ManaComponent;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// DelegateFunction CriWareRuntime.ManaComponent.OnMovieChanged__DelegateSignature
struct UManaComponent_OnMovieChanged__DelegateSignature_Params
{
	class UManaMovie*                                  Movie;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UManaComponent*                              ManaComponent;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// DelegateFunction CriWareRuntime.ManaComponent.OnEventPoint__DelegateSignature
struct UManaComponent_OnEventPoint__DelegateSignature_Params
{
	struct FManaEventPointInfo                         EventPointInfo;                                            // (Parm, NativeAccessSpecifierPublic)
};

// Function CriWareRuntime.ManaComponent.Next
struct UManaComponent_Next_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CriWareRuntime.ManaComponent.Loop
struct UManaComponent_Loop_Params
{
	bool                                               bInLoop;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CriWareRuntime.ManaComponent.IsReady
struct UManaComponent_IsReady_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CriWareRuntime.ManaComponent.IsPreparing
struct UManaComponent_IsPreparing_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CriWareRuntime.ManaComponent.IsPlaying
struct UManaComponent_IsPlaying_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CriWareRuntime.ManaComponent.IsPaused
struct UManaComponent_IsPaused_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CriWareRuntime.ManaComponent.IsLooping
struct UManaComponent_IsLooping_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CriWareRuntime.ManaComponent.GetVolume
struct UManaComponent_GetVolume_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CriWareRuntime.ManaComponent.GetTime
struct UManaComponent_GetTime_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CriWareRuntime.ManaComponent.GetTexture
struct UManaComponent_GetTexture_Params
{
	class UManaTexture*                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CriWareRuntime.ManaComponent.GetSubVolume
struct UManaComponent_GetSubVolume_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CriWareRuntime.ManaComponent.GetStatus
struct UManaComponent_GetStatus_Params
{
	CriWareRuntime_EManaComponentStatus                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CriWareRuntime.ManaComponent.GetSource
struct UManaComponent_GetSource_Params
{
	class UManaMovie*                                  ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CriWareRuntime.ManaComponent.GetFrameNumber
struct UManaComponent_GetFrameNumber_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CriWareRuntime.ManaComponent.GetExtraVolume
struct UManaComponent_GetExtraVolume_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CriWareRuntime.ManaComponent.EnableSubtitles
struct UManaComponent_EnableSubtitles_Params
{
	bool                                               bEnable;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CriWareRuntime.ManaComponent.EnableSeamless
struct UManaComponent_EnableSeamless_Params
{
	bool                                               bEnable;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CriWareRuntime.ManaComponent.ChangeSubtitlesEncoding
struct UManaComponent_ChangeSubtitlesEncoding_Params
{
	CriWareRuntime_EManaSubtitlesEncoding              Encoding;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CriWareRuntime.ManaComponent.ChangeSubtitlesChannel
struct UManaComponent_ChangeSubtitlesChannel_Params
{
	int                                                Channel;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CriWareRuntime.FileManaMovie.SetFilePath
struct UFileManaMovie_SetFilePath_Params
{
	struct FString                                     Path;                                                      // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CriWareRuntime.DataManaMovie.SetDataArray
struct UDataManaMovie_SetDataArray_Params
{
	TArray<unsigned char>                              InDataArray;                                               // (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// Function CriWareRuntime.DataManaMovie.GetDataArray
struct UDataManaMovie_GetDataArray_Params
{
	TArray<unsigned char>                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function CriWareRuntime.ManaPlaylist.RemoveAt
struct UManaPlaylist_RemoveAt_Params
{
	int                                                Index;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CriWareRuntime.ManaPlaylist.Remove
struct UManaPlaylist_Remove_Params
{
	class UManaMovie*                                  ManaMovie;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CriWareRuntime.ManaPlaylist.Num
struct UManaPlaylist_Num_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CriWareRuntime.ManaPlaylist.IsSeamless
struct UManaPlaylist_IsSeamless_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CriWareRuntime.ManaPlaylist.IsMixedTypes
struct UManaPlaylist_IsMixedTypes_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CriWareRuntime.ManaPlaylist.IsAlpha
struct UManaPlaylist_IsAlpha_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CriWareRuntime.ManaPlaylist.Insert
struct UManaPlaylist_Insert_Params
{
	class UManaMovie*                                  ManaMovie;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Index;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CriWareRuntime.ManaPlaylist.GetRandom
struct UManaPlaylist_GetRandom_Params
{
	int                                                InOutIndex;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UManaMovie*                                  ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CriWareRuntime.ManaPlaylist.GetPrevious
struct UManaPlaylist_GetPrevious_Params
{
	int                                                InOutIndex;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UManaMovie*                                  ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CriWareRuntime.ManaPlaylist.GetNext
struct UManaPlaylist_GetNext_Params
{
	int                                                InOutIndex;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UManaMovie*                                  ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CriWareRuntime.ManaPlaylist.Get
struct UManaPlaylist_Get_Params
{
	int                                                Index;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UManaMovie*                                  ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CriWareRuntime.ManaPlaylist.Add
struct UManaPlaylist_Add_Params
{
	class UManaMovie*                                  ManaMovie;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CriWareRuntime.ManaTexture.SetMovieSource
struct UManaTexture_SetMovieSource_Params
{
	class UManaSource*                                 InSource;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CriWareRuntime.SoundAtomCue.GetUserData
struct USoundAtomCue_GetUserData_Params
{
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CriWareRuntime.SoundAtomCue.GetLength
struct USoundAtomCue_GetLength_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CriWareRuntime.SoundAtomCueSheet.ReleaseAcb
struct USoundAtomCueSheet_ReleaseAcb_Params
{
	struct FName                                       AcbName;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CriWareRuntime.SoundAtomCueSheet.LoadAtomCueSheet
struct USoundAtomCueSheet_LoadAtomCueSheet_Params
{
	class USoundAtomCueSheet*                          CueSheet;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundAtomCueSheet*                          ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CriWareRuntime.SoundAtomCueSheet.LoadAcb
struct USoundAtomCueSheet_LoadAcb_Params
{
	struct FName                                       AcbName;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundAtomCueSheet*                          ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CriWareRuntime.SoundAtomCueSheet.IsLoaded
struct USoundAtomCueSheet_IsLoaded_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CriWareRuntime.SoundAtomCueSheet.GetAtomCueByName
struct USoundAtomCueSheet_GetAtomCueByName_Params
{
	struct FString                                     CueName;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundAtomCue*                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CriWareRuntime.SoundAtomCueSheet.GetAtomCueByIndex
struct USoundAtomCueSheet_GetAtomCueByIndex_Params
{
	int                                                CueIndex;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundAtomCue*                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CriWareRuntime.SoundAtomCueSheet.GetAtomCueById
struct USoundAtomCueSheet_GetAtomCueById_Params
{
	int                                                CueId;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundAtomCue*                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CriWareRuntime.SoundAtomCueSheet.DetachDspBusSetting
struct USoundAtomCueSheet_DetachDspBusSetting_Params
{
};

// Function CriWareRuntime.SoundAtomCueSheet.AttachDspBusSetting
struct USoundAtomCueSheet_AttachDspBusSetting_Params
{
	struct FString                                     SettingName;                                               // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CriWareRuntime.SoundAtomCueSheet.ApplyDspBusSnapshot
struct USoundAtomCueSheet_ApplyDspBusSnapshot_Params
{
	struct FString                                     SnapshotName;                                              // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Milliseconds;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
