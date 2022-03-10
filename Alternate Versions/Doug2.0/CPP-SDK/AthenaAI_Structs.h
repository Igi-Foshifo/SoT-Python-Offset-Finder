namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0xc
class AIAbilityDebugReplicatedIntervals: public None
{
public:
	float                                              ActivationTimerCooldown                            // 0x0(0x4)
	float                                              TimeBeforeNextExecution                            // 0x4(0x4)
	float                                              DamageBeforeNextExecution                          // 0x8(0x4)
};


// Size 0x20
class TargetSkillsetProgressionPair: public None
{
public:
	Struct StringAssetReference                        CrewSkillset                                       // 0x0(0x10)
	Struct StringAssetReference                        CaptainSkillset                                    // 0x10(0x10)
};


// Size 0x28
class AttackableTypeToAnimMapping: public None
{
public:
	byte                                               AttackType                                         // 0x0(0x1)
	Class Object*                                      AnimMontage                                        // 0x8(0x8)
	bool                                               PlayAsDynamicMontage                               // 0x10(0x1)
	float                                              AnimLength                                         // 0x14(0x4)
	float                                              TimeIntoAnimOfAttack                               // 0x18(0x4)
	float                                              TargetKnockBackStrength                            // 0x1c(0x4)
	struct FName                                       RumbleTag                                          // 0x20(0x8)
};


// Size 0x38
class SwimAttackTargetShipImpulseData: public None
{
public:
	class                                              ShipSize                                           // 0x0(0x8)
	float                                              PushImpulseForce                                   // 0x8(0x4)
	Struct Vector                                      PushImpulseLocation                                // 0xc(0xc)
	float                                              PushForceScalingFactorForeAndAftOfShipLowerBound   // 0x18(0x4)
	float                                              PushForceScalingFactorForeAndAftOfShipUpperBound   // 0x1c(0x4)
	float                                              RollImpulseForce                                   // 0x20(0x4)
	Struct Vector                                      RollImpulseLocation                                // 0x24(0xc)
	float                                              RollForceScalingFactorForeAndAftOfShipLowerBound   // 0x30(0x4)
	float                                              RollForceScalingFactorForeAndAftOfShipUpperBound   // 0x34(0x4)
};


// Size 0xf0
class WeightedAISpawnTypeParams: public None
{
public:
	float                                              Weight                                             // 0x0(0x4)
	int                                                MaxTimesCanBeSelected                              // 0x4(0x4)
	Struct AISpawnTypeParams                           Params                                             // 0x8(0xe8)
};


// Size 0xe8
class AISpawnTypeParams: public None
{
public:
	Struct StringAssetReference                        SkillsetOverride                                   // 0x20(0x10)
	Struct StringAssetReference                        LoadoutOverride                                    // 0x30(0x10)
	Struct StringAssetReference                        FormOverride                                       // 0x40(0x10)
	Struct StringAssetReference                        AmmoOverride                                       // 0x50(0x10)
	class                                              AIClassIdOverride                                  // 0x80(0x8)
	Struct StringAssetReference                        TeamColorOverride                                  // 0x88(0x10)
	Struct EncounterParams                             EncounterTrackingParams                            // 0x98(0xc)
	struct FName                                       DioramaRole                                        // 0xa4(0x8)
	Struct FText                                       LocalisableName                                    // 0xb0(0x38)
};


// Size 0x8
class AIPartId: public None
{
public:
	struct FName                                       PartId                                             // 0x0(0x8)
};


// Size 0xc8
class AIBountySpawnerParams: public None
{
public:
	TArray<Struct AIEncounterWave>                     AISpawnerCreationDesc                              // 0x0(0x10)
	Struct StringAssetReference                        TeamColor                                          // 0x10(0x10)
	TArray<Int >                                       NumTargetsInWave                                   // 0x20(0x10)
	TArray<Int >                                       NumCaptainsInWave                                  // 0x30(0x10)
	float                                              MinTimeBetweenSpawns                               // 0x40(0x4)
	float                                              MaxTimeBetweenSpawns                               // 0x44(0x4)
	float                                              MinTimeBetweenWaves                                // 0x48(0x4)
	float                                              MaxTimeBetweenWaves                                // 0x4c(0x4)
	Struct WeightedProbabilityRange                    WavesPerRelocate                                   // 0x50(0x20)
	Struct WeightedProbabilityRange                    WaveSplitChance                                    // 0x70(0x20)
	TArray<Float >                                     WaveSuicideTime                                    // 0x90(0x10)
	float                                              WaveSuicideMinDist                                 // 0xa0(0x4)
	int                                                NumWavesPerGroup                                   // 0xa4(0x4)
	int                                                NumWaveGroups                                      // 0xa8(0x4)
	int                                                NumTotalWaves                                      // 0xac(0x4)
	int                                                NumTargetsPerWaveGroup                             // 0xb0(0x4)
	int                                                NumCaptainsPerWaveGroup                            // 0xb4(0x4)
	TArray<Class NumCaptainsPerWaveGroup>              AICombatDialogue                                   // 0xb8(0x10)
};


// Size 0x20
class AIEncounterWave: public None
{
public:
	TArray<Struct AIEncounterSpecification>            Specifications                                     // 0x0(0x10)
	TArray<Int >                                       SpecificationSpawnOrder                            // 0x10(0x10)
};


// Size 0xc8
class AIEncounterSpecification: public None
{
public:
	Class AthenaAIControllerParamsDataAsset*           Skillset                                           // 0x20(0x8)
	Class LoadoutAsset*                                Loadout                                            // 0x28(0x8)
	Class AthenaAIFormDataAsset*                       Form                                               // 0x30(0x8)
	Class AthenaAIAmmoDataAsset*                       Ammo                                               // 0x38(0x8)
	class                                              AIClass                                            // 0x40(0x8)
	Class AIPartsCategory*                             PartsCategory                                      // 0x48(0x8)
	int                                                TeamColorIndex                                     // 0x70(0x4)
	struct FName                                       DioramaRole                                        // 0x74(0x8)
	Struct FText                                       LocalisableName                                    // 0x80(0x38)
	Struct EncounterParams                             EncounterTrackingParams                            // 0xb8(0xc)
	bool                                               ShowNameplate                                      // 0xc4(0x1)
	bool                                               IsUsingDialogue                                    // 0xc5(0x1)
};


