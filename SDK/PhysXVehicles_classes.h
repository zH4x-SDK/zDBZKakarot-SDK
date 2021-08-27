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

// Class PhysXVehicles.WheeledVehicleMovementComponent
// 0x0158 (0x02E0 - 0x0188)
class UWheeledVehicleMovementComponent : public UPawnMovementComponent
{
public:
	unsigned char                                      UnknownData00[0x158];                                     // 0x0188(0x0158) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PhysXVehicles.WheeledVehicleMovementComponent");
		return ptr;
	}

};


// Class PhysXVehicles.SimpleWheeledVehicleMovementComponent
// 0x0000 (0x02E0 - 0x02E0)
class USimpleWheeledVehicleMovementComponent : public UWheeledVehicleMovementComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PhysXVehicles.SimpleWheeledVehicleMovementComponent");
		return ptr;
	}


	void SetSteerAngle();
	void SetDriveTorque();
	void SetBrakeTorque();
};


// Class PhysXVehicles.TireConfig
// 0x0020 (0x0050 - 0x0030)
class UTireConfig : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0030(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PhysXVehicles.TireConfig");
		return ptr;
	}

};


// Class PhysXVehicles.VehicleAnimInstance
// 0x05C0 (0x0920 - 0x0360)
class UVehicleAnimInstance : public UAnimInstance
{
public:
	unsigned char                                      UnknownData00[0x5B0];                                     // 0x0360(0x05B0) MISSED OFFSET
	class UWheeledVehicleMovementComponent*            WheeledVehicleMovementComponent;                          // 0x0910(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0918(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PhysXVehicles.VehicleAnimInstance");
		return ptr;
	}


	void GetVehicle();
};


// Class PhysXVehicles.VehicleWheel
// 0x00C8 (0x00F0 - 0x0028)
class UVehicleWheel : public UObject
{
public:
	unsigned char                                      UnknownData00[0xC8];                                      // 0x0028(0x00C8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PhysXVehicles.VehicleWheel");
		return ptr;
	}

};


// Class PhysXVehicles.WheeledVehicle
// 0x0010 (0x03A8 - 0x0398)
class AWheeledVehicle : public APawn
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0398(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PhysXVehicles.WheeledVehicle");
		return ptr;
	}

};


// Class PhysXVehicles.WheeledVehicleMovementComponent4W
// 0x0158 (0x0438 - 0x02E0)
class UWheeledVehicleMovementComponent4W : public UWheeledVehicleMovementComponent
{
public:
	unsigned char                                      UnknownData00[0x158];                                     // 0x02E0(0x0158) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PhysXVehicles.WheeledVehicleMovementComponent4W");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
