namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x58
class AIShipBattlesDataAsset: public DataAsset
{
public:
	TArray<Struct TrackingNoiseGenerator>              Battles                                            // 0x28(0x10)
	TArray<Struct FText>                               SkellyCrewNames                                    // 0x38(0x10)
	Struct FText                                       EncounterCompleteText                              // 0x48(0x38)
};


// Size 0x0
class AIShipObstacleServiceInterface: public Interface
{
public:
};


// Size 0x50
class BTTask_SailShipBesideTarget: public BTTask_BlackboardBase
{
public:
	Struct TrackingNoiseGenerator                      TrackingNoiseGenerator                             // 0xa8(0x18)
};


// Size 0x350
class AthenaAIShipControllerParamsDataAsset: public AthenaAIControllerParamsDataAsset
{
public:
	Struct ShipMovementParams                          TrackingMovementParams                             // 0x100(0x34)
	Struct WeightedProbabilityRangeOfRanges            TimesToSailBesideTarget                            // 0x138(0x30)
	Struct WeightedProbabilityRangeOfRanges            PerpendicularDistanceOffsets                       // 0x168(0x30)
	Struct WeightedProbabilityRangeOfRanges            TimesBeforeDistanceChange                          // 0x198(0x30)
	float                                              MaxParallelDistanceOffset                          // 0x1c8(0x4)
	float                                              AlignDistanceThreshold                             // 0x1cc(0x4)
	float                                              TimeToProjectIntoFutureForTracking                 // 0x1d0(0x4)
	float                                              TargetSpeedThresholdToTrackShip                    // 0x1d4(0x4)
	Struct TrackingNoiseGenerator                      TrackingNoiseGenerator                             // 0x1d8(0x18)
	float                                              WheelAngleMonitorDuration                          // 0x1f0(0x4)
	float                                              WheelAngleChangeThresholdToBreakTracking           // 0x1f4(0x4)
	float                                              SpeedMonitorDuration                               // 0x1f8(0x4)
	float                                              SpeedChangeThresholdToBreakTrackingInMPS           // 0x1fc(0x4)
	float                                              TargetSpeedToConsiderAnchorLoweredInMPS            // 0x200(0x4)
	Struct WeightedProbabilityRangeOfRanges            TrackingLatencyTimes                               // 0x208(0x30)
	Struct WeightedProbabilityRangeOfRanges            TrackingLatencyTimesWhenAnchorLowered              // 0x238(0x30)
	Class CurveFloat*                                  DistToTargetShipVSTrackingLatencyCurve             // 0x268(0x8)
	Struct ShipMovementParams                          CirclingMovementParams                             // 0x270(0x34)
	float                                              TargetSpeedThresholdInKnots                        // 0x2a4(0x4)
	float                                              SecondsInFutureToProjectTargetLocation             // 0x2a8(0x4)
	Struct WeightedProbabilityRangeOfRanges            CircleRadiuses                                     // 0x2b0(0x30)
	Struct WeightedProbabilityRangeOfRanges            CirclingSpeedsInDegreesPerSecond                   // 0x2e0(0x30)
	Struct WeightedProbabilityRangeOfRanges            TimesToCircleBeforeChangingRadius                  // 0x310(0x30)
	float                                              MinDistanceFromTargetToStartRam                    // 0x340(0x4)
	float                                              MaxDistanceFromTargetToStartRam                    // 0x344(0x4)
	float                                              MaxSpeedToRamTarget                                // 0x348(0x4)
	float                                              RammingMaxTurnSpeed                                // 0x34c(0x4)
	float                                              RammingTimeDampingScalar                           // 0x350(0x4)
	float                                              MinAngleToTargetToAttemptRam                       // 0x354(0x4)
	Struct WeightedProbabilityRangeOfRanges            RammingLocationOffsets                             // 0x358(0x30)
	Struct ShipMovementParams                          SailingForwardMovementParams                       // 0x388(0x34)
	float                                              MinAllowedDistanceToObstacle                       // 0x3bc(0x4)
	float                                              MaxPathAvoidanceDistance                           // 0x3c0(0x4)
	Struct ShipMovementParams                          PassiveSailingMovementParams                       // 0x3c4(0x34)
	float                                              ChanceToAnchor                                     // 0x3f8(0x4)
	Struct WeightedProbabilityRangeOfRanges            TimesToStayAnchored                                // 0x400(0x30)
	int                                                NumIslandsToVisitBeforeReturning                   // 0x430(0x4)
	float                                              DistanceFromIslandsToSailTo                        // 0x434(0x4)
	float                                              DistanceToTargetToDropAnchor                       // 0x438(0x4)
	TArray<Class DistanceToTargetToDropAnchor>         AggressionOverrideImpactIDs                        // 0x440(0x10)
};


