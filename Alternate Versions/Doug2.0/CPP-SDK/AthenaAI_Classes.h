namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x70
class AthenaAIFormComponent: public ActorComponent
{
public:
	TArray<Struct ActivationTimerHandle>               VfxCustomisations                                  // 0xd0(0x10)
	Class AthenaAIFormDataAsset*                       FormData                                           // 0xe0(0x8)
	Class CharacterHitReactionDamagerTypeToAnimTypeLayer* HitReactionsLayer                                  // 0xe8(0x8)
};


// Size 0x0
class AthenaAIAbilityType: public Object
{
public:
};


// Size 0x0
class AIStrategyId: public Object
{
public:
};


// Size 0x400
class AISpawner: public DataAsset
{
public:
	bool                                               HasSpawnerLevelEncounters                          // 0x38(0x1)
	Struct AISpawnTypeParamsCollection                 SpawnTypeParamsCollection                          // 0x40(0x48)
	Class AIEncounterSettings*                         DefaultEncounterSettings                           // 0x88(0x8)
	Class AISpawnWaveSequenceRankProgression*          DefaultSpawnWaveProgression                        // 0x90(0x8)
	TArray<Struct DefaultSpawnWaveProgression>         SpawnContextSpecificEncounterSettings              // 0x98(0x10)
	bool                                               ShouldSpawnFacingRegionCentre                      // 0xa8(0x1)
	byte                                               DefaultSpawnType                                   // 0xa9(0x1)
	Class EnvQuery*                                    FindSpawnPosQuery                                  // 0xb0(0x8)
	byte                                               FindSpawnPosQueryRunMode                           // 0xb8(0x1)
	struct FName                                       SpawnLocationType                                  // 0xbc(0x8)
	int                                                MaxNumOfSpawnedPawns                               // 0xc4(0x4)
	int                                                PriorityForSpawnedPawns                            // 0xc8(0x4)
	TArray<Struct PriorityForSpawnedPawns>             SpawnOverrides                                     // 0xd0(0x10)
	TArray<Struct SpawnOverrides>                      AdditionalBehaviours                               // 0xe0(0x10)
	Class AthenaAISettings*                            AthenaAISettings                                   // 0x360(0x8)
};


// Size 0x138
class AIPerCrewSpawner: public AISpawner
{
public:
	Class AIWeightedProbabilityRangeOfRangesRankProgression* DefaultRespawnTimerRanges                          // 0x428(0x8)
	int                                                MaxNumOfCrewsToSpawnFor                            // 0x430(0x4)
	bool                                               ActivateBySettingFootOnIsland                      // 0x434(0x1)
	bool                                               UseRespawnTimerForFirstSpawn                       // 0x435(0x1)
	bool                                               AssociateSpawnsWithSpecificCrews                   // 0x436(0x1)
	bool                                               PerceiveTriggerActorOnSpawn                        // 0x437(0x1)
	bool                                               EnforceRespawnTimeAfterCrewLeaves                  // 0x438(0x1)
	bool                                               IgnoreSpawningGracePeriodForNewCrew                // 0x439(0x1)
};


// Size 0x68
class AthenaAIFormDataAsset: public DataAsset
{
public:
	TArray<Byte ParticleActivationDelay>               PreventHealthChangedReasons                        // 0x28(0x10)
	TArray<Struct PreventHealthChangedReasons>         DamageResponses                                    // 0x38(0x10)
	Class StatusRecipientResponseList*                 OverrideStatusRecipientResponseList                // 0x48(0x8)
	Class PhysicalMaterial*                            SurfaceMaterial                                    // 0x50(0x8)
	Class Object*                                      KilledVfxTemplate                                  // 0x58(0x8)
	class                                              AICharacterAudioComponent                          // 0x60(0x8)
	class                                              AnimNotifyEmitterWithObservers                     // 0x68(0x8)
	bool                                               HighPriorityFootstepAudio                          // 0x70(0x1)
	float                                              MovementSpeedMultipler                             // 0x74(0x4)
	Struct PlayerStat                                  StatToFireOnDeath                                  // 0x78(0x4)
	struct FName                                       FeatureName                                        // 0x7c(0x8)
	class                                              FormComponentClass                                 // 0x88(0x8)
};


// Size 0x0
class AIPlayerTracker: public Object
{
public:
};


// Size 0x20
class AISpawnerPlayerTracker: public AIPlayerTracker
{
public:
};


// Size 0x0
class AIInteractableType: public Object
{
public:
};


// Size 0x18
class AthenaAIAbilityStageParams: public Object
{
public:
	float                                              AbilityCooldownSpeedMultiplier                     // 0x28(0x4)
	float                                              DamageRequiredForNextIntervalMultiplier            // 0x2c(0x4)
	bool                                               OverrideParams                                     // 0x30(0x1)
	bool                                               AutoActivateOnStageTransition                      // 0x31(0x1)
	class                                              TypeClass                                          // 0x38(0x8)
};


// Size 0x50
class AthenaAIAbility: public Object
{
public:
	Class AthenaAIAbilityParams*                       AbilityParams                                      // 0x28(0x8)
	Class Pawn*                                        Pawn                                               // 0x30(0x8)
	Class AthenaAIController*                          Controller                                         // 0x38(0x8)
	Class AthenaAIAbilityStageParams*                  CurrentAbilityStageParams                          // 0x50(0x8)
};


// Size 0xa0
class AthenaAIAbilityParams: public Object
{
public:
	TArray<Struct AshCloudClass>                       NamedControllerParams                              // 0x28(0x10)
	byte                                               DamageIntervalCountingMode                         // 0x38(0x1)
	bool                                               UseTimeBetweenAbility                              // 0x39(0x1)
	Struct AthenaAIAbilityPlayerBasedRanges            ActivationTimerCooldown                            // 0x40(0x10)
	Struct AthenaAIAbilityPlayerBasedRanges            TimeBetweenAbility                                 // 0x50(0x10)
	bool                                               UseDamageBetweenAbility                            // 0x60(0x1)
	Struct AthenaAIAbilityPlayerBasedRanges            DamageBetweenAbility                               // 0x68(0x10)
	float                                              AbilityRadius                                      // 0x78(0x4)
	bool                                               UseMinMaxAttackRange                               // 0x7c(0x1)
	Struct MinMaxAbilityRange                          MinMaxAttackRange                                  // 0x80(0x8)
	TArray<Struct MinMaxAttackRange>                   FollowUpAbilities                                  // 0x88(0x10)
	float                                              Weight                                             // 0x98(0x4)
	Struct AIAbilityContinuousCooldownParameterData    ContinuousCooldownAbilityParameters                // 0xa0(0x20)
	class                                              AIAbilityTypeClass                                 // 0xc0(0x8)
};


// Size 0x38
class AIInteractableComponent: public ActorComponent
{
public:
	class                                              Type                                               // 0xd0(0x8)
	Struct Vector                                      DetachOffsetFromOwner                              // 0xd8(0xc)
	bool                                               CanHaveTarget                                      // 0xe4(0x1)
};


// Size 0x0
class BTDecorator_BaseConditional: public BTDecorator
{
public:
};


// Size 0x38
class BTDecorator_TargetOnShip: public BTDecorator_BaseConditional
{
public:
	bool                                               Invert                                             // 0x68(0x1)
	byte                                               ShipOwnership                                      // 0x69(0x1)
};


// Size 0x290
class BTService_QueryShipsForTarget: public BTService
{
public:
	Struct AIDataProviderFloatValue                    MaxShipDistanceFromHomePosition                    // 0x70(0x30)
	Struct AIDataProviderFloatValue                    MinDamageToSwitchTargets                           // 0xa0(0x30)
	Struct AIDataProviderFloatValue                    MinSecondsBeforeSwitchTargets                      // 0xd0(0x30)
	Struct AIDataProviderBoolValue                     SwitchTargetsAfterTimerExpires                     // 0x100(0x30)
	Struct AIDataProviderFloatValue                    SecondsBeforeSwitchTargetsAfterTimerExpires        // 0x130(0x30)
	Struct AIDataProviderFloatValue                    TimeBetweenDiceRolls                               // 0x160(0x30)
	Struct AIDataProviderFloatValue                    DiceRollForAggression                              // 0x190(0x30)
	Struct AIDataProviderFloatValue                    MinTotalDamageToTurnDiceRollForAggression          // 0x1c0(0x30)
	Struct AIDataProviderFloatValue                    DiceRollForDamageAggression                        // 0x1f0(0x30)
	Struct AIDataProviderFloatValue                    DiceRollForDamageDormancy                          // 0x220(0x30)
	Struct AIDataProviderFloatValue                    PlayerDistanceThresholdToTurnAggressive            // 0x250(0x30)
	bool                                               IgnoreAI                                           // 0x280(0x1)
};


// Size 0x58
class BTTask_SwimAttackTargetActor: public BTTask_BlackboardBase
{
public:
	float                                              DamageToApply                                      // 0x88(0x4)
	float                                              MaxAngleToTargetToSuccessfullyAttack               // 0x8c(0x4)
	TArray<Struct MaxAngleToTargetToSuccessfullyAttack> AttackAnimMapping                                  // 0x90(0x10)
	struct FName                                       LoSTraceProfileName                                // 0xa0(0x8)
	Struct AIDataProviderFloatValue                    LosTraceRadius                                     // 0xa8(0x30)
	float                                              MaxDistanceToTargetToApplyDamage                   // 0xd8(0x4)
};


// Size 0x1b0
class BTTask_SwimAttackTargetShip: public BTTask_BlackboardBase
{
public:
	float                                              BiteRadiusOffsetToBeginAttackHeadOn                // 0x88(0x4)
	float                                              BiteRadiusOffsetToBeginAttackPerpendicular         // 0x8c(0x4)
	float                                              MaxTimeToStartAttack                               // 0x90(0x4)
	Class AnimSequence*                                AttackAnim                                         // 0x98(0x8)
	float                                              AttackAnimLength                                   // 0xa0(0x4)
	float                                              TimeToPerformAttack                                // 0xa4(0x4)
	Class Object*                                      AttackVFX                                          // 0xa8(0x8)
	float                                              AttackVFXZOffset                                   // 0xb0(0x4)
	struct FName                                       LoSTraceProfileName                                // 0xb4(0x8)
	Struct AIDataProviderFloatValue                    LosTraceRadius                                     // 0xc0(0x30)
	TArray<Struct LosTraceRadius>                      ImpulseData                                        // 0xf0(0x10)
	Struct AIDataProviderIntValue                      MinDamageHolesToApply                              // 0x100(0x30)
	Struct AIDataProviderIntValue                      MaxDamageHolesToApply                              // 0x130(0x30)
	int                                                LevelsOfHullDamage                                 // 0x160(0x4)
	class                                              DamageCauserType                                   // 0x168(0x8)
	Struct AIDataProviderFloatValue                    PlayerBiteRadius                                   // 0x170(0x30)
	Struct KnockBackInfo                               KnockbackParams                                    // 0x1a0(0x50)
	Struct AIDataProviderFloatValue                    PlayerBiteDamage                                   // 0x1f0(0x30)
	Class Ship*                                        TargetShip                                         // 0x230(0x8)
};


// Size 0x0
class BurrowEruptBase: public Actor
{
public:
};


// Size 0x0
class AIAnimationStateId: public Object
{
public:
};


// Size 0x20
class SpawnerBehaviourStrategy: public Object
{
public:
};


// Size 0xc0
class AICreatureCharacterMovementComponent: public CharacterMovementComponent
{
public:
	TArray<Struct GetAIStrategy>                       AIStrategyMovementProperties                       // 0x558(0x10)
	float                                              BlendSpeed                                         // 0x568(0x4)
	bool                                               bCreateDisturbance                                 // 0x56c(0x1)
	float                                              DisturbanceSize                                    // 0x570(0x4)
	float                                              DisturbanceVelocityScale                           // 0x574(0x4)
	float                                              OrientationBlendSpeed                              // 0x578(0x4)
	float                                              OrientationMaxPitch                                // 0x57c(0x4)
	float                                              UpdateOrientationFrequency                         // 0x580(0x4)
	float                                              MinStairAngle                                      // 0x584(0x4)
	float                                              MinStairVelocityDampen                             // 0x588(0x4)
	TArray<Class MinStairVelocityDampen>               SubscribedStairClimbStrategies                     // 0x590(0x10)
};


// Size 0x220
class AICreatureCharacter: public Character
{
public:
	float                                              DelayBeforeDestroying                              // 0x628(0x4)
	float                                              TimeBeforeFadingOut                                // 0x62c(0x4)
	float                                              PickupTime                                         // 0x630(0x4)
	Struct Vector                                      TooltipDisplayOffset                               // 0x634(0xc)
	Class ActionStateMachineComponent*                 ActionStateMachineComponent                        // 0x640(0x8)
	Class ActionStatePriorityTableData*                ActionStatePriorityTableData                       // 0x648(0x8)
	class                                              ActionStateCreatorDefinition                       // 0x650(0x8)
	Class AthenaAIControllerParamsDataAsset*           AIControllerParams                                 // 0x658(0x8)
	Class InteractableComponent*                       InteractableComponent                              // 0x660(0x8)
	Class WaterHeightProviderComponent*                WaterHeightProviderComponent                       // 0x668(0x8)
	Class AnimNotifyWwiseEmitterComponent*             AnimNotifyWwiseEmitterComponent                    // 0x670(0x8)
	Class RewindComponent*                             RewindComponent                                    // 0x678(0x8)
	Class ActionRulesComponent*                        ActionRulesComponent                               // 0x680(0x8)
	Class AICreatureCharacterMovementComponent*        AICreatureCharacterMovementComponent               // 0x788(0x8)
	class                                              CurrentAIStrategy                                  // 0x790(0x8)
};


// Size 0x38
class AthenaAICharacterPathFollowingComponent: public PathFollowingComponent
{
public:
	float                                              ProportionOfTurnToMove                             // 0x2b8(0x4)
	float                                              MinAngleToTurnOnSpot                               // 0x2bc(0x4)
	float                                              ReachedGoalMaxSpeedToSlowDistanceFactor            // 0x2c0(0x4)
	float                                              AbortMoveMaxSpeedToSlowDistanceFactor              // 0x2c4(0x4)
	float                                              MinSlowDownSpeed                                   // 0x2cc(0x4)
};


// Size 0x30
class AICreatureCharacterPathFollowingComponent: public AthenaAICharacterPathFollowingComponent
{
public:
	float                                              LandingAngle                                       // 0x2f0(0x4)
	float                                              HopDistanceScale                                   // 0x2f4(0x4)
	float                                              MaximumLandTime                                    // 0x2f8(0x4)
	float                                              MinStairAngle                                      // 0x2fc(0x4)
	float                                              MinStairVelocityDampen                             // 0x300(0x4)
	TArray<Class MinStairVelocityDampen>               SubscribedStairClimbStrategies                     // 0x308(0x10)
};


// Size 0x0
class AICreatureMovementModifierInterface: public Interface
{
public:
};


// Size 0x10
class AICreatureMovementModifierParamsDataAsset: public DataAsset
{
public:
	float                                              TurnRateMultiplier                                 // 0x28(0x4)
	float                                              FlyingTurnRateMultiplier                           // 0x2c(0x4)
	bool                                               UseTighterTurningCircle                            // 0x30(0x1)
	bool                                               UseHighResNavMesh                                  // 0x31(0x1)
};


// Size 0x0
class BehaviourTreeInterruptionInterface: public Interface
{
public:
};


// Size 0x0
class ForcedIdleBehaviourInterface: public Interface
{
public:
};


// Size 0x0
class AIDialogueStateProviderInterface: public Interface
{
public:
};


// Size 0x10
class SimpleDialogueStateProvider: public Object
{
public:
};


// Size 0x0
class BountySpawnerAudioZonesInterface: public Interface
{
public:
};


// Size 0x180
class AIBountySpawner: public AISpawner
{
public:
	float                                              MaximumDistanceToPerceiveOnSpawnsAfterFirstGroup   // 0x428(0x4)
	TArray<Struct MaximumDistanceToPerceiveOnSpawnsAfterFirstGroup> WaveGroups                                         // 0x430(0x10)
	Struct StringAssetReference                        TeamColor                                          // 0x440(0x10)
	Struct WeightedProbabilityRange                    WavesPerRelocate                                   // 0x450(0x20)
	Struct WeightedProbabilityRange                    WaveSplitChance                                    // 0x470(0x20)
	TArray<Float >                                     WaveSuicideTime                                    // 0x490(0x10)
	float                                              WaveSuicideMinDist                                 // 0x4a0(0x4)
	bool                                               ImmediatelyPerceiveTargets                         // 0x4a4(0x1)
	Class AICombatDialogue*                            ActiveCombatDialogue                               // 0x4a8(0x8)
	TArray<class CrewMembers*>                         CrewMembers                                        // 0x4d8(0x10)
	TArray<class NonCrewMembersInRegion*>              NonCrewMembersInRegion                             // 0x4e8(0x10)
	TArray<class AllParticipatingPlayers*>             AllParticipatingPlayers                            // 0x4f8(0x10)
	Class OverlapTriggerComponent*                     AudioZoneTriggerComponent                          // 0x508(0x8)
};


