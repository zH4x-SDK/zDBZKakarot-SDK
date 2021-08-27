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

// ScriptStruct ATExt.LoadingTalkAnimAsset
// 0x0028
struct FLoadingTalkAnimAsset
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
};

// ScriptStruct ATExt.SkillCameraInfo
// 0x002C
struct FSkillCameraInfo
{
	unsigned char                                      UnknownData00[0x2C];                                      // 0x0000(0x002C) MISSED OFFSET
};

// ScriptStruct ATExt.ATABPChangerRequest
// 0x0010
struct FATABPChangerRequest
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct ATExt.LoopWearEffectInfo
// 0x0018
struct FLoopWearEffectInfo
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct ATExt.SoulEmTableInfo
// 0x0010
struct FSoulEmTableInfo
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct ATExt.CommunitySkillAdultList
// 0x0018 (0x0020 - 0x0008)
struct FCommunitySkillAdultList : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0008(0x0018) MISSED OFFSET
};

// ScriptStruct ATExt.CommunitySkillZFighterList
// 0x0108 (0x0110 - 0x0008)
struct FCommunitySkillZFighterList : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x108];                                     // 0x0008(0x0108) MISSED OFFSET
};

// ScriptStruct ATExt.CommunitySkillZFighter
// 0x0010 (0x0018 - 0x0008)
struct FCommunitySkillZFighter : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0008(0x0010) MISSED OFFSET
};

// ScriptStruct ATExt.CommunitySkillTableList
// 0x00B0 (0x00B8 - 0x0008)
struct FCommunitySkillTableList : public FTableRowBase
{
	unsigned char                                      UnknownData00[0xB0];                                      // 0x0008(0x00B0) MISSED OFFSET
};

// ScriptStruct ATExt.CommunitySkillTable
// 0x0008 (0x0010 - 0x0008)
struct FCommunitySkillTable : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct ATExt.CommunitySkillAdventureParam
// 0x0008 (0x0010 - 0x0008)
struct FCommunitySkillAdventureParam : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct ATExt.CommunitySkillAdventureList
// 0x0110 (0x0118 - 0x0008)
struct FCommunitySkillAdventureList : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x110];                                     // 0x0008(0x0110) MISSED OFFSET
};

// ScriptStruct ATExt.CommunitySkillAdventure
// 0x0010 (0x0018 - 0x0008)
struct FCommunitySkillAdventure : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0008(0x0010) MISSED OFFSET
};

// ScriptStruct ATExt.CommunitySkillCookingList
// 0x0160 (0x0168 - 0x0008)
struct FCommunitySkillCookingList : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x160];                                     // 0x0008(0x0160) MISSED OFFSET
};

// ScriptStruct ATExt.CommunitySkillCooking
// 0x0018 (0x0020 - 0x0008)
struct FCommunitySkillCooking : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0008(0x0018) MISSED OFFSET
};

// ScriptStruct ATExt.CommunityBoardLinkInfo
// 0x00E0 (0x00E8 - 0x0008)
struct FCommunityBoardLinkInfo : public FTableRowBase
{
	unsigned char                                      UnknownData00[0xE0];                                      // 0x0008(0x00E0) MISSED OFFSET
};

// ScriptStruct ATExt.CommunityBoardLayout
// 0x0100 (0x0108 - 0x0008)
struct FCommunityBoardLayout : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x100];                                     // 0x0008(0x0100) MISSED OFFSET
};

// ScriptStruct ATExt.LinkBonusParam
// 0x0050 (0x0058 - 0x0008)
struct FLinkBonusParam : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x50];                                      // 0x0008(0x0050) MISSED OFFSET
};

// ScriptStruct ATExt.CommunityCategoryParam
// 0x0098 (0x00A0 - 0x0008)
struct FCommunityCategoryParam : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x98];                                      // 0x0008(0x0098) MISSED OFFSET
};

