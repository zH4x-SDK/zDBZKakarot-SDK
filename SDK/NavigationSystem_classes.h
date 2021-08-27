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

// Class NavigationSystem.NavigationInvokerComponent
// 0x0008 (0x0108 - 0x0100)
class UNavigationInvokerComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0100(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavigationInvokerComponent");
		return ptr;
	}

};


// Class NavigationSystem.NavigationData
// 0x01C0 (0x04F8 - 0x0338)
class ANavigationData : public AActor
{
public:
	unsigned char                                      UnknownData00[0x1C0];                                     // 0x0338(0x01C0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavigationData");
		return ptr;
	}

};


// Class NavigationSystem.AbstractNavData
// 0x0000 (0x04F8 - 0x04F8)
class AAbstractNavData : public ANavigationData
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.AbstractNavData");
		return ptr;
	}

};


// Class NavigationSystem.CrowdManagerBase
// 0x0000 (0x0028 - 0x0028)
class UCrowdManagerBase : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.CrowdManagerBase");
		return ptr;
	}

};


// Class NavigationSystem.NavArea
// 0x0018 (0x0048 - 0x0030)
class UNavArea : public UNavAreaBase
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0030(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavArea");
		return ptr;
	}

};


// Class NavigationSystem.NavArea_Default
// 0x0000 (0x0048 - 0x0048)
class UNavArea_Default : public UNavArea
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavArea_Default");
		return ptr;
	}

};


// Class NavigationSystem.NavArea_LowHeight
// 0x0000 (0x0048 - 0x0048)
class UNavArea_LowHeight : public UNavArea
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavArea_LowHeight");
		return ptr;
	}

};


// Class NavigationSystem.NavArea_Null
// 0x0000 (0x0048 - 0x0048)
class UNavArea_Null : public UNavArea
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavArea_Null");
		return ptr;
	}

};


// Class NavigationSystem.NavArea_Obstacle
// 0x0000 (0x0048 - 0x0048)
class UNavArea_Obstacle : public UNavArea
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavArea_Obstacle");
		return ptr;
	}

};


// Class NavigationSystem.NavAreaMeta
// 0x0000 (0x0048 - 0x0048)
class UNavAreaMeta : public UNavArea
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavAreaMeta");
		return ptr;
	}

};


// Class NavigationSystem.NavAreaMeta_SwitchByAgent
// 0x0080 (0x00C8 - 0x0048)
class UNavAreaMeta_SwitchByAgent : public UNavAreaMeta
{
public:
	unsigned char                                      UnknownData00[0x80];                                      // 0x0048(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavAreaMeta_SwitchByAgent");
		return ptr;
	}

};


// Class NavigationSystem.NavCollision
// 0x0068 (0x00D8 - 0x0070)
class UNavCollision : public UNavCollisionBase
{
public:
	unsigned char                                      UnknownData00[0x68];                                      // 0x0070(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavCollision");
		return ptr;
	}

};


// Class NavigationSystem.NavigationGraph
// 0x0000 (0x04F8 - 0x04F8)
class ANavigationGraph : public ANavigationData
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavigationGraph");
		return ptr;
	}

};


// Class NavigationSystem.NavigationGraphNode
// 0x0000 (0x0338 - 0x0338)
class ANavigationGraphNode : public AActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavigationGraphNode");
		return ptr;
	}

};


// Class NavigationSystem.NavigationGraphNodeComponent
// 0x0020 (0x0270 - 0x0250)
class UNavigationGraphNodeComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0250(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavigationGraphNodeComponent");
		return ptr;
	}

};


// Class NavigationSystem.NavigationPath
// 0x0060 (0x0088 - 0x0028)
class UNavigationPath : public UObject
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0028(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavigationPath");
		return ptr;
	}

};


// Class NavigationSystem.NavigationPathGenerator
// 0x0000 (0x0028 - 0x0028)
class UNavigationPathGenerator : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavigationPathGenerator");
		return ptr;
	}

};


// Class NavigationSystem.NavigationQueryFilter
// 0x0020 (0x0048 - 0x0028)
class UNavigationQueryFilter : public UObject
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0028(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavigationQueryFilter");
		return ptr;
	}

};


// Class NavigationSystem.NavigationSystemV1
// 0x03E8 (0x0410 - 0x0028)
class UNavigationSystemV1 : public UNavigationSystemBase
{
public:
	unsigned char                                      UnknownData00[0x3E8];                                     // 0x0028(0x03E8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavigationSystemV1");
		return ptr;
	}

};


// Class NavigationSystem.NavigationSystemModuleConfig
// 0x0008 (0x0050 - 0x0048)
class UNavigationSystemModuleConfig : public UNavigationSystemConfig
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0048(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavigationSystemModuleConfig");
		return ptr;
	}

};