// Size 0x0
class PostBountyAIPawnSpawnedAction: public DataAsset
{
public:
};


// Size 0x38
class ApplyNameplateToBountyWaveSpawnedAction: public PostBountyAIPawnSpawnedAction
{
public:
	Struct FText                                       AIName                                             // 0x28(0x38)
};


// Size 0x148
class AIFaunaSpawner: public AISpawner
{
public:
	Struct AIFaunaSpawnerWave                          FaunaWave                                          // 0x428(0x110)
	Class Actor*                                       FaunaLeader                                        // 0x548(0x8)
	TArray<class PlayersInSpawnArea*>                  PlayersInSpawnArea                                 // 0x560(0x10)
};


// Size 0x158
class AthenaAIControllerBase: public AIController
{
public:
};


// Size 0x2e0
class AthenaAIController: public AthenaAIControllerBase
{
public:
	float                                              CurrentTargetPerceivedNotVisibleAge                // 0x63c(0x4)
	Class AISenseConfig_Sight*                         SightConfig                                        // 0x680(0x8)
	Class AISenseConfig_Hearing*                       HearingConfig                                      // 0x688(0x8)
	Class AISenseConfig_Damage*                        DamageSenseConfig                                  // 0x690(0x8)
	TArray<Struct DamageSenseConfig>                   AIStrategySenseSettingOverrides                    // 0x6e0(0x10)
	Class Actor*                                       CurrentNotSeenPerceivedActor                       // 0x8c8(0x8)
	Class Actor*                                       PendingSpawnTriggerActor                           // 0x8d0(0x8)
};


// Size 0x198
class AthenaFaunaAIController: public AthenaAIController
{
public:
	float                                              MaxTimeBetweenThreatDetermination                  // 0x8f8(0x4)
	float                                              DefaultControlRotationInterpSpeed                  // 0x8fc(0x4)
	TArray<Struct DefaultControlRotationInterpSpeed>   StrategyControllerMovementMods                     // 0x900(0x10)
	float                                              MinAgentHalfHeightPctOverride                      // 0x910(0x4)
	Class FaunaAIContollerParamsDataAsset*             FaunaDataAsset                                     // 0x918(0x8)
	Class Actor*                                       CarrierActor                                       // 0x920(0x8)
	Class Actor*                                       HighestDangerActor                                 // 0x9d0(0x8)
	Class FaunaAIPlayerTracker*                        PlayerTracker                                      // 0xa60(0x8)
};


// Size 0x0
class CatchFaunaConditionalStatTrigger: public ConditionalStatsTriggerType
{
public:
};


// Size 0x0
class EnvQueryContext_LeaderFromBlackboard: public EnvQueryContext
{
public:
};


// Size 0x0
class EnvQueryContext_Threat: public EnvQueryContext
{
public:
};


// Size 0x3b0
class Fauna: public AICreatureCharacter
{
public:
	Struct FText                                       DisplayName                                        // 0x808(0x38)
	class                                              FaunaSpecies                                       // 0x840(0x8)
	class                                              FaunaBreed                                         // 0x848(0x8)
	Struct Vector                                      HeadOffset                                         // 0x850(0xc)
	Struct Vector                                      MountedScale                                       // 0x85c(0xc)
	float                                              NearToSurfaceDistance                              // 0x868(0x4)
	float                                              StartDrowningTimePercentage                        // 0x86c(0x4)
	float                                              DrowningDeathTimeMin                               // 0x870(0x4)
	float                                              DrowningDeathTimeMax                               // 0x874(0x4)
	float                                              PercentageStarvedToChangeAnimation                 // 0x878(0x4)
	float                                              FadeOutTime                                        // 0x87c(0x4)
	Class Object*                                      HitImpactParticleSystem                            // 0x880(0x8)
	Class Object*                                      DeathParticleSystem                                // 0x888(0x8)
	Class Object*                                      PutInCrateParticleSystem                           // 0x890(0x8)
	Class WwiseEvent*                                  PutInCrateSoundCue                                 // 0x898(0x8)
	Class WwiseEvent*                                  TookDamageSoundCue                                 // 0x8a0(0x8)
	Class WwiseEvent*                                  AgitationStartedSoundCue                           // 0x8a8(0x8)
	Class WwiseEvent*                                  AgitationStoppedSoundCue                           // 0x8b0(0x8)
	Class WwiseEvent*                                  CalmStartedSoundCue                                // 0x8b8(0x8)
	Class WwiseEvent*                                  CalmStoppedSoundCue                                // 0x8c0(0x8)
	Class Object*                                      BreathBubblesParticleSystem                        // 0x8c8(0x8)
	struct FName                                       BreathBubblesSocketName                            // 0x8d0(0x8)
	struct FName                                       UnderwaterRTPCName                                 // 0x8d8(0x8)
	Class ForceFeedbackEffect*                         OnFeedingForceFeedbackEffect                       // 0x8e0(0x8)
	Class MountableComponent*                          MountableComponent                                 // 0x8e8(0x8)
	Class HealthComponent*                             HealthComponent                                    // 0x8f0(0x8)
	Class DamageableComponent*                         DamageableComponent                                // 0x8f8(0x8)
	Class PrimitiveComponent*                          AttackHitVolume                                    // 0x900(0x8)
	Class FaunaAnimationData*                          Animations                                         // 0x908(0x8)
	Class DitherComponent*                             DitherComponent                                    // 0x910(0x8)
	Class LightWeightStatusEffectManagerComponent*     StatusEffectManagerComponent                       // 0x918(0x8)
	Class AthenaAIControllerParamsDataAsset*           AIControllerParamsWhenInCrate                      // 0x920(0x8)
	Class PeriodicAINoiseEventComponent*               PeriodicAINoiseEventComponent                      // 0x928(0x8)
	int                                                AgitationResponseChance                            // 0x950(0x4)
	int                                                AgitationResponseTestFrequencyMin                  // 0x954(0x4)
	int                                                AgitationResponseTestFrequencyMax                  // 0x958(0x4)
	int                                                MaxNumFailedAgitationResponseTests                 // 0x95c(0x4)
	float                                              AgitationResponseVFXDelay                          // 0x960(0x4)
	float                                              AgitationResponseRange                             // 0x964(0x4)
	Class Object*                                      AgitationResponseParticleSystem                    // 0x968(0x8)
	float                                              AgitationResponseRangeParticleSystemAngle          // 0x970(0x4)
	byte                                               AgitationCollisionChannel                          // 0x974(0x1)
	bool                                               StopMovementWhenAgitated                           // 0x975(0x1)
	float                                              ApproximateSpitTravelTime                          // 0x978(0x4)
	bool                                               StopMovementWhenCalm                               // 0x97c(0x1)
	float                                              TurningSpringAcceleration                          // 0x980(0x4)
	float                                              TurningSpringMaxVelocity                           // 0x984(0x4)
	float                                              TurnResetDelay                                     // 0x988(0x4)
	Struct Vector                                      PivotPointOffset                                   // 0x98c(0xc)
	bool                                               ShouldTurn                                         // 0x998(0x1)
	Class FeedingComponent*                            FeedingComponent                                   // 0x9a0(0x8)
	Class FaunaMovementComponent*                      FaunaMovementComponent                             // 0x9a8(0x8)
	float                                              TimeUntilDrowned                                   // 0x9b0(0x4)
	int                                                RandomAnimationSeed                                // 0x9b4(0x4)
	bool                                               Drowned                                            // 0x9c4(0x1)
	byte                                               CratedState                                        // 0x9c7(0x1)
	byte                                               InWaterState                                       // 0x9c8(0x1)
	Class Actor*                                       Crate                                              // 0x9d0(0x8)
	Class ParticleSystemComponent*                     BreathBubblesParticleSystemComponent               // 0x9d8(0x8)
	float                                              DrowningDeathTime                                  // 0x9e0(0x4)
	bool                                               IsPlayingStarvingAnim                              // 0x9e4(0x1)
	bool                                               IsAgitated                                         // 0x9e5(0x1)
	bool                                               IsCalm                                             // 0x9e6(0x1)
	float                                              TargetTurnAngle                                    // 0x9e8(0x4)
	Class VenomComponent*                              VenomComponent                                     // 0xb18(0x8)
	Class Actor*                                       CurrentShip                                        // 0xb20(0x8)
};


// Size 0x20
class FaunaAIPlayerTracker: public AIPlayerTracker
{
public:
};


// Size 0x0
class FaunaAnimationInterface: public Interface
{
public:
};


// Size 0x0
class FaunaMovementComponent: public AICreatureCharacterMovementComponent
{
public:
};


// Size 0x0
class MerchantCrateMetaGenerator: public ItemSnapshotMetaGenerator
{
public:
};


// Size 0x28
class AIDebugSpawnActor: public Actor
{
public:
	Struct AthenaAIDebugCostDisplay                    DebugCostDisplay                                   // 0x3d0(0x1)
	TArray<Struct DebugCostDisplay>                    SpawnConfigList                                    // 0x3d8(0x10)
	TArray<class SpawnedAIList*>                       SpawnedAIList                                      // 0x3e8(0x10)
};


// Size 0x0
class AthenaAIDebugFunctionLibrary: public BlueprintFunctionLibrary
{
public:
};


// Size 0x58
class DebugAISpawnerCreator: public Actor
{
public:
	Class AISpawner*                                   SpawnerTemplate                                    // 0x3d0(0x8)
	float                                              TriggerRadius                                      // 0x3d8(0x4)
	Class AISpawner*                                   Spawner                                            // 0x3e0(0x8)
	Class AIProximityPlayerTracker*                    ProximityPlayerTracker                             // 0x3e8(0x8)
	Class SimpleAIRegion*                              Region                                             // 0x3f0(0x8)
};


// Size 0x0
class AIDioramaLocationSourceInterface: public Interface
{
public:
};


// Size 0x228
class AIDiorama: public Actor
{
public:
	Class SceneComponent*                              SceneComponent                                     // 0x3d8(0x8)
	Class SceneDialogueCoordinator*                    SpawnedDialogueCoordinator                         // 0x3e0(0x8)
	Class SceneDialogueData*                           DialogueData                                       // 0x3e8(0x8)
	TArray<Struct DialogueData>                        LinkedActors                                       // 0x3f0(0x10)
};


// Size 0x0
class AIDioramaCategory: public Object
{
public:
};


// Size 0x80
class AIDioramaController: public Object
{
public:
	Class AIDioramaDesc*                               AIDioramaDesc                                      // 0x30(0x8)
	Class SceneDialogueData*                           DialogueData                                       // 0x38(0x8)
	TArray<Struct DialogueData>                        SpawnedDioramaPawns                                // 0x40(0x10)
	Class AIDiorama*                                   AIDiorama                                          // 0x50(0x8)
	Class AISpawner*                                   Spawner                                            // 0x58(0x8)
};


// Size 0x18
class AIDioramaDesc: public DataAsset
{
public:
	TArray<Struct AISenseRadiusSphere>                 RoleList                                           // 0x28(0x10)
	Class SceneDialogueData*                           DialogueData                                       // 0x38(0x8)
};


// Size 0x90
class AIDioramaLocationSourceComponent: public SceneComponent
{
public:
	TArray<Struct AllDioramasLocationsByCategory>      DioramaRelativeLocations                           // 0x2e0(0x10)
	float                                              DialogueTriggerRadius                              // 0x2f0(0x4)
	float                                              DialogueSubtitleBuffer                             // 0x2f4(0x4)
	float                                              AISenseRadiusForDebugDisplay                       // 0x2f8(0x4)
	TArray<Class AISenseRadiusForDebugDisplay>         Categories                                         // 0x300(0x10)
	struct FName                                       FeatureToggle                                      // 0x310(0x8)
	Struct Color                                       DebugTriggerRadiusColor                            // 0x318(0x4)
	Struct Color                                       DebugSubtitleRadiusColor                           // 0x31c(0x4)
	Struct Color                                       AISenseRadiusColor                                 // 0x320(0x4)
	Class SphereComponent*                             DialogueTriggerRadiusSphere                        // 0x328(0x8)
	Class SphereComponent*                             DialogueSubtitleRadiusSphere                       // 0x330(0x8)
	Class SphereComponent*                             AISenseRadiusSphere                                // 0x338(0x8)
};


// Size 0x0
class AIDioramaServiceInterface: public Interface
{
public:
};


// Size 0x68
class AIDioramaService: public Actor
{
public:
};


// Size 0x18
class DebugDioramaCreator: public DebugAISpawnerCreator
{
public:
	Class AIDioramaDesc*                               AIDioramaDesc                                      // 0x428(0x8)
	Class AIDioramaLocationSourceComponent*            Location                                           // 0x430(0x8)
	Class AIDioramaController*                         AIDioramaController                                // 0x438(0x8)
};


// Size 0x0
class InDioramaAIStrategyId: public AIStrategyId
{
public:
};


// Size 0x440
class Pet: public AICreatureCharacter
{
public:
	Class PetWieldableReactMappingsDataAsset*          WieldableReactMappingsAsset                        // 0x898(0x8)
	float                                              MaxVelocityForLocomotionAnimation                  // 0x8a0(0x4)
	bool                                               CanFly                                             // 0x8a4(0x1)
	TArray<Struct CanFly>                              FlyingStrategyProperties                           // 0x8a8(0x10)
	float                                              FlyingLandTime                                     // 0x8b8(0x4)
	Class CurveFloat*                                  FlyingLandCurve                                    // 0x8c0(0x8)
	float                                              FlyingTakeOffTime                                  // 0x8c8(0x4)
	Class CurveFloat*                                  FlyingTakeOffCurve                                 // 0x8d0(0x8)
	Struct FloatRange                                  MidFlightAdjustmentTimerRange                      // 0x8d8(0x10)
	Class CurveFloat*                                  MidFlightAdjustmentCurve                           // 0x8e8(0x8)
	Class CurveFloat*                                  MidFlightTimeToDistanceAdjustmentCurve             // 0x8f0(0x8)
	struct FName                                       FiredFromActorCollision                            // 0x8f8(0x8)
	Class WwiseEvent*                                  FiredFromActorSFX                                  // 0x900(0x8)
	Class PetDitherComponent*                          DitherComponent                                    // 0x908(0x8)
	float                                              MinimumDamageForHealthReact                        // 0x910(0x4)
	float                                              MaxDistForWaterBucketToClean                       // 0x914(0x4)
	float                                              MinimumDurationUntilPetCanDespawnConcealed         // 0x918(0x4)
	float                                              DefaultNamePlateHeight                             // 0x91c(0x4)
	float                                              AlternateNamePlateHeight                           // 0x920(0x4)
	TArray<Byte AlternateNamePlateHeight>              StatesToUseAlternateNamePlatePos                   // 0x928(0x10)
	Struct FloatRange                                  PetTimeSpentSad                                    // 0x938(0x10)
	byte                                               DebugStateDescriptor                               // 0x948(0x1)
	Class AINameplateComponent*                        AINameplateComponent                               // 0x950(0x8)
	Class FeedingComponent*                            FeedingComponent                                   // 0x958(0x8)
	Class StarvingComponent*                           StarvingComponent                                  // 0x960(0x8)
	Class CleanlinessComponent*                        CleanlinessComponent                               // 0x968(0x8)
	Class CannonSquashComponent*                       CannonSquashComponent                              // 0x970(0x8)
	Struct PetMovementRequest                          ReplicatedMovementRequest                          // 0x978(0xc)
	float                                              TargetMeshRoll                                     // 0x984(0x4)
	float                                              DefaultShipTurnRateModifier                        // 0x998(0x4)
	TArray<Struct DefaultShipTurnRateModifier>         TurnRateModifierList                               // 0x9a0(0x10)
	TArray<Byte TurnRateModifierList>                  LocomotingMovementStates                           // 0x9b0(0x10)
	TArray<Byte LocomotingMovementStates>              RequestIdleOrMovementValidMovementStates           // 0x9c0(0x10)
	float                                              MaxRollAngle                                       // 0x9d0(0x4)
	float                                              DelayForDisablingMovementOnIdle                    // 0x9d4(0x4)
	float                                              IslandDustRatePerSecond                            // 0x9d8(0x4)
	Struct Guid                                        CrewId                                             // 0x9dc(0x10)
	bool                                               InHangout                                          // 0x9ec(0x1)
	bool                                               PerchedInHangout                                   // 0x9ed(0x1)
	bool                                               ResetRollAndZOffset                                // 0x9ee(0x1)
	bool                                               ShouldIgnoreTooltipDisplayOffset                   // 0x9ef(0x1)
	Struct PetTurnToFaceData                           PetTurnToFaceData                                  // 0x9f0(0x20)
	Class AIPartsRetrievalComponent*                   AIPartsRetrievalComponent                          // 0xa28(0x8)
	Class PetPartCustomisationComponent*               PetPartCustomisationComponent                      // 0xa30(0x8)
	Class LightWeightStatusEffectManagerComponent*     LightWeightStatusEffectManagerComponent            // 0xa38(0x8)
	Class PetTelemetryComponent*                       TelemetryComponent                                 // 0xa40(0x8)
	Class PetSicknessComponent*                        SicknessComponent                                  // 0xa48(0x8)
	Class WaterExposureComponent*                      WaterExposureComponent                             // 0xa50(0x8)
	Class AnimationDataStoreComponent*                 AnimationDataStoreComponent                        // 0xa58(0x8)
	Class Actor*                                       SpawnedForShip                                     // 0xa60(0x8)
	Class Actor*                                       PetOwner                                           // 0xa68(0x8)
	Class ItemInfo*                                    PetInfo                                            // 0xa70(0x8)
	Struct Docker                                      Docker                                             // 0xa80(0x50)
	Struct StartPickupObjectActionRuleParams           StartPickupObjectActionRuleParams                  // 0xad0(0x10)
	Class ParticleSystemComponent*                     CurrentlyPlayingParticleSystem                     // 0xaf0(0x8)
	class                                              LandingStrategy                                    // 0xaf8(0x8)
	class                                              PursuitStrategy                                    // 0xb00(0x8)
	float                                              DefaultRollLerpTime                                // 0xb08(0x4)
	float                                              LandingRollLerpTime                                // 0xb0c(0x4)
	bool                                               IsBeingDismissed                                   // 0xb10(0x1)
	bool                                               IsInDisabledPetPerchHangout                        // 0xbfc(0x1)
	bool                                               PetIsSad                                           // 0xbfd(0x1)
};


