namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x8
class AttributeSet: public Object
{
public:
};


// Size 0x0
class GameplayCueInterface: public Interface
{
public:
};


// Size 0x0
class AbilitySystemBlueprintLibrary: public BlueprintFunctionLibrary
{
public:
};


// Size 0x550
class GameplayEffect: public Object
{
public:
	byte                                               DurationPolicy                                     // 0x30(0x1)
	Struct GameplayEffectModifierMagnitude             DurationMagnitude                                  // 0x38(0x170)
	Struct ScalableFloat                               Period                                             // 0x1a8(0x20)
	bool                                               bExecutePeriodicEffectOnApplication                // 0x1c8(0x1)
	TArray<Struct bExecutePeriodicEffectOnApplication> Modifiers                                          // 0x1d0(0x10)
	TArray<Struct Modifiers>                           Executions                                         // 0x1e0(0x10)
	Struct ScalableFloat                               ChanceToApplyToTarget                              // 0x1f0(0x20)
	TArray<Class ChanceToApplyToTarget>                TargetEffectClasses                                // 0x210(0x10)
	TArray<class TargetEffects*>                       TargetEffects                                      // 0x220(0x10)
	TArray<Class TargetEffects>                        OverflowEffects                                    // 0x230(0x10)
	bool                                               bDenyOverflowApplication                           // 0x240(0x1)
	bool                                               bClearStackOnOverflow                              // 0x241(0x1)
	TArray<Class bClearStackOnOverflow>                PrematureExpirationEffectClasses                   // 0x248(0x10)
	TArray<Class PrematureExpirationEffectClasses>     RoutineExpirationEffectClasses                     // 0x258(0x10)
	bool                                               bRequireModifierSuccessToTriggerCues               // 0x268(0x1)
	TArray<Struct bRequireModifierSuccessToTriggerCues> GameplayCues                                       // 0x270(0x10)
	Class GameplayEffectUIData*                        UIData                                             // 0x280(0x8)
	Struct InheritedTagContainer                       InheritableGameplayEffectTags                      // 0x288(0x78)
	Struct GameplayTagContainer                        GameplayEffectTags                                 // 0x300(0x28)
	Struct InheritedTagContainer                       InheritableOwnedTagsContainer                      // 0x328(0x78)
	Struct GameplayTagContainer                        OwnedTagsContainer                                 // 0x3a0(0x28)
	Struct GameplayTagRequirements                     OngoingTagRequirements                             // 0x3c8(0x50)
	Struct GameplayTagRequirements                     ApplicationTagRequirements                         // 0x418(0x50)
	Struct InheritedTagContainer                       RemoveGameplayEffectsWithTags                      // 0x468(0x78)
	Struct GameplayTagContainer                        ClearTagsContainer                                 // 0x4e0(0x28)
	Struct GameplayTagRequirements                     GrantedApplicationImmunityTags                     // 0x508(0x50)
	byte                                               StackingType                                       // 0x558(0x1)
	int                                                StackLimitCount                                    // 0x55c(0x4)
	byte                                               StackDurationRefreshPolicy                         // 0x560(0x1)
	byte                                               StackPeriodResetPolicy                             // 0x561(0x1)
	TArray<Struct StackPeriodResetPolicy>              GrantedAbilities                                   // 0x568(0x10)
};