// Size 0x10
class EventAIStartedDeadActionState: public None
{
public:
	byte                                               DeathReason                                        // 0x0(0x1)
	Class Actor*                                       Killer                                             // 0x8(0x8)
};


// Size 0x10
class EventPawnFinishedDying: public None
{
public:
	Class Pawn*                                        AIPawn                                             // 0x0(0x8)
	byte                                               DeathType                                          // 0x8(0x1)
};


// Size 0x18
class EventPawnStartedDying: public None
{
public:
	Class Pawn*                                        AIPawn                                             // 0x0(0x8)
	byte                                               DeathType                                          // 0x8(0x1)
	Class Actor*                                       Instigator                                         // 0x10(0x8)
};


// Size 0x1
class EventOwnedPawnFinishedDying: public None
{
public:
	byte                                               DeathType                                          // 0x0(0x1)
};


// Size 0x10
class EventOwnedPawnStartedDying: public None
{
public:
	byte                                               DeathType                                          // 0x0(0x1)
	Class Actor*                                       Instigator                                         // 0x8(0x8)
};


// Size 0x18
class BountySpawnerTargetDesc: public None
{
public:
	byte                                               Gender                                             // 0x0(0x1)
	byte                                               Rank                                               // 0x1(0x1)
};


// Size 0x30
class AIBountySpawnerWaveGroup: public None
{
public:
	TArray<Struct AIBountySpawnerWave>                 Waves                                              // 0x0(0x10)
	int                                                NumNonTargetAIToKillToMoveToNextWaveGroup          // 0x10(0x4)
	class                                              CombatDialogueForWaveGroup                         // 0x18(0x8)
};


// Size 0x180
class AIBountySpawnerWave: public None
{
public:
	bool                                               IsTarget                                           // 0x128(0x1)
	bool                                               IsUsingDialogue                                    // 0x129(0x1)
	byte                                               Gender                                             // 0x12a(0x1)
	byte                                               Rank                                               // 0x12b(0x1)
	Class PostBountyAIPawnSpawnedAction*               PostSpawnAction                                    // 0x130(0x8)
	class                                              BountyReward                                       // 0x170(0x8)
};


// Size 0x128
class AIPersistentSpawnerWave: public None
{
public:
	bool                                               CacheHealthOnDespawn                               // 0x100(0x1)
	class                                              AITypeToCache                                      // 0x108(0x8)
};


// Size 0x100
class AISpawnerWave: public None
{
public:
	float                                              SpawnChance                                        // 0x0(0x4)
	Struct WeightedProbabilityRange                    NumOfSpawnsInWave                                  // 0x8(0x20)
	Struct AISpawnTypeParamsCollection                 SpawnTypeParamsOverride                            // 0x28(0x48)
	Struct WeightedProbabilityRangeOfRanges            DelayBeforeWave                                    // 0x70(0x30)
	Struct WeightedProbabilityRangeOfRanges            DelayBetweenSpawns                                 // 0xa0(0x30)
	Struct WeightedProbabilityRangeOfRanges            DelayBeforeNextWaveIfSuccessful                    // 0xd0(0x30)
};


// Size 0x48
class AISpawnTypeParamsCollection: public None
{
public:
	TArray<Struct NumOfSpawnsInWave>                   SpawnParams                                        // 0x8(0x10)
};


// Size 0x14
class AIBountySpawnerWaveLocation: public None
{
public:
	Struct Vector                                      Location                                           // 0x0(0xc)
	float                                              SelectionWeight                                    // 0xc(0x4)
	bool                                               AllowForTarget                                     // 0x10(0x1)
};


// Size 0x28
class AIBountySpawnerArchive: public None
{
public:
	int                                                CurrentWaveIndex                                   // 0x8(0x4)
	TArray<Struct AIBountySpawnerArchiveWaveGroupEntry> WaveGroupEntries                                   // 0x10(0x10)
	float                                              BountyAudioIntensity                               // 0x20(0x4)
};


// Size 0x8
class AISpawnerArchive: public None
{
public:
};


// Size 0x18
class AIBountySpawnerArchiveWaveGroupEntry: public None
{
public:
	int                                                NumNonTargetAIKills                                // 0x0(0x4)
	int                                                NumTargetAIKills                                   // 0x4(0x4)
	TArray<Struct AIBountySpawnerArchiveWaveEntry>     WaveEntries                                        // 0x8(0x10)
};


// Size 0x4
class AIBountySpawnerArchiveWaveEntry: public None
{
public:
	int                                                NumPawnsToSpawn                                    // 0x0(0x4)
};


// Size 0x1
class BountySpawnerNewWaveGroupSpawnedEvent: public None
{
public:
	bool                                               IsFinalWave                                        // 0x0(0x1)
};


// Size 0x28
class BountySpawnerAudioChangedNetworkEvent: public None
{
public:
	byte                                               AudioState                                         // 0x10(0x1)
	float                                              Intensity                                          // 0x14(0x4)
	byte                                               BountyType                                         // 0x18(0x1)
	Struct Vector                                      BountyPosition                                     // 0x1c(0xc)
};


// Size 0x68
class EventAIBountySpawnerTargetKilled: public None
{
public:
	Struct FText                                       TargetName                                         // 0x0(0x38)
	Class Actor*                                       TargetActor                                        // 0x38(0x8)
	struct FName                                       RewardId                                           // 0x40(0x8)
	Class ItemInfo*                                    ItemDropped                                        // 0x48(0x8)
	byte                                               Rank                                               // 0x50(0x1)
	Struct Vector                                      DeathLocation                                      // 0x54(0xc)
	Class Actor*                                       Instigator                                         // 0x60(0x8)
};


// Size 0x28
class EventAIBountySpawnerWaveCompleted: public None
{
public:
	struct FName                                       IslandName                                         // 0x0(0x8)
	Struct Guid                                        CrewId                                             // 0x8(0x10)
	int                                                WaveIndex                                          // 0x18(0x4)
	int                                                TotalWaves                                         // 0x1c(0x4)
	Class Actor*                                       InstigatorOfFinalAIPawnDeath                       // 0x20(0x8)
};


// Size 0x110
class AIFaunaSpawnerWave: public None
{
public:
};


// Size 0x48
class MerchantCrateMetaWrapper: public None
{
public:
	float                                              Health                                             // 0x18(0x4)
	Struct StringAssetReference                        FaunaType                                          // 0x20(0x10)
	float                                              TimeSpentStarving                                  // 0x30(0x4)
	float                                              TimeToStarveInSeconds                              // 0x34(0x4)
	Struct Vector                                      TempSpawnLocationForActor                          // 0x38(0xc)
};


