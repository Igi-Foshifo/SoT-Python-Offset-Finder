namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x10
class ClueSiteData: public Object
{
public:
	byte                                               DebrisTrackingType                                 // 0x28(0x1)
};


// Size 0x0
class ClueSiteType: public Object
{
public:
};


// Size 0x8
class LandClueCreator: public Object
{
public:
};


// Size 0x8
class SeaClueCreator: public Object
{
public:
};


// Size 0x0
class ClueChoiceSelectionStrategy: public Object
{
public:
};


// Size 0x8
class FixedClueChoiceSelectionStrategy: public ClueChoiceSelectionStrategy
{
public:
	int                                                IndexToSelect                                      // 0x28(0x4)
};


// Size 0x0
class RandomClueChoiceSelectionStrategy: public ClueChoiceSelectionStrategy
{
public:
};


// Size 0x18
class ClueDestinationDescriptor: public Object
{
public:
};


// Size 0x0
class ClueDescriptor: public Object
{
public:
};


// Size 0x0
class ClueConnectionBlueprintFunctionLibrary: public BlueprintFunctionLibrary
{
public:
};


// Size 0x18
class ClueDescriptorGenerator: public Object
{
public:
	class                                              DescriptorType                                     // 0x28(0x8)
	TArray<Class DescriptorType>                       SupportedDestinationTypes                          // 0x30(0x10)
};


// Size 0x68
class ClueDestinationGenerator: public Object
{
public:
	class                                              RequiredClueSiteDataType                           // 0x28(0x8)
	TArray<Struct RequiredClueSiteDataType>            WeightedSupportedDescriptorTypes                   // 0x30(0x10)
};


// Size 0x30
class ClueConnectionConfig: public DataAsset
{
public:
	TArray<Struct HasClueBeenGiven>                    CluesThatCanDescribeSites                          // 0x28(0x10)
	TArray<class ClueGenerators*>                      ClueGenerators                                     // 0x38(0x10)
	TArray<class DestinationGenerators*>               DestinationGenerators                              // 0x48(0x10)
};


// Size 0x0
class ClueDescriptorContainerInterface: public Interface
{
public:
};


// Size 0x18
class ClueDescriptorContainerComponent: public ActorComponent
{
public:
	Class ClueDescriptor*                              CurrentClue                                        // 0xd0(0x8)
	bool                                               HasClueBeenGiven                                   // 0xd8(0x1)
};


// Size 0x38
class ClueFactoryConfig: public DataAsset
{
public:
	TArray<class LandClueCreators*>                    LandClueCreators                                   // 0x28(0x10)
	TArray<class SeaClueCreators*>                     SeaClueCreators                                    // 0x38(0x10)
	Class ClueChoiceSelectionStrategy*                 ChoiceStrategy                                     // 0x48(0x8)
	TArray<Struct ChoiceStrategy>                      RestrictedClueTypes                                // 0x50(0x10)
};


// Size 0x8
class ClueFactory: public Object
{
public:
	Class ClueFactoryConfig*                           Config                                             // 0x28(0x8)
};


// Size 0x0
class ClueLifetimeBlueprintFunctionLibrary: public BlueprintFunctionLibrary
{
public:
};


// Size 0x10
class ClueSiteLootRestrictionsDataAsset: public DataAsset
{
public:
	TArray<Struct RankBasedDebrisDistribution>         ClueSiteLootRestrictions                           // 0x28(0x10)
};


// Size 0x10
class DebrisForVoyageRankDescAsset: public DataAsset
{
public:
	TArray<Struct ContextProjectionPoint>              RankBasedDebrisDistribution                        // 0x28(0x10)
};


// Size 0x28
class EnvQueryTest_SeaClueSpawnLocation: public EnvQueryTest
{
public:
	float                                              MinProjectionDistance                              // 0x170(0x4)
	float                                              MaxProjectionDistance                              // 0x174(0x4)
	float                                              ProjectionAngleInDegrees                           // 0x178(0x4)
	float                                              IslandProximitySafeThreshold                       // 0x17c(0x4)
	class                                              ContextSourcePoint                                 // 0x180(0x8)
	class                                              ContextProjectionPoint                             // 0x188(0x8)
};


// Size 0x10
class LootForVoyageRankDescAsset: public DataAsset
{
public:
	TArray<Struct LootItemSpawnRelativeLocations>      RankBasedLootDistribution                          // 0x28(0x10)
};


// Size 0x0
class NPCLootSpawnInterface: public Interface
{
public:
};