// Size 0x90
class AIShipContextDescDataAsset: public DataAsset
{
public:
	byte                                               ShipType                                           // 0x28(0x1)
	byte                                               EncounterType                                      // 0x29(0x1)
	Class ShipDescAsset*                               ShipDesc                                           // 0x30(0x8)
	Class AthenaAIShipControllerParamsDataAsset*       ControllerParams                                   // 0x38(0x8)
	TArray<Struct ControllerParams>                    Spawners                                           // 0x40(0x10)
	Struct AIShipContextDescDamageParams               DamageParams                                       // 0x50(0x14)
	Struct AIShipSailData                              SailsCustomisation                                 // 0x64(0x10)
	Struct Color                                       SailColour                                         // 0x74(0x4)
	Struct AIShipCrewFormType                          FormType                                           // 0x78(0x20)
	Struct AIShipCrewAmmoType                          AmmoType                                           // 0x98(0x18)
	Class ShortRangeMarkerDataAsset*                   RewardMarkerParams                                 // 0xb0(0x8)
};


// Size 0x68
class AIShipContextParamsDataAsset: public DataAsset
{
public:
	float                                              TopDeckPlayerTrackerRadius                         // 0x28(0x4)
	float                                              TimeSpentEmotingOnInitialSpawn                     // 0x2c(0x4)
	bool                                               ForceAIToAlwaysSpawn                               // 0x30(0x1)
	float                                              IntervalBetweenRepairDamageAssignments             // 0x34(0x4)
	float                                              IntervalBetweenUseCannonAssignments                // 0x38(0x4)
	float                                              DistForMinXYAIInteractableUtility                  // 0x3c(0x4)
	float                                              DistForMaxXYAIInteractableUtility                  // 0x40(0x4)
	float                                              MinXYAIInteractableUtility                         // 0x44(0x4)
	float                                              MaxXYAIInteractableUtility                         // 0x48(0x4)
	float                                              DistForMinZAIInteractableUtility                   // 0x4c(0x4)
	float                                              DistForMaxZAIInteractableUtility                   // 0x50(0x4)
	float                                              MinZAIInteractableUtility                          // 0x54(0x4)
	float                                              MaxZAIInteractableUtility                          // 0x58(0x4)
	float                                              MinInactiveRepairSpawnDelay                        // 0x5c(0x4)
	float                                              MaxInactiveRepairSpawnDelay                        // 0x60(0x4)
	float                                              SpawnSfxDistance                                   // 0x64(0x4)
	float                                              SinkSfxDistance                                    // 0x68(0x4)
	int                                                MinCannonAttackersWhenBoarded                      // 0x6c(0x4)
	float                                              StuckCheckInterval                                 // 0x70(0x4)
	float                                              StuckCheckDistance                                 // 0x74(0x4)
	float                                              MaxDistanceFromEncounter                           // 0x78(0x4)
	float                                              ShipFlippedAngle                                   // 0x7c(0x4)
	float                                              SecondsUntilKillAIAfterShipDefeated                // 0x80(0x4)
	float                                              SecondsDelayForAIShipDefeatedNotification          // 0x84(0x4)
	bool                                               EnableShipSurfacingMusic                           // 0x88(0x1)
};


// Size 0xb0
class AIShipEncounterSpawnParamsDataAsset: public DataAsset
{
public:
	float                                              SpawnDepth                                         // 0x28(0x4)
	float                                              Radius                                             // 0x2c(0x4)
	float                                              MinSafeSpawnDistanceFromOtherShips                 // 0x30(0x4)
	float                                              TimeDelayBetweenWaves                              // 0x34(0x4)
	Struct RelativeSpawnLocationGeneratorParams        RelativeSpawnLocationParams                        // 0x38(0xa0)
};


