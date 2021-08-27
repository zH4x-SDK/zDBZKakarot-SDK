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

// Class CFramework.CFHUD
// 0x00B8 (0x04E0 - 0x0428)
class ACFHUD : public AHUD
{
public:
	unsigned char                                      UnknownData00[0xB8];                                      // 0x0428(0x00B8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFHUD");
		return ptr;
	}

};


// Class CFramework.CFGameInstance
// 0x01F8 (0x0298 - 0x00A0)
class UCFGameInstance : public UGameInstance
{
public:
	unsigned char                                      UnknownData00[0x1F8];                                     // 0x00A0(0x01F8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFGameInstance");
		return ptr;
	}

};


// Class CFramework.CFUIUserWidget
// 0x0168 (0x0370 - 0x0208)
class UCFUIUserWidget : public UUserWidget
{
public:
	unsigned char                                      UnknownData00[0x168];                                     // 0x0208(0x0168) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFUIUserWidget");
		return ptr;
	}

};


// Class CFramework.CFInputComponent
// 0x0008 (0x0190 - 0x0188)
class UCFInputComponent : public UInputComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0188(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFInputComponent");
		return ptr;
	}

};


// Class CFramework.CFDynamicAssignInputComponent
// 0x0058 (0x01E8 - 0x0190)
class UCFDynamicAssignInputComponent : public UCFInputComponent
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0190(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFDynamicAssignInputComponent");
		return ptr;
	}

};


// Class CFramework.CFObject
// 0x0008 (0x0030 - 0x0028)
class UCFObject : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFObject");
		return ptr;
	}

};


// Class CFramework.CFGameState
// 0x0030 (0x03C8 - 0x0398)
class ACFGameState : public AGameState
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0398(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFGameState");
		return ptr;
	}

};


// Class CFramework.CFLevelManager
// 0x00A0 (0x03D8 - 0x0338)
class ACFLevelManager : public AActor
{
public:
	unsigned char                                      UnknownData00[0xA0];                                      // 0x0338(0x00A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFLevelManager");
		return ptr;
	}

};


// Class CFramework.CFActorComponent
// 0x0000 (0x0100 - 0x0100)
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
// 0x0000 (0x0100 - 0x0100)
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
// 0x0000 (0x0030 - 0x0030)
class UCFManagerObject : public UCFObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFManagerObject");
		return ptr;
	}

};


// Class CFramework.CFDebugMenuEventHandlerBool
// 0x0030 (0x0058 - 0x0028)
class UCFDebugMenuEventHandlerBool : public UObject
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0028(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFDebugMenuEventHandlerBool");
		return ptr;
	}


	void Set();
	void Get();
};


// Class CFramework.CFDebugMenuEventHandlerContentsFactory
// 0x0008 (0x0030 - 0x0028)
class UCFDebugMenuEventHandlerContentsFactory : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFDebugMenuEventHandlerContentsFactory");
		return ptr;
	}

};


// Class CFramework.CFDebugMenuEventHandlerTrigger
// 0x0010 (0x0038 - 0x0028)
class UCFDebugMenuEventHandlerTrigger : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFDebugMenuEventHandlerTrigger");
		return ptr;
	}


	void Exec();
};


// Class CFramework.CFDebugMenuHandler
// 0x00C0 (0x00E8 - 0x0028)
class UCFDebugMenuHandler : public UObject
{
public:
	unsigned char                                      UnknownData00[0xC0];                                      // 0x0028(0x00C0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFDebugMenuHandler");
		return ptr;
	}

};


// Class CFramework.CFHUDDebugNodeSelectorComponent
// 0x00E8 (0x01E8 - 0x0100)
class UCFHUDDebugNodeSelectorComponent : public UCFActorComponent
{
public:
	unsigned char                                      UnknownData00[0xD8];                                      // 0x0100(0x00D8) MISSED OFFSET
	class UCFInputComponent*                           Input;                                                    // 0x01D8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x01E0(0x0008) MISSED OFFSET

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
// 0x0020 (0x05B0 - 0x0590)
class UCFPushSolverShapeCapsule : public UCapsuleComponent
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0590(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFPushSolverShapeCapsule");
		return ptr;
	}

};


// Class CFramework.CFGameMode
// 0x0000 (0x0420 - 0x0420)
class ACFGameMode : public AGameMode
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFGameMode");
		return ptr;
	}

};


