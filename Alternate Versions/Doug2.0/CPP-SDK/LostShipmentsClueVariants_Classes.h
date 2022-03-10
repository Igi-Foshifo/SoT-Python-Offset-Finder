namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x8
class AbandonedNoteClueDescriptor: public ClueDescriptor
{
public:
	Class ClueDestinationDescriptor*                   DestinationDescriptor                              // 0x28(0x8)
};


// Size 0x0
class AbandonedNoteClueDescriptorGenerator: public ClueDescriptorGenerator
{
public:
};


// Size 0xb8
class AbandonedNoteClueTextChoiceSource: public Object
{
public:
};


// Size 0x0
class AbandonedNoteClueTextChoiceSourceConsumerInterface: public Interface
{
public:
};


// Size 0x18
class AbandonedNoteClueTextAsset: public DataAsset
{
public:
	TArray<Text None>                                  Descriptions                                       // 0x28(0x10)
	class                                              DestinationType                                    // 0x38(0x8)
};


// Size 0x0
class AbandonedNoteClueTextIndexAssetBase: public DataAsset
{
public:
};


// Size 0x10
class AbandonedNoteClueTextIndexAssetMap: public DataAsset
{
public:
	TArray<Struct OnRep_CurrentClueDestination>        TextIndexMappings                                  // 0x28(0x10)
};


// Size 0x0
class AbandonedNoteClueTextSourceInterface: public Interface
{
public:
};


// Size 0x0
class ClueTitleInterface: public Interface
{
public:
};


// Size 0x0
class ClueDestinationContainerInterface: public Interface
{
public:
};


// Size 0x108
class AbandonedNoteClueDestinationContainerComponent: public ActorComponent
{
public:
	Struct ClueDestinationChoice                       CurrentClueDestination                             // 0xe8(0x10)
	Class AbandonedNoteClueTextIndexAssetMap*          ClueTextIndexAssetMap                              // 0xf8(0x8)
	Struct FString                                     CompositeFormatString                              // 0x100(0x10)
	Struct FText                                       CurrentTitleText                                   // 0x110(0x38)
	Class AbandonedNoteClueTextChoiceSource*           ClueTextChoiceSource                               // 0x148(0x8)
};


// Size 0x10
class NPCByNameClueDestinationDescriptor: public ClueDestinationDescriptor
{
public:
	Struct Guid                                        NPCIdentifier                                      // 0x40(0x10)
};


// Size 0x18
class AbandonedNoteClueGenderSpecificTextAsset: public DataAsset
{
public:
	TArray<Struct ClueDestinationDescriptions>         Descriptions                                       // 0x28(0x10)
	class                                              DestinationType                                    // 0x38(0x8)
};


// Size 0x10
class AbandonedNoteClueGenderSpecificTextIndexAsset: public AbandonedNoteClueTextIndexAssetBase
{
public:
	TArray<class ClueDestinationDescriptions*>         ClueDestinationDescriptions                        // 0x28(0x10)
};


// Size 0x10
class AbandonedNoteClueTextIndexAsset: public AbandonedNoteClueTextIndexAssetBase
{
public:
	TArray<class ClueDestinationDescriptions*>         ClueDestinationDescriptions                        // 0x28(0x10)
};


// Size 0xf0
class AbandonedNoteWieldableRenderingComponent: public ActorComponent
{
public:
	int                                                CanvasWidth                                        // 0xc8(0x4)
	int                                                CanvasHeight                                       // 0xcc(0x4)
	Class Font*                                        BodyTextFont                                       // 0xd0(0x8)
	Class Font*                                        TitleTextFont                                      // 0xd8(0x8)
	float                                              FontLineSpacing                                    // 0xe0(0x4)
	float                                              FontScale                                          // 0xe4(0x4)
	Struct TreasureMapWidgetText                       BodyTextLayout                                     // 0xe8(0x38)
	Struct TreasureMapWidgetText                       TitleTextLayout                                    // 0x120(0x38)
	TArray<Struct TitleTextLayout>                     ExtraTextFields                                    // 0x158(0x10)
};


// Size 0x40
class AbandonedNoteWieldable: public SkeletalMeshWieldableItem
{
public:
	Class WieldableItemCanvasRenderingComponent*       WieldableItemCanvasRenderingComponent              // 0x7a0(0x8)
	Class AbandonedNoteWieldableRenderingComponent*    AbandonedNoteRenderingComponent                    // 0x7a8(0x8)
	Class InventoryItemComponent*                      InventoryItemComponent                             // 0x7b0(0x8)
	Class UsableWieldableComponent*                    UsableWieldableComponent                           // 0x7b8(0x8)
	byte                                               QuestMapIcon                                       // 0x7c0(0x1)
};


