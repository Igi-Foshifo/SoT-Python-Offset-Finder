namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x80
class WorldLocationPopUpComponent: public SceneComponent
{
public:
	Class WorldLocationPopUpDataAsset*                 PopUpData                                          // 0x2d0(0x8)
	Class ShapeComponent*                              LocationOverlapVolume                              // 0x2d8(0x8)
	float                                              LocationCooldown                                   // 0x2e0(0x4)
	bool                                               AlwaysShowPopUp                                    // 0x2e4(0x1)
};


// Size 0x58
class WorldLocationPopUpDataAsset: public DataAsset
{
public:
	struct FName                                       Id                                                 // 0x28(0x8)
	Struct StringAssetReference                        BannerIcon                                         // 0x30(0x10)
	Struct FText                                       DisplayText                                        // 0x40(0x38)
	Class PopUpAudioDesc*                              AudioOverride                                      // 0x78(0x8)
};


// Size 0x0
class WorldLocationVisitorInterface: public Interface
{
public:
};


// Size 0x40
class WorldLocationVisitorComponent: public ActorComponent
{
public:
	float                                              RevisitCooldown                                    // 0xd0(0x4)
};


}