// Size 0xa8
class BTTask_SetRoamingPetAnimationState: public BTTask_BlackboardBase
{
public:
	Struct WeightedPetAnimationSelector                WeightedAnimationSelection                         // 0x88(0xa0)
};


// Size 0x8
class EnvQueryContext_PositionFromBlackboard: public EnvQueryContext
{
public:
};


// Size 0x70
class PetDitherComponent: public DitherComponent
{
public:
};


// Size 0x170
class AINameplateComponent: public NameplateComponent
{
public:
	float                                              VisibleFromWorldDistance                           // 0x308(0x4)
	float                                              VisibleUntilWorldDistance                          // 0x30c(0x4)
	float                                              VisibleAfterDeathDuration                          // 0x310(0x4)
	Struct FText                                       Title                                              // 0x318(0x38)
	Struct FText                                       DisplayName                                        // 0x350(0x38)
	Struct FString                                     DisplayNameAsString                                // 0x388(0x10)
	Struct FString                                     DebugDisplayText                                   // 0x398(0x10)
	bool                                               VisibilityDisabled                                 // 0x3a8(0x1)
};


// Size 0x20
class PetNameplateComponent: public AINameplateComponent
{
public:
	Struct FString                                     DefaultPetName                                     // 0x468(0x10)
};


// Size 0xb8
class PetPartCustomisationComponent: public ActorComponent
{
public:
	class                                              AnimationDataStoreId                               // 0xd8(0x8)
	Class PetPartSizeMappingsDataAsset*                SizeMappingsAsset                                  // 0xe0(0x8)
	TArray<Struct SizeMappingsAsset>                   CurrentlyLoadedMaterials                           // 0xe8(0x10)
	Struct StringAssetReference                        DefaultMeshRef                                     // 0xf8(0x10)
	Struct StringAssetReference                        HighResMeshRef                                     // 0x108(0x10)
	Class SkeletalMesh*                                CurrentlyLoadedMesh                                // 0x118(0x8)
	byte                                               CurrentPetSize                                     // 0x120(0x1)
	Class PetCustomisationOverrideDataAsset*           CurrentlyLoadedOverrideAsset                       // 0x128(0x8)
};


// Size 0x20
class PetPartSizeMappingsDataAsset: public DataAsset
{
public:
	TArray<Struct IgnorePickupFromHangoutTooltipDisplayOffset> Mappings                                           // 0x28(0x10)
	Struct FloatRange                                  ConcealedScaleBounds                               // 0x38(0x10)
};


// Size 0x10
class PetSicknessComponent: public ActorComponent
{
public:
};


// Size 0x8
class AIPartsDesc: public DataAsset
{
public:
	Struct AIPartId                                    AIPartId                                           // 0x28(0x8)
};


// Size 0x40
class PetsPartsDesc: public AIPartsDesc
{
public:
	Struct StringAssetReference                        Mesh                                               // 0x30(0x10)
	Struct StringAssetReference                        HighResMesh                                        // 0x40(0x10)
	TArray<Struct HighResMesh>                         PetMaterials                                       // 0x50(0x10)
	byte                                               PetSize                                            // 0x60(0x1)
	Class PetCustomisationOverrideDataAsset*           PetOverrideAsset                                   // 0x68(0x8)
};


// Size 0x48
class PetTelemetryComponent: public ActorComponent
{
public:
};


// Size 0x10
class PetWieldableReactMappingsDataAsset: public DataAsset
{
public:
	TArray<Struct PetPartCustomisationComponent>       WieldableReactMappings                             // 0x28(0x10)
};


// Size 0xe8
class PreviewPet: public Actor
{
public:
	byte                                               InitialAnimState                                   // 0x3d8(0x1)
	Struct AIPartId                                    InitialPartIdToLoad                                // 0x3dc(0x8)
	Class AIPartsCategory*                             PreviewPetPartsCategory                            // 0x3e8(0x8)
	Class SkeletalMeshComponent*                       PreviewPetMesh                                     // 0x3f0(0x8)
	Struct PetAnimationDataPreview                     PreviewPetAnimationData                            // 0x3f8(0x10)
	Class AIPartsRetrievalComponent*                   AIPartsRetrievalComponent                          // 0x408(0x8)
	Class PetPartCustomisationComponent*               PetPartCustomisationComponent                      // 0x410(0x8)
};


// Size 0xe0
class AthenaSwimmingAIController: public AthenaAIController
{
public:
	Class SwimmingPathFollowingComponent*              SwimmingPathFollowingComponent                     // 0x8f8(0x8)
	bool                                               IgnoreTargetsOutOfWater                            // 0x900(0x1)
	Class CurveFloat*                                  DistOfAttackerVsChanceToPursue                     // 0x908(0x8)
	TArray<Struct FName>                               TimersToZeroIfStartingRevengeAttack                // 0x910(0x10)
	struct FName                                       DespawnRequiredBlackboardKey                       // 0x920(0x8)
	struct FName                                       DespawnRequiredReasonBlackboardKey                 // 0x928(0x8)
	float                                              PathingFailedWeight                                // 0x930(0x4)
	float                                              PathingFailedThresholdToDespawn                    // 0x934(0x4)
};


// Size 0x8
class BTDecorator_NearSurfaceOfWater: public BTDecorator
{
public:
	float                                              DistanceFromSurface                                // 0x68(0x4)
	bool                                               ReverseLogic                                       // 0x6c(0x1)
};


// Size 0x8
class BTService_SetFloatToTheSurfaceWhileInBranch: public BTService
{
public:
	bool                                               FloatToTheSurfaceWhileInBranch                     // 0x70(0x1)
};


// Size 0x8
class BTTask_SetFloatToTheSurface: public BTTaskNode
{
public:
	bool                                               ShouldFloatToTheSurface                            // 0x60(0x1)
};


// Size 0x0
class SwimmingCreatureMovementAnimationInterface: public Interface
{
public:
};


// Size 0x128
class SwimmingPathFollowingComponent: public ActorComponent
{
public:
	float                                              DirectSwimmingDotToTarget                          // 0xc8(0x4)
	float                                              ArcToTargetDotToTarget                             // 0xcc(0x4)
	float                                              MaxTargetPitchFactor                               // 0xd0(0x4)
	float                                              MinPosDeltaSqToRepathToMovingTarget                // 0xd4(0x4)
	float                                              MinPosDeltaSqToInvalidateFixedLocation             // 0xd8(0x4)
	float                                              PitchBezierControlPointsLengthFactor               // 0xdc(0x4)
	float                                              TimeMovingAwayFromTargetPosToFlagFailure           // 0xe0(0x4)
	struct FName                                       LineOfSightCollisionProfile                        // 0xe4(0x8)
	float                                              LineOfSightSphereCastRadius                        // 0xec(0x4)
	float                                              LineOfSightCheckInterval                           // 0xf0(0x4)
	float                                              FirstLoSTriggerTimeInNewPath                       // 0xf4(0x4)
	float                                              FirstLoSTriggerTimeInRePath                        // 0xf8(0x4)
	bool                                               DrawDebugOnServer                                  // 0xfc(0x1)
	TArray<Byte DrawDebugOnServer>                     CollisionTypesToDoPathUpdate                       // 0x100(0x10)
	Class SwimmingCreatureMovementComponent*           MovementComponent                                  // 0x110(0x8)
	Class AthenaSwimmingAIController*                  SwimmingAIController                               // 0x118(0x8)
	byte                                               ArcFollowingMode                                   // 0x120(0x1)
	Class Actor*                                       TargetActor                                        // 0x178(0x8)
};


// Size 0x78
class BTTask_SwimTo: public BTTask_BlackboardBase
{
public:
	bool                                               WantsToReportPathFailure                           // 0x88(0x1)
	Struct BlackboardKeySelector                       PathFailureCounter                                 // 0x90(0x28)
	float                                              AcceptableRadius                                   // 0xb8(0x4)
	byte                                               GoalCheckMode                                      // 0xbc(0x1)
	byte                                               ArcMode                                            // 0xbd(0x1)
	byte                                               ArcToTargetDirection                               // 0xbe(0x1)
	byte                                               Swim3DCrestingReaction                             // 0xbf(0x1)
	Struct SpatialOffset                               OffsetFromTargetActor                              // 0xc0(0x8)
	byte                                               SwimSyncMode                                       // 0xc8(0x1)
	bool                                               TrackTargetActor                                   // 0xc9(0x1)
	Struct BlackboardKeySelector                       TrackedTargetActorKey                              // 0xd0(0x28)
	float                                              TimeToSlowDownAndStop                              // 0xf8(0x4)
	byte                                               LineOfSightTestMode                                // 0xfc(0x1)
};


// Size 0x10
class BTTask_SwimTurnOnTheSpot: public BTTask_BlackboardBase
{
public:
	float                                              MaxTurnSpringAccel                                 // 0x88(0x4)
	float                                              TimeUntilMaxTurnSpringAccel                        // 0x8c(0x4)
	float                                              AngleDeltaToAcceptFinalRotation                    // 0x90(0x4)
	float                                              Timeout                                            // 0x94(0x4)
};


// Size 0xd8
class AthenaAIControllerParamsDataAsset: public DataAsset
{
public:
	Struct AthenaAIControllerSenseSettings             DefaultSenseSettings                               // 0x28(0x14)
	float                                              AutoSuccessRangeFromLastSeenLocation               // 0x3c(0x4)
	float                                              DefaultPerceivedNotVisibleAge                      // 0x40(0x4)
	bool                                               CanTargetNotSeenPerceivedActors                    // 0x44(0x1)
	bool                                               OverrideTeamID                                     // 0x45(0x1)
	byte                                               TeamID                                             // 0x46(0x1)
	float                                              TargetSwitchScoreTolerance                         // 0x48(0x4)
	TArray<Float >                                     TargetLoadWeightingBias                            // 0x50(0x10)
	float                                              DistanceToStartTargetPickingDecrease               // 0x60(0x4)
	float                                              TargetPickingDistScoreAtMaxSightRange              // 0x64(0x4)
	float                                              VisionAngleToStartTargetPickingDecrease            // 0x68(0x4)
	float                                              TargetPickingFacingScoreAtMaxPeripheralVisionAngle // 0x6c(0x4)
	bool                                               UseDamageAsFactorInTargetScore                     // 0x70(0x1)
	Struct AthenaAIControllerDamageTargetScoreFromPerceivedTarget DamageTargetScores                                 // 0x74(0x14)
	TArray<class SharedParamValues*>                   SharedParamValues                                  // 0x88(0x10)
	bool                                               IndividualOverrideMeshScale                        // 0x98(0x1)
	float                                              IndividualMeshScale                                // 0x9c(0x4)
	Struct AthenaAIControllerHealthCustomisation       IndividualHealthCustomisationValues                // 0xa0(0xc)
	TArray<Struct IndividualHealthCustomisationValues> IndividualInitialBlackboardValues                  // 0xb0(0x10)
	TArray<Struct IndividualInitialBlackboardValues>   IndividualNamedControllerParams                    // 0xc0(0x10)
	TArray<Struct IndividualNamedControllerParams>     IndividualNamedWeightedRangesControllerParams      // 0xd0(0x10)
	TArray<Struct IndividualNamedWeightedRangesControllerParams> IndividualAIStrategySenseSettingOverrides          // 0xe0(0x10)
	bool                                               IndividualOverrideCurrentTargetPerceivedNotVisibleAge // 0xf0(0x1)
	float                                              IndividualCurrentTargetPerceivedNotVisibleAge      // 0xf4(0x4)
	struct FName                                       FeatureName                                        // 0xf8(0x8)
};


// Size 0x0
class TaleQuestGetTinySharkExperienceParticipatingCrews: public TaleQuestStep
{
public:
};


// Size 0x28
class TaleQuestGetTinySharkExperienceParticipatingCrewsDesc: public TaleQuestStepDesc
{
public:
	Class TinySharkExperience*                         TinySharkExperience                                // 0x80(0x8)
	Struct QuestVariableGuidArray                      ParticipatingCrews                                 // 0x88(0x20)
};


// Size 0x70
class TaleQuestGetTinySharkPawn: public TaleQuestStep
{
public:
};


// Size 0x28
class TaleQuestGetTinySharkPawnDesc: public TaleQuestStepDesc
{
public:
	Class TinySharkExperience*                         TinySharkExperience                                // 0x80(0x8)
	Struct QuestVariableSharkPawn                      TinySharkPawn                                      // 0x88(0x20)
};


// Size 0x0
class TaleQuestStartTinySharkExperienceStep: public TaleQuestStep
{
public:
};


// Size 0x10
class TaleQuestTinySharkService: public TaleQuestService
{
public:
	TArray<class ActiveExperiences*>                   ActiveExperiences                                  // 0x60(0x10)
};


// Size 0x0
class TaleQuestTinySharkServiceDesc: public TaleQuestServiceDesc
{
public:
};


// Size 0x110
class TaleQuestStartTinySharkExperienceStepDesc: public TaleQuestStepDesc
{
public:
	Struct Vector                                      SpawnLocation                                      // 0x80(0xc)
	int                                                PartIndex                                          // 0x8c(0x4)
	Struct TinySharkParams                             TinySharkParams                                    // 0x90(0xb8)
	Class Ship*                                        TargetShip                                         // 0x168(0x8)
	Struct QuestVariableTinySharkExperience            TinySharkExperience                                // 0x170(0x20)
};


// Size 0x110
class TinySharkTelemetryComponent: public ActorComponent
{
public:
};


// Size 0x3a0
class TinySharkExperience: public Actor
{
public:
	float                                              RelevancyDistance                                  // 0x3d8(0x4)
	float                                              TrackingMovementCheckInterval                      // 0x3dc(0x4)
	Class EnvQuery*                                    TrackingMovementValidQuery                         // 0x3e0(0x8)
	Class AIOnDemandSpawner*                           TinySharkSpawner                                   // 0x488(0x8)
	Class SharkPawn*                                   TinySharkPawn                                      // 0x490(0x8)
	struct FName                                       HealthRTPC                                         // 0x498(0x8)
	Struct TinySharkParams                             Params                                             // 0x4a8(0xb8)
	Class TinySharkTelemetryComponent*                 TinySharkTelemetryComponent                        // 0x560(0x8)
	Class Ship*                                        TrackedShip                                        // 0x568(0x8)
	Struct EncounterParams                             SightingEncounterParams                            // 0x5f0(0xc)
	Struct EncounterParams                             CloseEncounterParams                               // 0x5fc(0xc)
};


// Size 0xb8
class TinySharkParamsDataAsset: public DataAsset
{
public:
	Struct TinySharkParams                             Params                                             // 0x28(0xb8)
};


// Size 0x0
class TinySharkServiceInterface: public Interface
{
public:
};


// Size 0x1b8
class TinySharkService: public Actor
{
public:
	Class TinySharkServiceParamsDataAsset*             TinySharkServiceParams                             // 0x3e0(0x8)
	TArray<class TinySharkExperiences*>                TinySharkExperiences                               // 0x558(0x10)
};


// Size 0x30
class TinySharkServiceParamsDataAsset: public DataAsset
{
public:
	Struct TinySharkServiceParams                      Params                                             // 0x28(0x28)
	int                                                MaxNumTinySharkExperiences                         // 0x50(0x4)
};


// Size 0x50
class MeshMemoryConstraintsAIPartsDesc: public AIPartsDesc
{
public:
	Struct StringAssetReference                        Mesh                                               // 0x38(0x10)
	class                                              MeshFallbackCategory                               // 0x50(0x8)
	class                                              BudgetToCountMemoryAgainstIfNoFallback             // 0x58(0x8)
	TArray<class OverrideMaterials*>                   OverrideMaterials                                  // 0x60(0x10)
	TArray<Struct OverrideMaterials>                   FallbackOverrideMaterials                          // 0x70(0x10)
};