// Size 0x0
class BarrelsOfPlentyClueDestinationGenerator: public ClueDestinationGenerator
{
public:
};


// Size 0x38
class BarrelsOfPlentyClueSiteData: public ClueSiteData
{
public:
	Struct Vector                                      SpawnLocation                                      // 0x38(0xc)
};


// Size 0x0
class BarrelsOfPlentyClueSiteType: public ClueSiteType
{
public:
};


// Size 0x8
class BarrelsOfPlentySeaClueCreator: public SeaClueCreator
{
public:
	int                                                LootItemSpawnXYDistanceFromClueIncrementMin        // 0x30(0x4)
	int                                                LootItemSpawnXYDistanceFromClueIncrementMax        // 0x34(0x4)
};


// Size 0x8
class CircleMapClueDescriptor: public ClueDescriptor
{
public:
	Class ClueDestinationDescriptor*                   DestinationDescriptor                              // 0x28(0x8)
};


// Size 0x0
class CircleMapClueDescriptorGenerator: public ClueDescriptorGenerator
{
public:
};


// Size 0x0
class CircleMapClueRenderDataSourceInterface: public Interface
{
public:
};


// Size 0x98
class CircleMapClueDestinationContainerComponent: public ActorComponent
{
public:
	class                                              MapMarkId                                          // 0xd8(0x8)
	float                                              MapMarkArea                                        // 0xe0(0x4)
	float                                              MapMarkScaleMin                                    // 0xe4(0x4)
	float                                              MapMarkScaleMax                                    // 0xe8(0x4)
	float                                              MapMarkNoiseModifier                               // 0xec(0x4)
	byte                                               MapMarkBlendMode                                   // 0xf0(0x1)
	class                                              DebugCrossId                                       // 0xf8(0x8)
	bool                                               ShowCluePositionOnMap                              // 0x100(0x1)
	TArray<Struct ShowCluePositionOnMap>               ClueRenderData                                     // 0x108(0x10)
};


// Size 0x30
class ClueSiteCircleMapWieldable: public RenderToTextureMapBase
{
public:
	Struct MapRadialIconData                           MapRadialIconData                                  // 0x868(0x18)
};


// Size 0x0
class ClueVariantsBlueprintFunctionLibrary: public BlueprintFunctionLibrary
{
public:
};


// Size 0x10
class CompositeClueDestinationDescriptor: public ClueDestinationDescriptor
{
public:
	Class ClueDestinationDescriptor*                   PrimaryClueDestDescriptor                          // 0x40(0x8)
	Class ClueDestinationDescriptor*                   SecondaryClueDestDescriptor                        // 0x48(0x8)
};


// Size 0x0
class EndOfGooseChaseClueDestinationDescriptor: public ClueDestinationDescriptor
{
public:
};


// Size 0x10
class ExistingToPhasedNPCIndexAssetMap: public DataAsset
{
public:
	TArray<Struct SpawnLocation>                       NPCIndexMappings                                   // 0x28(0x10)
};


// Size 0x0
class FloatingMessageInABottleClueDestinationGenerator: public ClueDestinationGenerator
{
public:
};


// Size 0x38
class FloatingMessageInABottleClueSiteData: public ClueSiteData
{
public:
	Struct Vector                                      SpawnLocation                                      // 0x38(0xc)
};


// Size 0x0
class FloatingMessageInABottleClueSiteType: public ClueSiteType
{
public:
};


// Size 0x8
class FloatingMessageInABottleSeaClueCreator: public SeaClueCreator
{
public:
	int                                                LootItemSpawnXYDistanceFromClueIncrementMin        // 0x30(0x4)
	int                                                LootItemSpawnXYDistanceFromClueIncrementMax        // 0x34(0x4)
};


// Size 0x0
class GooseChaseClueBlueprintFunctionLibrary: public BlueprintFunctionLibrary
{
public:
};


// Size 0x8
class IslandByCompassBearingClueDestinationDescriptor: public ClueDestinationDescriptor
{
public:
	byte                                               CompassDirection                                   // 0x40(0x1)
};


// Size 0x8
class IslandByNameClueDestinationDescriptor: public ClueDestinationDescriptor
{
public:
	struct FName                                       IslandIdentifier                                   // 0x40(0x8)
};


// Size 0x8
class IslandNameForNPCContextDestinationDescriptor: public ClueDestinationDescriptor
{
public:
	struct FName                                       IslandIdentifier                                   // 0x40(0x8)
};


// Size 0x18
class LocationOnIslandClueDestinationDescriptor: public ClueDestinationDescriptor
{
public:
	struct FName                                       IslandIdentifier                                   // 0x40(0x8)
	Struct Vector                                      WorldPosition                                      // 0x48(0xc)
};


// Size 0x0
class LostShipwreckClueDestinationDescriptor: public ClueDestinationDescriptor
{
public:
};


