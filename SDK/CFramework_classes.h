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
// Classes
//---------------------------------------------------------------------------

// Class CFramework.CFHUD
// 0x00B8 (FullSize[0x04E0] - InheritedSize[0x0428])
class ACFHUD : public AHUD
{
public:
	class UCFHUDDebugDrawComponent*                    DebugDrawComponent;                                        // 0x0428(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCFHUDDebugBackgroundComponent*              DebugBackgroundComponent;                                  // 0x0430(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCFHUDDebugProgressBarComponent*             DebugProgressBarComponent;                                 // 0x0438(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TMap<int, class UCFHUDDebugNodeSelectorComponent*> DebugNodeSelectorComponent;                                // 0x0440(0x0050) (ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	TMap<int, class UCFHUDDebugSectionDrawComponent*>  DebugSectionDrawComponent;                                 // 0x0490(0x0050) (ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFHUD");
		return ptr;
	}



};

// Class CFramework.CFGameInstance
// 0x01F8 (FullSize[0x0298] - InheritedSize[0x00A0])
class UCFGameInstance : public UGameInstance
{
public:
	class UClass*                                      DebugMenuComponentClass;                                   // 0x00A0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      MessageManagerClass;                                       // 0x00A8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCFDebugMenuHandler*                         DebugMenuComponent;                                        // 0x00B0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_WFXY[0x30];                                    // 0x00B8(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UCFSceneManager*                             SceneManager;                                              // 0x00E8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_OM1T[0xE8];                                    // 0x00F0(0x00E8) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UCFLocalizeManager*                          LocalizeManager;                                           // 0x01D8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCFMessageManager*                           MessageManager;                                            // 0x01E0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCFHUDManager*                               HudManager;                                                // 0x01E8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCFSoundADX*                                 AdxManager;                                                // 0x01F0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_XH2U[0xA0];                                    // 0x01F8(0x00A0) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFGameInstance");
		return ptr;
	}



	void OnViewportCreated();
	class UCFSceneManager* GetSceneManager();
};

// Class CFramework.CFUIUserWidget
// 0x0168 (FullSize[0x0370] - InheritedSize[0x0208])
class UCFUIUserWidget : public UUserWidget
{
public:
	class UCFUIWidgetPathAnimManager*                  PathAnimMng;                                               // 0x0208(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_UDTU[0x160];                                   // 0x0210(0x0160) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFUIUserWidget");
		return ptr;
	}



};

// Class CFramework.CFInputComponent
// 0x0008 (FullSize[0x0190] - InheritedSize[0x0188])
class UCFInputComponent : public UInputComponent
{
public:
	unsigned char                                      UnknownData_9M7K[0x8];                                     // 0x0188(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFInputComponent");
		return ptr;
	}



};

// Class CFramework.CFDynamicAssignInputComponent
// 0x0058 (FullSize[0x01E8] - InheritedSize[0x0190])
class UCFDynamicAssignInputComponent : public UCFInputComponent
{
public:
	unsigned char                                      UnknownData_DA8Q[0x58];                                    // 0x0190(0x0058) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFDynamicAssignInputComponent");
		return ptr;
	}



};

// Class CFramework.CFObject
// 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
class UCFObject : public UObject
{
public:
	unsigned char                                      UnknownData_NYEX[0x8];                                     // 0x0028(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFObject");
		return ptr;
	}



};

// Class CFramework.CFGameState
// 0x0030 (FullSize[0x03C8] - InheritedSize[0x0398])
class ACFGameState : public AGameState
{
public:
	class UCFDebugTickableManager*                     DebugTickableManager;                                      // 0x0398(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_5ZV6[0x8];                                     // 0x03A0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UCFGameSpeedManager*                         GameSpeedManager;                                          // 0x03A8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCFPauseManager*                             PauseManager;                                              // 0x03B0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCFSceneTickExecuterManager*                 SceneTickExecuterManager;                                  // 0x03B8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_4VNY[0x8];                                     // 0x03C0(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFGameState");
		return ptr;
	}



};

// Class CFramework.CFLevelManager
// 0x00A0 (FullSize[0x03D8] - InheritedSize[0x0338])
class ACFLevelManager : public AActor
{
public:
	TMap<struct FName, struct FCFLevelLoadingPack>     LevelLoadingMap;                                           // 0x0338(0x0050) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_LEMU[0x50];                                    // 0x0388(0x0050) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFLevelManager");
		return ptr;
	}



	void OnCreateGameState(class ACFGameState* InGameState);
};

// Class CFramework.CFActorComponent
// 0x0000 (FullSize[0x0100] - InheritedSize[0x0100])
class UCFActorComponent : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFActorComponent");
		return ptr;
	}



};

// Class CFramework.CFManagerActorComponent
// 0x0000 (FullSize[0x0100] - InheritedSize[0x0100])
class UCFManagerActorComponent : public UCFActorComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFManagerActorComponent");
		return ptr;
	}



};

// Class CFramework.CFManagerObject
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UCFManagerObject : public UCFObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFManagerObject");
		return ptr;
	}



};

// Class CFramework.CFDebugMenuHandler
// 0x00C0 (FullSize[0x00E8] - InheritedSize[0x0028])
class UCFDebugMenuHandler : public UObject
{
public:
	unsigned char                                      UnknownData_XUWP[0x48];                                    // 0x0028(0x0048) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      DebugMenuClass;                                            // 0x0070(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_8BH5[0x8];                                     // 0x0078(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UCFInputComponent*                           Input;                                                     // 0x0080(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_97VG[0x38];                                    // 0x0088(0x0038) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UCFDebugMenu*                                DebugMenu;                                                 // 0x00C0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCFDebugMenuConstructor*                     DebugMenuConstructor;                                      // 0x00C8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_YH0X[0x18];                                    // 0x00D0(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFDebugMenuHandler");
		return ptr;
	}



	void SaveSetting();
	void OnSetLoadSetting(bool bLoad);
	void OnReleasedRightStick();
	void OnReleasedLeftStick();
	void OnPressedRightStick();
	void OnPressedLeftStick();
	SlateCore_ECheckBoxState IsLoadSetting();
	void ClearSetting();
};

// Class CFramework.CFDebugMenuEventHandlerBool
// 0x0030 (FullSize[0x0058] - InheritedSize[0x0028])
class UCFDebugMenuEventHandlerBool : public UObject
{
public:
	unsigned char                                      UnknownData_L1ID[0x30];                                    // 0x0028(0x0030) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFDebugMenuEventHandlerBool");
		return ptr;
	}



	void Set(bool bChecked);
	SlateCore_ECheckBoxState Get();
};

// Class CFramework.CFDebugMenuEventHandlerContentsFactory
// 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
class UCFDebugMenuEventHandlerContentsFactory : public UObject
{
public:
	unsigned char                                      UnknownData_H5T4[0x8];                                     // 0x0028(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFDebugMenuEventHandlerContentsFactory");
		return ptr;
	}



};

// Class CFramework.CFDebugMenuEventHandlerTrigger
// 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
class UCFDebugMenuEventHandlerTrigger : public UObject
{
public:
	unsigned char                                      UnknownData_6CZS[0x10];                                    // 0x0028(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFDebugMenuEventHandlerTrigger");
		return ptr;
	}



	void Exec();
};

// Class CFramework.CFGameMode
// 0x0000 (FullSize[0x0420] - InheritedSize[0x0420])
class ACFGameMode : public AGameMode
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFGameMode");
		return ptr;
	}



};