// Size 0x8
class TeleportAIAbility: public AthenaAIAbility
{
public:
};


// Size 0x0
class AIItemParameterInterface: public Interface
{
public:
};


// Size 0x60
class AthenaAIControllerSharedParamValuesDataAsset: public DataAsset
{
public:
	bool                                               OverrideMeshScale                                  // 0x28(0x1)
	float                                              MeshScale                                          // 0x2c(0x4)
	bool                                               OverrideCurrentTargetPerceivedNotVisibleAge        // 0x30(0x1)
	float                                              CurrentTargetPerceivedNotVisibleAge                // 0x34(0x4)
	TArray<Struct CurrentTargetPerceivedNotVisibleAge> AIStrategySenseSettingOverrides                    // 0x38(0x10)
	Struct AthenaAIControllerHealthCustomisation       HealthCustomisationValues                          // 0x48(0xc)
	TArray<Struct HealthCustomisationValues>           InitialBlackboardValues                            // 0x58(0x10)
	TArray<Struct InitialBlackboardValues>             NamedControllerParams                              // 0x68(0x10)
	TArray<Struct NamedControllerParams>               NamedWeightedRangesControllerParams                // 0x78(0x10)
};


// Size 0xd0
class AthenaAICharacterControllerSharedParamValuesDataAsset: public AthenaAIControllerSharedParamValuesDataAsset
{
public:
	bool                                               OverrideUseRVOAvoidance                            // 0x88(0x1)
	bool                                               UseRVOAvoidance                                    // 0x89(0x1)
	bool                                               OverridePrioritiseInteractablesBeforeEnemies       // 0x8a(0x1)
	bool                                               PrioritiseInteractablesBeforeEnemies               // 0x8b(0x1)
	Class CurveFloat*                                  DistanceInMToCannonShotHitChanceCurve              // 0x90(0x8)
	TArray<Struct DistanceInMToCannonShotHitChanceCurve> AIStrategyMovementProperties                       // 0x98(0x10)
	TArray<Struct AIStrategyMovementProperties>        ItemCategoryAIStrategyMovementPropertiesOverrides  // 0xa8(0x10)
	Struct AthenaAICharacterCannonTargetingParams      CannonTargetingParams                              // 0xb8(0x10)
	TArray<Struct CannonTargetingParams>               WieldedItemProjectileEffectivenessProperties       // 0xc8(0x10)
	TArray<Struct WieldedItemProjectileEffectivenessProperties> WieldedItemOverrideNamedControllerParams           // 0xd8(0x10)
	TArray<Struct WieldedItemOverrideNamedControllerParams> NamedItemParams                                    // 0xe8(0x10)
	TArray<Struct NamedItemParams>                     SpawnItemDescForItemCategories                     // 0xf8(0x10)
	TArray<class AIAbilityParams*>                     AIAbilityParams                                    // 0x108(0x10)
	TArray<Struct AIAbilityParams>                     NonItemEngageOptions                               // 0x118(0x10)
	Struct StringAssetReference                        AnimationDataOverrideAsset                         // 0x128(0x10)
	Struct StringAssetReference                        CustomAnimationAsset                               // 0x138(0x10)
	bool                                               OverrideNoInitialItem                              // 0x148(0x1)
	bool                                               NoInitialItem                                      // 0x149(0x1)
	bool                                               OverrideBeginFleeing                               // 0x14a(0x1)
	bool                                               BeginFleeing                                       // 0x14b(0x1)
	Class EnvQuery*                                    FleeingEQS                                         // 0x150(0x8)
};


// Size 0xf8
class AthenaAICharacterControllerParamsDataAsset: public AthenaAIControllerParamsDataAsset
{
public:
	bool                                               IndividualOverrideUseRVOAvoidance                  // 0x100(0x1)
	bool                                               IndividualUseRVOAvoidance                          // 0x101(0x1)
	bool                                               IndividualOverridePrioritiseInteractablesBeforeEnemies // 0x102(0x1)
	bool                                               IndividualPrioritiseInteractablesBeforeEnemies     // 0x103(0x1)
	Class CurveFloat*                                  IndividualDistanceInMToCannonShotHitChanceCurve    // 0x108(0x8)
	TArray<Struct IndividualDistanceInMToCannonShotHitChanceCurve> IndividualAIStrategyMovementProperties             // 0x110(0x10)
	TArray<Struct IndividualAIStrategyMovementProperties> IndividualItemCategoryAIStrategyMovementPropertiesOverrides // 0x120(0x10)
	Struct AthenaAICharacterCannonTargetingParams      IndividualCannonTargetingParams                    // 0x130(0x10)
	TArray<Struct IndividualCannonTargetingParams>     IndividualWieldedItemProjectileEffectivenessProperties // 0x140(0x10)
	TArray<Struct IndividualWieldedItemProjectileEffectivenessProperties> IndividualWieldedItemOverrideNamedControllerParams // 0x150(0x10)
	TArray<Struct IndividualWieldedItemOverrideNamedControllerParams> IndividualNamedItemParams                          // 0x160(0x10)
	TArray<Struct IndividualNamedItemParams>           IndividualSpawnItemDescForItemCategories           // 0x170(0x10)
	bool                                               UseDamageBasedAbilityStages                        // 0x180(0x1)
	TArray<Float >                                     HealthStages                                       // 0x188(0x10)
	TArray<Struct HealthStages>                        IndividualDamageBasedAIAbilityStages               // 0x198(0x10)
	TArray<class IndividualAIAbilityParams*>           IndividualAIAbilityParams                          // 0x1a8(0x10)
	TArray<Struct IndividualAIAbilityParams>           IndividualNonItemEngageOptions                     // 0x1b8(0x10)
	Struct StringAssetReference                        IndividualAnimationDataOverrideAsset               // 0x1c8(0x10)
	Struct StringAssetReference                        IndividualCustomAnimationAsset                     // 0x1d8(0x10)
	bool                                               IndividualOverrideNoInitialItem                    // 0x1e8(0x1)
	bool                                               IndividualNoInitialItem                            // 0x1e9(0x1)
	bool                                               IndividualOverrideBeginFleeing                     // 0x1ea(0x1)
	bool                                               IndividualBeginFleeing                             // 0x1eb(0x1)
	Class EnvQuery*                                    IndividualFleeingEQS                               // 0x1f0(0x8)
};


// Size 0xa8
class AthenaAIAmmoDataAsset: public DataAsset
{
public:
	TArray<Struct NumberOfRanks>                       AmmoWeights                                        // 0xb8(0x10)
	struct FName                                       FeatureName                                        // 0xc8(0x8)
};


// Size 0x18
class AIAmmoRankProgression: public DataAsset
{
public:
	TArray<Struct AllProgressions>                     RankMappings                                       // 0x28(0x10)
	int                                                NumberOfRanks                                      // 0x38(0x4)
};


// Size 0x10
class AIAmmoProgressionTypeList: public DataAsset
{
public:
	TArray<class AllProgressions*>                     AllProgressions                                    // 0x28(0x10)
};


// Size 0x18
class AIAmmoTypeList: public DataAsset
{
public:
	TArray<class AllAmmo*>                             AllAmmo                                            // 0x28(0x10)
	Class AthenaAIAmmoDataAsset*                       DefaultAmmo                                        // 0x38(0x8)
};


// Size 0x0
class AIAnimationStateInterface: public Interface
{
public:
};


// Size 0x0
class AIChargeUpInterruptedStatus: public StatusBase
{
public:
};


// Size 0x0
class AIClassId: public Object
{
public:
};


// Size 0x40
class AIPartsCategory: public DataAsset
{
public:
	TArray<class Parts*>                               Parts                                              // 0x28(0x10)
	int                                                NextPartsIndex                                     // 0x38(0x4)
	bool                                               UseWeightedArray                                   // 0x3c(0x1)
	struct FName                                       UseWeightedArrayFeatureName                        // 0x40(0x8)
	Struct WeightedProbabilityRange                    WeightedArray                                      // 0x48(0x20)
};


// Size 0x0
class AIPartsServiceInterface: public Interface
{
public:
};


// Size 0x0
class AIEncounterServiceInterface: public Interface
{
public:
};


// Size 0x10
class AIClassIdTypeList: public DataAsset
{
public:
	TArray<Class AvailableColors>                      AllClassIds                                        // 0x28(0x10)
};


// Size 0x10
class AIColorVariantPool: public DataAsset
{
public:
	TArray<Struct OnVulnerabilityStateEntered>         AvailableColors                                    // 0x28(0x10)
};


// Size 0x0
class AICombatEncounterInterface: public Interface
{
public:
};


// Size 0x50
class AIDebugVisualisationComponent: public ActorComponent
{
public:
	TArray<Struct TargetItemDropOverrides>             Lines                                              // 0xc8(0x10)
	TArray<Struct Lines>                               Boxes                                              // 0xd8(0x10)
	TArray<Struct Boxes>                               Cylinders                                          // 0xe8(0x10)
	TArray<Struct Cylinders>                           Spheres                                            // 0xf8(0x10)
	TArray<Struct Spheres>                             Cones                                              // 0x108(0x10)
};


// Size 0x0
class AIElectricProjectileInterruptedStatus: public StatusBase
{
public:
};


// Size 0x70
class AIEncounterGenerationRecipe: public DataAsset
{
public:
	TArray<Struct FeatureBasedRecipeLists>             Forms                                              // 0x28(0x10)
	Struct StringAssetReference                        SkillsetProgression                                // 0x38(0x10)
	Struct StringAssetReference                        ItemDropProgression                                // 0x48(0x10)
	Struct TargetSkillsetProgressionPair               TargetSkillsetOverrides                            // 0x58(0x20)
	Struct TargetItemDropProgressionPair               TargetItemDropOverrides                            // 0x78(0x20)
};


// Size 0x20
class AIEncounterGenerationRecipeRankOrderList: public DataAsset
{
public:
	TArray<class Recipes*>                             Recipes                                            // 0x28(0x10)
	TArray<Struct Recipes>                             FeatureBasedRecipeLists                            // 0x38(0x10)
};


// Size 0x10
class AIEncounterGenerationRecipeTypeList: public DataAsset
{
public:
	TArray<class AllRecipes*>                          AllRecipes                                         // 0x28(0x10)
};


// Size 0x0
class AIEncounterGenerationServiceInterface: public Interface
{
public:
};


// Size 0x88
class AIEncounterGenerationService: public Actor
{
public:
	Class AIEncounterGenerationRecipeTypeList*         GenerationRecipes                                  // 0x3d8(0x8)
};


// Size 0x18
class AIFormRankProgression: public DataAsset
{
public:
	TArray<Struct AllProgressions>                     RankMappings                                       // 0x28(0x10)
	int                                                NumberOfRanks                                      // 0x38(0x4)
};


// Size 0x10
class AIFormProgressionTypeList: public DataAsset
{
public:
	TArray<class AllProgressions*>                     AllProgressions                                    // 0x28(0x10)
};


// Size 0x18
class AIFormTypeList: public DataAsset
{
public:
	TArray<class AllForms*>                            AllForms                                           // 0x28(0x10)
	Class AthenaAIFormDataAsset*                       DefaultForm                                        // 0x38(0x8)
};


// Size 0x10
class AILoadoutProgressionTypeList: public DataAsset
{
public:
	TArray<class AllProgressions*>                     AllProgressions                                    // 0x28(0x10)
};


// Size 0x10
class AILoadoutTypeList: public DataAsset
{
public:
	TArray<class AllLoadouts*>                         AllLoadouts                                        // 0x28(0x10)
};


// Size 0x10
class AISkillsetProgressionTypeList: public DataAsset
{
public:
	TArray<class AllProgressions*>                     AllProgressions                                    // 0x28(0x10)
};


// Size 0x10
class AISkillsetTypeList: public DataAsset
{
public:
	TArray<class AllSkillsets*>                        AllSkillsets                                       // 0x28(0x10)
};


// Size 0x10
class AIPartsCategoryTypeList: public DataAsset
{
public:
	TArray<class AllPartsCategories*>                  AllPartsCategories                                 // 0x28(0x10)
};


// Size 0x3d0
class AIEncounterService: public Actor
{
public:
	TArray<Struct NumberOfRanks>                       DefaultPartsCategories                             // 0x3d8(0x10)
	TArray<Struct DefaultPartsCategories>              FormPartsCategories                                // 0x3e8(0x10)
	Class AIAmmoTypeList*                              Ammo                                               // 0x3f8(0x8)
	Class AIAmmoProgressionTypeList*                   AmmoProgressions                                   // 0x400(0x8)
	Class AIFormTypeList*                              Forms                                              // 0x408(0x8)
	Class AIFormProgressionTypeList*                   FormProgressions                                   // 0x410(0x8)
	Class AILoadoutTypeList*                           Loadouts                                           // 0x418(0x8)
	Class AILoadoutProgressionTypeList*                LoadoutProgressions                                // 0x420(0x8)
	Class AISkillsetTypeList*                          Skillsets                                          // 0x428(0x8)
	Class AISkillsetProgressionTypeList*               SkillsetProgressions                               // 0x430(0x8)
	Class AIClassIdTypeList*                           ClassIds                                           // 0x438(0x8)
	Class AIPartsCategoryTypeList*                     PartsCategories                                    // 0x440(0x8)
	Class AIColorVariantPool*                          TeamColors                                         // 0x448(0x8)
	Class AIItemDropComponentList*                     AIItemDropSpawners                                 // 0x450(0x8)
	Class AIItemDropComponentRankProgressionList*      AIItemDropSpawnerProgressions                      // 0x458(0x8)
	TArray<class DebugSpawnableEncounterSettings*>     DebugSpawnableEncounterSettings                    // 0x460(0x10)
};


// Size 0x18
class AISkillsetRankProgression: public DataAsset
{
public:
	TArray<Struct TeamColor>                           RankMappings                                       // 0x28(0x10)
	int                                                NumberOfRanks                                      // 0x38(0x4)
};


// Size 0x38
class AIEncounterSettings: public DataAsset
{
public:
	class                                              AIClass                                            // 0x48(0x8)
	Struct StringAssetReference                        TeamColor                                          // 0x50(0x10)
};


// Size 0xb0
class AIEncounterSettingsFixed: public AIEncounterSettings
{
public:
	Struct StringAssetReference                        SpecificSkillset                                   // 0x60(0x10)
	Struct StringAssetReference                        Loadout                                            // 0x70(0x10)
	Struct StringAssetReference                        Form                                               // 0x80(0x10)
	Struct StringAssetReference                        Ammo                                               // 0x90(0x10)
	struct FName                                       DioramaRole                                        // 0xa0(0x8)
	Struct FText                                       LocalisableName                                    // 0xa8(0x38)
	Struct EncounterParams                             EncounterTrackingParams                            // 0xe0(0xc)
};


// Size 0x60
class AIEncounterSettingsRankProgression: public AIEncounterSettings
{
public:
	Struct StringAssetReference                        SkillsetProgression                                // 0x60(0x10)
	Struct StringAssetReference                        LoadoutProgression                                 // 0x70(0x10)
	Struct StringAssetReference                        FormProgression                                    // 0x80(0x10)
	Struct StringAssetReference                        AmmoProgression                                    // 0x90(0x10)
	Struct StringAssetReference                        ItemDropComponentProgression                       // 0xa0(0x10)
	Struct EncounterParams                             EncounterTrackingParams                            // 0xb0(0xc)
};


// Size 0x10
class AIFormItemSpawnRequirement: public SpawnRequirement
{
public:
	TArray<class AllowedForms*>                        AllowedForms                                       // 0x50(0x10)
};


// Size 0x0
class AIIdentifierOwnerInterface: public Interface
{
public:
};


// Size 0x0
class AIInteractableInterface: public Interface
{
public:
};


// Size 0x0
class AIInteractableOperatorInterface: public Interface
{
public:
};


// Size 0x10
class AIItemDropComponentList: public DataAsset
{
public:
	TArray<AssetClass AllProgressions>                 AllSpawners                                        // 0x28(0x10)
};


// Size 0x10
class AIItemDropComponentRankProgressionList: public DataAsset
{
public:
	TArray<class AllProgressions*>                     AllProgressions                                    // 0x28(0x10)
};


// Size 0x0
class AIItemSpawnDataSourceInterface: public Interface
{
public:
};


// Size 0x10
class AIItemSpawnDataSourceComponent: public SceneComponent
{
public:
	Class ItemSpawnTransformWithRandomQuantityDataAssset* ItemSpawnDataAsset                                 // 0x2d8(0x8)
};


// Size 0x18
class AIItemSpawnRankProgression: public DataAsset
{
public:
	TArray<Struct AllowedLoadouts>                     RankMappings                                       // 0x28(0x10)
	int                                                NumberOfRanks                                      // 0x38(0x4)
};


// Size 0x0
class AILoadoutInterface: public Interface
{
public:
};


