// Generated by DougTheDruid#2784 on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x28 (Full Size[0xc0] - InheritedSize[0x98]
class AddMarkToTornMapStep: public TaleQuestStep
{
public:
	char                                                         pad0x20_HHWQG[0x20];                               // 0x98(0x20)
	class                                                        MapMark;                                           // 0xb8(0x8)
};


// Size 0x60 (Full Size[0xe0] - InheritedSize[0x80]
class AddMarkToTornMapStepDescBase: public TaleQuestStepDesc
{
public:
	Struct QuestVariableGuid                                     MapId;                                             // 0x80(0x30)
	Struct TaleQuestVariableMapMarkType                          MapMark;                                           // 0xb0(0x30)
};


// Size 0x30 (Full Size[0x110] - InheritedSize[0xe0]
class AddMarkToTornMapAtLocationStepDesc: public AddMarkToTornMapStepDescBase
{
public:
	Struct QuestVariableVector                                   MarkLocation;                                      // 0xe0(0x30)
};


// Size 0x30 (Full Size[0x110] - InheritedSize[0xe0]
class AddMarkToTornMapAtActorLocationStepDesc: public AddMarkToTornMapStepDescBase
{
public:
	Struct QuestVariableActor                                    MarkLocation;                                      // 0xe0(0x30)
};


// Size 0x40 (Full Size[0xd8] - InheritedSize[0x98]
class GetNumberOfCollectedTornMapPiecesStep: public TaleQuestStep
{
public:
};


// Size 0x60 (Full Size[0xe0] - InheritedSize[0x80]
class GetNumberOfCollectedTornMapPiecesStepDesc: public TaleQuestStepDesc
{
public:
	Struct QuestVariableGuid                                     MapId;                                             // 0x80(0x30)
	Struct QuestVariableInt                                      NumPieces;                                         // 0xb0(0x30)
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class RegionIslandSelectionStrategyBase: public Object
{
public:
};


// Size 0x18 (Full Size[0x40] - InheritedSize[0x28]
class RegionIslandFilteredSelectionStrategy: public RegionIslandSelectionStrategyBase
{
public:
	TArray<Byte IslandTypes>                                     IslandTypes;                                       // 0x28(0x10)
	bool                                                         UseMaxDistance;                                    // 0x38(0x1)
	char                                                         pad0x3_QJQMA[0x3];                                 // 0x39(0x3)
	float                                                        MaxDistanceFromStartingIsland;                     // 0x3c(0x4)
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class RegionIslandRandomSelectionStrategy: public RegionIslandSelectionStrategyBase
{
public:
};


// Size 0x60 (Full Size[0xf8] - InheritedSize[0x98]
class SelectIslandsFromRegionStep: public TaleQuestStep
{
public:
	Class RegionMapDataAsset*                                    RegionData;                                        // 0x98(0x8)
	Class RegionIslandSelectionStrategyBase*                     SelectionStrategy;                                 // 0xa0(0x8)
	char                                                         pad0x60_VVIKE[0x60];                               // 0xa6(0x60)
};


// Size 0xd0 (Full Size[0x150] - InheritedSize[0x80]
class SelectIslandsFromRegionStepDesc: public TaleQuestStepDesc
{
public:
	Struct QuestVariableDataAsset                                Region;                                            // 0x80(0x30)
	Struct QuestVariableInt                                      NumIslands;                                        // 0xb0(0x30)
	Struct QuestVariableInt                                      MaxDifferentIslands;                               // 0xe0(0x30)
	Struct QuestVariableNameArray                                SelectedIslands;                                   // 0x110(0x30)
	Class RegionIslandSelectionStrategyBase*                     SelectionStrategy;                                 // 0x140(0x8)
	int                                                          DefaultNumIslands;                                 // 0x148(0x4)
	int                                                          DefaultMaxDifferentIslands;                        // 0x14c(0x4)
};


// Size 0xc0 (Full Size[0x158] - InheritedSize[0x98]
class TaleQuestAddLocationMapStep: public TaleQuestStep
{
public:
};


// Size 0xc0 (Full Size[0x158] - InheritedSize[0x98]
class TaleQuestAddTornMapStep: public TaleQuestStep
{
public:
};


// Size 0x90 (Full Size[0x128] - InheritedSize[0x98]
class TaleQuestAddTradeRouteMapStep: public TaleQuestStep
{
public:
};


// Size 0x18 (Full Size[0x198] - InheritedSize[0x180]
class TaleQuestCustomMapFunctionLibrary: public TaleQuestFunctionStepLibrary
{
public:
};


// Size 0x8 (Full Size[0xa0] - InheritedSize[0x98]
class TaleQuestLocationMapChestFoundStep: public TaleQuestStep
{
public:
};


// Size 0x0 (Full Size[0x80] - InheritedSize[0x80]
class TaleQuestMapStepDescBase: public TaleQuestStepDesc
{
public:
};


// Size 0xc8 (Full Size[0x148] - InheritedSize[0x80]
class TaleQuestAddLocationMapStepDesc: public TaleQuestMapStepDescBase
{
public:
	struct FName                                                 MapId;                                             // 0x80(0x8)
	Struct QuestVariableInt                                      NumberOfChests;                                    // 0x88(0x30)
	Struct QuestVariableDataAsset                                RegionMapData;                                     // 0xb8(0x30)
	Struct QuestVariableDataAsset                                VaultData;                                         // 0xe8(0x30)
	Struct QuestVariableDataAsset                                MapParams;                                         // 0x118(0x30)
};


// Size 0xc0 (Full Size[0x140] - InheritedSize[0x80]
class TaleQuestAddTornMapStepDesc: public TaleQuestMapStepDescBase
{
public:
	Struct QuestVariableName                                     IslandName;                                        // 0x80(0x30)
	Struct QuestVariableInt                                      NumberOfPieces;                                    // 0xb0(0x30)
	Struct QuestVariableDataAsset                                MapParams;                                         // 0xe0(0x30)
	Struct QuestVariableGuid                                     MapId;                                             // 0x110(0x30)
};


// Size 0x98 (Full Size[0x118] - InheritedSize[0x80]
class TaleQuestAddTradeRouteMapStepDesc: public TaleQuestMapStepDescBase
{
public:
	Struct QuestVariableDataAsset                                TradeRouteData;                                    // 0x80(0x30)
	Struct QuestVariableText                                     VesselName;                                        // 0xb0(0x30)
	Struct QuestVariableGuid                                     MapId;                                             // 0xe0(0x30)
	Class ClueSiteTypeToMapMarkIdDataAsset*                      ClueSiteToMapMarkIdMap;                            // 0x110(0x8)
};


// Size 0x8 (Full Size[0x88] - InheritedSize[0x80]
class TaleQuestLocationMapChestFoundStepDesc: public TaleQuestMapStepDescBase
{
public:
	struct FName                                                 MapId;                                             // 0x80(0x8)
};


// Size 0x8 (Full Size[0xa0] - InheritedSize[0x98]
class TaleQuestWaitForChecklistMapCompletionStep: public TaleQuestStep
{
public:
};


// Size 0x0 (Full Size[0x98] - InheritedSize[0x98]
class TaleQuestTriggerNamedChecklistEventStep: public TaleQuestStep
{
public:
};


// Size 0x8 (Full Size[0x88] - InheritedSize[0x80]
class TaleQuestTriggerNamedChecklistEventStepDesc: public TaleQuestStepDesc
{
public:
	struct FName                                                 Event;                                             // 0x80(0x8)
};


}