// Class CFramework.CFHUDDebugNodeSelectorComponent
// 0x00E8 (FullSize[0x01E8] - InheritedSize[0x0100])
class UCFHUDDebugNodeSelectorComponent : public UCFActorComponent
{
public:
	unsigned char                                      UnknownData_DDJ9[0xD8];                                    // 0x0100(0x00D8) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UCFInputComponent*                           Input;                                                     // 0x01D8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_Z9CU[0x8];                                     // 0x01E0(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFHUDDebugNodeSelectorComponent");
		return ptr;
	}



	void OnReleased();
	void OnPressedUp();
	void OnPressedRight();
	void OnPressedOption_C();
	void OnPressedOption_B();
	void OnPressedOption_A();
	void OnPressedLeft();
	void OnPressedEnter();
	void OnPressedDown();
	void OnPressedBack();
};

// Class CFramework.CFPushSolverShapeCapsule
// 0x0020 (FullSize[0x05B0] - InheritedSize[0x0590])
class UCFPushSolverShapeCapsule : public UCapsuleComponent
{
public:
	unsigned char                                      UnknownData_RKNZ[0x20];                                    // 0x0590(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFPushSolverShapeCapsule");
		return ptr;
	}



};

// Class CFramework.CFScene
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class UCFScene : public UCFObject
{
public:
	unsigned char                                      UnknownData_GH4N[0x10];                                    // 0x0030(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFScene");
		return ptr;
	}



};

// Class CFramework.CFSceneChangeParamBase
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class UCFSceneChangeParamBase : public UCFObject
{
public:
	unsigned char                                      UnknownData_TG6N[0x10];                                    // 0x0030(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFSceneChangeParamBase");
		return ptr;
	}



};

// Class CFramework.CFSceneChangeCommonCall
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UCFSceneChangeCommonCall : public UCFObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFSceneChangeCommonCall");
		return ptr;
	}



};

// Class CFramework.CFSceneManager
// 0x0190 (FullSize[0x01C0] - InheritedSize[0x0030])
class UCFSceneManager : public UCFManagerObject
{
public:
	unsigned char                                      UnknownData_U3TX[0x58];                                    // 0x0030(0x0058) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UCFSceneAssignment*                          m_pSceneAssignment;                                        // 0x0088(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCFScene*                                    m_sceneTbl[0x20];                                          // 0x0090(0x0100) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_G4L2[0x8];                                     // 0x0190(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UDataTable*                                  CtrlLevelInfoByScene;                                      // 0x0198(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCFSceneChangeCommonCall*                    ChangeCommonCall;                                          // 0x01A0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_B1S5[0x18];                                    // 0x01A8(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFSceneManager");
		return ptr;
	}



};

// Class CFramework.CFSingleton
// 0x0018 (FullSize[0x0048] - InheritedSize[0x0030])
class UCFSingleton : public UCFObject
{
public:
	unsigned char                                      UnknownData_LY25[0x18];                                    // 0x0030(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFSingleton");
		return ptr;
	}



};

// Class CFramework.CFActivateInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UCFActivateInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFActivateInterface");
		return ptr;
	}



};

// Class CFramework.CFActor
// 0x0008 (FullSize[0x0340] - InheritedSize[0x0338])
class ACFActor : public AActor
{
public:
	bool                                               BehaviorTick;                                              // 0x0338(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               BehaviorRender;                                            // 0x0339(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               BehaviorCollision;                                         // 0x033A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_YVRZ[0x5];                                     // 0x033B(0x0005) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFActor");
		return ptr;
	}



};

// Class CFramework.CFAsyncLoader
// 0x0040 (FullSize[0x0068] - InheritedSize[0x0028])
class UCFAsyncLoader : public UObject
{
public:
	unsigned char                                      UnknownData_EGFA[0x18];                                    // 0x0028(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FSoftObjectPath>                     requests;                                                  // 0x0040(0x0010) (ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<class UObject*>                             loadedInstances;                                           // 0x0050(0x0010) (ZeroConstructor, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_OT7A[0x8];                                     // 0x0060(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFAsyncLoader");
		return ptr;
	}



	void OnLoaded();
};

// Class CFramework.CFCharacter
// 0x0018 (FullSize[0x0760] - InheritedSize[0x0748])
class ACFCharacter : public ACharacter
{
public:
	unsigned char                                      UnknownData_VHWC[0x8];                                     // 0x0748(0x0008) Fix Super Size
	unsigned char                                      UnknownData_AFK0[0x10];                                    // 0x0750(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFCharacter");
		return ptr;
	}



};

// Class CFramework.CFDebugMenu
// 0x0208 (FullSize[0x0410] - InheritedSize[0x0208])
class UCFDebugMenu : public UUserWidget
{
public:
	class UClass*                                      NumericArchetype;                                          // 0x0208(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      CategoryArchetype;                                         // 0x0210(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      ListArchetype;                                             // 0x0218(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      FolderArchetype;                                           // 0x0220(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      CheckArchetype;                                            // 0x0228(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      ComboArchetype;                                            // 0x0230(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      TextArchetype;                                             // 0x0238(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      ButtonArchetype;                                           // 0x0240(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      ClassArchetype;                                            // 0x0248(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                TextColor;                                                 // 0x0250(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateColor                                 ContentDefaultColor;                                       // 0x0260(0x0028) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FSlateColor                                 ContentActiveColor;                                        // 0x0288(0x0028) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FSlateColor                                 ContentSelectedColor;                                      // 0x02B0(0x0028) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FSlateColor                                 ListDefaultColor;                                          // 0x02D8(0x0028) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FSlateColor                                 ListActiveColor;                                           // 0x0300(0x0028) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_GM7J[0x38];                                    // 0x0328(0x0038) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UCFInputComponent*                           Input;                                                     // 0x0360(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_UV24[0x8];                                     // 0x0368(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TMap<int, class UCFDebugMenuCategory*>             Categories;                                                // 0x0370(0x0050) (ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_XKT0[0x50];                                    // 0x03C0(0x0050) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFDebugMenu");
		return ptr;
	}



	void OnReleasedRight();
	void OnReleasedLeft();
	void OnPressedUp();
	void OnPressedSelect();
	void OnPressedRight();
	void OnPressedLeft();
	void OnPressedDown();
	void OnPressedCancel();
	void OnKeyDownEnter();
	class UHorizontalBox* GetHorizontalBox();
	class UOverlay* GetContentsArea();
};

// Class CFramework.CFDebugMenuContent
// 0x0038 (FullSize[0x0240] - InheritedSize[0x0208])
class UCFDebugMenuContent : public UUserWidget
{
public:
	unsigned char                                      UnknownData_O8Y7[0x38];                                    // 0x0208(0x0038) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFDebugMenuContent");
		return ptr;
	}



	void OnPushedBP(class UCFDebugMenuContent* to);
	void OnPoppedBP(class UCFDebugMenuContent* from);
	void OnDeactivatedBP();
	void OnContentSelectedBP(bool byKeyboard);
	void OnContentCanceledBP();
	void OnActivatedBP();
	bool IsSelectedByKeyboard();
	bool IsSelected();
	bool IsActive();
	struct FLinearColor GetTextColor();
	class UTextBlock* GetTextBlock();
	struct FSlateColor GetContentColor();
};

// Class CFramework.CFDebugMenuCategory
// 0x0028 (FullSize[0x0268] - InheritedSize[0x0240])
class UCFDebugMenuCategory : public UCFDebugMenuContent
{
public:
	struct FText                                       Label;                                                     // 0x0240(0x0018) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	class UCFDebugMenuList*                            List;                                                      // 0x0258(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_XSJX[0x8];                                     // 0x0260(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFDebugMenuCategory");
		return ptr;
	}



};

