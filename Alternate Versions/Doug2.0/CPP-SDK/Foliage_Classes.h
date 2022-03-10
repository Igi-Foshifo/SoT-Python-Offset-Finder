namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x20
class FoliageInstancedStaticMeshComponent: public HierarchicalInstancedStaticMeshComponent
{
public:
};


// Size 0x0
class FoliageStatistics: public BlueprintFunctionLibrary
{
public:
};


// Size 0x338
class FoliageType: public Object
{
public:
	Struct Guid                                        UpdateGuid                                         // 0x28(0x10)
	float                                              Density                                            // 0x38(0x4)
	float                                              DensityAdjustmentFactor                            // 0x3c(0x4)
	float                                              Radius                                             // 0x40(0x4)
	byte                                               Scaling                                            // 0x44(0x1)
	Struct FloatInterval                               ScaleX                                             // 0x48(0x8)
	Struct FloatInterval                               ScaleY                                             // 0x50(0x8)
	Struct FloatInterval                               ScaleZ                                             // 0x58(0x8)
	byte                                               VertexColorMask                                    // 0x60(0x1)
	float                                              VertexColorMaskThreshold                           // 0x64(0x4)
	bool                                               VertexColorMaskInvert                              // 0x68(0x1)
	Struct FloatInterval                               ZOffset                                            // 0x6c(0x8)
	bool                                               AlignToNormal                                      // 0x74(0x1)
	float                                              AlignMaxAngle                                      // 0x78(0x4)
	bool                                               RandomYaw                                          // 0x7c(0x1)
	float                                              RandomPitchAngle                                   // 0x80(0x4)
	Struct FloatInterval                               GroundSlopeAngle                                   // 0x84(0x8)
	Struct FloatInterval                               Height                                             // 0x8c(0x8)
	TArray<Struct FName>                               LandscapeLayers                                    // 0x98(0x10)
	struct FName                                       LandscapeLayer                                     // 0xa8(0x8)
	bool                                               CollisionWithWorld                                 // 0xb0(0x1)
	Struct Vector                                      CollisionScale                                     // 0xb4(0xc)
	float                                              MinimumLayerWeight                                 // 0xc0(0x4)
	Struct BoxSphereBounds                             MeshBounds                                         // 0xc4(0x1c)
	Struct Vector                                      LowBoundOriginRadius                               // 0xe0(0xc)
	byte                                               Mobility                                           // 0xec(0x1)
	Struct Int32Interval                               CullDistance                                       // 0xf0(0x8)
	bool                                               bEnableStaticLighting                              // 0xf8(0x1)
	bool                                               CastShadow                                         // 0xf8(0x1)
	bool                                               bAffectDynamicIndirectLighting                     // 0xf8(0x1)
	bool                                               bAffectDistanceFieldLighting                       // 0xf8(0x1)
	bool                                               bCastDynamicShadow                                 // 0xf8(0x1)
	bool                                               bCastStaticShadow                                  // 0xf8(0x1)
	bool                                               bCastShadowAsTwoSided                              // 0xf8(0x1)
	bool                                               bReceivesDecals                                    // 0xf8(0x1)
	bool                                               bOverrideLightMapRes                               // 0xf9(0x1)
	int                                                OverriddenLightMapRes                              // 0xfc(0x4)
	bool                                               bUseAsOccluder                                     // 0x100(0x1)
	Struct BodyInstance                                BodyInstance                                       // 0x108(0x180)
	byte                                               CustomNavigableGeometry                            // 0x288(0x1)
	bool                                               IsSelected                                         // 0x298(0x1)
	float                                              CollisionRadius                                    // 0x29c(0x4)
	float                                              ShadeRadius                                        // 0x2a0(0x4)
	int                                                NumSteps                                           // 0x2a4(0x4)
	float                                              InitialSeedDensity                                 // 0x2a8(0x4)
	float                                              AverageSpreadDistance                              // 0x2ac(0x4)
	float                                              SpreadVariance                                     // 0x2b0(0x4)
	int                                                SeedsPerStep                                       // 0x2b4(0x4)
	int                                                DistributionSeed                                   // 0x2b8(0x4)
	float                                              MaxInitialSeedOffset                               // 0x2bc(0x4)
	bool                                               bCanGrowInShade                                    // 0x2c0(0x1)
	bool                                               bSpawnsInShade                                     // 0x2c1(0x1)
	float                                              MaxInitialAge                                      // 0x2c4(0x4)
	float                                              MaxAge                                             // 0x2c8(0x4)
	float                                              OverlapPriority                                    // 0x2cc(0x4)
	Struct FloatInterval                               ProceduralScale                                    // 0x2d0(0x8)
	Struct RuntimeFloatCurve                           ScaleCurve                                         // 0x2d8(0x80)
	int                                                ChangeCount                                        // 0x358(0x4)
	bool                                               ReapplyDensity                                     // 0x35c(0x1)
	bool                                               ReapplyRadius                                      // 0x35c(0x1)
	bool                                               ReapplyAlignToNormal                               // 0x35c(0x1)
	bool                                               ReapplyRandomYaw                                   // 0x35c(0x1)
	bool                                               ReapplyScaling                                     // 0x35c(0x1)
	bool                                               ReapplyScaleX                                      // 0x35c(0x1)
	bool                                               ReapplyScaleY                                      // 0x35c(0x1)
	bool                                               ReapplyScaleZ                                      // 0x35c(0x1)
	bool                                               ReapplyRandomPitchAngle                            // 0x35d(0x1)
	bool                                               ReapplyGroundSlope                                 // 0x35d(0x1)
	bool                                               ReapplyHeight                                      // 0x35d(0x1)
	bool                                               ReapplyLandscapeLayers                             // 0x35d(0x1)
	bool                                               ReapplyZOffset                                     // 0x35d(0x1)
	bool                                               ReapplyCollisionWithWorld                          // 0x35d(0x1)
	bool                                               ReapplyVertexColorMask                             // 0x35d(0x1)
};