// Class CFramework.CFScene
// 0x0010 (0x0040 - 0x0030)
class UCFScene : public UCFObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFScene");
		return ptr;
	}

};


// Class CFramework.CFSceneChangeParamBase
// 0x0010 (0x0040 - 0x0030)
class UCFSceneChangeParamBase : public UCFObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFSceneChangeParamBase");
		return ptr;
	}

};


// Class CFramework.CFSceneChangeCommonCall
// 0x0000 (0x0030 - 0x0030)
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
// 0x0190 (0x01C0 - 0x0030)
class UCFSceneManager : public UCFManagerObject
{
public:
	unsigned char                                      UnknownData00[0x190];                                     // 0x0030(0x0190) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFSceneManager");
		return ptr;
	}

};


// Class CFramework.CFSingleton
// 0x0018 (0x0048 - 0x0030)
class UCFSingleton : public UCFObject
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0030(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFSingleton");
		return ptr;
	}

};


// Class CFramework.CFActivateInterface
// 0x0000 (0x0028 - 0x0028)
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
// 0x0008 (0x0340 - 0x0338)
class ACFActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0338(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFActor");
		return ptr;
	}

};


// Class CFramework.CFAsyncLoader
// 0x0040 (0x0068 - 0x0028)
class UCFAsyncLoader : public UObject
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0028(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFAsyncLoader");
		return ptr;
	}

};


// Class CFramework.CFCharacter
// 0x0010 (0x0760 - 0x0750)
class ACFCharacter : public ACharacter
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0750(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFCharacter");
		return ptr;
	}

};


// Class CFramework.CFDebugMenu
// 0x0208 (0x0410 - 0x0208)
class UCFDebugMenu : public UUserWidget
{
public:
	unsigned char                                      UnknownData00[0x208];                                     // 0x0208(0x0208) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFDebugMenu");
		return ptr;
	}

};


// Class CFramework.CFDebugMenuContent
// 0x0038 (0x0240 - 0x0208)
class UCFDebugMenuContent : public UUserWidget
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0208(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFDebugMenuContent");
		return ptr;
	}


	void OnPushedBP();
	void OnPoppedBP();
	void OnDeactivatedBP();
	void OnContentSelectedBP();
	void OnContentCanceledBP();
	void OnActivatedBP();
	void IsSelectedByKeyboard();
	void IsSelected();
	void IsActive();
	void GetTextColor();
	void GetTextBlock();
	void GetContentColor();
};


// Class CFramework.CFDebugMenuCategory
// 0x0028 (0x0268 - 0x0240)
class UCFDebugMenuCategory : public UCFDebugMenuContent
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0240(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFDebugMenuCategory");
		return ptr;
	}

};


// Class CFramework.CFDebugMenuList
// 0x0008 (0x0210 - 0x0208)
class UCFDebugMenuList : public UUserWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0208(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFDebugMenuList");
		return ptr;
	}


	void GetVerticalBox();
	void GetTextColor();
	void GetBackColor();
};


// Class CFramework.CFDebugMenuContentFolder
// 0x0010 (0x0250 - 0x0240)
class UCFDebugMenuContentFolder : public UCFDebugMenuContent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0240(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFDebugMenuContentFolder");
		return ptr;
	}

};


// Class CFramework.CFDebugMenuContentCheck
// 0x0000 (0x0240 - 0x0240)
class UCFDebugMenuContentCheck : public UCFDebugMenuContent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFDebugMenuContentCheck");
		return ptr;
	}


	void GetCheckBox();
};


// Class CFramework.CFDebugMenuContentNumeric
// 0x0010 (0x0250 - 0x0240)
class UCFDebugMenuContentNumeric : public UCFDebugMenuContent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0240(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFDebugMenuContentNumeric");
		return ptr;
	}


	void OnValueCommitted();
	void GetSpinBox();
};


// Class CFramework.CFDebugMenuContentText
// 0x0000 (0x0240 - 0x0240)
class UCFDebugMenuContentText : public UCFDebugMenuContent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFDebugMenuContentText");
		return ptr;
	}


	void OnTextCommitted(const struct FText& Text);
	void GetTextBox();
};


// Class CFramework.CFDebugMenuContentButton
// 0x0000 (0x0240 - 0x0240)
class UCFDebugMenuContentButton : public UCFDebugMenuContent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFDebugMenuContentButton");
		return ptr;
	}


	void GetButtonBox();
};