// Size 0x10
class AILoadoutItemSpawnRequirement: public SpawnRequirement
{
public:
	TArray<class AllowedLoadouts*>                     AllowedLoadouts                                    // 0x50(0x10)
};


// Size 0x18
class AILoadoutRankProgression: public DataAsset
{
public:
	TArray<Struct AddNameplateToAI>                    RankMappings                                       // 0x28(0x10)
	int                                                NumberOfRanks                                      // 0x38(0x4)
};


// Size 0x0
class AILoadoutWithNonStorableInterface: public Interface
{
public:
};


// Size 0x0
class AIManagerBlueprintFunctionLibrary: public BlueprintFunctionLibrary
{
public:
};


// Size 0x0
class AIManagerServiceInterface: public Interface
{
public:
};


// Size 0x20
class AthenaAITypeListDataAsset: public DataAsset
{
public:
	TArray<Struct FeatureName>                         AITypes                                            // 0x28(0x10)
	TArray<Struct AITypes>                             AdditionalAIActors                                 // 0x38(0x10)
};


// Size 0x18
class AISpawnWaveSequence: public DataAsset
{
public:
	TArray<Struct NumberOfRanks>                       Waves                                              // 0x28(0x10)
	struct FName                                       FeatureName                                        // 0x38(0x8)
};


// Size 0x18
class AISpawnWaveSequenceRankProgression: public DataAsset
{
public:
	TArray<Struct FeatureName>                         RankMappings                                       // 0x28(0x10)
	int                                                NumberOfRanks                                      // 0x38(0x4)
};


// Size 0x40
class AIWeightedProbabilityRangeOfRangesAsset: public DataAsset
{
public:
	float                                              RespawnChance                                      // 0x28(0x4)
	Struct WeightedProbabilityRangeOfRanges            RespawnTimerRanges                                 // 0x30(0x30)
	struct FName                                       FeatureName                                        // 0x60(0x8)
};


// Size 0x18
class AIWeightedProbabilityRangeOfRangesRankProgression: public DataAsset
{
public:
	TArray<Struct AICharacterWaterInteractionCollisionProfileName> RankMappings                                       // 0x28(0x10)
	int                                                NumberOfRanks                                      // 0x38(0x4)
};


// Size 0x0
class AIPlayerTrackerObservedInterface: public Interface
{
public:
};


// Size 0x0
class AIPlayerTrackerObserverInterface: public Interface
{
public:
};


// Size 0x0
class AISpawnRequestResultLoggerInterface: public Interface
{
public:
};


// Size 0xa0
class AthenaAISettings: public DeveloperSettings
{
public:
	Struct StringAssetReference                        AITypesAsset                                       // 0x38(0x10)
	Struct StringAssetReference                        AISpawnContextListAsset                            // 0x48(0x10)
	int                                                FallbackAIDifficultyRank                           // 0x58(0x4)
	int                                                MaxNumOfSpawnedActors                              // 0x5c(0x4)
	int                                                MaxPlayerEquivalentAIsPerRegion                    // 0x60(0x4)
	int                                                MaxWorldAICostUnitsForWorld                        // 0x64(0x4)
	int                                                AIRegionCostUnitsForPlayer                         // 0x68(0x4)
	float                                              CharacterNetRelevancy                              // 0x6c(0x4)
	float                                              CharacterRegionDensityCheckTimer                   // 0x70(0x4)
	float                                              CharacterWorldDensityCheckTimer                    // 0x74(0x4)
	float                                              DistanceToPlayerToRaiseSpawnPriority               // 0x78(0x4)
	float                                              MinRetryingCanSpawnRequestTime                     // 0x7c(0x4)
	float                                              MaxRetryingCanSpawnRequestTime                     // 0x80(0x4)
	float                                              MinRetryingLocationCheckTime                       // 0x84(0x4)
	float                                              MaxRetryingLocationCheckTime                       // 0x88(0x4)
	float                                              CharacterAINoiseTickInterval                       // 0x8c(0x4)
	float                                              PeriodicAINoiseComponentTickInterval               // 0x90(0x4)
	float                                              FaunaPlayerProximityDormancyRange                  // 0x94(0x4)
	float                                              FaunaPlayerProximityTickTime                       // 0x98(0x4)
	float                                              FaunaTimeOutOfPlayerProximityForDormancy           // 0x9c(0x4)
	float                                              DefaultNavAgentCapsuleRadius                       // 0xa0(0x4)
	float                                              DefaultNavAgentCapsuleHalfHeight                   // 0xa4(0x4)
	float                                              MinDelayBeforeRetryingUnsuccessfulWave             // 0xa8(0x4)
	float                                              MaxDelayBeforeRetryingUnsuccessfulWave             // 0xac(0x4)
	Struct StringAssetReference                        AIEncounterServiceAssetClassFileLocation           // 0xb0(0x10)
	Struct StringAssetReference                        AIEncounterGenerationServiceAssetClassFileLocation // 0xc0(0x10)
	struct FName                                       AICharacterWaterInteractionCollisionProfileName    // 0xd0(0x8)
};


// Size 0x8
class AISpawnContextId: public Object
{
public:
	int                                                Weighting                                          // 0x28(0x4)
};


// Size 0x0
class CustomizableAIManagerInterface: public Interface
{
public:
};


// Size 0x680
class AIManagerService: public Actor
{
public:
	TArray<Class BlockAIAbility>                       LoadedAIPawnClasses                                // 0x4d8(0x10)
	TArray<Class LoadedAIPawnClasses>                  LoadedAIItemDropComponentClasses                   // 0x4e8(0x10)
	Class AmbientWaterSpawnerManager*                  AmbientWaterSpawnerManager                         // 0x500(0x8)
	TArray<class PlayerTrackers*>                      PlayerTrackers                                     // 0x838(0x10)
	TArray<Struct PlayerTrackers>                      CustomPlayersTrackerDatas                          // 0x848(0x10)
	TArray<class SpawnersPendingShutdown*>             SpawnersPendingShutdown                            // 0x958(0x10)
	Class AthenaAITypeListDataAsset*                   AITypeList                                         // 0xa10(0x8)
	Class AISpawnContextList*                          AISpawnContextList                                 // 0xa18(0x8)
};


// Size 0x0
class DebugAIManagerServiceInterface: public Interface
{
public:
};


// Size 0x100
class DebugAIManagerService: public AIManagerService
{
public:
	TArray<Class TeamColors>                           BlockedAIAbilities                                 // 0xb40(0x10)
};


// Size 0x8
class AINoiseFireInstigator: public Actor
{
public:
};


// Size 0x18
class AIPartsService: public Object
{
public:
	Class AIPartsCategoryTypeList*                     PartsCategoriesList                                // 0x30(0x8)
	Class AIColorVariantPool*                          TeamColors                                         // 0x38(0x8)
};


// Size 0x0
class AIPartCustomizationInterface: public Interface
{
public:
};


// Size 0x10
class AIPartIdListingAsset: public DataAsset
{
public:
	TArray<Struct KilledVfxTemplate>                   AIPartIdsVariantInfo                               // 0x28(0x10)
};


// Size 0x0
class AIPartsRetrievalInterface: public Interface
{
public:
};


// Size 0xa8
class AIPartsRetrievalComponent: public ActorComponent
{
public:
	Class AIPartsCategory*                             PartsCategory                                      // 0xd0(0x8)
	Struct ReplicatedAIPartsData                       ReplicatedAIPartsData                              // 0xd8(0x18)
};


// Size 0x0
class AIPawnInterface: public Interface
{
public:
};


// Size 0x0
class AIPawnTurnActiveInterface: public Interface
{
public:
};


// Size 0x1e0
class AIProximityPlayerTracker: public AISpawnerPlayerTracker
{
public:
};


// Size 0x38
class FilterFirstPlayerEnterPlayerTrackerDecorator: public AISpawnerPlayerTracker
{
public:
};


// Size 0x0
class AIProjectileInterface: public Interface
{
public:
};


// Size 0x0
class AIRegionInterface: public Interface
{
public:
};


// Size 0x70
class AIRegionComponent: public SceneComponent
{
public:
	bool                                               UpdateRegionPosition                               // 0x2d8(0x1)
	struct FName                                       NavMeshAgentType                                   // 0x2dc(0x8)
	float                                              RegionRadius                                       // 0x2e4(0x4)
	TArray<Struct RegionRadius>                        SpawnLocationGroups                                // 0x2e8(0x10)
};


// Size 0x0
class AIShipInterface: public Interface
{
public:
};


// Size 0x10
class AISkillsetItemSpawnRequirement: public SpawnRequirement
{
public:
	TArray<class DisallowedSkillsets*>                 DisallowedSkillsets                                // 0x50(0x10)
};


// Size 0x0
class AISpawnContextContainerInterface: public Interface
{
public:
};


// Size 0x18
class AISpawnContextContainerComponent: public ActorComponent
{
public:
};


// Size 0x10
class AISpawnContextList: public DataAsset
{
public:
	TArray<Struct NumWavesToSpawnOnSpottedNewTarget>   SpawnContextList                                   // 0x28(0x10)
};


// Size 0x0
class AISpawnContextProviderInterface: public Interface
{
public:
};


// Size 0x40
class AIFixedWavesSpawner: public AISpawner
{
public:
	TArray<Struct SpawnedWave>                         SpawnedWaves                                       // 0x428(0x10)
	int                                                NumWavesToSpawnOnSpottedNewTarget                  // 0x438(0x4)
};


// Size 0x118
class AIIncrementalWaveSpawner: public AISpawner
{
public:
	Struct AISpawnerWave                               SpawnedWave                                        // 0x428(0x100)
};


// Size 0x100
class AIInteractableSpawner: public AISpawner
{
public:
	class                                              AIInteractableType                                 // 0x428(0x8)
	float                                              InhabitedChance                                    // 0x430(0x4)
	Struct WeightedProbabilityRangeOfRanges            DelayAfterSuccessfulInhabitedCheck                 // 0x438(0x30)
	Struct WeightedProbabilityRangeOfRanges            DelayAfterFailedInhabitedCheck                     // 0x468(0x30)
	float                                              SpawnForInteractableChance                         // 0x498(0x4)
	Struct WeightedProbabilityRangeOfRanges            DelayAfterSuccessfulSpawnOnInteractableCheck       // 0x4a0(0x30)
	Struct WeightedProbabilityRangeOfRanges            DelayAfterFailedSpawnOnInteractableCheck           // 0x4d0(0x30)
	bool                                               RunInhabitedSimulation                             // 0x500(0x1)
	bool                                               RunSpawnForInteractableSimulation                  // 0x501(0x1)
	int                                                NumIterations                                      // 0x504(0x4)
	byte                                               CachedPlaymode                                     // 0x520(0x1)
};


// Size 0x0
class AIOnDemandSpawner: public AISpawner
{
public:
};


// Size 0x1e8
class AIPerPlayerSpawner: public AISpawner
{
public:
	bool                                               CheckSpawnedActorsInRadiusBeforeSpawning           // 0x428(0x1)
	float                                              RadiusToCheckForExistingPopulation                 // 0x42c(0x4)
	int                                                MaxExistingPopulationInRadius                      // 0x430(0x4)
	bool                                               DespawnAllPawnsWhenAllPlayersLeave                 // 0x434(0x1)
	int                                                MaxActorsTotalPerPlayer                            // 0x438(0x4)
	bool                                               RunSimulation                                      // 0x43c(0x1)
	int                                                RankForSimulation                                  // 0x440(0x4)
	int                                                NumIterations                                      // 0x444(0x4)
	bool                                               WantsToTemporarilyRememberPlayers                  // 0x448(0x1)
	Struct WeightedProbabilityRangeOfRanges            TemporaryPlayerMemoryTimeRange                     // 0x450(0x30)
};


// Size 0x88
class NamedAIDataAsset: public DataAsset
{
public:
	TArray<Text None>                                  MaleCaptainNames                                   // 0x28(0x10)
	TArray<Struct FText>                               FemaleCaptainNames                                 // 0x38(0x10)
	TArray<Struct FText>                               MaleCrewNames                                      // 0x48(0x10)
	TArray<Struct FText>                               FemaleCrewNames                                    // 0x58(0x10)
	TArray<Struct FemaleCrewNames>                     CustomNameTitles                                   // 0x68(0x10)
	TArray<Struct CustomNameTitles>                    CustomNameOverrides                                // 0x78(0x10)
	class                                              DefaultClassId                                     // 0x88(0x8)
	class                                              FemaleCaptainClassId                               // 0x90(0x8)
	class                                              MaleCaptainClassId                                 // 0x98(0x8)
	class                                              FemaleCrewClassId                                  // 0xa0(0x8)
	class                                              MaleCrewClassId                                    // 0xa8(0x8)
};


// Size 0xd0
class AIBoobyTrapSpawner: public AIPerPlayerSpawner
{
public:
	int                                                NumberOfWavesToSpawn                               // 0x610(0x4)
	Class WwiseEvent*                                  NewWaveSpawnSfx                                    // 0x618(0x8)
	float                                              NewWaveSpawnSfxTriggerRadius                       // 0x620(0x4)
	TArray<Class NewWaveSpawnSfxTriggerRadius>         ShowNameplatesFor                                  // 0x628(0x10)
	Class NamedAIDataAsset*                            NamedAIDataAsset                                   // 0x638(0x8)
	Class Actor*                                       ActorToTrack                                       // 0x640(0x8)
};


// Size 0x38
class AIProgressiveWavesSpawner: public AISpawner
{
public:
	bool                                               ApplyLocalisableNamesToNameplates                  // 0x428(0x1)
	TArray<Struct ApplyLocalisableNamesToNameplates>   Waves                                              // 0x430(0x10)
	Class Actor*                                       TriggerActor                                       // 0x458(0x8)
};


// Size 0x0
class AISpawnerSpawnInteractableAssignmentInterface: public Interface
{
public:
};


// Size 0x138
class AIWaveSpawner: public AISpawner
{
public:
	Struct AISpawnerWave                               SpawnedWave                                        // 0x430(0x100)
	float                                              MinRespawnTime                                     // 0x530(0x4)
	float                                              MaxRespawnTime                                     // 0x534(0x4)
};


// Size 0x10
class AISpawnerList: public DataAsset
{
public:
	TArray<class Spawners*>                            Spawners                                           // 0x28(0x10)
};


// Size 0x8
class AISpawnOverrideCondition: public Object
{
public:
	bool                                               InvertResult                                       // 0x28(0x1)
};


// Size 0x20
class AISpawnCampaignCondition: public AISpawnOverrideCondition
{
public:
	struct FName                                       CampaignName                                       // 0x30(0x8)
};


// Size 0x10
class AISpawnComplexCondition: public AISpawnOverrideCondition
{
public:
	TArray<class Conditions*>                          Conditions                                         // 0x30(0x10)
};


// Size 0x0
class AISpawnAndCondition: public AISpawnComplexCondition
{
public:
};


// Size 0x0
class AISpawnOrCondition: public AISpawnComplexCondition
{
public:
};


// Size 0x10
class AISpawnMatchesAllContextsCondition: public AISpawnOverrideCondition
{
public:
	TArray<Class Contexts>                             Contexts                                           // 0x30(0x10)
};


// Size 0x10
class AISpawnMatchesAnyContextCondition: public AISpawnOverrideCondition
{
public:
	TArray<Class ShouldApplyOverride>                  Contexts                                           // 0x30(0x10)
};


// Size 0x8
class StaticAISpawnCondition: public AISpawnOverrideCondition
{
public:
	bool                                               ShouldApplyOverride                                // 0x30(0x1)
};


// Size 0x0
class AISpawnPointSeedComponent: public SceneComponent
{
public:
};


// Size 0x0
class AISpawnRegionInterface: public Interface
{
public:
};


// Size 0x0
class AITargetServiceInterface: public Interface
{
public:
};


// Size 0x0
class AITargetInterface: public Interface
{
public:
};


// Size 0x18
class AITargetActor: public Actor
{
public:
	Class SceneComponent*                              Root                                               // 0x3d8(0x8)
	byte                                               Team                                               // 0x3e0(0x1)
};


// Size 0x18
class AITargetService: public Actor
{
public:
};


// Size 0x0
class AITargetWeaponInterface: public Interface
{
public:
};


// Size 0x0
class AIWithFormInterface: public Interface
{
public:
};