// Size 0x38
class ShipProxyPawn: public Pawn
{
public:
	Class Ship*                                        Ship                                               // 0x448(0x8)
	Class Ship*                                        SpawnTargetShip                                    // 0x450(0x8)
};


// Size 0x90
class AIShipEncounterParamsDataAsset: public DataAsset
{
public:
	Class AIShipEncounterSpawnParamsDataAsset*         SpawnParams                                        // 0x28(0x8)
	Class AIShipContextParamsDataAsset*                ContextParams                                      // 0x30(0x8)
	Class AIShipContextDescDataAsset*                  DefaultContextDesc                                 // 0x38(0x8)
	class                                              ShipPawnClass                                      // 0x40(0x8)
	Class BuoyantObjectSpawnProfileDataAsset*          BuoyantObjectSpawnProfileAsset                     // 0x48(0x8)
	class                                              EventSignalAssetClass                              // 0x50(0x8)
	float                                              EventSignalHeight                                  // 0x58(0x4)
	Struct FText                                       EncounterCompleteText                              // 0x60(0x38)
	float                                              OuterRadiusMultiplier                              // 0x98(0x4)
	float                                              MigrationRadiusMultiplier                          // 0x9c(0x4)
	float                                              InitialEncounterEntryDelay                         // 0xa0(0x4)
	float                                              MinEngagedDistanceFromPlayers                      // 0xa4(0x4)
	bool                                               EnableMusicWhenShipsHaveNoTarget                   // 0xa8(0x1)
	int                                                SecondsUntilEncounterEndsAfterLastCrewLeft         // 0xac(0x4)
	int                                                MaximumEncounterDuration                           // 0xb0(0x4)
};


// Size 0x1b8
class AIShipServiceDataAsset: public DataAsset
{
public:
	Class AIShipEncounterParamsDataAsset*              BattleEncounterParams                              // 0x28(0x8)
	Struct AIShipEncounterParams                       AggressiveEncounterParams                          // 0x30(0x18)
	Struct AIShipEncounterParams                       PassiveEncounterParams                             // 0x48(0x18)
	Struct IntPoint                                    ObstacleBucketDimensions                           // 0x60(0x8)
	float                                              ShipwreckObstacleRadius                            // 0x68(0x4)
	Struct AIShipContextDescGenerationParams           ContextDescGenerationParams                        // 0x70(0x80)
	Struct AIShipBattleEncounterDescGenerationParams   EncounterGenerationParams                          // 0xf0(0x28)
	Struct AIShipSingleWaveEncounterDescGenerationParams AggressiveEncounterGenerationParams                // 0x118(0x10)
	Struct AIShipSingleWaveEncounterDescGenerationParams PassiveEncounterGenerationParams                   // 0x128(0x10)
	Struct WeightedProbabilityRangeOfRanges            TimerBattleFirstRegenInterval                      // 0x138(0x30)
	Struct WeightedProbabilityRangeOfRanges            TimerBattleRegenInterval                           // 0x168(0x30)
	float                                              TimerBattleFinderThrottle                          // 0x198(0x4)
	Struct WeightedProbabilityRangeOfRanges            TimerBattleRetryRegenInterval                      // 0x1a0(0x30)
	float                                              TimerBattleMinActivationDistanceFromPlayers        // 0x1d0(0x4)
	Class ShortRangeMarkerDataAsset*                   RewardMarkerParams                                 // 0x1d8(0x8)
};


// Size 0x0
class AIShipDebugFunctionLibrary: public BlueprintFunctionLibrary
{
public:
};


// Size 0x38
class AIShipEncounterDesc: public DataAsset
{
public:
	Struct Vector2D                                    Location                                           // 0x28(0x8)
	float                                              Radius                                             // 0x30(0x4)
	bool                                               Moveable                                           // 0x34(0x1)
	bool                                               ShowRevealBanner                                   // 0x35(0x1)
	bool                                               ShowCompleteBanner                                 // 0x36(0x1)
	bool                                               ShouldSpawnShipCloud                               // 0x37(0x1)
	bool                                               RequirePlayerShipInZoneToSpawnShips                // 0x38(0x1)
	bool                                               EnableSecondsUntilEncounterEndsAfterLastCrewLeft   // 0x39(0x1)
	int                                                SecondsUntilEncounterEndsAfterLastCrewLeft         // 0x3c(0x4)
	bool                                               EnableMaximumEncounterDuration                     // 0x40(0x1)
	int                                                MaximumEncounterDuration                           // 0x44(0x4)
	byte                                               EncounterType                                      // 0x48(0x1)
	TArray<Struct EncounterType>                       Waves                                              // 0x50(0x10)
};


