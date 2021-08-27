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

// Class TimeManagement.FixedFrameRateCustomTimeStep
// 0x0008 (0x0030 - 0x0028)
class UFixedFrameRateCustomTimeStep : public UEngineCustomTimeStep
{
public:
	struct FFrameRate                                  FixedFrameRate;                                           // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TimeManagement.FixedFrameRateCustomTimeStep");
		return ptr;
	}

};


// Class TimeManagement.TimeManagementBlueprintLibrary
// 0x0000 (0x0028 - 0x0028)
class UTimeManagementBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TimeManagement.TimeManagementBlueprintLibrary");
		return ptr;
	}


	void STATIC_TransformTime();
	void STATIC_Subtract_FrameNumberInteger(const struct FFrameNumber& A, int B);
	void STATIC_Subtract_FrameNumberFrameNumber(const struct FFrameNumber& A, const struct FFrameNumber& B);
	void STATIC_SnapFrameTimeToRate();
	void STATIC_Multiply_SecondsFrameRate();
	void STATIC_Multiply_FrameNumberInteger(const struct FFrameNumber& A, int B);
	void STATIC_IsValid_MultipleOf();
	void STATIC_IsValid_Framerate();
	void STATIC_GetTimecode();
	void STATIC_Divide_FrameNumberInteger(const struct FFrameNumber& A, int B);
	void STATIC_Conv_TimecodeToString();
	void STATIC_Conv_QualifiedFrameTimeToSeconds();
	void STATIC_Conv_FrameRateToSeconds();
	void STATIC_Conv_FrameNumberToInteger();
	void STATIC_Add_FrameNumberInteger(const struct FFrameNumber& A, int B);
	void STATIC_Add_FrameNumberFrameNumber(const struct FFrameNumber& A, const struct FFrameNumber& B);
};


// Class TimeManagement.TimeSynchronizationSource
// 0x0008 (0x0030 - 0x0028)
class UTimeSynchronizationSource : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TimeManagement.TimeSynchronizationSource");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