// Class CFramework.CFDebugMenuList
// 0x0008 (FullSize[0x0210] - InheritedSize[0x0208])
class UCFDebugMenuList : public UUserWidget
{
public:
	unsigned char                                      UnknownData_Q1Y8[0x8];                                     // 0x0208(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFDebugMenuList");
		return ptr;
	}



	class UVerticalBox* GetVerticalBox();
	struct FLinearColor GetTextColor();
	struct FSlateColor GetBackColor();
};

// Class CFramework.CFDebugMenuContentFolder
// 0x0010 (FullSize[0x0250] - InheritedSize[0x0240])
class UCFDebugMenuContentFolder : public UCFDebugMenuContent
{
public:
	class UCFDebugMenuList*                            List;                                                      // 0x0240(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_WPI6[0x8];                                     // 0x0248(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFDebugMenuContentFolder");
		return ptr;
	}



	class UWidget* GetMenuContent();
	class UMenuAnchor* GetMenuAnchor();
};

// Class CFramework.CFDebugMenuContentNumeric
// 0x0010 (FullSize[0x0250] - InheritedSize[0x0240])
class UCFDebugMenuContentNumeric : public UCFDebugMenuContent
{
public:
	unsigned char                                      UnknownData_2P05[0x10];                                    // 0x0240(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFDebugMenuContentNumeric");
		return ptr;
	}



	void OnValueCommitted(float InValue, TEnumAsByte<SlateCore_ETextCommit> CommitMethod);
	class USpinBox* GetSpinBox();
};

// Class CFramework.CFDebugMenuContentCheck
// 0x0000 (FullSize[0x0240] - InheritedSize[0x0240])
class UCFDebugMenuContentCheck : public UCFDebugMenuContent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFDebugMenuContentCheck");
		return ptr;
	}



	class UCheckBox* GetCheckBox();
};

// Class CFramework.CFDebugMenuContentCombo
// 0x0000 (FullSize[0x0240] - InheritedSize[0x0240])
class UCFDebugMenuContentCombo : public UCFDebugMenuContent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFDebugMenuContentCombo");
		return ptr;
	}



	class UComboBoxString* GetComboBox();
};

// Class CFramework.CFDebugMenuContentText
// 0x0000 (FullSize[0x0240] - InheritedSize[0x0240])
class UCFDebugMenuContentText : public UCFDebugMenuContent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFDebugMenuContentText");
		return ptr;
	}



	void OnTextCommitted(const struct FText& Text, TEnumAsByte<SlateCore_ETextCommit> CommitMethod);
	class UEditableTextBox* GetTextBox();
};

// Class CFramework.CFDebugMenuContentButton
// 0x0000 (FullSize[0x0240] - InheritedSize[0x0240])
class UCFDebugMenuContentButton : public UCFDebugMenuContent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFDebugMenuContentButton");
		return ptr;
	}



	class UButton* GetButtonBox();
};

// Class CFramework.CFDebugMenuContentClass
// 0x0010 (FullSize[0x0250] - InheritedSize[0x0240])
class UCFDebugMenuContentClass : public UCFDebugMenuContent
{
public:
	class UClass*                                      MetaClass;                                                 // 0x0240(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UClass*                                      SelectedClass;                                             // 0x0248(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFDebugMenuContentClass");
		return ptr;
	}



	void OnSetClass(class UClass* setClass);
	class UCFPropertyEditorClass* GetPropEdit();
};

// Class CFramework.CFDebugMenuConstructor
// 0x0040 (FullSize[0x0068] - InheritedSize[0x0028])
class UCFDebugMenuConstructor : public UObject
{
public:
	unsigned char                                      UnknownData_1N18[0x8];                                     // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UCFDebugMenuEventHandlerLog*                 LogHandler;                                                // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCFDebugMenuEventHandlerCamera*              CameraHandler;                                             // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCFDebugMenuEventHandlerCharacter*           CharacterHandler;                                          // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCFDebugMenuEventHandlerBatch*               BatchHandler;                                              // 0x0048(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCFDebugMenuEventHandlerScene*               SceneHandler;                                              // 0x0050(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCFDebugMenuEventHandlerLevel*               LevelHandler;                                              // 0x0058(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCFDebugMenuEventHandlerLoad*                LoadHandler;                                               // 0x0060(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFDebugMenuConstructor");
		return ptr;
	}



};

// Class CFramework.CFDebugMenuEventHandlerFloat
// 0x0038 (FullSize[0x0060] - InheritedSize[0x0028])
class UCFDebugMenuEventHandlerFloat : public UObject
{
public:
	unsigned char                                      UnknownData_JFKD[0x38];                                    // 0x0028(0x0038) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFDebugMenuEventHandlerFloat");
		return ptr;
	}



	void Set(float Value);
	void GetParam(struct FDebugMenuNumericParam* Param);
	float Get();
};

// Class CFramework.CFDebugMenuEventHandlerText
// 0x0038 (FullSize[0x0060] - InheritedSize[0x0028])
class UCFDebugMenuEventHandlerText : public UObject
{
public:
	unsigned char                                      UnknownData_VT8N[0x38];                                    // 0x0028(0x0038) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFDebugMenuEventHandlerText");
		return ptr;
	}



	void Set(const struct FText& Text);
	struct FText Get();
};

// Class CFramework.CFDebugMenuEventHandlerCombo
// 0x0030 (FullSize[0x0058] - InheritedSize[0x0028])
class UCFDebugMenuEventHandlerCombo : public UObject
{
public:
	unsigned char                                      UnknownData_4RMR[0x30];                                    // 0x0028(0x0030) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFDebugMenuEventHandlerCombo");
		return ptr;
	}



	void Set(const struct FString& selected, TEnumAsByte<SlateCore_ESelectInfo> Type);
	void Build(TArray<struct FString>* Options, struct FString* current);
};

// Class CFramework.CFDMLogSwitchEngine
// 0x0000 (FullSize[0x0058] - InheritedSize[0x0058])
class UCFDMLogSwitchEngine : public UCFDebugMenuEventHandlerBool
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFDMLogSwitchEngine");
		return ptr;
	}



};

// Class CFramework.CFDMLogSwitchFramework
// 0x0000 (FullSize[0x0058] - InheritedSize[0x0058])
class UCFDMLogSwitchFramework : public UCFDebugMenuEventHandlerBool
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFDMLogSwitchFramework");
		return ptr;
	}



};

// Class CFramework.CFDebugMenuEventHandlerLog
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class UCFDebugMenuEventHandlerLog : public UCFDebugMenuEventHandlerContentsFactory
{
public:
	class UCFDebugMenuEventHandlerBool*                Handlers[0x2];                                             // 0x0030(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFDebugMenuEventHandlerLog");
		return ptr;
	}



};

// Class CFramework.CFDMEH_ControlleObjects
// 0x0020 (FullSize[0x0078] - InheritedSize[0x0058])
class UCFDMEH_ControlleObjects : public UCFDebugMenuEventHandlerBool
{
public:
	unsigned char                                      UnknownData_B3CB[0x20];                                    // 0x0058(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFDMEH_ControlleObjects");
		return ptr;
	}



};

// Class CFramework.CFDMEH_ToggleTick
// 0x0000 (FullSize[0x0078] - InheritedSize[0x0078])
class UCFDMEH_ToggleTick : public UCFDMEH_ControlleObjects
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFDMEH_ToggleTick");
		return ptr;
	}



};

// Class CFramework.CFDMEH_ToggleDraw
// 0x0000 (FullSize[0x0078] - InheritedSize[0x0078])
class UCFDMEH_ToggleDraw : public UCFDMEH_ControlleObjects
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFDMEH_ToggleDraw");
		return ptr;
	}



};

// Class CFramework.CFDMEH_ToggleTickOther
// 0x0000 (FullSize[0x0078] - InheritedSize[0x0078])
class UCFDMEH_ToggleTickOther : public UCFDMEH_ControlleObjects
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFDMEH_ToggleTickOther");
		return ptr;
	}



};