// Class CFramework.CFDebugMenuContentClass
// 0x0010 (0x0250 - 0x0240)
class UCFDebugMenuContentClass : public UCFDebugMenuContent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0240(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFDebugMenuContentClass");
		return ptr;
	}

};


// Class CFramework.CFDebugMenuConstructor
// 0x0040 (0x0068 - 0x0028)
class UCFDebugMenuConstructor : public UObject
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0028(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFDebugMenuConstructor");
		return ptr;
	}

};


// Class CFramework.CFDebugMenuEventHandlerFloat
// 0x0038 (0x0060 - 0x0028)
class UCFDebugMenuEventHandlerFloat : public UObject
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0028(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFDebugMenuEventHandlerFloat");
		return ptr;
	}


	void Set();
	void GetParam(struct FDebugMenuNumericParam* Param);
	void Get();
};


// Class CFramework.CFDebugMenuEventHandlerText
// 0x0038 (0x0060 - 0x0028)
class UCFDebugMenuEventHandlerText : public UObject
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0028(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFDebugMenuEventHandlerText");
		return ptr;
	}


	void Set(const struct FText& Text);
	void Get();
};


// Class CFramework.CFDebugMenuEventHandlerCombo
// 0x0030 (0x0058 - 0x0028)
class UCFDebugMenuEventHandlerCombo : public UObject
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0028(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFDebugMenuEventHandlerCombo");
		return ptr;
	}


	void Set();
	void Build();
};


// Class CFramework.CFDMLogSwitchEngine
// 0x0000 (0x0058 - 0x0058)
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
// 0x0000 (0x0058 - 0x0058)
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
// 0x0010 (0x0040 - 0x0030)
class UCFDebugMenuEventHandlerLog : public UCFDebugMenuEventHandlerContentsFactory
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFDebugMenuEventHandlerLog");
		return ptr;
	}

};


// Class CFramework.CFDMEH_ControlleObjects
// 0x0020 (0x0078 - 0x0058)
class UCFDMEH_ControlleObjects : public UCFDebugMenuEventHandlerBool
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0058(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFDMEH_ControlleObjects");
		return ptr;
	}

};


// Class CFramework.CFDMEH_ToggleTick
// 0x0000 (0x0078 - 0x0078)
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
// 0x0000 (0x0078 - 0x0078)
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
// 0x0000 (0x0078 - 0x0078)
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
// 0x0000 (0x0078 - 0x0078)
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
// 0x0030 (0x0060 - 0x0030)
class UCFDebugMenuEventHandlerBatch : public UCFDebugMenuEventHandlerContentsFactory
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0030(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFDebugMenuEventHandlerBatch");
		return ptr;
	}

};


// Class CFramework.CFDebugMenuEventHandlerExample
// 0x0030 (0x0060 - 0x0030)
class UCFDebugMenuEventHandlerExample : public UCFDebugMenuEventHandlerContentsFactory
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0030(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFDebugMenuEventHandlerExample");
		return ptr;
	}

};


// Class CFramework.CFDMTExample
// 0x0000 (0x0038 - 0x0038)
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
// 0x0000 (0x0058 - 0x0058)
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
// 0x0000 (0x0058 - 0x0058)
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
// 0x0008 (0x0038 - 0x0030)
class UCFDebugMenuEventHandlerCamera : public UCFDebugMenuEventHandlerContentsFactory
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0030(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFDebugMenuEventHandlerCamera");
		return ptr;
	}

};


// Class CFramework.DMBoolCharacterDispInfo
// 0x0000 (0x0058 - 0x0058)
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
// 0x0008 (0x0038 - 0x0030)
class UCFDebugMenuEventHandlerCharacter : public UCFDebugMenuEventHandlerContentsFactory
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0030(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFDebugMenuEventHandlerCharacter");
		return ptr;
	}

};


// Class CFramework.DMBoolDispSceneHierarchy
// 0x0000 (0x0058 - 0x0058)
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
// 0x0008 (0x0038 - 0x0030)
class UCFDebugMenuEventHandlerScene : public UCFDebugMenuEventHandlerContentsFactory
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0030(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFDebugMenuEventHandlerScene");
		return ptr;
	}

};


// Class CFramework.DMTriggerDispLevelStatus
// 0x0000 (0x0038 - 0x0038)
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
// 0x0008 (0x0038 - 0x0030)
class UCFDebugMenuEventHandlerLevel : public UCFDebugMenuEventHandlerContentsFactory
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0030(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFDebugMenuEventHandlerLevel");
		return ptr;
	}

};


