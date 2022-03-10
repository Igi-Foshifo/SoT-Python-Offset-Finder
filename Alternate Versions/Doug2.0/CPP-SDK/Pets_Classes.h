namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x0
class AIPetsOnDemandSpawner: public AISpawner
{
public:
};


// Size 0x0
class BTDecorator_IsForcingHangout: public BTDecorator_BaseConditional
{
public:
};


// Size 0x0
class BTDecorator_IsOccupiedHangoutSpotStillAvailable: public BTDecorator_BaseConditional
{
public:
};


// Size 0x10
class BTDecorator_IsOccupyingHangoutSpotWithGivenId: public BTDecorator_BaseConditional
{
public:
	TArray<Struct MatchingStates>                      SuccessIds                                         // 0x68(0x10)
};


// Size 0x0
class BTDecorator_IsPerchedInHangout: public BTDecorator_BaseConditional
{
public:
};


// Size 0x0
class BTDecorator_PetFoodSourceAvailable: public BTDecorator_BaseConditional
{
public:
};


// Size 0x10
class BTDecorator_PetRoamingAnimationStateActive: public BTDecorator_BaseConditional
{
public:
	TArray<Byte TaskDuration>                          MatchingStates                                     // 0x68(0x10)
};


// Size 0x8
class BTTask_AttachToHangout: public BTTask_BlackboardBase
{
public:
	float                                              TaskDuration                                       // 0x88(0x4)
};


// Size 0x0
class BTTask_ChangeHangoutAnimation: public BTTask_BlackboardBase
{
public:
};


// Size 0x8
class BTTask_DetachFromHangout: public BTTask_BlackboardBase
{
public:
	float                                              TaskDuration                                       // 0x88(0x4)
};


// Size 0x8
class BTTask_EatFood: public BTTaskNode
{
public:
	Class PetFeedingDataAsset*                         FeedingDataAsset                                   // 0x60(0x8)
};


// Size 0x0
class BTTask_GetTotalHangoutTime: public BTTask_BlackboardBase
{
public:
};


// Size 0x0
class BTTask_NotifyForcedHangoutComplete: public BTTask_BlackboardBase
{
public:
};


// Size 0x20
class BTTask_PetWaitForAnimationRoamingState: public BTTaskNode
{
public:
	TArray<Byte AfterReactAnimState>                   SuccessRoamingStates                               // 0x60(0x10)
	TArray<Byte SuccessRoamingStates>                  FailRoamingStates                                  // 0x70(0x10)
};


// Size 0x8
class BTTask_ReactToOwner: public BTTaskNode
{
public:
};


// Size 0x10
class BTTask_ReactToThreat: public BTTaskNode
{
public:
	byte                                               ReactAnimState                                     // 0x60(0x1)
	bool                                               ChangeAnimationAfterWaitTime                       // 0x61(0x1)
	float                                              ReactAnimTime                                      // 0x64(0x4)
	byte                                               AfterReactAnimState                                // 0x68(0x1)
};


// Size 0x8
class BTTask_RotatePetToFaceBBEntryWithTime: public BTTask_RotateToFaceBBEntry
{
public:
	float                                              Delay                                              // 0x90(0x4)
	float                                              RotationTime                                       // 0x94(0x4)
};


// Size 0x0
class BTTask_SelectFoodSource: public BTTask_BlackboardBase
{
public:
};


// Size 0x10
class BTTask_SelectPetHangoutSpot: public BTTask_BlackboardBase
{
public:
	bool                                               NeedForceId                                        // 0x88(0x1)
	Struct HangoutSpotId                               ForcedId                                           // 0x8c(0x8)
};


// Size 0x78
class BTTask_SelectWanderFlyStrategy: public BTTask_BlackboardBase
{
public:
	Struct AIDataProviderFloatValue                    WanderRange                                        // 0x88(0x30)
	Struct AIDataProviderFloatValue                    LowFlyRange                                        // 0xb8(0x30)
	class                                              WanderStrategy                                     // 0xe8(0x8)
	class                                              LowFlyStrategy                                     // 0xf0(0x8)
	class                                              HighFlyStrategy                                    // 0xf8(0x8)
};


// Size 0x0
class PetHangoutInterface: public Interface
{
public:
};


// Size 0x0
class PetMemoryInterface: public Interface
{
public:
};


// Size 0x0
class PetLifetimeInterface: public Interface
{
public:
};


// Size 0x0
class PlayerPetInterface: public Interface
{
public:
};


// Size 0x0
class PetReactInterface: public Interface
{
public:
};


// Size 0x8
class BTTask_SetDebugPetStateDescriptor: public BTTaskNode
{
public:
	byte                                               NewDescriptor                                      // 0x60(0x1)
};