// Size 0x420
class GameplayAbility: public Object
{
public:
	Struct GameplayTagContainer                        AbilityTags                                        // 0x68(0x28)
	bool                                               bReplicateInputDirectly                            // 0xa8(0x1)
	byte                                               ReplicationPolicy                                  // 0xd0(0x1)
	byte                                               InstancingPolicy                                   // 0xd1(0x1)
	bool                                               bServerRespectsRemoteAbilityCancellation           // 0xd2(0x1)
	bool                                               bRetriggerInstancedAbility                         // 0xd3(0x1)
	Struct GameplayAbilityActivationInfo               CurrentActivationInfo                              // 0xd8(0x20)
	Struct GameplayEventData                           CurrentEventData                                   // 0xf8(0xa0)
	byte                                               NetExecutionPolicy                                 // 0x198(0x1)
	class                                              CostGameplayEffectClass                            // 0x1a0(0x8)
	Class GameplayEffect*                              CostGameplayEffect                                 // 0x1a8(0x8)
	TArray<Struct CostGameplayEffect>                  AbilityTriggers                                    // 0x1b0(0x10)
	class                                              CooldownGameplayEffectClass                        // 0x1c0(0x8)
	Class GameplayEffect*                              CooldownGameplayEffect                             // 0x1c8(0x8)
	Struct GameplayTagQuery                            CancelAbilitiesMatchingTagQuery                    // 0x1d0(0x48)
	Struct GameplayTagQuery                            ConstTagQuery                                      // 0x218(0x48)
	Struct GameplayTagContainer                        CancelAbilitiesWithTag                             // 0x260(0x28)
	Struct GameplayTagContainer                        BlockAbilitiesWithTag                              // 0x288(0x28)
	Struct GameplayTagContainer                        ActivationOwnedTags                                // 0x2b0(0x28)
	Struct GameplayTagContainer                        ActivationRequiredTags                             // 0x2d8(0x28)
	Struct GameplayTagContainer                        ActivationBlockedTags                              // 0x300(0x28)
	Struct GameplayTagContainer                        SourceRequiredTags                                 // 0x328(0x28)
	Struct GameplayTagContainer                        SourceBlockedTags                                  // 0x350(0x28)
	Struct GameplayTagContainer                        TargetRequiredTags                                 // 0x378(0x28)
	Struct GameplayTagContainer                        TargetBlockedTags                                  // 0x3a0(0x28)
	Class AnimMontage*                                 CurrentMontage                                     // 0x438(0x8)
	bool                                               bIsActive                                          // 0x440(0x1)
	bool                                               bIsCancelable                                      // 0x441(0x1)
	bool                                               bIsBlockingOtherAbilities                          // 0x442(0x1)
};


// Size 0xb70
class AbilitySystemComponent: public GameplayTasksComponent
{
public:
	TArray<Struct AttributeDefaults>                   DefaultStartingData                                // 0x130(0x10)
	TArray<class SpawnedAttributes*>                   SpawnedAttributes                                  // 0x140(0x10)
	Struct PredictionKey                               ReplicatedPredictionKey                            // 0x150(0x18)
	float                                              OutgoingDuration                                   // 0x1e0(0x4)
	float                                              IncomingDuration                                   // 0x1e4(0x4)
	Struct GameplayAbilitySpecContainer                ActivatableAbilities                               // 0x1e8(0xc0)
	TArray<class AllReplicatedInstancedAbilities*>     AllReplicatedInstancedAbilities                    // 0x2f8(0x10)
	TArray<class SpawnedTargetActors*>                 SpawnedTargetActors                                // 0x4b8(0x10)
	Struct GameplayAbilityRepAnimMontage               RepAnimMontageInfo                                 // 0x4c8(0x30)
	Struct GameplayAbilityLocalAnimMontage             LocalAnimMontageInfo                               // 0x4f8(0x30)
	Class Actor*                                       OwnerActor                                         // 0x5c8(0x8)
	Class Actor*                                       AvatarActor                                        // 0x5d0(0x8)
	Struct ActiveGameplayEffectsContainer              ActiveGameplayEffects                              // 0x5f0(0x368)
	Struct ActiveGameplayCueContainer                  ActiveGameplayCues                                 // 0x958(0xc0)
	TArray<Byte ActiveGameplayCues>                    BlockedAbilityBindings                             // 0xb48(0x10)
};


// Size 0x0
class AbilitySystemDebugHUD: public HUD
{
public:
};


// Size 0x108
class AbilitySystemGlobals: public Object
{
public:
	Struct StringClassReference                        AbilitySystemGlobalsClassName                      // 0x28(0x10)
	Struct GameplayTag                                 ActivateFailCooldownTag                            // 0x38(0x8)
	struct FName                                       ActivateFailCooldownName                           // 0x40(0x8)
	Struct GameplayTag                                 ActivateFailCostTag                                // 0x48(0x8)
	struct FName                                       ActivateFailCostName                               // 0x50(0x8)
	Struct GameplayTag                                 ActivateFailTagsBlockedTag                         // 0x58(0x8)
	struct FName                                       ActivateFailTagsBlockedName                        // 0x60(0x8)
	Struct GameplayTag                                 ActivateFailTagsMissingTag                         // 0x68(0x8)
	struct FName                                       ActivateFailTagsMissingName                        // 0x70(0x8)
	Struct GameplayTag                                 ActivateFailNetworkingTag                          // 0x78(0x8)
	struct FName                                       ActivateFailNetworkingName                         // 0x80(0x8)
	Struct FString                                     GlobalCurveTableName                               // 0x88(0x10)
	Struct FString                                     GlobalAttributeMetaDataTableName                   // 0x98(0x10)
	Struct FString                                     GlobalAttributeSetDefaultsTableName                // 0xa8(0x10)
	Struct StringAssetReference                        GlobalGameplayCueManagerName                       // 0xb8(0x10)
	TArray<Str >                                       GameplayCueNotifyPaths                             // 0xc8(0x10)
	Struct StringAssetReference                        GameplayTagResponseTableName                       // 0xd8(0x10)
	Class GameplayTagReponseTable*                     GameplayTagResponseTable                           // 0xe8(0x8)
	bool                                               PredictTargetGameplayEffects                       // 0xf0(0x1)
	Class CurveTable*                                  GlobalCurveTable                                   // 0xf8(0x8)
	Class CurveTable*                                  GlobalAttributeDefaultsTable                       // 0x100(0x8)
	Class DataTable*                                   GlobalAttributeMetaDataTable                       // 0x108(0x8)
	Class GameplayCueManager*                          GlobalGameplayCueManager                           // 0x110(0x8)
};