// Class CFramework.DMDispLoadStatus
// 0x0030 (0x0088 - 0x0058)
class UDMDispLoadStatus : public UCFDebugMenuEventHandlerBool
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0058(0x0020) MISSED OFFSET
	class UCFInputComponent*                           Input;                                                    // 0x0078(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0080(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.DMDispLoadStatus");
		return ptr;
	}


	void Tick();
	void OnPressedRight();
	void OnPressedLeft();
	void OnDetachInput(class UObject* WorldContext);
	void OnAttachInput(class UObject* WorldContext);
};


// Class CFramework.CFDebugMenuEventHandlerLoad
// 0x0008 (0x0038 - 0x0030)
class UCFDebugMenuEventHandlerLoad : public UCFDebugMenuEventHandlerContentsFactory
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0030(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFDebugMenuEventHandlerLoad");
		return ptr;
	}

};


// Class CFramework.CFDebugTickableManager
// 0x0010 (0x0110 - 0x0100)
class UCFDebugTickableManager : public UCFManagerActorComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0100(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFDebugTickableManager");
		return ptr;
	}

};


// Class CFramework.CFDebugXmlSelector
// 0x0078 (0x00A8 - 0x0030)
class UCFDebugXmlSelector : public UCFObject
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0030(0x0030) MISSED OFFSET
	class UCFInputComponent*                           Input;                                                    // 0x0060(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x40];                                      // 0x0068(0x0040) MISSED OFFSET

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
// 0x0000 (0x0028 - 0x0028)
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
	void STATIC_IsEnable(class USkeletalMeshComponent* SkeletalMeshComponent);
	void STATIC_IsAllEnable();
};


// Class CFramework.CFExportDataAssetFromDataTable
// 0x0010 (0x0040 - 0x0030)
class UCFExportDataAssetFromDataTable : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFExportDataAssetFromDataTable");
		return ptr;
	}

};


// Class CFramework.CFExportFromDataTableActor
// 0x0010 (0x0348 - 0x0338)
class ACFExportFromDataTableActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0338(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFExportFromDataTableActor");
		return ptr;
	}

};


// Class CFramework.CFRichTextBlockNonExperimental
// 0x0298 (0x03B8 - 0x0120)
class UCFRichTextBlockNonExperimental : public UTextLayoutWidget
{
public:
	struct FText                                       Text;                                                     // 0x0120(0x0018) (Edit)
	unsigned char                                      UnknownData00[0x280];                                     // 0x0138(0x0280) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFRichTextBlockNonExperimental");
		return ptr;
	}

};


// Class CFramework.CFExtendRichTextBlock
// 0x0130 (0x04E8 - 0x03B8)
class UCFExtendRichTextBlock : public UCFRichTextBlockNonExperimental
{
public:
	unsigned char                                      UnknownData00[0x130];                                     // 0x03B8(0x0130) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFExtendRichTextBlock");
		return ptr;
	}

};


// Class CFramework.CFExtendRichTextBlockDecorator
// 0x0030 (0x0058 - 0x0028)
class UCFExtendRichTextBlockDecorator : public URichTextBlockDecorator
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0028(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFExtendRichTextBlockDecorator");
		return ptr;
	}

};


// Class CFramework.CFExtendRichTextIconData
// 0x0300 (0x0330 - 0x0030)
class UCFExtendRichTextIconData : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x300];                                     // 0x0030(0x0300) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFExtendRichTextIconData");
		return ptr;
	}

};


// Class CFramework.CFGameOperatingEnvironment
// 0x0000 (0x0028 - 0x0028)
class UCFGameOperatingEnvironment : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFGameOperatingEnvironment");
		return ptr;
	}


	void STATIC_IsConfirmAButton();
	void STATIC_GetReplaceLanguagePath();
	void STATIC_GetReplaceEnvironmentPath();
	void STATIC_GetRegionType();
	void STATIC_GetLanguageCode(unsigned char Type);
	void STATIC_GetLangType();
};


// Class CFramework.CFGameSpeedManager
// 0x0230 (0x0330 - 0x0100)
class UCFGameSpeedManager : public UCFManagerActorComponent
{
public:
	unsigned char                                      UnknownData00[0x230];                                     // 0x0100(0x0230) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFGameSpeedManager");
		return ptr;
	}

};