// Size 0x0
class BTTask_StopOccupyingHangoutSpot: public BTTask_BlackboardBase
{
public:
};


// Size 0x18
class CannonSquashComponent: public ActorComponent
{
public:
};


// Size 0xd8
class PetDangerComponent: public ActorComponent
{
public:
	Class PetDangerDataAsset*                          DangerDataAsset                                    // 0xc8(0x8)
};


// Size 0x0
class EnvQueryContext_AverageThreatPositionFromBlackboard: public EnvQueryContext_PositionFromBlackboard
{
public:
};


// Size 0x0
class EnvQueryContext_CurrentHangoutSpot: public EnvQueryContext
{
public:
};


// Size 0x0
class EnvQueryContext_FirstThreatPositionFromBlackboard: public EnvQueryContext_PositionFromBlackboard
{
public:
};


// Size 0x0
class EnvQueryContext_PerceivedFoodSources: public EnvQueryContext
{
public:
};


// Size 0x0
class EnvQueryContext_SafePositionFromBlackboard: public EnvQueryContext_PositionFromBlackboard
{
public:
};


// Size 0x10
class PetDesc: public ItemDesc
{
public:
	Class PetSpawnParamsDataAsset*                     PetSpawnParams                                     // 0x130(0x8)
	class                                              PreviewPetClass                                    // 0x138(0x8)
};


// Size 0x10
class PetHangoutSpotsDataAsset: public DataAsset
{
public:
	TArray<Struct PetType_Cached>                      HangoutSpotParams                                  // 0x28(0x10)
};


// Size 0x1d0
class PetHangoutSpotSelectorComponent: public ActorComponent
{
public:
	Class PetHangoutSpotComponent*                     HangoutSpotPositionComponent                       // 0xc8(0x8)
	Class PetHangoutSpotsDataAsset*                    HangoutParamsDataAsset                             // 0xd0(0x8)
	class                                              PetType_Cached                                     // 0x148(0x8)
};


// Size 0x0
class HangoutSpotSelectionInterface: public Interface
{
public:
};


// Size 0x0
class PetIdleMovementInterface: public Interface
{
public:
};


// Size 0xe8
class PetAIController: public AthenaAIController
{
public:
	TArray<Struct DebugMenuName>                       StrategyControllerMovementMods                     // 0x918(0x10)
	float                                              DefaultControlRotationInterpSpeed                  // 0x928(0x4)
	class                                              DefaultStrategy                                    // 0x930(0x8)
	Class ReactStateMappingsDataAsset*                 ReactMappings                                      // 0x938(0x8)
	Class PetHangoutSpotSelectorComponent*             HangoutSpotSelectorComponent                       // 0x948(0x8)
	Class PetHangoutSpotComponent*                     ForcedHangoutSpotComponent                         // 0x950(0x8)
	Class BlackboardData*                              DefaultBlackboardAsset                             // 0x958(0x8)
	Class BehaviorTree*                                DefaultTree                                        // 0x960(0x8)
	Class BehaviorTree*                                HangoutTree                                        // 0x968(0x8)
	Class BehaviorTree*                                IdleTree                                           // 0x970(0x8)
	float                                              MaximumReactRange                                  // 0x978(0x4)
	Class PetDangerComponent*                          DangerComponent                                    // 0x980(0x8)
	float                                              MinAgentHalfHeightPctOverride                      // 0x988(0x4)
};


// Size 0x18
class PetCustomisationOverrideDataAsset: public DataAsset
{
public:
	class                                              AnimationOverrideId                                // 0x28(0x8)
	Struct FString                                     DebugMenuName                                      // 0x30(0x10)
};


// Size 0x10
class PetCustomisationOverrideMappingsDataAsset: public DataAsset
{
public:
	TArray<Struct ResponsePriorities>                  MappingEntries                                     // 0x28(0x10)
};


// Size 0x28
class PetDangerDataAsset: public DataAsset
{
public:
	TArray<Struct PetPreviewCamera>                    KnownHearingDangers                                // 0x28(0x10)
	float                                              MinChangeAverageThreatLocationToUpdate             // 0x38(0x4)
	float                                              FleeDistance                                       // 0x3c(0x4)
	TArray<Byte FleeDistance>                          ResponsePriorities                                 // 0x40(0x10)
};


// Size 0x38
class PetFeedingDataAsset: public DataAsset
{
public:
	Struct PetFeedingParams                            PetFeedingParams                                   // 0x28(0x38)
};


