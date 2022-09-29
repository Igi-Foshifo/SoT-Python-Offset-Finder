// Generated by DougTheDruid#2784 on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x0
class InvasionServiceInterface: public Interface
{
public:
};


// Size 0x0
class EnvQueryGenerator_AggressiveAggressiveSpawnLocations: public EnvQueryGenerator
{
public:
};


// Size 0x0
class GetInvasionBattleLocationStep: public TaleQuestStep
{
public:
};


// Size 0xc8
class TaleQuestInvasionService: public TaleQuestService
{
public:
	Class TaleQuestInvasionServiceDesc*                          ServiceDesc;                                       // 0x60(0x8)
};


// Size 0xe0
class TaleQuestInvasionServiceDesc: public TaleQuestServiceDesc
{
public:
	Struct FText                                                 OnCrewLeftServerMessage;                           // 0x28(0x38)
	Struct FText                                                 OnCrewLeftFightMessage;                            // 0x60(0x38)
	Struct FText                                                 FactionGBannerTag;                                 // 0x98(0x38)
	Struct FText                                                 FactionBBannerTag;                                 // 0xd0(0x38)
};


// Size 0x60
class GetInvasionBattleLocationStepDesc: public TaleQuestStepDesc
{
public:
	Struct QuestVariableVector                                   Location;                                          // 0x80(0x30)
	Struct QuestVariableFloat                                    Radius;                                            // 0xb0(0x30)
};


// Size 0x0
class GetInvasionShipsStep: public TaleQuestStep
{
public:
};


// Size 0x1b0
class GetInvasionShipsStepDesc: public TaleQuestStepDesc
{
public:
	Struct QuestVariableActor                                    AggressiveShip;                                    // 0x80(0x30)
	Struct QuestVariableActor                                    AggressiveShip;                                    // 0xb0(0x30)
	Struct QuestVariableActor                                    PassiveShip;                                       // 0xe0(0x30)
	Struct QuestVariableGuid                                     AggressiveCrewId;                                  // 0x110(0x30)
	Struct QuestVariableGuid                                     AggressiveCrewId;                                  // 0x140(0x30)
	Struct QuestVariableGuid                                     PassiveCrewId;                                     // 0x170(0x30)
	Struct QuestVariableName                                     AggressiveFaction;                                 // 0x1a0(0x30)
	Struct QuestVariableName                                     AggressiveFaction;                                 // 0x1d0(0x30)
	Struct QuestVariableName                                     PassiveFaction;                                    // 0x200(0x30)
};


// Size 0x28
class InvasionBattleBounds: public Actor
{
public:
	Class SceneComponent*                                        Root;                                              // 0x3c8(0x8)
	Class Actor*                                                 ShipToTrack1;                                      // 0x3d0(0x8)
	Class Actor*                                                 ShipToTrack2;                                      // 0x3d8(0x8)
	float                                                        InnerRadius;                                       // 0x3e0(0x4)
	float                                                        OuterRadius;                                       // 0x3e4(0x4)
};


// Size 0x0
class InvasionBattleBoundsShipComponentInterface: public Interface
{
public:
};


// Size 0x0
class InvasionBlueprintFunctionLibrary: public BlueprintFunctionLibrary
{
public:
};


// Size 0x10
class InvasionLocationsDataAsset: public DataAsset
{
public:
	TArray<Struct Vector2D>                                      AggressiveAggressiveLocations;                     // 0x28(0x10)
};


// Size 0x0
class InvasionLocationsDataAssetGetterInterface: public Interface
{
public:
};


// Size 0x68
class InvasionServiceDataAsset: public DataAsset
{
public:
	Class VoyageDescDataAsset*                                   Matchmaking_VoyageDescDataAsset;                   // 0x28(0x8)
	Class VoyageDescDataAsset*                                   Invasion_AggressivePassive_VoyageDescDataAsset;    // 0x30(0x8)
	Class VoyageDescDataAsset*                                   Invasion_AggressiveAggressive_VoyageDescDataAsset; // 0x38(0x8)
	Class VoyageDescDataAsset*                                   Invasion_LosingCrew_VoyageDescDataAsset;           // 0x40(0x8)
	Class EnvQuery*                                              AggressivePassive_EnvQueryTemplate;                // 0x48(0x8)
	Class EnvQuery*                                              AggressiveAggressive_InvasionLocation_EnvQueryTemplate; // 0x50(0x8)
	Class EnvQuery*                                              AggressiveAggressive_PrimaryShipLocation_EnvQueryTemplate; // 0x58(0x8)
	Class EnvQuery*                                              AggressiveAggressive_SecondaryShipLocation_EnvQueryTemplate; // 0x60(0x8)
	float                                                        AggressivePassive_EQSQueryParamData_SailingTargetDistance_Min; // 0x68(0x4)
	float                                                        AggressivePassive_EQSQueryParamData_SailingTargetDistance_Max; // 0x6c(0x4)
	float                                                        AggressivePassive_EQSQueryParamData_StationaryTargetDistance_Min; // 0x70(0x4)
	float                                                        AggressivePassive_EQSQueryParamData_StationaryTargetDistance_Max; // 0x74(0x4)
	Class VoyageDescDataAsset*                                   Invasion_Debug_AggressivePassive_VoyageDescDataAsset; // 0x78(0x8)
	Class VoyageDescDataAsset*                                   Invasion_Debug_AggressiveAggressive_VoyageDescDataAsset; // 0x80(0x8)
	float                                                        StopPlayingEmergeMusicAfterSeconds;                // 0x88(0x4)
};


