namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x0
class RegionalAssetCacheInterface: public Interface
{
public:
};


// Size 0x0
class RegionLookupInterface: public Interface
{
public:
};


// Size 0x48
class LevelAssetCachingService: public Object
{
public:
	struct FName                                       CurrentRegion                                      // 0x40(0x8)
};


// Size 0x98
class RegionalAssetCache: public Object
{
public:
};


// Size 0x10
class RegionalAssetListDataAsset: public DataAsset
{
public:
	TArray<Struct ListMapping>                         RegionAssets                                       // 0x28(0x10)
};


// Size 0x50
class RegionalAssetListSetupDataAsset: public DataAsset
{
public:
};


// Size 0x50
class RegionalAssetListWorldSetupDataAsset: public DataAsset
{
public:
};


// Size 0x88
class RegionLookupGeneratedGrid: public Object
{
public:
	Struct WorldRegionSetup                            WorldSetup                                         // 0x30(0x28)
};


// Size 0x20
class RegionLookupSeaId: public Object
{
public:
};


}