// Class CFramework.CFHUDDebugBackgroundComponent
// 0x0018 (0x0118 - 0x0100)
class UCFHUDDebugBackgroundComponent : public UCFActorComponent
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0100(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFHUDDebugBackgroundComponent");
		return ptr;
	}

};


// Class CFramework.CFHUDDebugDrawComponent
// 0x0060 (0x0160 - 0x0100)
class UCFHUDDebugDrawComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0100(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFHUDDebugDrawComponent");
		return ptr;
	}

};


// Class CFramework.CFDebugTextTestingActor
// 0x0018 (0x0358 - 0x0340)
class ACFDebugTextTestingActor : public ACFActor
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0340(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFDebugTextTestingActor");
		return ptr;
	}

};


// Class CFramework.CFHUDDebugDrawInterface
// 0x0000 (0x0028 - 0x0028)
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
// 0x0030 (0x0130 - 0x0100)
class UCFHUDDebugProgressBarComponent : public UCFActorComponent
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0100(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFHUDDebugProgressBarComponent");
		return ptr;
	}

};


// Class CFramework.CFHUDDebugSectionDrawComponent
// 0x0070 (0x0170 - 0x0100)
class UCFHUDDebugSectionDrawComponent : public UCFActorComponent
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x0100(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFHUDDebugSectionDrawComponent");
		return ptr;
	}

};


// Class CFramework.CFHUDManager
// 0x0040 (0x0068 - 0x0028)
class UCFHUDManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0028(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFHUDManager");
		return ptr;
	}

};


// Class CFramework.CFSerializedInterface
// 0x0000 (0x0028 - 0x0028)
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
// 0x0018 (0x0048 - 0x0030)
class UCFLocalizeManager : public UCFManagerObject
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0030(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFLocalizeManager");
		return ptr;
	}

};


// Class CFramework.CFManagerComponent
// 0x0000 (0x0100 - 0x0100)
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
// 0x0098 (0x00C0 - 0x0028)
class UCFMessageManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x98];                                      // 0x0028(0x0098) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFMessageManager");
		return ptr;
	}

};


// Class CFramework.CFParticleManager
// 0x00A0 (0x01A0 - 0x0100)
class UCFParticleManager : public UCFActorComponent
{
public:
	unsigned char                                      UnknownData00[0xA0];                                      // 0x0100(0x00A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFParticleManager");
		return ptr;
	}

};


// Class CFramework.CFPauseManager
// 0x0280 (0x0380 - 0x0100)
class UCFPauseManager : public UCFManagerActorComponent
{
public:
	unsigned char                                      UnknownData00[0x280];                                     // 0x0100(0x0280) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFPauseManager");
		return ptr;
	}

};


// Class CFramework.CFPawn
// 0x0010 (0x03A8 - 0x0398)
class ACFPawn : public APawn
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0398(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFPawn");
		return ptr;
	}

};


// Class CFramework.CFPlayerController
// 0x0000 (0x0688 - 0x0688)
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
// 0x0020 (0x0228 - 0x0208)
class UCFPropertyEditorClass : public UUserWidget
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0208(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFPropertyEditorClass");
		return ptr;
	}

};


// Class CFramework.CFPushSolver
// 0x0028 (0x0058 - 0x0030)
class UCFPushSolver : public UCFObject
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0030(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFPushSolver");
		return ptr;
	}

};


// Class CFramework.CFPushSolverComponent
// 0x0008 (0x0108 - 0x0100)
class UCFPushSolverComponent : public UCFActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0100(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFPushSolverComponent");
		return ptr;
	}

};


// Class CFramework.CFPushSolverShapeBox
// 0x0030 (0x05C0 - 0x0590)
class UCFPushSolverShapeBox : public UBoxComponent
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0590(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFPushSolverShapeBox");
		return ptr;
	}

};


// Class CFramework.CFPushSolverShapeInterface
// 0x0000 (0x0028 - 0x0028)
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
// 0x0020 (0x05B0 - 0x0590)
class UCFPushSolverShapeSphere : public USphereComponent
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0590(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFPushSolverShapeSphere");
		return ptr;
	}

};


// Class CFramework.CFrameworkGameMode
// 0x0000 (0x0420 - 0x0420)
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
// 0x00F8 (0x0460 - 0x0368)
class UCFRegistFontAtlasText : public URichTextBlock
{
public:
	unsigned char                                      UnknownData00[0xF8];                                      // 0x0368(0x00F8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFRegistFontAtlasText");
		return ptr;
	}

};


