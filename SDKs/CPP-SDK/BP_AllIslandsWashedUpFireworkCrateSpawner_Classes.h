// Generated by DougTheDruid#2784 on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size -0x1 (Full Size[-0x1] - InheritedSize[0x0]
class BP_AllIslandsWashedUpFireworkCrateSpawner_C: public InteractableComponent
{
public:
	char                                                         pad0x5b8_AK05C[0x5b8];                             // 0x0(0x5b8)
	Class InteractableComponent*                                 InteractableComponent;                             // 0x5b8(0x8)
	Class LiquidContainerComponent*                              LiquidContainerComponent;                          // 0x5c0(0x8)
	float                                                        MaxCapacity;                                       // 0x5c8(0x4)
	float                                                        CurrentCapacity;                                   // 0x5cc(0x4)
	float                                                        MaxLiquidCollectionAmount;                         // 0x5d0(0x4)
	float                                                        PumpResetTime;                                     // 0x5d4(0x4)
	float                                                        WaterIncreasePerPump;                              // 0x5d8(0x4)
	char                                                         pad0x4_M13VX[0x4];                                 // 0x5dc(0x4)
	Class CurveFloat*                                            HandleRotationCurve;                               // 0x5e0(0x8)
	Class CurveFloat*                                            WaterFlowCurve;                                    // 0x5e8(0x8)
	float                                                        WaterIntensityIncreaseSpeed;                       // 0x5f0(0x4)
	float                                                        WaterIntensityDecreaseSpeed;                       // 0x5f4(0x4)
	float                                                        TargetWaterIntensity;                              // 0x5f8(0x4)
	char                                                         pad0x4_S54WD[0x4];                                 // 0x5fc(0x4)
	float                                                        MinPumpRotation;                                   // 0x600(0x4)
	float                                                        MaxPumpRotation;                                   // 0x604(0x4)
	bool                                                         IsPumpingWater;                                    // 0x608(0x1)
	char                                                         pad0x17_D8DX3[0x17];                               // 0x609(0x17)
	struct FName                                                 DockingSocketName;                                 // 0x620(0x8)
	Struct Vector                                                LookAtPosLocalSpace;                               // 0x628(0xc)
	char                                                         pad0x4_28CJC[0x4];                                 // 0x634(0x4)
	Class Object*                                                WaterSurfaceVFXTemplate;                           // 0x638(0x8)
	Class Object*                                                WaterPumpVFXTemplate;                              // 0x640(0x8)
	Class ParticleSystemComponent*                               WaterPumpParticleComponent;                        // 0x648(0x8)
	Class ParticleSystemComponent*                               WaterSurfaceParticleComponent;                     // 0x650(0x8)
	TArray<struct HandleFeedbackLevels>                          HandleFeedbackLevels;                              // 0x658(0x10)
};


}