// Size 0x1
class EventFaunaThreatLevelChanged: public None
{
public:
	byte                                               ThreatLevel                                        // 0x0(0x1)
};


// Size 0x1
class EventFaunaAgitationEnded: public None
{
public:
};


// Size 0x8
class EventFaunaAgitationBegun: public None
{
public:
	Class Actor*                                       SourceActor                                        // 0x0(0x8)
};


// Size 0x1
class AthenaAIDebugCostDisplay: public None
{
public:
};


// Size 0x1
class AthenaAIDebugCostData: public None
{
public:
};


// Size 0x28
class AIDebugSpawnConfiguration: public None
{
public:
	int                                                NumIslandsToSpawnOn                                // 0x0(0x4)
	TArray<Struct FName>                               SpecificRegionsToSpawnOn                           // 0x8(0x10)
	TArray<Struct AIDebugSpawnAmount>                  WhatToSpawn                                        // 0x18(0x10)
};


// Size 0x10
class AIDebugSpawnAmount: public None
{
public:
	Class AIEncounterSettings*                         EncounterSettings                                  // 0x0(0x8)
	int                                                NumToSpawn                                         // 0x8(0x4)
};


// Size 0x48
class AIDioramaPawn: public None
{
public:
	Class Pawn*                                        Pawn                                               // 0x0(0x8)
};


// Size 0x28
class AIDioramaRoleDesc: public None
{
public:
	struct FName                                       RoleName                                           // 0x0(0x8)
	Struct StringAssetReference                        CustomAnimationAsset                               // 0x8(0x10)
	struct FName                                       CustomAnimationToRunOnSpawn                        // 0x18(0x8)
	class                                              StartingItemCategory                               // 0x20(0x8)
};


// Size 0x40
class AIDioramaLocationSourceComponentData: public None
{
public:
	Struct Transform                                   RelativeTransform                                  // 0x0(0x30)
	Class Actor*                                       Interactable                                       // 0x30(0x8)
};


// Size 0xa0
class DioramaCategoryEntries: public None
{
public:
};


// Size 0x10
class IslandDioramas: public None
{
public:
	TArray<Interface CampaignInfo>                     Entries                                            // 0x0(0x10)
};


// Size 0x10
class PetTurnRateModifier: public None
{
public:
	class                                              Strategy                                           // 0x0(0x8)
	float                                              TurnRateModifier                                   // 0x8(0x4)
};


// Size 0x18
class PetFlyingStrategyProperties: public None
{
public:
	class                                              Strategy                                           // 0x0(0x8)
	float                                              ChanceOfFlying                                     // 0x8(0x4)
	float                                              MinFlyingMeshZOffset                               // 0xc(0x4)
	float                                              MaxFlyingMeshZOffset                               // 0x10(0x4)
};


// Size 0xc
class PetMovementRequest: public None
{
public:
	byte                                               State                                              // 0x0(0x1)
	float                                              TargetMeshZOffset                                  // 0x4(0x4)
	bool                                               AdjustingFlight                                    // 0x8(0x1)
};


// Size 0x10
class PetLoadedMaterial: public None
{
public:
	Class MaterialInstance*                            MaterialInstance                                   // 0x0(0x8)
	bool                                               CastShadows                                        // 0x8(0x1)
};


// Size 0x8
class PetPartSizeMapping: public None
{
public:
	byte                                               PetSize                                            // 0x0(0x1)
	float                                              PetScale                                           // 0x4(0x4)
};


// Size 0x18
class PetMaterialEntry: public None
{
public:
	Struct StringAssetReference                        MaterialReference                                  // 0x0(0x10)
	bool                                               CastShadows                                        // 0x10(0x1)
};


// Size 0x10
class PetWieldableReactMapping: public None
{
public:
	class                                              WieldableType                                      // 0x0(0x8)
	struct FName                                       ReactId                                            // 0x8(0x8)
};


// Size 0x8
class EventSwimRotationModeChanged: public None
{
public:
	byte                                               NewSwimRotationMode                                // 0x0(0x1)
	float                                              NewRotationRate                                    // 0x4(0x4)
};


// Size 0x20
class QuestVariableGuidArray: public None
{
public:
};


// Size 0x20
class QuestVariableSharkPawn: public None
{
public:
};


// Size 0xb8
class TinySharkParams: public None
{
public:
	class                                              TinySharkType                                      // 0x0(0x8)
	float                                              TargetRadius                                       // 0x8(0x4)
	Struct Vector                                      SpawnOffset                                        // 0xc(0xc)
	class                                              TinySharkClassID                                   // 0x78(0x8)
	Struct WeightedProbabilityRangeOfRanges            LifetimeTimeout                                    // 0x80(0x30)
	float                                              TrackedShipDistanceThreshold                       // 0xb0(0x4)
	float                                              RepositionTime                                     // 0xb4(0x4)
};


// Size 0x20
class QuestVariableTinySharkExperience: public None
{
public:
};


// Size 0x1
class TinySharkWorldSettingsParams: public None
{
public:
	bool                                               TinySharkEnabled                                   // 0x0(0x1)
};


// Size 0x48
class TinySharkEQSRequest: public None
{
public:
};


// Size 0x28
class TinySharkServiceParams: public None
{
public:
	Class TinySharkParamsDataAsset*                    TinySharkParams                                    // 0x0(0x8)
	TArray<Struct TinySharkShipSpawnData>              SpawnForShipData                                   // 0x8(0x10)
	Class EnvQuery*                                    SpawnForShipQuery                                  // 0x18(0x8)
	float                                              SpawnFailureTimer                                  // 0x20(0x4)
};


// Size 0x68
class TinySharkShipSpawnData: public None
{
public:
	class                                              ShipSize                                           // 0x0(0x8)
	Struct WeightedProbabilityRangeOfRanges            Timer                                              // 0x8(0x30)
	TArray<Assetclass Timer>                           ControllerParams                                   // 0x38(0x10)
	Struct WeightedProbabilityRange                    ControllerParamsToUse                              // 0x48(0x20)
};


// Size 0x10
class TinySharkSpawnedNetworkEvent: public None
{
public:
};


// Size 0x10
class TinySharkKilledNetworkEvent: public None
{
public:
};


// Size 0x1
class EventTinySharkKilled: public None
{
public:
};