// Size 0x0
class MerchantCaptainSpawnInterface: public Interface
{
public:
};


// Size 0x10
class MerchantCaptainSpawnComponent: public ItemSpawnComponent
{
public:
};


// Size 0x18
class NPCHintDialogueClueCreator: public LandClueCreator
{
public:
	Class ExistingToPhasedNPCIndexAssetMap*            NPCMappingAsset                                    // 0x30(0x8)
	int                                                LootItemSpawnXYDistanceFromClueIncrementMin        // 0x38(0x4)
	int                                                LootItemSpawnXYDistanceFromClueIncrementMax        // 0x3c(0x4)
	int                                                LootItemSpawnZOffset                               // 0x40(0x4)
};


// Size 0x0
class NPCHintDialogueClueDestinationGenerator: public ClueDestinationGenerator
{
public:
};


// Size 0xe8
class NPCHintDialogueClueSiteData: public ClueSiteData
{
public:
	Struct NPCData                                     NPCData                                            // 0x38(0xb8)
};


// Size 0x0
class NPCHintDialogueClueSiteType: public ClueSiteType
{
public:
};


// Size 0x18
class ObtainClueOnWieldComponent: public OnItemWieldedComponent
{
public:
	Class ClueDescriptor*                              ClueToObtain                                       // 0x140(0x8)
	class                                              ClueSiteType                                       // 0x148(0x8)
};


// Size 0x70
class ObtainClueFromContainerOnWieldComponent: public ObtainClueOnWieldComponent
{
public:
};


// Size 0x10
class SeaLocationByGridSquareClueDestinationDescriptor: public ClueDestinationDescriptor
{
public:
	Struct Vector                                      SeaLocationIdentifier                              // 0x40(0xc)
};


// Size 0x0
class ShipwreckClueBlueprintFunctionLibrary: public BlueprintFunctionLibrary
{
public:
};


// Size 0x0
class ShipwreckClueDestinationDescriptor: public ClueDestinationDescriptor
{
public:
};


// Size 0x0
class ShipwreckClueDestinationGenerator: public ClueDestinationGenerator
{
public:
};


// Size 0x0
class ShipwreckClueSiteType: public ClueSiteType
{
public:
};


// Size 0x228
class TaleQuestClueInventoryService: public TaleQuestService
{
public:
	TArray<class ObtainedClues*>                       ObtainedClues                                      // 0x78(0x10)
	Struct FText                                       TitleText                                          // 0x248(0x38)
	Class AbandonedNoteClueTextChoiceSource*           ClueTextChoiceSource                               // 0x280(0x8)
};


// Size 0x40
class TaleQuestClueInventoryServiceDesc: public TaleQuestServiceDesc
{
public:
};


// Size 0x0
class TaleQuestGetNPCActorFromClueSiteStep: public TaleQuestStep
{
public:
};


// Size 0x40
class TaleQuestGetNPCActorFromClueSiteStepDesc: public TaleQuestStepDesc
{
public:
	Struct QuestVariableClueSite                       ClueSite                                           // 0x80(0x20)
	Struct QuestVariableActor                          NPCFromClueSite                                    // 0xa0(0x20)
};


// Size 0x8
class TaleQuestGetPhasedVersionOfActorFromAssetMapStep: public TaleQuestStep
{
public:
	Class ExistingToPhasedNPCIndexAssetMap*            NPCIndexAssetMap                                   // 0x90(0x8)
};


// Size 0x68
class TaleQuestGetPhasedVersionOfActorFromAssetMapStepDesc: public TaleQuestStepDesc
{
public:
	Struct QuestVariableActor                          ExistingNPCActor                                   // 0x80(0x20)
	Struct QuestVariableActorAssetType                 ObtainedPhasedNPCActorType                         // 0xa0(0x20)
	Struct QuestVariableActor                          PhasingSourceActor                                 // 0xc0(0x20)
	Class ExistingToPhasedNPCIndexAssetMap*            IndexAssetMap                                      // 0xe0(0x8)
};


// Size 0x0
class TaleQuestRetrieveSpawnedMerchantCaptainFromShipwreckStep: public TaleQuestStep
{
public:
};


// Size 0x40
class TaleQuestRetrieveSpawnedMerchantCaptainFromShipwreckStepDesc: public TaleQuestStepDesc
{
public:
	Struct QuestVariableShipwreck                      ShipwreckSpawnedOn                                 // 0x80(0x20)
	Struct QuestVariableActor                          SpawnedMerchantCaptain                             // 0xa0(0x20)
};


// Size 0x0
class TaleQuestSpawnWashedUpMessageInABottleClueStep: public TaleQuestStep
{
public:
};