// Size 0x0
class AbilitySystemInterface: public Interface
{
public:
};


// Size 0x20
class AbilitySystemTestPawn: public DefaultPawn
{
public:
	Class AbilitySystemComponent*                      AbilitySystemComponent                             // 0x488(0x8)
};


// Size 0x10
class AbilityTask: public GameplayTask
{
public:
};


// Size 0x48
class AbilityTask_MoveToLocation: public AbilityTask
{
public:
	Struct Vector                                      StartLocation                                      // 0x7c(0xc)
	Struct Vector                                      TargetLocation                                     // 0x88(0xc)
	float                                              DurationOfMovement                                 // 0x94(0x4)
	Class CurveFloat*                                  LerpCurve                                          // 0xa0(0x8)
	Class CurveVector*                                 LerpCurveVector                                    // 0xa8(0x8)
};


// Size 0x18
class AbilityTask_NetworkSyncPoint: public AbilityTask
{
public:
};


// Size 0x58
class AbilityTask_PlayMontageAndWait: public AbilityTask
{
public:
};


// Size 0x30
class AbilityTask_Repeat: public AbilityTask
{
public:
};


// Size 0x30
class AbilityTask_SpawnActor: public AbilityTask
{
public:
};


// Size 0x38
class AbilityTask_StartAbilityState: public AbilityTask
{
public:
};


// Size 0x20
class GameplayAbilityWorldReticle: public Actor
{
public:
	Struct WorldReticleParameters                      Parameters                                         // 0x3d0(0xc)
	bool                                               bFaceOwnerFlat                                     // 0x3dc(0x1)
	bool                                               bSnapToTargetedActor                               // 0x3dd(0x1)
	bool                                               bIsTargetValid                                     // 0x3de(0x1)
	bool                                               bIsTargetAnActor                                   // 0x3df(0x1)
	Class PlayerController*                            MasterPC                                           // 0x3e0(0x8)
	Class Actor*                                       TargetingActor                                     // 0x3e8(0x8)
};


// Size 0x120
class GameplayAbilityTargetActor: public Actor
{
public:
	bool                                               ShouldProduceTargetDataOnServer                    // 0x3d0(0x1)
	Struct GameplayAbilityTargetingLocationInfo        StartLocation                                      // 0x3e0(0x70)
	Class PlayerController*                            MasterPC                                           // 0x480(0x8)
	Class GameplayAbility*                             OwningAbility                                      // 0x488(0x8)
	bool                                               bDestroyOnConfirmation                             // 0x490(0x1)
	Class Actor*                                       SourceActor                                        // 0x498(0x8)
	Struct WorldReticleParameters                      ReticleParams                                      // 0x4a0(0xc)
	class                                              ReticleClass                                       // 0x4b0(0x8)
	Struct GameplayTargetDataFilterHandle              Filter                                             // 0x4b8(0x18)
	bool                                               bDebug                                             // 0x4d0(0x1)
};


// Size 0x28
class AbilityTask_VisualizeTargeting: public AbilityTask
{
public:
};


// Size 0x30
class AbilityTask_WaitAbilityActivate: public AbilityTask
{
public:
};


// Size 0x30
class AbilityTask_WaitAbilityCommit: public AbilityTask
{
public:
};


// Size 0x40
class AbilityTask_WaitAttributeChange: public AbilityTask
{
public:
};


// Size 0x18
class AbilityTask_WaitCancel: public AbilityTask
{
public:
};


// Size 0x20
class AbilityTask_WaitConfirm: public AbilityTask
{
public:
};


// Size 0x28
class AbilityTask_WaitConfirmCancel: public AbilityTask
{
public:
};


// Size 0x18
class AbilityTask_WaitDelay: public AbilityTask
{
public:
};


// Size 0xc8
class AbilityTask_WaitGameplayEffectApplied: public AbilityTask
{
public:
};


