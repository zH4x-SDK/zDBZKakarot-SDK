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
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct AT.TrackingEffect
// 0x0010
struct FTrackingEffect
{
	struct FVector                                     TrackingEffectLocation;                                    // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_YZ39[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct AT.ColorGrading
// 0x0018
struct FColorGrading
{
	class UTexture2D*                                  ColorGradingLUT;                                           // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ColorGradingIntensity;                                     // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FadeIn;                                                    // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FadeOut;                                                   // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_V7R9[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct AT.LandEffect
// 0x0010
struct FLandEffect
{
	struct FVector                                     RayDir;                                                    // 0x0000(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               SpawnOnNotRayHit;                                          // 0x000C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_AP1J[0x1];                                     // 0x000D(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TEnumAsByte<Engine_ETraceTypeQuery>                TraceType;                                                 // 0x000E(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_MY56[0x1];                                     // 0x000F(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct AT.SpawnList
// 0x0050
struct FSpawnList
{
	unsigned char                                      UnknownData_3URZ[0x50];                                    // 0x0000(0x0050) MISSED OFFSET (PADDING)

};

// ScriptStruct AT.NpcVariety_Fly
// 0x0018
struct FNpcVariety_Fly
{
	float                                              FlySpeedHigh;                                              // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FlySpeedLow;                                               // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FlyAngleYawHigh;                                           // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FlyAngleYawLow;                                            // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FlyAnglePitchHigh;                                         // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FlyAnglePitchLow;                                          // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct AT.NpcVarietyInfo
// 0x002C
struct FNpcVarietyInfo
{
	float                                              ScaleHigh;                                                 // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ScaleLow;                                                  // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MotionSpeedHigh;                                           // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MotionSpeedLow;                                            // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ValidityFlag_Fly;                                          // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_T71U[0x3];                                     // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FNpcVariety_Fly                             FlyVariety;                                                // 0x0014(0x0018) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct AT.AnimalSpawnSettingData
// 0x0020
struct FAnimalSpawnSettingData
{
	class UClass*                                      ClassToSpawn;                                              // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxAnimalNum;                                              // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSpawnInsideTree;                                          // 0x000C(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bDeletePlayerOutsideVolume;                                // 0x000D(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_CV8M[0x2];                                     // 0x000E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class AActor*>                              m_SpawnedActorArray;                                       // 0x0010(0x0010) (ZeroConstructor, Transient, NativeAccessSpecifierPublic)

};

// ScriptStruct AT.AnimalSpawnSettingData_Sky
// 0x0000 (0x0020 - 0x0020)
struct FAnimalSpawnSettingData_Sky : public FAnimalSpawnSettingData
{

};

// ScriptStruct AT.ATDamagePositiveParam
// 0x0030
struct FATDamagePositiveParam
{
	struct FName                                       DamageId;                                                  // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      DamageType;                                                // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              KnockbackRate;                                             // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              KnockbackAngleV;                                           // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              KnockbackAngleH;                                           // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	AT_EDamageDirectionType                            KnockbackType;                                             // 0x001C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	AT_E_BLOWVECTOR                                    ImpulseType;                                               // 0x001D(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	AT_E_REACTION_TYPE                                 ReactionId;                                                // 0x001E(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	AT_EDamageStrength                                 StrengthId;                                                // 0x001F(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              HitStop;                                                   // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	AT_ECameraShake                                    CameraShakeType;                                           // 0x0024(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_T8OI[0x3];                                     // 0x0025(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              HoldTime;                                                  // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                OffsetStrength;                                            // 0x002C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct AT.ProjectileLaunchData
// 0x0010
struct FProjectileLaunchData
{
	float                                              LaunchAngleH;                                              // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LaunchAngleV;                                              // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LaunchDistance;                                            // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LaunchRoll;                                                // 0x000C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct AT.ProjectileLaunchPattern
// 0x0010
struct FProjectileLaunchPattern
{
	TArray<struct FProjectileLaunchData>               LaunchData;                                                // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)

};

// ScriptStruct AT.EffectBaseData
// 0x0018
struct FEffectBaseData
{
	TArray<AT_EEffectCondition>                        Conditions;                                                // 0x0000(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ZR4Y[0x8];                                     // 0x0010(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct AT.TrailData
// 0x0028 (0x0040 - 0x0018)
struct FTrailData : public FEffectBaseData
{
	class UParticleSystem*                             ParticleSystem;                                            // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       FirstSocketName;                                           // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       SecondSocketName;                                          // 0x0028(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_ETrailWidthMode>                WidthScaleMode;                                            // 0x0030(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_9Q0L[0x7];                                     // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       WidthScaleCurve;                                           // 0x0038(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct AT.EF_TrailParticleData
// 0x0058 (0x0060 - 0x0008)
struct FEF_TrailParticleData : public FTableRowBase
{
	AT_ECHARACTER_TYPE                                 CharacterType;                                             // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_JEJB[0x7];                                     // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       Tag;                                                       // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               AppearOnAnyCharacter;                                      // 0x0018(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_9160[0x7];                                     // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTrailData                                  ParticleData;                                              // 0x0020(0x0040) (Edit, NativeAccessSpecifierPublic)

};

// ScriptStruct AT.EffectData
// 0x0028 (0x0040 - 0x0018)
struct FEffectData : public FEffectBaseData
{
	bool                                               Inverce;                                                   // 0x0018(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsRelative;                                                // 0x0019(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_5D14[0x2];                                     // 0x001A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     LocationOffset;                                            // 0x001C(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    RotationOffset;                                            // 0x0028(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                              Scale;                                                     // 0x0034(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Attached;                                                  // 0x0038(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               DestroyAtEnd;                                              // 0x0039(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               DetachedAtEnd;                                             // 0x003A(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_4Y1W[0x5];                                     // 0x003B(0x0005) MISSED OFFSET (PADDING)

};

// ScriptStruct AT.EF_ParticleData
// 0x0010 (0x0050 - 0x0040)
struct FEF_ParticleData : public FEffectData
{
	struct FName                                       SocketName;                                                // 0x0040(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleSystem*                             ParticleSystem;                                            // 0x0048(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct AT.LandEffectSetting
// 0x0058 (0x0060 - 0x0008)
struct FLandEffectSetting : public FTableRowBase
{
	TEnumAsByte<Engine_EPhysicalSurface>               SurfaceType;                                               // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               RotationDontAttach;                                        // 0x0009(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               AppearOnAnySurface;                                        // 0x000A(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_41Q7[0x5];                                     // 0x000B(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEF_ParticleData                            ParticleData;                                              // 0x0010(0x0050) (Edit, NativeAccessSpecifierPublic)

};

// ScriptStruct AT.UIQuestDetail
// 0x0018
struct FUIQuestDetail
{
	struct FName                                       DetailTxt;                                                 // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                QuestType;                                                 // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                CollectionStartNum;                                        // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                CollectionEndNum;                                          // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_S2LY[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct AT.UIQuestInfo
// 0x0080
struct FUIQuestInfo
{
	bool                                               bIsReplay;                                                 // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsMainQuest;                                              // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_CRHR[0x6];                                     // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       QuestCaptionTitle;                                         // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       QuestCaptionDetail;                                        // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ConvertedQuestCaptionDetail;                               // 0x0018(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       QuestProgressDetail;                                       // 0x0028(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FString>                             ReplaceTxtCtn;                                             // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FName                                       QuestListId;                                               // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       QuestListTitle;                                            // 0x0048(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ConvertedQuestListTitle;                                   // 0x0050(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FUIQuestDetail>                      QuestList;                                                 // 0x0060(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FString>                             ListReplaceTxtCtn;                                         // 0x0070(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct AT.RadialBlurParam
// 0x0050
struct FRadialBlurParam
{
	class UMaterialInstanceDynamic*                    DynamicMaterial;                                           // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_W5V3[0x48];                                    // 0x0008(0x0048) MISSED OFFSET (PADDING)

};

// ScriptStruct AT.SupportActionParameter
// 0x0010
struct FSupportActionParameter
{
	AT_ESupportActionCategory                          ActionCategory;                                            // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_03Q9[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              SupportGaugeRate;                                          // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Probability;                                               // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              RecastTime;                                                // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct AT.SupportRecoveryHpParameter
// 0x000C
struct FSupportRecoveryHpParameter
{
	float                                              FavorBorder;                                               // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              RecoveryRate;                                              // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              RecoveryFixed;                                             // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct AT.SupportRecoveryMpParameter
// 0x000C
struct FSupportRecoveryMpParameter
{
	float                                              FavorBorder;                                               // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              RecoveryRate;                                              // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              RecoveryFixed;                                             // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct AT.SupportStyleParameter
// 0x0010
struct FSupportStyleParameter
{
	TArray<struct FSupportActionParameter>             SupportActionTable;                                        // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct AT.ATMeshAttachObject
// 0x0040
struct FATMeshAttachObject
{
	class USkeletalMesh*                               Mesh;                                                      // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       AttachName;                                                // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                                  Offset;                                                    // 0x0010(0x0030) (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct AT.ATGameHUDSettings
// 0x0028
struct FATGameHUDSettings
{
	unsigned char                                      Class[0x28];                                               // 0x0000(0x0028) UNKNOWN PROPERTY: SoftClassProperty AT.ATGameHUDSettings.Class

};

// ScriptStruct AT.ParticleRefs
// 0x0020
struct FParticleRefs
{
	class UParticleSystemComponent*                    Appear;                                                    // 0x0000(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleSystem*                             AppearSystem;                                              // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleSystemComponent*                    Disappear;                                                 // 0x0010(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleSystem*                             DisappearSystem;                                           // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct AT.AnimalParameterTable
// 0x00A8 (0x00B0 - 0x0008)
struct FAnimalParameterTable : public FTableRowBase
{
	AT_EAnimalID                                       ID;                                                        // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_467A[0x7];                                     // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     VariationName;                                             // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              EscapeStartRange;                                          // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              EscapeEndRange;                                            // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              EscapeRandom;                                              // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CautionStartRange;                                         // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CautionEndRange;                                           // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ActionPlayTime;                                            // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              RespawnDistance;                                           // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              WalkSpeed;                                                 // 0x003C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              WalkAcceleration;                                          // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              WalkDeceleration;                                          // 0x0044(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              RunSpeed;                                                  // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              RunAcceleration;                                           // 0x004C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              RunDeceleration;                                           // 0x0050(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FlySpeed;                                                  // 0x0054(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FlyAcceleration;                                           // 0x0058(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FlyDeceleration;                                           // 0x005C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              GlideSpeed;                                                // 0x0060(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              GlideAcceleration;                                         // 0x0064(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              GlideDeceleration;                                         // 0x0068(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DiveSpeed;                                                 // 0x006C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DiveAcceleration;                                          // 0x0070(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DiveDeceleration;                                          // 0x0074(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FlyTime;                                                   // 0x0078(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              GlideTime;                                                 // 0x007C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DiveStartAngle;                                            // 0x0080(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DiveEndAngle;                                              // 0x0084(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              RandamTime;                                                // 0x0088(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                HP;                                                        // 0x008C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DownPower;                                                 // 0x0090(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DownTime;                                                  // 0x0094(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                FalterDamage;                                              // 0x0098(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DropDistanceMin;                                           // 0x009C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DropDistanceMax;                                           // 0x00A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DropHeight;                                                // 0x00A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DropAngle;                                                 // 0x00A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SpawnRatio;                                                // 0x00AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct AT.TransformFaceInfo
// 0x0010
struct FTransformFaceInfo
{
	struct FName                                       TransformID;                                               // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                TransformFaceMontage;                                      // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct AT.CreateCaptureSetParameter
// 0x00A0
struct FCreateCaptureSetParameter
{
	struct FTransform                                  CameraTransform;                                           // 0x0000(0x0030) (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                                  DirectionalLightTransform;                                 // 0x0030(0x0030) (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                                  SkyLightTransform;                                         // 0x0060(0x0030) (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FColor                                      DirectionalLightColor;                                     // 0x0090(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                      SkyLightColor;                                             // 0x0094(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_ESceneCaptureSource>            CaptureSource;                                             // 0x0098(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_1NSM[0x3];                                     // 0x0099(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              SkyLightIntensity;                                         // 0x009C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct AT.PartyMember
// 0x0028
struct FPartyMember
{
	unsigned char                                      UnknownData_6CFM[0x28];                                    // 0x0000(0x0028) MISSED OFFSET (PADDING)

};

// ScriptStruct AT.EventParam
// 0x0108
struct FEventParam
{
	unsigned char                                      UnknownData_LRRD[0x108];                                   // 0x0000(0x0108) MISSED OFFSET (PADDING)

};

// ScriptStruct AT.CmnSkillMenuList00Param
// 0x0030
struct FCmnSkillMenuList00Param
{
	struct FName                                       SkillId;                                                   // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ItemName;                                                  // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	AT_ESkillAttribute                                 ActiveSkillType;                                           // 0x0018(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	AT_EPassiveSkillEffectCategory                     PassiveSkillType;                                          // 0x0019(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_2EL5[0x2];                                     // 0x001A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                SkillLevel;                                                // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsNew;                                                    // 0x0020(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsEquipped;                                               // 0x0021(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsActive;                                                 // 0x0022(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsPassiveSkill;                                           // 0x0023(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsBanned;                                                 // 0x0024(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_WVGD[0x3];                                     // 0x0025(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                Rarity;                                                    // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_GQJR[0x4];                                     // 0x002C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct AT.CmnMenuList00Param
// 0x0028
struct FCmnMenuList00Param
{
	AT_EITEM_ICON_CATEGORY_TYPE                        ItemType;                                                  // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	AT_EITEM_ICON_TYPE                                 IconType;                                                  // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_FEJ6[0x6];                                     // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     ItemName;                                                  // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ItemNum;                                                   // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsNew;                                                    // 0x001C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsActive;                                                 // 0x001D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsClear;                                                  // 0x001E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsIconColor;                                              // 0x001F(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Rarity;                                                    // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_V20M[0x4];                                     // 0x0024(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct AT.CmnMenuListParam
// 0x0068
struct FCmnMenuListParam
{
	struct FName                                       ItemId;                                                    // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Rarity;                                                    // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	AT_EITEM_ICON_TYPE                                 ItemType;                                                  // 0x000C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	AT_EITEM_ICON_CATEGORY_TYPE                        CategoryIconType;                                          // 0x000D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_OO8Q[0x2];                                     // 0x000E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     ItemName;                                                  // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ItemDetail;                                                // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ItemFlavor;                                                // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     WhereToGet;                                                // 0x0040(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     SellPrice;                                                 // 0x0050(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ItemNum;                                                   // 0x0060(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsNew;                                                    // 0x0064(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsNumDisp;                                                // 0x0065(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsActive;                                                 // 0x0066(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_3C1T[0x1];                                     // 0x0067(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct AT.CmnMenuBar03Param
// 0x0060
struct FCmnMenuBar03Param
{
	struct FName                                       ItemId;                                                    // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     KeyHelpId;                                                 // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       KeyBindId;                                                 // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ItemName;                                                  // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                DefaultValue;                                              // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                CachedValue;                                               // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                OptionValue;                                               // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_D59D[0x4];                                     // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FString>                             OptionList;                                                // 0x0040(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                               bIsNew;                                                    // 0x0050(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsActive;                                                 // 0x0051(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsEdit;                                                   // 0x0052(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsMin;                                                    // 0x0053(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsMax;                                                    // 0x0054(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsLoop;                                                   // 0x0055(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsOption;                                                 // 0x0056(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsVolume;                                                 // 0x0057(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsPopUp;                                                  // 0x0058(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsDisplay;                                                // 0x0059(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsNumber;                                                 // 0x005A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsKeyBind;                                                // 0x005B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsConfirm;                                                // 0x005C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_KUV4[0x3];                                     // 0x005D(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct AT.CmnMenuList03Param
// 0x0020
struct FCmnMenuList03Param
{
	struct FName                                       ItemId;                                                    // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ItemName;                                                  // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsNew;                                                    // 0x0018(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsActive;                                                 // 0x0019(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_0IAQ[0x6];                                     // 0x001A(0x0006) MISSED OFFSET (PADDING)

};

// ScriptStruct AT.CmnQuestMenuList06Param
// 0x0048
struct FCmnQuestMenuList06Param
{
	unsigned char                                      IconType;                                                  // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_NEFF[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     ItemName;                                                  // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     CaptionTxt;                                                // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       MissionId;                                                 // 0x0028(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     QuestLevel;                                                // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsTrophy;                                                 // 0x0040(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsCheck;                                                  // 0x0041(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsNavi;                                                   // 0x0042(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsNew;                                                    // 0x0043(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsActive;                                                 // 0x0044(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsRepeat;                                                 // 0x0045(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsClear;                                                  // 0x0046(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_47MC[0x1];                                     // 0x0047(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct AT.UIXcmnPlatBtnTypeInfo
// 0x0030
struct FUIXcmnPlatBtnTypeInfo
{
	TArray<AT_EATPlatBtnId>                            KeyIdsForPad;                                              // 0x0000(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FName                                       KeyConfigActionId;                                         // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       DynamicAssignInputId;                                      // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<AT_EATPlatBtnId>                            KeyIds;                                                    // 0x0020(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct AT.CmnTabIconParam
// 0x0002
struct FCmnTabIconParam
{
	AT_EITEM_ICON_CATEGORY_TYPE                        CmnIconType;                                               // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsEnable;                                                 // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct AT.LinkPanelInfo
// 0x0010
struct FLinkPanelInfo
{
	unsigned char                                      UnknownData_8RY7[0x10];                                    // 0x0000(0x0010) MISSED OFFSET (PADDING)

};

// ScriptStruct AT.AT_UICompZListCardParam
// 0x0048
struct FAT_UICompZListCardParam
{
	int                                                ItemId;                                                    // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_V4S7[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       ItemName;                                                  // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ItemCardFileName;                                          // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ItemTitle;                                                 // 0x0020(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ItemText;                                                  // 0x0030(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsOpen;                                                   // 0x0040(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsNew;                                                    // 0x0041(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsVertical;                                               // 0x0042(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsPremiumRare;                                            // 0x0043(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_Q4M0[0x4];                                     // 0x0044(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct AT.AT_UICompZListDemoParam
// 0x0048
struct FAT_UICompZListDemoParam
{
	int                                                ItemId;                                                    // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ITRY[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       ItemName;                                                  // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ItemScene;                                                 // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ItemChapter;                                               // 0x0020(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ItemEpisode;                                               // 0x0030(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsOpen;                                                    // 0x0040(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsNew;                                                     // 0x0041(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_LC4K[0x6];                                     // 0x0042(0x0006) MISSED OFFSET (PADDING)

};

// ScriptStruct AT.AT_UICompZListParam
// 0x0030
struct FAT_UICompZListParam
{
	int                                                ItemId;                                                    // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_58MG[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       ItemName;                                                  // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ItemLabel;                                                 // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ItemNum;                                                   // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ItemMax;                                                   // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                IconType;                                                  // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsOpen;                                                    // 0x002C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsClosedOpen;                                              // 0x002D(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsNew;                                                     // 0x002E(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_UL1R[0x1];                                     // 0x002F(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct AT.AT_UICompZListBgmParam
// 0x0028
struct FAT_UICompZListBgmParam
{
	int                                                ItemId;                                                    // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_GMZI[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       ItemName;                                                  // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ItemLabel;                                                 // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsAppendix;                                                // 0x0020(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsPlaying;                                                 // 0x0021(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsOpen;                                                    // 0x0022(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsNew;                                                     // 0x0023(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_IW8E[0x4];                                     // 0x0024(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct AT.DamagePopPlayInfo
// 0x0038
struct FDamagePopPlayInfo
{
	bool                                               bIsPlayer;                                                 // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_BPYV[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                DamageValue;                                               // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   DrawOffset;                                                // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCameraOut;                                                // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_7EAM[0x3];                                     // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     HitPos;                                                    // 0x0014(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	AT_EDAMAGE_TYPE                                    DamageType;                                                // 0x0020(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_3IPL[0x3];                                     // 0x0021(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector2D                                   DrawScale;                                                 // 0x0024(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DrawAngleDegree;                                           // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class AAT_Character>                DamageTarget;                                              // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct AT.GameWindowSetupItemInfo
// 0x0020
struct FGameWindowSetupItemInfo
{
	struct FString                                     ItemName;                                                  // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ItemNum;                                                   // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	AT_EITEM_ICON_TYPE                                 ItemIconType;                                              // 0x0014(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	AT_EITEM_ICON_CATEGORY_TYPE                        ItemCategoryType;                                          // 0x0015(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_RN0B[0x2];                                     // 0x0016(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                ItemRarity;                                                // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_B7ED[0x4];                                     // 0x001C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct AT.GameWindowSetupSelectItemInfo
// 0x0030
struct FGameWindowSetupSelectItemInfo
{
	struct FString                                     ItemName;                                                  // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ItemDetail;                                                // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ItemNum;                                                   // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	AT_EITEM_ICON_TYPE                                 ItemIconType;                                              // 0x0024(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_VWJN[0x3];                                     // 0x0025(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                ItemRarity;                                                // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_60SI[0x4];                                     // 0x002C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct AT.GameWindowSetupTextMenuInfo
// 0x0010
struct FGameWindowSetupTextMenuInfo
{
	struct FString                                     MenuName;                                                  // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct AT.GameWindowSetupComuEmbInfo
// 0x0008
struct FGameWindowSetupComuEmbInfo
{
	struct FName                                       SoulEmId;                                                  // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct AT.GameWindowSetupCheckInfo
// 0x0038
struct FGameWindowSetupCheckInfo
{
	bool                                               ItemChecked;                                               // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ItemReceived;                                              // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ZGPU[0x6];                                     // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     ItemCondition;                                             // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ItemName;                                                  // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ItemNum;                                                   // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	AT_EITEM_ICON_TYPE                                 ItemIconType;                                              // 0x002C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_WKBE[0x3];                                     // 0x002D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                ItemRarity;                                                // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_EQ3L[0x4];                                     // 0x0034(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct AT.GameWindowSetupWishInfo
// 0x0030
struct FGameWindowSetupWishInfo
{
	int                                                WishInfoId;                                                // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_UA7M[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     WishName;                                                  // 0x0008(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     WishDetail;                                                // 0x0018(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsClear;                                                  // 0x0028(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_TCPX[0x7];                                     // 0x0029(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct AT.GameWindowSetupLinkList
// 0x0058
struct FGameWindowSetupLinkList
{
	unsigned char                                      UnknownData_MVHY[0x18];                                    // 0x0000(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTexture2D*                                  LinkID[0x6];                                               // 0x0018(0x0030) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_EY0B[0x10];                                    // 0x0048(0x0010) MISSED OFFSET (PADDING)

};

// ScriptStruct AT.GameWindowSetupBannedSkillList
// 0x0018
struct FGameWindowSetupBannedSkillList
{
	class UTexture2D*                                  CharTex;                                                   // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_NVGM[0x10];                                    // 0x0008(0x0010) MISSED OFFSET (PADDING)

};

// ScriptStruct AT.LevelUpLogItem
// 0x0010
struct FLevelUpLogItem
{
	unsigned char                                      UnknownData_P2C8[0x10];                                    // 0x0000(0x0010) MISSED OFFSET (PADDING)

};

// ScriptStruct AT.MapMIconLegend
// 0x0018
struct FMapMIconLegend
{
	AT_EMapIcon                                        IconType;                                                  // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_LSCM[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       MsgId;                                                     // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsAlwaysVisible;                                           // 0x0010(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_REZ5[0x7];                                     // 0x0011(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct AT.BlinkIconData
// 0x0010
struct FBlinkIconData
{
	unsigned char                                      UnknownData_KE3N[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAT_MapIconSwitchBase*                       mapIcon;                                                   // 0x0008(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct AT.IconBlinker
// 0x0020
struct FIconBlinker
{
	unsigned char                                      UnknownData_7Y1N[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FBlinkIconData>                      blinkList;                                                 // 0x0008(0x0010) (ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_TAI0[0x8];                                     // 0x0018(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct AT.WorldMapsSymbol
// 0x0020
struct FWorldMapsSymbol
{
	class UCanvasPanelSlot*                            BaseSlot;                                                  // 0x0000(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAT_UIMapWorldIcon*                          mapIcon;                                                   // 0x0008(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ZS4J[0x10];                                    // 0x0010(0x0010) MISSED OFFSET (PADDING)

};

// ScriptStruct AT.WorldMapIconData
// 0x0010
struct FWorldMapIconData
{
	unsigned char                                      UnknownData_17WV[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTexture2D*                                  ResoucePtr;                                                // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct AT.MenuWIndowSetupListNumMenuInfo
// 0x0018
struct FMenuWIndowSetupListNumMenuInfo
{
	struct FString                                     MenuName;                                                  // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ListNum;                                                   // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_3IXS[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct AT.XlistBar04Info
// 0x0058
struct FXlistBar04Info
{
	AT_EXlistBar04InfoMode                             Mode;                                                      // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ZEJO[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       ItemId;                                                    // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Name;                                                      // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Description;                                               // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	AT_EITEM_ICON_TYPE                                 Type;                                                      // 0x0030(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsNew;                                                     // 0x0031(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_Z7VU[0x2];                                     // 0x0032(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                Price;                                                     // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                basePrice;                                                 // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCanPurchese;                                              // 0x003C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_FRW8[0x3];                                     // 0x003D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                numberOfSold;                                              // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                numberOfPossession;                                        // 0x0044(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                numberOfStocks;                                            // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	AT_EShopMode                                       ShopMode;                                                  // 0x004C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_TT7M[0x3];                                     // 0x004D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                Rarity;                                                    // 0x0050(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_JJJY[0x4];                                     // 0x0054(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct AT.GaugeUpdateSpeedThresholdParam
// 0x0008
struct FGaugeUpdateSpeedThresholdParam
{
	float                                              Threshold;                                                 // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              UpdateSeconds;                                             // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct AT.TrainingDetailTask
// 0x0070
struct FTrainingDetailTask
{
	class UCanvasPanel*                                WL_Pnl_Detail_Task;                                        // 0x0000(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCFUIXcmnMultiLineText*                      WL_Txt_Task;                                               // 0x0008(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCFUIXcmnMultiLineText*                      WL_Txt_Detail_Task;                                        // 0x0010(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCFUIXcmnMultiLineText*                      WL_Txt_Detail_Task01;                                      // 0x0018(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCFUIXcmnMultiLineText*                      WL_Txt_Name_P;                                             // 0x0020(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCFUIXcmnMultiLineText*                      WL_Txt_Lv_E00;                                             // 0x0028(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UImage*                                      WL_Ins_Mask_Char_P;                                        // 0x0030(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCFUIXcmnMultiLineText*                      WL_Txt_Name_E00;                                           // 0x0038(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UImage*                                      WL_Ins_Mask_Char_E;                                        // 0x0040(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UImage*                                      WL_Img_Dmy_Charicon;                                       // 0x0048(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCFUIXcmnMultiLineText*                      WL_Txt_Name_E01;                                           // 0x0050(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCFUIXcmnMultiLineText*                      WL_Txt_Lv_E01;                                             // 0x0058(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCFUIXcmnMultiLineText*                      WL_Txt_Name_E02;                                           // 0x0060(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCFUIXcmnMultiLineText*                      WL_Txt_Lv_E02;                                             // 0x0068(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

};

// ScriptStruct AT.CaptureSkillDetail
// 0x0048
struct FCaptureSkillDetail
{
	class UCanvasPanel*                                WL_Pnl_Sp;                                                 // 0x0000(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCFUIXcmnMultiLineText*                      WL_Txt_Cap00;                                              // 0x0008(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCFUIXcmnMultiLineText*                      WL_Txt_Cap02;                                              // 0x0010(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCFUIXcmnMultiLineText*                      WL_Txt_Cap03;                                              // 0x0018(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCFUIXcmnMultiLineText*                      WL_Txt_Detail;                                             // 0x0020(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UAT_UIIconClear*                             WL_Icon_Clear;                                             // 0x0028(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UImage*                                      WL_Img_Fade00;                                             // 0x0030(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UImage*                                      WL_Img_Fade01;                                             // 0x0038(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UImage*                                      WL_Img_Fade02;                                             // 0x0040(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

};

// ScriptStruct AT.BarData
// 0x0028
struct FBarData
{
	unsigned char                                      UnknownData_563M[0x28];                                    // 0x0000(0x0028) MISSED OFFSET (PADDING)

};

// ScriptStruct AT.CaptureParam
// 0x0050
struct FCaptureParam
{
	unsigned char                                      UnknownData_2SFG[0x50];                                    // 0x0000(0x0050) MISSED OFFSET (PADDING)

};

// ScriptStruct AT.StartpartyPartySelectData
// 0x00B0
struct FStartpartyPartySelectData
{
	int                                                cursorIndex;                                               // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_9L6O[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TMap<AT_ECHARACTER_TYPE, class UTexture2D*>        IconTextureList;                                           // 0x0008(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TMap<AT_ECHARACTER_TYPE, struct FString>           NowLoadingPathList;                                        // 0x0058(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_4DE4[0x8];                                     // 0x00A8(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct AT.StartStatusBasicParam
// 0x00C0
struct FStartStatusBasicParam
{
	AT_EStartPartyBarEditMode                          Mode;                                                      // 0x0000(0x0001) ELEMENT_SIZE_MISMATCH (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_KQ49[0x3];                                     // 0x0000(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	AT_ECHARACTER_TYPE                                 charatype;                                                 // 0x0004(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_OB5J[0x3];                                     // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTexture2D*                                  icon;                                                      // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Level;                                                     // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_QPPV[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Name;                                                      // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_J7QO[0x8];                                     // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                hpCurrentNum;                                              // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                hpMaxNum;                                                  // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                spCurrentNum;                                              // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                spMaxNum;                                                  // 0x003C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                infightingAttack;                                          // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                infightingDefense;                                         // 0x0044(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                shootingAttack;                                            // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                shootingDefense;                                           // 0x004C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              critical;                                                  // 0x0050(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                diffHpMaxNum;                                              // 0x0054(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                diffSpMaxNum;                                              // 0x0058(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                diffInfightingAttack;                                      // 0x005C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                diffInfightingDefense;                                     // 0x0060(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                diffShootingAttack;                                        // 0x0064(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                diffShootingDefense;                                       // 0x0068(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              diffCritical;                                              // 0x006C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	AT_ESupportStyle                                   SupportStyle;                                              // 0x0070(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	AT_ESkillAttribute                                 supportSkillAttr1;                                         // 0x0071(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_1RBL[0x6];                                     // 0x0072(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     supportSkillName1;                                         // 0x0078(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                rarity1;                                                   // 0x0088(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	AT_ESkillAttribute                                 supportSkillAttr2;                                         // 0x008C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_I1AL[0x3];                                     // 0x008D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     supportSkillName2;                                         // 0x0090(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                rarity2;                                                   // 0x00A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	AT_EStartPartyBarType                              Type;                                                      // 0x00A4(0x0001) ELEMENT_SIZE_MISMATCH (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_S1AL[0x3];                                     // 0x00A4(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	int                                                HpMaxNumBuff;                                              // 0x00A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               SpMaxNumBuff;                                              // 0x00AC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               InfightingAttackBuff;                                      // 0x00AD(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               InfightingDefenseBuff;                                     // 0x00AE(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ShootingAttackBuff;                                        // 0x00AF(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ShootingDefenseBuff;                                       // 0x00B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               CriticalBuff;                                              // 0x00B1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_MUMW[0x2];                                     // 0x00B2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                diffHpMaxNumBuff;                                          // 0x00B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               diffSpMaxNumBuff;                                          // 0x00B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               diffInfightingAttackBuff;                                  // 0x00B9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               diffInfightingDefenseBuff;                                 // 0x00BA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               diffShootingAttackBuff;                                    // 0x00BB(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               diffShootingDefenseBuff;                                   // 0x00BC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               diffCriticalBuff;                                          // 0x00BD(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_UKIO[0x2];                                     // 0x00BE(0x0002) MISSED OFFSET (PADDING)

};

// ScriptStruct AT.SaveLoadBarParam
// 0x0080
struct FSaveLoadBarParam
{
	class UTexture2D*                                  ScreenTex;                                                 // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ROUQ[0x78];                                    // 0x0008(0x0078) MISSED OFFSET (PADDING)

};

// ScriptStruct AT.StateIconInfo
// 0x0010
struct FStateIconInfo
{
	AT_E_STATE_ICON_TYPE                               IconType;                                                  // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_S0G2[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              BuffTimeSec;                                               // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LeftBuffTimeSec;                                           // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIconActive;                                               // 0x000C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bNewFlg;                                                   // 0x000D(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_07QA[0x2];                                     // 0x000E(0x0002) MISSED OFFSET (PADDING)

};

// ScriptStruct AT.TextStyle
// 0x001C
struct FTextStyle
{
	struct FLinearColor                                Color;                                                     // 0x0000(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                FontSize;                                                  // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              fontHeight;                                                // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Height;                                                    // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct AT.UIXcmnPlatBtnInfo
// 0x0038
struct FUIXcmnPlatBtnInfo
{
	unsigned char                                      UnknownData_I74J[0x30];                                    // 0x0000(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTexture2D*                                  TextureIns;                                                // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct AT.ActChargeHeatCutInfo
// 0x0010
struct FActChargeHeatCutInfo
{
	struct FName                                       FormChangeID;                                              // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                Montage;                                                   // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct AT.Cpl002MakoudanDirectionParam
// 0x0008
struct FCpl002MakoudanDirectionParam
{
	float                                              DirectAngleX;                                              // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DirectAngleY;                                              // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct AT.Cpl002MakoudanShotParam
// 0x0018
struct FCpl002MakoudanShotParam
{
	int                                                Rate;                                                      // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_DC7B[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<int>                                        ShotDirectTable;                                           // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct AT.SkillMontageFormChangeCutinInfo
// 0x0010
struct FSkillMontageFormChangeCutinInfo
{
	struct FName                                       FormChangeID;                                              // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                Montage;                                                   // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct AT.SkillMontageInfo
// 0x0078
struct FSkillMontageInfo
{
	class UAnimMontage*                                WaitMontage;                                               // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              WaitLoopTime;                                              // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              WaitLoopTimeHeatUpCancel;                                  // 0x000C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               WaitCancelNotPlayer;                                       // 0x0010(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_FOJW[0x7];                                     // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAnimMontage*                                AttackMontage;                                             // 0x0018(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AttackLoopTime;                                            // 0x0020(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AttackLoopTimeSupportRatio;                                // 0x0024(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AttackLoopNum;                                             // 0x0028(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AttackLoopDistance;                                        // 0x002C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AttackEndTime;                                             // 0x0030(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_MY62[0x4];                                     // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAnimMontage*                                AttackCutinMontage;                                        // 0x0038(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FSkillMontageFormChangeCutinInfo>    FormChangeCutinInfo;                                       // 0x0040(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	class UAnimMontage*                                AttackCutinTargetMontage;                                  // 0x0050(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       AttackCutinTargetMontageID;                                // 0x0058(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               AttackCutinAdjustDestructObject;                           // 0x0060(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      AttackFizzleFlag;                                          // 0x0061(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_8U9U[0x6];                                     // 0x0062(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAnimMontage*                                AttackFizzleMontage;                                       // 0x0068(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bGroundMontage;                                            // 0x0070(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               SkipEndState;                                              // 0x0071(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_MCW3[0x6];                                     // 0x0072(0x0006) MISSED OFFSET (PADDING)

};

// ScriptStruct AT.Cpl005LongRangeAProjectileParam
// 0x0024
struct FCpl005LongRangeAProjectileParam
{
	struct FRotator                                    RotationOffsetList[0x3];                                   // 0x0000(0x0024) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct AT.DoubleSundayBeamOrbitInfo
// 0x0020
struct FDoubleSundayBeamOrbitInfo
{
	float                                              SetAngleSecond;                                            // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	AT_EDoubleSundayBeamEaseSet                        BeamEaseSet;                                               // 0x0004(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_937O[0x3];                                     // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              BeamEaseExp;                                               // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              RotAngle;                                                  // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               TraceTargetFlag;                                           // 0x0010(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_UMQ6[0x3];                                     // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              TraceStrength;                                             // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SetPitch;                                                  // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SetPitchSec;                                               // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct AT.ATActCpl034SkillPunishStormData
// 0x0020
struct FATActCpl034SkillPunishStormData
{
	class UAnimMontage*                                Montage;                                                   // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      ExplosionSpawnClass;                                       // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              StartWaitTime;                                             // 0x0010(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              EndWaitTime;                                               // 0x0014(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DelayExplodeTime;                                          // 0x0018(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_UN34[0x4];                                     // 0x001C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct AT.ATActCpl034SkillSonicBlowData
// 0x0010
struct FATActCpl034SkillSonicBlowData
{
	class UClass*                                      SubClassTeleport;                                          // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TeleportStartTime;                                         // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               CanAttackState;                                            // 0x000C(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               CorrectHorizontal;                                         // 0x000D(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_G001[0x2];                                     // 0x000E(0x0002) MISSED OFFSET (PADDING)

};

// ScriptStruct AT.LongBlowoffChaseMontageInfo
// 0x0018
struct FLongBlowoffChaseMontageInfo
{
	class UAnimMontage*                                MontageMove;                                               // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MoveTime;                                                  // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MoveEndDist;                                               // 0x000C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                MontageAttack;                                             // 0x0010(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct AT.LongComboInfo
// 0x0018
struct FLongComboInfo
{
	TArray<class UAnimMontage*>                        MontageCombo;                                              // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	class UAnimMontage*                                MontageFinish;                                             // 0x0010(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct AT.SparkingComboInfo
// 0x0018
struct FSparkingComboInfo
{
	struct FName                                       FormChangeID;                                              // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UAnimMontage*>                        Montage;                                                   // 0x0008(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)

};

// ScriptStruct AT.ShortComboInfo
// 0x00A8
struct FShortComboInfo
{
	TArray<class UAnimMontage*>                        MontageCombo;                                              // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<class UAnimMontage*>                        MontageComboLv2;                                           // 0x0010(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<class UAnimMontage*>                        MontageComboLv3;                                           // 0x0020(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	class UAnimMontage*                                MontageComboFinishCut;                                     // 0x0030(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UAnimMontage*>                        MontageUpCombo;                                            // 0x0038(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	class UAnimMontage*                                MontageUpComboFinishCut;                                   // 0x0048(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsPercentageUpComboAffect;                                 // 0x0050(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_NC2W[0x3];                                     // 0x0051(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              UpComboAffect;                                             // 0x0054(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UAnimMontage*>                        MontageDownCombo;                                          // 0x0058(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	class UAnimMontage*                                MontageDownComboFinishCut;                                 // 0x0068(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsPercentageDownComboAffect;                               // 0x0070(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_AMK6[0x3];                                     // 0x0071(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              DownComboAffect;                                           // 0x0074(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UAnimMontage*>                        MontageLeftCombo;                                          // 0x0078(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	class UAnimMontage*                                MontageLeftComboFinishCut;                                 // 0x0088(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsPercentageLeftComboAffect;                               // 0x0090(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_LTH2[0x3];                                     // 0x0091(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              LeftComboAffect;                                           // 0x0094(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FSparkingComboInfo>                  MontageComboSp;                                            // 0x0098(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)

};

// ScriptStruct AT.SkillMoveTeleportParam
// 0x0018
struct FSkillMoveTeleportParam
{
	struct FName                                       SkillId;                                                   // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TeleportDist;                                              // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TeleportDistCut;                                           // 0x000C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               OutsideTeleport;                                           // 0x0010(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_7TH0[0x7];                                     // 0x0011(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct AT.CooperationRushMontageInfo
// 0x0010
struct FCooperationRushMontageInfo
{
	class UAnimMontage*                                MontageAttack;                                             // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       MontageDamageID;                                           // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct AT.CooperationCameraInfo
// 0x0000 (0x002C - 0x002C)
struct FCooperationCameraInfo : public FSkillCameraInfo
{

};

// ScriptStruct AT.CooperationTalkInfo
// 0x0010
struct FCooperationTalkInfo
{
	struct FName                                       TalkID;                                                    // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Duration;                                                  // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_UAC7[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct AT.MemberTalkInfo
// 0x0018
struct FMemberTalkInfo
{
	AT_ECHARACTER_TYPE                                 Character;                                                 // 0x0000(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_FRTH[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FCooperationTalkInfo                        Info;                                                      // 0x0008(0x0010) (Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct AT.ExclusiveTalkInfo
// 0x0040
struct FExclusiveTalkInfo
{
	struct FCooperationTalkInfo                        OwnerInfo;                                                 // 0x0000(0x0010) (Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	struct FMemberTalkInfo                             MemberTalkInfo[0x2];                                       // 0x0010(0x0030) (Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct AT.ObserverCondition
// 0x0040
struct FObserverCondition
{
	struct FString                                     ID;                                                        // 0x0000(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     TriggerId;                                                 // 0x0010(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Distance;                                                  // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      ConditionFlags;                                            // 0x0024(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_M41R[0x3];                                     // 0x0025(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     CommandId;                                                 // 0x0028(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bFinished;                                                 // 0x0038(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bEnabledTrigger;                                           // 0x0039(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bExecute;                                                  // 0x003A(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_4XOU[0x5];                                     // 0x003B(0x0005) MISSED OFFSET (PADDING)

};

// ScriptStruct AT.GeneralTalkEventArgment
// 0x0008
struct FGeneralTalkEventArgment
{
	AT_EQUEST_GENERAL_TALK_TIMING                      Timing;                                                    // 0x0000(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bTerrainDamage;                                            // 0x0001(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bWindRoad;                                                 // 0x0002(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bEnemiesAI;                                                // 0x0003(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCameraShake;                                              // 0x0004(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bMobCharacter;                                             // 0x0005(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bLandmarkCharacter;                                        // 0x0006(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCould;                                                    // 0x0007(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct AT.BattlePowerTextData
// 0x0028
struct FBattlePowerTextData
{
	int64_t                                            MinValue;                                                  // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64_t                                            MaxValue;                                                  // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                LinearColor;                                               // 0x0010(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUseEffect;                                                // 0x0020(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_8NGI[0x7];                                     // 0x0021(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct AT.ReplicateBodyAttackPattern
// 0x000C
struct FReplicateBodyAttackPattern
{
	AT_EReplicateBodyAttackTargetType                  TargetType;                                                // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_SNRN[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              TargetParameter;                                           // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Interval;                                                  // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct AT.SlashWaveLaunchData
// 0x0010
struct FSlashWaveLaunchData
{
	float                                              ShotRot;                                                   // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ProjectileRot;                                             // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ProjectileTurnSpeed;                                       // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ShotWaitTime;                                              // 0x000C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct AT.SlashWaveLaunchPattern
// 0x0020
struct FSlashWaveLaunchPattern
{
	int                                                RandWeight;                                                // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_I39Q[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAnimMontage*                                MontageShot;                                               // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FSlashWaveLaunchData>                LaunchData;                                                // 0x0010(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)

};

// ScriptStruct AT.TemporaryMeshInfo
// 0x0030
struct FTemporaryMeshInfo
{
	AT_ECHARACTER_TYPE                                 CharacterType;                                             // 0x0000(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_RWON[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USkeletalMesh*                               Mesh;                                                      // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimationAsset*                             AnimNut;                                                   // 0x0010(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimationAsset*                             AnimEnd;                                                   // 0x0018(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Scale;                                                     // 0x0020(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_MKZ7[0x4];                                     // 0x002C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct AT.ParticleFloatParam
// 0x0018
struct FParticleFloatParam
{
	struct FName                                       Name;                                                      // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              StartTime;                                                 // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Duration;                                                  // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              StartValue;                                                // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              EndValue;                                                  // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct AT.ATAtrociousPhaseClasses
// 0x0018
struct FATAtrociousPhaseClasses
{
	class UClass*                                      PreBattleClass;                                            // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      BattleClass;                                               // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      ConditionClass;                                            // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct AT.ATAtrociousConditionParam
// 0x0010
struct FATAtrociousConditionParam
{
	struct FName                                       LevelName;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	AT_EATAtrociousPhase                               phase;                                                     // 0x0008(0x0001) ELEMENT_SIZE_MISMATCH (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_A4WK[0x3];                                     // 0x0008(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownData_NJLW[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct AT.AttachParticleParameter
// 0x0050
struct FAttachParticleParameter
{
	struct FName                                       ID;                                                        // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleSystem*                             Particle;                                                  // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       SocketName;                                                // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Location;                                                  // 0x0018(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    Rotation;                                                  // 0x0024(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                     Scale;                                                     // 0x0030(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_NGLC[0x4];                                     // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       ParameterName;                                             // 0x0040(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ParameterValue;                                            // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_MRRN[0x4];                                     // 0x004C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct AT.BattleGroupAICharacters
// 0x0010
struct FBattleGroupAICharacters
{
	TArray<AT_ECHARACTER_TYPE>                         Characters;                                                // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct AT.SkillActionData
// 0x0030
struct FSkillActionData
{
	struct FName                                       ID;                                                        // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      ActionClassTable[0x28];                                    // 0x0008(0x0028) UNKNOWN PROPERTY: SoftClassProperty AT.SkillActionData.ActionClassTable

};

// ScriptStruct AT.ATCharacterStandWaitVariationLoopParam
// 0x000C
struct FATCharacterStandWaitVariationLoopParam
{
	TEnumAsByte<AT_EATCharacterStandWaitVariationState> Type;                                                      // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_G4OL[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector2D                                   RandomLoopCount;                                           // 0x0004(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct AT.ATDamageCollision
// 0x0008
struct FATDamageCollision
{
	class UCapsuleComponent*                           CapsuleComponent;                                          // 0x0000(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct AT.ATFormData
// 0x0010
struct FATFormData
{
	struct FName                                       CharaCodeUI;                                               // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Height;                                                    // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Weight;                                                    // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct AT.ATVariationData
// 0x0040
struct FATVariationData
{
	TArray<struct FATFormData>                         FormData;                                                  // 0x0000(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FName                                       FormChangeAuraName;                                        // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       HeatUpAuraName;                                            // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AuraScale;                                                 // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_BDQ2[0x4];                                     // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       AuraColor;                                                 // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       FresnelColor;                                              // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       OutlineColor;                                              // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct AT.ATCharacterEffectTableIDSet
// 0x0010
struct FATCharacterEffectTableIDSet
{
	class UDataTable*                                  CharacterEffectTable;                                      // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       CharacterEffectID;                                         // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct AT.ATMeshParts
// 0x0010
struct FATMeshParts
{
	class USkeletalMesh*                               Mesh;                                                      // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture*                                    Texture;                                                   // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct AT.ATCharacterStatus
// 0x0078
struct FATCharacterStatus
{
	double                                             HitPoint;                                                  // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                             MagicPoint;                                                // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                             HitPointRecover;                                           // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                             MagicPointRecover;                                         // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                             ShortOffensivePow;                                         // 0x0020(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                             LongOffensivePow;                                          // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                             MoveOffensivePow;                                          // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                             ShortDefensivePow;                                         // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                             LongDefensivePow;                                          // 0x0040(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                             MoveDefensivePow;                                          // 0x0048(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                             CriticalRate;                                              // 0x0050(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                             MoveSpeed;                                                 // 0x0058(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                             BreakGaugeValueMax;                                        // 0x0060(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                             BreakOffensivePow;                                         // 0x0068(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                             GuardBreakValueMax;                                        // 0x0070(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct AT.LoadingAIBehaviorAsset
// 0x0050
struct FLoadingAIBehaviorAsset
{
	unsigned char                                      UnknownData_WN5J[0x50];                                    // 0x0000(0x0050) MISSED OFFSET (PADDING)

};

// ScriptStruct AT.LoadingEncountAsset
// 0x0078
struct FLoadingEncountAsset
{
	unsigned char                                      UnknownData_555G[0x78];                                    // 0x0000(0x0078) MISSED OFFSET (PADDING)

};

// ScriptStruct AT.LoadingAIMoveAsset
// 0x0078
struct FLoadingAIMoveAsset
{
	unsigned char                                      UnknownData_5LJB[0x78];                                    // 0x0000(0x0078) MISSED OFFSET (PADDING)

};

// ScriptStruct AT.LoadingAIBehaviorAssetInstance
// 0x0010
struct FLoadingAIBehaviorAssetInstance
{
	class UBehaviorTree*                               BehaviorTree;                                              // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UBlackboardData*                             BlackboardData;                                            // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct AT.ReferenceToEncountAssetInstance
// 0x0018
struct FReferenceToEncountAssetInstance
{
	class UDataTable*                                  EnemyParameterList;                                        // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDataTable*                                  EnemyAppearTable;                                          // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDataTable*                                  EnemyParamDistRelation;                                    // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct AT.ReferenceToAIMoveAssetInstance
// 0x0018
struct FReferenceToAIMoveAssetInstance
{
	class UDataTable*                                  MoveForwardData;                                           // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDataTable*                                  MoveDistanceData;                                          // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDataTable*                                  MoveAroundData;                                            // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct AT.ATDataAssetBaseballGameInfo
// 0x0030
struct FATDataAssetBaseballGameInfo
{
	struct FName                                       MasterId;                                                  // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      CharacterMesh[0x28];                                       // 0x0008(0x0028) UNKNOWN PROPERTY: SoftObjectProperty AT.ATDataAssetBaseballGameInfo.CharacterMesh

};

// ScriptStruct AT.ATDataAssetBaseballGameCommonInfo
// 0x0938
struct FATDataAssetBaseballGameCommonInfo
{
	unsigned char                                      BallMesh[0x28];                                            // 0x0000(0x0028) UNKNOWN PROPERTY: SoftObjectProperty AT.ATDataAssetBaseballGameCommonInfo.BallMesh
	unsigned char                                      BatMesh[0x28];                                             // 0x0028(0x0028) UNKNOWN PROPERTY: SoftObjectProperty AT.ATDataAssetBaseballGameCommonInfo.BatMesh
	unsigned char                                      GroveMesh[0x28];                                           // 0x0050(0x0028) UNKNOWN PROPERTY: SoftObjectProperty AT.ATDataAssetBaseballGameCommonInfo.GroveMesh
	unsigned char                                      StraightBallAnimSequence[0x28];                            // 0x0078(0x0028) UNKNOWN PROPERTY: SoftObjectProperty AT.ATDataAssetBaseballGameCommonInfo.StraightBallAnimSequence
	unsigned char                                      CurveBallAnimSequence[0x28];                               // 0x00A0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty AT.ATDataAssetBaseballGameCommonInfo.CurveBallAnimSequence
	unsigned char                                      ForkBallAnimSequence[0x28];                                // 0x00C8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty AT.ATDataAssetBaseballGameCommonInfo.ForkBallAnimSequence
	unsigned char                                      KnuckleBallAnimSequence[0x28];                             // 0x00F0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty AT.ATDataAssetBaseballGameCommonInfo.KnuckleBallAnimSequence
	unsigned char                                      SpiralBallAnimSequence[0x28];                              // 0x0118(0x0028) UNKNOWN PROPERTY: SoftObjectProperty AT.ATDataAssetBaseballGameCommonInfo.SpiralBallAnimSequence
	unsigned char                                      WaveBallAnimSequence[0x28];                                // 0x0140(0x0028) UNKNOWN PROPERTY: SoftObjectProperty AT.ATDataAssetBaseballGameCommonInfo.WaveBallAnimSequence
	unsigned char                                      WaitR01_01ST_Montage[0x28];                                // 0x0168(0x0028) UNKNOWN PROPERTY: SoftObjectProperty AT.ATDataAssetBaseballGameCommonInfo.WaitR01_01ST_Montage
	unsigned char                                      WaitR01_02LP_Montage[0x28];                                // 0x0190(0x0028) UNKNOWN PROPERTY: SoftObjectProperty AT.ATDataAssetBaseballGameCommonInfo.WaitR01_02LP_Montage
	unsigned char                                      ThrowR01_01ST_Montage[0x28];                               // 0x01B8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty AT.ATDataAssetBaseballGameCommonInfo.ThrowR01_01ST_Montage
	unsigned char                                      ThrowR01_02LP_Montage[0x28];                               // 0x01E0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty AT.ATDataAssetBaseballGameCommonInfo.ThrowR01_02LP_Montage
	unsigned char                                      ThrowR01_03ED_Montage[0x28];                               // 0x0208(0x0028) UNKNOWN PROPERTY: SoftObjectProperty AT.ATDataAssetBaseballGameCommonInfo.ThrowR01_03ED_Montage
	unsigned char                                      HitR01_L_01ST_Montage[0x28];                               // 0x0230(0x0028) UNKNOWN PROPERTY: SoftObjectProperty AT.ATDataAssetBaseballGameCommonInfo.HitR01_L_01ST_Montage
	unsigned char                                      HitR01_L_02LP_Montage[0x28];                               // 0x0258(0x0028) UNKNOWN PROPERTY: SoftObjectProperty AT.ATDataAssetBaseballGameCommonInfo.HitR01_L_02LP_Montage
	unsigned char                                      HitR01_R_01ST_Montage[0x28];                               // 0x0280(0x0028) UNKNOWN PROPERTY: SoftObjectProperty AT.ATDataAssetBaseballGameCommonInfo.HitR01_R_01ST_Montage
	unsigned char                                      HitR01_R_02LP_Montage[0x28];                               // 0x02A8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty AT.ATDataAssetBaseballGameCommonInfo.HitR01_R_02LP_Montage
	unsigned char                                      WaitR01_01ST_Aura_Montage[0x28];                           // 0x02D0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty AT.ATDataAssetBaseballGameCommonInfo.WaitR01_01ST_Aura_Montage
	unsigned char                                      WaitR01_02LP_Aura_Montage[0x28];                           // 0x02F8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty AT.ATDataAssetBaseballGameCommonInfo.WaitR01_02LP_Aura_Montage
	unsigned char                                      WaitR01_02LP_NoLoop_Aura_Montage[0x28];                    // 0x0320(0x0028) UNKNOWN PROPERTY: SoftObjectProperty AT.ATDataAssetBaseballGameCommonInfo.WaitR01_02LP_NoLoop_Aura_Montage
	unsigned char                                      ThrowR01_01ST_Aura_Montage[0x28];                          // 0x0348(0x0028) UNKNOWN PROPERTY: SoftObjectProperty AT.ATDataAssetBaseballGameCommonInfo.ThrowR01_01ST_Aura_Montage
	unsigned char                                      ThrowR01_02LP_Aura_Montage[0x28];                          // 0x0370(0x0028) UNKNOWN PROPERTY: SoftObjectProperty AT.ATDataAssetBaseballGameCommonInfo.ThrowR01_02LP_Aura_Montage
	unsigned char                                      ThrowR01_03ED_Aura_Montage[0x28];                          // 0x0398(0x0028) UNKNOWN PROPERTY: SoftObjectProperty AT.ATDataAssetBaseballGameCommonInfo.ThrowR01_03ED_Aura_Montage
	unsigned char                                      Wait01_Montage[0x28];                                      // 0x03C0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty AT.ATDataAssetBaseballGameCommonInfo.Wait01_Montage
	unsigned char                                      SwingWait_Montage[0x28];                                   // 0x03E8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty AT.ATDataAssetBaseballGameCommonInfo.SwingWait_Montage
	unsigned char                                      SwingMiss_Montage[0x28];                                   // 0x0410(0x0028) UNKNOWN PROPERTY: SoftObjectProperty AT.ATDataAssetBaseballGameCommonInfo.SwingMiss_Montage
	unsigned char                                      Swing01_01ST_Montage[0x28];                                // 0x0438(0x0028) UNKNOWN PROPERTY: SoftObjectProperty AT.ATDataAssetBaseballGameCommonInfo.Swing01_01ST_Montage
	unsigned char                                      Swing01_02LP_Montage[0x28];                                // 0x0460(0x0028) UNKNOWN PROPERTY: SoftObjectProperty AT.ATDataAssetBaseballGameCommonInfo.Swing01_02LP_Montage
	unsigned char                                      Swing01_03ED_Montage[0x28];                                // 0x0488(0x0028) UNKNOWN PROPERTY: SoftObjectProperty AT.ATDataAssetBaseballGameCommonInfo.Swing01_03ED_Montage
	unsigned char                                      Wait01_Aura_Montage[0x28];                                 // 0x04B0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty AT.ATDataAssetBaseballGameCommonInfo.Wait01_Aura_Montage
	unsigned char                                      SwingWait_Aura_Montage[0x28];                              // 0x04D8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty AT.ATDataAssetBaseballGameCommonInfo.SwingWait_Aura_Montage
	unsigned char                                      SwingMiss_Aura_Montage[0x28];                              // 0x0500(0x0028) UNKNOWN PROPERTY: SoftObjectProperty AT.ATDataAssetBaseballGameCommonInfo.SwingMiss_Aura_Montage
	unsigned char                                      Swing01_01ST_Aura_Montage[0x28];                           // 0x0528(0x0028) UNKNOWN PROPERTY: SoftObjectProperty AT.ATDataAssetBaseballGameCommonInfo.Swing01_01ST_Aura_Montage
	unsigned char                                      Swing01_02LP_Aura_Montage[0x28];                           // 0x0550(0x0028) UNKNOWN PROPERTY: SoftObjectProperty AT.ATDataAssetBaseballGameCommonInfo.Swing01_02LP_Aura_Montage
	unsigned char                                      Swing01_03ED_Aura_Montage[0x28];                           // 0x0578(0x0028) UNKNOWN PROPERTY: SoftObjectProperty AT.ATDataAssetBaseballGameCommonInfo.Swing01_03ED_Aura_Montage
	unsigned char                                      Result_Montage[0x28];                                      // 0x05A0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty AT.ATDataAssetBaseballGameCommonInfo.Result_Montage
	unsigned char                                      BallAuraBlueS_Particle[0x28];                              // 0x05C8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty AT.ATDataAssetBaseballGameCommonInfo.BallAuraBlueS_Particle
	unsigned char                                      BallAuraBlueL_Particle[0x28];                              // 0x05F0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty AT.ATDataAssetBaseballGameCommonInfo.BallAuraBlueL_Particle
	unsigned char                                      BallAuraRedS_Particle[0x28];                               // 0x0618(0x0028) UNKNOWN PROPERTY: SoftObjectProperty AT.ATDataAssetBaseballGameCommonInfo.BallAuraRedS_Particle
	unsigned char                                      BallAuraRedL_Particle[0x28];                               // 0x0640(0x0028) UNKNOWN PROPERTY: SoftObjectProperty AT.ATDataAssetBaseballGameCommonInfo.BallAuraRedL_Particle
	unsigned char                                      Hit_Particle[0x28];                                        // 0x0668(0x0028) UNKNOWN PROPERTY: SoftObjectProperty AT.ATDataAssetBaseballGameCommonInfo.Hit_Particle
	unsigned char                                      HitDist_Particle[0x28];                                    // 0x0690(0x0028) UNKNOWN PROPERTY: SoftObjectProperty AT.ATDataAssetBaseballGameCommonInfo.HitDist_Particle
	unsigned char                                      Radiation_Particle[0x28];                                  // 0x06B8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty AT.ATDataAssetBaseballGameCommonInfo.Radiation_Particle
	unsigned char                                      ConstantDataTable[0x28];                                   // 0x06E0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty AT.ATDataAssetBaseballGameCommonInfo.ConstantDataTable
	unsigned char                                      PitcherDataTable[0x28];                                    // 0x0708(0x0028) UNKNOWN PROPERTY: SoftObjectProperty AT.ATDataAssetBaseballGameCommonInfo.PitcherDataTable
	unsigned char                                      BallDataTable[0x28];                                       // 0x0730(0x0028) UNKNOWN PROPERTY: SoftObjectProperty AT.ATDataAssetBaseballGameCommonInfo.BallDataTable
	unsigned char                                      BallTypeDataTable[0x28];                                   // 0x0758(0x0028) UNKNOWN PROPERTY: SoftObjectProperty AT.ATDataAssetBaseballGameCommonInfo.BallTypeDataTable
	unsigned char                                      HitTimingDataTable[0x28];                                  // 0x0780(0x0028) UNKNOWN PROPERTY: SoftObjectProperty AT.ATDataAssetBaseballGameCommonInfo.HitTimingDataTable
	unsigned char                                      CameraDataTable[0x28];                                     // 0x07A8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty AT.ATDataAssetBaseballGameCommonInfo.CameraDataTable
	unsigned char                                      BattlePowerDataTable[0x28];                                // 0x07D0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty AT.ATDataAssetBaseballGameCommonInfo.BattlePowerDataTable
	unsigned char                                      CutinDataTable[0x28];                                      // 0x07F8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty AT.ATDataAssetBaseballGameCommonInfo.CutinDataTable
	unsigned char                                      MobPresetDataTable[0x28];                                  // 0x0820(0x0028) UNKNOWN PROPERTY: SoftObjectProperty AT.ATDataAssetBaseballGameCommonInfo.MobPresetDataTable
	unsigned char                                      Mob_Man_Reaction01[0x28];                                  // 0x0848(0x0028) UNKNOWN PROPERTY: SoftObjectProperty AT.ATDataAssetBaseballGameCommonInfo.Mob_Man_Reaction01
	unsigned char                                      Mob_Man_Reaction02[0x28];                                  // 0x0870(0x0028) UNKNOWN PROPERTY: SoftObjectProperty AT.ATDataAssetBaseballGameCommonInfo.Mob_Man_Reaction02
	unsigned char                                      Mob_Man_Reaction03[0x28];                                  // 0x0898(0x0028) UNKNOWN PROPERTY: SoftObjectProperty AT.ATDataAssetBaseballGameCommonInfo.Mob_Man_Reaction03
	unsigned char                                      Mob_Woman_Reaction01[0x28];                                // 0x08C0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty AT.ATDataAssetBaseballGameCommonInfo.Mob_Woman_Reaction01
	unsigned char                                      Mob_Woman_Reaction02[0x28];                                // 0x08E8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty AT.ATDataAssetBaseballGameCommonInfo.Mob_Woman_Reaction02
	unsigned char                                      Mob_Kid_Reaction01[0x28];                                  // 0x0910(0x0028) UNKNOWN PROPERTY: SoftObjectProperty AT.ATDataAssetBaseballGameCommonInfo.Mob_Kid_Reaction01

};

// ScriptStruct AT.LoadingBaseballGameAsset
// 0x0028
struct FLoadingBaseballGameAsset
{
	unsigned char                                      UnknownData_ATTR[0x28];                                    // 0x0000(0x0028) MISSED OFFSET (PADDING)

};

// ScriptStruct AT.LoadingBaseballGameCommonAsset
// 0x0938
struct FLoadingBaseballGameCommonAsset
{
	unsigned char                                      UnknownData_LXKI[0x938];                                   // 0x0000(0x0938) MISSED OFFSET (PADDING)

};

// ScriptStruct AT.ReferenceToBaseballGameAssetInstance
// 0x0008
struct FReferenceToBaseballGameAssetInstance
{
	class USkeletalMesh*                               CharacterMesh;                                             // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct AT.ReferenceToBaseballGameCommonAssetInstance
// 0x01D8
struct FReferenceToBaseballGameCommonAssetInstance
{
	class USkeletalMesh*                               BallMesh;                                                  // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkeletalMesh*                               BatMesh;                                                   // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkeletalMesh*                               GroveMesh;                                                 // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimSequence*                               StraightBallAnimSequence;                                  // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimSequence*                               CurveBallAnimSequence;                                     // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimSequence*                               ForkBallAnimSequence;                                      // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimSequence*                               KnuckleBallAnimSequence;                                   // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimSequence*                               SpiralBallAnimSequence;                                    // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimSequence*                               WaveBallAnimSequence;                                      // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                WaitR01_01ST_Montage;                                      // 0x0048(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                WaitR01_02LP_Montage;                                      // 0x0050(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                ThrowR01_01ST_Montage;                                     // 0x0058(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                ThrowR01_02LP_Montage;                                     // 0x0060(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                ThrowR01_03ED_Montage;                                     // 0x0068(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                HitR01_L_01ST_Montage;                                     // 0x0070(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                HitR01_L_02LP_Montage;                                     // 0x0078(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                HitR01_R_01ST_Montage;                                     // 0x0080(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                HitR01_R_02LP_Montage;                                     // 0x0088(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                WaitR01_01ST_Aura_Montage;                                 // 0x0090(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                WaitR01_02LP_Aura_Montage;                                 // 0x0098(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                WaitR01_02LP_NoLoop_Aura_Montage;                          // 0x00A0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                ThrowR01_01ST_Aura_Montage;                                // 0x00A8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                ThrowR01_02LP_Aura_Montage;                                // 0x00B0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                ThrowR01_03ED_Aura_Montage;                                // 0x00B8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                Wait01_Montage;                                            // 0x00C0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                SwingWait_Montage;                                         // 0x00C8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                SwingMiss_Montage;                                         // 0x00D0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                Swing01_01ST_Montage;                                      // 0x00D8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                Swing01_02LP_Montage;                                      // 0x00E0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                Swing01_03ED_Montage;                                      // 0x00E8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                Wait01_Aura_Montage;                                       // 0x00F0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                SwingWait_Aura_Montage;                                    // 0x00F8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                SwingMiss_Aura_Montage;                                    // 0x0100(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                Swing01_01ST_Aura_Montage;                                 // 0x0108(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                Swing01_02LP_Aura_Montage;                                 // 0x0110(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                Swing01_03ED_Aura_Montage;                                 // 0x0118(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                Result_Montage;                                            // 0x0120(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleSystem*                             BallAuraBlueS_Particle;                                    // 0x0128(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleSystem*                             BallAuraBlueL_Particle;                                    // 0x0130(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleSystem*                             BallAuraRedS_Particle;                                     // 0x0138(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleSystem*                             BallAuraRedL_Particle;                                     // 0x0140(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleSystem*                             Hit_Particle;                                              // 0x0148(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleSystem*                             HitDist_Particle;                                          // 0x0150(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleSystem*                             Radiation_Particle;                                        // 0x0158(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDataTable*                                  ConstantDataTable;                                         // 0x0160(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDataTable*                                  PitcherDataTable;                                          // 0x0168(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDataTable*                                  BallDataTable;                                             // 0x0170(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDataTable*                                  BallTypeDataTable;                                         // 0x0178(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDataTable*                                  HitTimingDataTable;                                        // 0x0180(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDataTable*                                  CameraDataTable;                                           // 0x0188(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDataTable*                                  BattlePowerDataTable;                                      // 0x0190(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDataTable*                                  CutinDataTable;                                            // 0x0198(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDataTable*                                  MobPresetDataTable;                                        // 0x01A0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                Mob_Man_Reaction01;                                        // 0x01A8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                Mob_Man_Reaction02;                                        // 0x01B0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                Mob_Man_Reaction03;                                        // 0x01B8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                Mob_Woman_Reaction01;                                      // 0x01C0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                Mob_Woman_Reaction02;                                      // 0x01C8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                Mob_Kid_Reaction01;                                        // 0x01D0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct AT.ATDataAssetBattleAIInfo
// 0x0058
struct FATDataAssetBattleAIInfo
{
	struct FName                                       MasterId;                                                  // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      PhaseTable[0x28];                                          // 0x0008(0x0028) UNKNOWN PROPERTY: SoftObjectProperty AT.ATDataAssetBattleAIInfo.PhaseTable
	unsigned char                                      BehaviorTable[0x28];                                       // 0x0030(0x0028) UNKNOWN PROPERTY: SoftObjectProperty AT.ATDataAssetBattleAIInfo.BehaviorTable

};

// ScriptStruct AT.ATDataAssetBattleGroupAIInfo
// 0x0030
struct FATDataAssetBattleGroupAIInfo
{
	struct FName                                       MasterId;                                                  // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      GroupInfo[0x28];                                           // 0x0008(0x0028) UNKNOWN PROPERTY: SoftClassProperty AT.ATDataAssetBattleGroupAIInfo.GroupInfo

};

// ScriptStruct AT.LoadingBattleAIAsset
// 0x0050
struct FLoadingBattleAIAsset
{
	unsigned char                                      UnknownData_1MK9[0x50];                                    // 0x0000(0x0050) MISSED OFFSET (PADDING)

};

// ScriptStruct AT.ReferenceToBattleAIAssetInstance
// 0x0010
struct FReferenceToBattleAIAssetInstance
{
	class UDataTable*                                  PhaseTable;                                                // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDataTable*                                  BehaviorTable;                                             // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct AT.LoadingBattleGroupAIAsset
// 0x0028
struct FLoadingBattleGroupAIAsset
{
	unsigned char                                      UnknownData_3I6L[0x28];                                    // 0x0000(0x0028) MISSED OFFSET (PADDING)

};

// ScriptStruct AT.ReferenceToBattleGroupAIAssetInstance
// 0x0008
struct FReferenceToBattleGroupAIAssetInstance
{
	class UClass*                                      GroupInfo;                                                 // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct AT.ATDataAssetCharacterInfo
// 0x0030
struct FATDataAssetCharacterInfo
{
	struct FName                                       MasterId;                                                  // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      CharacterClass[0x28];                                      // 0x0008(0x0028) UNKNOWN PROPERTY: SoftClassProperty AT.ATDataAssetCharacterInfo.CharacterClass

};

// ScriptStruct AT.ATDataAssetCharacterActionInfo
// 0x0030
struct FATDataAssetCharacterActionInfo
{
	struct FName                                       MasterId;                                                  // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      ActionClassTable[0x28];                                    // 0x0008(0x0028) UNKNOWN PROPERTY: SoftClassProperty AT.ATDataAssetCharacterActionInfo.ActionClassTable

};

// ScriptStruct AT.LoadingCharacterActionAsset
// 0x0028
struct FLoadingCharacterActionAsset
{
	unsigned char                                      CharacterAction[0x28];                                     // 0x0000(0x0028) UNKNOWN PROPERTY: SoftClassProperty AT.LoadingCharacterActionAsset.CharacterAction

};

// ScriptStruct AT.ReferenceToCharacterActionAssetInstance
// 0x0008
struct FReferenceToCharacterActionAssetInstance
{
	class UClass*                                      CharacterAction;                                           // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct AT.LoadingCharacterAsset
// 0x0028
struct FLoadingCharacterAsset
{
	unsigned char                                      Character[0x28];                                           // 0x0000(0x0028) UNKNOWN PROPERTY: SoftClassProperty AT.LoadingCharacterAsset.Character

};

// ScriptStruct AT.ReferenceToCharacterAssetInstance
// 0x0008
struct FReferenceToCharacterAssetInstance
{
	class UClass*                                      Character;                                                 // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct AT.ATDataAssetVariationMeshInfo
// 0x0030
struct FATDataAssetVariationMeshInfo
{
	struct FName                                       MasterId;                                                  // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      PartsClass[0x28];                                          // 0x0008(0x0028) UNKNOWN PROPERTY: SoftClassProperty AT.ATDataAssetVariationMeshInfo.PartsClass

};

// ScriptStruct AT.ATDataAssetFormMeshInfo
// 0x0030
struct FATDataAssetFormMeshInfo
{
	struct FName                                       MasterId;                                                  // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      PartsClass[0x28];                                          // 0x0008(0x0028) UNKNOWN PROPERTY: SoftClassProperty AT.ATDataAssetFormMeshInfo.PartsClass

};

// ScriptStruct AT.ATLoadingVariationMeshAsset
// 0x0030
struct FATLoadingVariationMeshAsset
{
	struct FName                                       MasterId;                                                  // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      Mesh[0x28];                                                // 0x0008(0x0028) UNKNOWN PROPERTY: SoftClassProperty AT.ATLoadingVariationMeshAsset.Mesh

};

// ScriptStruct AT.ATReferenceToVariationMeshAssetInstance
// 0x0010
struct FATReferenceToVariationMeshAssetInstance
{
	struct FName                                       MasterId;                                                  // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      Mesh;                                                      // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct AT.ATLoadingFormMeshAsset
// 0x0030
struct FATLoadingFormMeshAsset
{
	struct FName                                       MasterId;                                                  // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      Mesh[0x28];                                                // 0x0008(0x0028) UNKNOWN PROPERTY: SoftClassProperty AT.ATLoadingFormMeshAsset.Mesh

};

// ScriptStruct AT.ATReferenceToFormMeshAssetInstance
// 0x0010
struct FATReferenceToFormMeshAssetInstance
{
	struct FName                                       MasterId;                                                  // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      Mesh;                                                      // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct AT.ATDataAssetCookingDemoInfo
// 0x0030
struct FATDataAssetCookingDemoInfo
{
	struct FName                                       MasterId;                                                  // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      Sequencer[0x28];                                           // 0x0008(0x0028) UNKNOWN PROPERTY: SoftClassProperty AT.ATDataAssetCookingDemoInfo.Sequencer

};

// ScriptStruct AT.ATDataAssetCookingDemoCharacterResourceInfo
// 0x02D8
struct FATDataAssetCookingDemoCharacterResourceInfo
{
	struct FName                                       MasterId;                                                  // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      Reaction_Grade1_Motion[0x28];                              // 0x0008(0x0028) UNKNOWN PROPERTY: SoftObjectProperty AT.ATDataAssetCookingDemoCharacterResourceInfo.Reaction_Grade1_Motion
	unsigned char                                      Reaction_Grade2_Motion[0x28];                              // 0x0030(0x0028) UNKNOWN PROPERTY: SoftObjectProperty AT.ATDataAssetCookingDemoCharacterResourceInfo.Reaction_Grade2_Motion
	unsigned char                                      Reaction_Grade3_Motion[0x28];                              // 0x0058(0x0028) UNKNOWN PROPERTY: SoftObjectProperty AT.ATDataAssetCookingDemoCharacterResourceInfo.Reaction_Grade3_Motion
	unsigned char                                      Meal_Seize_Motion[0x28];                                   // 0x0080(0x0028) UNKNOWN PROPERTY: SoftObjectProperty AT.ATDataAssetCookingDemoCharacterResourceInfo.Meal_Seize_Motion
	unsigned char                                      Meal_Stick1_Motion[0x28];                                  // 0x00A8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty AT.ATDataAssetCookingDemoCharacterResourceInfo.Meal_Stick1_Motion
	unsigned char                                      Meal_Stick2_Motion[0x28];                                  // 0x00D0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty AT.ATDataAssetCookingDemoCharacterResourceInfo.Meal_Stick2_Motion
	unsigned char                                      Meal_Stick3_Motion[0x28];                                  // 0x00F8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty AT.ATDataAssetCookingDemoCharacterResourceInfo.Meal_Stick3_Motion
	unsigned char                                      Meal_Stick4_Motion[0x28];                                  // 0x0120(0x0028) UNKNOWN PROPERTY: SoftObjectProperty AT.ATDataAssetCookingDemoCharacterResourceInfo.Meal_Stick4_Motion
	unsigned char                                      Meal_Grasp_Motion[0x28];                                   // 0x0148(0x0028) UNKNOWN PROPERTY: SoftObjectProperty AT.ATDataAssetCookingDemoCharacterResourceInfo.Meal_Grasp_Motion
	unsigned char                                      After_Grade1_Motion[0x28];                                 // 0x0170(0x0028) UNKNOWN PROPERTY: SoftObjectProperty AT.ATDataAssetCookingDemoCharacterResourceInfo.After_Grade1_Motion
	unsigned char                                      After_Grade2_Motion[0x28];                                 // 0x0198(0x0028) UNKNOWN PROPERTY: SoftObjectProperty AT.ATDataAssetCookingDemoCharacterResourceInfo.After_Grade2_Motion
	unsigned char                                      After_Grade3_Motion[0x28];                                 // 0x01C0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty AT.ATDataAssetCookingDemoCharacterResourceInfo.After_Grade3_Motion
	unsigned char                                      After_Grade1_LP_Motion[0x28];                              // 0x01E8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty AT.ATDataAssetCookingDemoCharacterResourceInfo.After_Grade1_LP_Motion
	unsigned char                                      After_Grade2_LP_Motion[0x28];                              // 0x0210(0x0028) UNKNOWN PROPERTY: SoftObjectProperty AT.ATDataAssetCookingDemoCharacterResourceInfo.After_Grade2_LP_Motion
	unsigned char                                      After_Grade3_LP_Motion[0x28];                              // 0x0238(0x0028) UNKNOWN PROPERTY: SoftObjectProperty AT.ATDataAssetCookingDemoCharacterResourceInfo.After_Grade3_LP_Motion
	unsigned char                                      Result_St_Motion[0x28];                                    // 0x0260(0x0028) UNKNOWN PROPERTY: SoftObjectProperty AT.ATDataAssetCookingDemoCharacterResourceInfo.Result_St_Motion
	unsigned char                                      Result_Lp_Motion[0x28];                                    // 0x0288(0x0028) UNKNOWN PROPERTY: SoftObjectProperty AT.ATDataAssetCookingDemoCharacterResourceInfo.Result_Lp_Motion
	unsigned char                                      StartAttachmentMesh[0x28];                                 // 0x02B0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty AT.ATDataAssetCookingDemoCharacterResourceInfo.StartAttachmentMesh

};

// ScriptStruct AT.ATLoadingCookingDemoCharacterResourceAsset
// 0x02D8
struct FATLoadingCookingDemoCharacterResourceAsset
{
	struct FName                                       MasterId;                                                  // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      Reaction_Grade1_Motion[0x28];                              // 0x0008(0x0028) UNKNOWN PROPERTY: SoftObjectProperty AT.ATLoadingCookingDemoCharacterResourceAsset.Reaction_Grade1_Motion
	unsigned char                                      Reaction_Grade2_Motion[0x28];                              // 0x0030(0x0028) UNKNOWN PROPERTY: SoftObjectProperty AT.ATLoadingCookingDemoCharacterResourceAsset.Reaction_Grade2_Motion
	unsigned char                                      Reaction_Grade3_Motion[0x28];                              // 0x0058(0x0028) UNKNOWN PROPERTY: SoftObjectProperty AT.ATLoadingCookingDemoCharacterResourceAsset.Reaction_Grade3_Motion
	unsigned char                                      Meal_Seize_Motion[0x28];                                   // 0x0080(0x0028) UNKNOWN PROPERTY: SoftObjectProperty AT.ATLoadingCookingDemoCharacterResourceAsset.Meal_Seize_Motion
	unsigned char                                      Meal_Stick1_Motion[0x28];                                  // 0x00A8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty AT.ATLoadingCookingDemoCharacterResourceAsset.Meal_Stick1_Motion
	unsigned char                                      Meal_Stick2_Motion[0x28];                                  // 0x00D0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty AT.ATLoadingCookingDemoCharacterResourceAsset.Meal_Stick2_Motion
	unsigned char                                      Meal_Stick3_Motion[0x28];                                  // 0x00F8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty AT.ATLoadingCookingDemoCharacterResourceAsset.Meal_Stick3_Motion
	unsigned char                                      Meal_Stick4_Motion[0x28];                                  // 0x0120(0x0028) UNKNOWN PROPERTY: SoftObjectProperty AT.ATLoadingCookingDemoCharacterResourceAsset.Meal_Stick4_Motion
	unsigned char                                      Meal_Grasp_Motion[0x28];                                   // 0x0148(0x0028) UNKNOWN PROPERTY: SoftObjectProperty AT.ATLoadingCookingDemoCharacterResourceAsset.Meal_Grasp_Motion
	unsigned char                                      After_Grade1_Motion[0x28];                                 // 0x0170(0x0028) UNKNOWN PROPERTY: SoftObjectProperty AT.ATLoadingCookingDemoCharacterResourceAsset.After_Grade1_Motion
	unsigned char                                      After_Grade2_Motion[0x28];                                 // 0x0198(0x0028) UNKNOWN PROPERTY: SoftObjectProperty AT.ATLoadingCookingDemoCharacterResourceAsset.After_Grade2_Motion
	unsigned char                                      After_Grade3_Motion[0x28];                                 // 0x01C0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty AT.ATLoadingCookingDemoCharacterResourceAsset.After_Grade3_Motion
	unsigned char                                      After_Grade1_LP_Motion[0x28];                              // 0x01E8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty AT.ATLoadingCookingDemoCharacterResourceAsset.After_Grade1_LP_Motion
	unsigned char                                      After_Grade2_LP_Motion[0x28];                              // 0x0210(0x0028) UNKNOWN PROPERTY: SoftObjectProperty AT.ATLoadingCookingDemoCharacterResourceAsset.After_Grade2_LP_Motion
	unsigned char                                      After_Grade3_LP_Motion[0x28];                              // 0x0238(0x0028) UNKNOWN PROPERTY: SoftObjectProperty AT.ATLoadingCookingDemoCharacterResourceAsset.After_Grade3_LP_Motion
	unsigned char                                      Result_St_Motion[0x28];                                    // 0x0260(0x0028) UNKNOWN PROPERTY: SoftObjectProperty AT.ATLoadingCookingDemoCharacterResourceAsset.Result_St_Motion
	unsigned char                                      Result_Lp_Motion[0x28];                                    // 0x0288(0x0028) UNKNOWN PROPERTY: SoftObjectProperty AT.ATLoadingCookingDemoCharacterResourceAsset.Result_Lp_Motion
	unsigned char                                      StartAttachmentMesh[0x28];                                 // 0x02B0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty AT.ATLoadingCookingDemoCharacterResourceAsset.StartAttachmentMesh

};

// ScriptStruct AT.ATReferenceToCookingDemoCharacterResourceAssetInstance
// 0x0098
struct FATReferenceToCookingDemoCharacterResourceAssetInstance
{
	struct FName                                       MasterId;                                                  // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                Reaction_Grade1_Motion;                                    // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                Reaction_Grade2_Motion;                                    // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                Reaction_Grade3_Motion;                                    // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                Meal_Seize_Motion;                                         // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                Meal_Stick1_Motion;                                        // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                Meal_Stick2_Motion;                                        // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                Meal_Stick3_Motion;                                        // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                Meal_Stick4_Motion;                                        // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                Meal_Grasp_Motion;                                         // 0x0048(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                After_Grade1_Motion;                                       // 0x0050(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                After_Grade2_Motion;                                       // 0x0058(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                After_Grade3_Motion;                                       // 0x0060(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                After_Grade1_LP_Motion;                                    // 0x0068(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                After_Grade2_LP_Motion;                                    // 0x0070(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                After_Grade3_LP_Motion;                                    // 0x0078(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                Result_St_Motion;                                          // 0x0080(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                Result_Lp_Motion;                                          // 0x0088(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkeletalMesh*                               StartAttachmentMesh;                                       // 0x0090(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct AT.ATDataAssetCrossTalkInfo
// 0x0008
struct FATDataAssetCrossTalkInfo
{
	struct FName                                       MasterId;                                                  // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct AT.LoadingCrossTalkAsset
// 0x0038
struct FLoadingCrossTalkAsset
{
	unsigned char                                      ConditionDataTable[0x28];                                  // 0x0000(0x0028) UNKNOWN PROPERTY: SoftObjectProperty AT.LoadingCrossTalkAsset.ConditionDataTable
	unsigned char                                      EventDataTableArray[0x10];                                 // 0x0028(0x0010) UNKNOWN PROPERTY: ArrayProperty AT.LoadingCrossTalkAsset.EventDataTableArray

};

// ScriptStruct AT.ReferenceToCrossTalkAssetInstance
// 0x0018
struct FReferenceToCrossTalkAssetInstance
{
	class UDataTable*                                  ConditionDataTable;                                        // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UDataTable*>                          EventDataTableArray;                                       // 0x0008(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)

};

// ScriptStruct AT.ATDataAssetDamageTypeInfo
// 0x0030
struct FATDataAssetDamageTypeInfo
{
	struct FName                                       MasterId;                                                  // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      DamageTypeClass[0x28];                                     // 0x0008(0x0028) UNKNOWN PROPERTY: SoftClassProperty AT.ATDataAssetDamageTypeInfo.DamageTypeClass

};

// ScriptStruct AT.LoadingDamageTypeAsset
// 0x0028
struct FLoadingDamageTypeAsset
{
	unsigned char                                      DamageType[0x28];                                          // 0x0000(0x0028) UNKNOWN PROPERTY: SoftClassProperty AT.LoadingDamageTypeAsset.DamageType

};

// ScriptStruct AT.ReferenceToDamageTypeAssetInstance
// 0x0008
struct FReferenceToDamageTypeAssetInstance
{
	class UClass*                                      DamageType;                                                // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct AT.ATDataAssetEventBattleInfo
// 0x0030
struct FATDataAssetEventBattleInfo
{
	struct FName                                       MasterId;                                                  // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      EventBattleClass[0x28];                                    // 0x0008(0x0028) UNKNOWN PROPERTY: SoftClassProperty AT.ATDataAssetEventBattleInfo.EventBattleClass

};

// ScriptStruct AT.ATDataAssetEventBattlePostProcessEffectInfo
// 0x0078
struct FATDataAssetEventBattlePostProcessEffectInfo
{
	unsigned char                                      ATPostProcessEffectCmnHologram_NoiseEffect[0x28];          // 0x0000(0x0028) UNKNOWN PROPERTY: SoftObjectProperty AT.ATDataAssetEventBattlePostProcessEffectInfo.ATPostProcessEffectCmnHologram_NoiseEffect
	unsigned char                                      ATPostProcessEffectCmnHologram_Material[0x28];             // 0x0028(0x0028) UNKNOWN PROPERTY: SoftObjectProperty AT.ATDataAssetEventBattlePostProcessEffectInfo.ATPostProcessEffectCmnHologram_Material
	unsigned char                                      ATPostEffectCmnSkillAquisition_Material[0x28];             // 0x0050(0x0028) UNKNOWN PROPERTY: SoftObjectProperty AT.ATDataAssetEventBattlePostProcessEffectInfo.ATPostEffectCmnSkillAquisition_Material

};

// ScriptStruct AT.LoadingEventBattleAsset
// 0x0028
struct FLoadingEventBattleAsset
{
	unsigned char                                      EventBattle[0x28];                                         // 0x0000(0x0028) UNKNOWN PROPERTY: SoftClassProperty AT.LoadingEventBattleAsset.EventBattle

};

// ScriptStruct AT.LoadingEventBattlePostProcessEffectAsset
// 0x0078
struct FLoadingEventBattlePostProcessEffectAsset
{
	unsigned char                                      ATPostProcessEffectCmnHologram_NoiseEffect[0x28];          // 0x0000(0x0028) UNKNOWN PROPERTY: SoftObjectProperty AT.LoadingEventBattlePostProcessEffectAsset.ATPostProcessEffectCmnHologram_NoiseEffect
	unsigned char                                      ATPostProcessEffectCmnHologram_Material[0x28];             // 0x0028(0x0028) UNKNOWN PROPERTY: SoftObjectProperty AT.LoadingEventBattlePostProcessEffectAsset.ATPostProcessEffectCmnHologram_Material
	unsigned char                                      ATPostEffectCmnSkillAquisition_Material[0x28];             // 0x0050(0x0028) UNKNOWN PROPERTY: SoftObjectProperty AT.LoadingEventBattlePostProcessEffectAsset.ATPostEffectCmnSkillAquisition_Material

};

// ScriptStruct AT.ReferenceToEventBattleAssetInstance
// 0x0008
struct FReferenceToEventBattleAssetInstance
{
	class UClass*                                      EventBattle;                                               // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct AT.ReferenceToEventBattlePostProcessEffectAssetInstance
// 0x0018
struct FReferenceToEventBattlePostProcessEffectAssetInstance
{
	class UParticleSystem*                             ATPostProcessEffectCmnHologram_NoiseEffect;                // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterial*                                   ATPostProcessEffectCmnHologram_Material;                   // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterial*                                   ATPostEffectCmnSkillAquisition_Material;                   // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct AT.ATDataAssetFacialInfo
// 0x0030
struct FATDataAssetFacialInfo
{
	struct FName                                       MasterId;                                                  // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      PartsClass[0x28];                                          // 0x0008(0x0028) UNKNOWN PROPERTY: SoftClassProperty AT.ATDataAssetFacialInfo.PartsClass

};

// ScriptStruct AT.ATLoadingFacialAsset
// 0x0030
struct FATLoadingFacialAsset
{
	struct FName                                       MasterId;                                                  // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      Parts[0x28];                                               // 0x0008(0x0028) UNKNOWN PROPERTY: SoftClassProperty AT.ATLoadingFacialAsset.Parts

};

// ScriptStruct AT.ATReferenceToFacialAssetInstance
// 0x0010
struct FATReferenceToFacialAssetInstance
{
	struct FName                                       MasterId;                                                  // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      Parts;                                                     // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct AT.ATWorldMapMovementData
// 0x0060
struct FATWorldMapMovementData
{
	float                                              MoveTimeLimit;                                             // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_A91S[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       CloudDataMasterId;                                         // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FadeTimeLimit;                                             // 0x0010(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CloudDistance;                                             // 0x0014(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CloudEmmisiveMin;                                          // 0x0018(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CloudEmmisiveMax;                                          // 0x001C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CloudEmmisiveTimeLimit;                                    // 0x0020(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              UiFadeOutTimeLimit;                                        // 0x0024(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    BoostFlyingRotation;                                       // 0x0028(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FRotator                                    LookAtRelativeRotation;                                    // 0x0034(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FRotator                                    CameraRelativeRotation;                                    // 0x0040(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                              LookAtLength;                                              // 0x004C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CameraLength;                                              // 0x0050(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CameraInterpolationDuration;                               // 0x0054(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FirstCutDuration;                                          // 0x0058(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Altitude;                                                  // 0x005C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct AT.ATDataAssetFishGameMeshInfo
// 0x0058
struct FATDataAssetFishGameMeshInfo
{
	struct FName                                       MasterId;                                                  // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      FishMesh[0x28];                                            // 0x0008(0x0028) UNKNOWN PROPERTY: SoftObjectProperty AT.ATDataAssetFishGameMeshInfo.FishMesh
	unsigned char                                      AnimationBP[0x28];                                         // 0x0030(0x0028) UNKNOWN PROPERTY: SoftClassProperty AT.ATDataAssetFishGameMeshInfo.AnimationBP

};

// ScriptStruct AT.ATDataAssetFishGameAnimationInfo
// 0x00F8
struct FATDataAssetFishGameAnimationInfo
{
	struct FName                                       MasterId;                                                  // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      MissMontage[0x28];                                         // 0x0008(0x0028) UNKNOWN PROPERTY: SoftObjectProperty AT.ATDataAssetFishGameAnimationInfo.MissMontage
	unsigned char                                      PullMontage[0x28];                                         // 0x0030(0x0028) UNKNOWN PROPERTY: SoftObjectProperty AT.ATDataAssetFishGameAnimationInfo.PullMontage
	unsigned char                                      SuccessMontage[0x28];                                      // 0x0058(0x0028) UNKNOWN PROPERTY: SoftObjectProperty AT.ATDataAssetFishGameAnimationInfo.SuccessMontage
	unsigned char                                      ResultStartMontage[0x28];                                  // 0x0080(0x0028) UNKNOWN PROPERTY: SoftObjectProperty AT.ATDataAssetFishGameAnimationInfo.ResultStartMontage
	unsigned char                                      ResultLoopMontage[0x28];                                   // 0x00A8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty AT.ATDataAssetFishGameAnimationInfo.ResultLoopMontage
	unsigned char                                      RarePullMontage[0x28];                                     // 0x00D0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty AT.ATDataAssetFishGameAnimationInfo.RarePullMontage

};

// ScriptStruct AT.ATDataAssetFishCurveParamInfo
// 0x0078
struct FATDataAssetFishCurveParamInfo
{
	unsigned char                                      SwimSpeedCurve[0x28];                                      // 0x0000(0x0028) UNKNOWN PROPERTY: SoftObjectProperty AT.ATDataAssetFishCurveParamInfo.SwimSpeedCurve
	unsigned char                                      TurnSpeedCurve[0x28];                                      // 0x0028(0x0028) UNKNOWN PROPERTY: SoftObjectProperty AT.ATDataAssetFishCurveParamInfo.TurnSpeedCurve
	unsigned char                                      DiscoverSpeedCurve[0x28];                                  // 0x0050(0x0028) UNKNOWN PROPERTY: SoftObjectProperty AT.ATDataAssetFishCurveParamInfo.DiscoverSpeedCurve

};

// ScriptStruct AT.ATDataAssetFishParticleEffInfo
// 0x0140
struct FATDataAssetFishParticleEffInfo
{
	unsigned char                                      FishinRippleEffect[0x28];                                  // 0x0000(0x0028) UNKNOWN PROPERTY: SoftObjectProperty AT.ATDataAssetFishParticleEffInfo.FishinRippleEffect
	unsigned char                                      FishinBaitEffect_Normal[0x28];                             // 0x0028(0x0028) UNKNOWN PROPERTY: SoftObjectProperty AT.ATDataAssetFishParticleEffInfo.FishinBaitEffect_Normal
	unsigned char                                      FishinBaitEffect_Rare[0x28];                               // 0x0050(0x0028) UNKNOWN PROPERTY: SoftObjectProperty AT.ATDataAssetFishParticleEffInfo.FishinBaitEffect_Rare
	unsigned char                                      FishinBaitEffect_SuperRare[0x28];                          // 0x0078(0x0028) UNKNOWN PROPERTY: SoftObjectProperty AT.ATDataAssetFishParticleEffInfo.FishinBaitEffect_SuperRare
	unsigned char                                      FishingHitEffect[0x28];                                    // 0x00A0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty AT.ATDataAssetFishParticleEffInfo.FishingHitEffect
	unsigned char                                      FishingHitLoopEffect[0x28];                                // 0x00C8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty AT.ATDataAssetFishParticleEffInfo.FishingHitLoopEffect
	unsigned char                                      FishingStartPointEffect[0x28];                             // 0x00F0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty AT.ATDataAssetFishParticleEffInfo.FishingStartPointEffect
	unsigned char                                      FishEscapeEffectComponent[0x28];                           // 0x0118(0x0028) UNKNOWN PROPERTY: SoftObjectProperty AT.ATDataAssetFishParticleEffInfo.FishEscapeEffectComponent

};

// ScriptStruct AT.ATDataAssetFishGameCharaAnimationInfo
// 0x0328
struct FATDataAssetFishGameCharaAnimationInfo
{
	struct FName                                       MasterId;                                                  // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      FishingStart[0x28];                                        // 0x0008(0x0028) UNKNOWN PROPERTY: SoftObjectProperty AT.ATDataAssetFishGameCharaAnimationInfo.FishingStart
	unsigned char                                      FishingStart_Rod[0x28];                                    // 0x0030(0x0028) UNKNOWN PROPERTY: SoftObjectProperty AT.ATDataAssetFishGameCharaAnimationInfo.FishingStart_Rod
	unsigned char                                      FishingAction[0x28];                                       // 0x0058(0x0028) UNKNOWN PROPERTY: SoftObjectProperty AT.ATDataAssetFishGameCharaAnimationInfo.FishingAction
	unsigned char                                      FishingAction_Rod[0x28];                                   // 0x0080(0x0028) UNKNOWN PROPERTY: SoftObjectProperty AT.ATDataAssetFishGameCharaAnimationInfo.FishingAction_Rod
	unsigned char                                      FishingQTE1[0x28];                                         // 0x00A8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty AT.ATDataAssetFishGameCharaAnimationInfo.FishingQTE1
	unsigned char                                      FishingQTE1_Rod[0x28];                                     // 0x00D0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty AT.ATDataAssetFishGameCharaAnimationInfo.FishingQTE1_Rod
	unsigned char                                      FishingQTE2[0x28];                                         // 0x00F8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty AT.ATDataAssetFishGameCharaAnimationInfo.FishingQTE2
	unsigned char                                      FishingQTE2_Rod[0x28];                                     // 0x0120(0x0028) UNKNOWN PROPERTY: SoftObjectProperty AT.ATDataAssetFishGameCharaAnimationInfo.FishingQTE2_Rod
	unsigned char                                      FishingMiss[0x28];                                         // 0x0148(0x0028) UNKNOWN PROPERTY: SoftObjectProperty AT.ATDataAssetFishGameCharaAnimationInfo.FishingMiss
	unsigned char                                      FishingMiss_Rod[0x28];                                     // 0x0170(0x0028) UNKNOWN PROPERTY: SoftObjectProperty AT.ATDataAssetFishGameCharaAnimationInfo.FishingMiss_Rod
	unsigned char                                      FishingLoop[0x28];                                         // 0x0198(0x0028) UNKNOWN PROPERTY: SoftObjectProperty AT.ATDataAssetFishGameCharaAnimationInfo.FishingLoop
	unsigned char                                      FishingLoop_Rod[0x28];                                     // 0x01C0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty AT.ATDataAssetFishGameCharaAnimationInfo.FishingLoop_Rod
	unsigned char                                      FishingResultStart[0x28];                                  // 0x01E8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty AT.ATDataAssetFishGameCharaAnimationInfo.FishingResultStart
	unsigned char                                      FishingResultLoop[0x28];                                   // 0x0210(0x0028) UNKNOWN PROPERTY: SoftObjectProperty AT.ATDataAssetFishGameCharaAnimationInfo.FishingResultLoop
	unsigned char                                      FishingBait[0x28];                                         // 0x0238(0x0028) UNKNOWN PROPERTY: SoftObjectProperty AT.ATDataAssetFishGameCharaAnimationInfo.FishingBait
	unsigned char                                      FishingFaceSweat[0x28];                                    // 0x0260(0x0028) UNKNOWN PROPERTY: SoftObjectProperty AT.ATDataAssetFishGameCharaAnimationInfo.FishingFaceSweat
	unsigned char                                      FishingHit[0x28];                                          // 0x0288(0x0028) UNKNOWN PROPERTY: SoftObjectProperty AT.ATDataAssetFishGameCharaAnimationInfo.FishingHit
	unsigned char                                      FishingHit_Rod[0x28];                                      // 0x02B0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty AT.ATDataAssetFishGameCharaAnimationInfo.FishingHit_Rod
	unsigned char                                      FishingStart2[0x28];                                       // 0x02D8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty AT.ATDataAssetFishGameCharaAnimationInfo.FishingStart2
	unsigned char                                      FishingStart2_Rod[0x28];                                   // 0x0300(0x0028) UNKNOWN PROPERTY: SoftObjectProperty AT.ATDataAssetFishGameCharaAnimationInfo.FishingStart2_Rod

};

// ScriptStruct AT.LoadingFishGameMeshAsset
// 0x0050
struct FLoadingFishGameMeshAsset
{
	unsigned char                                      UnknownData_1FCE[0x50];                                    // 0x0000(0x0050) MISSED OFFSET (PADDING)

};

// ScriptStruct AT.LoadingFishGameAnimationAsset
// 0x00F0
struct FLoadingFishGameAnimationAsset
{
	unsigned char                                      UnknownData_R61V[0xF0];                                    // 0x0000(0x00F0) MISSED OFFSET (PADDING)

};

// ScriptStruct AT.LoadingFishCurveParamAsset
// 0x0078
struct FLoadingFishCurveParamAsset
{
	unsigned char                                      UnknownData_RAQS[0x78];                                    // 0x0000(0x0078) MISSED OFFSET (PADDING)

};

// ScriptStruct AT.LoadingFishParticleEffAsset
// 0x0140
struct FLoadingFishParticleEffAsset
{
	unsigned char                                      UnknownData_TNEM[0x140];                                   // 0x0000(0x0140) MISSED OFFSET (PADDING)

};

// ScriptStruct AT.LoadingFishGameCharaAnimationAsset
// 0x0320
struct FLoadingFishGameCharaAnimationAsset
{
	unsigned char                                      UnknownData_UV37[0x320];                                   // 0x0000(0x0320) MISSED OFFSET (PADDING)

};

// ScriptStruct AT.ReferenceToFishGameMeshAssetInstance
// 0x0010
struct FReferenceToFishGameMeshAssetInstance
{
	class USkeletalMesh*                               FishMesh;                                                  // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      AnimationBP;                                               // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct AT.ReferenceToFishGameAnimationAssetInstance
// 0x0030
struct FReferenceToFishGameAnimationAssetInstance
{
	class UAnimMontage*                                MissMontage;                                               // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                PullMontage;                                               // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                SuccessMontage;                                            // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                ResultStartMontage;                                        // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                ResultLoopMontage;                                         // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                RarePullMontage;                                           // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct AT.ReferenceToFishCurveParamAssetInstance
// 0x0018
struct FReferenceToFishCurveParamAssetInstance
{
	class UCurveFloat*                                 SwimSpeedCurve;                                            // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveFloat*                                 TurnSpeedCurve;                                            // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveFloat*                                 DiscoverSpeedCurve;                                        // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct AT.ReferenceToFishParticleEffAssetInstance
// 0x0040
struct FReferenceToFishParticleEffAssetInstance
{
	class UParticleSystem*                             FishinRippleEffect;                                        // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleSystem*                             FishinBaitEffect_Normal;                                   // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleSystem*                             FishinBaitEffect_Rare;                                     // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleSystem*                             FishinBaitEffect_SuperRare;                                // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleSystem*                             FishingHitEffect;                                          // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleSystem*                             FishingHitLoopEffect;                                      // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleSystem*                             FishingStartPointEffect;                                   // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleSystem*                             FishEscapeEffectComponent;                                 // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct AT.ReferenceToFishGameCharaAnimationAssetInstance
// 0x00A0
struct FReferenceToFishGameCharaAnimationAssetInstance
{
	class UAnimMontage*                                FishingStart;                                              // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                FishingStart_Rod;                                          // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                FishingAction;                                             // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                FishingAction_Rod;                                         // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                FishingQTE1;                                               // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                FishingQTE1_Rod;                                           // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                FishingQTE2;                                               // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                FishingQTE2_Rod;                                           // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                FishingMiss;                                               // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                FishingMiss_Rod;                                           // 0x0048(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                FishingLoop;                                               // 0x0050(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                FishingLoop_Rod;                                           // 0x0058(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                FishingResultStart;                                        // 0x0060(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                FishingResultLoop;                                         // 0x0068(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                FishingBait;                                               // 0x0070(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                FishingFaceSweat;                                          // 0x0078(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                FishingHit;                                                // 0x0080(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                FishingHit_Rod;                                            // 0x0088(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                FishingStart2;                                             // 0x0090(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                FishingStart2_Rod;                                         // 0x0098(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct AT.ATDataAssetItemInfo
// 0x0008
struct FATDataAssetItemInfo
{
	struct FName                                       MasterId;                                                  // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct AT.LoadingItemAsset
// 0x0001
struct FLoadingItemAsset
{
	unsigned char                                      UnknownData_S9K3[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct AT.ReferenceToItemAssetInstance
// 0x0001
struct FReferenceToItemAssetInstance
{
	unsigned char                                      UnknownData_99KO[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct AT.ATDataAssetJostleBeamInfo
// 0x0030
struct FATDataAssetJostleBeamInfo
{
	struct FName                                       MasterId;                                                  // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      ATJostleBeamParam[0x28];                                   // 0x0008(0x0028) UNKNOWN PROPERTY: SoftClassProperty AT.ATDataAssetJostleBeamInfo.ATJostleBeamParam

};

// ScriptStruct AT.LoadingJostleBeamAsset
// 0x0028
struct FLoadingJostleBeamAsset
{
	unsigned char                                      ATJostleBeamParam[0x28];                                   // 0x0000(0x0028) UNKNOWN PROPERTY: SoftClassProperty AT.LoadingJostleBeamAsset.ATJostleBeamParam

};

// ScriptStruct AT.ReferenceToJostleBeamAssetInstance
// 0x0008
struct FReferenceToJostleBeamAssetInstance
{
	class UClass*                                      ATJostleBeamParam;                                         // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct AT.ATDataAssetMechaDevInfo
// 0x0030
struct FATDataAssetMechaDevInfo
{
	struct FName                                       MasterId;                                                  // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      AssetType[0x28];                                           // 0x0008(0x0028) UNKNOWN PROPERTY: SoftObjectProperty AT.ATDataAssetMechaDevInfo.AssetType

};

// ScriptStruct AT.LoadingMechaDevAsset
// 0x0028
struct FLoadingMechaDevAsset
{
	unsigned char                                      Object[0x28];                                              // 0x0000(0x0028) UNKNOWN PROPERTY: SoftObjectProperty AT.LoadingMechaDevAsset.Object

};

// ScriptStruct AT.ReferenceToMechaDevAssetInstance
// 0x0008
struct FReferenceToMechaDevAssetInstance
{
	class UObject*                                     Object;                                                    // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct AT.ATDataAssetMiniGameInfo
// 0x0030
struct FATDataAssetMiniGameInfo
{
	struct FName                                       MasterId;                                                  // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UserWidgetClass[0x28];                                     // 0x0008(0x0028) UNKNOWN PROPERTY: SoftClassProperty AT.ATDataAssetMiniGameInfo.UserWidgetClass

};

// ScriptStruct AT.LoadingMiniGameAsset
// 0x0028
struct FLoadingMiniGameAsset
{
	unsigned char                                      UserWidgetClass[0x28];                                     // 0x0000(0x0028) UNKNOWN PROPERTY: SoftClassProperty AT.LoadingMiniGameAsset.UserWidgetClass

};

// ScriptStruct AT.ReferenceToMiniGameAssetInstance
// 0x0008
struct FReferenceToMiniGameAssetInstance
{
	class UClass*                                      UserWidgetClass;                                           // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct AT.ATDataAssetMiniGameMobAnimationInfo
// 0x0030
struct FATDataAssetMiniGameMobAnimationInfo
{
	AT_ENpcMobType                                     MobTypeId;                                                 // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ASAQ[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      AnimationBP[0x28];                                         // 0x0001(0x0028) UNKNOWN PROPERTY: SoftClassProperty AT.ATDataAssetMiniGameMobAnimationInfo.AnimationBP

};

// ScriptStruct AT.LoadingMiniGameMobAnimBP
// 0x0028
struct FLoadingMiniGameMobAnimBP
{
	unsigned char                                      AnimBP[0x28];                                              // 0x0000(0x0028) UNKNOWN PROPERTY: SoftClassProperty AT.LoadingMiniGameMobAnimBP.AnimBP

};

// ScriptStruct AT.LoadingMiniGameMobMesh
// 0x0028
struct FLoadingMiniGameMobMesh
{
	unsigned char                                      Mesh[0x28];                                                // 0x0000(0x0028) UNKNOWN PROPERTY: SoftObjectProperty AT.LoadingMiniGameMobMesh.Mesh

};

// ScriptStruct AT.ReferenceToMiniGameMobAnimBPInstance
// 0x0008
struct FReferenceToMiniGameMobAnimBPInstance
{
	class UClass*                                      AnimBP;                                                    // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct AT.ReferenceToMiniGameMobMeshInstance
// 0x0008
struct FReferenceToMiniGameMobMeshInstance
{
	class USkeletalMesh*                               Mesh;                                                      // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct AT.ATDataAssetNpcMobAnimationInfo
// 0x0030
struct FATDataAssetNpcMobAnimationInfo
{
	AT_ENpcMobType                                     MobTypeId;                                                 // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_BWMI[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      AnimationBP[0x28];                                         // 0x0001(0x0028) UNKNOWN PROPERTY: SoftClassProperty AT.ATDataAssetNpcMobAnimationInfo.AnimationBP

};

// ScriptStruct AT.LoadingNpcAnimBP
// 0x0028
struct FLoadingNpcAnimBP
{
	unsigned char                                      AnimBP[0x28];                                              // 0x0000(0x0028) UNKNOWN PROPERTY: SoftClassProperty AT.LoadingNpcAnimBP.AnimBP

};

// ScriptStruct AT.LoadingNpcMesh
// 0x0028
struct FLoadingNpcMesh
{
	unsigned char                                      Mesh[0x28];                                                // 0x0000(0x0028) UNKNOWN PROPERTY: SoftObjectProperty AT.LoadingNpcMesh.Mesh

};

// ScriptStruct AT.ReferenceToNpcAnimBPInstance
// 0x0008
struct FReferenceToNpcAnimBPInstance
{
	class UClass*                                      AnimBP;                                                    // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct AT.ReferenceToNpcMeshInstance
// 0x0008
struct FReferenceToNpcMeshInstance
{
	class USkeletalMesh*                               Mesh;                                                      // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct AT.ATDataAssetParticleInfo
// 0x0030
struct FATDataAssetParticleInfo
{
	struct FName                                       MasterId;                                                  // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      ParticleClass[0x28];                                       // 0x0008(0x0028) UNKNOWN PROPERTY: SoftObjectProperty AT.ATDataAssetParticleInfo.ParticleClass

};

// ScriptStruct AT.LoadingParticleAsset
// 0x0028
struct FLoadingParticleAsset
{
	unsigned char                                      ParticleSystem[0x28];                                      // 0x0000(0x0028) UNKNOWN PROPERTY: SoftObjectProperty AT.LoadingParticleAsset.ParticleSystem

};

// ScriptStruct AT.ReferenceToParticleAssetInstance
// 0x0008
struct FReferenceToParticleAssetInstance
{
	class UParticleSystem*                             ParticleSystem;                                            // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct AT.LoadingQuestAsset
// 0x0028
struct FLoadingQuestAsset
{
	unsigned char                                      DataTable[0x28];                                           // 0x0000(0x0028) UNKNOWN PROPERTY: SoftObjectProperty AT.LoadingQuestAsset.DataTable

};

// ScriptStruct AT.ReferenceToQuestAssetInstance
// 0x0008
struct FReferenceToQuestAssetInstance
{
	class UDataTable*                                  DataTable;                                                 // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct AT.ATDataAssetRaceGameInfo
// 0x0030
struct FATDataAssetRaceGameInfo
{
	struct FName                                       MasterId;                                                  // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      Result_Montage[0x28];                                      // 0x0008(0x0028) UNKNOWN PROPERTY: SoftObjectProperty AT.ATDataAssetRaceGameInfo.Result_Montage

};

// ScriptStruct AT.ATDataAssetRaceGameCommonInfo
// 0x0028
struct FATDataAssetRaceGameCommonInfo
{
	unsigned char                                      RaceGameDataTable[0x28];                                   // 0x0000(0x0028) UNKNOWN PROPERTY: SoftObjectProperty AT.ATDataAssetRaceGameCommonInfo.RaceGameDataTable

};

// ScriptStruct AT.ATDataAssetRaceGameAssistantInfo
// 0x0028
struct FATDataAssetRaceGameAssistantInfo
{
	unsigned char                                      AssistantMobActor[0x28];                                   // 0x0000(0x0028) UNKNOWN PROPERTY: SoftClassProperty AT.ATDataAssetRaceGameAssistantInfo.AssistantMobActor

};

// ScriptStruct AT.LoadingRaceGameAsset
// 0x0028
struct FLoadingRaceGameAsset
{
	unsigned char                                      UnknownData_8ATI[0x28];                                    // 0x0000(0x0028) MISSED OFFSET (PADDING)

};

// ScriptStruct AT.LoadingRaceGameCommonAsset
// 0x0028
struct FLoadingRaceGameCommonAsset
{
	unsigned char                                      UnknownData_76RH[0x28];                                    // 0x0000(0x0028) MISSED OFFSET (PADDING)

};

// ScriptStruct AT.LoadingRaceGameAssistantAsset
// 0x0028
struct FLoadingRaceGameAssistantAsset
{
	unsigned char                                      UnknownData_Z1I5[0x28];                                    // 0x0000(0x0028) MISSED OFFSET (PADDING)

};

// ScriptStruct AT.ReferenceToRaceGameAssetInstance
// 0x0008
struct FReferenceToRaceGameAssetInstance
{
	class UAnimMontage*                                Result_Montage;                                            // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct AT.ReferenceToRaceGameCommonAssetInstance
// 0x0008
struct FReferenceToRaceGameCommonAssetInstance
{
	class UDataTable*                                  RaceGameDataTable;                                         // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct AT.ReferenceToRaceGameAssistantAssetInstance
// 0x0008
struct FReferenceToRaceGameAssistantAssetInstance
{
	class UClass*                                      AssistantMobActor;                                         // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct AT.ATDataAssetSoundInfo
// 0x0058
struct FATDataAssetSoundInfo
{
	struct FName                                       MasterId;                                                  // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      SheetClass_ja[0x28];                                       // 0x0008(0x0028) UNKNOWN PROPERTY: SoftObjectProperty AT.ATDataAssetSoundInfo.SheetClass_ja
	unsigned char                                      SheetClass_en[0x28];                                       // 0x0030(0x0028) UNKNOWN PROPERTY: SoftObjectProperty AT.ATDataAssetSoundInfo.SheetClass_en

};

// ScriptStruct AT.LoadingSoundAsset
// 0x0028
struct FLoadingSoundAsset
{
	unsigned char                                      SheetClass[0x28];                                          // 0x0000(0x0028) UNKNOWN PROPERTY: SoftObjectProperty AT.LoadingSoundAsset.SheetClass

};

// ScriptStruct AT.ReferenceToSoundAssetInstance
// 0x0008
struct FReferenceToSoundAssetInstance
{
	class USoundAtomCueSheet*                          Sheet;                                                     // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct AT.ATDataAssetStarScaleFinishInfo
// 0x0030
struct FATDataAssetStarScaleFinishInfo
{
	struct FName                                       MasterId;                                                  // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      Sequencer[0x28];                                           // 0x0008(0x0028) UNKNOWN PROPERTY: SoftClassProperty AT.ATDataAssetStarScaleFinishInfo.Sequencer

};

// ScriptStruct AT.LoadingStarScaleFinishAsset
// 0x0028
struct FLoadingStarScaleFinishAsset
{
	unsigned char                                      Sequencer[0x28];                                           // 0x0000(0x0028) UNKNOWN PROPERTY: SoftClassProperty AT.LoadingStarScaleFinishAsset.Sequencer

};

// ScriptStruct AT.ReferenceToStarScaleFinishAssetInstance
// 0x0008
struct FReferenceToStarScaleFinishAssetInstance
{
	class UClass*                                      Sequencer;                                                 // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct AT.ATDataAssetSupportCharacterTalkInfo
// 0x0030
struct FATDataAssetSupportCharacterTalkInfo
{
	struct FName                                       MasterId;                                                  // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      TalkDataTable[0x28];                                       // 0x0008(0x0028) UNKNOWN PROPERTY: SoftObjectProperty AT.ATDataAssetSupportCharacterTalkInfo.TalkDataTable

};

// ScriptStruct AT.LoadingSupportCharacterTalkAsset
// 0x0028
struct FLoadingSupportCharacterTalkAsset
{
	unsigned char                                      TalkDataTable[0x28];                                       // 0x0000(0x0028) UNKNOWN PROPERTY: SoftObjectProperty AT.LoadingSupportCharacterTalkAsset.TalkDataTable

};

// ScriptStruct AT.ReferenceToSupportCharacterTalkAssetInstance
// 0x0008
struct FReferenceToSupportCharacterTalkAssetInstance
{
	class UDataTable*                                  TalkDataTable;                                             // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct AT.ATDataAssetTPSSkillViewCancelInfo
// 0x0030
struct FATDataAssetTPSSkillViewCancelInfo
{
	struct FName                                       MasterId;                                                  // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      TPSSkillViewCancelDataTable[0x28];                         // 0x0008(0x0028) UNKNOWN PROPERTY: SoftObjectProperty AT.ATDataAssetTPSSkillViewCancelInfo.TPSSkillViewCancelDataTable

};

// ScriptStruct AT.LoadingTPSSkillViewCancelAsset
// 0x0028
struct FLoadingTPSSkillViewCancelAsset
{
	unsigned char                                      TPSSkillViewCancelDataTable[0x28];                         // 0x0000(0x0028) UNKNOWN PROPERTY: SoftObjectProperty AT.LoadingTPSSkillViewCancelAsset.TPSSkillViewCancelDataTable

};

// ScriptStruct AT.ReferenceToTPSSkillViewCancelAssetInstance
// 0x0008
struct FReferenceToTPSSkillViewCancelAssetInstance
{
	class UDataTable*                                  TPSSkillViewCancelDataTable;                               // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct AT.ATDataAssetUiInfo
// 0x0030
struct FATDataAssetUiInfo
{
	struct FName                                       MasterId;                                                  // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UserWidgetClass[0x28];                                     // 0x0008(0x0028) UNKNOWN PROPERTY: SoftClassProperty AT.ATDataAssetUiInfo.UserWidgetClass

};

// ScriptStruct AT.ATDataTableUiInfo
// 0x0038
struct FATDataTableUiInfo
{
	struct FName                                       MasterId;                                                  // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      DataTableAsset[0x28];                                      // 0x0008(0x0028) UNKNOWN PROPERTY: SoftObjectProperty AT.ATDataTableUiInfo.DataTableAsset
	bool                                               IsAlwaysLoad;                                              // 0x0030(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_EY92[0x7];                                     // 0x0031(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct AT.LoadingAsset
// 0x0050
struct FLoadingAsset
{
	unsigned char                                      UserWidgetClass[0x28];                                     // 0x0000(0x0028) UNKNOWN PROPERTY: SoftClassProperty AT.LoadingAsset.UserWidgetClass
	unsigned char                                      DataTableAsset[0x28];                                      // 0x0028(0x0028) UNKNOWN PROPERTY: SoftObjectProperty AT.LoadingAsset.DataTableAsset

};

// ScriptStruct AT.ReferenceToAssetInstance
// 0x0010
struct FReferenceToAssetInstance
{
	class UClass*                                      UserWidgetClass;                                           // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDataTable*                                  DataTablePtr;                                              // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct AT.ATDataAssetUiCaptureInfo
// 0x0108
struct FATDataAssetUiCaptureInfo
{
	struct FName                                       MasterId;                                                  // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      StaticMesh[0x28];                                          // 0x0008(0x0028) UNKNOWN PROPERTY: SoftObjectProperty AT.ATDataAssetUiCaptureInfo.StaticMesh
	unsigned char                                      SkelMesh[0x28];                                            // 0x0030(0x0028) UNKNOWN PROPERTY: SoftObjectProperty AT.ATDataAssetUiCaptureInfo.SkelMesh
	unsigned char                                      AnimBP[0x28];                                              // 0x0058(0x0028) UNKNOWN PROPERTY: SoftObjectProperty AT.ATDataAssetUiCaptureInfo.AnimBP
	unsigned char                                      Animations[0x10];                                          // 0x0080(0x0010) UNKNOWN PROPERTY: ArrayProperty AT.ATDataAssetUiCaptureInfo.Animations
	unsigned char                                      Particle[0x28];                                            // 0x0090(0x0028) UNKNOWN PROPERTY: SoftObjectProperty AT.ATDataAssetUiCaptureInfo.Particle
	unsigned char                                      ActorClass[0x28];                                          // 0x00B8(0x0028) UNKNOWN PROPERTY: SoftClassProperty AT.ATDataAssetUiCaptureInfo.ActorClass
	unsigned char                                      Montage[0x28];                                             // 0x00E0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty AT.ATDataAssetUiCaptureInfo.Montage

};

// ScriptStruct AT.LoadingUiCaptureAsset
// 0x0100
struct FLoadingUiCaptureAsset
{
	unsigned char                                      StaticMesh[0x28];                                          // 0x0000(0x0028) UNKNOWN PROPERTY: SoftObjectProperty AT.LoadingUiCaptureAsset.StaticMesh
	unsigned char                                      SkelMesh[0x28];                                            // 0x0028(0x0028) UNKNOWN PROPERTY: SoftObjectProperty AT.LoadingUiCaptureAsset.SkelMesh
	unsigned char                                      AnimBP[0x28];                                              // 0x0050(0x0028) UNKNOWN PROPERTY: SoftObjectProperty AT.LoadingUiCaptureAsset.AnimBP
	unsigned char                                      Animations[0x10];                                          // 0x0078(0x0010) UNKNOWN PROPERTY: ArrayProperty AT.LoadingUiCaptureAsset.Animations
	unsigned char                                      Particle[0x28];                                            // 0x0088(0x0028) UNKNOWN PROPERTY: SoftObjectProperty AT.LoadingUiCaptureAsset.Particle
	unsigned char                                      ActorClass[0x28];                                          // 0x00B0(0x0028) UNKNOWN PROPERTY: SoftClassProperty AT.LoadingUiCaptureAsset.ActorClass
	unsigned char                                      Montage[0x28];                                             // 0x00D8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty AT.LoadingUiCaptureAsset.Montage

};

// ScriptStruct AT.ReferenceToUiCaptureAssetInstance
// 0x0040
struct FReferenceToUiCaptureAssetInstance
{
	class UStaticMesh*                                 StaticMesh;                                                // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkeletalMesh*                               SkelMesh;                                                  // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimBlueprint*                              AnimBP;                                                    // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UAnimationAsset*>                     Animations;                                                // 0x0018(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	class UParticleSystem*                             Particle;                                                  // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      ActorClass;                                                // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                Montage;                                                   // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct AT.DiffLevelInfoParameter
// 0x0008
struct FDiffLevelInfoParameter
{
	int                                                DiffLevel;                                                 // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CriticalAddValue;                                          // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct AT.DirectionParameter
// 0x0040
struct FDirectionParameter
{
	unsigned char                                      UnknownData_BGAZ[0x40];                                    // 0x0000(0x0040) MISSED OFFSET (PADDING)

};

// ScriptStruct AT.DirectionRequest
// 0x0018
struct FDirectionRequest
{
	unsigned char                                      UnknownData_SG04[0x18];                                    // 0x0000(0x0018) MISSED OFFSET (PADDING)

};

// ScriptStruct AT.ShadowData
// 0x0018
struct FShadowData
{
	unsigned char                                      UnknownData_QVBL[0x18];                                    // 0x0000(0x0018) MISSED OFFSET (PADDING)

};

// ScriptStruct AT.FetchingTalkParameter
// 0x0028
struct FFetchingTalkParameter
{
	struct FName                                       ExistTalkId;                                               // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       NotExistTalkId;                                            // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       HaveMoneyTalkId;                                           // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       NotHaveMoneyTalkId;                                        // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       FinishedTalkId;                                            // 0x0020(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct AT.ATParticleDataBase
// 0x0018
struct FATParticleDataBase
{
	class UParticleSystem*                             Particle;                                                  // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LifeSpan;                                                  // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_G0ZR[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USoundBase*                                  Sound;                                                     // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct AT.ATGameModeActorComponentSettings
// 0x0018
struct FATGameModeActorComponentSettings
{
	class UClass*                                      Class;                                                     // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UActorComponent*                             Component;                                                 // 0x0008(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_S14W[0x8];                                     // 0x0010(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct AT.JostleBeamDiffLevelInfoParameter
// 0x0008
struct FJostleBeamDiffLevelInfoParameter
{
	int                                                DiffLevel;                                                 // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LevelRate;                                                 // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct AT.ATLevelEventParam
// 0x0020
struct FATLevelEventParam
{
	struct FString                                     SendMessage;                                               // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     SendValue;                                                 // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct AT.ATLevelProgressPair
// 0x0080 (0x0088 - 0x0008)
struct FATLevelProgressPair : public FTableRowBase
{
	unsigned char                                      Level[0x28];                                               // 0x0008(0x0028) UNKNOWN PROPERTY: SoftObjectProperty AT.ATLevelProgressPair.Level
	struct FName                                       ProgressBegin;                                             // 0x0030(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       ProgressBeginCondition;                                    // 0x0038(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       ProgressEnd;                                               // 0x0040(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       ProgressEndCondition;                                      // 0x0048(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       VisibleBegin;                                              // 0x0050(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	AT_EVisibleTiming                                  TimingType;                                                // 0x0058(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_SQG5[0x7];                                     // 0x0059(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     TimingValue;                                               // 0x0060(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     DeactivateValue;                                           // 0x0070(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_AK6A[0x8];                                     // 0x0080(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct AT.ATPersistentLevelInfo
// 0x0020 (0x0028 - 0x0008)
struct FATPersistentLevelInfo : public FTableRowBase
{
	struct FName                                       LevelName;                                                 // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       LevelPath;                                                 // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<AT_EAreaDirection>                          Direction;                                                 // 0x0018(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)

};

// ScriptStruct AT.ATLongBlowoffObject
// 0x0010
struct FATLongBlowoffObject
{
	class UClass*                                      ObjectClass;                                               // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ObjectScale;                                               // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32_t                                           ObjectType;                                                // 0x000C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct AT.PlaceObjectPatternTableRow
// 0x0038 (0x0040 - 0x0008)
struct FPlaceObjectPatternTableRow : public FTableRowBase
{
	AT_EPlaceObjectType                                PlaceObjectType;                                           // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_GAK1[0x7];                                     // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UDataTable*                                  ItemDropTabl;                                              // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       ItemTableId;                                               // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	AT_EPlaceObjectArrangement                         Arrangement;                                               // 0x0020(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_TX9R[0x3];                                     // 0x0021(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     Offset;                                                    // 0x0024(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PlaceNum;                                                  // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Radius;                                                    // 0x0034(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PlaceInterval;                                             // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PlaceNumPerCircle;                                         // 0x003C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct AT.ATParticleSystemData
// 0x0018
struct FATParticleSystemData
{
	class UParticleSystemComponent*                    PSC;                                                       // 0x0000(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_TJNQ[0x10];                                    // 0x0008(0x0010) MISSED OFFSET (PADDING)

};

// ScriptStruct AT.PhaseTalkParam
// 0x0018
struct FPhaseTalkParam
{
	int                                                StartNo;                                                   // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                EndNo;                                                     // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     TalkEventID;                                               // 0x0008(0x0010) (Edit, ZeroConstructor, DisableEditOnTemplate, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct AT.PhaseCollisionParam
// 0x0008
struct FPhaseCollisionParam
{
	int                                                StartNo;                                                   // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                EndNo;                                                     // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct AT.ATWindRoadEnterParam
// 0x0001
struct FATWindRoadEnterParam
{
	unsigned char                                      UnknownData_J3D5[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct AT.ATWindRoadCameraParam
// 0x0001
struct FATWindRoadCameraParam
{
	unsigned char                                      UnknownData_6CWT[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct AT.DirectionRequests
// 0x0010
struct FDirectionRequests
{
	TArray<struct FDirectionRequest>                   Element;                                                   // 0x0000(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct AT.ATParticleData
// 0x0028 (0x0040 - 0x0018)
struct FATParticleData : public FATParticleDataBase
{
	struct FName                                       SocketName;                                                // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSpawnLocationRoot;                                        // 0x0020(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<AT_EParticleSpawnLocation>             SpawnLocationType;                                         // 0x0021(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_UNCI[0x2];                                     // 0x0022(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     LocationOffset;                                            // 0x0024(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    RotationOffset;                                            // 0x0030(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                              RandomAngle;                                               // 0x003C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct AT.OverrideAnimation
// 0x0070
struct FOverrideAnimation
{
	AT_EOverrideAnimationTiming                        Timing;                                                    // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_491L[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAnimSequence*                               Sequence;                                                  // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsLoop;                                                    // 0x0010(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_A6MS[0xF];                                     // 0x0011(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FATMeshAttachObject                         AttachedMesh;                                              // 0x0020(0x0040) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	class AActor*                                      TargetPoint;                                               // 0x0060(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_HXKH[0x8];                                     // 0x0068(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct AT.NPCPoseSet
// 0x0018
struct FNPCPoseSet
{
	class UAnimationAsset*                             m_Animation;                                               // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FATMeshAttachObject>                 m_AttachObjects;                                           // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
