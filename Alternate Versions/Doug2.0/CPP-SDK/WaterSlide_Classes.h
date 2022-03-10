namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x28
class WaterSlideParamsDataAsset: public DataAsset
{
public:
	Struct WaterSlideParams                            WaterSlideParams                                   // 0x28(0x28)
};


// Size 0x80
class WaterSlide: public Actor
{
public:
	Class SplineComponent*                             SlideSpline                                        // 0x3d8(0x8)
	Class SceneComponent*                              Root                                               // 0x3e0(0x8)
	Class WaterSlideParamsDataAsset*                   WaterSlideParamsDataAsset                          // 0x3e8(0x8)
	Class PrimitiveComponent*                          EntranceCollisionComponent                         // 0x3f0(0x8)
	Class WaterSlide*                                  ContinuedWaterSlideRoute                           // 0x3f8(0x8)
	Class WaterSlide*                                  LeftWaterSlideRoute                                // 0x400(0x8)
	Class WaterSlide*                                  RightWaterSlideRoute                               // 0x408(0x8)
	bool                                               IsEndOfSlide                                       // 0x410(0x1)
	Struct Vector                                      EndOfSlideLaunchForce                              // 0x414(0xc)
	Class WaterSlideAudioParams*                       WaterSlideAudioParams                              // 0x420(0x8)
};


// Size 0x0
class WaterSlideActionStateId: public ActionStateId
{
public:
};


// Size 0x30
class WaterSlideAudioParams: public DataAsset
{
public:
	Class WwiseEvent*                                  WaterSlideStart                                    // 0x28(0x8)
	Class WwiseEvent*                                  WaterSlideEnd                                      // 0x30(0x8)
	Class WwiseEvent*                                  WaterSlideIsEndOneShot                             // 0x38(0x8)
	Class WwiseEvent*                                  WaterSlideChangeForkOneShot                        // 0x40(0x8)
	struct FName                                       PlayerSpeedOnWaterSlideRTPC                        // 0x48(0x8)
	float                                              PlayerSpeedThatMapsToOne                           // 0x50(0x4)
	float                                              PlayerSpeedThatMapsToZero                          // 0x54(0x4)
};


// Size 0x10
class WaterSlideInputComponent: public LookAtOffsetInputComponent
{
public:
};


// Size 0x0
class WaterSlidePlayerInterface: public Interface
{
public:
};


// Size 0x38
class WaterSlidePlayerComponent: public DoubleIntentComponent
{
public:
	Class ParticleSystemComponent*                     PlayerWaterSlideSplashingVFXComponent              // 0xe8(0x8)
	Class ParticleSystem*                              PlayerWaterSlideSplashingVFX                       // 0xf0(0x8)
	float                                              SpawnLocationZOffset                               // 0xf8(0x4)
	Class WaterSlide*                                  CurrentWaterSlide                                  // 0x110(0x8)
};


// Size 0x0
class WaterSlideVeeringAnalogInputId: public AnalogInputId
{
public:
};


}