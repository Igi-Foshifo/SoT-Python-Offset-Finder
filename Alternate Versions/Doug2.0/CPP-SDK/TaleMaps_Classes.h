namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x28
class AddMarkToTornMapStep: public TaleQuestStep
{
public:
	class                                              MapMark                                            // 0xb0(0x8)
};


// Size 0x40
class AddMarkToTornMapStepDescBase: public TaleQuestStepDesc
{
public:
	Struct QuestVariableGuid                           MapId                                              // 0x80(0x20)
	Struct TaleQuestVariableMapMarkType                MapMark                                            // 0xa0(0x20)
};


// Size 0x20
class AddMarkToTornMapAtLocationStepDesc: public AddMarkToTornMapStepDescBase
{
public:
	Struct QuestVariableVector                         MarkLocation                                       // 0xc0(0x20)
};


// Size 0x20
class AddMarkToTornMapAtActorLocationStepDesc: public AddMarkToTornMapStepDescBase
{
public:
	Struct QuestVariableActor                          MarkLocation                                       // 0xc0(0x20)
};


// Size 0x30
class GetNumberOfCollectedTornMapPiecesStep: public TaleQuestStep
{
public:
};


// Size 0x40
class GetNumberOfCollectedTornMapPiecesStepDesc: public TaleQuestStepDesc
{
public:
	Struct QuestVariableGuid                           MapId                                              // 0x80(0x20)
	Struct QuestVariableInt                            NumPieces                                          // 0xa0(0x20)
};


// Size 0x0
class RegionIslandSelectionStrategyBase: public Object
{
public:
};


// Size 0x18
class RegionIslandFilteredSelectionStrategy: public RegionIslandSelectionStrategyBase
{
public:
	TArray<Byte SelectionStrategy>                     IslandTypes                                        // 0x28(0x10)
	bool                                               UseMaxDistance                                     // 0x38(0x1)
	float                                              MaxDistanceFromStartingIsland                      // 0x3c(0x4)
};


// Size 0x0
class RegionIslandRandomSelectionStrategy: public RegionIslandSelectionStrategyBase
{
public:
};


// Size 0x50
class SelectIslandsFromRegionStep: public TaleQuestStep
{
public:
	Class RegionMapDataAsset*                          RegionData                                         // 0x90(0x8)
	Class RegionIslandSelectionStrategyBase*           SelectionStrategy                                  // 0x98(0x8)
};


// Size 0x90
class SelectIslandsFromRegionStepDesc: public TaleQuestStepDesc
{
public:
	Struct QuestVariableDataAsset                      Region                                             // 0x80(0x20)
	Struct QuestVariableInt                            NumIslands                                         // 0xa0(0x20)
	Struct QuestVariableInt                            MaxDifferentIslands                                // 0xc0(0x20)
	Struct QuestVariableNameArray                      SelectedIslands                                    // 0xe0(0x20)
	Class RegionIslandSelectionStrategyBase*           SelectionStrategy                                  // 0x100(0x8)
	int                                                DefaultNumIslands                                  // 0x108(0x4)
	int                                                DefaultMaxDifferentIslands                         // 0x10c(0x4)
};


// Size 0x80
class TaleQuestAddLocationMapStep: public TaleQuestStep
{
public:
};


// Size 0x80
class TaleQuestAddTornMapStep: public TaleQuestStep
{
public:
};


// Size 0x60
class TaleQuestAddTradeRouteMapStep: public TaleQuestStep
{
public:
};


// Size 0x8
class TaleQuestLocationMapChestFoundStep: public TaleQuestStep
{
public:
};


// Size 0x0
class TaleQuestMapStepDescBase: public TaleQuestStepDesc
{
public:
};


// Size 0x88
class TaleQuestAddLocationMapStepDesc: public TaleQuestMapStepDescBase
{
public:
	struct FName                                       MapId                                              // 0x80(0x8)
	Struct QuestVariableInt                            NumberOfChests                                     // 0x88(0x20)
	Struct QuestVariableDataAsset                      RegionMapData                                      // 0xa8(0x20)
	Struct QuestVariableDataAsset                      VaultData                                          // 0xc8(0x20)
	Struct QuestVariableDataAsset                      MapParams                                          // 0xe8(0x20)
};


// Size 0x80
class TaleQuestAddTornMapStepDesc: public TaleQuestMapStepDescBase
{
public:
	Struct QuestVariableName                           IslandName                                         // 0x80(0x20)
	Struct QuestVariableInt                            NumberOfPieces                                     // 0xa0(0x20)
	Struct QuestVariableDataAsset                      MapParams                                          // 0xc0(0x20)
	Struct QuestVariableGuid                           MapId                                              // 0xe0(0x20)
};


// Size 0x68
class TaleQuestAddTradeRouteMapStepDesc: public TaleQuestMapStepDescBase
{
public:
	Struct QuestVariableDataAsset                      TradeRouteData                                     // 0x80(0x20)
	Struct QuestVariableText                           VesselName                                         // 0xa0(0x20)
	Struct QuestVariableGuid                           MapId                                              // 0xc0(0x20)
	Class ClueSiteTypeToMapMarkIdDataAsset*            ClueSiteToMapMarkIdMap                             // 0xe0(0x8)
};


// Size 0x8
class TaleQuestLocationMapChestFoundStepDesc: public TaleQuestMapStepDescBase
{
public:
	struct FName                                       MapId                                              // 0x80(0x8)
};


// Size 0x8
class TaleQuestWaitForChecklistMapCompletionStep: public TaleQuestStep
{
public:
};


// Size 0x0
class TaleQuestTriggerNamedChecklistEventStep: public TaleQuestStep
{
public:
};


// Size 0x8
class TaleQuestTriggerNamedChecklistEventStepDesc: public TaleQuestStepDesc
{
public:
	struct FName                                       Event                                              // 0x80(0x8)
};


}