// Class CFramework.CFDMEH_ToggleDrawOther
// 0x0000 (FullSize[0x0078] - InheritedSize[0x0078])
class UCFDMEH_ToggleDrawOther : public UCFDMEH_ControlleObjects
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFDMEH_ToggleDrawOther");
		return ptr;
	}



};

// Class CFramework.CFDebugMenuEventHandlerBatch
// 0x0030 (FullSize[0x0060] - InheritedSize[0x0030])
class UCFDebugMenuEventHandlerBatch : public UCFDebugMenuEventHandlerContentsFactory
{
public:
	class UCFDebugMenuEventHandlerBool*                Handlers[0x6];                                             // 0x0030(0x0030) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFDebugMenuEventHandlerBatch");
		return ptr;
	}



};

// Class CFramework.CFDebugMenuEventHandlerExample
// 0x0030 (FullSize[0x0060] - InheritedSize[0x0030])
class UCFDebugMenuEventHandlerExample : public UCFDebugMenuEventHandlerContentsFactory
{
public:
	class UCFDebugMenuEventHandlerBool*                BoolExample;                                               // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_K216[0x8];                                     // 0x0038(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UCFDebugMenuEventHandlerFloat*               FloatExample;                                              // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCFDebugMenuEventHandlerTrigger*             TriggerExample;                                            // 0x0048(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCFDebugMenuEventHandlerText*                TextExample;                                               // 0x0050(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCFDebugMenuEventHandlerCombo*               ComboExample;                                              // 0x0058(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFDebugMenuEventHandlerExample");
		return ptr;
	}



	void SetFExample(float F);
	void GetFParam(struct FDebugMenuNumericParam* Param);
	float GetFExample();
};

// Class CFramework.CFDMTExample
// 0x0000 (FullSize[0x0038] - InheritedSize[0x0038])
class UCFDMTExample : public UCFDebugMenuEventHandlerTrigger
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFDMTExample");
		return ptr;
	}



};

// Class CFramework.CFDMCExample
// 0x0000 (FullSize[0x0058] - InheritedSize[0x0058])
class UCFDMCExample : public UCFDebugMenuEventHandlerCombo
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFDMCExample");
		return ptr;
	}



};

// Class CFramework.DMBoolCameraDispInfo
// 0x0000 (FullSize[0x0058] - InheritedSize[0x0058])
class UDMBoolCameraDispInfo : public UCFDebugMenuEventHandlerBool
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.DMBoolCameraDispInfo");
		return ptr;
	}



};

// Class CFramework.CFDebugMenuEventHandlerCamera
// 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
class UCFDebugMenuEventHandlerCamera : public UCFDebugMenuEventHandlerContentsFactory
{
public:
	class UCFDebugMenuEventHandlerBool*                DispInfo;                                                  // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFDebugMenuEventHandlerCamera");
		return ptr;
	}



};

// Class CFramework.DMBoolCharacterDispInfo
// 0x0000 (FullSize[0x0058] - InheritedSize[0x0058])
class UDMBoolCharacterDispInfo : public UCFDebugMenuEventHandlerBool
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.DMBoolCharacterDispInfo");
		return ptr;
	}



};

// Class CFramework.CFDebugMenuEventHandlerCharacter
// 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
class UCFDebugMenuEventHandlerCharacter : public UCFDebugMenuEventHandlerContentsFactory
{
public:
	class UCFDebugMenuEventHandlerBool*                DispInfo;                                                  // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFDebugMenuEventHandlerCharacter");
		return ptr;
	}



};

// Class CFramework.DMBoolDispSceneHierarchy
// 0x0000 (FullSize[0x0058] - InheritedSize[0x0058])
class UDMBoolDispSceneHierarchy : public UCFDebugMenuEventHandlerBool
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.DMBoolDispSceneHierarchy");
		return ptr;
	}



};

// Class CFramework.CFDebugMenuEventHandlerScene
// 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
class UCFDebugMenuEventHandlerScene : public UCFDebugMenuEventHandlerContentsFactory
{
public:
	class UCFDebugMenuEventHandlerBool*                DispHierarchy;                                             // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFDebugMenuEventHandlerScene");
		return ptr;
	}



};

// Class CFramework.DMTriggerDispLevelStatus
// 0x0000 (FullSize[0x0038] - InheritedSize[0x0038])
class UDMTriggerDispLevelStatus : public UCFDebugMenuEventHandlerTrigger
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.DMTriggerDispLevelStatus");
		return ptr;
	}



};

// Class CFramework.CFDebugMenuEventHandlerLevel
// 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
class UCFDebugMenuEventHandlerLevel : public UCFDebugMenuEventHandlerContentsFactory
{
public:
	class UCFDebugMenuEventHandlerTrigger*             DispStatus;                                                // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFDebugMenuEventHandlerLevel");
		return ptr;
	}



};

// Class CFramework.DMDispLoadStatus
// 0x0030 (FullSize[0x0088] - InheritedSize[0x0058])
class UDMDispLoadStatus : public UCFDebugMenuEventHandlerBool
{
public:
	unsigned char                                      UnknownData_3B9Z[0x20];                                    // 0x0058(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UCFInputComponent*                           Input;                                                     // 0x0078(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_XNY7[0x8];                                     // 0x0080(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.DMDispLoadStatus");
		return ptr;
	}



	void Tick(float DeltaTime);
	void OnPressedRight();
	void OnPressedLeft();
	void OnDetachInput(class UObject* WorldContext);
	void OnAttachInput(class UObject* WorldContext);
};

// Class CFramework.CFDebugMenuEventHandlerLoad
// 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
class UCFDebugMenuEventHandlerLoad : public UCFDebugMenuEventHandlerContentsFactory
{
public:
	class UDMDispLoadStatus*                           DispLoadStatus;                                            // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFDebugMenuEventHandlerLoad");
		return ptr;
	}



};

// Class CFramework.CFDebugTickableManager
// 0x0010 (FullSize[0x0110] - InheritedSize[0x0100])
class UCFDebugTickableManager : public UCFManagerActorComponent
{
public:
	unsigned char                                      UnknownData_K0Y5[0x10];                                    // 0x0100(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFDebugTickableManager");
		return ptr;
	}



};

// Class CFramework.CFDebugXmlSelector
// 0x0078 (FullSize[0x00A8] - InheritedSize[0x0030])
class UCFDebugXmlSelector : public UCFObject
{
public:
	unsigned char                                      UnknownData_03SZ[0x30];                                    // 0x0030(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UCFInputComponent*                           Input;                                                     // 0x0060(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_IUJS[0x40];                                    // 0x0068(0x0040) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFDebugXmlSelector");
		return ptr;
	}



	void OnPressedUp();
	void OnPressedRight();
	void OnPressedR1();
	void OnPressedLeft();
	void OnPressedL1();
	void OnPressedEnter();
	void OnPressedDown();
	void OnPressedBack();
};

// Class CFramework.CFDynamicsBlueprintFunctionLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UCFDynamicsBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFDynamicsBlueprintFunctionLibrary");
		return ptr;
	}



	void STATIC_SetEnable(class USkeletalMeshComponent* SkeletalMeshComponent, bool Enable);
	void STATIC_SetAllEnable(bool Enabled);
	void STATIC_Reset(class USkeletalMeshComponent* SkeletalMeshComponent);
	bool STATIC_IsEnable(class USkeletalMeshComponent* SkeletalMeshComponent);
	bool STATIC_IsAllEnable();
};