// Size 0x58
class EventTinySharkDamaged: public None
{
public:
	Struct ImpactDamageEvent                           ImpactDamageEvent                                  // 0x0(0x58)
};


// Size 0x1
class EventTinySharkDespawned: public None
{
public:
	byte                                               DespawnReason                                      // 0x0(0x1)
};


// Size 0x20
class EventTinySharkSpawned: public None
{
public:
	Struct FString                                     TinySharkPartTag                                   // 0x0(0x10)
	Struct Guid                                        SpawnConfigId                                      // 0x10(0x10)
};


// Size 0x68
class TinySharkCollidedTelemetryEvent: public None
{
public:
	Struct FString                                     TinySharkId                                        // 0x0(0x10)
	Struct FString                                     TinySharkName                                      // 0x10(0x10)
	Struct FString                                     ObstacleName                                       // 0x20(0x10)
	Struct Vector                                      CollisionLocation                                  // 0x30(0xc)
	Struct Vector                                      HomeLocation                                       // 0x3c(0xc)
	Struct FString                                     BehaviourTreeInfo                                  // 0x48(0x10)
	Struct FString                                     BlackboardInfo                                     // 0x58(0x10)
};


// Size 0x18
class TinySharkDespawnTelemetryEvent: public None
{
public:
	Struct FString                                     TinySharkId                                        // 0x0(0x10)
	byte                                               TinySharkDespawnReason                             // 0x10(0x1)
};


// Size 0x30
class TinySharkSpawnTelemetryEvent: public None
{
public:
	Struct FString                                     TinySharkId                                        // 0x0(0x10)
	Struct FString                                     TinySharkType                                      // 0x10(0x10)
	Struct Guid                                        ConfigSpawnId                                      // 0x20(0x10)
};


// Size 0x30
class AthenaAIItemParamValue: public None
{
public:
	struct FName                                       ParamName                                          // 0x20(0x8)
	float                                              Value                                              // 0x28(0x4)
};


// Size 0x10
class AthenaAIAbilityPlayerBasedRanges: public None
{
public:
	TArray<Struct AthenaAIAbilityPlayerBasedRange>     AbilityRanges                                      // 0x0(0x10)
};


// Size 0x38
class AthenaAIAbilityPlayerBasedRange: public None
{
public:
	int                                                MaxPlayers                                         // 0x0(0x4)
	Struct WeightedProbabilityRangeOfRanges            WeightedArray                                      // 0x8(0x30)
};


// Size 0x20
class AIAbilityContinuousCooldownParameterData: public None
{
public:
	Struct AthenaAIAbilityPlayerBasedRanges            InitialCooldown                                    // 0x0(0x10)
	Struct AthenaAIAbilityPlayerBasedRanges            CooldownBetweenActivations                         // 0x10(0x10)
};


// Size 0x14
class AthenaAIControllerSenseSettings: public None
{
public:
	bool                                               EnableSight                                        // 0x0(0x1)
	bool                                               EnableHearing                                      // 0x1(0x1)
	bool                                               EnableDamage                                       // 0x2(0x1)
	float                                              SightRadius                                        // 0x4(0x4)
	float                                              LoseSightRadius                                    // 0x8(0x4)
	float                                              PeripheralVisionAngleDegrees                       // 0xc(0x4)
	float                                              MaxHearingRange                                    // 0x10(0x4)
};


// Size 0x14
class AthenaAIControllerDamageTargetScoreFromPerceivedTarget: public None
{
public:
	float                                              MinDamageTargetScore                               // 0x0(0x4)
	float                                              MaxDamageTargetScore                               // 0x4(0x4)
	float                                              DamageForMinDamageTargetScore                      // 0x8(0x4)
	float                                              DamageForMaxDamageTargetScore                      // 0xc(0x4)
	float                                              RateToDecayDamagedFromTarget                       // 0x10(0x4)
};


// Size 0xc
class AthenaAIControllerHealthCustomisation: public None
{
public:
	bool                                               OverrideMaxHealth                                  // 0x0(0x1)
	bool                                               OverrideMaxHealthWithMinMax                        // 0x1(0x1)
	float                                              MinHealth                                          // 0x4(0x4)
	float                                              MaxHealth                                          // 0x8(0x4)
};


// Size 0x20
class AthenaAIControllerSenseSettingOverride: public None
{
public:
	class                                              AIStrategy                                         // 0x0(0x8)
	Struct AthenaAIControllerSenseSettings             SenseSettings                                      // 0x8(0x14)
	bool                                               ClearPerceivedData                                 // 0x1c(0x1)
};


// Size 0x38
class AthenaAIControllerWeightedRangesParamValue: public None
{
public:
	struct FName                                       ParamName                                          // 0x0(0x8)
	Struct WeightedProbabilityRangeOfRanges            Value                                              // 0x8(0x30)
};


// Size 0xc
class AthenaAIControllerParamValue: public None
{
public:
	struct FName                                       ParamName                                          // 0x0(0x8)
	float                                              Value                                              // 0x8(0x4)
};


// Size 0x10
class AIAbilityFollowUp: public None
{
public:
	class                                              AbilityType                                        // 0x0(0x8)
	float                                              Chance                                             // 0x8(0x4)
};


// Size 0x8
class MinMaxAbilityRange: public None
{
public:
	float                                              MinDistanceToTarget                                // 0x0(0x4)
	float                                              MaxDistanceToTarget                                // 0x4(0x4)
};


// Size 0x18
class AIStrategyMovementProperties: public None
{
public:
	class                                              AIStrategy                                         // 0x0(0x8)
	float                                              MaxSpeedAmp                                        // 0x8(0x4)
	float                                              MaxAccelAmp                                        // 0xc(0x4)
	float                                              OverrideRVOAvoidanceRadius                         // 0x10(0x4)
	float                                              OverrideBlendSpeed                                 // 0x14(0x4)
};


// Size 0x10
class AthenaAIAbilityDamageStage: public None
{
public:
	TArray<class AbilitiesInStage*>                    AbilitiesInStage                                   // 0x0(0x10)
};


// Size 0x10
class AthenaAICharacterControllerSpawnItemDescForItemCategory: public None
{
public:
	class                                              ItemCategory                                       // 0x0(0x8)
	class                                              ItemDesc                                           // 0x8(0x8)
};