// Size 0x18
class NPCLootSpawnComponent: public ActorComponent
{
public:
	TArray<Struct ClueSiteTypes>                       LootItemSpawnRelativeLocations                     // 0xd0(0x10)
};


// Size 0x10
class SeaClueSiteTypesDataAsset: public DataAsset
{
public:
	TArray<Class SeaClueSiteTypes>                     ClueSiteTypes                                      // 0x28(0x10)
};


// Size 0xc0
class TaleQuestChooseLandOrSeaStep: public TaleQuestStep
{
public:
	Class SeaClueSiteTypesDataAsset*                   SeaClueSiteTypes                                   // 0xa8(0x8)
};


// Size 0x78
class TaleQuestClueSiteService: public TaleQuestService
{
public:
	Class TaleQuestClueSiteServiceDesc*                Desc                                               // 0x60(0x8)
	TArray<Struct Desc>                                ClueSites                                          // 0x68(0x10)
	TArray<Struct SpawnedLoot>                         DebugClueSiteIds                                   // 0xc8(0x10)
};


// Size 0x0
class TaleQuestClueSiteServiceDesc: public TaleQuestServiceDesc
{
public:
};


// Size 0xa0
class TaleQuestChooseLandOrSeaStepDesc: public TaleQuestStepDesc
{
public:
	Class SeaClueSiteTypesDataAsset*                   SeaClueSiteTypes                                   // 0x80(0x8)
	float                                              ProjectionAngleInDegrees                           // 0x88(0x4)
	float                                              MinProjectionProportion                            // 0x8c(0x4)
	float                                              MaxProjectionProportion                            // 0x90(0x4)
	float                                              LandClueChanceWhenPreviousClueWasSea               // 0x94(0x4)
	float                                              LandClueChanceWhenPreviousClueWasLand              // 0x98(0x4)
	Struct QuestVariableVector                         ProjectionPoint                                    // 0xa0(0x20)
	Struct QuestVariableTradeRouteData                 TradeRouteData                                     // 0xc0(0x20)
	Struct QuestVariableBool                           IsSeaLocation                                      // 0xe0(0x20)
	Struct QuestVariableNameArray                      ValidIslandNames                                   // 0x100(0x20)
};


// Size 0x80
class TaleQuestGenerateCluePointingToSiteStep: public TaleQuestStep
{
public:
};


// Size 0x98
class TaleQuestGenerateCluePointingToSiteStepDesc: public TaleQuestStepDesc
{
public:
	Struct QuestVariableInt                            Difficulty                                         // 0x80(0x20)
	Struct QuestVariableVector                         SourceLocation                                     // 0xa0(0x20)
	Struct QuestVariableClueSite                       TargetClueSite                                     // 0xc0(0x20)
	Struct QuestVariableClueDescriptor                 GeneratedClue                                      // 0xe0(0x20)
	TArray<Class GeneratedClue>                        AllowedClueTypes                                   // 0x100(0x10)
	Class ClueConnectionConfig*                        ConnectionConfiguration                            // 0x110(0x8)
};


// Size 0x40
class TaleQuestGenerateClueSiteAtSeaLocationStep: public TaleQuestStep
{
public:
};


// Size 0x48
class TaleQuestGenerateClueSiteAtSeaLocationStepDesc: public TaleQuestStepDesc
{
public:
	Struct QuestVariableVector                         ApproximateLocation                                // 0x80(0x20)
	Struct QuestVariableClueSite                       ClueSite                                           // 0xa0(0x20)
	Class ClueFactoryConfig*                           ClueFactoryConfiguration                           // 0xc0(0x8)
};


// Size 0x40
class TaleQuestGenerateClueSiteOnIslandStep: public TaleQuestStep
{
public:
};


// Size 0x48
class TaleQuestGenerateClueSiteOnIslandStepDesc: public TaleQuestStepDesc
{
public:
	Struct QuestVariableName                           IslandName                                         // 0x80(0x20)
	Struct QuestVariableClueSite                       ClueSite                                           // 0xa0(0x20)
	Class ClueFactoryConfig*                           ClueGenerationConfiguration                        // 0xc0(0x8)
};


// Size 0x40
class TaleQuestGenerateDebrisTypeForVoyageRankStep: public TaleQuestStep
{
public:
};


