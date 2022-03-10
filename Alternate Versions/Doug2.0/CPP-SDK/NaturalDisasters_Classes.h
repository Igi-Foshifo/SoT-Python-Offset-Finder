namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x78
class AshenLordAshCloudSetupDataAsset: public DataAsset
{
public:
	Struct WeightedProbabilityRangeOfRanges            AshCloudRadiusInMetres                             // 0x28(0x30)
	float                                              AshCloudHeightCoefficient                          // 0x58(0x4)
	Struct WeightedProbabilityRangeOfRanges            AshCloudLifetime                                   // 0x60(0x30)
	Class CurveFloat*                                  ScaleUpSpeedCurve                                  // 0x90(0x8)
	Class CurveFloat*                                  DissipationCurve                                   // 0x98(0x8)
};


// Size 0x88
class AshenLordAshCloud: public Actor
{
public:
	Class StaticMeshComponent*                         CloudMesh                                          // 0x3d0(0x8)
	Class AshenLordAshCloudSetupDataAsset*             SetupData                                          // 0x3d8(0x8)
	float                                              InnerRangeStartOffset                              // 0x3e0(0x4)
	float                                              OuterRangeStart                                    // 0x3e4(0x4)
	struct FName                                       NormalisedEngulfedRTPC                             // 0x3e8(0x8)
	float                                              RTPCSecondsBetweenUpdates                          // 0x3f0(0x4)
	float                                              LifeTime                                           // 0x3f8(0x4)
	float                                              StartTime                                          // 0x3fc(0x4)
	float                                              TimeOffset                                         // 0x400(0x4)
	byte                                               CloudState                                         // 0x404(0x1)
	float                                              MaxRadiusMultiplier                                // 0x43c(0x4)
};


// Size 0x70
class AshenLordVolcano: public Actor
{
public:
	Class AshenLordVolcanoSetupDataAsset*              VolcanoSetupData                                   // 0x3d0(0x8)
};


// Size 0x418
class VolcanoSetupDataAsset: public DataAsset
{
public:
	Struct WeightedProbabilityRangeOfRanges            WarmUpDuration                                     // 0x28(0x30)
	Struct WeightedProbabilityRangeOfRanges            EruptionDuration                                   // 0x58(0x30)
	Struct WeightedProbabilityRangeOfRanges            DormantDuration                                    // 0x88(0x30)
	float                                              MinimumDurationForTheEffects                       // 0xb8(0x4)
	Struct WeightedProbabilityRangeOfRanges            GroundAndWaterStayHotDurationAfterVolcanoFinishesDuration // 0xc0(0x30)
	Struct WeightedProbabilityRangeOfRanges            ProjectileTriggerFrequency                         // 0xf0(0x30)
	Struct WeightedProbabilityRangeOfRanges            PercentageOfMaxTargetingRange                      // 0x120(0x30)
	int                                                MinNumProjectilesToTrigger                         // 0x150(0x4)
	int                                                MaxNumProjectilesToTrigger                         // 0x154(0x4)
	int                                                ExtraProjectilePoolNumProjectiles                  // 0x158(0x4)
	Struct VolcanoTargetChances                        ChanceToTargetPlayers                              // 0x160(0x58)
	Struct VolcanoTargetChances                        ChanceToTargetShips                                // 0x1b8(0x58)
	Struct VolcanoTargetChances                        ChanceToTargetWatercraft                           // 0x210(0x58)
	Struct WeightedProbabilityRangeOfRanges            PlayerNearMissDistanceInMetres                     // 0x268(0x30)
	float                                              InnerShipNearMissRadiusInMetres                    // 0x298(0x4)
	float                                              OuterShipNearMissRadiusInMetres                    // 0x29c(0x4)
	float                                              InnerWatercraftNearMissRadiusInMetres              // 0x2a0(0x4)
	float                                              OuterWatercraftNearMissRadiusInMetres              // 0x2a4(0x4)
	TArray<Struct OuterWatercraftNearMissRadiusInMetres> Projectiles                                        // 0x2a8(0x10)
	TArray<Struct Projectiles>                         ForceFeedbackIgnitionEffect                        // 0x2b8(0x10)
	class                                              LocalMiniProjectilesClass                          // 0x2c8(0x8)
	Struct WeightedProbabilityRangeOfRanges            LocalMiniProjectilesSpawnHeightAbovePlayerInMetres // 0x2d0(0x30)
	Struct WeightedProbabilityRangeOfRanges            LocalMiniProjectilesSpawnDistanceFromPlayerInMetres // 0x300(0x30)
	Struct WeightedProbabilityRangeOfRanges            LocalMiniProjectilesTimeBetweenSpawns              // 0x330(0x30)
	Struct WeightedProbabilityRange                    NumLocalMiniProjectilesToTrigger                   // 0x360(0x20)
	Struct WeightedProbabilityRangeOfRanges            LocalMiniProjectilesSpeed                          // 0x380(0x30)
	float                                              LocalMiniProjectilesGravityScale                   // 0x3b0(0x4)
	Struct WeightedProbabilityRangeOfRanges            LocalMiniProjectilesSpawnAngleRange                // 0x3b8(0x30)
	Struct WeightedProbabilityRangeOfRanges            LocalMiniProjectilesSpawnStartPositionOffsetInMetres // 0x3e8(0x30)
	float                                              LocalMiniProjectilesSpawnDistanceSpeedScalar       // 0x418(0x4)
	float                                              LocalMiniProjectilesSpawnDistanceMaxPlayerSpeed    // 0x41c(0x4)
	float                                              TimeBetweenLocalEmbers                             // 0x420(0x4)
	TArray<Struct TimeBetweenLocalEmbers>              LocalEmbers                                        // 0x428(0x10)
	float                                              EmbersSpawnOffsetInMetres                          // 0x438(0x4)
	float                                              ServerMigrationDistanceAsMultipleOfOuterTargetRadius // 0x43c(0x4)
};