// Size 0x10
class AthenaAICharacterControllerWeightedAmmoType: public None
{
public:
	class                                              AmmoType                                           // 0x0(0x8)
	float                                              Weighting                                          // 0x8(0x4)
};


// Size 0x10
class AthenaAICharacterCannonTargetingParams: public None
{
public:
	TArray<Struct AthenaAICharacterCannonTarget>       Params                                             // 0x0(0x10)
};


// Size 0xc
class AthenaAICharacterCannonTarget: public None
{
public:
	float                                              Weight                                             // 0x0(0x4)
	struct FName                                       TargetLocation                                     // 0x4(0x8)
};


// Size 0x10
class AthenaAICharacterControllerItemCategoryProjectileEffectivenessP: public None
{
public:
	class                                              ItemCategory                                       // 0x0(0x8)
	Class CurveFloat*                                  DistanceInMToProjectileHitChanceCurve              // 0x8(0x8)
};


// Size 0x18
class AthenaAICharacterControllerItemCategoryNamedParams: public None
{
public:
	class                                              ItemCategory                                       // 0x0(0x8)
	TArray<Struct ItemCategory>                        NamedControllerParams                              // 0x8(0x10)
};


// Size 0x18
class AIAmmoRankMapping: public None
{
public:
	Class AthenaAIAmmoDataAsset*                       Ammo                                               // 0x0(0x8)
	TArray<Float >                                     Weights                                            // 0x8(0x10)
};


// Size 0x2c
class AIDebugVisualisationCone: public None
{
public:
	Struct Vector                                      Origin                                             // 0x0(0xc)
	Struct Vector                                      Direction                                          // 0xc(0xc)
	float                                              Length                                             // 0x18(0x4)
	float                                              AngleWidthRadians                                  // 0x1c(0x4)
	float                                              AngleHeightRadians                                 // 0x20(0x4)
	float                                              LifeTime                                           // 0x24(0x4)
	byte                                               Colour                                             // 0x28(0x1)
};


// Size 0x18
class AIDebugVisualisationSphere: public None
{
public:
	Struct Vector                                      Centre                                             // 0x0(0xc)
	float                                              Radius                                             // 0xc(0x4)
	float                                              LifeTime                                           // 0x10(0x4)
	byte                                               Colour                                             // 0x14(0x1)
};


// Size 0x24
class AIDebugVisualisationCylinder: public None
{
public:
	Struct Vector                                      To                                                 // 0x0(0xc)
	Struct Vector                                      From                                               // 0xc(0xc)
	float                                              Radius                                             // 0x18(0x4)
	float                                              LifeTime                                           // 0x1c(0x4)
	byte                                               Colour                                             // 0x20(0x1)
};


// Size 0x40
class AIDebugVisualisationBox: public None
{
public:
	Struct Vector                                      Centre                                             // 0x0(0xc)
	Struct Vector                                      Extents                                            // 0xc(0xc)
	Struct Quat                                        Rotation                                           // 0x20(0x10)
	float                                              LifeTime                                           // 0x30(0x4)
	byte                                               Colour                                             // 0x34(0x1)
};


// Size 0x20
class AIDebugVisualisationLine: public None
{
public:
	Struct Vector                                      From                                               // 0x0(0xc)
	Struct Vector                                      To                                                 // 0xc(0xc)
	float                                              LifeTime                                           // 0x18(0x4)
	byte                                               Colour                                             // 0x1c(0x1)
};


// Size 0x20
class TargetItemDropProgressionPair: public None
{
public:
	Struct StringAssetReference                        CrewItemSpawn                                      // 0x0(0x10)
	Struct StringAssetReference                        CaptainItemSpawn                                   // 0x10(0x10)
};


// Size 0x28
class AIFormVarietyEntry: public None
{
public:
	Struct StringAssetReference                        Form                                               // 0x0(0x10)
	float                                              Weight                                             // 0x10(0x4)
	int                                                MaxPerEncounter                                    // 0x14(0x4)
	TArray<Struct AIIndividualVarietyEntry>            Individuals                                        // 0x18(0x10)
};


// Size 0x20
class AIIndividualVarietyEntry: public None
{
public:
	TArray<Struct MaxPerEncounter>                     Loadouts                                           // 0x0(0x10)
	int                                                RankOffset                                         // 0x10(0x4)
	float                                              Weight                                             // 0x14(0x4)
	int                                                MaxPerEncounter                                    // 0x18(0x4)
};


// Size 0x18
class AIEncounterGenerationRecipeFeatureBasedRankOrderList: public None
{
public:
	struct FName                                       FeatureName                                        // 0x0(0x8)
	TArray<class Recipes*>                             Recipes                                            // 0x8(0x10)
};


// Size 0x18
class AthenaAIFormComponentVfxCustomisation: public None
{
public:
	class                                              VfxCustomisationType                               // 0x0(0x8)
	bool                                               VfxEnabled                                         // 0x8(0x1)
	Class Object*                                      VfxTemplate                                        // 0x10(0x8)
};


// Size 0x10
class AIFormDamageResponse: public None
{
public:
	class                                              DamagerType                                        // 0x0(0x8)
	float                                              DamageMultiplier                                   // 0x8(0x4)
	byte                                               HitReaction                                        // 0xc(0x1)
	bool                                               IsKnockbackDisabled                                // 0xd(0x1)
	bool                                               IsStunDisabled                                     // 0xe(0x1)
};


// Size 0x18
class AIFormRankMapping: public None
{
public:
	Class AthenaAIFormDataAsset*                       Form                                               // 0x0(0x8)
	TArray<Float >                                     Weights                                            // 0x8(0x10)
};


// Size 0x18
class AIPartsCategoryFormMapping: public None
{
public:
	Class AthenaAIFormDataAsset*                       Form                                               // 0x0(0x8)
	TArray<Struct AIPartsCategoryMapping>              CategoryMappings                                   // 0x8(0x10)
};


// Size 0x10
class AIPartsCategoryMapping: public None
{
public:
	class                                              ClassId                                            // 0x0(0x8)
	Class AIPartsCategory*                             PartsCategory                                      // 0x8(0x8)
};


// Size 0x18
class AISkillsetRankMapping: public None
{
public:
	Class AthenaAIControllerParamsDataAsset*           Skillset                                           // 0x0(0x8)
	TArray<Float >                                     Weights                                            // 0x8(0x10)
};


// Size 0x30
class AIDropSpawnerRankMapping: public None
{
public:
	TArray<Float >                                     Weights                                            // 0x20(0x10)
};


