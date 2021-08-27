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

// Class OnlineSubsystemUtils.IpConnection
// 0x0060 (0x1978 - 0x1918)
class UIpConnection : public UNetConnection
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x1918(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.IpConnection");
		return ptr;
	}

};


// Class OnlineSubsystemUtils.IpNetDriver
// 0x0040 (0x06D8 - 0x0698)
class UIpNetDriver : public UNetDriver
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0698(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.IpNetDriver");
		return ptr;
	}

};


// Class OnlineSubsystemUtils.AchievementBlueprintLibrary
// 0x0000 (0x0028 - 0x0028)
class UAchievementBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.AchievementBlueprintLibrary");
		return ptr;
	}


	void STATIC_GetCachedAchievementProgress();
	void STATIC_GetCachedAchievementDescription();
};


// Class OnlineSubsystemUtils.AchievementQueryCallbackProxy
// 0x0038 (0x0060 - 0x0028)
class UAchievementQueryCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0028(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.AchievementQueryCallbackProxy");
		return ptr;
	}

};


// Class OnlineSubsystemUtils.AchievementWriteCallbackProxy
// 0x0050 (0x0078 - 0x0028)
class UAchievementWriteCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0028(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.AchievementWriteCallbackProxy");
		return ptr;
	}

};


// Class OnlineSubsystemUtils.ConnectionCallbackProxy
// 0x0048 (0x0070 - 0x0028)
class UConnectionCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0028(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.ConnectionCallbackProxy");
		return ptr;
	}

};


// Class OnlineSubsystemUtils.CreateSessionCallbackProxy
// 0x0068 (0x0090 - 0x0028)
class UCreateSessionCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	unsigned char                                      UnknownData00[0x68];                                      // 0x0028(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.CreateSessionCallbackProxy");
		return ptr;
	}

};


// Class OnlineSubsystemUtils.DestroySessionCallbackProxy
// 0x0048 (0x0070 - 0x0028)
class UDestroySessionCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0028(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.DestroySessionCallbackProxy");
		return ptr;
	}

};


// Class OnlineSubsystemUtils.EndMatchCallbackProxy
// 0x0050 (0x0078 - 0x0028)
class UEndMatchCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0028(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.EndMatchCallbackProxy");
		return ptr;
	}

};


// Class OnlineSubsystemUtils.EndTurnCallbackProxy
// 0x0048 (0x0070 - 0x0028)
class UEndTurnCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0028(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.EndTurnCallbackProxy");
		return ptr;
	}

};


// Class OnlineSubsystemUtils.FindSessionsCallbackProxy
// 0x0060 (0x0088 - 0x0028)
class UFindSessionsCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0028(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.FindSessionsCallbackProxy");
		return ptr;
	}

};


// Class OnlineSubsystemUtils.FindTurnBasedMatchCallbackProxy
// 0x0058 (0x0080 - 0x0028)
class UFindTurnBasedMatchCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0028(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.FindTurnBasedMatchCallbackProxy");
		return ptr;
	}

};


// Class OnlineSubsystemUtils.InAppPurchaseCallbackProxy
// 0x0058 (0x0080 - 0x0028)
class UInAppPurchaseCallbackProxy : public UObject
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0028(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.InAppPurchaseCallbackProxy");
		return ptr;
	}

};


// Class OnlineSubsystemUtils.InAppPurchaseQueryCallbackProxy
// 0x0068 (0x0090 - 0x0028)
class UInAppPurchaseQueryCallbackProxy : public UObject
{
public:
	unsigned char                                      UnknownData00[0x68];                                      // 0x0028(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.InAppPurchaseQueryCallbackProxy");
		return ptr;
	}

};


// Class OnlineSubsystemUtils.InAppPurchaseRestoreCallbackProxy
// 0x0068 (0x0090 - 0x0028)
class UInAppPurchaseRestoreCallbackProxy : public UObject
{
public:
	unsigned char                                      UnknownData00[0x68];                                      // 0x0028(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.InAppPurchaseRestoreCallbackProxy");
		return ptr;
	}

};


// Class OnlineSubsystemUtils.JoinSessionCallbackProxy
// 0x0100 (0x0128 - 0x0028)
class UJoinSessionCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	unsigned char                                      UnknownData00[0x100];                                     // 0x0028(0x0100) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.JoinSessionCallbackProxy");
		return ptr;
	}

};


// Class OnlineSubsystemUtils.LeaderboardBlueprintLibrary
// 0x0000 (0x0028 - 0x0028)
class ULeaderboardBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.LeaderboardBlueprintLibrary");
		return ptr;
	}


	void STATIC_WriteLeaderboardInteger(class APlayerController* PlayerController);
};


// Class OnlineSubsystemUtils.LeaderboardFlushCallbackProxy
// 0x0040 (0x0068 - 0x0028)
class ULeaderboardFlushCallbackProxy : public UObject
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0028(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.LeaderboardFlushCallbackProxy");
		return ptr;
	}

};


// Class OnlineSubsystemUtils.LeaderboardQueryCallbackProxy
// 0x0070 (0x0098 - 0x0028)
class ULeaderboardQueryCallbackProxy : public UObject
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x0028(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.LeaderboardQueryCallbackProxy");
		return ptr;
	}

};


// Class OnlineSubsystemUtils.LogoutCallbackProxy
// 0x0038 (0x0068 - 0x0030)
class ULogoutCallbackProxy : public UBlueprintAsyncActionBase
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0030(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.LogoutCallbackProxy");
		return ptr;
	}

};