// Size 0x18
class AbilityTask_WaitGameplayEffectApplied_Self: public AbilityTask_WaitGameplayEffectApplied
{
public:
};


// Size 0x18
class AbilityTask_WaitGameplayEffectApplied_Target: public AbilityTask_WaitGameplayEffectApplied
{
public:
};


// Size 0x30
class AbilityTask_WaitGameplayEffectRemoved: public AbilityTask
{
public:
};


// Size 0x20
class AbilityTask_WaitGameplayTag: public AbilityTask
{
public:
};


// Size 0x10
class AbilityTask_WaitGameplayTagAdded: public AbilityTask_WaitGameplayTag
{
public:
};


// Size 0x10
class AbilityTask_WaitGameplayTagRemoved: public AbilityTask_WaitGameplayTag
{
public:
};


// Size 0x20
class AbilityTask_WaitInputPress: public AbilityTask
{
public:
};


// Size 0x20
class AbilityTask_WaitInputRelease: public AbilityTask
{
public:
};


// Size 0x20
class AbilityTask_WaitMovementModeChange: public AbilityTask
{
public:
};


// Size 0x10
class AbilityTask_WaitOverlap: public AbilityTask
{
public:
};


// Size 0x40
class AbilityTask_WaitTargetData: public AbilityTask
{
public:
};


// Size 0x28
class AbilityTask_WaitVelocityChange: public AbilityTask
{
public:
	Class MovementComponent*                           CachedMovementComponent                            // 0x78(0x8)
};


// Size 0x40
class AbilitySystemTestAttributeSet: public AttributeSet
{
public:
	float                                              MaxHealth                                          // 0x30(0x4)
	float                                              Health                                             // 0x34(0x4)
	float                                              Mana                                               // 0x38(0x4)
	float                                              MaxMana                                            // 0x3c(0x4)
	float                                              Damage                                             // 0x40(0x4)
	float                                              SpellDamage                                        // 0x44(0x4)
	float                                              PhysicalDamage                                     // 0x48(0x4)
	float                                              CritChance                                         // 0x4c(0x4)
	float                                              CritMultiplier                                     // 0x50(0x4)
	float                                              ArmorDamageReduction                               // 0x54(0x4)
	float                                              DodgeChance                                        // 0x58(0x4)
	float                                              LifeSteal                                          // 0x5c(0x4)
	float                                              Strength                                           // 0x60(0x4)
	float                                              StackingAttribute1                                 // 0x64(0x4)
	float                                              StackingAttribute2                                 // 0x68(0x4)
	float                                              NoStackAttribute                                   // 0x6c(0x4)
};


// Size 0x0
class GameplayAbility_CharacterJump: public GameplayAbility
{
public:
};


// Size 0x38
class GameplayAbility_Montage: public GameplayAbility
{
public:
	Class AnimMontage*                                 MontageToPlay                                      // 0x448(0x8)
	float                                              PlayRate                                           // 0x450(0x4)
	struct FName                                       SectionName                                        // 0x454(0x8)
	TArray<Class SectionName>                          GameplayEffectClassesWhileAnimating                // 0x460(0x10)
	TArray<class GameplayEffectsWhileAnimating*>       GameplayEffectsWhileAnimating                      // 0x470(0x10)
};


// Size 0x0
class GameplayAbilityBlueprint: public Blueprint
{
public:
};


// Size 0x0
class GameplayAbilityBlueprintGeneratedClass: public BlueprintGeneratedClass
{
public:
};


// Size 0x10
class GameplayAbilitySet: public DataAsset
{
public:
	TArray<Struct Radius>                              Abilities                                          // 0x28(0x10)
};


// Size 0x0
class GameplayAbilityTargetActor_Radius: public GameplayAbilityTargetActor
{
public:
	float                                              Radius                                             // 0x4e8(0x4)
};


// Size 0x10
class GameplayAbilityTargetActor_Trace: public GameplayAbilityTargetActor
{
public:
	float                                              MaxRange                                           // 0x4e8(0x4)
	Struct CollisionProfileName                        TraceProfile                                       // 0x4ec(0x8)
	bool                                               bTraceAffectsAimPitch                              // 0x4f4(0x1)
};


// Size 0x20
class GameplayAbilityTargetActor_GroundTrace: public GameplayAbilityTargetActor_Trace
{
public:
	float                                              CollisionRadius                                    // 0x500(0x4)
	float                                              CollisionHeight                                    // 0x504(0x4)
};


