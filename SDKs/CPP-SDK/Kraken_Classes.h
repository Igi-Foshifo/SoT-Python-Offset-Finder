// Generated by DougTheDruid#2784 on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x138 (Full Size[0x500] - InheritedSize[0x3c8]
class KrakenTentacle: public Actor
{
public:
	char                                                         pad0x20_9MS7M[0x20];                               // 0x3c8(0x20)
	Class HealthComponent*                                       HealthComponent;                                   // 0x3e8(0x8)
	Class ActorDamageableComponent*                              DamageableComponent;                               // 0x3f0(0x8)
	Class VenomComponent*                                        VenomComponent;                                    // 0x3f8(0x8)
	float                                                        VenomChance;                                       // 0x400(0x4)
	char                                                         pad0x104_2DJ0R[0x104];                             // 0x402(0x104)
};


// Size 0xa0 (Full Size[0x468] - InheritedSize[0x3c8]
class Murk: public Actor
{
public:
	Class MurkWaterModifierZoneComponent*                        WaterModifierZone;                                 // 0x3c8(0x8)
	Class SceneComponent*                                        SceneRootComponent;                                // 0x3d0(0x8)
	Class StaticMeshComponent*                                   InnerSheet;                                        // 0x3d8(0x8)
	Class StaticMeshComponent*                                   OuterSheet;                                        // 0x3e0(0x8)
	float                                                        UnderwaterSheetHeightScale;                        // 0x3e8(0x4)
	char                                                         pad0x4_SYZIM[0x4];                                 // 0x3ec(0x4)
	Class MaterialInstanceDynamic*                               InnerSheetMaterialInstance;                        // 0x3f0(0x8)
	Class MaterialInstanceDynamic*                               OuterSheetMaterialInstance;                        // 0x3f8(0x8)
	char                                                         pad0x78_27HAP[0x78];                               // 0x3fe(0x78)
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class CoordinatedKrakenInterface: public Interface
{
public:
};


// Size 0x28 (Full Size[0x50] - InheritedSize[0x28]
class CoordinatedKrakenPhaseActionsDataAsset: public DataAsset
{
public:
	TArray<Int TentaclesUsed>                                    TentaclesUsed;                                     // 0x28(0x10)
	bool                                                         KrakenHeadUsed;                                    // 0x38(0x1)
	char                                                         pad0x7_7HFTS[0x7];                                 // 0x39(0x7)
	TArray<struct Actions>                                       Actions;                                           // 0x40(0x10)
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class EnvQueryContext_AllKrakenOccupiedLocations: public EnvQueryContext
{
public:
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class EnvQueryContext_AllocatedShip: public EnvQueryContext
{
public:
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class EnvQueryContext_AllShipsInWorld: public EnvQueryContext
{
public:
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class EnvQueryContext_AllWatercraftsInWorld: public EnvQueryContext
{
public:
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class EnvQueryContext_PreviousLocation: public EnvQueryContext
{
public:
};


// Size 0x0 (Full Size[0x58] - InheritedSize[0x58]
class EnvQueryGenerator_KrakenSpawnLocations: public EnvQueryGenerator
{
public:
};


// Size 0x0 (Full Size[0x58] - InheritedSize[0x58]
class EnvQueryGenerator_KrakenTentacleSpawnLocations: public EnvQueryGenerator
{
public:
};


// Size 0x1f0 (Full Size[0x6f0] - InheritedSize[0x500]
class KrakenShipWrappingTentacle: public KrakenTentacle
{
public:
	Class SceneComponent*                                        SceneRoot;                                         // 0x500(0x8)
	Class StaticMeshComponent*                                   TentacleCollisions;                                // 0x508(0x8)
	Class StaticMeshComponent*                                   TentacleMesh;                                      // 0x510(0x8)
	Class BoxComponent*                                          DamageZone;                                        // 0x518(0x8)
	Class SceneComponent*                                        InteractableBlockingRegions;                       // 0x520(0x8)
	Class SceneComponent*                                        KnockbackRegions;                                  // 0x528(0x8)
	Class BoxComponent*                                          TentacleHeadCollisions;                            // 0x530(0x8)
	Class SceneComponent*                                        TentacleHeadKnockbackRegions;                      // 0x538(0x8)
	Class KrakenShipWrappingTentacleAIAudioComponent*            AudioComponent;                                    // 0x540(0x8)
	Class StaticMesh*                                            LowDetailTentacleMesh;                             // 0x548(0x8)
	Struct StringAssetReference                                  HighDetailTentacleMeshAsset;                       // 0x550(0x10)
	Struct KrakenShipWrappingTentacleParams                      Params;                                            // 0x560(0xf0)
	Class MaterialInstanceDynamic*                               TentacleDynamicMaterialInstance;                   // 0x650(0x8)
	Class StaticMesh*                                            HighDetailTentacleMesh;                            // 0x658(0x8)
	Struct KrakenShipWrappingTentacleAnimationState              CurrentServerAnimationState;                       // 0x660(0x10)
	Struct KrakenShipWrappingTentacleAnimationState              PendingServerAnimationState;                       // 0x670(0x10)
	char                                                         pad0x90_M8XD5[0x90];                               // 0x67e(0x90)
};


// Size 0x108 (Full Size[0x1d0] - InheritedSize[0xc8]
class KrakenTelemetryComponent: public ActorComponent
{
public:
};


// Size 0x578 (Full Size[0x940] - InheritedSize[0x3c8]
class Kraken: public Actor
{
public:
	char                                                         pad0x18_DWD4Q[0x18];                               // 0x3c8(0x18)
	float                                                        RelevancyDistance;                                 // 0x3e0(0x4)
	char                                                         pad0x14_VIIKB[0x14];                               // 0x3e4(0x14)
	float                                                        InnerRadius;                                       // 0x3f8(0x4)
	float                                                        OuterRadius;                                       // 0x3fc(0x4)
	float                                                        AreaOfEffectOfShipHitAttack;                       // 0x400(0x4)
	byte                                                         CollisionChannelForGunpowderKegs;                  // 0x404(0x1)
	byte                                                         CurrentState;                                      // 0x405(0x1)
	char                                                         pad0x1b2_10G2S[0x1b2];                             // 0x406(0x1b2)
	Class Murk*                                                  MurkActor;                                         // 0x5b8(0x8)
	char                                                         pad0xb8_U5F9H[0xb8];                               // 0x5c0(0xb8)
	Class KrakenAICharacterAudioComponent*                       KrakenAudioComponent;                              // 0x678(0x8)
	Class KrakenTelemetryComponent*                              KrakenTelemetryComponent;                          // 0x680(0x8)
	Struct EncounterParams                                       SightingEncounterParams;                           // 0x688(0xc)
	Struct EncounterParams                                       CloseEncounterParams;                              // 0x694(0xc)
	char                                                         pad0x10_MZ45U[0x10];                               // 0x6a0(0x10)
	Struct KrakenParams                                          Params;                                            // 0x6b0(0x160)
	int                                                          NumTentaclesRemaining;                             // 0x810(0x4)
	char                                                         pad0x134_4BQE3[0x134];                             // 0x812(0x134)
};


// Size 0x30 (Full Size[0x58] - InheritedSize[0x28]
class KrakenAnimatedTentacleAnimationDataAsset: public DataAsset
{
public:
	Class KrakenAnimatedTentacleAnimationSpecDataAsset*          AnimationSpec;                                     // 0x28(0x8)
	float                                                        FrameTimeDelta;                                    // 0x30(0x4)
	float                                                        AnimationLength;                                   // 0x34(0x4)
	int                                                          NumFrames;                                         // 0x38(0x4)
	bool                                                         AllowLookAround;                                   // 0x3c(0x1)
	bool                                                         RequiresWaterHeightQuery;                          // 0x3d(0x1)
	char                                                         pad0x2_I8PV7[0x2];                                 // 0x3e(0x2)
	float                                                        AnimationPlayRateScale;                            // 0x40(0x4)
	char                                                         pad0x4_AFYYX[0x4];                                 // 0x44(0x4)
	TArray<struct Bones>                                         Bones;                                             // 0x48(0x10)
};


// Size 0x10 (Full Size[0x38] - InheritedSize[0x28]
class KrakenAnimatedTentacleAnimationMappingDataAsset: public DataAsset
{
public:
	TArray<struct Animations>                                    Animations;                                        // 0x28(0x10)
};


// Size 0x10 (Full Size[0x38] - InheritedSize[0x28]
class KrakenAnimatedTentacleAnimationSpecDataAsset: public DataAsset
{
public:
	TArray<struct Bones>                                         Bones;                                             // 0x28(0x10)
};


// Size 0x30 (Full Size[0x58] - InheritedSize[0x28]
class KrakenAnimatedTentacleStateAnimationsDataAsset: public DataAsset
{
public:
	char                                                         pad0x20_L65I1[0x20];                               // 0x28(0x20)
	TArray<struct States>                                        States;                                            // 0x48(0x10)
};


// Size 0x10 (Full Size[0x38] - InheritedSize[0x28]
class KrakenHeadStateAnimationsDataAsset: public DataAsset
{
public:
	TArray<struct States>                                        States;                                            // 0x28(0x10)
};


// Size 0x208 (Full Size[0x5d0] - InheritedSize[0x3c8]
class KrakenHead: public Actor
{
public:
	char                                                         pad0x10_82OSZ[0x10];                               // 0x3c8(0x10)
	Class SkeletalMeshComponent*                                 SkeletalMesh;                                      // 0x3d8(0x8)
	Class HealthComponent*                                       HealthComponent;                                   // 0x3e0(0x8)
	Class ActorDamageableComponent*                              ActorDamageableComponent;                          // 0x3e8(0x8)
	Class SphereComponent*                                       SphereComponent;                                   // 0x3f0(0x8)
	Class VenomComponent*                                        VenomComponent;                                    // 0x3f8(0x8)
	Class ExplosionComponent*                                    ExplosionComponent;                                // 0x400(0x8)
	Class ParticleSystem*                                        BiteAttackVFX;                                     // 0x408(0x8)
	TArray<struct BreathingInContinuousStatusesToApply>          BreathingInContinuousStatusesToApply;              // 0x410(0x10)
	float                                                        BreatheInStatusDuration;                           // 0x420(0x4)
	char                                                         pad0x4_RARTR[0x4];                                 // 0x424(0x4)
	TArray<struct RoarContinuousStatusesToApply>                 RoarContinuousStatusesToApply;                     // 0x428(0x10)
	float                                                        RoarStatusDuration;                                // 0x438(0x4)
	char                                                         pad0x4_2IH0J[0x4];                                 // 0x43c(0x4)
	Class EnvQuery*                                              RoarEQSQuery;                                      // 0x440(0x8)
	class                                                        KnockbackDamagerType;                              // 0x448(0x8)
	Struct KnockBackInfo                                         RoarKnockbackInfo;                                 // 0x450(0x50)
	Class KrakenHeadAnimationInstance*                           HeadAnimInstance;                                  // 0x4a0(0x8)
	Struct Vector                                                EQSQuerierLocation;                                // 0x4a8(0xc)
	char                                                         pad0x4_UKH6K[0x4];                                 // 0x4b4(0x4)
	Class KrakenHeadHealthParamsDataAsset*                       KrakenHeadHealthParams;                            // 0x4b8(0x8)
	Struct HeadStateChangeRequest                                HeadStateRequest;                                  // 0x4c0(0x18)
	bool                                                         IsDamageEnabled;                                   // 0x4d8(0x1)
	char                                                         pad0x7_UQ9Z4[0x7];                                 // 0x4d9(0x7)
	Class SceneComponent*                                        Root;                                              // 0x4e0(0x8)
	char                                                         pad0xc0_3QCUI[0xc0];                               // 0x4e8(0xc0)
	struct FName                                                 BiteAttackImpactNamedPointsGroupName;              // 0x5a8(0x8)
	char                                                         pad0x30_R8QWH[0x30];                               // 0x5ae(0x30)
};


// Size 0x60 (Full Size[0x4a0] - InheritedSize[0x440]
class KrakenHeadAnimationInstance: public AnimInstance
{
public:
	class                                                        CurrentState;                                      // 0x440(0x8)
	class                                                        PreviousState;                                     // 0x448(0x8)
	Class KrakenHeadStateAnimationsDataAsset*                    MappingAsset;                                      // 0x450(0x8)
	float                                                        SpawnBlendTime;                                    // 0x458(0x4)
	float                                                        DefaultBlendTime;                                  // 0x45c(0x4)
	bool                                                         IsInIntro;                                         // 0x460(0x1)
	char                                                         pad0x7_FSGVI[0x7];                                 // 0x461(0x7)
	Class AnimMontage*                                           PlayingMontage;                                    // 0x468(0x8)
	char                                                         pad0x10_5ABT7[0x10];                               // 0x470(0x10)
	Class KrakenHeadHitReactAnimationsDataAsset*                 KrakenHeadHitReactionAsset;                        // 0x480(0x8)
	char                                                         pad0x28_7SAOR[0x28];                               // 0x486(0x28)
};


// Size 0x0 (Full Size[0x30] - InheritedSize[0x30]
class KrakenHeadBreathingInStatus: public StatusBase
{
public:
};


// Size 0x10 (Full Size[0x38] - InheritedSize[0x28]
class KrakenHeadHealthParamsDataAsset: public DataAsset
{
public:
	TArray<struct KrakenHeadHealthPairs>                         KrakenHeadHealthPairs;                             // 0x28(0x10)
};


// Size 0x10 (Full Size[0x38] - InheritedSize[0x28]
class KrakenHeadHitReactAnimationsDataAsset: public DataAsset
{
public:
	TArray<struct HitReactionAnimations>                         HitReactionAnimations;                             // 0x28(0x10)
};


// Size 0x0 (Full Size[0x30] - InheritedSize[0x30]
class KrakenHeadRoaringStatus: public StatusBase
{
public:
};


// Size 0xc0 (Full Size[0xe8] - InheritedSize[0x28]
class KrakenIdleBehaviourParamsDataAsset: public DataAsset
{
public:
	Struct KrakenIdleBehaviourParams                             Params;                                            // 0x28(0xc0)
};


// Size 0x160 (Full Size[0x188] - InheritedSize[0x28]
class KrakenParamsDataAsset: public DataAsset
{
public:
	Struct KrakenParams                                          Params;                                            // 0x28(0x160)
};


// Size 0xe8 (Full Size[0x110] - InheritedSize[0x28]
class KrakenPlayerGrabbingBehaviourParamsDataAsset: public DataAsset
{
public:
	Struct KrakenPlayerGrabbingBehaviourParams                   Params;                                            // 0x28(0xe8)
};


// Size 0x1c8 (Full Size[0x590] - InheritedSize[0x3c8]
class KrakenService: public Actor
{
public:
	char                                                         pad0x8_ZS0MS[0x8];                                 // 0x3c8(0x8)
	Struct KrakenServiceParams                                   KrakenServiceParams;                               // 0x3d0(0x38)
	char                                                         pad0xa0_7FDI3[0xa0];                               // 0x408(0xa0)
	Class Kraken*                                                Kraken;                                            // 0x4a8(0x8)
	char                                                         pad0xf0_JFFHT[0xf0];                               // 0x4ae(0xf0)
};


// Size 0x38 (Full Size[0x60] - InheritedSize[0x28]
class KrakenServiceParamsDataAsset: public DataAsset
{
public:
	Struct KrakenServiceParams                                   Params;                                            // 0x28(0x38)
};


// Size 0x60 (Full Size[0x88] - InheritedSize[0x28]
class KrakenShipHittingBehaviourParamsDataAsset: public DataAsset
{
public:
	Struct KrakenShipHittingBehaviourParams                      Params;                                            // 0x28(0x60)
};


// Size 0x428 (Full Size[0x450] - InheritedSize[0x28]
class KrakenShipWrappingBehaviourParamsDataAsset: public DataAsset
{
public:
	char                                                         pad0x8_DWYF1[0x8];                                 // 0x28(0x8)
	Struct KrakenShipWrappingBehaviourParams                     Params;                                            // 0x30(0x420)
};


// Size 0xa0 (Full Size[0x380] - InheritedSize[0x2e0]
class KrakenShipWrappingKnockbackRegionComponent: public SceneComponent
{
public:
	Class BoxComponent*                                          KnockbackRegion;                                   // 0x2e0(0x8)
	Struct Vector                                                KnockbackDirection;                                // 0x2e8(0xc)
	float                                                        KnockbackTime;                                     // 0x2f4(0x4)
	Struct KnockBackInfo                                         KnockbackParams;                                   // 0x2f8(0x50)
	char                                                         pad0xd8_XBTRU[0xd8];                               // 0x346(0xd8)
};


}