// Size 0x150
class AshenLordVolcanoSetupDataAsset: public DataAsset
{
public:
	Struct WeightedProbabilityRangeOfRanges            ProjectileTriggerFrequency                         // 0x28(0x30)
	Struct WeightedProbabilityRange                    NumProjectilesToTrigger                            // 0x58(0x20)
	Struct WeightedProbabilityRangeOfRanges            SpawnHeightInMetres                                // 0x78(0x30)
	Struct WeightedProbabilityRangeOfRanges            TargetDistanceFromCenterInMetres                   // 0xa8(0x30)
	Struct WeightedProbabilityRangeOfRanges            TimeBetweenSpawns                                  // 0xd8(0x30)
	Struct WeightedProbabilityRangeOfRanges            StartPositionOffsetInMetres                        // 0x108(0x30)
	TArray<Struct StartPositionOffsetInMetres>         Projectiles                                        // 0x138(0x10)
	Struct PoolableCollectionMapConfiguration          PoolableProjectilesConfig                          // 0x148(0x18)
	Struct VolcanoSetupDataEmbersEntry                 Embers                                             // 0x160(0x10)
	float                                              EmberSpawnHeightInMeters                           // 0x170(0x4)
	float                                              TimeBetweenEmbers                                  // 0x174(0x4)
};


// Size 0x18
class AshenLordWorldEndCloud: public Actor
{
public:
	float                                              SelfDestructDelayOnComplete                        // 0x3d0(0x4)
	byte                                               CloudState                                         // 0x3d4(0x1)
	Struct AshenLordWorldEndCloudAnimation             CurrentCloudAnimation                              // 0x3d8(0x8)
};


// Size 0xb0
class Geyser: public Actor
{
public:
	Class GeyserSetupDataAsset*                        SetupData                                          // 0x3d8(0x8)
	byte                                               GeyserState                                        // 0x3e0(0x1)
	Class WwiseObjectPoolWrapper*                      GeyserBuildUpPool                                  // 0x3e8(0x8)
	Class WwiseObjectPoolWrapper*                      GeyserBlowPool                                     // 0x3f0(0x8)
	Class WwiseEvent*                                  StartActiveAudioLoopEvent                          // 0x3f8(0x8)
	Class WwiseEvent*                                  StopActiveAudioLoopEvent                           // 0x400(0x8)
	Class WwiseEvent*                                  PlayEruptingAudioEvent                             // 0x408(0x8)
	Class ExplosionComponent*                          ExplosionComponent                                 // 0x410(0x8)
	Class ParticleSystemComponent*                     ActiveParticlesComponent                           // 0x418(0x8)
	Class ParticleSystemComponent*                     EruptingParticlesComponent                         // 0x420(0x8)
	byte                                               HitTestTraceChannel                                // 0x428(0x1)
	class                                              GeyserHoleClass                                    // 0x430(0x8)
	Class Hole*                                        GeyserHole                                         // 0x438(0x8)
};


