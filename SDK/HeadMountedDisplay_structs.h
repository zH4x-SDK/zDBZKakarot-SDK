#pragma once

// Name: DBZKakarot, Version: 1.0.3

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Enums
//---------------------------------------------------------------------------

// Enum HeadMountedDisplay.ESpectatorScreenMode
enum class ESpectatorScreenMode : uint8_t
{

};


// Enum HeadMountedDisplay.EHMDTrackingOrigin
enum class EHMDTrackingOrigin : uint8_t
{

};


// Enum HeadMountedDisplay.EOrientPositionSelector
enum class EOrientPositionSelector : uint8_t
{

};


// Enum HeadMountedDisplay.EHMDWornState
enum class EHMDWornState : uint8_t
{

};



//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct HeadMountedDisplay.XRDeviceId
// 0x0010
struct FXRDeviceId
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