// Size 0x18
class AILoadoutRankMapping: public None
{
public:
	Class LoadoutAsset*                                Loadout                                            // 0x0(0x8)
	TArray<Float >                                     Weights                                            // 0x8(0x10)
};


// Size 0x20
class CustomPlayersAITrackerData: public None
{
public:
	Class AIPlayerTracker*                             Tracker                                            // 0x0(0x8)
};


// Size 0x58
class AITypeData: public None
{
public:
	struct FName                                       AITypeName                                         // 0x0(0x8)
	Struct StringClassReference                        AIPawnClass                                        // 0x8(0x10)
	Struct StringAssetReference                        DefaultDebugSkillset                               // 0x18(0x10)
	Struct StringAssetReference                        DefaultDebugLoadout                                // 0x28(0x10)
	class                                              DefaultDebugAIClassId                              // 0x38(0x8)
	bool                                               RequireNavMesh                                     // 0x40(0x1)
	int                                                AIRegionCostUnits                                  // 0x44(0x4)
	int                                                AIWorldCostUnits                                   // 0x48(0x4)
	struct FName                                       FeatureToggle                                      // 0x4c(0x8)
};


// Size 0x18
class AISpawnWaveSequenceRankMapping: public None
{
public:
	Class AISpawnWaveSequence*                         SpawnWaveSequence                                  // 0x0(0x8)
	TArray<Float >                                     Weights                                            // 0x8(0x10)
};


// Size 0x18
class AIWeightedProbabilityRangeOfRangesRankMapping: public None
{
public:
	Class AIWeightedProbabilityRangeOfRangesAsset*     RangeOfRanges                                      // 0x0(0x8)
	TArray<Float >                                     Weights                                            // 0x8(0x10)
};


// Size 0x20
class AIEncounterAndWaveSettingsOverride: public None
{
public:
	Class AIEncounterSettings*                         EncounterSettings                                  // 0x0(0x8)
	Class AISpawnWaveSequenceRankProgression*          SpawnWaveProgression                               // 0x8(0x8)
	float                                              Chance                                             // 0x10(0x4)
	struct FName                                       FeatureToggle                                      // 0x14(0x8)
};


// Size 0x10
class AdditionalSpawnerBehaviour: public None
{
public:
	Class SpawnerBehaviourStrategy*                    BehaviourStrategy                                  // 0x0(0x8)
};


// Size 0x10
class AISpawnOverride: public None
{
public:
	Struct StringAssetReference                        FormOverride                                       // 0x0(0x10)
};


// Size 0x18
class ConditionalAISpawnOverride: public None
{
public:
	Class AISpawnOverrideCondition*                    Condition                                          // 0x0(0x8)
	Struct AISpawnOverride                             Override                                           // 0x8(0x10)
};


// Size 0x38
class AISpawnContextIdEncounterSettingsPair: public None
{
public:
	TArray<Class AIExclusionZone>                      SpawnContexts                                      // 0x0(0x10)
	bool                                               DisableSpawning                                    // 0x10(0x1)
	Class AIEncounterSettings*                         EncounterSettings                                  // 0x18(0x8)
	Class AISpawnWaveSequenceRankProgression*          SpawnWaveProgression                               // 0x20(0x8)
	TArray<Struct SpawnWaveProgression>                EncounterAndWaveSettingsOverride                   // 0x28(0x10)
};


// Size 0x18
class AIExclusionZone: public None
{
public:
	Struct Vector                                      Location                                           // 0x0(0xc)
	float                                              RadiusSquared                                      // 0xc(0x4)
	float                                              Radius                                             // 0x10(0x4)
	float                                              Height                                             // 0x14(0x4)
};


// Size 0xc
class AIPartIdNumVariantInfo: public None
{
public:
	struct FName                                       AIPartId                                           // 0x0(0x8)
	int                                                NumVariants                                        // 0x8(0x4)
};


// Size 0x1
class EventAIPartsRetrievalComponentBeforeBeginLoad: public None
{
public:
};


// Size 0x18
class ReplicatedAIPartsData: public None
{
public:
	Class AIPartsCategory*                             PartsCategory                                      // 0x0(0x8)
	Struct AIPartId                                    AIPartId                                           // 0x8(0x8)
	int                                                MeshIndex                                          // 0x10(0x4)
	int                                                TeamColorIndex                                     // 0x14(0x4)
};


// Size 0x20
class SpawnLocationGroup: public None
{
public:
	TArray<Name None>                                  AllowedSpawnTypes                                  // 0x0(0x10)
	TArray<Struct AllowedSpawnTypes>                   SpawnLocations                                     // 0x10(0x10)
};


// Size 0x10
class AISpawnContextData: public None
{
public:
	struct FName                                       Name                                               // 0x0(0x8)
	class                                              Id                                                 // 0x8(0x8)
};


// Size 0x20
class AIFixedWavesSpawnerArchive: public None
{
public:
	TArray<Int None>                                   NumSpawnedPawnsInWaves                             // 0x8(0x10)
	bool                                               WavesSpawnedOnSpottedNewTarget                     // 0x18(0x1)
};


// Size 0x18
class AIIncrementalWaveSpawnerArchive: public None
{
public:
	Struct Vector                                      LastTargetPosition                                 // 0x8(0xc)
	int                                                CurrentNumSpawnedPawns                             // 0x14(0x4)
};


// Size 0x18
class AIPerCrewSpawnerRespawnUnit: public None
{
public:
};


// Size 0x30
class AIPerCrewSpawnerCrewUnit: public None
{
public:
	TArray<Struct TemporaryPlayerDetailsUnitEntry>     SelectedWaves                                      // 0x20(0x10)
};


// Size 0x38
class TemporaryPlayerDetailsUnitEntry: public None
{
public:
};


// Size 0x30
class AIPerPlayerSpawnerPlayerDetailsUnit: public None
{
public:
};


// Size 0x20
class AICustomClassIdNameOverrides: public None
{
public:
	TArray<Class AICustomNameTitleMapping>             ClassIds                                           // 0x0(0x10)
	TArray<Struct FText>                               Names                                              // 0x10(0x10)
};


// Size 0x40
class AICustomNameTitleMapping: public None
{
public:
	class                                              AIClassId                                          // 0x0(0x8)
	Struct FText                                       Title                                              // 0x8(0x38)
};