// Size 0x18
class DisableGeyserMechanismAction: public Actor
{
public:
	Class MechanismActionComponent*                    MechanismActionComponent                           // 0x3d0(0x8)
	TArray<class GeysersToDisable*>                    GeysersToDisable                                   // 0x3d8(0x10)
};


// Size 0x2f8
class EarthquakeSetupDataAsset: public DataAsset
{
public:
	Struct WeightedProbabilityRangeOfRanges            WarmUpDuration                                     // 0x28(0x30)
	Struct WeightedProbabilityRangeOfRanges            EarthquakeDuration                                 // 0x58(0x30)
	Struct WeightedProbabilityRangeOfRanges            CoolDownDuration                                   // 0x88(0x30)
	Struct WeightedProbabilityRangeOfRanges            DormantDuration                                    // 0xb8(0x30)
	float                                              ChanceOfTriggeringAVolcano                         // 0xe8(0x4)
	Struct FloatRange                                  PercentageThroughEarthquakeToStartVolcano          // 0xec(0x10)
	Struct PlayerFeedback                              WarmupPlayerFeedback                               // 0x100(0x80)
	Struct PlayerFeedback                              ActivePlayerFeedback                               // 0x180(0x80)
	Struct WeightedProbabilityRangeOfRanges            StaggerStrengthDuration                            // 0x200(0x30)
	float                                              StaggerStrengthModifierWhenOnAShip                 // 0x230(0x4)
	Struct FloatRange                                  PercentageThroughCameraShakeToStartNextOne         // 0x234(0x10)
	Struct FloatRange                                  TimeToShipPush                                     // 0x244(0x10)
	Struct WeightedProbabilityRangeOfRanges            ForceToApplyToShip                                 // 0x258(0x30)
	float                                              MaximumShipSpeedToBePushed                         // 0x288(0x4)
	float                                              ChanceEarthquakeTriggersGeysers                    // 0x28c(0x4)
	Struct WeightedProbabilityRangeOfRanges            TimeBetweenLocalEffects                            // 0x290(0x30)
	Struct WeightedProbabilityRange                    NumberOfLocalEffectsToTrigger                      // 0x2c0(0x20)
	float                                              EffectConeAngle                                    // 0x2e0(0x4)
	float                                              EffectRaycastDistanceInMetres                      // 0x2e4(0x4)
	Struct DistanceThrottledRandomParticleSystemPicker EarthquakeEffects                                  // 0x2e8(0x10)
	float                                              WarmupWindTurbulence                               // 0x2f8(0x4)
	Struct FloatRange                                  WarmupGustPower                                    // 0x2fc(0x10)
	float                                              ActiveWindTurbulence                               // 0x30c(0x4)
	Struct FloatRange                                  ActiveGustPower                                    // 0x310(0x10)
};


// Size 0x1d0
class Earthquake: public Actor
{
public:
	Class EarthquakeSetupDataAsset*                    EarthquakeSetupData                                // 0x3e0(0x8)
	Class Volcano*                                     AssociatedVolcano                                  // 0x3e8(0x8)
	Class GeyserManager*                               AssociatedGeyserManager                            // 0x3f0(0x8)
	float                                              EarthquakeEffectInnerRadiusOffsetInMetres          // 0x3f8(0x4)
	Class WwiseObjectPoolWrapper*                      AudioPool                                          // 0x400(0x8)
	Class WwiseEvent*                                  PlayEarthquakeLarge                                // 0x408(0x8)
	Class WwiseEvent*                                  StopEarthquakeLarge                                // 0x410(0x8)
	Class WwiseEvent*                                  PlayEarthquakeSmall                                // 0x418(0x8)
	Class WwiseEvent*                                  StopEarthquakeSmall                                // 0x420(0x8)
	struct FName                                       EarthquakeRtpcName                                 // 0x428(0x8)
	float                                              EarthquakeRtpcMin                                  // 0x430(0x4)
	float                                              EarthquakeRtpcMax                                  // 0x434(0x4)
	float                                              EarthquakeSizeToUseLargeAttenuation                // 0x438(0x4)
	Class CapsuleComponent*                            HitDetectionVolume                                 // 0x440(0x8)
	Class WindZoneComponent*                           WindZone                                           // 0x448(0x8)
	byte                                               EarthquakeState                                    // 0x450(0x1)
};