// Size 0x250
class AmbientWaterSpawnerManager: public Actor
{
public:
	Class SceneComponent*                              Root                                               // 0x3e0(0x8)
	Class AthenaAISettings*                            AthenaAISettings                                   // 0x3e8(0x8)
	TArray<Struct FName>                               AISpawnBlockingContextNames                        // 0x3f0(0x10)
	Class AIPerPlayerSpawner*                          SharkPerPlayerSpawnerTemplate                      // 0x400(0x8)
	Class AIPerPlayerSpawner*                          SirenPerPlayerSpawnerTemplate                      // 0x408(0x8)
	float                                              SirenEncounterRegionRadius                         // 0x410(0x4)
	float                                              SirenEncounterShutdownTime                         // 0x414(0x4)
	Struct WeightedProbabilityRangeOfRanges            InitialSirenSpawningWeightedTimeRange              // 0x418(0x30)
	Struct WeightedProbabilityRangeOfRanges            UnsuccessfulSirenSpawningWeightedTimeRange         // 0x448(0x30)
	Struct WeightedProbabilityRangeOfRanges            SuccessfulSirenSpawningWeightedTimeRange           // 0x478(0x30)
	Struct ChanceForSharksToBlockSirenEncounterData    SharkEncounterSpawnBlockingData                    // 0x4a8(0xc)
	TArray<Struct SharkEncounterSpawnBlockingData>     PerDepthSpawnChances                               // 0x4b8(0x10)
	Class AIPerPlayerSpawner*                          SharkPerPlayerSpawner                              // 0x4c8(0x8)
	TArray<Struct SharkPerPlayerSpawner>               PlayersInWater                                     // 0x600(0x10)
	TArray<Struct PlayersInWater>                      SirenEncounters                                    // 0x610(0x10)
};


// Size 0x0
class AmmunitionItemClassProviderInterface: public Interface
{
public:
};


// Size 0x48
class AppliedStatusToMultipleAIWithFormsStatCondition: public StatCondition
{
public:
	TArray<Class bProcessingSpawnLocations>            Status                                             // 0x28(0x10)
	int                                                AICountMinimum                                     // 0x38(0x4)
	bool                                               AllowAllForms                                      // 0x3c(0x1)
	TArray<AssetClass AllowAllForms>                   AllowedAIForms                                     // 0x40(0x10)
	TArray<Class AllowedAIForms>                       AIClassesToIgnore                                  // 0x50(0x10)
	TArray<AssetClass AIClassesToIgnore>               AllowedSources                                     // 0x60(0x10)
};


// Size 0x0
class AquaticAITargetInterface: public Interface
{
public:
};


// Size 0xc8
class BurrowAIAbility: public AthenaAIAbility
{
public:
	TArray<Struct OnLifeSpanPercentLeft>               LocationsToSpawnCrack                              // 0x78(0x10)
	Struct TimerHandle                                 TimerHandleStartNextSpawnWave                      // 0x88(0x4)
	Class Actor*                                       CachedTarget                                       // 0x90(0x8)
	bool                                               bExecuting                                         // 0x124(0x1)
	bool                                               bProcessingSpawnLocations                          // 0x125(0x1)
};


// Size 0x40
class BurrowCrack: public Actor
{
public:
	Class SceneComponent*                              DefaultSceneComponent                              // 0x3d0(0x8)
	Class DecalComponent*                              DecalComponent                                     // 0x3d8(0x8)
	float                                              FadeOutTimeSeconds                                 // 0x3e0(0x4)
	bool                                               HasFadeStarted                                     // 0x3e4(0x1)
};


// Size 0x78
class BurrowAIAbilityParams: public AthenaAIAbilityParams
{
public:
	TArray<Byte StatusToApplyOnHeal>                   ValidBurrowSurfaceTypes                            // 0xc8(0x10)
	class                                              BurrowCrackToSpawn                                 // 0xd8(0x8)
	class                                              BurrowEruptArea                                    // 0xe0(0x8)
	Class EnvQuery*                                    EnvQueryLinesToTarget                              // 0xe8(0x8)
	Class EnvQuery*                                    EnvQueryAroundTarget                               // 0xf0(0x8)
	Struct Vector                                      OffsetPositionForStartTrace                        // 0xf8(0xc)
	float                                              SurfaceDetectRaycastLength                         // 0x104(0x4)
	float                                              BurrowAroundTargetRange                            // 0x108(0x4)
	float                                              MaxSurfaceAngleForBurrow                           // 0x10c(0x4)
	bool                                               bEruptFromClosestSpawn                             // 0x110(0x1)
	Struct MinMaxBurrowAbility                         EruptionDelayRndBetweenMinMaxSeconds               // 0x114(0x8)
	Struct MinMaxBurrowAbility                         NumberOfCrackWavesMinMax                           // 0x11c(0x8)
	Struct MinMaxBurrowAbility                         RndSecondsBetweenCrackWaves                        // 0x124(0x8)
	Struct MinMaxBurrowAbility                         NumberOfCracksPerWaveMinMax                        // 0x12c(0x8)
	Struct MinMaxBurrowAbility                         RndSecondsBetweenEachCrackSpawn                    // 0x134(0x8)
};


// Size 0x30
class BurrowHealAIAbilityParams: public BurrowAIAbilityParams
{
public:
	class                                              AllyTypeToHeal                                     // 0x140(0x8)
	float                                              HealDuration                                       // 0x148(0x4)
	float                                              RadiusForValidTargets                              // 0x14c(0x4)
	int                                                NumberOfTargetsToHeal                              // 0x150(0x4)
	Struct Status                                      StatusToApplyOnHeal                                // 0x158(0x18)
};


// Size 0x10
class BurrowHealAIAbility: public BurrowAIAbility
{
public:
};


// Size 0x0
class AthenaAIBuffAbilityInterface: public Interface
{
public:
};


// Size 0xb0
class CoralShieldAbility: public AthenaAIAbility
{
public:
	TArray<Weakclass OwnerChainLightningSourceInterface> PotentialTargets                                   // 0x78(0x10)
	TArray<Struct CachedBuffReceiver>                  BuffedTargets                                      // 0xa8(0x10)
};


// Size 0x98
class ElectricShieldAbility: public AthenaAIAbility
{
public:
	TArray<Interface BreathVFX>                        SelectedTargets                                    // 0x80(0x10)
};


// Size 0x38
class SporeBreathAIAbility: public AthenaAIAbility
{
public:
	Class StatusEffectOverlapZone*                     BreathActor                                        // 0x78(0x8)
	Class VFXSpawnerComponent*                         BreathVFX                                          // 0x80(0x8)
};


// Size 0x0
class AthenaAIAbilityHandlerInterface: public Interface
{
public:
};


// Size 0x108
class AthenaAIAbilityComponent: public ActorComponent
{
public:
	TArray<class AIAbilities*>                         AIAbilities                                        // 0xd0(0x10)
	TArray<class ActivatableAbilitiesInCurrentStage*>  ActivatableAbilitiesInCurrentStage                 // 0xe0(0x10)
	Class AthenaAIAbility*                             CurrentAIAbility                                   // 0xf0(0x8)
	class                                              QueuedAbilityType                                  // 0xf8(0x8)
	class                                              DebugAlwaysOnAbility                               // 0x100(0x8)
	TArray<Struct DebugAlwaysOnAbility>                AbilityDamageStages                                // 0x108(0x10)
};


// Size 0x118
class AthenaAIAbilityHandlerComponent: public ActorComponent
{
public:
	TArray<Struct DelayBeforeSFXPlays>                 AbilityStages                                      // 0x178(0x10)
	TArray<class AIAbilities*>                         AIAbilities                                        // 0x188(0x10)
	TArray<Class AIAbilities>                          ReadyAbilitiesPool                                 // 0x198(0x10)
	class                                              DebugAlwaysOnAbility                               // 0x1c8(0x8)
	class                                              RequiresActivation                                 // 0x1d0(0x8)
};


// Size 0x38
class CoralShieldAbilityParams: public AthenaAIAbilityParams
{
public:
	float                                              ShieldEffectRadius                                 // 0xc8(0x4)
	float                                              DamageNeededToBreakShield                          // 0xcc(0x4)
	float                                              ShieldLifeTime                                     // 0xd0(0x4)
	Struct Status                                      CoralShieldStatusEffect                            // 0xd8(0x18)
	Class DamageableVulnerabilityLayer*                VulnerabilityToApplyToSelf                         // 0xf0(0x8)
	float                                              DelayBeforeSFXPlays                                // 0xf8(0x4)
};


// Size 0x38
class ElectricShieldAbilityParams: public AthenaAIAbilityParams
{
public:
	float                                              ChargeUpTime                                       // 0xc8(0x4)
	Struct Status                                      BuffInterruptedStatusEffect                        // 0xd0(0x18)
	Struct Status                                      ElectricShieldStatusEffect                         // 0xe8(0x18)
};


// Size 0x80
class SporeBreathAIAbilityParams: public AthenaAIAbilityParams
{
public:
	Struct AthenaAIAbilityPlayerBasedRanges            BreathMaxDuration                                  // 0xc8(0x10)
	float                                              BreathContinueThresholdDistance                    // 0xd8(0x4)
	class                                              BreathActor                                        // 0xe0(0x8)
	Struct VFXHandlerComponentParams                   BreathVFXParams                                    // 0xe8(0x40)
	Struct Vector                                      BreathCollisionVolumeSize                          // 0x128(0xc)
	float                                              BreathCollisionForwardOffset                       // 0x134(0x4)
	float                                              BreathStartDelay                                   // 0x138(0x4)
	class                                              VfxSpawner                                         // 0x140(0x8)
};


// Size 0x0
class BurrowAIAbilityType: public AthenaAIAbilityType
{
public:
};


// Size 0x0
class BurrowHealAIAbilityType: public AthenaAIAbilityType
{
public:
};


// Size 0x0
class CoralShieldAbilityType: public AthenaAIAbilityType
{
public:
};


// Size 0x0
class ElectricShieldAbilityType: public AthenaAIAbilityType
{
public:
};


// Size 0x0
class SporeBreathAIAbilityType: public AthenaAIAbilityType
{
public:
};


// Size 0x10
class AthenaAIRangeBasedAmmoDataAsset: public AthenaAIAmmoDataAsset
{
public:
	TArray<Struct ClearOverridePrioritiseInteractablesBeforeEnemies> AmmoTypeRanges                                     // 0xd0(0x10)
};


// Size 0x0
class AthenaAICharacterStatsInterface: public Interface
{
public:
};


// Size 0x0
class SpawnItemDescProviderInterface: public Interface
{
public:
};


// Size 0x220
class AthenaAICharacterController: public AthenaAIController
{
public:
	Class AthenaAIItemParamsDataAsset*                 ItemParamsDataAsset                                // 0x900(0x8)
	Class LoadoutAsset*                                FallbackLoadoutIfAllEngageItemsDropped             // 0x908(0x8)
	float                                              ControlRotationInterpSpeed                         // 0x910(0x4)
	bool                                               ControlRotationUseConstantInterp                   // 0x914(0x1)
	bool                                               FaceTargetDisabled                                 // 0x915(0x1)
	float                                              MinTurnAngleToPlayTurnAnim                         // 0x918(0x4)
	Class AthenaAICharacterControllerParamsDataAsset*  CharacterParamsDataAsset                           // 0x930(0x8)
	TArray<Struct CharacterParamsDataAsset>            SpawnItemDescForItemCategories                     // 0x9c8(0x10)
	TArray<class AIAbilityParams*>                     AIAbilityParams                                    // 0x9d8(0x10)
	TArray<Struct AIAbilityParams>                     NonItemEngageOptions                               // 0x9e8(0x10)
	Class CurveFloat*                                  DistanceInMToCannonShotHitChanceCurve              // 0x9f8(0x8)
};


// Size 0x0
class AthenaAIControllerNavMeshTogglesInterface: public Interface
{
public:
};


// Size 0x88
class FaunaAIContollerParamsDataAsset: public AthenaAIControllerParamsDataAsset
{
public:
	Struct WeightedProbabilityRange                    Courage                                            // 0x100(0x20)
	TArray<Struct Courage>                             CarriedItemThreatOverrides                         // 0x120(0x10)
	bool                                               ThreatenedBySightOfCarrier                         // 0x130(0x1)
	TArray<Struct ThreatenedBySightOfCarrier>          KnownHearingDangers                                // 0x138(0x10)
	float                                              CarrierHearingThreatSpeedThreshold                 // 0x148(0x4)
	float                                              DamageThreat                                       // 0x14c(0x4)
	Class CurveFloat*                                  CharacterDistanceToDangerRatingCurve               // 0x150(0x8)
	Class CurveFloat*                                  DangerRatingToAgitationDurationCurve               // 0x158(0x8)
	float                                              TimeToBecomeAgitatedMin                            // 0x160(0x4)
	float                                              TimeToBecomeAgitatedMax                            // 0x164(0x4)
	float                                              AgitationDurationVariance                          // 0x168(0x4)
	int                                                AlertThreshold                                     // 0x16c(0x4)
	int                                                FleeThreshold                                      // 0x170(0x4)
	float                                              TimeToBecomeCalm                                   // 0x174(0x4)
	float                                              CalmCooldownTime                                   // 0x178(0x4)
	float                                              MaxDistanceFromLeaderForIdle                       // 0x17c(0x4)
	Class CurveFloat*                                  DistanceToLeaderPatrolChanceCurve                  // 0x180(0x8)
};


// Size 0x18
class AthenaAIControllerParamsDataProvider: public AIDataProvider
{
public:
	struct FName                                       ParamName                                          // 0x28(0x8)
	float                                              FloatValue                                         // 0x30(0x4)
	int                                                IntValue                                           // 0x34(0x4)
	bool                                               BoolValue                                          // 0x38(0x1)
};


// Size 0x0
class AthenaAIControllerParamsTargetInterface: public Interface
{
public:
};


// Size 0x0
class AthenaAIFormComponentContainerInterface: public Interface
{
public:
};


// Size 0x0
class AthenaAIInteractableInterface: public Interface
{
public:
};


// Size 0x0
class AthenaAIPerceptionComponent: public AIPerceptionComponent
{
public:
};


// Size 0x0
class AthenaAISightTargetInterface: public AISightTargetInterface
{
public:
};


// Size 0x38
class AthenaAIWeightedRangesDataProvider: public AIDataProvider
{
public:
	struct FName                                       ParamName                                          // 0x28(0x8)
	Struct WeightedProbabilityRangeOfRanges            WeightedRangesValue                                // 0x30(0x30)
};


// Size 0x18
class BlackboardAIDataProvider: public AIDataProvider
{
public:
	struct FName                                       ParamName                                          // 0x28(0x8)
	float                                              FloatValue                                         // 0x30(0x4)
	int                                                IntValue                                           // 0x34(0x4)
	bool                                               BoolValue                                          // 0x38(0x1)
};


// Size 0x20
class BTDecorator_ActionState: public BTDecorator
{
public:
	byte                                               TrackId                                            // 0x68(0x1)
	class                                              StateId                                            // 0x70(0x8)
};


// Size 0x8
class BTDecorator_ActorInWater: public BTDecorator_BlackboardBase
{
public:
	bool                                               ReverseLogic                                       // 0x90(0x1)
};


// Size 0x10
class BTDecorator_CurrentAIStrategy: public BTDecorator_BaseConditional
{
public:
	TArray<Class ExpectedTrackId>                      Strategies                                         // 0x68(0x10)
};


// Size 0x10
class BTDecorator_IsActorInExpectedActionState: public BTDecorator_BaseConditional
{
public:
	class                                              ExpectedActionState                                // 0x68(0x8)
	byte                                               ExpectedTrackId                                    // 0x70(0x1)
};


// Size 0x8
class BTDecorator_ItemReadyToUse: public BTDecorator_BaseConditional
{
public:
	class                                              NotificationId                                     // 0x68(0x8)
};


// Size 0x30
class BTDecorator_LeftOfAIPawn: public BTDecorator_BaseConditional
{
public:
	Struct BlackboardKeySelector                       TargetKey                                          // 0x68(0x28)
	bool                                               ReverseLogic                                       // 0x90(0x1)
};


// Size 0x88
class BTDecorator_LineOfSightToTarget: public BTDecorator_BaseConditional
{
public:
	float                                              Interval                                           // 0x68(0x4)
	Struct BlackboardKeySelector                       TargetActorKey                                     // 0x70(0x28)
	bool                                               UseTargetPosition                                  // 0x98(0x1)
	Struct BlackboardKeySelector                       TargetPositionKey                                  // 0xa0(0x28)
	Struct Vector                                      OffsetToApplyToTargetPosition                      // 0xc8(0xc)
};


// Size 0x28
class BTDecorator_CompareBlackboardClassValue: public BTDecorator_BlackboardBase
{
public:
	class                                              Class                                              // 0x90(0x8)
	bool                                               Invert                                             // 0x98(0x1)
	Struct FString                                     CachedDescription                                  // 0xa0(0x10)
	byte                                               NotifyObserver                                     // 0xb0(0x1)
};


// Size 0x30
class BTDecorator_CompareBlackboardIntValue: public BTDecorator
{
public:
	Struct BlackboardKeySelector                       BlackboardKey                                      // 0x68(0x28)
	int                                                Value                                              // 0x90(0x4)
	byte                                               ComparisonType                                     // 0x94(0x1)
};


// Size 0x18
class BTDecorator_CompareBlackboardValues: public BTDecorator
{
public:
	TArray<Struct Value>                               FloatConditions                                    // 0x68(0x10)
	byte                                               FloatConditionComposite                            // 0x78(0x1)
};


// Size 0x38
class BTDecorator_CompareFloatValueBase: public BTDecorator_CompareBlackboardValues
{
public:
	byte                                               Comparison                                         // 0x80(0x1)
	Struct AIDataProviderFloatValue                    Value                                              // 0x88(0x30)
};