// Size 0x10
class AIProgressiveWavesSpawnerArchive: public None
{
public:
	int                                                CurrentWaveIndex                                   // 0x8(0x4)
};


// Size 0x34
class AITargetInfo: public None
{
public:
	Struct AITargetBounds                              Bounds                                             // 0x0(0x18)
	Struct Vector                                      TargetPos                                          // 0x18(0xc)
	Struct Vector                                      TargetVelocity                                     // 0x24(0xc)
	float                                              TargetYaw                                          // 0x30(0x4)
};


// Size 0x18
class AITargetBounds: public None
{
public:
	Struct Vector                                      Offset                                             // 0x0(0xc)
	Struct Vector                                      Extents                                            // 0xc(0xc)
};


// Size 0xc
class PerDepthSpawnChance: public None
{
public:
	float                                              DepthUpperBound                                    // 0x0(0x4)
	float                                              DepthLowerBound                                    // 0x4(0x4)
	float                                              ChanceToSpawn                                      // 0x8(0x4)
};


// Size 0x20
class PlayerInWaterData: public None
{
public:
};


// Size 0x28
class SirenEncounterData: public None
{
public:
	Class World*                                       GameWorld                                          // 0x0(0x8)
	Class AIPerPlayerSpawner*                          SirenSpawner                                       // 0x8(0x8)
	Class SimpleAIRegion*                              AIRegion                                           // 0x10(0x8)
	Class AIProximityPlayerTracker*                    ProximityPlayerTracker                             // 0x18(0x8)
	float                                              ShutdownTime                                       // 0x20(0x4)
	byte                                               SirenEncounterState                                // 0x24(0x1)
};


// Size 0xc
class ChanceForSharksToBlockSirenEncounterData: public None
{
public:
	int                                                NumberOfSharks                                     // 0x0(0x4)
	float                                              ChanceToSpawn                                      // 0x4(0x4)
	float                                              RadiusToCheck                                      // 0x8(0x4)
};


// Size 0x8
class MinMaxBurrowAbility: public None
{
public:
	float                                              MinValue                                           // 0x0(0x4)
	float                                              MaxValue                                           // 0x4(0x4)
};


// Size 0x18
class WeightedAmmoTypeRange: public None
{
public:
	float                                              MinRange                                           // 0x0(0x4)
	TArray<Struct WeightedAmmoType>                    AmmoTypeProbabilities                              // 0x8(0x10)
};


// Size 0x10
class WeightedAmmoType: public None
{
public:
	float                                              ProbabilityAtRange                                 // 0x0(0x4)
	class                                              AmmoType                                           // 0x8(0x8)
};


// Size 0x38
class AthenaAIControllerTargetPickingData: public None
{
public:
	Struct FString                                     TargetName                                         // 0x0(0x10)
	bool                                               BestTargetByScore                                  // 0x10(0x1)
	bool                                               IsCurrentTargetActor                               // 0x11(0x1)
	float                                              TargetScore                                        // 0x14(0x4)
	float                                              DistScore                                          // 0x18(0x4)
	float                                              FacingScore                                        // 0x1c(0x4)
	float                                              TargetWeightScore                                  // 0x20(0x4)
	float                                              DamageScore                                        // 0x24(0x4)
	float                                              TargetDistance                                     // 0x28(0x4)
	float                                              TargetAngle                                        // 0x2c(0x4)
	int                                                NumTargeting                                       // 0x30(0x4)
	float                                              RecentDamage                                       // 0x34(0x4)
};


// Size 0x10
class AIStategyControllerMovementMod: public None
{
public:
	class                                              AIStrategy                                         // 0x0(0x8)
	float                                              OverrideControlRotationInterpSpeed                 // 0x8(0x4)
};


// Size 0x10
class CarriedItemThreatOverride: public None
{
public:
	class                                              ItemDesc                                           // 0x0(0x8)
	float                                              Threat                                             // 0x8(0x4)
};


// Size 0x10
class HearingThreat: public None
{
public:
	struct FName                                       SoundTag                                           // 0x0(0x8)
	float                                              Threat                                             // 0x8(0x4)
	float                                              CarrierSpeedThreshold                              // 0xc(0x4)
};


// Size 0x38
class BlackboardValueCondition: public None
{
public:
	Struct BlackboardKeySelector                       BlackboardKey                                      // 0x0(0x28)
	byte                                               Comparison                                         // 0x28(0x1)
	float                                              Value                                              // 0x2c(0x4)
	bool                                               OnEntry                                            // 0x30(0x1)
	bool                                               OnExit                                             // 0x31(0x1)
};


// Size 0x58
class ChanceAndBlackboardKeyPair: public None
{
public:
	Struct AIDataProviderFloatValue                    Chance                                             // 0x0(0x30)
	Struct BlackboardKeySelector                       BlackboardKey                                      // 0x30(0x28)
};


// Size 0x38
class ConditionalBasedOnBlackboardKey: public None
{
public:
	bool                                               UseCondition                                       // 0x0(0x1)
	Struct BlackboardKeySelector                       BlackboardKey                                      // 0x8(0x28)
	bool                                               NegateCondition                                    // 0x30(0x1)
};


// Size 0x38
class WeightedAIStrategyChance: public None
{
public:
	class                                              Strategy                                           // 0x0(0x8)
	Struct AIDataProviderFloatValue                    WeightedChance                                     // 0x8(0x30)
};


// Size 0x18
class AIStrategyVulnerabilityData: public None
{
public:
	class                                              Strategy                                           // 0x0(0x8)
	TArray<Byte Strategy>                              PreventedHealthChanges                             // 0x8(0x10)
};


// Size 0x1
class EventSporeBreathAIAbilityFinished: public None
{
public:
};


// Size 0x1
class EventSporeBreathAIAbilityStarted: public None
{
public:
};


// Size 0x1
class EventAIVulnerabilityAbilityEnded: public None
{
public:
};


// Size 0x1
class EventAIVulnerabilityAbilityStarted: public None
{
public:
};


// Size 0x8
class EventAIPawnCarrierChange: public None
{
public:
	Class Actor*                                       Carrier                                            // 0x0(0x8)
};


// Size 0x1
class EventAIDebugTextUpdated: public None
{
public:
};


// Size 0x1
class EventAIControllerUnPossess: public None
{
public:
};


// Size 0x1
class EventAIKnockbackEnded: public None
{
public:
};


// Size 0x18
class EventAIKnockbackStarted: public None
{
public:
};