// ScriptStruct ATExt.CommunitySkillParam
// 0x0028 (0x0030 - 0x0008)
struct FCommunitySkillParam : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0008(0x0028) MISSED OFFSET
};

// ScriptStruct ATExt.SoulEmCharacterParam
// 0x00F0 (0x00F8 - 0x0008)
struct FSoulEmCharacterParam : public FTableRowBase
{
	unsigned char                                      UnknownData00[0xF0];                                      // 0x0008(0x00F0) MISSED OFFSET
};

// ScriptStruct ATExt.SoulEmItemPreference
// 0x0068 (0x0070 - 0x0008)
struct FSoulEmItemPreference : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x68];                                      // 0x0008(0x0068) MISSED OFFSET
};

// ScriptStruct ATExt.SoulEmData
// 0x004C
struct FSoulEmData
{
	unsigned char                                      UnknownData00[0x4C];                                      // 0x0000(0x004C) MISSED OFFSET
};

// ScriptStruct ATExt.ATDataAssetCarParameterAreaInfo
// 0x0018
struct FATDataAssetCarParameterAreaInfo
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct ATExt.ReferenceToTalkAnimAssetInstance
// 0x0008
struct FReferenceToTalkAnimAssetInstance
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct ATExt.ATDataAssetTalkAnimationInfo
// 0x0030
struct FATDataAssetTalkAnimationInfo
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0000(0x0030) MISSED OFFSET
};

// ScriptStruct ATExt.MonitoringCommon
// 0x03F8
struct FMonitoringCommon
{
	unsigned char                                      UnknownData00[0x3F8];                                     // 0x0000(0x03F8) MISSED OFFSET
};

// ScriptStruct ATExt.MonitoringSavePack
// 0x0498
struct FMonitoringSavePack
{
	struct FMonitoringCommon                           MonitoringCommon;                                         // 0x0000(0x03F8)
	unsigned char                                      UnknownData00[0x50];                                      // 0x03F8(0x0050) UNKNOWN PROPERTY: MapProperty ATExt.MonitoringSavePack.MonitoringProgress
	unsigned char                                      UnknownData01[0x50];                                      // 0x0448(0x0050) UNKNOWN PROPERTY: MapProperty ATExt.MonitoringSavePack.MonitoringArea
};

// ScriptStruct ATExt.MonitoringArea
// 0x0080
struct FMonitoringArea
{
	unsigned char                                      UnknownData00[0x80];                                      // 0x0000(0x0080) MISSED OFFSET
};

// ScriptStruct ATExt.MonitoringProgress
// 0x00B8
struct FMonitoringProgress
{
	unsigned char                                      UnknownData00[0xB8];                                      // 0x0000(0x00B8) MISSED OFFSET
};

// ScriptStruct ATExt.ATSaveGameIndividualCharacter
// 0x0288
struct FATSaveGameIndividualCharacter
{
	unsigned char                                      UnknownData00[0x288];                                     // 0x0000(0x0288) MISSED OFFSET
};

// ScriptStruct ATExt.ATSaveCharacterBoost
// 0x0018
struct FATSaveCharacterBoost
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct ATExt.ATSaveCharacterStatus
// 0x0020
struct FATSaveCharacterStatus
{
	int                                                Level;                                                    // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	int64_t                                            Exp;                                                      // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0010(0x0010) MISSED OFFSET
};

// ScriptStruct ATExt.ATSaveCharacterBuff
// 0x0010
struct FATSaveCharacterBuff
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct ATExt.MonitoringSlotSkill
// 0x00A0
struct FMonitoringSlotSkill
{
	unsigned char                                      UnknownData00[0xA0];                                      // 0x0000(0x00A0) MISSED OFFSET
};

// ScriptStruct ATExt.ATSaveGameArea
// 0x0064
struct FATSaveGameArea
{
	unsigned char                                      UnknownData00[0x64];                                      // 0x0000(0x0064) MISSED OFFSET
};

