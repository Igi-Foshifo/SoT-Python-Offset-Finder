// Generated by DougTheDruid#2784 on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x10 (Full Size[0x38] - InheritedSize[0x28]
class SplashProbeDataAsset: public DataAsset
{
public:
	TArray<struct Probes>                                        Probes;                                            // 0x28(0x10)
};


// Size 0x58 (Full Size[0x120] - InheritedSize[0xc8]
class SplashProbeVFXComponent: public ActorComponent
{
public:
	char                                                         pad0x28_95OME[0x28];                               // 0xc8(0x28)
	Class SplashProbeDataAsset*                                  Probes;                                            // 0xf0(0x8)
	Class SplashProbeDataAsset*                                  ProbesInstance;                                    // 0xf8(0x8)
	Struct ActorComponentSelector                                AttachProbesToOwner;                               // 0x100(0x10)
	Class SceneComponent*                                        AttachProbesToComponent;                           // 0x110(0x8)
	bool                                                         ProbeEnabled;                                      // 0x118(0x1)
	char                                                         pad0x9_UJMWV[0x9];                                 // 0x117(0x9)
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class WaterSplashProbeFunctionLibrary: public BlueprintFunctionLibrary
{
public:
};


// Size 0x90 (Full Size[0x158] - InheritedSize[0xc8]
class WaterSpoutVFXComponent: public ActorComponent
{
public:
	TArray<struct WaterSpouts>                                   WaterSpouts;                                       // 0xc8(0x10)
	Struct Vector                                                SplashEffectPointBottomZ;                          // 0xd8(0xc)
	char                                                         pad0x4_7V5RZ[0x4];                                 // 0xe4(0x4)
	Class Object*                                                SpoutParticleSystem;                               // 0xe8(0x8)
	Class Object*                                                SplashParticleSystem;                              // 0xf0(0x8)
	float                                                        WaterSplashDelayMin;                               // 0xf8(0x4)
	float                                                        WaterSplashDelayMax;                               // 0xfc(0x4)
	float                                                        SplashEffectVFXOffset;                             // 0x100(0x4)
	float                                                        SplashSweepRadius;                                 // 0x104(0x4)
	bool                                                         ShouldSpawnKillPlaneAtSplash;                      // 0x108(0x1)
	char                                                         pad0x7_QE0X9[0x7];                                 // 0x109(0x7)
	Class StaticMesh*                                            SplashKillPlaneMesh;                               // 0x110(0x8)
	Struct Vector                                                SplashKillPlaneScale;                              // 0x118(0xc)
	char                                                         pad0x4_6ZTAJ[0x4];                                 // 0x124(0x4)
	Class StaticMeshComponent*                                   SplashKillPlane;                                   // 0x128(0x8)
	TArray<struct ActiveWaterSpouts>                             ActiveWaterSpouts;                                 // 0x130(0x10)
	char                                                         pad0x38_NTOEY[0x38];                               // 0x13e(0x38)
};


// Size 0x28 (Full Size[0x438] - InheritedSize[0x410]
class AthenaFFTWater: public FFTWater
{
public:
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class WaterEmissionVolumeInterface: public Interface
{
public:
};


// Size 0x8 (Full Size[0x3d8] - InheritedSize[0x3d0]
class AthenaWaterEmissionVolume: public WaterEmissionVolume
{
public:
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class FFTWaterInterface: public Interface
{
public:
};


// Size 0x10 (Full Size[0x38] - InheritedSize[0x28]
class WaterProperties: public Object
{
public:
	TArray<struct WaterInfo>                                     WaterInfo;                                         // 0x28(0x10)
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class WaterInterface: public Interface
{
public:
};


// Size 0x80 (Full Size[0x448] - InheritedSize[0x3c8]
class FFTWaterService: public Actor
{
public:
	char                                                         pad0x78_M88K0[0x78];                               // 0x3c8(0x78)
	double                                                       ReplicatedServerCreationTime;                      // 0x440(0x8)
};


// Size 0x10 (Full Size[0x5e0] - InheritedSize[0x5d0]
class FlatWaterPlaneComponent: public BaseWaterComponent
{
public:
};


// Size 0x10 (Full Size[0x38] - InheritedSize[0x28]
class MockWaterInterface: public Object
{
public:
};


// Size 0x8 (Full Size[0x40] - InheritedSize[0x38]
class MockWaterServiceWithValidWaterPlane: public MockWaterInterface
{
public:
	Class FFTWaterComponent*                                     DefaultWaterComponent;                             // 0x38(0x8)
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class NoSwimWaterId: public WaterId
{
public:
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class SeaWaterId: public WaterId
{
public:
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class ShipWaterId: public WaterId
{
public:
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class UndergroundSeaWaterId: public WaterId
{
public:
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class WaterBuoyancyFunctionLibrary: public BlueprintFunctionLibrary
{
public:
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class WaterBuoyancySampleMovementFunctionLibrary: public BlueprintFunctionLibrary
{
public:
};


// Size 0x20 (Full Size[0x48] - InheritedSize[0x28]
class WaterEmissionVolumeService: public Object
{
public:
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class WaterExclusionSurfaceInterface: public Interface
{
public:
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class WaterPlaneInterface: public Interface
{
public:
};


// Size 0x20 (Full Size[0x610] - InheritedSize[0x5f0]
class WaterInteractionComponent: public BoxComponent
{
public:
};


// Size 0x10 (Full Size[0xd8] - InheritedSize[0xc8]
class WaterPlaneExclusionComponent: public ActorComponent
{
public:
	Struct ActorComponentSelector                                UseSpecificComponentForOverlaps;                   // 0xc8(0x10)
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class WaterPlaneRetrievalProviderInterface: public Interface
{
public:
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class WaterVolumeInterface: public Interface
{
public:
};


}