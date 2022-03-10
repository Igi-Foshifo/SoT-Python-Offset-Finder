namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x30
class WeightedFireworkVFXData: public None
{
public:
	Class Object*                                      VFX                                                // 0x0(0x8)
	Class WwiseEvent*                                  Sfx                                                // 0x8(0x8)
	Class WwiseEvent*                                  SecondarySFX                                       // 0x10(0x8)
	float                                              Weight                                             // 0x18(0x4)
	Struct LinearColor                                 AmbientLightColour                                 // 0x1c(0x10)
};


// Size 0x58
class GeneratedFireworkData: public None
{
public:
	Struct FireworkAmbientLightData                    FireworkAmbientLightData                           // 0xc(0x14)
	TArray<Struct FireworkExplosionData>               ExplosionData                                      // 0x28(0x10)
	Class WwiseObjectPoolWrapper*                      SfxPool                                            // 0x38(0x8)
	Class WwiseEvent*                                  LaunchSfx                                          // 0x40(0x8)
	Class FireworkFeedbackDataAsset*                   FireworkFeedbackData                               // 0x50(0x8)
};


// Size 0x40
class FireworkExplosionData: public None
{
public:
	Class Object*                                      VFX                                                // 0x8(0x8)
	Class WwiseEvent*                                  Sfx                                                // 0x10(0x8)
	Class WwiseEvent*                                  SecondarySFX                                       // 0x18(0x8)
};


// Size 0x14
class FireworkAmbientLightData: public None
{
public:
	float                                              FadeInTimer                                        // 0x0(0x4)
	float                                              FadeOutTimer                                       // 0x4(0x4)
	float                                              LifetimeTimer                                      // 0x8(0x4)
	float                                              Radius                                             // 0xc(0x4)
	float                                              AmbientIntensity                                   // 0x10(0x4)
};


// Size 0x178
class WeightedProjectileMeshAnimationData: public None
{
public:
	Struct RuntimeVectorCurve                          AnimationCurve                                     // 0x0(0x170)
	float                                              Weight                                             // 0x170(0x4)
};


}