// ScriptStruct ATExt.ATSaveGameAtrocious
// 0x00E0
struct FATSaveGameAtrocious
{
	unsigned char                                      UnknownData00[0xE0];                                      // 0x0000(0x00E0) MISSED OFFSET
};

// ScriptStruct ATExt.ATSaveGameAtrociousDefeatParty
// 0x0010
struct FATSaveGameAtrociousDefeatParty
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct ATExt.ATSaveGameCharacter
// 0x17B88
struct FATSaveGameCharacter
{
	unsigned char                                      UnknownData00[0x17B88];                                   // 0x0000(0x17B88) MISSED OFFSET
};

// ScriptStruct ATExt.ATSaveCharacterCookingBuff
// 0x000C
struct FATSaveCharacterCookingBuff
{
	unsigned char                                      UnknownData00[0xC];                                       // 0x0000(0x000C) MISSED OFFSET
};

// ScriptStruct ATExt.ATSaveGameBattle
// 0x0010
struct FATSaveGameBattle
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct ATExt.ATSaveGameQuestCharacter
// 0x0028
struct FATSaveGameQuestCharacter
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0008(0x0020) MISSED OFFSET
};

// ScriptStruct ATExt.ATSaveGameParty
// 0x0003
struct FATSaveGameParty
{
	unsigned char                                      UnknownData00[0x3];                                       // 0x0000(0x0003) MISSED OFFSET
};

// ScriptStruct ATExt.ATSaveGameCollection
// 0x2F30
struct FATSaveGameCollection
{
	unsigned char                                      UnknownData00[0x2F30];                                    // 0x0000(0x2F30) MISSED OFFSET
};

// ScriptStruct ATExt.ATSaveGameCommunity
// 0x71208
struct FATSaveGameCommunity
{
	unsigned char                                      UnknownData00[0x71208];                                   // 0x0000(0x71208) MISSED OFFSET
};

// ScriptStruct ATExt.ATSaveGameLinkBounus
// 0x0400
struct FATSaveGameLinkBounus
{
	unsigned char                                      UnknownData00[0x400];                                     // 0x0000(0x0400) MISSED OFFSET
};

// ScriptStruct ATExt.ATSaveGameCommunityBoard
// 0x0204
struct FATSaveGameCommunityBoard
{
	unsigned char                                      UnknownData00[0x204];                                     // 0x0000(0x0204) MISSED OFFSET
};

// ScriptStruct ATExt.ATSaveGameSoulEmblem
// 0x0820
struct FATSaveGameSoulEmblem
{
	unsigned char                                      UnknownData00[0x820];                                     // 0x0000(0x0820) MISSED OFFSET
};

// ScriptStruct ATExt.ATSaveGameCondition
// 0x2000
struct FATSaveGameCondition
{
	unsigned char                                      UnknownData00[0x2000];                                    // 0x0000(0x2000) MISSED OFFSET
};

// ScriptStruct ATExt.QuestCondition
// 0x0020
struct FQuestCondition
{
	struct FString                                     Name;                                                     // 0x0000(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0010(0x0010) MISSED OFFSET
};

// ScriptStruct ATExt.ATSaveGameCrossTalk
// 0x00A0
struct FATSaveGameCrossTalk
{
	unsigned char                                      UnknownData00[0xA0];                                      // 0x0000(0x00A0) MISSED OFFSET
};

// ScriptStruct ATExt.ATSaveGameDlc
// 0x0140
struct FATSaveGameDlc
{
	unsigned char                                      UnknownData00[0x140];                                     // 0x0000(0x0140) MISSED OFFSET
};

// ScriptStruct ATExt.DlcPersistentInfo
// 0x0010
struct FDlcPersistentInfo
{
	struct FName                                       ID;                                                       // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	                                                   State;                                                    // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
};

