// Generated by DougTheDruid#2784 on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class RegionalAssetCacheInterface: public Interface
{
public:
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class RegionLookupInterface: public Interface
{
public:
};


// Size 0x48 (Full Size[0x70] - InheritedSize[0x28]
class LevelAssetCachingService: public Object
{
public:
	char                                                         pad0x18_JJHLL[0x18];                               // 0x28(0x18)
	struct FName                                                 CurrentRegion;                                     // 0x40(0x8)
	char                                                         pad0x38_HJS6J[0x38];                               // 0x46(0x38)
};


// Size 0x10 (Full Size[0x38] - InheritedSize[0x28]
class RegionalAssetListDataAsset: public DataAsset
{
public:
	TArray<struct RegionAssets>                                  RegionAssets;                                      // 0x28(0x10)
};


// Size 0xb0 (Full Size[0xd8] - InheritedSize[0x28]
class RegionalAssetCache: public Object
{
public:
	char                                                         pad0x10_B2CKC[0x10];                               // 0x28(0x10)
	Class RegionalAssetListDataAsset*                            CurrentListAsset;                                  // 0x38(0x8)
	char                                                         pad0xa8_K4HUO[0xa8];                               // 0x3e(0xa8)
};


// Size 0x50 (Full Size[0x78] - InheritedSize[0x28]
class RegionalAssetListSetupDataAsset: public DataAsset
{
public:
};


// Size 0x50 (Full Size[0x78] - InheritedSize[0x28]
class RegionalAssetListWorldSetupDataAsset: public DataAsset
{
public:
};


// Size 0x88 (Full Size[0xb0] - InheritedSize[0x28]
class RegionLookupGeneratedGrid: public Object
{
public:
	char                                                         pad0x8_GFBZT[0x8];                                 // 0x28(0x8)
	Struct WorldRegionSetup                                      WorldSetup;                                        // 0x30(0x28)
	char                                                         pad0xa8_HPKRM[0xa8];                               // 0x56(0xa8)
};


// Size 0x20 (Full Size[0x48] - InheritedSize[0x28]
class RegionLookupSeaId: public Object
{
public:
};


}