// Size 0x60
class TaleQuestSpawnWashedUpMessageInABottleClueStepDesc: public TaleQuestStepDesc
{
public:
	Struct QuestVariableClueSite                       ClueSite                                           // 0x80(0x20)
	Struct QuestVariableClueDescriptor                 ClueDescriptor                                     // 0xa0(0x20)
	Struct QuestVariableActor                          MessageInABottle                                   // 0xc0(0x20)
};


// Size 0x0
class TaleQuestSpawnWashedUpSkeletonClueStep: public TaleQuestStep
{
public:
};


// Size 0x88
class TaleQuestSpawnWashedUpSkeletonClueStepDesc: public TaleQuestStepDesc
{
public:
	Struct QuestVariableClueSite                       ClueSite                                           // 0x80(0x20)
	Struct QuestVariableClueDescriptor                 ClueDescriptor                                     // 0xa0(0x20)
	Struct QuestVariableActor                          SkeletonActor                                      // 0xc0(0x20)
	Struct QuestVariableItemInfo                       ClueItem                                           // 0xe0(0x20)
	struct FName                                       SkeletonClueSocketName                             // 0x100(0x8)
};


// Size 0x78
class WaitForClueCollectedStep: public TaleQuestStep
{
public:
	Class ClueDescriptor*                              ClueDesc                                           // 0x90(0x8)
	Class Actor*                                       ClueActor                                          // 0x98(0x8)
};


// Size 0x60
class WaitForClueCollectedStepDesc: public TaleQuestStepDesc
{
public:
	Struct QuestVariableClueDescriptor                 Clue                                               // 0x80(0x20)
	Struct QuestVariableActor                          ClueActor                                          // 0xa0(0x20)
	Struct QuestVariableActor                          Discoverer                                         // 0xc0(0x20)
};


// Size 0x50
class WashedUpMessageInABottleClueCreator: public LandClueCreator
{
public:
	int                                                LootItemSpawnXYDistanceFromClueIncrementMin        // 0x50(0x4)
	int                                                LootItemSpawnXYDistanceFromClueIncrementMax        // 0x54(0x4)
	int                                                LootItemSpawnZOffset                               // 0x58(0x4)
	float                                              LootItemSinkIntoSandZDistanceMin                   // 0x5c(0x4)
	float                                              LootItemSinkIntoSandZDistanceMax                   // 0x60(0x4)
	float                                              LootItemSinkIntoSandRotationMin                    // 0x64(0x4)
	float                                              LootItemSinkIntoSandRotationMax                    // 0x68(0x4)
	TArray<AssetClass LootItemSinkIntoSandRotationMax> SinkIntoSandItems                                  // 0x70(0x10)
};


// Size 0x0
class WashedUpMessageInABottleClueDestinationGenerator: public ClueDestinationGenerator
{
public:
};


// Size 0xa8
class WashedUpMessageInABottleClueSiteData: public ClueSiteData
{
public:
	class                                              BottleItemType                                     // 0x38(0x8)
	struct FName                                       IslandNameToSpawnOn                                // 0x40(0x8)
	Struct Guid                                        IslandSpawnLocationReservationId                   // 0x48(0x10)
	Struct Transform                                   SpawnTransform                                     // 0x60(0x30)
	TArray<Class SpawnTransform>                       SinkIntoSandItems                                  // 0x90(0x10)
};


// Size 0x0
class WashedUpMessageInABottleClueSiteType: public ClueSiteType
{
public:
};


// Size 0x0
class WashedUpSkeletonClueDestinationGenerator: public ClueDestinationGenerator
{
public:
};


// Size 0x88
class WashedUpSkeletonClueSiteData: public ClueSiteData
{
public:
	class                                              SkeletonPoseType                                   // 0x38(0x8)
	class                                              ClueItemType                                       // 0x40(0x8)
	struct FName                                       IslandNameToSpawnOn                                // 0x48(0x8)
	Struct Guid                                        IslandSpawnLocationReservationId                   // 0x50(0x10)
	Struct Transform                                   SpawnTransform                                     // 0x60(0x30)
};


// Size 0x0
class WashedUpSkeletonClueSiteType: public ClueSiteType
{
public:
};


// Size 0x40
class WashedUpSkeletonLandClueCreator: public LandClueCreator
{
public:
	TArray<AssetClass SettingsInterface>               SkeletonPoses                                      // 0x30(0x10)
	int                                                LootItemSpawnXYDistanceFromClueIncrementMin        // 0x60(0x4)
	int                                                LootItemSpawnXYDistanceFromClueIncrementMax        // 0x64(0x4)
	int                                                LootItemSpawnZOffset                               // 0x68(0x4)
};


// Size 0x10
class InteractableGrammaticalGenderComponent: public ActorComponent
{
public:
	byte                                               GrammaticalGender                                  // 0xd0(0x1)
};


}