// ScriptStruct ATExt.DlcConsumableInfo
// 0x0010
struct FDlcConsumableInfo
{
	struct FName                                       ID;                                                       // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	                                                   State;                                                    // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
};

// ScriptStruct ATExt.ATSaveGameDragonball
// 0x0118
struct FATSaveGameDragonball
{
	unsigned char                                      UnknownData00[0x118];                                     // 0x0000(0x0118) MISSED OFFSET
};

// ScriptStruct ATExt.ATSaveGameEnemiesBase
// 0x0190
struct FATSaveGameEnemiesBase
{
	unsigned char                                      UnknownData00[0x190];                                     // 0x0000(0x0190) MISSED OFFSET
};

// ScriptStruct ATExt.ATSaveGameEnemiesBaseNode
// 0x0002
struct FATSaveGameEnemiesBaseNode
{
	unsigned char                                      UnknownData00[0x2];                                       // 0x0000(0x0002) MISSED OFFSET
};

// ScriptStruct ATExt.ATSaveGameFieldMemories
// 0x0050
struct FATSaveGameFieldMemories
{
	unsigned char                                      UnknownData00[0x50];                                      // 0x0000(0x0050) MISSED OFFSET
};

// ScriptStruct ATExt.ATSaveGameFishing
// 0x0168
struct FATSaveGameFishing
{
	unsigned char                                      UnknownData00[0x168];                                     // 0x0000(0x0168) MISSED OFFSET
};

// ScriptStruct ATExt.ATFishingBaitSaveData
// 0x0018
struct FATFishingBaitSaveData
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct ATExt.ATSaveGameImportantLog
// 0x1F40
struct FATSaveGameImportantLog
{
	unsigned char                                      UnknownData00[0x1F40];                                    // 0x0000(0x1F40) MISSED OFFSET
};

// ScriptStruct ATExt.ATSaveGameItem
// 0x7A40
struct FATSaveGameItem
{
	unsigned char                                      UnknownData00[0x7A40];                                    // 0x0000(0x7A40) MISSED OFFSET
};

// ScriptStruct ATExt.PaletteItemInfo
// 0x0018
struct FPaletteItemInfo
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct ATExt.DragonballItem
// 0x0020
struct FDragonballItem
{
	int                                                Num;                                                      // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1C];                                      // 0x0004(0x001C) MISSED OFFSET
};

// ScriptStruct ATExt.ATSaveGameMapIcon
// 0x1400
struct FATSaveGameMapIcon
{
	unsigned char                                      UnknownData00[0x1400];                                    // 0x0000(0x1400) MISSED OFFSET
};

// ScriptStruct ATExt.ATSaveGameMinigame
// 0x01B8
struct FATSaveGameMinigame
{
	struct FMiniGameRaceSaveInfo                       MiniGameRaceSaveInfo;                                     // 0x0000(0x0060)
	unsigned char                                      UnknownData00[0x158];                                     // 0x0060(0x0158) MISSED OFFSET
};

// ScriptStruct ATExt.ATSaveGameOnline
// 0x0001
struct FATSaveGameOnline
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct ATExt.ATSaveGameOption
// 0x0001
struct FATSaveGameOption
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct ATExt.ATSaveKPIEventBattleParam
// 0x2004
struct FATSaveKPIEventBattleParam
{
	unsigned char                                      UnknownData00[0x2004];                                    // 0x0000(0x2004) MISSED OFFSET
};

// ScriptStruct ATExt.ATSaveKPIEventBattle
// 0x200400
struct FATSaveKPIEventBattle
{
	struct FATSaveKPIEventBattleParam                  ATSaveKPIEventBattleParam[0x100];                         // 0x0000(0x2004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ATExt.ATSaveGameMarker
// 0x0010
struct FATSaveGameMarker
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct ATExt.ATSaveKPIEventBattleParam_PlayableCharaSkillUseCnt
// 0x0100
struct FATSaveKPIEventBattleParam_PlayableCharaSkillUseCnt
{
	unsigned char                                      UnknownData00[0x100];                                     // 0x0000(0x0100) MISSED OFFSET
};

// ScriptStruct ATExt.ATSaveKPIEventBattleParam_SkillUseCount
// 0x0004
struct FATSaveKPIEventBattleParam_SkillUseCount
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x0000(0x0004) MISSED OFFSET
};

