namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0xf0
class BP_CoralFortress_WeatherZone_C: public Actor
{
public:
	Struct PointerToUberGraphFrame                     UberGraphFrame                                     // 0x3d0(0x8)
	Class ExplosionComponent*                          Explosion                                          // 0x3d8(0x8)
	Class LightningManagerComponent*                   LightningManager                                   // 0x3e0(0x8)
	Class LightningComponent*                          Lightning                                          // 0x3e8(0x8)
	Class CapsuleComponent*                            ExclusionTriggerVolume                             // 0x3f0(0x8)
	Class AtmosphericPressureZoneComponent*            AtmosphericPressureZone                            // 0x3f8(0x8)
	Class BlendedPostProcessingRainZoneComponent*      BlendedPostProcessingRainZone                      // 0x400(0x8)
	Class StaticMeshComponent*                         TopCloudMeshComponent                              // 0x408(0x8)
	Class StaticMeshComponent*                         RingCloudMeshComponent                             // 0x410(0x8)
	Class StaticMeshComponent*                         Lightning4                                         // 0x418(0x8)
	Class StaticMeshComponent*                         Lightning3                                         // 0x420(0x8)
	Class StaticMeshComponent*                         Lightning2                                         // 0x428(0x8)
	Class StaticMeshComponent*                         Lightning1                                         // 0x430(0x8)
	Class StaticMeshComponent*                         OuterRainSheet                                     // 0x438(0x8)
	Class SceneComponent*                              RainRoot                                           // 0x440(0x8)
	Class SceneComponent*                              DefaultSceneRoot                                   // 0x448(0x8)
	float                                              RainBlend_Blend_1B3587E7420F9A76FB06A6A63DE0B159   // 0x450(0x4)
	byte                                               RainBlend__Direction_1B3587E7420F9A76FB06A6A63DE0B159 // 0x454(0x1)
	Class TimelineComponent*                           RainBlend                                          // 0x458(0x8)
	TArray<class RainDynMaterials*>                    RainDynMaterials                                   // 0x460(0x10)
	float                                              Opacity                                            // 0x470(0x4)
	Struct WwiseEmitterCreationParams                  CreationParams                                     // 0x478(0x28)
	Struct WwiseEmitter                                WwiseEmitter                                       // 0x4a0(0x20)
};


}