// Size 0x28
class BTDecorator_CompareBlackboardActorSpeed: public BTDecorator_CompareFloatValueBase
{
public:
	Struct BlackboardKeySelector                       BlackboardKey                                      // 0xb8(0x28)
};


// Size 0x28
class BTDecorator_CompareBlackboardFloatValue: public BTDecorator_CompareFloatValueBase
{
public:
	Struct BlackboardKeySelector                       BlackboardKey                                      // 0xb8(0x28)
};


// Size 0x0
class BTDecorator_CompareCurrentHealth: public BTDecorator_CompareFloatValueBase
{
public:
};


// Size 0x88
class BTDecorator_TargetInRange: public BTDecorator_CompareBlackboardValues
{
public:
	Struct AIDataProviderFloatValue                    EnterRange                                         // 0x80(0x30)
	Struct AIDataProviderFloatValue                    ExitRange                                          // 0xb0(0x30)
	Struct BlackboardKeySelector                       TargetKey                                          // 0xe0(0x28)
};


// Size 0x28
class BTDecorator_TargetInRangeOfPoint: public BTDecorator_TargetInRange
{
public:
	Struct BlackboardKeySelector                       ReferencePointKey                                  // 0x108(0x28)
};


// Size 0x68
class BTDecorator_TestRange: public BTDecorator_CompareBlackboardValues
{
public:
	Struct AIDataProviderFloatValue                    EnterRange                                         // 0x80(0x30)
	Struct AIDataProviderFloatValue                    ExitRange                                          // 0xb0(0x30)
	bool                                               TestForOutsideRange                                // 0xe0(0x1)
};


// Size 0x10
class BTDecorator_TestRangeOfSeenActors: public BTDecorator_TestRange
{
public:
};


// Size 0x58
class BTDecorator_ConeCheck3D: public BTDecorator
{
public:
	float                                              ConeHalfAngle                                      // 0x68(0x4)
	Struct BlackboardKeySelector                       ConeOrigin                                         // 0x70(0x28)
	Struct BlackboardKeySelector                       Observed                                           // 0x98(0x28)
};


// Size 0x0
class BTDecorator_DockedToInteractable: public BTDecorator_BlackboardBase
{
public:
};


// Size 0x8
class BTDecorator_FeatureToggle: public BTDecorator
{
public:
	struct FName                                       FeatureName                                        // 0x68(0x8)
};


// Size 0x8
class BTDecorator_IsAbilityAvailable: public BTDecorator
{
public:
	class                                              AIAbilityType                                      // 0x68(0x8)
};


// Size 0x58
class BTDecorator_IsLocationInWater: public BTDecorator_BlackboardBase
{
public:
	Struct BlackboardKeySelector                       WaterVolumeActor                                   // 0x90(0x28)
	Struct BlackboardKeySelector                       TargetLocation                                     // 0xb8(0x28)
	bool                                               OnlyConsidersSwimmableWater                        // 0xe0(0x1)
};


// Size 0x10
class BTDecorator_MultipleRandomDiceRolls: public BTDecorator
{
public:
	TArray<Struct Chance>                              ChanceKeyPairs                                     // 0x68(0x10)
};


// Size 0x30
class BTDecorator_RandomDiceRoll: public BTDecorator
{
public:
	Struct AIDataProviderFloatValue                    Chance                                             // 0x68(0x30)
};


// Size 0x10
class BTDecorator_RandomLoop: public BTDecorator
{
public:
	int                                                MinNumLoops                                        // 0x68(0x4)
	int                                                MaxNumLoops                                        // 0x6c(0x4)
	Class CurveFloat*                                  RandomNumLoopCurve                                 // 0x70(0x8)
};


// Size 0x0
class BTDecorator_RollAgainstPatrolChance: public BTDecorator
{
public:
};


// Size 0x8
class BTDecorator_TestAIInteractableType: public BTDecorator_BlackboardBase
{
public:
	class                                              Type                                               // 0x90(0x8)
};


// Size 0x78
class BTService_AimAIInteractable: public BTService
{
public:
	Struct BlackboardKeySelector                       Interactable                                       // 0x70(0x28)
	Struct BlackboardKeySelector                       TargetForInteractable                              // 0x98(0x28)
	Struct BlackboardKeySelector                       TargetRelativeAimVector                            // 0xc0(0x28)
};


// Size 0x8
class BTService_DefaultFocusToPosAtRelativeAngleToObject: public BTService_DefaultFocus
{
public:
	float                                              RelativeYawAngleOffset                             // 0xa0(0x4)
	float                                              RelativeDistance                                   // 0xa4(0x4)
};


// Size 0x28
class BTService_DetermineAIAbility: public BTService
{
public:
	Struct BlackboardKeySelector                       BlockChangeAIAbilitiesKey                          // 0x70(0x28)
};


// Size 0x10
class BTService_DisableCollisions: public BTService
{
public:
	TArray<Byte Conditional>                           ChannelsToLeaveUnaffected                          // 0x70(0x10)
};


// Size 0x0
class BTService_DisableDamageResponses: public BTService
{
public:
};


// Size 0x0
class BTService_DisableStun: public BTService
{
public:
};


// Size 0x40
class BTService_EnableFaceFocusActor: public BTService_BlackboardBase
{
public:
	bool                                               DisableUpdateMoveFocusForCurrentPathOnExit         // 0x98(0x1)
	Struct ConditionalBasedOnBlackboardKey             Conditional                                        // 0xa0(0x38)
};


// Size 0x8
class BTService_IncrementFloatValueWithTimeSpentInBranch: public BTService_BlackboardBase
{
public:
	float                                              TimeMultiplier                                     // 0x98(0x4)
};


// Size 0x30
class BTService_OverrideTurnSpeed: public BTService
{
public:
	Struct AIDataProviderFloatValue                    TurnSpeed                                          // 0x70(0x30)
};


// Size 0x8
class BTService_PlayCustomMontageId: public BTService
{
public:
	Struct CustomAnimationMontageId                    CustomAnimationMontageId                           // 0x70(0x8)
};


// Size 0x0
class BTService_QueryPerceptionForTarget: public BTService
{
public:
};


// Size 0x50
class BTService_RunEQSQuery: public BTService_BlackboardBase
{
public:
	bool                                               OverrideQueryTemplateWithBlackboardValue           // 0x98(0x1)
	Struct BlackboardKeySelector                       OverrideEQSKey                                     // 0xa0(0x28)
	Class EnvQuery*                                    QueryTemplate                                      // 0xc8(0x8)
	TArray<Struct QueryTemplate>                       QueryParams                                        // 0xd0(0x10)
	byte                                               RunMode                                            // 0xe0(0x1)
	bool                                               ThrottleQueryTimePerFrame                          // 0xe1(0x1)
	float                                              MaxSecondsToSpendOnQueryPerFrame                   // 0xe4(0x4)
};


// Size 0x0
class BTService_DoesEQSQuerySucceed: public BTService_RunEQSQuery
{
public:
};


// Size 0x40
class BTService_RunEQSQueryOnActorMovement: public BTService_RunEQSQuery
{
public:
	Struct BlackboardKeySelector                       MovingActorKey                                     // 0xe8(0x28)
	float                                              MinimumActorMovementToRunEQS                       // 0x110(0x4)
	float                                              MinimumActorVelocityChangeToRunEQS                 // 0x114(0x4)
	bool                                               RunEQSForYawChanges                                // 0x118(0x1)
	float                                              MinimumActorYawChangeToRunEQS                      // 0x11c(0x4)
};


// Size 0x0
class BTService_SetAIAnimationState: public BTService_BlackboardBase
{
public:
};


// Size 0x8
class BTService_SetAIStrategy: public BTService
{
public:
	class                                              NewStrategy                                        // 0x70(0x8)
};


// Size 0x28
class BTService_SetBoolBlackboardValueToTrueOnCeaseRelevant: public BTService
{
public:
	Struct BlackboardKeySelector                       BoolValueKey                                       // 0x70(0x28)
};


// Size 0x28
class BTService_SetBoolBlackboardValueTrueWhileRelevant: public BTService
{
public:
	Struct BlackboardKeySelector                       BoolValueKey                                       // 0x70(0x28)
};


// Size 0x30
class BTService_SetNameBlackboardValueWhileRelevant: public BTService
{
public:
	Struct BlackboardKeySelector                       NameValueKey                                       // 0x70(0x28)
	struct FName                                       Value                                              // 0x98(0x8)
};


// Size 0x28
class BTService_TriggerNotifications: public BTService
{
public:
	class                                              EnterBranchNotificationId                          // 0x70(0x8)
	class                                              LeaveBranchNotificationId                          // 0x78(0x8)
};


// Size 0x40
class BTService_UpdateFocusOnBBChange: public BTService_DefaultFocus
{
public:
	bool                                               DisableUpdateMoveFocusForCurrentPathOnExit         // 0xa0(0x1)
	Struct ConditionalBasedOnBlackboardKey             Conditional                                        // 0xa8(0x38)
};


// Size 0x0
class BTService_UpdateFocusOnBBChangeWithOffsetFromWieldedProjectile: public BTService_UpdateFocusOnBBChange
{
public:
};


// Size 0x50
class BTService_UpdateTargetForInteractable: public BTService
{
public:
	Struct BlackboardKeySelector                       Interactable                                       // 0x70(0x28)
	Struct BlackboardKeySelector                       TargetForInteractable                              // 0x98(0x28)
};


// Size 0x0
class BTService_UpdateViewPitchForWieldedProjectileToHitTarget: public BTService_BlackboardBase
{
public:
};


// Size 0x50
class BTTask_ApplyStatusComposite: public BTTaskNode
{
public:
	bool                                               bOneShot                                           // 0x60(0x1)
	Struct AIDataProviderFloatValue                    ContinuousStatusDuration                           // 0x68(0x30)
	Struct Status                                      StatusToApply                                      // 0x98(0x18)
};


// Size 0x18
class BTTask_AthenaMoveTo: public BTTask_MoveTo
{
public:
	bool                                               ShouldFailBeforeSlowDown                           // 0xa0(0x1)
	float                                              ExitBeforeSlowDownDistanceTolerance                // 0xa4(0x4)
	bool                                               ShouldOverrideMaxSpeedToSlow                       // 0xa8(0x1)
	float                                              OverrideMaxSpeedToSlowDistanceFactor               // 0xac(0x4)
	bool                                               MaintainFacingBeforeMove                           // 0xb0(0x1)
};


// Size 0x8
class BTTask_MoveToFailOnDistanceChange: public BTTask_AthenaMoveTo
{
public:
	bool                                               FailOnDistanceBeingLess                            // 0xb8(0x1)
	float                                              FailDistance                                       // 0xbc(0x4)
};


// Size 0x10
class BTTask_MoveToFailOnDistanceToSeenActors: public BTTask_MoveToFailOnDistanceChange
{
public:
};


// Size 0x28
class BTTask_MoveToFailOnDistanceToTargetChanged: public BTTask_MoveToFailOnDistanceChange
{
public:
	Struct BlackboardKeySelector                       TargetBlackboardKey                                // 0xc0(0x28)
};


// Size 0x10
class BTTask_MoveToMovingLocation: public BTTask_AthenaMoveTo
{
public:
	float                                              MinimumLocationMovementForRePath                   // 0xb8(0x4)
	float                                              MinimumTimeBeforeRePath                            // 0xbc(0x4)
	bool                                               IsContinuous                                       // 0xc0(0x1)
};


// Size 0x98
class BTTask_AthenaWait: public BTTaskNode
{
public:
	bool                                               UseMinMax                                          // 0x60(0x1)
	Struct AIDataProviderFloatValue                    Min                                                // 0x68(0x30)
	Struct AIDataProviderFloatValue                    Max                                                // 0x98(0x30)
	Struct AIDataProviderFloatValue                    FixedWaitTime                                      // 0xc8(0x30)
};


// Size 0x30
class BTTask_AthenaWaitWithFloor: public BTTask_AthenaWait
{
public:
	Struct AIDataProviderFloatValue                    Floor                                              // 0xf8(0x30)
};


// Size 0x0
class BTTask_BurrowAbilityTriggerEruptAreaFromBlackboard: public BTTaskNode
{
public:
};


// Size 0x0
class BTTask_BurrowIntoGround: public BTTaskNode
{
public:
};


// Size 0x0
class BTTask_ClearBlackboardValue: public BTTask_BlackboardBase
{
public:
};


// Size 0x0
class BTTask_ClearPerceptualData: public BTTaskNode
{
public:
};


// Size 0x78
class BTTask_CopyAIInteractionPointAndFocusToBlackboard: public BTTaskNode
{
public:
	Struct BlackboardKeySelector                       SourceInteractable                                 // 0x60(0x28)
	Struct BlackboardKeySelector                       InteractionPosition                                // 0x88(0x28)
	Struct BlackboardKeySelector                       InteractionFocusPosition                           // 0xb0(0x28)
};


// Size 0x50
class BTTask_CopyBlackboardActor: public BTTaskNode
{
public:
	Struct BlackboardKeySelector                       SrcBlackboardKey                                   // 0x60(0x28)
	Struct BlackboardKeySelector                       TargetBlackboardKey                                // 0x88(0x28)
};


// Size 0x50
class BTTask_CopyBlackboardVector: public BTTaskNode
{
public:
	Struct BlackboardKeySelector                       SrcBlackboardKey                                   // 0x60(0x28)
	Struct BlackboardKeySelector                       TargetBlackboardKey                                // 0x88(0x28)
};


// Size 0x8
class BTTask_DetermineFollowUpAIAbility: public BTTaskNode
{
public:
	class                                              AIAbilityTypeToFollowUp                            // 0x60(0x8)
};


// Size 0x8
class BTTask_ExecuteAIAbility: public BTTaskNode
{
public:
	class                                              AIAbilityType                                      // 0x60(0x8)
};


// Size 0x0
class BTTask_GetCurrentHealth: public BTTask_BlackboardBase
{
public:
};


// Size 0x8
class BTTask_IgnoreActorTemporarily: public BTTask_BlackboardBase
{
public:
	float                                              TimeToForget                                       // 0x88(0x4)
};


// Size 0x30
class BTTask_IncrementBlackboardFloatValue: public BTTask_BlackboardBase
{
public:
	Struct AIDataProviderFloatValue                    FloatValueDelta                                    // 0x88(0x30)
};


// Size 0x30
class BTTask_IncrementBlackboardIntValue: public BTTask_BlackboardBase
{
public:
	Struct AIDataProviderIntValue                      IntegerValueDelta                                  // 0x88(0x30)
};


// Size 0x8
class BTTask_InteractWith: public BTTask_BlackboardBase
{
public:
	class                                              NotificationId                                     // 0x88(0x8)
};


// Size 0x30
class BTTask_MoveToTarget: public BTTask_MoveTo
{
public:
	float                                              MaxDistFromDestinationPosToTargetPos               // 0xa0(0x4)
	float                                              OverrideMaxSpeedToSlowDistanceFactor               // 0xa4(0x4)
	Struct BlackboardKeySelector                       TargetBlackboardKey                                // 0xa8(0x28)
};


// Size 0x10
class BTTask_NetworkTriggerAnim: public BTTaskNode
{
public:
	Class AnimSequence*                                Anim                                               // 0x60(0x8)
	float                                              AnimLength                                         // 0x68(0x4)
	float                                              AnimPlayRate                                       // 0x6c(0x4)
};


// Size 0x8
class BTTask_NOP: public BTTaskNode
{
public:
	int                                                Id                                                 // 0x60(0x4)
};


// Size 0x10
class BTTask_PlayCustomMontageId: public BTTaskNode
{
public:
	Struct CustomAnimationMontageId                    CustomAnimationMontageId                           // 0x60(0x8)
	float                                              TimeToWaitOnServer                                 // 0x68(0x4)
};


// Size 0x10
class BTTask_PlayMontage: public BTTaskNode
{
public:
	Class Object*                                      MontageToPlay                                      // 0x60(0x8)
	bool                                               PlayAsDynamicMontage                               // 0x68(0x1)
};


// Size 0x0
class BTTask_RequestDespawn: public BTTaskNode
{
public:
};


// Size 0x8
class BTTask_SetAIStrategy: public BTTaskNode
{
public:
	class                                              NewStrategy                                        // 0x60(0x8)
};


// Size 0x10
class BTTask_SetAIStrategyFromWeightedArray: public BTTaskNode
{
public:
	TArray<Struct Actor>                               WeightedStrategies                                 // 0x60(0x10)
};


// Size 0x8
class BTTask_SetBlackboardActor: public BTTask_BlackboardBase
{
public:
	Class Actor*                                       Actor                                              // 0x88(0x8)
};


// Size 0x8
class BTTask_SetBlackboardBoolValue: public BTTask_BlackboardBase
{
public:
	bool                                               NewValue                                           // 0x88(0x1)
};


// Size 0x8
class BTTask_SetBlackboardClassValue: public BTTask_BlackboardBase
{
public:
	class                                              ClassValue                                         // 0x88(0x8)
};