// Class CFramework.CFExportDataAssetFromDataTable
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class UCFExportDataAssetFromDataTable : public UDataAsset
{
public:
	TArray<class UDataTable*>                          DataTabls;                                                 // 0x0030(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFExportDataAssetFromDataTable");
		return ptr;
	}



};

// Class CFramework.CFExportFromDataTableActor
// 0x0010 (FullSize[0x0348] - InheritedSize[0x0338])
class ACFExportFromDataTableActor : public AActor
{
public:
	CFramework_EExportOutType                          OutType;                                                   // 0x0338(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_UGBR[0x7];                                     // 0x0339(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UCFExportDataAssetFromDataTable*             DataAsset;                                                 // 0x0340(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFExportFromDataTableActor");
		return ptr;
	}



};

// Class CFramework.CFRichTextBlockNonExperimental
// 0x0298 (FullSize[0x03B8] - InheritedSize[0x0120])
class UCFRichTextBlockNonExperimental : public UTextLayoutWidget
{
public:
	struct FText                                       Text;                                                      // 0x0120(0x0018) (Edit, Protected, NativeAccessSpecifierProtected)
	struct FScriptDelegate                             TextDelegate;                                              // 0x0138(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FSlateFontInfo                              Font;                                                      // 0x0148(0x0058) (Edit, BlueprintVisible, BlueprintReadOnly, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FLinearColor                                Color;                                                     // 0x01A0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class URichTextBlockDecorator*>             Decorators;                                                // 0x01B0(0x0010) (Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_EERE[0x1F8];                                   // 0x01C0(0x01F8) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFRichTextBlockNonExperimental");
		return ptr;
	}



};

// Class CFramework.CFExtendRichTextBlock
// 0x0130 (FullSize[0x04E8] - InheritedSize[0x03B8])
class UCFExtendRichTextBlock : public UCFRichTextBlockNonExperimental
{
public:
	int                                                TextSize;                                                  // 0x03B8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bIsEnableBold;                                             // 0x03BC(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               isEnableOutline;                                           // 0x03BD(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_0WCO[0x2];                                     // 0x03BE(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FLinearColor                                OutlineColor;                                              // 0x03C0(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UObject*                                     OutlineMaterial;                                           // 0x03D0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              MinDisplayArea;                                            // 0x03D8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              MinWrapTextAt;                                             // 0x03DC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              OffsetBaseline;                                            // 0x03E0(0x0004) (Edit, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_H7HS[0x4];                                     // 0x03E4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               bInheritDecorators;                                        // 0x03E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bInheritInputDisplayData;                                  // 0x03E9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_4G2J[0x16];                                    // 0x03EA(0x0016) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UCFExtendRichTextIconData*                   ExtendRichTextIconData;                                    // 0x0400(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_XOHF[0xE0];                                    // 0x0408(0x00E0) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFExtendRichTextBlock");
		return ptr;
	}



	void SetText(const struct FText& InText);
	void SetRevealedIndex(int RevealedIndex);
	void SetIconToKeyConfigByName(const struct FString& SearchConfigName, const struct FString& SetIconName);
	void SetIconToKeyConfigByIndex(int SearchConfigIndex, const struct FString& SetIconName);
	void SetIconToKeyConfigAll(TArray<int> IconIndexList);
	void SetExtendRichTextIconData(class UCFExtendRichTextIconData* InInputDisplayData);
	struct FText GetText();
	void AddDecorator(class URichTextBlockDecorator* Decorator);
};

// Class CFramework.CFExtendRichTextBlockDecorator
// 0x0030 (FullSize[0x0058] - InheritedSize[0x0028])
class UCFExtendRichTextBlockDecorator : public URichTextBlockDecorator
{
public:
	bool                                               bReveal;                                                   // 0x0028(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_FC8N[0x3];                                     // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                RevealedIndex;                                             // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      SpanClasses[0x28];                                         // 0x0030(0x0028) UNKNOWN PROPERTY: SoftObjectProperty CFramework.CFExtendRichTextBlockDecorator.SpanClasses


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFExtendRichTextBlockDecorator");
		return ptr;
	}



};

// Class CFramework.CFExtendRichTextIconData
// 0x0300 (FullSize[0x0330] - InheritedSize[0x0030])
class UCFExtendRichTextIconData : public UDataAsset
{
public:
	float                                              IconScale;                                                 // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_09E0[0x4];                                     // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FCFIconArt>                          IconList;                                                  // 0x0038(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct FCFKeyConfigAssign>                  KeyConfigList;                                             // 0x0048(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_6MO1[0x270];                                   // 0x0058(0x0270) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FCFKeyConfigAssign>                  DefaultKeyConfigList;                                      // 0x02C8(0x0010) (ZeroConstructor, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_4Z48[0x58];                                    // 0x02D8(0x0058) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFExtendRichTextIconData");
		return ptr;
	}



};

// Class CFramework.CFGameOperatingEnvironment
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UCFGameOperatingEnvironment : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFGameOperatingEnvironment");
		return ptr;
	}



	bool STATIC_IsConfirmAButton();
	struct FString STATIC_GetReplaceLanguagePath(const struct FString& Path, TEnumAsByte<CFramework_ELanguageType> InLanguageType, bool IsDefaultPlatform);
	struct FString STATIC_GetReplaceEnvironmentPath(const struct FString& Path, bool IsDefaultPlatform);
	TEnumAsByte<CFramework_ERegionType> STATIC_GetRegionType();
	struct FString STATIC_GetLanguageCode(TEnumAsByte<CFramework_ELanguageType> Type);
	TEnumAsByte<CFramework_ELanguageType> STATIC_GetLangType();
};

// Class CFramework.CFGameSpeedManager
// 0x0230 (FullSize[0x0330] - InheritedSize[0x0100])
class UCFGameSpeedManager : public UCFManagerActorComponent
{
public:
	TMap<class AActor*, struct FCFGameSpeedApplyActorInfo> ApplyActorList_Actor;                                      // 0x0100(0x0050) (ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	TMap<class APawn*, struct FCFGameSpeedApplyActorInfo> ApplyActorList_Pawn;                                       // 0x0150(0x0050) (ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	TMap<class UParticleSystemComponent*, struct FCFGameSpeedApplyActorInfo> ApplyActorList_ParticleComp;                               // 0x01A0(0x0050) (ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	TMap<class UCFTickObject*, struct FCFGameSpeedApplyActorInfo> ApplyActorList_TickObject;                                 // 0x01F0(0x0050) (ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_ISDA[0xA0];                                    // 0x0240(0x00A0) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TMap<CFramework_ECFGameSpeedUID, struct FCFGameSpeedExec> Executer;                                                  // 0x02E0(0x0050) (ZeroConstructor, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFGameSpeedManager");
		return ptr;
	}



};

// Class CFramework.CFHUDDebugBackgroundComponent
// 0x0018 (FullSize[0x0118] - InheritedSize[0x0100])
class UCFHUDDebugBackgroundComponent : public UCFActorComponent
{
public:
	unsigned char                                      UnknownData_F53F[0x18];                                    // 0x0100(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFHUDDebugBackgroundComponent");
		return ptr;
	}



};

// Class CFramework.CFHUDDebugDrawComponent
// 0x0060 (FullSize[0x0160] - InheritedSize[0x0100])
class UCFHUDDebugDrawComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData_8HRL[0x60];                                    // 0x0100(0x0060) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFHUDDebugDrawComponent");
		return ptr;
	}



};

// Class CFramework.CFDebugTextTestingActor
// 0x0018 (FullSize[0x0358] - InheritedSize[0x0340])
class ACFDebugTextTestingActor : public ACFActor
{
public:
	unsigned char                                      UnknownData_AZLT[0x18];                                    // 0x0340(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFDebugTextTestingActor");
		return ptr;
	}



};