// Size 0x28
class AIShipObstacleComponent: public ActorComponent
{
public:
	byte                                               ObstacleType                                       // 0xc8(0x1)
	float                                              Radius                                             // 0xcc(0x4)
};


// Size 0x80
class AIShipObstacleService: public Actor
{
public:
};


// Size 0x0
class AIShipServiceInterface: public Interface
{
public:
};


// Size 0x330
class AIShipService: public Actor
{
public:
	Class AIShipServiceDataAsset*                      Params                                             // 0x3f0(0x8)
};


// Size 0x40
class AIShipTelemetryComponent: public ActorComponent
{
public:
};


// Size 0xe0
class AthenaAIShipController: public AthenaAIControllerBase
{
public:
	Class BehaviorTree*                                BTAsset                                            // 0x618(0x8)
	Class AthenaAIShipControllerParamsDataAsset*       ShipParamsDataAsset                                // 0x638(0x8)
	Class StatusEffectManagerComponent*                StatusEffectManagerComponent                       // 0x640(0x8)
	Struct StandardAnchorDynamicsParameters            AnchorDynamicsParams                               // 0x648(0x28)
};


// Size 0xe0
class BTService_UpdateIfShipShouldBreakTracking: public BTService
{
public:
	Struct BlackboardKeySelector                       TargetActorKey                                     // 0x70(0x28)
	Struct BlackboardKeySelector                       DisableTrackingKey                                 // 0x98(0x28)
	Struct BlackboardKeySelector                       ShouldSailForwardKey                               // 0xc0(0x28)
	Struct BlackboardKeySelector                       TimeToSailForwardKey                               // 0xe8(0x28)
	Struct BlackboardKeySelector                       CaptainIsPresentKey                                // 0x110(0x28)
};


// Size 0x50
class BTService_UpdateLocationWithActorLocation: public BTService
{
public:
	Struct BlackboardKeySelector                       LocationKey                                        // 0x70(0x28)
	Struct BlackboardKeySelector                       ActorKey                                           // 0x98(0x28)
};


// Size 0x58
class BTService_UpdateTargetLocationForPassiveShip: public BTService
{
public:
	Struct BlackboardKeySelector                       TargetLocationKey                                  // 0x70(0x28)
};


// Size 0x10
class BTTask_AIShipSurface: public BTTask_BlackboardBase
{
public:
	float                                              MaxSpeed                                           // 0x88(0x4)
	float                                              PreSurfaceDelay                                    // 0x8c(0x4)
};


// Size 0xc0
class BTTask_RamTargetShip: public BTTask_BlackboardBase
{
public:
};


// Size 0x38
class BTTask_SailShipCircleTarget: public BTTask_BlackboardBase
{
public:
};


// Size 0xa8
class BTTask_SailShipForward: public BTTask_BlackboardBase
{
public:
	Struct BlackboardKeySelector                       ShouldSailForwardKey                               // 0x88(0x28)
	Struct BlackboardKeySelector                       TimeToSailForwardKey                               // 0xb0(0x28)
	Struct BlackboardKeySelector                       IsCaptainPresentKey                                // 0xd8(0x28)
};


// Size 0x48
class BTTask_SailShipToLocation: public BTTask_BlackboardBase
{
public:
	Struct BlackboardKeySelector                       TargetLocationKey                                  // 0x88(0x28)
	float                                              DistanceThresholdToConsiderTargetReached           // 0xb0(0x4)
};


// Size 0x0
class CursedCrewCustomisationInterface: public Interface
{
public:
};


// Size 0x10
class CursedSailsCampaignDataAsset: public DataAsset
{
public:
	TArray<Struct EncounterType>                       Battles                                            // 0x28(0x10)
};


// Size 0x0
class DefeatAIShipEncounterConditionalStatTrigger: public ConditionalStatsTriggerType
{
public:
};


// Size 0x8
class IsAIShipEncounterTypeStatCondition: public StatCondition
{
public:
	byte                                               EncounterType                                      // 0x28(0x1)
};


}