// Size 0x10
class MechanismGeyser: public Geyser
{
public:
	byte                                               GeyserStateWhenMechanismIsInactive                 // 0x480(0x1)
	Class MechanismActionComponent*                    MechanismActionComponent                           // 0x488(0x8)
};


// Size 0x190
class GeyserManagerSetupDataAsset: public DataAsset
{
public:
	Struct WeightedProbabilityRangeOfRanges            DormantDuration                                    // 0x28(0x30)
	Struct WeightedProbabilityRangeOfRanges            ActiveDuration                                     // 0x58(0x30)
	Struct WeightedProbabilityRangeOfRanges            DelayBetweenGeyserGroupsDuringGeyserEvent          // 0x88(0x30)
	bool                                               StartInactive                                      // 0xb8(0x1)
	bool                                               NoRestartAfterGeyserSpurtComplete                  // 0xb9(0x1)
	bool                                               UseUniqueLocationsForEachGeyser                    // 0xba(0x1)
	float                                              MinDistanceFromPlayerInMetres                      // 0xbc(0x4)
	float                                              MinGeyserSequenceSpacing                           // 0xc0(0x4)
	class                                              GeyserToSpawn                                      // 0xc8(0x8)
	Struct WeightedProbabilityRange                    NumGeyserGroupsToSpawn                             // 0xd0(0x20)
	Struct WeightedProbabilityRange                    NumGeysersToSpawnPerGroup                          // 0xf0(0x20)
	Struct WeightedProbabilityRangeOfRanges            SpawnDistanceFromPlayerInMetres                    // 0x110(0x30)
	Struct WeightedProbabilityRangeOfRanges            SpawnRadiusInMetres                                // 0x140(0x30)
	TArray<Struct SpawnRadiusInMetres>                 SpawnAngleRelativeToPlayerDirection                // 0x170(0x10)
	Struct WeightedProbabilityRangeOfRanges            DelayBetweenEachGeyserSpawningInAGroup             // 0x180(0x30)
	float                                              MaximumDensityRadiusInMetres                       // 0x1b0(0x4)
	int                                                MaximumDensityMaxNumGeysersWithinRadius            // 0x1b4(0x4)
};


// Size 0x0
class NaturalDisasterRegistryInterface: public Interface
{
public:
};


// Size 0x60
class GeyserManager: public Actor
{
public:
	Class GeyserManagerSetupDataAsset*                 GeyserManagerSetupData                             // 0x3d0(0x8)
	Class SceneComponent*                              Root                                               // 0x3d8(0x8)
	byte                                               State                                              // 0x3e0(0x1)
};


// Size 0x20
class GeyserItemSpawnComponent: public ItemSpawnComponent
{
public:
};


// Size 0xb8
class GeyserSetupDataAsset: public DataAsset
{
public:
	Struct WeightedProbabilityRangeOfRanges            DormantDuration                                    // 0x28(0x30)
	Struct WeightedProbabilityRangeOfRanges            InitialWarningDuration                             // 0x58(0x30)
	Struct WeightedProbabilityRange                    NumSpurtsPerActivation                             // 0x88(0x20)
	Struct WeightedProbabilityRangeOfRanges            TimeBetweenSpurts                                  // 0xa8(0x30)
	bool                                               ShouldDestroyOnDeactivation                        // 0xd8(0x1)
	float                                              DestroyAfterDeactivationDelay                      // 0xdc(0x4)
};


// Size 0x0
class LavaStatus: public StatusBase
{
public:
};


// Size 0xa0
class LavaZone: public Actor
{
public:
	Struct WeightedProbabilityRangeOfRanges            TimeBetweenActivations                             // 0x3d0(0x30)
	Struct WeightedProbabilityRangeOfRanges            ActiveDuration                                     // 0x400(0x30)
	Class PhysicalMaterial*                            LavaMaterial                                       // 0x430(0x8)
	TArray<class ActorsInZone*>                        ActorsInZone                                       // 0x438(0x10)
	bool                                               Active                                             // 0x448(0x1)
	bool                                               InitializeFromGlobalState                          // 0x449(0x1)
	bool                                               SelfActivating                                     // 0x44a(0x1)
};


// Size 0x0
class VolcanoInterface: public Interface
{
public:
};


// Size 0x0
class VolcanoServiceInterface: public Interface
{
public:
};


// Size 0x68
class SeatStat_IslandVolcanoActive: public SeatStat
{
public:
	struct FName                                       VolcanoIslandName                                  // 0x48(0x8)
};


