namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x0
class AreaOfEffectHealAIAbilityType: public AthenaAIAbilityType
{
public:
};


// Size 0x0
class MeleeAIAbilityType: public AthenaAIAbilityType
{
public:
};


// Size 0x28
class AreaOfEffectHealAIAbility: public AthenaAIAbility
{
public:
	Class Actor*                                       HealAreaOfEffectActor                              // 0x88(0x8)
};


// Size 0x18
class AreaOfEffectHealAIAbilityParams: public AthenaAIAbilityParams
{
public:
	float                                              ChanceToGoOnCooldownInsteadOfExecuting             // 0xc8(0x4)
	float                                              HealthPercentageThresholdToHeal                    // 0xcc(0x4)
	class                                              StatusEffectZone                                   // 0xd0(0x8)
	float                                              MinimumTimeSpentHealing                            // 0xd8(0x4)
	float                                              MaximumTimeSpentHealing                            // 0xdc(0x4)
};


// Size 0x0
class AshenFireStatus: public StatusBase
{
public:
};


// Size 0x0
class BullRushAIAbilityType: public AthenaAIAbilityType
{
public:
};


// Size 0x0
class BurrowEruptDamagerType: public DamagerType
{
public:
};


// Size 0x50
class BurrowHealVFXComponent: public ActorComponent
{
public:
	Class ParticleSystem*                              VFXAsset                                           // 0xc8(0x8)
	struct FName                                       VfxSocketName                                      // 0xd0(0x8)
	float                                              VFXDuration                                        // 0xd8(0x4)
	Class ParticleSystemComponent*                     SpawnedVFXSystem                                   // 0xe0(0x8)
	bool                                               IsVFXActive                                        // 0xe8(0x1)
};


// Size 0x0
class CoralShieldStatus: public StatusBase
{
public:
};


// Size 0x0
class EelSlapAIAbilityType: public AthenaAIAbilityType
{
public:
};


// Size 0x0
class EelSlapStatus: public StatusBase
{
public:
};


// Size 0x8
class EelThrowAIAbility: public AthenaAIAbility
{
public:
	Class BlackboardComponent*                         CachedBlackboardComponent                          // 0x78(0x8)
};


// Size 0x20
class EelThrowAIAbilityParams: public AthenaAIAbilityParams
{
public:
	Struct WeightedProbabilityRange                    MinMaxNumberOfAttacksBeforeEnd                     // 0xc8(0x20)
};


// Size 0x0
class EelThrowAIAbilityType: public AthenaAIAbilityType
{
public:
};


// Size 0x0
class ElectricShieldBuffInterface: public Interface
{
public:
};


// Size 0xf0
class ElectricShieldBuffComponent: public ActorComponent
{
public:
	Class ParticleSystem*                              ShieldVFXAsset                                     // 0xd0(0x8)
	struct FName                                       VfxSocketName                                      // 0xd8(0x8)
	Class WwiseEvent*                                  StartAudioLoopEvent                                // 0xe0(0x8)
	Class WwiseEvent*                                  StopAudioLoopEvent                                 // 0xe8(0x8)
	bool                                               IsShieldActive                                     // 0xf0(0x1)
	Class ParticleSystemComponent*                     ShieldEffectComponent                              // 0xf8(0x8)
};


// Size 0x0
class ElectricShieldStatus: public StatusBase
{
public:
};


// Size 0x0
class ImpactMeleeAttackEelSlapId: public ImpactProjectileId
{
public:
};


// Size 0x8
class MeleeAIAbility: public AthenaAIAbility
{
public:
};


// Size 0x0
class MeleeAttackId: public Object
{
public:
};


// Size 0x10
class MeleeAIAbilityParams: public AthenaAIAbilityParams
{
public:
	TArray<Struct AngleChecker>                        MeleeAttacks                                       // 0xc8(0x10)
};


// Size 0x0
class EelSlapAIAbilityParams: public MeleeAIAbilityParams
{
public:
};


// Size 0x0
class EelSlapAIAbility: public MeleeAIAbility
{
public:
};


// Size 0x0
class ComboMeleeAttackId: public MeleeAttackId
{
public:
};


// Size 0x0
class HeavyMeleeAttackId: public MeleeAttackId
{
public:
};


// Size 0x0
class LightMeleeAttackId: public MeleeAttackId
{
public:
};


// Size 0x20
class BullRushAIAbilityParams: public MeleeChargeAIAbilityParams
{
public:
	float                                              StaticCollisionWarmup                              // 0xe0(0x4)
	TArray<class ValidatorEQSystems*>                  ValidatorEQSystems                                 // 0xe8(0x10)
	float                                              TimeBetweenCanExecuteChecks                        // 0xf8(0x4)
};


// Size 0x20
class BullRushAIAbility: public MeleeChargeAIAbility
{
public:
	Class World*                                       CachedWorld                                        // 0x98(0x8)
};


// Size 0x0
class MeleeCollisionAwarenessInterface: public Interface
{
public:
};


// Size 0x0
class SporeCloudStatus: public StatusBase
{
public:
};


// Size 0x0
class SporeExposureInterface: public Interface
{
public:
};


// Size 0x38
class SporeExposureComponent: public ActorComponent
{
public:
};


// Size 0x0
class SporeExposureStatus: public StatusBase
{
public:
};


// Size 0x8
class StatusResponseActivateElectricShield: public StatusResponse
{
public:
	float                                              Duration                                           // 0x30(0x4)
};


// Size 0x0
class StatusResponseShowBurrowHealVFX: public StatusResponse
{
public:
};


// Size 0x0
class StatusResponseShowCoralShieldVFX: public StatusResponse
{
public:
};


// Size 0x0
class StatusResponseSporeCloud: public StatusResponse
{
public:
};


}