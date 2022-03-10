namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x20
class ClueSite: public None
{
public:
	class                                              SiteType                                           // 0x0(0x8)
	Class ClueSiteData*                                SiteData                                           // 0x8(0x8)
	Struct Vector                                      Location                                           // 0x10(0xc)
};


// Size 0x18
class LandClueCreationChoice: public None
{
public:
	class                                              ClueSiteType                                       // 0x0(0x8)
	struct FName                                       IslandIdentifier                                   // 0x8(0x8)
	Class LandClueCreator*                             ClueCreator                                        // 0x10(0x8)
};


// Size 0x20
class SeaClueCreationChoice: public None
{
public:
	class                                              SiteType                                           // 0x0(0x8)
	Class SeaClueCreator*                              ClueCreator                                        // 0x8(0x8)
};


// Size 0x18
class WeightedClueDestinationDescriptor: public None
{
public:
	class                                              DestinationType                                    // 0x0(0x8)
	TArray<Float >                                     DifficultyWeightings                               // 0x8(0x10)
};


// Size 0x18
class ClueSiteTypeSupportedDescribedByEntry: public None
{
public:
	class                                              SiteType                                           // 0x0(0x8)
	TArray<Struct WeightedClueDescriptor>              SupportedDescriptors                               // 0x8(0x10)
};


// Size 0x18
class WeightedClueDescriptor: public None
{
public:
	class                                              Descriptor                                         // 0x0(0x8)
	TArray<Float >                                     DifficultyWeightings                               // 0x8(0x10)
};


// Size 0x10
class RestrictedClueType: public None
{
public:
	class                                              Type                                               // 0x0(0x8)
	int                                                Max                                                // 0x8(0x4)
};


// Size 0x10
class ClueSiteLootRestriction: public None
{
public:
	class                                              SiteType                                           // 0x0(0x8)
	int                                                LootMax                                            // 0x8(0x4)
};


// Size 0x28
class DebrisToRangeDist: public None
{
public:
	Struct WeightedProbabilityRange                    NumberOfDebrisItemsToSpawn                         // 0x0(0x20)
	Class WeightedDebrisDataAsset*                     WeightedDebrisTypeAsset                            // 0x20(0x8)
};


// Size 0x28
class LootToRangeDist: public None
{
public:
	Struct WeightedProbabilityRange                    NumberOfLootItemsToSpawn                           // 0x0(0x20)
	Class WeightedTreasureChestDescAsset*              WeightedLootDescAsset                              // 0x20(0x8)
};


// Size 0x20
class QuestVariableClueSiteArray: public None
{
public:
};


// Size 0x20
class QuestVariableClueSite: public None
{
public:
};


// Size 0x10
class ClueSiteLootHistory: public None
{
public:
	TArray<Struct LootSpawnedAtClueSite>               History                                            // 0x0(0x10)
};


// Size 0x18
class LootSpawnedAtClueSite: public None
{
public:
	class                                              SiteType                                           // 0x0(0x8)
	Struct Vector                                      SiteLocation                                       // 0x8(0xc)
	int                                                NumLoot                                            // 0x14(0x4)
};


// Size 0x20
class QuestVariableClueDescriptor: public None
{
public:
};


// Size 0x28
class WeightedDebris: public None
{
public:
	float                                              Weight                                             // 0x20(0x4)
};


// Size 0x20
class EventClueObtained: public None
{
public:
	Class ClueDescriptor*                              ObtainedClue                                       // 0x0(0x8)
	class                                              ObtainedSiteType                                   // 0x8(0x8)
};


}