// Size 0x48
class TaleQuestGenerateDebrisTypeForVoyageRankStepDesc: public TaleQuestStepDesc
{
public:
	Struct QuestVariableInt                            VoyageRank                                         // 0x80(0x20)
	Struct QuestVariableActorAssetTypeArray            DebrisTypeArray                                    // 0xa0(0x20)
	Class DebrisForVoyageRankDescAsset*                DebrisForRankDescAsset                             // 0xc0(0x8)
};


// Size 0x40
class TaleQuestGenerateLootDescForVoyageRankStep: public TaleQuestStep
{
public:
};


// Size 0x48
class TaleQuestGenerateLootDescForVoyageRankStepDesc: public TaleQuestStepDesc
{
public:
	Struct QuestVariableInt                            VoyageRank                                         // 0x80(0x20)
	Struct QuestVariableItemDescTypeArray              LootDescArray                                      // 0xa0(0x20)
	Class LootForVoyageRankDescAsset*                  LootForRankDescAsset                               // 0xc0(0x8)
};


// Size 0x0
class TaleQuestIsClueOfTypeStep: public TaleQuestStep
{
public:
};


// Size 0x48
class TaleQuestIsClueOfTypeStepDesc: public TaleQuestStepDesc
{
public:
	class                                              ClueSiteTypeToMatch                                // 0x80(0x8)
	Struct QuestVariableClueSite                       ClueSite                                           // 0x88(0x20)
	Struct QuestVariableBool                           IsMatchingType                                     // 0xa8(0x20)
};


// Size 0x48
class TaleQuestSelectClueSiteForLootStep: public TaleQuestStep
{
public:
	Class TaleQuestSelectClueSiteForLootStepDesc*      StepDesc                                           // 0x90(0x8)
};


// Size 0x58
class TaleQuestSelectClueSiteForLootStepDesc: public TaleQuestStepDesc
{
public:
	Class TaleQuestArrayEntrySelectionStrategy*        SelectionStrategy                                  // 0x80(0x8)
	Class ClueSiteLootRestrictionsDataAsset*           ClueSiteLootRestrictions                           // 0x88(0x8)
	byte                                               LootType                                           // 0x90(0x1)
	Struct QuestVariableClueSite                       OutputClueSite                                     // 0x98(0x20)
	Struct QuestVariableBool                           MaxedAllClueSites                                  // 0xb8(0x20)
};


// Size 0x78
class TaleQuestSpawnDebrisAtClueSiteStep: public TaleQuestStep
{
public:
};


// Size 0x60
class TaleQuestSpawnDebrisAtClueSiteStepDesc: public TaleQuestStepDesc
{
public:
	Struct QuestVariableClueSite                       ClueSiteVar                                        // 0x80(0x20)
	Struct QuestVariableActorAssetType                 DebrisTypeVar                                      // 0xa0(0x20)
	Struct QuestVariableActor                          OutDebrisActorVar                                  // 0xc0(0x20)
};


// Size 0x0
class TaleQuestSpawnLootItemInClueSiteStep: public TaleQuestStep
{
public:
};


// Size 0x68
class TaleQuestSpawnLootItemInClueSiteStepDesc: public TaleQuestStepDesc
{
public:
	Struct QuestVariableClass                          LootItem                                           // 0x80(0x20)
	Struct QuestVariableClueSite                       ClueSite                                           // 0xa0(0x20)
	Struct QuestVariableItemInfo                       SpawnedLootItem                                    // 0xc0(0x20)
	bool                                               Tracked                                            // 0xe0(0x1)
};


// Size 0x0
class TaleQuestStoreClueOnActorStep: public TaleQuestStep
{
public:
};


// Size 0x60
class TaleQuestStoreClueOnActorStepDesc: public TaleQuestStepDesc
{
public:
	Struct QuestVariableClueDescriptor                 ClueDescriptor                                     // 0x80(0x20)
	Struct QuestVariableActor                          Actor                                              // 0xa0(0x20)
	Struct QuestVariableActor                          ClueActor                                          // 0xc0(0x20)
};


// Size 0x28
class TaleQuestUpdateBuoyancyAutoSinkSettingForItemStep: public TaleQuestStep
{
public:
};


// Size 0x28
class TaleQuestUpdateBuoyancyAutoSinkSettingForItemStepDesc: public TaleQuestStepDesc
{
public:
	Struct QuestVariableItemInfo                       Item                                               // 0x80(0x20)
	bool                                               EnableAutoSink                                     // 0xa0(0x1)
};


// Size 0x10
class WeightedDebrisDataAsset: public DataAsset
{
public:
	TArray<Struct DestinationDescriptor>               Debris                                             // 0x28(0x10)
};


}