// Size 0x8
class BTTask_SetBlackboardEQSValue: public BTTask_BlackboardBase
{
public:
	Class EnvQuery*                                    EQS                                                // 0x88(0x8)
};


// Size 0x30
class BTTask_SetBlackboardFloatValue: public BTTask_BlackboardBase
{
public:
	Struct AIDataProviderFloatValue                    FloatValue                                         // 0x88(0x30)
};


// Size 0x60
class BTTask_SetBlackboardFloatValueFromMinMax: public BTTask_BlackboardBase
{
public:
	Struct AIDataProviderFloatValue                    MinValue                                           // 0x88(0x30)
	Struct AIDataProviderFloatValue                    MaxValue                                           // 0xb8(0x30)
};


// Size 0x30
class BTTask_SetBlackboardFloatValueFromWeightedArray: public BTTask_BlackboardBase
{
public:
	Struct AIDataProviderStructValue                   WeightedArrayFromParams                            // 0x88(0x30)
};


// Size 0x30
class BTTask_SetBlackboardIntValue: public BTTask_BlackboardBase
{
public:
	Struct AIDataProviderIntValue                      IntValue                                           // 0x88(0x30)
};


// Size 0x38
class BTTask_SetBlackboardVectorValue: public BTTask_BlackboardBase
{
public:
	bool                                               UseVectorFromBlackboard                            // 0x88(0x1)
	Struct Vector                                      StaticValue                                        // 0x8c(0xc)
	Struct BlackboardKeySelector                       BlackboardKeyToUseForVector                        // 0x98(0x28)
};


// Size 0x8
class BTTask_SetFollowUpAbility: public BTTaskNode
{
public:
	class                                              AIAbilityType                                      // 0x60(0x8)
};


// Size 0x8
class BTTask_SetInHiddenActionState: public BTTaskNode
{
public:
	bool                                               EnableHiddenActionState                            // 0x60(0x1)
};


// Size 0x8
class BTTask_SetIsHeadingOffNavMeshCheck: public BTTaskNode
{
public:
	bool                                               DisableIsHeadingOffNavMeshCheck                    // 0x60(0x1)
};


// Size 0x78
class BTTask_SetupAITargetWeaponForNextShot: public BTTaskNode
{
public:
	Struct BlackboardKeySelector                       Interactable                                       // 0x60(0x28)
	Struct BlackboardKeySelector                       TargetForInteractable                              // 0x88(0x28)
	Struct BlackboardKeySelector                       TargetRelativeAimVector                            // 0xb0(0x28)
};


// Size 0x10
class BTTask_SetVelocity: public BTTask_BlackboardBase
{
public:
	bool                                               UseBlackboardKey                                   // 0x88(0x1)
	Struct Vector                                      NewVelocity                                        // 0x8c(0xc)
};


// Size 0x40
class BTTask_SpawnActorAndStore: public BTTaskNode
{
public:
	Struct BlackboardKeySelector                       BlackBoardKeyNameToStoreActor                      // 0x60(0x28)
	class                                              ActorToSpawn                                       // 0x88(0x8)
	Struct Vector                                      SpawnOffset                                        // 0x90(0xc)
};


// Size 0x0
class BTTask_StopMovementImmediately: public BTTaskNode
{
public:
};


// Size 0x0
class BTTask_StorePawnLocationInBlackboard: public BTTask_BlackboardBase
{
public:
};


// Size 0x8
class BTTask_TeleportTo: public BTTask_BlackboardBase
{
public:
	bool                                               UseNavMesh                                         // 0x88(0x1)
};


// Size 0x10
class BTTask_TriggerNotification: public BTTaskNode
{
public:
	class                                              NotificationId                                     // 0x60(0x8)
};


// Size 0x8
class BTTask_UnwieldCurrentWeapon: public BTTaskNode
{
public:
	bool                                               WaitForSuccessfulUnwield                           // 0x60(0x1)
	bool                                               ShouldUnwieldFast                                  // 0x61(0x1)
};


// Size 0x0
class BurrowInterface: public Interface
{
public:
};


// Size 0x40
class BurrowComponent: public ActorComponent
{
public:
	class                                              BurrowCrackClass                                   // 0xd0(0x8)
	class                                              BurrowEruptClass                                   // 0xd8(0x8)
	float                                              BurrowFadeoutTime                                  // 0xe0(0x4)
	TArray<class BurrowCracks*>                        BurrowCracks                                       // 0xe8(0x10)
	Class BurrowEruptBase*                             BurrowErupt                                        // 0xf8(0x8)
};


// Size 0xe0
class CoralShieldVFXComponent: public ActorComponent
{
public:
	Class ParticleSystem*                              VFXAsset                                           // 0xc8(0x8)
	struct FName                                       VfxSocketName                                      // 0xd0(0x8)
	Class ParticleSystemComponent*                     SpawnedVFXSystem                                   // 0xd8(0x8)
	byte                                               CurrentCoralShieldRole                             // 0xe0(0x1)
	Class CurveFloat*                                  OffToOnCurve                                       // 0xe8(0x8)
	float                                              OffToOnDuration                                    // 0xf0(0x4)
	Class CurveFloat*                                  OnToOffCurve                                       // 0xf8(0x8)
	float                                              OnToOffDuration                                    // 0x100(0x4)
	struct FName                                       OffToOnParamOverrideName                           // 0x104(0x8)
	struct FName                                       OnToOffParamOverrideName                           // 0x10c(0x8)
	struct FName                                       ReceiverMeshComponentName                          // 0x114(0x8)
	struct FName                                       CasterMeshComponentName                            // 0x11c(0x8)
	TArray<class OverriddenMaterialsForReceive*>       OverriddenMaterialsForReceive                      // 0x128(0x10)
	TArray<class OverriddenMaterialsForCast*>          OverriddenMaterialsForCast                         // 0x138(0x10)
};


// Size 0x10
class CustomSkeletonAnimationDataList: public DataAsset
{
public:
	TArray<Struct SeenActors>                          CustomAnimationAssets                              // 0x28(0x10)
};


// Size 0x0
class EnvQueryContext_ContextLocationFromBlackboard: public EnvQueryContext_PositionFromBlackboard
{
public:
};


// Size 0x0
class EnvQueryContext_HomePositionFromBlackboard: public EnvQueryContext_PositionFromBlackboard
{
public:
};


// Size 0x0
class EnvQueryContext_KnockbackPosFromBlackboard: public EnvQueryContext_PositionFromBlackboard
{
public:
};


// Size 0x0
class EnvQueryContext_ThrowableTargetPositionFromBlackboard: public EnvQueryContext_PositionFromBlackboard
{
public:
};


// Size 0x10
class EnvQueryContext_SeenActors: public EnvQueryContext
{
public:
};


// Size 0x30
class EnvQueryContext_SeenActorsProjectedToGround: public EnvQueryContext
{
public:
	TArray<class SeenActors*>                          SeenActors                                         // 0x28(0x10)
};


// Size 0x0
class EnvQueryContext_SpawnedForActorFromBlackboard: public EnvQueryContext
{
public:
};


// Size 0x0
class EnvQueryContext_TargetActorFromBlackboard: public EnvQueryContext
{
public:
};


// Size 0x0
class EnvQueryContext_TargetActorFromBlackboardPredictedLocation: public EnvQueryContext_TargetActorFromBlackboard
{
public:
};


// Size 0x0
class EnvQueryContext_TargetActorFromParams: public EnvQueryContext
{
public:
};


// Size 0x10
class EnvQueryGenerator_AIRegionLocations: public EnvQueryGenerator
{
public:
	bool                                               UseOverrideSpawnType                               // 0x50(0x1)
	struct FName                                       OverrideSpawnType                                  // 0x54(0x8)
};


// Size 0x8
class EnvQueryGenerator_FromContext: public EnvQueryGenerator
{
public:
	class                                              Context                                            // 0x50(0x8)
};


// Size 0xa8
class EnvQueryGenerator_Line: public EnvQueryGenerator_ProjectedPoints
{
public:
	class                                              FromContext                                        // 0x90(0x8)
	class                                              ToContext                                          // 0x98(0x8)
	Struct AIDataProviderFloatValue                    PointSpacing                                       // 0xa0(0x30)
	Struct AIDataProviderIntValue                      NumExtraPairsOfParallelLines                       // 0xd0(0x30)
	Struct AIDataProviderFloatValue                    ParallelLineSpacing                                // 0x100(0x30)
	float                                              MaxValidLineLength                                 // 0x130(0x4)
	bool                                               ForceIncludeEndPoint                               // 0x134(0x1)
	bool                                               ProjectPointsToWaterSurface                        // 0x135(0x1)
};


// Size 0x8
class EnvQueryGenerator_PointsAtContext: public EnvQueryGenerator_ProjectedPoints
{
public:
	class                                              Context                                            // 0x90(0x8)
};


// Size 0xd0
class EnvQueryGenerator_Sphere: public EnvQueryGenerator_ProjectedPoints
{
public:
	TArray<Struct DirectArcTarget>                     Radiuses                                           // 0x90(0x10)
	Struct AIDataProviderIntValue                      NumberOfVerticalCircles                            // 0xa0(0x30)
	Struct AIDataProviderIntValue                      NumberOfHorizontalCircles                          // 0xd0(0x30)
	bool                                               DefineFirstPointDirection                          // 0x100(0x1)
	Struct EnvDirection                                FirstPointDirection                                // 0x108(0x20)
	class                                              Centre                                             // 0x128(0x8)
	Struct AIDataProviderFloatValue                    ZOffsetFromCentre                                  // 0x130(0x30)
};


// Size 0x180
class EnvQueryGenerator_WaterArc: public EnvQueryGenerator_ProjectedPoints
{
public:
	class                                              Origin                                             // 0x90(0x8)
	Struct AIDataProviderIntValue                      NumberOfArcsToGenerate                             // 0x98(0x30)
	Struct AIDataProviderFloatValue                    MinArcRadius                                       // 0xc8(0x30)
	Struct AIDataProviderFloatValue                    MaxArcRadius                                       // 0xf8(0x30)
	Struct AIDataProviderFloatValue                    MinArcTiltDegrees                                  // 0x128(0x30)
	Struct AIDataProviderFloatValue                    MaxArcTiltDegrees                                  // 0x158(0x30)
	Struct AIDataProviderFloatValue                    MinArcPercentage                                   // 0x188(0x30)
	Struct AIDataProviderFloatValue                    MaxArcPercentage                                   // 0x1b8(0x30)
	bool                                               IncludeDirectArcToTarget                           // 0x1e8(0x1)
	class                                              DirectArcTarget                                    // 0x1f0(0x8)
};


// Size 0x160
class EnvQueryGenerator_WaterDonut: public EnvQueryGenerator_ProjectedPoints
{
public:
	Struct AIDataProviderFloatValue                    InnerRadius                                        // 0x90(0x30)
	Struct AIDataProviderFloatValue                    OuterRadius                                        // 0xc0(0x30)
	Struct AIDataProviderIntValue                      NumberOfRings                                      // 0xf0(0x30)
	Struct AIDataProviderIntValue                      PointsPerRing                                      // 0x120(0x30)
	Struct EnvDirection                                ArcDirection                                       // 0x150(0x20)
	Struct AIDataProviderFloatValue                    ArcAngle                                           // 0x170(0x30)
	Struct AIDataProviderFloatValue                    ZOffsetFromCentre                                  // 0x1a0(0x30)
	class                                              Center                                             // 0x1d0(0x8)
	bool                                               bDefineArc                                         // 0x1d8(0x1)
	bool                                               ProjectPointsToWaterSurface                        // 0x1d8(0x1)
	class                                              WaterPlaneSourceContext                            // 0x1e0(0x8)
	bool                                               ApplyZOffsetToProjectPoints                        // 0x1e8(0x1)
};


// Size 0x78
class EnvQueryGenerator_WaterMultiDeckerRing: public EnvQueryGenerator_ProjectedPoints
{
public:
	Struct AIDataProviderFloatValue                    Radius                                             // 0x90(0x30)
	TArray<Struct Radius>                              ZOffsetOfRingsFromContext                          // 0xc0(0x10)
	Struct AIDataProviderIntValue                      PointsPerRing                                      // 0xd0(0x30)
	class                                              Center                                             // 0x100(0x8)
};


// Size 0x10
class EnvQueryTest_HasLineOfSight: public EnvQueryTest
{
public:
	byte                                               TraceDirection                                     // 0x170(0x1)
	class                                              Context                                            // 0x178(0x8)
};


// Size 0x8
class EnvQueryTest_InGameEventExclusionZone: public EnvQueryTest
{
public:
	float                                              Radius                                             // 0x170(0x4)
};


// Size 0xa0
class EnvQueryTest_IsAngleInRange2D: public EnvQueryTest
{
public:
	Struct EnvDirection                                LineA                                              // 0x170(0x20)
	Struct EnvDirection                                LineB                                              // 0x190(0x20)
	Struct AIDataProviderFloatValue                    MinAngleDegrees                                    // 0x1b0(0x30)
	Struct AIDataProviderFloatValue                    MaxAngleDegrees                                    // 0x1e0(0x30)
};


// Size 0x10
class EnvQueryTest_WaterHeight: public EnvQueryTest
{
public:
	float                                              WaterHeightCheckOffset                             // 0x170(0x4)
	class                                              ActorWithWaterPlaneContext                         // 0x178(0x8)
};


// Size 0x138
class HealthGemComponent: public ActorComponent
{
public:
	TArray<class OverridenMaterials*>                  OverridenMaterials                                 // 0x1e0(0x10)
	struct FName                                       EmissiveMaterialParameterName                      // 0x1f0(0x8)
	bool                                               BuildMaterialMapOnBeginPlay                        // 0x1f8(0x1)
};


// Size 0x10
class IsAIOfClassStatCondition: public TargetedStatCondition
{
public:
	TArray<Class AllowedAIForms>                       AIClasses                                          // 0x30(0x10)
};


// Size 0x10
class IsAIOfFormStatCondition: public TargetedStatCondition
{
public:
	TArray<AssetClass AISkillsets>                     AllowedAIForms                                     // 0x30(0x10)
};


// Size 0x10
class IsAIOfSkillsetStatCondition: public TargetedStatCondition
{
public:
	TArray<class AISkillsets*>                         AISkillsets                                        // 0x30(0x10)
};


// Size 0x48
class PeriodicAINoiseEventComponent: public ActorComponent
{
public:
	struct FName                                       NoiseTag                                           // 0xc8(0x8)
	bool                                               NoiseRangeBasedOnMovementSpeed                     // 0xd0(0x1)
	float                                              ConstantNoiseRange                                 // 0xd4(0x4)
	Class CurveFloat*                                  MovementSpeedToNoiseRange                          // 0xd8(0x8)
	Class Actor*                                       OwnerActor                                         // 0xe0(0x8)
};


// Size 0x20
class PlayerProximityObservedSpawnContextProvider: public Object
{
public:
};


// Size 0x38
class SimpleAIRegion: public Object
{
public:
};


// Size 0x18
class SpawnContextProviderZone: public Actor
{
public:
	TArray<Name None>                                  SpawnContextIDs                                    // 0x3d0(0x10)
	Class BoxComponent*                                BoundingBox                                        // 0x3e0(0x8)
};


// Size 0x0
class BaseSpawnBlockingBehaviourStrategy: public SpawnerBehaviourStrategy
{
public:
};


// Size 0x10
class SirenEncounterSpawnBlockingBehaviourStrategy: public BaseSpawnBlockingBehaviourStrategy
{
public:
	float                                              ChanceToSpawn                                      // 0x48(0x4)
};


// Size 0x10
class StatusResponseSetBlackboardBoolKey: public StatusResponse
{
public:
	struct FName                                       BlackboardBoolKeyName                              // 0x30(0x8)
	bool                                               bValueWhenActive                                   // 0x38(0x1)
	bool                                               ShouldClearKeyOnEnd                                // 0x39(0x1)
};


// Size 0x20
class StatusResponseSetBlackboardClassKey: public StatusResponse
{
public:
	struct FName                                       BlackboardClassKeyName                             // 0x30(0x8)
	class                                              ValueWhenActive                                    // 0x38(0x8)
	bool                                               SetValueOnDeactivate                               // 0x40(0x1)
	class                                              ValueWhenDeactivated                               // 0x48(0x8)
};


// Size 0x18
class StatusResponseSetBlackboardFloatKey: public StatusResponse
{
public:
	struct FName                                       BlackboardFloatKeyName                             // 0x30(0x8)
	float                                              ValueWhenActive                                    // 0x38(0x4)
	bool                                               ShouldClearKeyOnEnd                                // 0x3c(0x1)
};


// Size 0x88
class VulnerabilityDuringAIStrategyComponent: public ActorComponent
{
public:
	TArray<Struct Spawners>                            StrategyVulnerabilities                            // 0xc8(0x10)
	Class HealthComponent*                             HealthComponent                                    // 0xd8(0x8)
};


// Size 0x8
class WaterbasedAISupplier: public Actor
{
public:
	Class AISpawnerList*                               Spawners                                           // 0x3d0(0x8)
};


}