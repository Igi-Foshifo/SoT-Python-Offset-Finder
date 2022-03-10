namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x0
class ControllableOarsInterface: public Interface
{
public:
};


// Size 0x100
class FakeShip: public Actor
{
public:
	TArray<class AttachedItems*>                       AttachedItems                                      // 0x3d8(0x10)
};


// Size 0x0
class WatercraftTrackerInterface: public Interface
{
public:
};


// Size 0x88
class ItemProxyWatercraftTrackerComponent: public ActorComponent
{
public:
	Class ItemProxyWatercraftTrackerComponentDataAsset* WatercraftTrackingData                             // 0xd0(0x8)
	Class Actor*                                       CurrentWatercraft                                  // 0xd8(0x8)
};


// Size 0x10
class ItemProxyWatercraftTrackerComponentDataAsset: public DataAsset
{
public:
	TArray<Class ParentRowboat>                        WatercraftTypes                                    // 0x28(0x10)
};


// Size 0x1b0
class RowboatAudioComponent: public SceneComponent
{
public:
	Class RowboatAudioComponentParams*                 Params                                             // 0x2d0(0x8)
	Class Rowboat*                                     ParentRowboat                                      // 0x2d8(0x8)
};


// Size 0xc0
class RowboatAudioComponentParams: public DataAsset
{
public:
	Class WwiseObjectPoolWrapper*                      RowboatObjectPool                                  // 0x28(0x8)
	Class WwiseEvent*                                  RowboatWakeStart                                   // 0x30(0x8)
	Class WwiseEvent*                                  RowboatWakeStop                                    // 0x38(0x8)
	struct FName                                       RowboatSpeedRtpcName                               // 0x40(0x8)
	float                                              RowboatMaxSpeedRtpc                                // 0x48(0x4)
	Class WwiseEvent*                                  RowboatLaunch                                      // 0x50(0x8)
	Class WwiseEvent*                                  RowboatImpactAndScrapeStart                        // 0x58(0x8)
	Class WwiseEvent*                                  RowboatImpactAndScrapeStop                         // 0x60(0x8)
	Class WwiseEvent*                                  RowboatStrainStart                                 // 0x68(0x8)
	Class WwiseEvent*                                  RowboatStrainStop                                  // 0x70(0x8)
	struct FName                                       RowboatStrainRtpcName                              // 0x78(0x8)
	float                                              RowboatMaxStrainRtpc                               // 0x80(0x4)
	Class WwiseEvent*                                  RowboatTakenDamage                                 // 0x88(0x8)
	float                                              DamageAmountRequiredForNoiseToPlay                 // 0x90(0x4)
	Class WwiseEvent*                                  RowboatAttach                                      // 0x98(0x8)
	Class WwiseEvent*                                  RowboatDetach                                      // 0xa0(0x8)
	Class WwiseObjectPoolWrapper*                      WwiseOarEmitterPool                                // 0xa8(0x8)
	Class WwiseEvent*                                  PlayOarInOarLayer                                  // 0xb0(0x8)
	Class WwiseEvent*                                  PlayOarInWaterLayer                                // 0xb8(0x8)
	Class WwiseEvent*                                  PlayOarOutOarLayer                                 // 0xc0(0x8)
	Class WwiseEvent*                                  PlayOarOutWaterLayer                               // 0xc8(0x8)
	Class WwiseEvent*                                  PlayOarBrakingLoop                                 // 0xd0(0x8)
	Class WwiseEvent*                                  StopOarBrakingLoop                                 // 0xd8(0x8)
	Class WwiseEvent*                                  PlayOarPullFinished                                // 0xe0(0x8)
};


// Size 0x20
class RowboatDescDataAsset: public DataAsset
{
public:
	Struct PartDesc                                    PartDesc                                           // 0x28(0x20)
};


// Size 0x0
class RowboatOarsLeftForwardNotificationInputId: public NotificationInputId
{
public:
};


// Size 0x0
class RowboatOarsLeftForwardDeactivatedNotificationInputId: public NotificationInputId
{
public:
};


// Size 0x0
class RowboatOarsRightForwardNotificationInputId: public NotificationInputId
{
public:
};


// Size 0x0
class RowboatOarsRightForwardDeactivatedNotificationInputId: public NotificationInputId
{
public:
};


// Size 0x0
class RowboatOarsLeftBrakingActivatedNotificationInputId: public NotificationInputId
{
public:
};


