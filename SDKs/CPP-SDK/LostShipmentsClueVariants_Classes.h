// Generated by DougTheDruid#2784 on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x8 (Full Size[0x30] - InheritedSize[0x28]
class AbandonedNoteClueDescriptor: public ClueDescriptor
{
public:
	Class ClueDestinationDescriptor*                             DestinationDescriptor;                             // 0x28(0x8)
};


// Size 0x0 (Full Size[0x40] - InheritedSize[0x40]
class AbandonedNoteClueDescriptorGenerator: public ClueDescriptorGenerator
{
public:
};


// Size 0xb8 (Full Size[0xe0] - InheritedSize[0x28]
class AbandonedNoteClueTextChoiceSource: public Object
{
public:
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class AbandonedNoteClueTextChoiceSourceConsumerInterface: public Interface
{
public:
};


// Size 0x18 (Full Size[0x40] - InheritedSize[0x28]
class AbandonedNoteClueTextAsset: public DataAsset
{
public:
	TArray<struct FText>                                         Descriptions;                                      // 0x28(0x10)
	class                                                        DestinationType;                                   // 0x38(0x8)
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class AbandonedNoteClueTextIndexAssetBase: public DataAsset
{
public:
};


// Size 0x10 (Full Size[0x38] - InheritedSize[0x28]
class AbandonedNoteClueTextIndexAssetMap: public DataAsset
{
public:
	TArray<struct TextIndexMappings>                             TextIndexMappings;                                 // 0x28(0x10)
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class AbandonedNoteClueTextSourceInterface: public Interface
{
public:
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class ClueTitleInterface: public Interface
{
public:
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class ClueDestinationContainerInterface: public Interface
{
public:
};


// Size 0x108 (Full Size[0x1d0] - InheritedSize[0xc8]
class AbandonedNoteClueDestinationContainerComponent: public ActorComponent
{
public:
	char                                                         pad0x20_DM810[0x20];                               // 0xc8(0x20)
	Class AbandonedNoteClueTextIndexAssetMap*                    ClueTextIndexAssetMap;                             // 0xe8(0x8)
	Struct FString                                               CompositeFormatString;                             // 0xf0(0x10)
	Struct ClueDestinationChoice                                 CurrentClueDestination;                            // 0x100(0x10)
	Struct FText                                                 CurrentTitleText;                                  // 0x110(0x38)
	Class AbandonedNoteClueTextChoiceSource*                     ClueTextChoiceSource;                              // 0x148(0x8)
	char                                                         pad0x90_HE9J6[0x90];                               // 0x14e(0x90)
};


// Size 0x10 (Full Size[0x50] - InheritedSize[0x40]
class NPCByNameClueDestinationDescriptor: public ClueDestinationDescriptor
{
public:
	Struct Guid                                                  NPCIdentifier;                                     // 0x40(0x10)
};


// Size 0x18 (Full Size[0x40] - InheritedSize[0x28]
class AbandonedNoteClueGenderSpecificTextAsset: public DataAsset
{
public:
	TArray<struct Descriptions>                                  Descriptions;                                      // 0x28(0x10)
	class                                                        DestinationType;                                   // 0x38(0x8)
};


// Size 0x10 (Full Size[0x38] - InheritedSize[0x28]
class AbandonedNoteClueGenderSpecificTextIndexAsset: public AbandonedNoteClueTextIndexAssetBase
{
public:
	TArray<class AbandonedNoteClueGenderSpecificTextAsset*>      ClueDestinationDescriptions;                       // 0x28(0x10)
};


// Size 0x10 (Full Size[0x38] - InheritedSize[0x28]
class AbandonedNoteClueTextIndexAsset: public AbandonedNoteClueTextIndexAssetBase
{
public:
	TArray<class AbandonedNoteClueTextAsset*>                    ClueDestinationDescriptions;                       // 0x28(0x10)
};


// Size 0xf0 (Full Size[0x1b8] - InheritedSize[0xc8]
class AbandonedNoteWieldableRenderingComponent: public ActorComponent
{
public:
	int                                                          CanvasWidth;                                       // 0xc8(0x4)
	int                                                          CanvasHeight;                                      // 0xcc(0x4)
	Class Font*                                                  BodyTextFont;                                      // 0xd0(0x8)
	Class Font*                                                  TitleTextFont;                                     // 0xd8(0x8)
	float                                                        FontLineSpacing;                                   // 0xe0(0x4)
	float                                                        FontScale;                                         // 0xe4(0x4)
	Struct TreasureMapWidgetText                                 BodyTextLayout;                                    // 0xe8(0x38)
	Struct TreasureMapWidgetText                                 TitleTextLayout;                                   // 0x120(0x38)
	TArray<struct ExtraTextFields>                               ExtraTextFields;                                   // 0x158(0x10)
	char                                                         pad0x70_AEJ2I[0x70];                               // 0x166(0x70)
};


// Size 0x40 (Full Size[0x7e0] - InheritedSize[0x7a0]
class AbandonedNoteWieldable: public SkeletalMeshWieldableItem
{
public:
	char                                                         pad0x10_AFAF0[0x10];                               // 0x7a0(0x10)
	Class WieldableItemCanvasRenderingComponent*                 WieldableItemCanvasRenderingComponent;             // 0x7b0(0x8)
	Class AbandonedNoteWieldableRenderingComponent*              AbandonedNoteRenderingComponent;                   // 0x7b8(0x8)
	Class InventoryItemComponent*                                InventoryItemComponent;                            // 0x7c0(0x8)
	Class UsableWieldableComponent*                              UsableWieldableComponent;                          // 0x7c8(0x8)
	byte                                                         QuestMapIcon;                                      // 0x7d0(0x1)
	char                                                         pad0x11_SJZWD[0x11];                               // 0x7cf(0x11)
};


// Size 0x0 (Full Size[0x90] - InheritedSize[0x90]
class BarrelsOfPlentyClueDestinationGenerator: public ClueDestinationGenerator
{
public:
};


// Size 0x38 (Full Size[0x70] - InheritedSize[0x38]
class BarrelsOfPlentyClueSiteData: public ClueSiteData
{
public:
	Struct Vector                                                SpawnLocation;                                     // 0x38(0xc)
	char                                                         pad0x44_L3SSX[0x44];                               // 0x42(0x44)
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class BarrelsOfPlentyClueSiteType: public ClueSiteType
{
public:
};


// Size 0x8 (Full Size[0x38] - InheritedSize[0x30]
class BarrelsOfPlentySeaClueCreator: public SeaClueCreator
{
public:
	int                                                          LootItemSpawnXYDistanceFromClueIncrementMin;       // 0x30(0x4)
	int                                                          LootItemSpawnXYDistanceFromClueIncrementMax;       // 0x34(0x4)
};


// Size 0x8 (Full Size[0x30] - InheritedSize[0x28]
class CircleMapClueDescriptor: public ClueDescriptor
{
public:
	Class ClueDestinationDescriptor*                             DestinationDescriptor;                             // 0x28(0x8)
};


// Size 0x0 (Full Size[0x40] - InheritedSize[0x40]
class CircleMapClueDescriptorGenerator: public ClueDescriptorGenerator
{
public:
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class CircleMapClueRenderDataSourceInterface: public Interface
{
public:
};


// Size 0x98 (Full Size[0x160] - InheritedSize[0xc8]
class CircleMapClueDestinationContainerComponent: public ActorComponent
{
public:
	char                                                         pad0x10_61ILY[0x10];                               // 0xc8(0x10)
	class                                                        MapMarkId;                                         // 0xd8(0x8)
	float                                                        MapMarkArea;                                       // 0xe0(0x4)
	float                                                        MapMarkScaleMin;                                   // 0xe4(0x4)
	float                                                        MapMarkScaleMax;                                   // 0xe8(0x4)
	float                                                        MapMarkNoiseModifier;                              // 0xec(0x4)
	byte                                                         MapMarkBlendMode;                                  // 0xf0(0x1)
	char                                                         pad0x7_X5J26[0x7];                                 // 0xf1(0x7)
	class                                                        DebugCrossId;                                      // 0xf8(0x8)
	bool                                                         ShowCluePositionOnMap;                             // 0x100(0x1)
	char                                                         pad0x7_DXECF[0x7];                                 // 0x101(0x7)
	TArray<struct ClueRenderData>                                ClueRenderData;                                    // 0x108(0x10)
	char                                                         pad0x68_TVNHN[0x68];                               // 0x116(0x68)
};


// Size 0x40 (Full Size[0x890] - InheritedSize[0x850]
class ClueSiteCircleMapWieldable: public RenderToTextureMapBase
{
public:
	char                                                         pad0x20_N9NSZ[0x20];                               // 0x850(0x20)
	Struct MapRadialIconData                                     MapRadialIconData;                                 // 0x870(0x18)
	char                                                         pad0x38_7OS1G[0x38];                               // 0x886(0x38)
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class ClueVariantsBlueprintFunctionLibrary: public BlueprintFunctionLibrary
{
public:
};


// Size 0x10 (Full Size[0x50] - InheritedSize[0x40]
class CompositeClueDestinationDescriptor: public ClueDestinationDescriptor
{
public:
	Class ClueDestinationDescriptor*                             PrimaryClueDestDescriptor;                         // 0x40(0x8)
	Class ClueDestinationDescriptor*                             SecondaryClueDestDescriptor;                       // 0x48(0x8)
};


// Size 0x0 (Full Size[0x40] - InheritedSize[0x40]
class EndOfGooseChaseClueDestinationDescriptor: public ClueDestinationDescriptor
{
public:
};


// Size 0x10 (Full Size[0x38] - InheritedSize[0x28]
class ExistingToPhasedNPCIndexAssetMap: public DataAsset
{
public:
	TArray<struct NPCIndexMappings>                              NPCIndexMappings;                                  // 0x28(0x10)
};


// Size 0x0 (Full Size[0x90] - InheritedSize[0x90]
class FloatingMessageInABottleClueDestinationGenerator: public ClueDestinationGenerator
{
public:
};


// Size 0x38 (Full Size[0x70] - InheritedSize[0x38]
class FloatingMessageInABottleClueSiteData: public ClueSiteData
{
public:
	Struct Vector                                                SpawnLocation;                                     // 0x38(0xc)
	char                                                         pad0x44_10EYN[0x44];                               // 0x42(0x44)
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class FloatingMessageInABottleClueSiteType: public ClueSiteType
{
public:
};


// Size 0x8 (Full Size[0x38] - InheritedSize[0x30]
class FloatingMessageInABottleSeaClueCreator: public SeaClueCreator
{
public:
	int                                                          LootItemSpawnXYDistanceFromClueIncrementMin;       // 0x30(0x4)
	int                                                          LootItemSpawnXYDistanceFromClueIncrementMax;       // 0x34(0x4)
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class GooseChaseClueBlueprintFunctionLibrary: public BlueprintFunctionLibrary
{
public:
};


// Size 0x8 (Full Size[0x48] - InheritedSize[0x40]
class IslandByCompassBearingClueDestinationDescriptor: public ClueDestinationDescriptor
{
public:
	byte                                                         CompassDirection;                                  // 0x40(0x1)
	char                                                         pad0x9_H96XV[0x9];                                 // 0x3f(0x9)
};


// Size 0x8 (Full Size[0x48] - InheritedSize[0x40]
class IslandByNameClueDestinationDescriptor: public ClueDestinationDescriptor
{
public:
	struct FName                                                 IslandIdentifier;                                  // 0x40(0x8)
};


// Size 0x8 (Full Size[0x48] - InheritedSize[0x40]
class IslandNameForNPCContextDestinationDescriptor: public ClueDestinationDescriptor
{
public:
	struct FName                                                 IslandIdentifier;                                  // 0x40(0x8)
};


// Size 0x18 (Full Size[0x58] - InheritedSize[0x40]
class LocationOnIslandClueDestinationDescriptor: public ClueDestinationDescriptor
{
public:
	struct FName                                                 IslandIdentifier;                                  // 0x40(0x8)
	Struct Vector                                                WorldPosition;                                     // 0x48(0xc)
	char                                                         pad0x1c_Z4AFH[0x1c];                               // 0x52(0x1c)
};


// Size 0x0 (Full Size[0x40] - InheritedSize[0x40]
class LostShipwreckClueDestinationDescriptor: public ClueDestinationDescriptor
{
public:
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class MerchantCaptainSpawnInterface: public Interface
{
public:
};


// Size 0x10 (Full Size[0x450] - InheritedSize[0x440]
class MerchantCaptainSpawnComponent: public ItemSpawnComponent
{
public:
};


// Size 0x18 (Full Size[0x48] - InheritedSize[0x30]
class NPCHintDialogueClueCreator: public LandClueCreator
{
public:
	Class ExistingToPhasedNPCIndexAssetMap*                      NPCMappingAsset;                                   // 0x30(0x8)
	int                                                          LootItemSpawnXYDistanceFromClueIncrementMin;       // 0x38(0x4)
	int                                                          LootItemSpawnXYDistanceFromClueIncrementMax;       // 0x3c(0x4)
	int                                                          LootItemSpawnZOffset;                              // 0x40(0x4)
	char                                                         pad0xc_96KID[0xc];                                 // 0x42(0xc)
};


// Size 0x0 (Full Size[0x90] - InheritedSize[0x90]
class NPCHintDialogueClueDestinationGenerator: public ClueDestinationGenerator
{
public:
};


// Size 0xe8 (Full Size[0x120] - InheritedSize[0x38]
class NPCHintDialogueClueSiteData: public ClueSiteData
{
public:
	Struct NPCData                                               NPCData;                                           // 0x38(0xb8)
	char                                                         pad0x1a0_0NCT1[0x1a0];                             // 0xee(0x1a0)
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class NPCHintDialogueClueSiteType: public ClueSiteType
{
public:
};


// Size 0x18 (Full Size[0x150] - InheritedSize[0x138]
class ObtainClueOnWieldComponent: public OnItemWieldedComponent
{
public:
	char                                                         pad0x8_8YQ1O[0x8];                                 // 0x138(0x8)
	Class ClueDescriptor*                                        ClueToObtain;                                      // 0x140(0x8)
	class                                                        ClueSiteType;                                      // 0x148(0x8)
};


// Size 0x70 (Full Size[0x1c0] - InheritedSize[0x150]
class ObtainClueFromContainerOnWieldComponent: public ObtainClueOnWieldComponent
{
public:
};


// Size 0x10 (Full Size[0x50] - InheritedSize[0x40]
class SeaLocationByGridSquareClueDestinationDescriptor: public ClueDestinationDescriptor
{
public:
	Struct Vector                                                SeaLocationIdentifier;                             // 0x40(0xc)
	char                                                         pad0x1c_8NHFX[0x1c];                               // 0x4a(0x1c)
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class ShipwreckClueBlueprintFunctionLibrary: public BlueprintFunctionLibrary
{
public:
};


// Size 0x0 (Full Size[0x40] - InheritedSize[0x40]
class ShipwreckClueDestinationDescriptor: public ClueDestinationDescriptor
{
public:
};


// Size 0x0 (Full Size[0x90] - InheritedSize[0x90]
class ShipwreckClueDestinationGenerator: public ClueDestinationGenerator
{
public:
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class ShipwreckClueSiteType: public ClueSiteType
{
public:
};


// Size 0x228 (Full Size[0x288] - InheritedSize[0x60]
class TaleQuestClueInventoryService: public TaleQuestService
{
public:
	char                                                         pad0x18_I83FI[0x18];                               // 0x60(0x18)
	TArray<class ClueDescriptor*>                                ObtainedClues;                                     // 0x78(0x10)
	char                                                         pad0x50_1LS96[0x50];                               // 0x88(0x50)
	Struct FText                                                 TitleText;                                         // 0x248(0x38)
	Class AbandonedNoteClueTextChoiceSource*                     ClueTextChoiceSource;                              // 0x280(0x8)
};


// Size 0x40 (Full Size[0x68] - InheritedSize[0x28]
class TaleQuestClueInventoryServiceDesc: public TaleQuestServiceDesc
{
public:
};


// Size 0x0 (Full Size[0x98] - InheritedSize[0x98]
class TaleQuestGetNPCActorFromClueSiteStep: public TaleQuestStep
{
public:
};


// Size 0x60 (Full Size[0xe0] - InheritedSize[0x80]
class TaleQuestGetNPCActorFromClueSiteStepDesc: public TaleQuestStepDesc
{
public:
	Struct QuestVariableClueSite                                 ClueSite;                                          // 0x80(0x30)
	Struct QuestVariableActor                                    NPCFromClueSite;                                   // 0xb0(0x30)
};


// Size 0x8 (Full Size[0xa0] - InheritedSize[0x98]
class TaleQuestGetPhasedVersionOfActorFromAssetMapStep: public TaleQuestStep
{
public:
	Class ExistingToPhasedNPCIndexAssetMap*                      NPCIndexAssetMap;                                  // 0x98(0x8)
};


// Size 0x98 (Full Size[0x118] - InheritedSize[0x80]
class TaleQuestGetPhasedVersionOfActorFromAssetMapStepDesc: public TaleQuestStepDesc
{
public:
	Struct QuestVariableActor                                    ExistingNPCActor;                                  // 0x80(0x30)
	Struct QuestVariableActorAssetType                           ObtainedPhasedNPCActorType;                        // 0xb0(0x30)
	Struct QuestVariableActor                                    PhasingSourceActor;                                // 0xe0(0x30)
	Class ExistingToPhasedNPCIndexAssetMap*                      IndexAssetMap;                                     // 0x110(0x8)
};


// Size 0x0 (Full Size[0x98] - InheritedSize[0x98]
class TaleQuestRetrieveSpawnedMerchantCaptainFromShipwreckStep: public TaleQuestStep
{
public:
};


// Size 0x60 (Full Size[0xe0] - InheritedSize[0x80]
class TaleQuestRetrieveSpawnedMerchantCaptainFromShipwreckStepDesc: public TaleQuestStepDesc
{
public:
	Struct QuestVariableShipwreck                                ShipwreckSpawnedOn;                                // 0x80(0x30)
	Struct QuestVariableActor                                    SpawnedMerchantCaptain;                            // 0xb0(0x30)
};


// Size 0x0 (Full Size[0x98] - InheritedSize[0x98]
class TaleQuestSpawnWashedUpMessageInABottleClueStep: public TaleQuestStep
{
public:
};


// Size 0x90 (Full Size[0x110] - InheritedSize[0x80]
class TaleQuestSpawnWashedUpMessageInABottleClueStepDesc: public TaleQuestStepDesc
{
public:
	Struct QuestVariableClueSite                                 ClueSite;                                          // 0x80(0x30)
	Struct QuestVariableClueDescriptor                           ClueDescriptor;                                    // 0xb0(0x30)
	Struct QuestVariableActor                                    MessageInABottle;                                  // 0xe0(0x30)
};


// Size 0x0 (Full Size[0x98] - InheritedSize[0x98]
class TaleQuestSpawnWashedUpSkeletonClueStep: public TaleQuestStep
{
public:
};


// Size 0xc8 (Full Size[0x148] - InheritedSize[0x80]
class TaleQuestSpawnWashedUpSkeletonClueStepDesc: public TaleQuestStepDesc
{
public:
	Struct QuestVariableClueSite                                 ClueSite;                                          // 0x80(0x30)
	Struct QuestVariableClueDescriptor                           ClueDescriptor;                                    // 0xb0(0x30)
	Struct QuestVariableActor                                    SkeletonActor;                                     // 0xe0(0x30)
	Struct QuestVariableItemInfo                                 ClueItem;                                          // 0x110(0x30)
	struct FName                                                 SkeletonClueSocketName;                            // 0x140(0x8)
};


// Size 0xa8 (Full Size[0x140] - InheritedSize[0x98]
class WaitForClueCollectedStep: public TaleQuestStep
{
public:
	Class ClueDescriptor*                                        ClueDesc;                                          // 0x98(0x8)
	Class Actor*                                                 ClueActor;                                         // 0xa0(0x8)
	char                                                         pad0xa8_X5MAE[0xa8];                               // 0xa6(0xa8)
};


// Size 0x90 (Full Size[0x110] - InheritedSize[0x80]
class WaitForClueCollectedStepDesc: public TaleQuestStepDesc
{
public:
	Struct QuestVariableClueDescriptor                           Clue;                                              // 0x80(0x30)
	Struct QuestVariableActor                                    ClueActor;                                         // 0xb0(0x30)
	Struct QuestVariableActor                                    Discoverer;                                        // 0xe0(0x30)
};


// Size 0x50 (Full Size[0x80] - InheritedSize[0x30]
class WashedUpMessageInABottleClueCreator: public LandClueCreator
{
public:
	char                                                         pad0x20_UDTDP[0x20];                               // 0x30(0x20)
	int                                                          LootItemSpawnXYDistanceFromClueIncrementMin;       // 0x50(0x4)
	int                                                          LootItemSpawnXYDistanceFromClueIncrementMax;       // 0x54(0x4)
	int                                                          LootItemSpawnZOffset;                              // 0x58(0x4)
	float                                                        LootItemSinkIntoSandZDistanceMin;                  // 0x5c(0x4)
	float                                                        LootItemSinkIntoSandZDistanceMax;                  // 0x60(0x4)
	float                                                        LootItemSinkIntoSandRotationMin;                   // 0x64(0x4)
	float                                                        LootItemSinkIntoSandRotationMax;                   // 0x68(0x4)
	char                                                         pad0x4_LY4W0[0x4];                                 // 0x6c(0x4)
	TArray<Assetclass SinkIntoSandItems>                         SinkIntoSandItems;                                 // 0x70(0x10)
};


// Size 0x0 (Full Size[0x90] - InheritedSize[0x90]
class WashedUpMessageInABottleClueDestinationGenerator: public ClueDestinationGenerator
{
public:
};


// Size 0xa8 (Full Size[0xe0] - InheritedSize[0x38]
class WashedUpMessageInABottleClueSiteData: public ClueSiteData
{
public:
	class                                                        BottleItemType;                                    // 0x38(0x8)
	struct FName                                                 IslandNameToSpawnOn;                               // 0x40(0x8)
	Struct Guid                                                  IslandSpawnLocationReservationId;                  // 0x48(0x10)
	char                                                         pad0x8_6D38S[0x8];                                 // 0x58(0x8)
	Struct Transform                                             SpawnTransform;                                    // 0x60(0x30)
	TArray<class Class*>                                         SinkIntoSandItems;                                 // 0x90(0x10)
	char                                                         pad0x60_X7J3F[0x60];                               // 0x9e(0x60)
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class WashedUpMessageInABottleClueSiteType: public ClueSiteType
{
public:
};


// Size 0x0 (Full Size[0x90] - InheritedSize[0x90]
class WashedUpSkeletonClueDestinationGenerator: public ClueDestinationGenerator
{
public:
};


// Size 0x88 (Full Size[0xc0] - InheritedSize[0x38]
class WashedUpSkeletonClueSiteData: public ClueSiteData
{
public:
	class                                                        SkeletonPoseType;                                  // 0x38(0x8)
	class                                                        ClueItemType;                                      // 0x40(0x8)
	struct FName                                                 IslandNameToSpawnOn;                               // 0x48(0x8)
	Struct Guid                                                  IslandSpawnLocationReservationId;                  // 0x50(0x10)
	Struct Transform                                             SpawnTransform;                                    // 0x60(0x30)
	char                                                         pad0x90_WO78B[0x90];                               // 0x8e(0x90)
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class WashedUpSkeletonClueSiteType: public ClueSiteType
{
public:
};


// Size 0x40 (Full Size[0x70] - InheritedSize[0x30]
class WashedUpSkeletonLandClueCreator: public LandClueCreator
{
public:
	TArray<Assetclass SkeletonPoses>                             SkeletonPoses;                                     // 0x30(0x10)
	int                                                          LootItemSpawnXYDistanceFromClueIncrementMin;       // 0x60(0x4)
	int                                                          LootItemSpawnXYDistanceFromClueIncrementMax;       // 0x64(0x4)
	int                                                          LootItemSpawnZOffset;                              // 0x68(0x4)
	char                                                         pad0xc_BHXOX[0xc];                                 // 0x6a(0xc)
};


// Size 0x10 (Full Size[0xd8] - InheritedSize[0xc8]
class InteractableGrammaticalGenderComponent: public ActorComponent
{
public:
	char                                                         pad0x8_2WSJ0[0x8];                                 // 0xc8(0x8)
	byte                                                         GrammaticalGender;                                 // 0xd0(0x1)
	char                                                         pad0x9_QNI59[0x9];                                 // 0xcf(0x9)
};


}