// Class CFramework.CFHUDDebugDrawInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UCFHUDDebugDrawInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFHUDDebugDrawInterface");
		return ptr;
	}



};

// Class CFramework.CFHUDDebugProgressBarComponent
// 0x0030 (FullSize[0x0130] - InheritedSize[0x0100])
class UCFHUDDebugProgressBarComponent : public UCFActorComponent
{
public:
	unsigned char                                      UnknownData_5WSB[0x30];                                    // 0x0100(0x0030) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFHUDDebugProgressBarComponent");
		return ptr;
	}



};

// Class CFramework.CFHUDDebugSectionDrawComponent
// 0x0070 (FullSize[0x0170] - InheritedSize[0x0100])
class UCFHUDDebugSectionDrawComponent : public UCFActorComponent
{
public:
	unsigned char                                      UnknownData_XGTD[0x70];                                    // 0x0100(0x0070) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFHUDDebugSectionDrawComponent");
		return ptr;
	}



};

// Class CFramework.CFHUDManager
// 0x0040 (FullSize[0x0068] - InheritedSize[0x0028])
class UCFHUDManager : public UObject
{
public:
	unsigned char                                      UnknownData_0MTL[0x18];                                    // 0x0028(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UCFExtendRichTextIconData*                   TextIconData;                                              // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCFAsyncLoader*                              UILoader;                                                  // 0x0048(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCFKeyResourceMappingData*                   KeyResourceMappingData;                                    // 0x0050(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UDataTable*                                  InputAssignMappingTable;                                   // 0x0058(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_W32X[0x8];                                     // 0x0060(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFHUDManager");
		return ptr;
	}



};

// Class CFramework.CFSerializedInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UCFSerializedInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFSerializedInterface");
		return ptr;
	}



};

// Class CFramework.CFLocalizeManager
// 0x0018 (FullSize[0x0048] - InheritedSize[0x0030])
class UCFLocalizeManager : public UCFManagerObject
{
public:
	unsigned char                                      UnknownData_YDG1[0x18];                                    // 0x0030(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFLocalizeManager");
		return ptr;
	}



};

// Class CFramework.CFManagerComponent
// 0x0000 (FullSize[0x0100] - InheritedSize[0x0100])
class UCFManagerComponent : public UCFActorComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFManagerComponent");
		return ptr;
	}



};

// Class CFramework.CFMessageManager
// 0x0098 (FullSize[0x00C0] - InheritedSize[0x0028])
class UCFMessageManager : public UObject
{
public:
	class UClass*                                      SubFontRegistClass;                                        // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FString                                     DataDirectory;                                             // 0x0030(0x0010) (Edit, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FString                                     DataDirectory_NoRelease;                                   // 0x0040(0x0010) (Edit, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCFUIUserWidget*                             FontRegist;                                                // 0x0050(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UDataTable*                                  DataTable;                                                 // 0x0058(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UDataTable*                                  NounParamTable;                                            // 0x0060(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UDataTable*                                  DataTable_NoRelease;                                       // 0x0068(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UDataTable*                                  NounParamTable_NoRelease;                                  // 0x0070(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_1U1U[0x48];                                    // 0x0078(0x0048) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFMessageManager");
		return ptr;
	}



	struct FString GetSpeaker(const struct FString& speakerID);
	struct FCFNounParamTableRow GetNounParamFromName(const struct FName& StringID);
	struct FCFNounParamTableRow GetNounParam(const struct FString& StringID);
	struct FCFMessageTableRow GetMessageDataFromName(const struct FName& StringID);
	struct FCFMessageTableRow GetMessageData(const struct FString& StringID);
};

// Class CFramework.CFParticleManager
// 0x00A0 (FullSize[0x01A0] - InheritedSize[0x0100])
class UCFParticleManager : public UCFActorComponent
{
public:
	TArray<class UParticleSystem*>                     CommonParticleList;                                        // 0x0100(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FCFParticleData                             CommonParticleDataList;                                    // 0x0110(0x0040) (Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	TMap<int, struct FCFParticleSystemData>            ParticleSystemDataMap;                                     // 0x0150(0x0050) (ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFParticleManager");
		return ptr;
	}



	void OnSystemFinished(class UParticleSystemComponent* InFinishedComponent);
	class UParticleSystemComponent* GetParticleComponent(int InUID);
	bool DeactiveParticleComponent(int InUID);
};

// Class CFramework.CFPauseManager
// 0x0280 (FullSize[0x0380] - InheritedSize[0x0100])
class UCFPauseManager : public UCFManagerActorComponent
{
public:
	TMap<class AActor*, struct FCFPauseApplyActorInfo> ApplyActorList_Actor;                                      // 0x0100(0x0050) (ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	TMap<class APawn*, struct FCFPauseApplyActorInfo>  ApplyActorList_Pawn;                                       // 0x0150(0x0050) (ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	TMap<class UActorComponent*, struct FCFPauseApplyActorInfo> ApplyActorList_Comp;                                       // 0x01A0(0x0050) (ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	TMap<class UCFTickObject*, struct FCFPauseApplyActorInfo> ApplyActorList_TickObject;                                 // 0x01F0(0x0050) (ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	TMap<class ACFPlayerController*, struct FCFPauseApplyActorInfo> ApplyActorList_PlayerController;                           // 0x0240(0x0050) (ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_WUAM[0xA0];                                    // 0x0290(0x00A0) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TMap<CFramework_ECFPauseUID, struct FCFPauseExec>  Executer;                                                  // 0x0330(0x0050) (ZeroConstructor, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFPauseManager");
		return ptr;
	}



};

// Class CFramework.CFPawn
// 0x0010 (FullSize[0x03A8] - InheritedSize[0x0398])
class ACFPawn : public APawn
{
public:
	unsigned char                                      UnknownData_W26R[0x10];                                    // 0x0398(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFPawn");
		return ptr;
	}



};

// Class CFramework.CFPlayerController
// 0x0000 (FullSize[0x0688] - InheritedSize[0x0688])
class ACFPlayerController : public APlayerController
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFPlayerController");
		return ptr;
	}



};

// Class CFramework.CFPropertyEditorClass
// 0x0020 (FullSize[0x0228] - InheritedSize[0x0208])
class UCFPropertyEditorClass : public UUserWidget
{
public:
	unsigned char                                      UnknownData_533K[0x10];                                    // 0x0208(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      MetaClass;                                                 // 0x0218(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UClass*                                      SelectedClass;                                             // 0x0220(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFPropertyEditorClass");
		return ptr;
	}



};

// Class CFramework.CFPushSolver
// 0x0028 (FullSize[0x0058] - InheritedSize[0x0030])
class UCFPushSolver : public UCFObject
{
public:
	TArray<class AActor*>                              PushingCauserActorList;                                    // 0x0030(0x0010) (ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct FCFMoveSolverData>                   MoveSolverDataList;                                        // 0x0040(0x0010) (ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_EH8T[0x8];                                     // 0x0050(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFPushSolver");
		return ptr;
	}



};

// Class CFramework.CFPushSolverComponent
// 0x0008 (FullSize[0x0108] - InheritedSize[0x0100])
class UCFPushSolverComponent : public UCFActorComponent
{
public:
	class UCFPushSolver*                               PushSolver;                                                // 0x0100(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFPushSolverComponent");
		return ptr;
	}



};

// Class CFramework.CFPushSolverShapeBox
// 0x0030 (FullSize[0x05C0] - InheritedSize[0x0590])
class UCFPushSolverShapeBox : public UBoxComponent
{
public:
	unsigned char                                      UnknownData_U1NO[0x30];                                    // 0x0590(0x0030) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFPushSolverShapeBox");
		return ptr;
	}



};