// Size 0x0
class RowboatOarsLeftBrakingDeactivatedNotificationInputId: public NotificationInputId
{
public:
};


// Size 0x0
class RowboatOarsRightBrakingActivatedNotificationInputId: public NotificationInputId
{
public:
};


// Size 0x0
class RowboatOarsRightBrakingDeactivatedNotificationInputId: public NotificationInputId
{
public:
};


// Size 0x10
class ScrapeableDamageDataAsset: public DataAsset
{
public:
	TArray<Struct ScrapeDamagerType>                   DamageSpeedParams                                  // 0x28(0x10)
};


// Size 0x0
class ScrapeableInterface: public Interface
{
public:
};


// Size 0x30
class ScrapeableComponent: public ActorComponent
{
public:
	float                                              MinIntervalBetweenScrapeDamage                     // 0xd0(0x4)
	Class ScrapeableDamageDataAsset*                   ScrapeDamageSettings                               // 0xd8(0x8)
	Struct Vector                                      SafeZoneCenterDirection                            // 0xe0(0xc)
	float                                              SafeZoneMaximumAngle                               // 0xec(0x4)
	class                                              ScrapeDamagerType                                  // 0xf0(0x8)
};


// Size 0x348
class Watercraft: public Actor
{
public:
	Class BuoyancyComponent*                           BuoyancyComponent                                  // 0x3f8(0x8)
	Struct WatercraftRolloverCorrector                 RolloverCorrector                                  // 0x400(0xc)
	Class ShipNosediveBrake*                           NosediveBrake                                      // 0x410(0x8)
	Class BowSplashContainer*                          BowSplashContainer                                 // 0x418(0x8)
	Class StaticMeshComponent*                         CollisionMesh                                      // 0x420(0x8)
	Class StaticMeshComponent*                         CraftMesh                                          // 0x428(0x8)
	Class BoxComponent*                                OverlapHits                                        // 0x430(0x8)
	Class StaticMeshComponent*                         WaterOcclusionVolume                               // 0x438(0x8)
	Class WaterInteractionComponent*                   WaterInteractionComponent                          // 0x440(0x8)
	struct FName                                       ClientConvexHullCollisionProfile                   // 0x448(0x8)
	Struct NetTimeStampCalculator                      MovementTimeStamp                                  // 0x450(0x70)
	Struct RigidBodyErrorCorrection                    PhysicsErrorCorrection                             // 0x4c0(0x1c)
	Struct BuoyancySampleMovement                      BuoyancySampleMovement                             // 0x510(0x68)
	Class CurveFloat*                                  SpeedToChoppinessScalarCurve                       // 0x578(0x8)
	float                                              DeepWaterSubmersionThreshold                       // 0x580(0x4)
	float                                              BuoyancyChoppinessWhileSinking                     // 0x584(0x4)
	bool                                               RigidBodyAwake                                     // 0x588(0x1)
	bool                                               InContactWithLand                                  // 0x589(0x1)
	bool                                               InDeepWater                                        // 0x58a(0x1)
};


