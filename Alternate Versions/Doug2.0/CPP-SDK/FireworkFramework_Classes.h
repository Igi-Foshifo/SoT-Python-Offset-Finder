namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x50
class FireworkAmbientLightComponent: public AmbientLightSourceComponent
{
public:
};


// Size 0x0
class FireworkDamagerType: public DamagerType
{
public:
};


// Size 0x20
class FireworkFeedbackDataAsset: public DataAsset
{
public:
	float                                              MaxExplosionRadius                                 // 0x28(0x4)
	class                                              CameraShake                                        // 0x30(0x8)
	float                                              CameraShakeInnerRadiusMultiplier                   // 0x38(0x4)
	Class ForceFeedbackEffect*                         ExplosionRumble                                    // 0x40(0x8)
};


// Size 0x128
class FireworkDataAsset: public DataAsset
{
public:
	Struct WeightedProbabilityRangeOfRanges            PercentageTimeUntilTrailDisappears                 // 0x28(0x30)
	Struct WeightedProbabilityRangeOfRanges            TimeUntilExplosion                                 // 0x58(0x30)
	bool                                               IsFlare                                            // 0x88(0x1)
	bool                                               ShouldCastAmbientLight                             // 0x89(0x1)
	Struct FireworkAmbientLightData                    FireworkAmbientLightData                           // 0x8c(0x14)
	TArray<Struct FireworkAmbientLightData>            Explosions                                         // 0xa0(0x10)
	Struct WeightedProbabilityRange                    NumExplosions                                      // 0xb0(0x20)
	Struct WeightedProbabilityRangeOfRanges            TimeBetweenExplosions                              // 0xd0(0x30)
	Struct WeightedProbabilityRangeOfRanges            ExplosionLocationOffset                            // 0x100(0x30)
	float                                              FlashbangRadius                                    // 0x130(0x4)
	Class WwiseObjectPoolWrapper*                      ExplosionSfxPool                                   // 0x138(0x8)
	Class WwiseEvent*                                  LaunchSfx                                          // 0x140(0x8)
	Class FireworkFeedbackDataAsset*                   FireworkFeedbackData                               // 0x148(0x8)
};


// Size 0xd8
class FireworkExplosion: public Actor
{
public:
	Struct GeneratedFireworkData                       GeneratedFireworkData                              // 0x3d8(0x58)
	Class SceneComponent*                              RootSceneComponent                                 // 0x430(0x8)
	Class FireworkAmbientLightComponent*               FireworkAmbientLightComponent                      // 0x438(0x8)
	Class ParticleSystemComponent*                     SpawnedExplosionParticles                          // 0x440(0x8)
	Struct WwiseEmitter                                AudioEmitter                                       // 0x448(0x20)
};


// Size 0x20
class FireworkItemInfo: public ItemInfo
{
public:
	Class LoadableFireworkComponent*                   LoadableProjectileComponent                        // 0x500(0x8)
	Struct StringAssetReference                        FireworkDataAsset                                  // 0x508(0x10)
	int                                                GeneratedDataRNGSeed                               // 0x518(0x4)
};


// Size 0x0
class FireworkServiceInterface: public Interface
{
public:
};


// Size 0x108
class FireworkProjectile: public LaunchableProjectile
{
public:
	Class SphereComponent*                             CollisionComponent                                 // 0x618(0x8)
	Class StaticMeshComponent*                         MeshComponent                                      // 0x620(0x8)
	Class ExplosionComponent*                          ExplosionComponent                                 // 0x628(0x8)
	Class FireworkStatsComponent*                      FireworkStatsComponent                             // 0x630(0x8)
	Class SceneComponent*                              MeshDirectionComponent                             // 0x638(0x8)
	Class ProjectileAnimationComponent*                AnimationComponent                                 // 0x640(0x8)
	Struct GeneratedFireworkData                       GeneratedFireworkData                              // 0x648(0x58)
};


// Size 0x98
class FireworkService: public Actor
{
public:
	int                                                NumberOfCachedFlares                               // 0x448(0x4)
};


// Size 0x18
class FireworksSettings: public DeveloperSettings
{
public:
	float                                              FlashbangRadius                                    // 0x38(0x4)
	float                                              FlashbangFlashTimer                                // 0x3c(0x4)
	float                                              FlashbangFadeOutTimer                              // 0x40(0x4)
	float                                              FlashbangCooldown                                  // 0x44(0x4)
	float                                              LoadedFuseTimer                                    // 0x48(0x4)
};


// Size 0x40
class FireworksSettingsDataAsset: public DataAsset
{
public:
	float                                              LoadedFuseTimer                                    // 0x28(0x4)
	Class WwiseObjectPoolWrapper*                      FuseSoundWisePool                                  // 0x30(0x8)
	Class WwiseEvent*                                  FuseActivateSoundPlayEvent                         // 0x38(0x8)
	Class WwiseEvent*                                  FuseSoundPlayEvent                                 // 0x40(0x8)
	Class WwiseEvent*                                  FuseSoundStopEvent                                 // 0x48(0x8)
	Class Object*                                      FuseParticleSystem                                 // 0x50(0x8)
	Struct StringAssetReference                        FuseMeshAssetReference                             // 0x58(0x10)
};


// Size 0xc0
class FireworkStatsComponent: public ActorComponent
{
public:
	float                                              FlareRadius                                        // 0xc8(0x4)
	int                                                NumberOfFireworksFiredAtNight                      // 0xd0(0x4)
	float                                              FireworksFiredAtNightRadius                        // 0xd4(0x4)
	float                                              FiredFireworksAtNightTimer                         // 0xd8(0x4)
};


// Size 0x0
class ImpactProjectileIdFirework: public ImpactProjectileId
{
public:
};


// Size 0x10
class LoadableFireworkComponent: public LoadableProjectileComponent
{
public:
	bool                                               ShouldProjectileTrailDoReflections                 // 0x128(0x1)
	bool                                               ShouldUseGlobalOverrideFuseTimer                   // 0x129(0x1)
	bool                                               ShouldUseGlobalOverrideFuseSfx                     // 0x12a(0x1)
	bool                                               ShouldUseGlobalOverrideFuseVfx                     // 0x12b(0x1)
	bool                                               ShouldUseGlobalOverrideFuseMesh                    // 0x12c(0x1)
	Class FireworksSettingsDataAsset*                  FireworksSettingsDataAsset                         // 0x130(0x8)
};


// Size 0x1c8
class ProjectileAnimationComponent: public ActorComponent
{
public:
	TArray<Struct Desc>                                ProjectileAnimationCurves                          // 0xc8(0x10)
	Class StaticMeshComponent*                         MeshComponent                                      // 0xd8(0x8)
	Struct RuntimeVectorCurve                          AnimationOffsetCurve                               // 0xe0(0x170)
};


}