#pragma once

// Name: DBZKakarot, Version: 1.0.3

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct AnimationCore.Axis
// 0x0010
struct FAxis
{
	struct FVector                                     Axis;                                                     // 0x0000(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct AnimationCore.ConstraintDescriptor
// 0x0010
struct FConstraintDescriptor
{
	                                                   Type;                                                     // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xF];                                       // 0x0001(0x000F) MISSED OFFSET
};

// ScriptStruct AnimationCore.ConstraintData
// 0x0080
struct FConstraintData
{
	struct FConstraintDescriptor                       Constraint;                                               // 0x0000(0x0010)
	unsigned char                                      UnknownData00[0x70];                                      // 0x0010(0x0070) MISSED OFFSET
};

// ScriptStruct AnimationCore.ConstraintDescriptionEx
// 0x0010
struct FConstraintDescriptionEx
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct AnimationCore.FilterOptionPerAxis
// 0x0003
struct FFilterOptionPerAxis
{
	unsigned char                                      UnknownData00[0x3];                                       // 0x0000(0x0003) MISSED OFFSET
};

// ScriptStruct AnimationCore.AimConstraintDescription
// 0x0030 (0x0040 - 0x0010)
struct FAimConstraintDescription : public FConstraintDescriptionEx
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0010(0x0030) MISSED OFFSET
};

// ScriptStruct AnimationCore.TransformConstraintDescription
// 0x0008 (0x0018 - 0x0010)
struct FTransformConstraintDescription : public FConstraintDescriptionEx
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0010(0x0008) MISSED OFFSET
};

// ScriptStruct AnimationCore.TransformConstraint
// 0x0028
struct FTransformConstraint
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
};

// ScriptStruct AnimationCore.ConstraintDescription
// 0x000D
struct FConstraintDescription
{
	unsigned char                                      UnknownData00[0xD];                                       // 0x0000(0x000D) MISSED OFFSET
};

// ScriptStruct AnimationCore.ConstraintOffset
// 0x0060
struct FConstraintOffset
{
	struct FVector                                     Translation;                                              // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FQuat                                       Rotation;                                                 // 0x0010(0x0010) (IsPlainOldData)
	unsigned char                                      UnknownData01[0x40];                                      // 0x0020(0x0040) MISSED OFFSET
};

// ScriptStruct AnimationCore.TransformFilter
// 0x0009
struct FTransformFilter
{
	unsigned char                                      UnknownData00[0x9];                                       // 0x0000(0x0009) MISSED OFFSET
};

// ScriptStruct AnimationCore.EulerTransform
// 0x0024
struct FEulerTransform
{
	struct FVector                                     Location;                                                 // 0x0000(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // 0x000C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0018(0x000C) MISSED OFFSET
};

// ScriptStruct AnimationCore.NodeChain
// 0x0010
struct FNodeChain
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct AnimationCore.NodeHierarchyData
// 0x0070
struct FNodeHierarchyData
{
	unsigned char                                      UnknownData00[0x70];                                      // 0x0000(0x0070) MISSED OFFSET
};

// ScriptStruct AnimationCore.NodeHierarchyWithUserData
// 0x0078
struct FNodeHierarchyWithUserData
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	struct FNodeHierarchyData                          Hierarchy;                                                // 0x0008(0x0070)
};

// ScriptStruct AnimationCore.NodeObject
// 0x0010
struct FNodeObject
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