// Size 0x20
class GameplayAbilityTargetActor_ActorPlacement: public GameplayAbilityTargetActor_GroundTrace
{
public:
	class                                              PlacedActorClass                                   // 0x520(0x8)
	Class MaterialInterface*                           PlacedActorMaterial                                // 0x528(0x8)
};


// Size 0x0
class GameplayAbilityTargetActor_SingleLineTrace: public GameplayAbilityTargetActor_Trace
{
public:
};


// Size 0x18
class GameplayAbilityWorldReticle_ActorVisualization: public GameplayAbilityWorldReticle
{
public:
	Class CapsuleComponent*                            CollisionComponent                                 // 0x3f0(0x8)
	TArray<class VisualizationComponents*>             VisualizationComponents                            // 0x3f8(0x10)
};


// Size 0x158
class GameplayCueManager: public DataAsset
{
public:
	Class GameplayCueSet*                              GlobalCueSet                                       // 0x28(0x8)
	Class ObjectLibrary*                               GameplayCueNotifyActorObjectLibrary                // 0x30(0x8)
	Class ObjectLibrary*                               GameplayCueNotifyStaticObjectLibrary               // 0x38(0x8)
	Struct StreamableManager                           StreamableManager                                  // 0x40(0xc0)
	TArray<Struct StreamableManager>                   PendingExecuteCues                                 // 0x160(0x10)
	int                                                GameplayCueSendContextCount                        // 0x170(0x4)
};


// Size 0x20
class GameplayCueNotify_Actor: public Actor
{
public:
	Struct GameplayTag                                 GameplayCueTag                                     // 0x3d0(0x8)
	struct FName                                       GameplayCueName                                    // 0x3d8(0x8)
	bool                                               bAutoDestroyOnRemove                               // 0x3e0(0x1)
	float                                              AutoDestroyDelay                                   // 0x3e4(0x4)
	bool                                               IsOverride                                         // 0x3e8(0x1)
	bool                                               bUniqueInstancePerInstigator                       // 0x3e9(0x1)
	bool                                               bUniqueInstancePerSourceObject                     // 0x3ea(0x1)
};


// Size 0x18
class GameplayCueNotify_Static: public Object
{
public:
	Struct GameplayTag                                 GameplayCueTag                                     // 0x28(0x8)
	struct FName                                       GameplayCueName                                    // 0x30(0x8)
	bool                                               IsOverride                                         // 0x38(0x1)
};


// Size 0x10
class GameplayCueNotify_HitImpact: public GameplayCueNotify_Static
{
public:
	Class SoundBase*                                   Sound                                              // 0x40(0x8)
	Class ParticleSystem*                              ParticleSystem                                     // 0x48(0x8)
};


// Size 0x60
class GameplayCueSet: public DataAsset
{
public:
	TArray<Struct RelevantAttributesToCapture>         GameplayCueData                                    // 0x28(0x10)
};


// Size 0x0
class GameplayEffectTemplate: public GameplayEffect
{
public:
};


// Size 0x10
class GameplayEffectCalculation: public Object
{
public:
	TArray<Struct Execute>                             RelevantAttributesToCapture                        // 0x28(0x10)
};


// Size 0x8
class GameplayEffectExecutionCalculation: public GameplayEffectCalculation
{
public:
	bool                                               bRequiresPassedInTags                              // 0x38(0x1)
};


// Size 0x0
class GameplayModMagnitudeCalculation: public GameplayEffectCalculation
{
public:
};


// Size 0x20
class GameplayEffectExtension: public Object
{
public:
	TArray<Struct HealthRestoreGameplayEffect>         RelevantSourceAttributes                           // 0x28(0x10)
	TArray<Struct RelevantSourceAttributes>            RelevantTargetAttributes                           // 0x38(0x10)
};


// Size 0x8
class GameplayEffectExtension_LifestealTest: public GameplayEffectExtension
{
public:
	Class GameplayEffect*                              HealthRestoreGameplayEffect                        // 0x48(0x8)
};


// Size 0x8
class GameplayEffectExtension_ShieldTest: public GameplayEffectExtension
{
public:
	Class GameplayEffect*                              ShieldRemoveGameplayEffect                         // 0x48(0x8)
};


// Size 0x0
class GameplayEffectUIData: public Object
{
public:
};


// Size 0x38
class GameplayEffectUIData_TextOnly: public GameplayEffectUIData
{
public:
	Struct FText                                       Description                                        // 0x28(0x38)
};


// Size 0x60
class GameplayTagReponseTable: public DataAsset
{
public:
	TArray<Struct GameView5>                           Entries                                            // 0x28(0x10)
};


// Size 0x0
class TickableAttributeSetInterface: public Interface
{
public:
};


}