// Size 0xc0
class SuperheatedWaterSetupDataAsset: public DataAsset
{
public:
	float                                              TimeBetweenHealthReduction                         // 0x28(0x4)
	float                                              MinimumWaterDepthToCauseDamage                     // 0x2c(0x4)
	Struct WeightedProbabilityRangeOfRanges            TimeBetweenLargeSurfaceEffects                     // 0x30(0x30)
	float                                              LargeSurfaceEffectMinimumDistanceInMetres          // 0x60(0x4)
	Struct RandomParticleSystemPicker                  LargeSurfaceEffects                                // 0x68(0x10)
	float                                              EffectSpawnHeight                                  // 0x78(0x4)
	float                                              MurkStrengthToStartEffects                         // 0x7c(0x4)
	Struct WeightedProbabilityRangeOfRanges            TimeBetweenSmallSurfaceEffects                     // 0x80(0x30)
	Struct WeightedProbabilityRange                    NumSmallSurfaceEffects                             // 0xb0(0x20)
	Struct DistanceThrottledRandomParticleSystemPicker SmallSurfaceEffects                                // 0xd0(0x10)
	float                                              SmallSurfaceEffectNearbyPlayerRadiusInMetres       // 0xe0(0x4)
	float                                              SmallSurfaceEffectOffsetRadiusInMetres             // 0xe4(0x4)
};


// Size 0x108
class SuperheatedWater: public Murk
{
public:
	Class SuperheatedWaterSetupDataAsset*              SetupData                                          // 0x480(0x8)
	Class CapsuleComponent*                            HitDetectionVolume                                 // 0x488(0x8)
	float                                              FakeUnderwaterLocationsMinDistanceInMetres         // 0x490(0x4)
	float                                              FakeUnderwaterLocationsDistanceBetweenPointsInMetres // 0x494(0x4)
	TArray<Weakclass FakeUnderwaterLocationsDistanceBetweenPointsInMetres> PlayersInZone                                      // 0x498(0x10)
};


// Size 0x1f0
class Volcano: public Actor
{
public:
	Class CapsuleComponent*                            HitDetectionVolume                                 // 0x3e8(0x8)
	bool                                               UseDormantDuration                                 // 0x3f0(0x1)
	Class VolcanoSetupDataAsset*                       VolcanoSetupData                                   // 0x3f8(0x8)
	Class Murk*                                        AssociatedSuperheatedWater                         // 0x400(0x8)
	Class LavaZone*                                    AssociatedLavaZone                                 // 0x408(0x8)
	float                                              InnerTargetRadiusInMetres                          // 0x410(0x4)
	float                                              OuterTargetRadiusInMetres                          // 0x414(0x4)
	float                                              NearbyPlayerRangeToFireProjectilesInMetres         // 0x418(0x4)
	float                                              RandomShipPositionScale                            // 0x41c(0x4)
	Class ParticleSystemComponent*                     WarmingUpEmitter                                   // 0x420(0x8)
	Class ParticleSystemComponent*                     EruptingEmitter                                    // 0x428(0x8)
	Class BlendedLightingZoneComponent*                BlendedLightingZoneComponent                       // 0x430(0x8)
	Class BlendedAtmosphericPressureZoneComponent*     BlendedAtmosphericPressureZoneComponent            // 0x438(0x8)
	Class BlendedPostProcessingRainZoneComponent*      BlendedPostProcessingRainZoneComponent             // 0x440(0x8)
	Struct Vector                                      ProjectileLaunchOffset                             // 0x448(0xc)
	Class WwiseObjectPoolWrapper*                      AudioPool                                          // 0x458(0x8)
	Class WwiseEvent*                                  WarmupAudioPlayEvent                               // 0x460(0x8)
	Class WwiseEvent*                                  WarmupAudioStopEvent                               // 0x468(0x8)
	Class WwiseEvent*                                  EruptingAudioPlayEvent                             // 0x470(0x8)
	Class WwiseEvent*                                  EruptingAudioStopEvent                             // 0x478(0x8)
	Class CapsuleComponent*                            InstantKillZone                                    // 0x480(0x8)
	float                                              InstantKillZoneTestInterval                        // 0x488(0x4)
	Struct VolcanoStateData                            StateData                                          // 0x48c(0xc)
	struct FName                                       AssociatedIslandName                               // 0x498(0x8)
};


// Size 0x58
class VolcanoService: public Object
{
public:
};


}