// Size 0x8
class EventNewAIStrategyBPReadable: public None
{
public:
	class                                              NewAIStrategy                                      // 0x0(0x8)
};


// Size 0x8
class EventNewAIStrategy: public None
{
public:
	class                                              NewAIStrategy                                      // 0x0(0x8)
};


// Size 0x1
class EventPawnRequestDespawn: public None
{
public:
};


// Size 0x8
class EventPawnRemoveOwnership: public None
{
public:
	Class Pawn*                                        AIPawn                                             // 0x0(0x8)
};


// Size 0x1
class EventOwnedPawnRemoveOwnership: public None
{
public:
};


// Size 0x1
class EventAIPartRetrievalRequestFailed: public None
{
public:
};


// Size 0x18
class EventVisualAppearanceSelected: public None
{
public:
	Class AIPartsCategory*                             PartsCategory                                      // 0x0(0x8)
	Struct AIPartId                                    AIPartId                                           // 0x8(0x8)
	int                                                PartsIndexToUse                                    // 0x10(0x4)
	int                                                ColorTextureIndex                                  // 0x14(0x4)
};


// Size 0x30
class EventAILoadoutSelected: public None
{
public:
	Struct ItemLoadout                                 Loadout                                            // 0x0(0x20)
	class                                              NonStorableItem                                    // 0x20(0x8)
};


// Size 0x8
class EventAIAmmoSelected: public None
{
public:
	Class AthenaAIAmmoDataAsset*                       Ammo                                               // 0x0(0x8)
};


// Size 0x8
class EventAIFormSelected: public None
{
public:
	Class AthenaAIFormDataAsset*                       Form                                               // 0x0(0x8)
};


// Size 0x1
class EventAIPawnReadyToConstructDebugText: public None
{
public:
};


// Size 0x50
class EventOwnedPawnFinishedSpawning: public None
{
public:
	Class Object*                                      AICoordinator                                      // 0x0(0x8)
	struct FName                                       Region                                             // 0x8(0x8)
	Struct Vector                                      SpawnPos                                           // 0x10(0xc)
	Class Actor*                                       ActorToPerceiveOnSpawn                             // 0x20(0x8)
	float                                              MaximumDistanceToPerceiveOnSpawn                   // 0x28(0x4)
	Class AthenaAIControllerParamsDataAsset*           Skillset                                           // 0x30(0x8)
	struct FName                                       HomeRegionZone                                     // 0x38(0x8)
	Class Object*                                      TargetInteractableOnSpawn                          // 0x40(0x8)
	Class AISpawner*                                   OwnerAISpawner                                     // 0x48(0x8)
};


// Size 0x8
class EventPlayerLeftAISpawnableWater: public None
{
public:
	Class Actor*                                       Player                                             // 0x0(0x8)
};


// Size 0x18
class EventPlayerEnterAISpawnableWater: public None
{
public:
	Class Actor*                                       Player                                             // 0x0(0x8)
};


// Size 0x20
class EventPlayerSetFootUponAISpawnRegion: public None
{
public:
	Class Actor*                                       Player                                             // 0x0(0x8)
};


// Size 0x18
class EventPlayerLeftAISpawnRegion: public None
{
public:
	Class Actor*                                       Player                                             // 0x0(0x8)
};


// Size 0x20
class EventPlayerEnteredAISpawnRegion: public None
{
public:
	Class Actor*                                       Player                                             // 0x0(0x8)
};


// Size 0x1
class EventAllAIProgressiveWavesCompleted: public None
{
public:
};


// Size 0x10
class EventAIPawnRemovedFromAIRegion: public None
{
public:
	Class Pawn*                                        AIPawn                                             // 0x0(0x8)
};


// Size 0x10
class EventAIPawnAddedToAIRegion: public None
{
public:
	Class Pawn*                                        AIPawn                                             // 0x0(0x8)
};


// Size 0x1
class EventOceanCrawlerAIBuffAudioRequest: public None
{
public:
	bool                                               IsBuffGiver                                        // 0x0(0x1)
};


// Size 0x8
class EventOceanCrawlerAIAbilityAudioRequest: public None
{
public:
	byte                                               RequestAudioKey                                    // 0x0(0x1)
	float                                              AudioDelay                                         // 0x4(0x4)
};


// Size 0x1
class EventAthenaAISpawnBeginAnim: public None
{
public:
	byte                                               SpawnType                                          // 0x0(0x1)
};


// Size 0x2
class EventAthenaAISpawnActive: public None
{
public:
	byte                                               SpawnType                                          // 0x0(0x1)
	bool                                               SpawnActive                                        // 0x1(0x1)
};


// Size 0x40
class AISpawnerTelemetryEvent: public None
{
public:
	Struct FString                                     AISpawnerType                                      // 0x0(0x10)
	Struct FString                                     AISpawnerRegion                                    // 0x10(0x10)
	TArray<Str >                                       AISpawnerContexts                                  // 0x20(0x10)
	int                                                AISpawnerWaveSpawnNumber                           // 0x30(0x4)
	float                                              AISpawnerWaveDelayBefore                           // 0x34(0x4)
	float                                              AISpawnerWaveDelayAfter                            // 0x38(0x4)
};


// Size 0xd0
class AITelemetryFragmentInput: public None
{
public:
	Struct AIEncounterSpecification                    AIEncounterSpecification                           // 0x8(0xc8)
};


// Size 0x70
class AITelemetryFragment: public None
{
public:
	Struct FString                                     AIType                                             // 0x0(0x10)
	Struct FString                                     AIId                                               // 0x10(0x10)
	TArray<Str >                                       AILoadOut                                          // 0x20(0x10)
	Struct FString                                     AIPawnType                                         // 0x30(0x10)
	Struct FString                                     AISkillset                                         // 0x40(0x10)
	Struct FString                                     AIForm                                             // 0x50(0x10)
	Struct FString                                     AIClass                                            // 0x60(0x10)
};


// Size 0x10
class PlayerKillAITelemetryEvent: public None
{
public:
	Struct Guid                                        AttackId                                           // 0x0(0x10)
};


// Size 0x10
class AISpawnTelemetryEvent: public None
{
public:
	Struct FString                                     LocationName                                       // 0x0(0x10)
};


// Size 0x10
class AIActorTimeout: public None
{
public:
	Class Actor*                                       AIActor                                            // 0x0(0x8)
	float                                              Timer                                              // 0x8(0x4)
};


}