// Size 0x1d8
class InvasionService: public Actor
{
public:
	Class InvasionServiceDataAsset*                              InvasionServiceDataAsset;                          // 0x408(0x8)
	Class InvasionLocationsDataAsset*                            InvasionLocationsDataAsset;                        // 0x410(0x8)
	TArray<Struct InvasionParticipatingCrewData>                 MatchmakingCrews;                                  // 0x4f0(0x10)
	TArray<Struct InvasionParticipatingCrewData>                 InvadingCrews;                                     // 0x500(0x10)
	TArray<Struct ReplicatedInvasionCrewMusicState>              ReplicatedInvasionCrewMusicStates;                 // 0x510(0x10)
	TArray<Struct Guid>                                          MatchmakingCrewsReplicated;                        // 0x520(0x10)
	TArray<Struct Guid>                                          InvadingCrewsReplicated;                           // 0x530(0x10)
	TArray<class InvasionBattleBounds*>                          InvasionBattleBoundsList;                          // 0x540(0x10)
};


// Size 0x0
class SetInvasionMusicStateForCrewStep: public TaleQuestStep
{
public:
};


// Size 0x8
class SetInvasionMusicStateForCrewStepDesc: public TaleQuestStepDesc
{
public:
	byte                                                         MusicState;                                        // 0x80(0x1)
};


// Size 0x0
class TaleQuestInvasionCreateBattleBoundsStep: public TaleQuestStep
{
public:
};


// Size 0x60
class TaleQuestInvasionCreateBattleBoundsStepDesc: public TaleQuestStepDesc
{
public:
	Struct QuestVariableActor                                    Ship1;                                             // 0x80(0x30)
	Struct QuestVariableActor                                    Ship2;                                             // 0xb0(0x30)
};


// Size 0xb0
class TaleQuestInvasionMatchmakingService: public TaleQuestService
{
public:
	Class TaleQuestInvasionMatchmakingServiceDesc*               ServiceDesc;                                       // 0x60(0x8)
};


// Size 0x70
class TaleQuestInvasionMatchmakingServiceDesc: public TaleQuestServiceDesc
{
public:
	Struct FText                                                 OnCrewLeftServerMessage;                           // 0x28(0x38)
	Struct FText                                                 OnCrewLeftFightMessage;                            // 0x60(0x38)
};


// Size 0x0
class TaleQuestInvasionRemoveBattleBoundsStep: public TaleQuestStep
{
public:
};


// Size 0x30
class TaleQuestInvasionRemoveBattleBoundsStepDesc: public TaleQuestStepDesc
{
public:
	Struct QuestVariableActor                                    ShipInBattleBounds;                                // 0x80(0x30)
};


// Size 0x30
class WaitForShipToBeDefeatedStep: public TaleQuestStep
{
public:
};


// Size 0x168
class WaitForShipToBeDefeatedStepDesc: public TaleQuestStepDesc
{
public:
	Struct QuestVariableActor                                    WinningShip;                                       // 0x80(0x30)
	Struct QuestVariableActor                                    DefeatedShip;                                      // 0xb0(0x30)
	Struct QuestVariableGuid                                     WinningCrewId;                                     // 0xe0(0x30)
	Struct QuestVariableGuid                                     DefeatedCrewId;                                    // 0x110(0x30)
	Struct QuestVariableName                                     WinningFaction;                                    // 0x140(0x30)
	Struct QuestVariableName                                     DefeatedFaction;                                   // 0x170(0x30)
	float                                                        CheckProximityTimerInterval;                       // 0x1a0(0x4)
	float                                                        CheckProximityDistanceInMetres;                    // 0x1a4(0x4)
	float                                                        TimeoutTimerIntervalInMinutes;                     // 0x1a8(0x4)
	Struct FText                                                 FailMessage;                                       // 0x1b0(0x38)
};


}