// Class OnlineSubsystemUtils.OnlineBeacon
// 0x0028 (0x0360 - 0x0338)
class AOnlineBeacon : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0338(0x0008) MISSED OFFSET
	float                                              BeaconConnectionInitialTimeout;                           // 0x0340(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              BeaconConnectionTimeout;                                  // 0x0344(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	class UNetDriver*                                  NetDriver;                                                // 0x0348(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0350(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.OnlineBeacon");
		return ptr;
	}

};


// Class OnlineSubsystemUtils.OnlineBeaconClient
// 0x0050 (0x03B0 - 0x0360)
class AOnlineBeaconClient : public AOnlineBeacon
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0360(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.OnlineBeaconClient");
		return ptr;
	}

};


// Class OnlineSubsystemUtils.OnlineBeaconHost
// 0x00B8 (0x0418 - 0x0360)
class AOnlineBeaconHost : public AOnlineBeacon
{
public:
	int                                                ListenPort;                                               // 0x0360(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0xB4];                                      // 0x0364(0x00B4) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.OnlineBeaconHost");
		return ptr;
	}

};


// Class OnlineSubsystemUtils.OnlineBeaconHostObject
// 0x0028 (0x0360 - 0x0338)
class AOnlineBeaconHostObject : public AActor
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0338(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.OnlineBeaconHostObject");
		return ptr;
	}

};


// Class OnlineSubsystemUtils.OnlineEngineInterfaceImpl
// 0x0100 (0x0128 - 0x0028)
class UOnlineEngineInterfaceImpl : public UOnlineEngineInterface
{
public:
	unsigned char                                      UnknownData00[0x100];                                     // 0x0028(0x0100) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.OnlineEngineInterfaceImpl");
		return ptr;
	}

};


// Class OnlineSubsystemUtils.OnlinePIESettings
// 0x0018 (0x0050 - 0x0038)
class UOnlinePIESettings : public UDeveloperSettings
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0038(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.OnlinePIESettings");
		return ptr;
	}

};


// Class OnlineSubsystemUtils.OnlineSessionClient
// 0x0168 (0x0190 - 0x0028)
class UOnlineSessionClient : public UOnlineSession
{
public:
	unsigned char                                      UnknownData00[0x168];                                     // 0x0028(0x0168) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.OnlineSessionClient");
		return ptr;
	}

};


// Class OnlineSubsystemUtils.PartyBeaconClient
// 0x00B0 (0x0460 - 0x03B0)
class APartyBeaconClient : public AOnlineBeaconClient
{
public:
	unsigned char                                      UnknownData00[0xB0];                                      // 0x03B0(0x00B0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.PartyBeaconClient");
		return ptr;
	}

};


// Class OnlineSubsystemUtils.PartyBeaconHost
// 0x0068 (0x03C8 - 0x0360)
class APartyBeaconHost : public AOnlineBeaconHostObject
{
public:
	class UPartyBeaconState*                           State;                                                    // 0x0360(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x50];                                      // 0x0368(0x0050) MISSED OFFSET
	bool                                               bLogoutOnSessionTimeout;                                  // 0x03B8(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x03B9(0x0003) MISSED OFFSET
	float                                              SessionTimeoutSecs;                                       // 0x03BC(0x0004) (ZeroConstructor, Transient, Config, IsPlainOldData)
	float                                              TravelSessionTimeoutSecs;                                 // 0x03C0(0x0004) (ZeroConstructor, Transient, Config, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x03C4(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.PartyBeaconHost");
		return ptr;
	}

};


// Class OnlineSubsystemUtils.PartyBeaconState
// 0x0050 (0x0078 - 0x0028)
class UPartyBeaconState : public UObject
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0028(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.PartyBeaconState");
		return ptr;
	}

};


// Class OnlineSubsystemUtils.QuitMatchCallbackProxy
// 0x0048 (0x0070 - 0x0028)
class UQuitMatchCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0028(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.QuitMatchCallbackProxy");
		return ptr;
	}

};


// Class OnlineSubsystemUtils.ShowLoginUICallbackProxy
// 0x0030 (0x0060 - 0x0030)
class UShowLoginUICallbackProxy : public UBlueprintAsyncActionBase
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0030(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.ShowLoginUICallbackProxy");
		return ptr;
	}

};


// Class OnlineSubsystemUtils.TestBeaconClient
// 0x0000 (0x03B0 - 0x03B0)
class ATestBeaconClient : public AOnlineBeaconClient
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.TestBeaconClient");
		return ptr;
	}


	void ServerPong();
	void ClientPing();
};


// Class OnlineSubsystemUtils.TestBeaconHost
// 0x0000 (0x0360 - 0x0360)
class ATestBeaconHost : public AOnlineBeaconHostObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.TestBeaconHost");
		return ptr;
	}

};


// Class OnlineSubsystemUtils.TurnBasedBlueprintLibrary
// 0x0000 (0x0028 - 0x0028)
class UTurnBasedBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.TurnBasedBlueprintLibrary");
		return ptr;
	}


	void STATIC_RegisterTurnBasedMatchInterfaceObject();
	void STATIC_GetPlayerDisplayName();
	void STATIC_GetMyPlayerIndex();
	void STATIC_GetIsMyTurn();
};


// Class OnlineSubsystemUtils.VoipListenerSynthComponent
// 0x0010 (0x05E0 - 0x05D0)
class UVoipListenerSynthComponent : public USynthComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x05D0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.VoipListenerSynthComponent");
		return ptr;
	}


	void IsIdling();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