// Class CFramework.CFRichTextBlockDecorator
// 0x0008 (0x0030 - 0x0028)
class UCFRichTextBlockDecorator : public URichTextBlockDecorator
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFRichTextBlockDecorator");
		return ptr;
	}

};


// Class CFramework.CFSceneAssignment
// 0x0028 (0x0058 - 0x0030)
class UCFSceneAssignment : public UCFObject
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0030(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFSceneAssignment");
		return ptr;
	}

};


// Class CFramework.CFSceneTemplate
// 0x0048 (0x0088 - 0x0040)
class UCFSceneTemplate : public UCFScene
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0040(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFSceneTemplate");
		return ptr;
	}

};


// Class CFramework.CFSceneTickExecuter
// 0x0050 (0x0150 - 0x0100)
class UCFSceneTickExecuter : public UCFManagerActorComponent
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0100(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFSceneTickExecuter");
		return ptr;
	}

};


// Class CFramework.CFSceneTickExecuterManager
// 0x0110 (0x0210 - 0x0100)
class UCFSceneTickExecuterManager : public UCFManagerActorComponent
{
public:
	unsigned char                                      UnknownData00[0x110];                                     // 0x0100(0x0110) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFSceneTickExecuterManager");
		return ptr;
	}

};


// Class CFramework.CFSoundADX
// 0x0868 (0x0898 - 0x0030)
class UCFSoundADX : public UCFObject
{
public:
	unsigned char                                      UnknownData00[0x868];                                     // 0x0030(0x0868) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFSoundADX");
		return ptr;
	}

};


// Class CFramework.CFStateMachine
// 0x0000 (0x0028 - 0x0028)
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
// 0x0008 (0x0038 - 0x0030)
class UCFTickObject : public UCFObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0030(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFTickObject");
		return ptr;
	}

};


// Class CFramework.CFTickObjectUpdater
// 0x0050 (0x0150 - 0x0100)
class UCFTickObjectUpdater : public UCFManagerActorComponent
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0100(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFTickObjectUpdater");
		return ptr;
	}

};


// Class CFramework.CFUILoader
// 0x00B8 (0x00E0 - 0x0028)
class UCFUILoader : public UObject
{
public:
	unsigned char                                      UnknownData00[0xB8];                                      // 0x0028(0x00B8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFUILoader");
		return ptr;
	}

};


// Class CFramework.CFUIMultiLineTextBox
// 0x02E0 (0x0400 - 0x0120)
class UCFUIMultiLineTextBox : public UTextLayoutWidget
{
public:
	struct FText                                       Text;                                                     // 0x0120(0x0018) (Edit)
	unsigned char                                      UnknownData00[0x2C8];                                     // 0x0138(0x02C8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFUIMultiLineTextBox");
		return ptr;
	}

};


// Class CFramework.CFLocalizedKeyboardMappingTables
// 0x00A0 (0x00D0 - 0x0030)
class UCFLocalizedKeyboardMappingTables : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0xA0];                                      // 0x0030(0x00A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFLocalizedKeyboardMappingTables");
		return ptr;
	}

};


// Class CFramework.CFKeyResourceMappingData
// 0x0050 (0x0080 - 0x0030)
class UCFKeyResourceMappingData : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0030(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFKeyResourceMappingData");
		return ptr;
	}

};


// Class CFramework.CFUIUtil
// 0x0000 (0x0028 - 0x0028)
class UCFUIUtil : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFUIUtil");
		return ptr;
	}


	void STATIC_SetNumberTextureTiling();
};


// Class CFramework.CFUIWidgetPathAnimManager
// 0x0010 (0x0038 - 0x0028)
class UCFUIWidgetPathAnimManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFUIWidgetPathAnimManager");
		return ptr;
	}

};


// Class CFramework.CFUIXcmnMultiLineText
// 0x01D0 (0x0540 - 0x0370)
class UCFUIXcmnMultiLineText : public UCFUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x1D0];                                     // 0x0370(0x01D0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFUIXcmnMultiLineText");
		return ptr;
	}

};


// Class CFramework.CFDebugMenuContentCombo
// 0x0000 (0x0240 - 0x0240)
class UCFDebugMenuContentCombo : public UCFDebugMenuContent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFDebugMenuContentCombo");
		return ptr;
	}


	void GetComboBox();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