// Size 0x20
class FoliageType_InstancedStaticMesh: public FoliageType
{
public:
	Class StaticMesh*                                  Mesh                                               // 0x360(0x8)
	TArray<class OverrideMaterials*>                   OverrideMaterials                                  // 0x368(0x10)
	class                                              ComponentClass                                     // 0x378(0x8)
};


// Size 0x50
class InstancedFoliageActor: public Actor
{
public:
};


// Size 0x60
class InteractiveFoliageActor: public StaticMeshActor
{
public:
	Class CapsuleComponent*                            CapsuleComponent                                   // 0x3e0(0x8)
	Struct Vector                                      TouchingActorEntryPosition                         // 0x3e8(0xc)
	Struct Vector                                      FoliageVelocity                                    // 0x3f4(0xc)
	Struct Vector                                      FoliageForce                                       // 0x400(0xc)
	Struct Vector                                      FoliagePosition                                    // 0x40c(0xc)
	float                                              FoliageDamageImpulseScale                          // 0x418(0x4)
	float                                              FoliageTouchImpulseScale                           // 0x41c(0x4)
	float                                              FoliageStiffness                                   // 0x420(0x4)
	float                                              FoliageStiffnessQuadratic                          // 0x424(0x4)
	float                                              FoliageDamping                                     // 0x428(0x4)
	float                                              MaxDamageImpulse                                   // 0x42c(0x4)
	float                                              MaxTouchImpulse                                    // 0x430(0x4)
	float                                              MaxForce                                           // 0x434(0x4)
	float                                              Mass                                               // 0x438(0x4)
};


// Size 0x10
class InteractiveFoliageComponent: public StaticMeshComponent
{
public:
};


// Size 0x8
class ProceduralFoliageBlockingVolume: public Volume
{
public:
	Class ProceduralFoliageVolume*                     ProceduralFoliageVolume                            // 0x408(0x8)
};


// Size 0x28
class ProceduralFoliageComponent: public ActorComponent
{
public:
	Class ProceduralFoliageSpawner*                    FoliageSpawner                                     // 0xc8(0x8)
	float                                              TileOverlap                                        // 0xd0(0x4)
	Class Volume*                                      SpawningVolume                                     // 0xd8(0x8)
	Struct Guid                                        ProceduralGuid                                     // 0xe0(0x10)
};


// Size 0x40
class ProceduralFoliageSpawner: public Object
{
public:
	int                                                RandomSeed                                         // 0x28(0x4)
	float                                              TileSize                                           // 0x2c(0x4)
	int                                                NumUniqueTiles                                     // 0x30(0x4)
	TArray<Struct NumUniqueTiles>                      FoliageTypes                                       // 0x38(0x10)
	bool                                               bNeedsSimulation                                   // 0x48(0x1)
};


// Size 0x128
class ProceduralFoliageTile: public Object
{
public:
	Class ProceduralFoliageSpawner*                    FoliageSpawner                                     // 0x28(0x8)
	TArray<Struct FoliageSpawner>                      InstancesArray                                     // 0xd0(0x10)
};


// Size 0x8
class ProceduralFoliageVolume: public Volume
{
public:
	Class ProceduralFoliageComponent*                  ProceduralComponent                                // 0x408(0x8)
};


}