// Size 0xa0
class PetHangoutSpotComponent: public SceneComponent
{
public:
	TArray<Struct DropChannel>                         HangoutSpots                                       // 0x2d0(0x10)
	bool                                               HasLowerDeckFloodThreshold                         // 0x2e0(0x1)
	float                                              LowerDeckFloodThreshold                            // 0x2e4(0x4)
	bool                                               HasMiddleDeckFloodThreshold                        // 0x2e8(0x1)
	float                                              MiddleDeckFloodThreshold                           // 0x2ec(0x4)
	float                                              PerchInteractableHeightOffset                      // 0x2f0(0x4)
	bool                                               IsWorldHangout                                     // 0x2f4(0x1)
	TArray<class PetPerchComponents*>                  PetPerchComponents                                 // 0x318(0x10)
	bool                                               IsTopDeckBlocked                                   // 0x338(0x1)
	bool                                               IsOwnerSinking                                     // 0x339(0x1)
	Class PetHangoutSpotsDataAsset*                    PetHangoutSpotsDataAsset                           // 0x358(0x8)
};


// Size 0x60
class PetItemInfo: public NonStorableItemInfo
{
public:
	Struct PetCustomisation                            PetCustomisation                                   // 0x518(0x18)
	Class Actor*                                       PetOwner                                           // 0x530(0x8)
	Class Actor*                                       SpawnedForShip                                     // 0x538(0x8)
	float                                              DropTraceDistance                                  // 0x540(0x4)
	float                                              PointSearchRadius                                  // 0x544(0x4)
	byte                                               DropChannel                                        // 0x548(0x1)
};


// Size 0x10
class PetListingDataAsset: public DataAsset
{
public:
	TArray<Struct OnRep_DebugDisplayText>              Entries                                            // 0x28(0x10)
};


// Size 0x0
class PetMovementModifierSettingsInterface: public Interface
{
public:
};


// Size 0x0
class PetOwnerInterface: public Interface
{
public:
};


// Size 0x20
class PetOwnerComponent: public ActorComponent
{
public:
	Class ItemInfo*                                    PetInfo                                            // 0xe0(0x8)
};


// Size 0x0
class PetPartCustomisationInterface: public Interface
{
public:
};


// Size 0x48
class PetPerchComponent: public InteractableComponent
{
public:
	TArray<Class AIPartId>                             AllowedPetTypes                                    // 0x130(0x10)
	int                                                HangoutSpotIndex                                   // 0x140(0x4)
	struct FName                                       HangoutSpotName                                    // 0x144(0x8)
	Struct Vector                                      InteractionPointLocation                           // 0x14c(0xc)
	bool                                               Enabled                                            // 0x158(0x1)
	bool                                               BlocksPetEmoteReactions                            // 0x159(0x1)
	bool                                               IgnorePickupFromHangoutTooltipDisplayOffset        // 0x15a(0x1)
};


// Size 0x40
class PetSpawnParamsDataAsset: public DataAsset
{
public:
	class                                              PetClassID                                         // 0x28(0x8)
	Class BehaviorTree*                                TreeToRun                                          // 0x30(0x8)
	Class EnvQuery*                                    SpawnQueryForLand                                  // 0x58(0x8)
	Class EnvQuery*                                    SpawnQueryForShip                                  // 0x60(0x8)
};


// Size 0x0
class PetsServiceInterface: public Interface
{
public:
};


// Size 0x38
class PetsServiceParamsDataAsset: public DataAsset
{
public:
	Struct PetsServiceParams                           Params                                             // 0x28(0x38)
};


// Size 0x308
class PetsService: public Object
{
public:
	Class AIPetsOnDemandSpawner*                       Spawner                                            // 0x88(0x8)
	Struct PetsServiceParams                           PetsServiceParams                                  // 0xa8(0x38)
	TArray<class OwnersToRemove*>                      OwnersToRemove                                     // 0xe0(0x10)
	TArray<class OwnersToRequestDespawn*>              OwnersToRequestDespawn                             // 0xf0(0x10)
	TArray<class MovingPetsOnIslands*>                 MovingPetsOnIslands                                // 0x100(0x10)
	TArray<class MovingPetsOnShips*>                   MovingPetsOnShips                                  // 0x110(0x10)
	TArray<class ScratchArray*>                        ScratchArray                                       // 0x120(0x10)
	Class PetHangoutSpotsDataAsset*                    PetHangoutDataAsset                                // 0x2d8(0x8)
};


// Size 0x50
class PetsSettings: public Object
{
public:
	Struct StringAssetReference                        PetHangoutSpotsDataAsset                           // 0x28(0x10)
	Struct StringAssetReference                        PetListingDataAsset                                // 0x38(0x10)
	Struct StringAssetReference                        PetsServiceParamsDataAsset                         // 0x48(0x10)
	Struct StringAssetReference                        PetSpawnDefinitionsDataAsset                       // 0x58(0x10)
	TArray<Byte PetSpawnDefinitionsDataAsset>          ExcludedStatesForRoamingAssetGeneration            // 0x68(0x10)
};


