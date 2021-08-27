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

// Class MovieSceneCapture.MovieSceneCaptureProtocolBase
// 0x0030 (0x0058 - 0x0028)
class UMovieSceneCaptureProtocolBase : public UObject
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0028(0x0028) MISSED OFFSET
	                                                   State;                                                    // 0x0050(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0051(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneCapture.MovieSceneCaptureProtocolBase");
		return ptr;
	}

};


// Class MovieSceneCapture.MovieSceneAudioCaptureProtocolBase
// 0x0000 (0x0058 - 0x0058)
class UMovieSceneAudioCaptureProtocolBase : public UMovieSceneCaptureProtocolBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneCapture.MovieSceneAudioCaptureProtocolBase");
		return ptr;
	}

};


// Class MovieSceneCapture.NullAudioCaptureProtocol
// 0x0000 (0x0058 - 0x0058)
class UNullAudioCaptureProtocol : public UMovieSceneAudioCaptureProtocolBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneCapture.NullAudioCaptureProtocol");
		return ptr;
	}

};


// Class MovieSceneCapture.MasterAudioSubmixCaptureProtocol
// 0x0038 (0x0090 - 0x0058)
class UMasterAudioSubmixCaptureProtocol : public UMovieSceneAudioCaptureProtocolBase
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0058(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneCapture.MasterAudioSubmixCaptureProtocol");
		return ptr;
	}

};


// Class MovieSceneCapture.MovieSceneImageCaptureProtocolBase
// 0x0000 (0x0058 - 0x0058)
class UMovieSceneImageCaptureProtocolBase : public UMovieSceneCaptureProtocolBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneCapture.MovieSceneImageCaptureProtocolBase");
		return ptr;
	}

};


// Class MovieSceneCapture.CompositionGraphCaptureProtocol
// 0x0068 (0x00C0 - 0x0058)
class UCompositionGraphCaptureProtocol : public UMovieSceneImageCaptureProtocolBase
{
public:
	unsigned char                                      UnknownData00[0x68];                                      // 0x0058(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneCapture.CompositionGraphCaptureProtocol");
		return ptr;
	}

};


// Class MovieSceneCapture.FrameGrabberProtocol
// 0x0010 (0x0068 - 0x0058)
class UFrameGrabberProtocol : public UMovieSceneImageCaptureProtocolBase
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0058(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneCapture.FrameGrabberProtocol");
		return ptr;
	}

};


// Class MovieSceneCapture.ImageSequenceProtocol
// 0x0070 (0x00D8 - 0x0068)
class UImageSequenceProtocol : public UFrameGrabberProtocol
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x0068(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneCapture.ImageSequenceProtocol");
		return ptr;
	}

};


// Class MovieSceneCapture.CompressedImageSequenceProtocol
// 0x0008 (0x00E0 - 0x00D8)
class UCompressedImageSequenceProtocol : public UImageSequenceProtocol
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00D8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneCapture.CompressedImageSequenceProtocol");
		return ptr;
	}

};


// Class MovieSceneCapture.ImageSequenceProtocol_BMP
// 0x0000 (0x00D8 - 0x00D8)
class UImageSequenceProtocol_BMP : public UImageSequenceProtocol
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneCapture.ImageSequenceProtocol_BMP");
		return ptr;
	}

};


// Class MovieSceneCapture.ImageSequenceProtocol_PNG
// 0x0000 (0x00E0 - 0x00E0)
class UImageSequenceProtocol_PNG : public UCompressedImageSequenceProtocol
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneCapture.ImageSequenceProtocol_PNG");
		return ptr;
	}

};


// Class MovieSceneCapture.ImageSequenceProtocol_JPG
// 0x0000 (0x00E0 - 0x00E0)
class UImageSequenceProtocol_JPG : public UCompressedImageSequenceProtocol
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneCapture.ImageSequenceProtocol_JPG");
		return ptr;
	}

};


// Class MovieSceneCapture.ImageSequenceProtocol_EXR
// 0x0010 (0x00E8 - 0x00D8)
class UImageSequenceProtocol_EXR : public UImageSequenceProtocol
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x00D8(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneCapture.ImageSequenceProtocol_EXR");
		return ptr;
	}

};


// Class MovieSceneCapture.MovieSceneCaptureInterface
// 0x0000 (0x0028 - 0x0028)
class UMovieSceneCaptureInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneCapture.MovieSceneCaptureInterface");
		return ptr;
	}

};


// Class MovieSceneCapture.MovieSceneCapture
// 0x01C8 (0x01F0 - 0x0028)
class UMovieSceneCapture : public UObject
{
public:
	unsigned char                                      UnknownData00[0x1C8];                                     // 0x0028(0x01C8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneCapture.MovieSceneCapture");
		return ptr;
	}

};


// Class MovieSceneCapture.LevelCapture
// 0x0020 (0x0210 - 0x01F0)
class ULevelCapture : public UMovieSceneCapture
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x01F0(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneCapture.LevelCapture");
		return ptr;
	}

};


// Class MovieSceneCapture.MovieSceneCaptureEnvironment
// 0x0000 (0x0028 - 0x0028)
class UMovieSceneCaptureEnvironment : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneCapture.MovieSceneCaptureEnvironment");
		return ptr;
	}


	void STATIC_IsCaptureInProgress();
	void STATIC_GetCaptureFrameNumber();
	void STATIC_GetCaptureElapsedTime();
	void STATIC_FindImageCaptureProtocol();
	void STATIC_FindAudioCaptureProtocol();
};


// Class MovieSceneCapture.UserDefinedCaptureProtocol
// 0x0088 (0x00E0 - 0x0058)
class UUserDefinedCaptureProtocol : public UMovieSceneImageCaptureProtocolBase
{
public:
	class UWorld*                                      World;                                                    // 0x0058(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x80];                                      // 0x0060(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneCapture.UserDefinedCaptureProtocol");
		return ptr;
	}


	void StopCapturingFinalPixels();
	void StartCapturingFinalPixels();
	void ResolveBuffer();
	void PushBufferToStream();
	void OnWarmUp();
	void OnTick();
	void OnStartCapture();
	void OnSetup();
	void OnPreTick();
	void OnPauseCapture();
	void OnFinalize();
	void OnCaptureFrame();
	void OnCanFinalize();
	void OnBeginFinalize();
	void GetCurrentFrameMetrics();
	void GenerateFilename();
	void BindToStream();
};


// Class MovieSceneCapture.UserDefinedImageCaptureProtocol
// 0x0008 (0x00E8 - 0x00E0)
class UUserDefinedImageCaptureProtocol : public UUserDefinedCaptureProtocol
{
public:
	                                                   Format;                                                   // 0x00E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00E1(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneCapture.UserDefinedImageCaptureProtocol");
		return ptr;
	}

};


// Class MovieSceneCapture.VideoCaptureProtocol
// 0x0028 (0x0090 - 0x0068)
class UVideoCaptureProtocol : public UFrameGrabberProtocol
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0068(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneCapture.VideoCaptureProtocol");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