// Class NavigationSystem.NavigationTestingActor
// 0x00E8 (0x0420 - 0x0338)
class ANavigationTestingActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0338(0x0010) MISSED OFFSET
	class UCapsuleComponent*                           CapsuleComponent;                                         // 0x0348(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0xD0];                                      // 0x0350(0x00D0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavigationTestingActor");
		return ptr;
	}

};


// Class NavigationSystem.NavLinkComponent
// 0x0010 (0x0580 - 0x0570)
class UNavLinkComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0570(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavLinkComponent");
		return ptr;
	}

};


// Class NavigationSystem.NavRelevantComponent
// 0x0030 (0x0130 - 0x0100)
class UNavRelevantComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0100(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavRelevantComponent");
		return ptr;
	}

};


// Class NavigationSystem.NavLinkCustomComponent
// 0x00A8 (0x01D8 - 0x0130)
class UNavLinkCustomComponent : public UNavRelevantComponent
{
public:
	unsigned char                                      UnknownData00[0xA8];                                      // 0x0130(0x00A8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavLinkCustomComponent");
		return ptr;
	}

};


// Class NavigationSystem.NavLinkCustomInterface
// 0x0000 (0x0028 - 0x0028)
class UNavLinkCustomInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavLinkCustomInterface");
		return ptr;
	}

};


// Class NavigationSystem.NavLinkHostInterface
// 0x0000 (0x0028 - 0x0028)
class UNavLinkHostInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavLinkHostInterface");
		return ptr;
	}

};


// Class NavigationSystem.NavLinkRenderingComponent
// 0x0000 (0x0570 - 0x0570)
class UNavLinkRenderingComponent : public UPrimitiveComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavLinkRenderingComponent");
		return ptr;
	}

};


// Class NavigationSystem.NavLinkTrivial
// 0x0000 (0x0050 - 0x0050)
class UNavLinkTrivial : public UNavLinkDefinition
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavLinkTrivial");
		return ptr;
	}

};


// Class NavigationSystem.NavMeshBoundsVolume
// 0x0008 (0x0378 - 0x0370)
class ANavMeshBoundsVolume : public AVolume
{
public:
	struct FNavAgentSelector                           SupportedAgents;                                          // 0x0370(0x0004) (Edit)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0374(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavMeshBoundsVolume");
		return ptr;
	}

};


// Class NavigationSystem.NavMeshRenderingComponent
// 0x0010 (0x0580 - 0x0570)
class UNavMeshRenderingComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0570(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavMeshRenderingComponent");
		return ptr;
	}

};


// Class NavigationSystem.NavModifierComponent
// 0x0028 (0x0158 - 0x0130)
class UNavModifierComponent : public UNavRelevantComponent
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0130(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavModifierComponent");
		return ptr;
	}

};


// Class NavigationSystem.NavModifierVolume
// 0x0010 (0x0380 - 0x0370)
class ANavModifierVolume : public AVolume
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0370(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavModifierVolume");
		return ptr;
	}

};


// Class NavigationSystem.NavNodeInterface
// 0x0000 (0x0028 - 0x0028)
class UNavNodeInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavNodeInterface");
		return ptr;
	}

};


// Class NavigationSystem.NavSystemConfigOverride
// 0x0010 (0x0348 - 0x0338)
class ANavSystemConfigOverride : public AActor
{
public:
	class UNavigationSystemConfig*                     NavigationSystemConfig;                                   // 0x0338(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0340(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavSystemConfigOverride");
		return ptr;
	}

};


// Class NavigationSystem.NavTestRenderingComponent
// 0x0000 (0x0570 - 0x0570)
class UNavTestRenderingComponent : public UPrimitiveComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavTestRenderingComponent");
		return ptr;
	}

};


// Class NavigationSystem.RecastFilter_UseDefaultArea
// 0x0000 (0x0048 - 0x0048)
class URecastFilter_UseDefaultArea : public UNavigationQueryFilter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.RecastFilter_UseDefaultArea");
		return ptr;
	}

};


// Class NavigationSystem.RecastNavMesh
// 0x00B8 (0x05B0 - 0x04F8)
class ARecastNavMesh : public ANavigationData
{
public:
	unsigned char                                      UnknownData00[0xB8];                                      // 0x04F8(0x00B8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.RecastNavMesh");
		return ptr;
	}

};


// Class NavigationSystem.RecastNavMeshDataChunk
// 0x0010 (0x0040 - 0x0030)
class URecastNavMeshDataChunk : public UNavigationDataChunk
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.RecastNavMeshDataChunk");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