// Class CFramework.CFPushSolverShapeInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UCFPushSolverShapeInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFPushSolverShapeInterface");
		return ptr;
	}



};

// Class CFramework.CFPushSolverShapeSphere
// 0x0028 (FullSize[0x05B0] - InheritedSize[0x0588])
class UCFPushSolverShapeSphere : public USphereComponent
{
public:
	unsigned char                                      UnknownData_93VQ[0x8];                                     // 0x0588(0x0008) Fix Super Size
	unsigned char                                      UnknownData_TQMC[0x20];                                    // 0x0590(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFPushSolverShapeSphere");
		return ptr;
	}



};

// Class CFramework.CFrameworkGameMode
// 0x0000 (FullSize[0x0420] - InheritedSize[0x0420])
class ACFrameworkGameMode : public AGameMode
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFrameworkGameMode");
		return ptr;
	}



};

// Class CFramework.CFRegistFontAtlasText
// 0x00F8 (FullSize[0x0460] - InheritedSize[0x0368])
class UCFRegistFontAtlasText : public URichTextBlock
{
public:
	TArray<class URichTextBlock*>                      ReserveFontAtlasList;                                      // 0x0368(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	class UDataTable*                                  ParentDataTable;                                           // 0x0378(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCanvasPanel*                                ParentCanvasPanel;                                         // 0x0380(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_XPN8[0xD8];                                    // 0x0388(0x00D8) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFRegistFontAtlasText");
		return ptr;
	}



	void SetWriteFontAtlas(const struct FString& FontFamilyPath, const struct FString& FontTextDataTablePath, class UCanvasPanel* CanvasPanel, bool IsEnableBold);
	void ReleaseWriteFontAtlas();
};

// Class CFramework.CFRichTextBlockDecorator
// 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
class UCFRichTextBlockDecorator : public URichTextBlockDecorator
{
public:
	bool                                               bReveal;                                                   // 0x0028(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_NA0X[0x3];                                     // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                RevealedIndex;                                             // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFRichTextBlockDecorator");
		return ptr;
	}



};

// Class CFramework.CFSceneAssignment
// 0x0028 (FullSize[0x0058] - InheritedSize[0x0030])
class UCFSceneAssignment : public UCFObject
{
public:
	unsigned char                                      UnknownData_LXD8[0x20];                                    // 0x0030(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UCFSceneChangeParamBase*                     m_changeParam;                                             // 0x0050(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFSceneAssignment");
		return ptr;
	}



};

// Class CFramework.CFSceneTemplate
// 0x0048 (FullSize[0x0088] - InheritedSize[0x0040])
class UCFSceneTemplate : public UCFScene
{
public:
	unsigned char                                      UnknownData_V0T5[0x48];                                    // 0x0040(0x0048) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFSceneTemplate");
		return ptr;
	}



};

// Class CFramework.CFSceneTickExecuter
// 0x0050 (FullSize[0x0150] - InheritedSize[0x0100])
class UCFSceneTickExecuter : public UCFManagerActorComponent
{
public:
	unsigned char                                      UnknownData_BCTN[0x50];                                    // 0x0100(0x0050) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFSceneTickExecuter");
		return ptr;
	}



};

// Class CFramework.CFSceneTickExecuterManager
// 0x0110 (FullSize[0x0210] - InheritedSize[0x0100])
class UCFSceneTickExecuterManager : public UCFManagerActorComponent
{
public:
	class UCFSceneTickExecuter*                        TickGroupExecuterList[0x22];                               // 0x0100(0x0110) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFSceneTickExecuterManager");
		return ptr;
	}



};

// Class CFramework.CFSoundADX
// 0x0868 (FullSize[0x0898] - InheritedSize[0x0030])
class UCFSoundADX : public UCFObject
{
public:
	unsigned char                                      UnknownData_Q0XA[0x6F0];                                   // 0x0030(0x06F0) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAtomComponent*                              m_UE_BgmPlayer;                                            // 0x0720(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UAtomComponent*                              m_UE_SePlayer;                                             // 0x0728(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_BJQ5[0xF8];                                    // 0x0730(0x00F8) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USoundAtomCueSheet*                          m_UE_cueSheet;                                             // 0x0828(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FTestAcbHnWork>                      m_UE_acb_seHnWork;                                         // 0x0830(0x0010) (ZeroConstructor, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_R6UR[0x48];                                    // 0x0840(0x0048) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class USoundAtomCueSheet*>                  m_CueSheetArray;                                           // 0x0888(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFSoundADX");
		return ptr;
	}



};

// Class CFramework.CFStateMachine
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UCFStateMachine : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFStateMachine");
		return ptr;
	}



};

// Class CFramework.CFTickObject
// 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
class UCFTickObject : public UCFObject
{
public:
	unsigned char                                      UnknownData_E974[0x8];                                     // 0x0030(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFTickObject");
		return ptr;
	}



};

// Class CFramework.CFTickObjectUpdater
// 0x0050 (FullSize[0x0150] - InheritedSize[0x0100])
class UCFTickObjectUpdater : public UCFManagerActorComponent
{
public:
	TMap<class UCFTickObject*, class UCFTickObject*>   TickObjects;                                               // 0x0100(0x0050) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFTickObjectUpdater");
		return ptr;
	}



};

// Class CFramework.CFUILoader
// 0x00B8 (FullSize[0x00E0] - InheritedSize[0x0028])
class UCFUILoader : public UObject
{
public:
	unsigned char                                      UnknownData_YYS5[0xB8];                                    // 0x0028(0x00B8) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFUILoader");
		return ptr;
	}



};

// Class CFramework.CFUIMultiLineTextBox
// 0x02E0 (FullSize[0x0400] - InheritedSize[0x0120])
class UCFUIMultiLineTextBox : public UTextLayoutWidget
{
public:
	struct FText                                       Text;                                                      // 0x0120(0x0018) (Edit, Protected, NativeAccessSpecifierProtected)
	struct FScriptDelegate                             TextDelegate;                                              // 0x0138(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FSlateFontInfo                              Font;                                                      // 0x0148(0x0058) (Edit, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               isEnableOutline;                                           // 0x01A0(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_T7X8[0x3];                                     // 0x01A1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FLinearColor                                OutlineColor;                                              // 0x01A4(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_ERTR[0x4];                                     // 0x01B4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UObject*                                     OutlineMaterial;                                           // 0x01B8(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              OutlineSize;                                               // 0x01C0(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bIsEnableBold;                                             // 0x01C4(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_VYXC[0x3];                                     // 0x01C5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                TextSize;                                                  // 0x01C8(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FLinearColor                                Color;                                                     // 0x01CC(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              OffsetBaseline;                                            // 0x01DC(0x0004) (Edit, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class URichTextBlockDecorator*>             Decorators;                                                // 0x01E0(0x0010) (Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	float                                              MinDisplayArea;                                            // 0x01F0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              MinWrapTextAt;                                             // 0x01F4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bNonFontSizeFixedMode;                                     // 0x01F8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_7TXV[0x207];                                   // 0x01F9(0x0207) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFUIMultiLineTextBox");
		return ptr;
	}



	void SetText(const struct FText& InText);
	struct FText GetText();
	void AdaptTextSetting();
};

// Class CFramework.CFLocalizedKeyboardMappingTables
// 0x00A0 (FullSize[0x00D0] - InheritedSize[0x0030])
class UCFLocalizedKeyboardMappingTables : public UDataAsset
{
public:
	TMap<CFramework_ECFKeyboardLayoutType, class UDataTable*> UILocalizedKeyboardMappingTable_Layout;                    // 0x0030(0x0050) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TMap<CFramework_ECFKeyboardLocaleType, class UDataTable*> UILocalizedKeyboardMappingTable_Locale;                    // 0x0080(0x0050) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFLocalizedKeyboardMappingTables");
		return ptr;
	}



};

