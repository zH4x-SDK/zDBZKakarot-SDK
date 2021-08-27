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

// Class MediaAssets.MediaSource
// 0x0008 (0x0030 - 0x0028)
class UMediaSource : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MediaAssets.MediaSource");
		return ptr;
	}


	void Validate();
	void GetUrl();
};


// Class MediaAssets.BaseMediaSource
// 0x0008 (0x0038 - 0x0030)
class UBaseMediaSource : public UMediaSource
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0030(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MediaAssets.BaseMediaSource");
		return ptr;
	}

};


// Class MediaAssets.FileMediaSource
// 0x0028 (0x0060 - 0x0038)
class UFileMediaSource : public UBaseMediaSource
{
public:
	struct FString                                     FilePath;                                                 // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               PrecacheFile;                                             // 0x0048(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x17];                                      // 0x0049(0x0017) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MediaAssets.FileMediaSource");
		return ptr;
	}


	void SetFilePath();
};


// Class MediaAssets.MediaBlueprintFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UMediaBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MediaAssets.MediaBlueprintFunctionLibrary");
		return ptr;
	}


	void STATIC_EnumerateWebcamCaptureDevices();
	void STATIC_EnumerateVideoCaptureDevices();
	void STATIC_EnumerateAudioCaptureDevices();
};


// Class MediaAssets.MediaPlayer
// 0x0110 (0x0138 - 0x0028)
class UMediaPlayer : public UObject
{
public:
	unsigned char                                      UnknownData00[0x110];                                     // 0x0028(0x0110) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MediaAssets.MediaPlayer");
		return ptr;
	}

};


// Class MediaAssets.MediaPlaylist
// 0x0010 (0x0038 - 0x0028)
class UMediaPlaylist : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MediaAssets.MediaPlaylist");
		return ptr;
	}

};


// Class MediaAssets.MediaSoundComponent
// 0x00A0 (0x0670 - 0x05D0)
class UMediaSoundComponent : public USynthComponent
{
public:
	unsigned char                                      UnknownData00[0xA0];                                      // 0x05D0(0x00A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MediaAssets.MediaSoundComponent");
		return ptr;
	}

};


// Class MediaAssets.MediaTexture
// 0x0090 (0x0140 - 0x00B0)
class UMediaTexture : public UTexture
{
public:
	unsigned char                                      AddressX;                                                 // 0x00B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      AddressY;                                                 // 0x00B1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8E];                                      // 0x00B2(0x008E) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MediaAssets.MediaTexture");
		return ptr;
	}

};


// Class MediaAssets.PlatformMediaSource
// 0x0008 (0x0038 - 0x0030)
class UPlatformMediaSource : public UMediaSource
{
public:
	class UMediaSource*                                MediaSource;                                              // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MediaAssets.PlatformMediaSource");
		return ptr;
	}

};


// Class MediaAssets.StreamMediaSource
// 0x0010 (0x0048 - 0x0038)
class UStreamMediaSource : public UBaseMediaSource
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0038(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MediaAssets.StreamMediaSource");
		return ptr;
	}

};


// Class MediaAssets.TimeSynchronizableMediaSource
// 0x0008 (0x0040 - 0x0038)
class UTimeSynchronizableMediaSource : public UBaseMediaSource
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MediaAssets.TimeSynchronizableMediaSource");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