// ScriptStruct ATExt.ATSaveGameProgress
// 0x12E8
struct FATSaveGameProgress
{
	unsigned char                                      UnknownData00[0x12E8];                                    // 0x0000(0x12E8) MISSED OFFSET
};

// ScriptStruct ATExt.LevelCondition
// 0x0050
struct FLevelCondition
{
	unsigned char                                      UnknownData00[0x50];                                      // 0x0000(0x0050) UNKNOWN PROPERTY: MapProperty ATExt.LevelCondition.Collection
};

// ScriptStruct ATExt.QuestNotificationStatus
// 0x0018
struct FQuestNotificationStatus
{
	struct FString                                     ID;                                                       // 0x0000(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0010(0x0008) MISSED OFFSET
};

// ScriptStruct ATExt.ItemTraderStatus
// 0x0018
struct FItemTraderStatus
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct ATExt.GameProgress
// 0x0010
struct FGameProgress
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct ATExt.QuestProgress
// 0x01B0
struct FQuestProgress
{
	unsigned char                                      UnknownData00[0x1B0];                                     // 0x0000(0x01B0) MISSED OFFSET
};

// ScriptStruct ATExt.PlayerLocation
// 0x0058
struct FPlayerLocation
{
	unsigned char                                      UnknownData00[0x58];                                      // 0x0000(0x0058) MISSED OFFSET
};

// ScriptStruct ATExt.EpisodeResult
// 0x0004
struct FEpisodeResult
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x0000(0x0004) MISSED OFFSET
};