// Size 0x0
class ReactAIStrategyId: public AIStrategyId
{
public:
};


// Size 0x10
class ReactStateMappingsDataAsset: public DataAsset
{
public:
	TArray<Struct OnRep_DropRequest>                   ReactMappings                                      // 0x28(0x10)
};


// Size 0x150
class WieldablePet: public SkeletalMeshWieldableItem
{
public:
	float                                              ThirdPersonScalingModifier                         // 0x7c0(0x4)
	Class WieldablePetComponent*                       WieldablePetComponent                              // 0x7c8(0x8)
	Class AIPartsRetrievalComponent*                   AIPartsRetrievalComponent                          // 0x7d0(0x8)
	Class PetPartCustomisationComponent*               PetPartCustomisationComponent                      // 0x7d8(0x8)
	Class AnimNotifyWwiseEmitterComponent*             AnimNotifyWwiseEmitterComponent                    // 0x7e0(0x8)
	Class WaterExposureComponent*                      WaterExposureComponent                             // 0x7e8(0x8)
	Class UsableWieldableComponent*                    UsableWieldableComponent                           // 0x7f0(0x8)
	Class PickupableComponent*                         PickupableComponent                                // 0x7f8(0x8)
	Class WieldableInteractableComponent*              WieldableInteractableComponent                     // 0x800(0x8)
	Class CleanlinessComponent*                        CleanlinessComponent                               // 0x808(0x8)
	Class LightWeightStatusEffectManagerComponent*     LightWeightStatusEffectManagerComponent            // 0x810(0x8)
	Class PetDitherComponent*                          PetDitherComponent                                 // 0x818(0x8)
	Class Actor*                                       PetOwner                                           // 0x820(0x8)
	Class FeedingComponent*                            FeedingComponent                                   // 0x828(0x8)
	Class PetSicknessComponent*                        SicknessComponent                                  // 0x830(0x8)
	Class WieldablePetHungerComponent*                 HungerComponent                                    // 0x838(0x8)
	Class StarvingComponent*                           StarvingComponent                                  // 0x840(0x8)
	Class PetTelemetryComponent*                       TelemetryComponent                                 // 0x848(0x8)
	Class AnimationDataStoreComponent*                 AnimationDataStoreComponent                        // 0x850(0x8)
	bool                                               SubmergedStrokingEnabled                           // 0x858(0x1)
	byte                                               HungerReactAnimationState                          // 0x8c8(0x1)
	byte                                               DropRequest                                        // 0x8c9(0x1)
};


// Size 0x10
class WieldablePetAnimNotifyWwiseEmitterComponent: public AnimNotifyWwiseEmitterComponent
{
public:
};


// Size 0x88
class WieldablePetComponent: public ActorComponent
{
public:
	Class WieldablePetComponentDataAsset*              WieldablePetComponentData                          // 0xc8(0x8)
};


// Size 0x48
class WieldablePetComponentDataAsset: public DataAsset
{
public:
	Struct FloatRange                                  FriendlyTimeUntilEscape                            // 0x28(0x10)
	Struct FloatRange                                  NormalTimeUntilEscape                              // 0x38(0x10)
	Struct FloatRange                                  SubmergedTimeUntilEscape                           // 0x48(0x10)
	float                                              DamageToOwnerDropThreshold                         // 0x58(0x4)
	TArray<Struct DamageToOwnerDropThreshold>          DropTimeouts                                       // 0x60(0x10)
};


// Size 0xb0
class WieldablePetHungerComponent: public ActorComponent
{
public:
	Class WieldablePetHungerDataAsset*                 HungerData                                         // 0xc8(0x8)
	TArray<Struct HungerData>                          CachedOverlappingActors                            // 0xf8(0x10)
	TArray<Struct CachedOverlappingActors>             ActiveFoodSources                                  // 0x108(0x10)
	TArray<Struct ActiveFoodSources>                   FoodSourcesToRemove                                // 0x118(0x10)
};


// Size 0x30
class WieldablePetHungerDataAsset: public DataAsset
{
public:
	float                                              TimeToStartEating                                  // 0x28(0x4)
	float                                              EdibleCheckRadius                                  // 0x2c(0x4)
	Struct WieldablePetHungerAnimationData             EatingAnimData                                     // 0x30(0x8)
	Struct WieldablePetHungerAnimationData             FedAnimData                                        // 0x38(0x8)
	Struct WieldablePetHungerAnimationData             SickAnimData                                       // 0x40(0x8)
	Struct WieldablePetHungerAnimationData             RefuseAnimData                                     // 0x48(0x8)
	byte                                               CollisionChannel                                   // 0x50(0x1)
};


}