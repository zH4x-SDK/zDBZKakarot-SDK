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

// Class CinematicCamera.CameraRig_Crane
// 0x0030 (0x0368 - 0x0338)
class ACameraRig_Crane : public AActor
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0338(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CinematicCamera.CameraRig_Crane");
		return ptr;
	}

};


// Class CinematicCamera.CameraRig_Rail
// 0x0020 (0x0358 - 0x0338)
class ACameraRig_Rail : public AActor
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0338(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CinematicCamera.CameraRig_Rail");
		return ptr;
	}

};


// Class CinematicCamera.CineCameraActor
// 0x0040 (0x09E0 - 0x09A0)
class ACineCameraActor : public ACameraActor
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x09A0(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CinematicCamera.CineCameraActor");
		return ptr;
	}

};


// Class CinematicCamera.CineCameraComponent
// 0x00C0 (0x09C0 - 0x0900)
class UCineCameraComponent : public UCameraComponent
{
public:
	unsigned char                                      UnknownData00[0xC0];                                      // 0x0900(0x00C0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CinematicCamera.CineCameraComponent");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