// ScriptStruct ATExt.ChapterResult
// 0x0040
struct FChapterResult
{
	struct FEpisodeResult                              EpisodeResult[0x10];                                      // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ATExt.BattleResult
// 0x0006
struct FBattleResult
{
	unsigned char                                      UnknownData00[0x6];                                       // 0x0000(0x0006) MISSED OFFSET
};

// ScriptStruct ATExt.ATSaveGameRiding
// 0x04C0
struct FATSaveGameRiding
{
	struct FRidingStatus                               RidingStatus[0x2];                                        // 0x0000(0x0260)
};

// ScriptStruct ATExt.ATSaveGameShop
// 0x06D6
struct FATSaveGameShop
{
	struct FShopInfoSaveData                           ShopInfoSaveData[0x32];                                   // 0x0000(0x0023)
};

// ScriptStruct ATExt.ATSaveGameSystem
// 0x0010
struct FATSaveGameSystem
{
	uint32_t                                           Version;                                                  // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0004(0x000C) MISSED OFFSET
};

// ScriptStruct ATExt.ATGamePlayedTime
// 0x000C
struct FATGamePlayedTime
{
	unsigned char                                      UnknownData00[0xC];                                       // 0x0000(0x000C) MISSED OFFSET
};

// ScriptStruct ATExt.ATSaveGameTraining
// 0x0200
struct FATSaveGameTraining
{
	unsigned char                                      UnknownData00[0x200];                                     // 0x0000(0x0200) MISSED OFFSET
};

// ScriptStruct ATExt.PartyTemp
// 0x0003
struct FPartyTemp
{
	unsigned char                                      UnknownData00[0x3];                                       // 0x0000(0x0003) MISSED OFFSET
};

// ScriptStruct ATExt.ATSaveGameTreasure
// 0x05F8
struct FATSaveGameTreasure
{
	unsigned char                                      UnknownData00[0x5F8];                                     // 0x0000(0x05F8) MISSED OFFSET
};

// ScriptStruct ATExt.ReplayEventItemInfo
// 0x0010
struct FReplayEventItemInfo
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct ATExt.BreakableObjectParam
// 0x0002
struct FBreakableObjectParam
{
	bool                                               IsBroken;                                                 // 0x0000(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0001(0x0001) MISSED OFFSET
};

// ScriptStruct ATExt.ATSaveGameTreasureNode
// 0x0001
struct FATSaveGameTreasureNode
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct ATExt.ATSaveGameTrophy
// 0x0060
struct FATSaveGameTrophy
{
	unsigned char                                      UnknownData00[0x60];                                      // 0x0000(0x0060) MISSED OFFSET
};

// ScriptStruct ATExt.ATSaveGameTurtleSchool
// 0x0050
struct FATSaveGameTurtleSchool
{
	unsigned char                                      UnknownData00[0x50];                                      // 0x0000(0x0050) MISSED OFFSET
};

// ScriptStruct ATExt.ATSaveGameTutorial
// 0x0200
struct FATSaveGameTutorial
{
	unsigned char                                      UnknownData00[0x200];                                     // 0x0000(0x0200) MISSED OFFSET
};

// ScriptStruct ATExt.ATHave
// 0x0002
struct FATHave
{
	unsigned char                                      UnknownData00[0x2];                                       // 0x0000(0x0002) MISSED OFFSET
};

// ScriptStruct ATExt.ATSaveGameWindRoad
// 0x0010
struct FATSaveGameWindRoad
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct ATExt.ATSaveGameZOrb
// 0x3000
struct FATSaveGameZOrb
{
	unsigned char                                      UnknownData00[0x3000];                                    // 0x0000(0x3000) MISSED OFFSET
};

// ScriptStruct ATExt.ATSaveSystemHeader
// 0xE068
struct FATSaveSystemHeader
{
	unsigned char                                      UnknownData00[0xE068];                                    // 0x0000(0xE068) MISSED OFFSET
};

// ScriptStruct ATExt.ATSaveSystemInputAssign
// 0x0178
struct FATSaveSystemInputAssign
{
	struct FName                                       Walk;                                                     // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x170];                                     // 0x0008(0x0170) MISSED OFFSET
};

// ScriptStruct ATExt.ATSaveSystemOption
// 0x00AC
struct FATSaveSystemOption
{
	unsigned char                                      UnknownData00[0xAC];                                      // 0x0000(0x00AC) MISSED OFFSET
};

// ScriptStruct ATExt.ATSaveSystemUser
// 0x0068
struct FATSaveSystemUser
{
	uint32_t                                           Version;                                                  // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x64];                                      // 0x0004(0x0064) MISSED OFFSET
};

// ScriptStruct ATExt.CharacterChangeData
// 0x0028
struct FCharacterChangeData
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
};

// ScriptStruct ATExt.CharacterLoadData
// 0x0018
struct FCharacterLoadData
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct ATExt.CharacterPartsChangeData
// 0x0008
struct FCharacterPartsChangeData
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct ATExt.CharacterPartsLoadData
// 0x0008
struct FCharacterPartsLoadData
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct ATExt.TipsSpec
// 0x0010
struct FTipsSpec
{
	struct FName                                       ID;                                                       // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct ATExt.BattleBossSkillCameraParam
// 0x0018
struct FBattleBossSkillCameraParam
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct ATExt.SubQuestCameraBlendParam
// 0x0008 (0x0010 - 0x0008)
struct FSubQuestCameraBlendParam : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct ATExt.SubQuestCameraTable
// 0x00D8 (0x00E0 - 0x0008)
struct FSubQuestCameraTable : public FTableRowBase
{
	unsigned char                                      UnknownData00[0xD8];                                      // 0x0008(0x00D8) MISSED OFFSET
};

// ScriptStruct ATExt.SubQuestCameraOffset
// 0x0028
struct FSubQuestCameraOffset
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
