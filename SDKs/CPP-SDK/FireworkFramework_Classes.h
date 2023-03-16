// Generated by DougTheDruid#2784 on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x50 (Full Size[0x4f0] - InheritedSize[0x4a0]
class FireworkAmbientLightComponent: public AmbientLightSourceComponent
{
public:
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class FireworkDamagerType: public DamagerType
{
public:
};


// Size 0x20 (Full Size[0x48] - InheritedSize[0x28]
class FireworkFeedbackDataAsset: public DataAsset
{
public:
	float                                                        MaxExplosionRadius;                                // 0x28(0x4)
	char                                                         pad0x4_3K8J5[0x4];                                 // 0x2c(0x4)
	class                                                        CameraShake;                                       // 0x30(0x8)
	float                                                        CameraShakeInnerRadiusMultiplier;                  // 0x38(0x4)
	char                                                         pad0x4_D0IUO[0x4];                                 // 0x3c(0x4)
	Class ForceFeedbackEffect*                                   ExplosionRumble;                                   // 0x40(0x8)
};


// Size 0x128 (Full Size[0x150] - InheritedSize[0x28]
class FireworkDataAsset: public DataAsset
{
public:
	Struct WeightedProbabilityRangeOfRanges                      PercentageTimeUntilTrailDisappears;                // 0x28(0x30)
	Struct WeightedProbabilityRangeOfRanges                      TimeUntilExplosion;                                // 0x58(0x30)
	bool                                                         IsFlare;                                           // 0x88(0x1)
	bool                                                         ShouldCastAmbientLight;                            // 0x89(0x1)
	char                                                         pad0x2_A246N[0x2];                                 // 0x8a(0x2)
	Struct FireworkAmbientLightData                              FireworkAmbientLightData;                          // 0x8c(0x14)
	TArray<struct Explosions>                                    Explosions;                                        // 0xa0(0x10)
	Struct WeightedProbabilityRange                              NumExplosions;                                     // 0xb0(0x20)
	Struct WeightedProbabilityRangeOfRanges                      TimeBetweenExplosions;                             // 0xd0(0x30)
	Struct WeightedProbabilityRangeOfRanges                      ExplosionLocationOffset;                           // 0x100(0x30)
	float                                                        FlashbangRadius;                                   // 0x130(0x4)
	char                                                         pad0x4_KAS8H[0x4];                                 // 0x134(0x4)
	Class WwiseObjectPoolWrapper*                                ExplosionSfxPool;                                  // 0x138(0x8)
	Class WwiseEvent*                                            LaunchSfx;                                         // 0x140(0x8)
	Class FireworkFeedbackDataAsset*                             FireworkFeedbackData;                              // 0x148(0x8)
};


// Size 0xd8 (Full Size[0x4a0] - InheritedSize[0x3c8]
class FireworkExplosion: public Actor
{
public:
	char                                                         pad0x8_AHARG[0x8];                                 // 0x3c8(0x8)
	Struct GeneratedFireworkData                                 GeneratedFireworkData;                             // 0x3d0(0x58)
	Class SceneComponent*                                        RootSceneComponent;                                // 0x428(0x8)
	Class FireworkAmbientLightComponent*                         FireworkAmbientLightComponent;                     // 0x430(0x8)
	Class ParticleSystemComponent*                               SpawnedExplosionParticles;                         // 0x438(0x8)
	Struct WwiseEmitter                                          AudioEmitter;                                      // 0x440(0x20)
	char                                                         pad0x80_FNXRW[0x80];                               // 0x45e(0x80)
};


// Size 0x20 (Full Size[0x530] - InheritedSize[0x510]
class FireworkItemInfo: public ItemInfo
{
public:
	Class LoadableFireworkComponent*                             LoadableProjectileComponent;                       // 0x510(0x8)
	Struct StringAssetReference                                  FireworkDataAsset;                                 // 0x518(0x10)
	int                                                          GeneratedDataRNGSeed;                              // 0x528(0x4)
	char                                                         pad0xc_64SSA[0xc];                                 // 0x52a(0xc)
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class FireworkServiceInterface: public Interface
{
public:
};


// Size 0x108 (Full Size[0x708] - InheritedSize[0x600]
class FireworkProjectile: public LaunchableProjectile
{
public:
	char                                                         pad0x10_4PANK[0x10];                               // 0x600(0x10)
	Class SphereComponent*                                       CollisionComponent;                                // 0x610(0x8)
	Class StaticMeshComponent*                                   MeshComponent;                                     // 0x618(0x8)
	Class ExplosionComponent*                                    ExplosionComponent;                                // 0x620(0x8)
	Class FireworkStatsComponent*                                FireworkStatsComponent;                            // 0x628(0x8)
	Class SceneComponent*                                        MeshDirectionComponent;                            // 0x630(0x8)
	Class ProjectileAnimationComponent*                          AnimationComponent;                                // 0x638(0x8)
	Struct GeneratedFireworkData                                 GeneratedFireworkData;                             // 0x640(0x58)
	char                                                         pad0x120_49JQ6[0x120];                             // 0x696(0x120)
};


// Size 0x98 (Full Size[0x460] - InheritedSize[0x3c8]
class FireworkService: public Actor
{
public:
	char                                                         pad0x78_FK2X0[0x78];                               // 0x3c8(0x78)
	int                                                          NumberOfCachedFlares;                              // 0x440(0x4)
	char                                                         pad0x24_0W4EP[0x24];                               // 0x442(0x24)
};


// Size 0x18 (Full Size[0x50] - InheritedSize[0x38]
class FireworksSettings: public DeveloperSettings
{
public:
	float                                                        FlashbangRadius;                                   // 0x38(0x4)
	float                                                        FlashbangFlashTimer;                               // 0x3c(0x4)
	float                                                        FlashbangFadeOutTimer;                             // 0x40(0x4)
	float                                                        FlashbangCooldown;                                 // 0x44(0x4)
	float                                                        LoadedFuseTimer;                                   // 0x48(0x4)
	char                                                         pad0xc_XJR74[0xc];                                 // 0x4a(0xc)
};


// Size 0x40 (Full Size[0x68] - InheritedSize[0x28]
class FireworksSettingsDataAsset: public DataAsset
{
public:
	float                                                        LoadedFuseTimer;                                   // 0x28(0x4)
	char                                                         pad0x4_QM5KO[0x4];                                 // 0x2c(0x4)
	Class WwiseObjectPoolWrapper*                                FuseSoundWisePool;                                 // 0x30(0x8)
	Class WwiseEvent*                                            FuseActivateSoundPlayEvent;                        // 0x38(0x8)
	Class WwiseEvent*                                            FuseSoundPlayEvent;                                // 0x40(0x8)
	Class WwiseEvent*                                            FuseSoundStopEvent;                                // 0x48(0x8)
	Class Object*                                                FuseParticleSystem;                                // 0x50(0x8)
	Struct StringAssetReference                                  FuseMeshAssetReference;                            // 0x58(0x10)
};


// Size 0xc0 (Full Size[0x188] - InheritedSize[0xc8]
class FireworkStatsComponent: public ActorComponent
{
public:
	float                                                        FlareRadius;                                       // 0xc8(0x4)
	char                                                         pad0x4_52V3L[0x4];                                 // 0xcc(0x4)
	int                                                          NumberOfFireworksFiredAtNight;                     // 0xd0(0x4)
	float                                                        FireworksFiredAtNightRadius;                       // 0xd4(0x4)
	float                                                        FiredFireworksAtNightTimer;                        // 0xd8(0x4)
	char                                                         pad0xb4_VP45F[0xb4];                               // 0xda(0xb4)
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class ImpactProjectileIdFirework: public ImpactProjectileId
{
public:
};


// Size 0x10 (Full Size[0x140] - InheritedSize[0x130]
class LoadableFireworkComponent: public LoadableProjectileComponent
{
public:
	bool                                                         ShouldProjectileTrailDoReflections;                // 0x130(0x1)
	bool                                                         ShouldUseGlobalOverrideFuseTimer;                  // 0x131(0x1)
	bool                                                         ShouldUseGlobalOverrideFuseSfx;                    // 0x132(0x1)
	bool                                                         ShouldUseGlobalOverrideFuseVfx;                    // 0x133(0x1)
	bool                                                         ShouldUseGlobalOverrideFuseMesh;                   // 0x134(0x1)
	char                                                         pad0x3_YLW7X[0x3];                                 // 0x135(0x3)
	Class FireworksSettingsDataAsset*                            FireworksSettingsDataAsset;                        // 0x138(0x8)
};


// Size 0x1c8 (Full Size[0x290] - InheritedSize[0xc8]
class ProjectileAnimationComponent: public ActorComponent
{
public:
	TArray<struct ProjectileAnimationCurves>                     ProjectileAnimationCurves;                         // 0xc8(0x10)
	Class StaticMeshComponent*                                   MeshComponent;                                     // 0xd8(0x8)
	Struct RuntimeVectorCurve                                    AnimationOffsetCurve;                              // 0xe0(0x170)
	char                                                         pad0x320_NX0TK[0x320];                             // 0x24e(0x320)
};


}