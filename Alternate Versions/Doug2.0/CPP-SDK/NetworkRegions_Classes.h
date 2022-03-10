namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x0
class NetworkRegionServiceInterface: public Interface
{
public:
};


// Size 0xa0
class NetworkRegionService: public Object
{
public:
	TArray<class PlayersThatNeedToBeTicked*>           PlayersThatNeedToBeTicked                          // 0xb8(0x10)
};


// Size 0x40
class RegionAssetCacheActor: public Actor
{
public:
	TArray<Struct GetPressureZoneParameters>           RegionData                                         // 0x3d0(0x10)
	TArray<class LoadedAssets*>                        LoadedAssets                                       // 0x3e0(0x10)
};


}