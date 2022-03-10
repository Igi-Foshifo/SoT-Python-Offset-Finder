namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x28
class WaterSlideParams: public None
{
public:
	float                                              ForwardSpeed                                       // 0x0(0x4)
	float                                              IncreaseForwardSpeedMultiplier                     // 0x4(0x4)
	float                                              DecreaseForwardSpeedMultiplier                     // 0x8(0x4)
	float                                              VeeringSpeed                                       // 0xc(0x4)
	float                                              LeftVeeringDistance                                // 0x10(0x4)
	float                                              RightVeeringDistance                               // 0x14(0x4)
	Struct PlayerStat                                  StatToFireForRouteChange                           // 0x18(0x4)
	Class ParticleSystem*                              PlayerSplashingVFXOverride                         // 0x20(0x8)
};


// Size 0x38
class WaterSlideActionStateConstructionInfo: public None
{
public:
	Class SceneComponent*                              SceneComponent                                     // 0x30(0x8)
};


// Size 0x24
class WaterSlideActionStateParams: public None
{
public:
	float                                              ForcedFieldOfView                                  // 0x0(0x4)
	bool                                               ForceStash                                         // 0x4(0x1)
	Struct LookAtOffsetParams                          LookAtOffsetParams                                 // 0x8(0x1c)
};


// Size 0xc
class OnPlayerSpeedOnWaterSlideChangedActionStateEvent: public None
{
public:
};


// Size 0x10
class OnPlayerChangedWaterSlideRouteActionStateEvent: public None
{
public:
	Class WwiseEvent*                                  WaterSlideChangeForkOneShot                        // 0x8(0x8)
};


// Size 0x18
class OnEndWaterSlideActionStateEvent: public None
{
public:
	Class WwiseEvent*                                  WaterSlideEnd                                      // 0x8(0x8)
	Class WwiseEvent*                                  WaterSlideIsEndOneShot                             // 0x10(0x8)
};


// Size 0x10
class OnStartWaterSlideActionStateEvent: public None
{
public:
	Class WwiseEvent*                                  WaterSlideStart                                    // 0x0(0x8)
	Class ParticleSystem*                              WaterSlideVfxOverride                              // 0x8(0x8)
};


// Size 0x1
class OnExitedWaterSlideEvent: public None
{
public:
};


}