// Size 0x2f0
class Rowboat: public Watercraft
{
public:
	Class ChildActorComponent*                         LeftSideClamberSpot                                // 0x758(0x8)
	Class ChildActorComponent*                         RightSideClamberSpot                               // 0x760(0x8)
	Class ChildActorComponent*                         ForceSpot                                          // 0x768(0x8)
	Class ChildActorComponent*                         Lantern                                            // 0x770(0x8)
	Class ChildActorComponent*                         RowingSeat                                         // 0x778(0x8)
	Class ChildActorComponent*                         StorageSeat                                        // 0x780(0x8)
	Class ShipLiveryComponent*                         LiveryComponent                                    // 0x788(0x8)
	Class ReplicatedShipPartCustomizationComponent*    CustomizationComponent                             // 0x790(0x8)
	Struct Vector                                      WaterExclusionOffset                               // 0x798(0xc)
	Class TetherCustomisationComponent*                TetherCustomisationComponent                       // 0x7a8(0x8)
	Class HealthComponent*                             HealthComponent                                    // 0x7b0(0x8)
	Class ActorDamageableComponent*                    ActorDamageableComponent                           // 0x7b8(0x8)
	Class RammableComponent*                           RammableComponent                                  // 0x7c0(0x8)
	Class ScrapeableComponent*                         ScrapeableComponent                                // 0x7c8(0x8)
	Class RowboatAudioComponent*                       RowboatAudio                                       // 0x7d0(0x8)
	Class BaseHullDragDynamicsDesc*                    HullDragDynamicsDesc                               // 0x7d8(0x8)
	Class BowSplashContainer*                          OarSplashContainer                                 // 0x7e0(0x8)
	Class MountableComponent*                          MountableComponent                                 // 0x7e8(0x8)
	Class CurveFloat*                                  LinearDampingOverTimeWhileBeachedScalarCurve       // 0x7f0(0x8)
	Class CurveFloat*                                  AngularDampingOverTimeWhileBeachedScalarCurve      // 0x7f8(0x8)
	Struct RowboatDamageEffectData                     DamageEffectData                                   // 0x800(0x18)
	Struct RowboatStrainDamageData                     StrainDamageData                                   // 0x818(0x20)
	TArray<class AlwaysEnabledInteractables*>          AlwaysEnabledInteractables                         // 0x838(0x10)
	Class ShroudBreakerTrackerComponent*               ShroudBreakerTrackerComponent                      // 0x848(0x8)
	bool                                               IsBeingLaunched                                    // 0x850(0x1)
	bool                                               IsSinking                                          // 0x851(0x1)
	float                                              MaxPushingAngle                                    // 0x854(0x4)
	float                                              CurrentStrainAmount                                // 0x858(0x4)
	bool                                               IsDocked                                           // 0x85c(0x1)
	byte                                               CoverCollisionChannel                              // 0x85e(0x1)
	float                                              UnderCoverCheckInterval                            // 0x860(0x4)
	float                                              UnderCoverHeight                                   // 0x864(0x4)
	TArray<Struct UnderCoverHeight>                    RelativeUnderCoverProbeRoots                       // 0x868(0x10)
	byte                                               TrackedActorType                                   // 0x878(0x1)
};


// Size 0x0
class RowboatPartInterface: public Interface
{
public:
};


// Size 0x10
class RowboatSpawnParamsDataAsset: public DataAsset
{
public:
	TArray<Class TargetOars>                           RowboatTypes                                       // 0x28(0x10)
};


// Size 0x0
class RowingActionStateId: public ActionStateId
{
public:
};


// Size 0x8
class RowingInputComponent: public LookAtOffsetInputComponent
{
public:
	Class RowingSeat*                                  TargetOars                                         // 0x280(0x8)
};


// Size 0x30
class StorageSeat: public Seat
{
public:
	class                                              StorageInteractionInput                            // 0x678(0x8)
	Class StorageContainerComponent*                   StorageContainerComponent                          // 0x680(0x8)
};


// Size 0x0
class TaleQuestSinkWatercraftStep: public TaleQuestStep
{
public:
};


// Size 0x28
class TaleQuestWatercraftService: public TaleQuestService
{
public:
};


// Size 0x0
class TaleQuestWatercraftServiceDesc: public TaleQuestServiceDesc
{
public:
};


// Size 0x20
class TaleQuestSinkWatercraftStepDesc: public TaleQuestStepDesc
{
public:
	Struct QuestVariableWatercraft                     Watercraft                                         // 0x80(0x20)
};


// Size 0x0
class TaleQuestSpawnWatercraftStep: public TaleQuestStep
{
public:
};


// Size 0x68
class TaleQuestSpawnWatercraftStepDesc: public TaleQuestStepDesc
{
public:
	Struct QuestVariableTransform                      SpawnLocation                                      // 0x80(0x28)
	Struct QuestVariableWatercraft                     Watercraft                                         // 0xc8(0x20)
};


// Size 0x0
class WatercraftBlueprintFunctionLibrary: public BlueprintFunctionLibrary
{
public:
};


// Size 0x0
class WatercraftServiceInterface: public Interface
{
public:
};


// Size 0x8
class WatercraftService: public Actor
{
public:
};


// Size 0x28
class WatercraftSpawnData: public ItemSpawnData
{
public:
	float                                              MinDistanceToNearestWatercraftInMetres             // 0x78(0x4)
};


// Size 0x18
class WatercraftTrackerComponent: public ActorComponent
{
public:
	TArray<class CurrentWatercrafts*>                  CurrentWatercrafts                                 // 0xd0(0x10)
};


}