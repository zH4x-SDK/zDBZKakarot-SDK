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

// Enum AnimGraphRuntime.AnimPhysLinearConstraintType
enum class EAnimPhysLinearConstraintType : uint8_t
{

};


// Enum AnimGraphRuntime.AnimPhysAngularConstraintType
enum class EAnimPhysAngularConstraintType : uint8_t
{

};


// Enum AnimGraphRuntime.EInterpolationBlend
enum class EInterpolationBlend : uint8_t
{

};


// Enum AnimGraphRuntime.EBoneModificationMode
enum class EBoneModificationMode : uint8_t
{

};


// Enum AnimGraphRuntime.ESimulationSpace
enum class ESimulationSpace : uint8_t
{

};



//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct AnimGraphRuntime.AnimNode_SkeletalControlBase
// 0x00C0 (0x00F0 - 0x0030)
struct FAnimNode_SkeletalControlBase : public FAnimNode_Base
{
	unsigned char                                      UnknownData00[0xC0];                                      // 0x0030(0x00C0) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_LookAt
// 0x0130 (0x0220 - 0x00F0)
struct FAnimNode_LookAt : public FAnimNode_SkeletalControlBase
{
	unsigned char                                      UnknownData00[0x130];                                     // 0x00F0(0x0130) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.BoneSocketTarget
// 0x0060
struct FBoneSocketTarget
{
	unsigned char                                      UnknownData00[0x60];                                      // 0x0000(0x0060) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.SocketReference
// 0x0040
struct FSocketReference
{
	unsigned char                                      UnknownData00[0x40];                                      // 0x0000(0x0040) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_BlendSpacePlayer
// 0x00D0 (0x0128 - 0x0058)
struct FAnimNode_BlendSpacePlayer : public FAnimNode_AssetPlayerBase
{
	float                                              X;                                                        // 0x0058(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Y;                                                        // 0x005C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Z;                                                        // 0x0060(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PlayRate;                                                 // 0x0064(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC0];                                      // 0x0068(0x00C0) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_AimOffsetLookAt
// 0x00E8 (0x0210 - 0x0128)
struct FAnimNode_AimOffsetLookAt : public FAnimNode_BlendSpacePlayer
{
	struct FPoseLink                                   BasePose;                                                 // 0x0128(0x0010) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0xD8];                                      // 0x0138(0x00D8) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_AnimDynamics
// 0x02B0 (0x03A0 - 0x00F0)
struct FAnimNode_AnimDynamics : public FAnimNode_SkeletalControlBase
{
	unsigned char                                      UnknownData00[0x2B0];                                     // 0x00F0(0x02B0) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimPhysSphericalLimit
// 0x0030
struct FAnimPhysSphericalLimit
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0000(0x0030) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimPhysPlanarLimit
// 0x0050
struct FAnimPhysPlanarLimit
{
	unsigned char                                      UnknownData00[0x50];                                      // 0x0000(0x0050) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimPhysConstraintSetup
// 0x005C
struct FAnimPhysConstraintSetup
{
	unsigned char                                      UnknownData00[0x5C];                                      // 0x0000(0x005C) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_ApplyAdditive
// 0x00C0 (0x00F0 - 0x0030)
struct FAnimNode_ApplyAdditive : public FAnimNode_Base
{
	struct FPoseLink                                   Base;                                                     // 0x0030(0x0010) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0xB0];                                      // 0x0040(0x00B0) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_ApplyLimits
// 0x0020 (0x0110 - 0x00F0)
struct FAnimNode_ApplyLimits : public FAnimNode_SkeletalControlBase
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x00F0(0x0020) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AngularRangeLimit
// 0x0030
struct FAngularRangeLimit
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0000(0x0030) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_BlendBoneByChannel
// 0x0060 (0x0090 - 0x0030)
struct FAnimNode_BlendBoneByChannel : public FAnimNode_Base
{
	struct FPoseLink                                   A;                                                        // 0x0030(0x0010) (Edit, BlueprintVisible)
	struct FPoseLink                                   B;                                                        // 0x0040(0x0010) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x40];                                      // 0x0050(0x0040) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.BlendBoneByChannelEntry
// 0x0038
struct FBlendBoneByChannelEntry
{
	unsigned char                                      UnknownData00[0x38];                                      // 0x0000(0x0038) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_BlendListBase
// 0x00A8 (0x00D8 - 0x0030)
struct FAnimNode_BlendListBase : public FAnimNode_Base
{
	unsigned char                                      UnknownData00[0xA8];                                      // 0x0030(0x00A8) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_BlendListByBool
// 0x0008 (0x00E0 - 0x00D8)
struct FAnimNode_BlendListByBool : public FAnimNode_BlendListBase
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x00D8(0x0008) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_BlendListByEnum
// 0x0018 (0x00F0 - 0x00D8)
struct FAnimNode_BlendListByEnum : public FAnimNode_BlendListBase
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x00D8(0x0018) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_BlendListByInt
// 0x0008 (0x00E0 - 0x00D8)
struct FAnimNode_BlendListByInt : public FAnimNode_BlendListBase
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x00D8(0x0008) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_BlendSpaceEvaluator
// 0x0008 (0x0130 - 0x0128)
struct FAnimNode_BlendSpaceEvaluator : public FAnimNode_BlendSpacePlayer
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0128(0x0008) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_BoneDrivenController
// 0x0078 (0x0168 - 0x00F0)
struct FAnimNode_BoneDrivenController : public FAnimNode_SkeletalControlBase
{
	unsigned char                                      UnknownData00[0x78];                                      // 0x00F0(0x0078) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_CCDIK
// 0x00C0 (0x01B0 - 0x00F0)
struct FAnimNode_CCDIK : public FAnimNode_SkeletalControlBase
{
	unsigned char                                      UnknownData00[0xC0];                                      // 0x00F0(0x00C0) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_Constraint
// 0x0048 (0x0138 - 0x00F0)
struct FAnimNode_Constraint : public FAnimNode_SkeletalControlBase
{
	unsigned char                                      UnknownData00[0x48];                                      // 0x00F0(0x0048) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.Constraint
// 0x0028
struct FConstraint
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_CopyBone
// 0x0038 (0x0128 - 0x00F0)
struct FAnimNode_CopyBone : public FAnimNode_SkeletalControlBase
{
	unsigned char                                      UnknownData00[0x38];                                      // 0x00F0(0x0038) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_CopyBoneDelta
// 0x0040 (0x0130 - 0x00F0)
struct FAnimNode_CopyBoneDelta : public FAnimNode_SkeletalControlBase
{
	unsigned char                                      UnknownData00[0x40];                                      // 0x00F0(0x0040) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_CopyPoseFromMesh
// 0x00B8 (0x00E8 - 0x0030)
struct FAnimNode_CopyPoseFromMesh : public FAnimNode_Base
{
	unsigned char                                      UnknownData00[0xB8];                                      // 0x0030(0x00B8) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_CurveSource
// 0x0030 (0x0060 - 0x0030)
struct FAnimNode_CurveSource : public FAnimNode_Base
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0030(0x0030) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_Fabrik
// 0x0100 (0x01F0 - 0x00F0)
struct FAnimNode_Fabrik : public FAnimNode_SkeletalControlBase
{
	unsigned char                                      UnknownData00[0x100];                                     // 0x00F0(0x0100) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_HandIKRetargeting
// 0x0078 (0x0168 - 0x00F0)
struct FAnimNode_HandIKRetargeting : public FAnimNode_SkeletalControlBase
{
	unsigned char                                      UnknownData00[0x78];                                      // 0x00F0(0x0078) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_LayeredBoneBlend
// 0x00A8 (0x00D8 - 0x0030)
struct FAnimNode_LayeredBoneBlend : public FAnimNode_Base
{
	struct FPoseLink                                   BasePose;                                                 // 0x0030(0x0010) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x98];                                      // 0x0040(0x0098) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_LegIK
// 0x0030 (0x0120 - 0x00F0)
struct FAnimNode_LegIK : public FAnimNode_SkeletalControlBase
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x00F0(0x0030) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimLegIKData
// 0x00B0
struct FAnimLegIKData
{
	unsigned char                                      UnknownData00[0xB0];                                      // 0x0000(0x00B0) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimLegIKDefinition
// 0x0040
struct FAnimLegIKDefinition
{
	unsigned char                                      UnknownData00[0x40];                                      // 0x0000(0x0040) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.IKChain
// 0x0040
struct FIKChain
{
	unsigned char                                      UnknownData00[0x40];                                      // 0x0000(0x0040) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.IKChainLink
// 0x0040
struct FIKChainLink
{
	unsigned char                                      UnknownData00[0x40];                                      // 0x0000(0x0040) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_MakeDynamicAdditive
// 0x0028 (0x0058 - 0x0030)
struct FAnimNode_MakeDynamicAdditive : public FAnimNode_Base
{
	struct FPoseLink                                   Base;                                                     // 0x0030(0x0010) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0040(0x0018) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_ModifyBone
// 0x0048 (0x0138 - 0x00F0)
struct FAnimNode_ModifyBone : public FAnimNode_SkeletalControlBase
{
	unsigned char                                      UnknownData00[0x48];                                      // 0x00F0(0x0048) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_ModifyCurve
// 0x0050 (0x0080 - 0x0030)
struct FAnimNode_ModifyCurve : public FAnimNode_Base
{
	unsigned char                                      UnknownData00[0x50];                                      // 0x0030(0x0050) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_MultiWayBlend
// 0x0040 (0x0070 - 0x0030)
struct FAnimNode_MultiWayBlend : public FAnimNode_Base
{
	unsigned char                                      UnknownData00[0x40];                                      // 0x0030(0x0040) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_ObserveBone
// 0x0040 (0x0130 - 0x00F0)
struct FAnimNode_ObserveBone : public FAnimNode_SkeletalControlBase
{
	unsigned char                                      UnknownData00[0x40];                                      // 0x00F0(0x0040) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_PoseHandler
// 0x0038 (0x0090 - 0x0058)
struct FAnimNode_PoseHandler : public FAnimNode_AssetPlayerBase
{
	class UPoseAsset*                                  PoseAsset;                                                // 0x0058(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x30];                                      // 0x0060(0x0030) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_PoseBlendNode
// 0x0020 (0x00B0 - 0x0090)
struct FAnimNode_PoseBlendNode : public FAnimNode_PoseHandler
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0090(0x0020) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_PoseByName
// 0x0010 (0x00A0 - 0x0090)
struct FAnimNode_PoseByName : public FAnimNode_PoseHandler
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0090(0x0010) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_PoseDriver
// 0x00D0 (0x0160 - 0x0090)
struct FAnimNode_PoseDriver : public FAnimNode_PoseHandler
{
	unsigned char                                      UnknownData00[0xD0];                                      // 0x0090(0x00D0) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.PoseDriverTarget
// 0x00A8
struct FPoseDriverTarget
{
	unsigned char                                      UnknownData00[0xA8];                                      // 0x0000(0x00A8) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.PoseDriverTransform
// 0x0018
struct FPoseDriverTransform
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.RBFParams
// 0x0010
struct FRBFParams
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_PoseSnapshot
// 0x0080 (0x00B0 - 0x0030)
struct FAnimNode_PoseSnapshot : public FAnimNode_Base
{
	unsigned char                                      UnknownData00[0x80];                                      // 0x0030(0x0080) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_RandomPlayer
// 0x0060 (0x0090 - 0x0030)
struct FAnimNode_RandomPlayer : public FAnimNode_Base
{
	unsigned char                                      UnknownData00[0x60];                                      // 0x0030(0x0060) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.RandomPlayerSequenceEntry
// 0x0058
struct FRandomPlayerSequenceEntry
{
	class UAnimSequence*                               Sequence;                                                 // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x50];                                      // 0x0008(0x0050) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_MeshSpaceRefPose
// 0x0000 (0x0030 - 0x0030)
struct FAnimNode_MeshSpaceRefPose : public FAnimNode_Base
{

};

// ScriptStruct AnimGraphRuntime.AnimNode_RefPose
// 0x0008 (0x0038 - 0x0030)
struct FAnimNode_RefPose : public FAnimNode_Base
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0030(0x0008) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_ResetRoot
// 0x0010 (0x0100 - 0x00F0)
struct FAnimNode_ResetRoot : public FAnimNode_SkeletalControlBase
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x00F0(0x0010) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_RigidBody
// 0x0480 (0x0570 - 0x00F0)
struct FAnimNode_RigidBody : public FAnimNode_SkeletalControlBase
{
	unsigned char                                      UnknownData00[0x480];                                     // 0x00F0(0x0480) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_Root
// 0x0010 (0x0040 - 0x0030)
struct FAnimNode_Root : public FAnimNode_Base
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_RotateRootBone
// 0x0090 (0x00C0 - 0x0030)
struct FAnimNode_RotateRootBone : public FAnimNode_Base
{
	struct FPoseLink                                   BasePose;                                                 // 0x0030(0x0010) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x80];                                      // 0x0040(0x0080) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_RotationMultiplier
// 0x0038 (0x0128 - 0x00F0)
struct FAnimNode_RotationMultiplier : public FAnimNode_SkeletalControlBase
{
	unsigned char                                      UnknownData00[0x38];                                      // 0x00F0(0x0038) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_RotationOffsetBlendSpace
// 0x00B8 (0x01E0 - 0x0128)
struct FAnimNode_RotationOffsetBlendSpace : public FAnimNode_BlendSpacePlayer
{
	struct FPoseLink                                   BasePose;                                                 // 0x0128(0x0010) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0xA8];                                      // 0x0138(0x00A8) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_ScaleChainLength
// 0x0080 (0x00B0 - 0x0030)
struct FAnimNode_ScaleChainLength : public FAnimNode_Base
{
	unsigned char                                      UnknownData00[0x80];                                      // 0x0030(0x0080) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_SequenceEvaluator
// 0x0018 (0x0070 - 0x0058)
struct FAnimNode_SequenceEvaluator : public FAnimNode_AssetPlayerBase
{
	class UAnimSequenceBase*                           Sequence;                                                 // 0x0058(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0060(0x0010) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_Slot
// 0x0038 (0x0068 - 0x0030)
struct FAnimNode_Slot : public FAnimNode_Base
{
	struct FPoseLink                                   Source;                                                   // 0x0030(0x0010) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0040(0x0028) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_SplineIK
// 0x01A0 (0x0290 - 0x00F0)
struct FAnimNode_SplineIK : public FAnimNode_SkeletalControlBase
{
	unsigned char                                      UnknownData00[0x1A0];                                     // 0x00F0(0x01A0) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.SplineIKCachedBoneData
// 0x0020
struct FSplineIKCachedBoneData
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_SpringBone
// 0x0068 (0x0158 - 0x00F0)
struct FAnimNode_SpringBone : public FAnimNode_SkeletalControlBase
{
	unsigned char                                      UnknownData00[0x68];                                      // 0x00F0(0x0068) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_StateResult
// 0x0000 (0x0040 - 0x0040)
struct FAnimNode_StateResult : public FAnimNode_Root
{

};

// ScriptStruct AnimGraphRuntime.AnimNode_Trail
// 0x0190 (0x0280 - 0x00F0)
struct FAnimNode_Trail : public FAnimNode_SkeletalControlBase
{
	unsigned char                                      UnknownData00[0x190];                                     // 0x00F0(0x0190) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.RotationLimit
// 0x0018
struct FRotationLimit
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_TwistCorrectiveNode
// 0x0088 (0x0178 - 0x00F0)
struct FAnimNode_TwistCorrectiveNode : public FAnimNode_SkeletalControlBase
{
	unsigned char                                      UnknownData00[0x88];                                      // 0x00F0(0x0088) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.ReferenceBoneFrame
// 0x0028
struct FReferenceBoneFrame
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_TwoBoneIK
// 0x0150 (0x0240 - 0x00F0)
struct FAnimNode_TwoBoneIK : public FAnimNode_SkeletalControlBase
{
	unsigned char                                      UnknownData00[0x150];                                     // 0x00F0(0x0150) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_TwoWayBlend
// 0x00C8 (0x00F8 - 0x0030)
struct FAnimNode_TwoWayBlend : public FAnimNode_Base
{
	struct FPoseLink                                   A;                                                        // 0x0030(0x0010) (Edit, BlueprintVisible)
	struct FPoseLink                                   B;                                                        // 0x0040(0x0010) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0xA8];                                      // 0x0050(0x00A8) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimationPlayInSequence
// 0x0010
struct FAnimationPlayInSequence
{
	class UAnimSequenceBase*                           Animation;                                                // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Offset;                                                   // 0x0008(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimSequencerInstanceProxy
// 0x0220 (0x07B0 - 0x0590)
struct FAnimSequencerInstanceProxy : public FAnimInstanceProxy
{
	unsigned char                                      UnknownData00[0x220];                                     // 0x0590(0x0220) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.RBFEntry
// 0x0010
struct FRBFEntry
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.RBFTarget
// 0x0078 (0x0088 - 0x0010)
struct FRBFTarget : public FRBFEntry
{
	unsigned char                                      UnknownData00[0x78];                                      // 0x0010(0x0078) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