// Class CFramework.CFKeyResourceMappingData
// 0x0050 (FullSize[0x0080] - InheritedSize[0x0030])
class UCFKeyResourceMappingData : public UDataAsset
{
public:
	TMap<struct FName, struct FCFKeyResourceMapping>   MappingTable;                                              // 0x0030(0x0050) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFKeyResourceMappingData");
		return ptr;
	}



};

// Class CFramework.CFUIUtil
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UCFUIUtil : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFUIUtil");
		return ptr;
	}



	void STATIC_SetNumberTextureTiling(class UImage* ImageIns, int TilingNo);
};

// Class CFramework.CFUIWidgetPathAnimManager
// 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
class UCFUIWidgetPathAnimManager : public UObject
{
public:
	TArray<struct FCFUIWidgetPathAnimationController>  m_controllers;                                             // 0x0028(0x0010) (ZeroConstructor, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFUIWidgetPathAnimManager");
		return ptr;
	}



	void RegisterPathAnimation(class UWidget* inTarget, const struct FCFUIWidgetPathAnimationParam& InParam);
	void InterruptPathAnimation(class UWidget* inTarget);
	float GetCurrentAnimTime(class UWidget* inTarget);
};

// Class CFramework.CFUIXcmnMultiLineText
// 0x01D0 (FullSize[0x0540] - InheritedSize[0x0370])
class UCFUIXcmnMultiLineText : public UCFUIUserWidget
{
public:
	struct FVector2D                                   FitBoxMinSize;                                             // 0x0370(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bEnableScrollText;                                         // 0x0378(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_AKNN[0x3];                                     // 0x0379(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	CFramework_ECFUIScrollDirection                    ScrollDirection;                                           // 0x037C(0x0001) ELEMENT_SIZE_MISMATCH (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_13FR[0x3];                                     // 0x0379(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	float                                              ScrollPnlSizeX;                                            // 0x0380(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              ScrollSpeed;                                               // 0x0384(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              ScrollWaitMs;                                              // 0x0388(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              ScrollTextGap;                                             // 0x038C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              ScrollNonBlurValue;                                        // 0x0390(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              ScrollBlurValue;                                           // 0x0394(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              ScrollBlurPixel;                                           // 0x0398(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bDisableBlurOffset;                                        // 0x039C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bEnableFitText;                                            // 0x039D(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bOnlyFitX;                                                 // 0x039E(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_G9LS[0x1];                                     // 0x039F(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              FitTextBoxSizeX;                                           // 0x03A0(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bEnableRuby;                                               // 0x03A4(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bRubyTextAutoSize;                                         // 0x03A5(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_WKOS[0x2];                                     // 0x03A6(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              RubyTextAutoSizeRatio;                                     // 0x03A8(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              RubyTextSize;                                              // 0x03AC(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              ForceLineHeightPercentage;                                 // 0x03B0(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              RubyTextAdjustOffsetY;                                     // 0x03B4(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              RubyExBtnTextAdjustOffsetY;                                // 0x03B8(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                RubyDisplayMax;                                            // 0x03BC(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              ColorTagSpaceBase;                                         // 0x03C0(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bSelfChkEnScroll;                                          // 0x03C4(0x0001) (Edit, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bSelfChkEnFitBox;                                          // 0x03C5(0x0001) (Edit, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bSelfChkEnRuby;                                            // 0x03C6(0x0001) (Edit, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bSelfChkEnWrapText;                                        // 0x03C7(0x0001) (Edit, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bDrawFitBoxArea;                                           // 0x03C8(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bDrawScrollArea;                                           // 0x03C9(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bDrawFitTextArea;                                          // 0x03CA(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_33NI[0x1];                                     // 0x03CB(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector2D                                   DrawFitBoxSize;                                            // 0x03CC(0x0008) (Edit, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_GMMP[0x4];                                     // 0x03D4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     BtnTagKeyword;                                             // 0x03D8(0x0010) (Edit, ZeroConstructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FCFUITagReplaceInfo>                 KeyboardAndMouseReplaceInfo;                               // 0x03E8(0x0010) (Edit, ZeroConstructor, AdvancedDisplay, Protected, NativeAccessSpecifierProtected)
	struct FText                                       CFMText;                                                   // 0x03F8(0x0018) (Edit, Protected, NativeAccessSpecifierProtected)
	class UObject*                                     CFFontMaterial;                                            // 0x0410(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bCFMEnableBold;                                            // 0x0418(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_BVLQ[0x3];                                     // 0x0419(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                CFMTextSize;                                               // 0x041C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FLinearColor                                CFMColor;                                                  // 0x0420(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TEnumAsByte<Slate_ETextJustify>                    CFMJustification;                                          // 0x0430(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_2N24[0x3];                                     // 0x0431(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              CFLineHeightPercentage;                                    // 0x0434(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bCFMEnableOutline;                                         // 0x0438(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_21I3[0x3];                                     // 0x0439(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FLinearColor                                CFMOutlineColor;                                           // 0x043C(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              CFMOutlineSize;                                            // 0x044C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UObject*                                     CFMOutlineMaterial;                                        // 0x0450(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              CFMMinDisplayArea;                                         // 0x0458(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              CFMMinWrapTextAt;                                          // 0x045C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bCFMAutoWrapText;                                          // 0x0460(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_0RB4[0x3];                                     // 0x0461(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              CFMWrapTextAt;                                             // 0x0464(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bCFMNonFontSizeFixedMode;                                  // 0x0468(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_T5EJ[0x7];                                     // 0x0469(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class URetainerBox*                                WL_Pnl_Mask;                                               // 0x0470(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCanvasPanel*                                WL_PnlTextFrame;                                           // 0x0478(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCanvasPanelSlot*                            WL_PnlTextFrameSlot;                                       // 0x0480(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCanvasPanel*                                WL_PnlFitAll;                                              // 0x0488(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCanvasPanel*                                WL_PnlFitWrapMain;                                         // 0x0490(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCanvasPanelSlot*                            WL_PnlFitWrapMainSlot;                                     // 0x0498(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCanvasPanel*                                WL_PnlFitWrapSub;                                          // 0x04A0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCanvasPanelSlot*                            WL_PnlFitWrapSubSlot;                                      // 0x04A8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCFUIMultiLineTextBox*                       WL_MainText;                                               // 0x04B0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCanvasPanelSlot*                            WL_MainTextSlot;                                           // 0x04B8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCFExtendRichTextBlock*                      WL_ExBtnMainText;                                          // 0x04C0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCanvasPanelSlot*                            WL_ExBtnMainTextSlot;                                      // 0x04C8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCFUIMultiLineTextBox*                       WL_SubText;                                                // 0x04D0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCanvasPanelSlot*                            WL_SubTextSlot;                                            // 0x04D8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCFExtendRichTextBlock*                      WL_ExBtnSubText;                                           // 0x04E0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCanvasPanelSlot*                            WL_ExBtnSubTextSlot;                                       // 0x04E8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UImage*                                      WL_DebugWrapArea;                                          // 0x04F0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UImage*                                      WL_DebugValidArea;                                         // 0x04F8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FCFUIRubyInfo>                       RubyInfoArray;                                             // 0x0500(0x0010) (ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	class UCFUIMultiLineTextBox*                       WL_WorkText;                                               // 0x0510(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCFExtendRichTextBlock*                      WL_WorkTextEx;                                             // 0x0518(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_7GU4[0x20];                                    // 0x0520(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFUIXcmnMultiLineText");
		return ptr;
	}



	void SetText(const struct FText& InText);
	struct FText GetText();
	void AdaptTextSetting();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
