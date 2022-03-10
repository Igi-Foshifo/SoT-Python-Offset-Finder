namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x300
class ActiveGameplayEffect: public None
{
public:
	Struct GameplayEffectSpec                          Spec                                               // 0x10(0x2a0)
	Struct PredictionKey                               PredictionKey                                      // 0x2b0(0x18)
	float                                              StartServerWorldTime                               // 0x2c8(0x4)
	float                                              CachedStartServerWorldTime                         // 0x2cc(0x4)
	float                                              StartWorldTime                                     // 0x2d0(0x4)
	bool                                               bIsInhibited                                       // 0x2d4(0x1)
};


// Size 0x18
class PredictionKey: public None
{
public:
	Class PackageMap*                                  PredictiveConnection                               // 0x8(0x8)
	bool                                               bIsStale                                           // 0x10(0x1)
	bool                                               bIsServerInitiated                                 // 0x11(0x1)
};


// Size 0x2a0
class GameplayEffectSpec: public None
{
public:
	Class GameplayEffect*                              Def                                                // 0x0(0x8)
	TArray<Struct GameplayEffectModifiedAttribute>     ModifiedAttributes                                 // 0x8(0x10)
	Struct GameplayEffectAttributeCaptureSpecContainer CapturedRelevantAttributes                         // 0x18(0x28)
	float                                              Duration                                           // 0x50(0x4)
	float                                              Period                                             // 0x54(0x4)
	float                                              ChanceToApplyToTarget                              // 0x58(0x4)
	Struct TagContainerAggregator                      CapturedSourceTags                                 // 0x60(0xa8)
	Struct TagContainerAggregator                      CapturedTargetTags                                 // 0x108(0xa8)
	Struct GameplayTagContainer                        DynamicGrantedTags                                 // 0x1b0(0x28)
	Struct GameplayTagContainer                        DynamicAssetTags                                   // 0x1d8(0x28)
	TArray<Struct ModifierSpec>                        Modifiers                                          // 0x200(0x10)
	int                                                StackCount                                         // 0x210(0x4)
	bool                                               bCompletedSourceAttributeCapture                   // 0x214(0x1)
	bool                                               bCompletedTargetAttributeCapture                   // 0x214(0x1)
	bool                                               bDurationLocked                                    // 0x214(0x1)
	TArray<Struct GameplayAbilitySpecDef>              GrantedAbilitySpecs                                // 0x218(0x10)
	Struct GameplayEffectContextHandle                 EffectContext                                      // 0x278(0x20)
	float                                              Level                                              // 0x298(0x4)
};


// Size 0x20
class GameplayEffectContextHandle: public None
{
public:
};


// Size 0x28
class GameplayAbilitySpecDef: public None
{
public:
	class                                              Ability                                            // 0x0(0x8)
	int                                                Level                                              // 0x8(0x4)
	int                                                InputID                                            // 0xc(0x4)
	byte                                               RemovalPolicy                                      // 0x10(0x1)
	Class Object*                                      SourceObject                                       // 0x18(0x8)
	Struct GameplayAbilitySpecHandle                   AssignedHandle                                     // 0x20(0x4)
};


// Size 0x4
class GameplayAbilitySpecHandle: public None
{
public:
	int                                                Handle                                             // 0x0(0x4)
};


// Size 0x4
class ModifierSpec: public None
{
public:
	float                                              EvaluatedMagnitude                                 // 0x0(0x4)
};


// Size 0xa8
class TagContainerAggregator: public None
{
public:
	Struct GameplayTagContainer                        CapturedActorTags                                  // 0x0(0x28)
	Struct GameplayTagContainer                        CapturedSpecTags                                   // 0x28(0x28)
	Struct GameplayTagContainer                        ScopedTags                                         // 0x50(0x28)
};


// Size 0x28
class GameplayEffectAttributeCaptureSpecContainer: public None
{
public:
	TArray<Struct ModifiedAttributes>                  SourceAttributes                                   // 0x0(0x10)
	TArray<Struct GameplayEffectAttributeCaptureSpec>  TargetAttributes                                   // 0x10(0x10)
	bool                                               bHasNonSnapshottedAttributes                       // 0x20(0x1)
};


// Size 0x28
class GameplayEffectAttributeCaptureSpec: public None
{
public:
	Struct GameplayEffectAttributeCaptureDefinition    BackingDefinition                                  // 0x0(0x10)
};


// Size 0x10
class GameplayEffectAttributeCaptureDefinition: public None
{
public:
	Struct GameplayAttribute                           AttributeToCapture                                 // 0x0(0x8)
	byte                                               AttributeSource                                    // 0x8(0x1)
	bool                                               bSnapshot                                          // 0x9(0x1)
};


// Size 0x8
class GameplayAttribute: public None
{
public:
	Class Property*                                    Attribute                                          // 0x0(0x8)
};


// Size 0x10
class GameplayEffectModifiedAttribute: public None
{
public:
	Struct GameplayAttribute                           Attribute                                          // 0x0(0x8)
	float                                              TotalMagnitude                                     // 0x8(0x4)
};


// Size 0x4
class ActiveGameplayEffectHandle: public None
{
public:
	int                                                Handle                                             // 0x0(0x4)
};


// Size 0x20
class GameplayEffectSpecHandle: public None
{
public:
};


// Size 0x10
class GameplayAbilityTargetDataHandle: public None
{
public:
};


// Size 0xa0
class GameplayEventData: public None
{
public:
	Struct GameplayTag                                 EventTag                                           // 0x0(0x8)
	Class Actor*                                       Instigator                                         // 0x8(0x8)
	Class Actor*                                       Target                                             // 0x10(0x8)
	Class Object*                                      OptionalObject                                     // 0x18(0x8)
	Class Object*                                      OptionalObject2                                    // 0x20(0x8)
	Struct GameplayEffectContextHandle                 ContextHandle                                      // 0x28(0x20)
	Struct GameplayTagContainer                        InstigatorTags                                     // 0x48(0x28)
	Struct GameplayTagContainer                        TargetTags                                         // 0x70(0x28)
	float                                              EventMagnitude                                     // 0x98(0x4)
};


// Size 0x20
class GameplayAbilityActivationInfo: public None
{
public:
	byte                                               ActivationMode                                     // 0x0(0x1)
	bool                                               bCanBeEndedByOtherInstance                         // 0x1(0x1)
	Struct PredictionKey                               PredictionKeyWhenActivated                         // 0x8(0x18)
};


// Size 0x90
class GameplayEffectSpecForRPC: public None
{
public:
	Class GameplayEffect*                              Def                                                // 0x0(0x8)
	TArray<Struct Def>                                 ModifiedAttributes                                 // 0x8(0x10)
	Struct GameplayEffectContextHandle                 EffectContext                                      // 0x18(0x20)
	Struct GameplayTagContainer                        AggregatedSourceTags                               // 0x38(0x28)
	Struct GameplayTagContainer                        AggregatedTargetTags                               // 0x60(0x28)
	float                                              Level                                              // 0x88(0x4)
};


// Size 0x88
class GameplayCueParameters: public None
{
public:
	float                                              NormalizedMagnitude                                // 0x0(0x4)
	float                                              RawMagnitude                                       // 0x4(0x4)
	Struct GameplayEffectContextHandle                 EffectContext                                      // 0x8(0x20)
	struct FName                                       MatchedTagName                                     // 0x28(0x8)
	Struct GameplayTag                                 OriginalTag                                        // 0x30(0x8)
	Struct GameplayTagContainer                        AggregatedSourceTags                               // 0x38(0x28)
	Struct GameplayTagContainer                        AggregatedTargetTags                               // 0x60(0x28)
};


// Size 0xc0
class ActiveGameplayCueContainer: public None
{
public:
	TArray<Struct ActiveGameplayCue>                   GameplayCues                                       // 0xa8(0x10)
	Class AbilitySystemComponent*                      Owner                                              // 0xb8(0x8)
};


// Size 0x30
class ActiveGameplayCue: public None
{
public:
	Struct GameplayTag                                 GameplayCueTag                                     // 0x8(0x8)
	Struct PredictionKey                               PredictionKey                                      // 0x10(0x18)
	bool                                               bPredictivelyRemoved                               // 0x28(0x1)
};


// Size 0x368
class ActiveGameplayEffectsContainer: public None
{
public:
	TArray<Struct AvatarActor>                         GameplayEffects_Internal                           // 0xc8(0x10)
};


// Size 0x30
class GameplayAbilityLocalAnimMontage: public None
{
public:
	Class AnimMontage*                                 AnimMontage                                        // 0x0(0x8)
	bool                                               PlayBit                                            // 0x8(0x1)
	Struct PredictionKey                               PredictionKey                                      // 0x10(0x18)
	Class GameplayAbility*                             AnimatingAbility                                   // 0x28(0x8)
};


// Size 0x30
class GameplayAbilityRepAnimMontage: public None
{
public:
	Class AnimMontage*                                 AnimMontage                                        // 0x0(0x8)
	float                                              PlayRate                                           // 0x8(0x4)
	float                                              Position                                           // 0xc(0x4)
	float                                              BlendTime                                          // 0x10(0x4)
	byte                                               NextSectionID                                      // 0x14(0x1)
	bool                                               IsStopped                                          // 0x15(0x1)
	bool                                               ForcePlayBit                                       // 0x15(0x1)
	Struct PredictionKey                               PredictionKey                                      // 0x18(0x18)
};


// Size 0xc0
class GameplayAbilitySpecContainer: public None
{
public:
	TArray<Struct GameplayAbilitySpec>                 Items                                              // 0xa8(0x10)
};


// Size 0x78
class GameplayAbilitySpec: public None
{
public:
	Struct GameplayAbilitySpecHandle                   Handle                                             // 0x8(0x4)
	Class GameplayAbility*                             Ability                                            // 0x10(0x8)
	int                                                Level                                              // 0x18(0x4)
	int                                                InputID                                            // 0x1c(0x4)
	Class Object*                                      SourceObject                                       // 0x20(0x8)
	bool                                               InputPressed                                       // 0x28(0x1)
	byte                                               ActiveCount                                        // 0x29(0x1)
	bool                                               RemoveAfterActivation                              // 0x2a(0x1)
	Struct GameplayAbilityActivationInfo               ActivationInfo                                     // 0x30(0x20)
	TArray<class NonReplicatedInstances*>              NonReplicatedInstances                             // 0x50(0x10)
	TArray<class ReplicatedInstances*>                 ReplicatedInstances                                // 0x60(0x10)
	Struct ActiveGameplayEffectHandle                  GameplayEffectHandle                               // 0x70(0x4)
	bool                                               PendingRemove                                      // 0x74(0x1)
};


// Size 0x10
class AttributeDefaults: public None
{
public:
	class                                              Attributes                                         // 0x0(0x8)
	Class DataTable*                                   DefaultStartingTable                               // 0x8(0x8)
};


// Size 0x18
class GameplayTargetDataFilterHandle: public None
{
public:
};


// Size 0x28
class GameplayTargetDataFilter: public None
{
public:
	Class Actor*                                       SelfActor                                          // 0x8(0x8)
	byte                                               SelfFilter                                         // 0x10(0x1)
	class                                              RequiredActorClass                                 // 0x18(0x8)
	bool                                               bReverseFilter                                     // 0x20(0x1)
};


// Size 0x28
class AttributeMetaData: public None
{
public:
	float                                              BaseValue                                          // 0x0(0x4)
	float                                              MinValue                                           // 0x4(0x4)
	float                                              MaxValue                                           // 0x8(0x4)
	Struct FString                                     DerivedAttributeInfo                               // 0x10(0x10)
	bool                                               bCanStack                                          // 0x20(0x1)
};


// Size 0x20
class ScalableFloat: public None
{
public:
	float                                              Value                                              // 0x0(0x4)
	Struct CurveTableRowHandle                         Curve                                              // 0x8(0x10)
};


// Size 0x10
class GlobalCurveDataOverride: public None
{
public:
};


// Size 0x50
class GameplayTagRequirements: public None
{
public:
	Struct GameplayTagContainer                        RequireTags                                        // 0x0(0x28)
	Struct GameplayTagContainer                        IgnoreTags                                         // 0x28(0x28)
};


// Size 0x60
class GameplayEffectContext: public None
{
public:
	TArray<Weakclass InstigatorAbilitySystemComponent> Actors                                             // 0x28(0x10)
	Struct Vector                                      WorldOrigin                                        // 0x50(0xc)
	bool                                               bHasWorldOrigin                                    // 0x5c(0x1)
};


// Size 0x18
class GameplayModifierEvaluatedData: public None
{
public:
	Struct GameplayAttribute                           Attribute                                          // 0x0(0x8)
	byte                                               ModifierOp                                         // 0x8(0x1)
	float                                              Magnitude                                          // 0xc(0x4)
	Struct ActiveGameplayEffectHandle                  Handle                                             // 0x10(0x4)
	bool                                               IsValid                                            // 0x14(0x1)
};


// Size 0x88
class GameplayAbilityTargetData_SingleTargetHit: public None
{
public:
	Struct HitResult                                   HitResult                                          // 0x8(0x80)
};


// Size 0x8
class GameplayAbilityTargetData: public None
{
public:
};


// Size 0x90
class GameplayAbilityTargetData_ActorArray: public None
{
public:
	Struct GameplayAbilityTargetingLocationInfo        SourceLocation                                     // 0x10(0x70)
	TArray<Weakclass SourceLocation>                   TargetActorArray                                   // 0x80(0x10)
};


// Size 0x70
class GameplayAbilityTargetingLocationInfo: public None
{
public:
	byte                                               LocationType                                       // 0x10(0x1)
	Struct Transform                                   LiteralTransform                                   // 0x20(0x30)
	Class Actor*                                       SourceActor                                        // 0x50(0x8)
	Class MeshComponent*                               SourceComponent                                    // 0x58(0x8)
	Class GameplayAbility*                             SourceAbility                                      // 0x60(0x8)
	struct FName                                       SourceSocketName                                   // 0x68(0x8)
};


// Size 0xf0
class GameplayAbilityTargetData_LocationInfo: public None
{
public:
	Struct GameplayAbilityTargetingLocationInfo        SourceLocation                                     // 0x10(0x70)
	Struct GameplayAbilityTargetingLocationInfo        TargetLocation                                     // 0x80(0x70)
};


// Size 0x8
class GameplayAbilitySpecHandleAndPredictionKey: public None
{
public:
	Struct GameplayAbilitySpecHandle                   AbilityHandle                                      // 0x0(0x4)
	int                                                PredictionKeyAtCreation                            // 0x4(0x4)
};


// Size 0x38
class GameplayAbilityActorInfo: public None
{
public:
};


// Size 0x50
class ActiveGameplayEffectQuery: public None
{
public:
};


// Size 0xd0
class GameplayEffectQuery: public None
{
public:
	Struct GameplayTagQuery                            OwningTagQuery                                     // 0x18(0x48)
	Struct GameplayTagQuery                            EffectTagQuery                                     // 0x60(0x48)
	Struct GameplayAttribute                           ModifyingAttribute                                 // 0xa8(0x8)
	Class Object*                                      EffectSource                                       // 0xb0(0x8)
	Class GameplayEffect*                              EffectDefinition                                   // 0xb8(0x8)
};


// Size 0x78
class InheritedTagContainer: public None
{
public:
	Struct GameplayTagContainer                        CombinedTags                                       // 0x0(0x28)
	Struct GameplayTagContainer                        Added                                              // 0x28(0x28)
	Struct GameplayTagContainer                        Removed                                            // 0x50(0x28)
};


// Size 0x38
class GameplayEffectCue: public None
{
public:
	Struct GameplayAttribute                           MagnitudeAttribute                                 // 0x0(0x8)
	float                                              MinLevel                                           // 0x8(0x4)
	float                                              MaxLevel                                           // 0xc(0x4)
	Struct GameplayTagContainer                        GameplayCueTags                                    // 0x10(0x28)
};


// Size 0x240
class GameplayModifierInfo: public None
{
public:
	Struct GameplayAttribute                           Attribute                                          // 0x0(0x8)
	byte                                               ModifierOp                                         // 0x8(0x1)
	Struct ScalableFloat                               Magnitude                                          // 0x10(0x20)
	Struct GameplayEffectModifierMagnitude             ModifierMagnitude                                  // 0x30(0x170)
	Struct GameplayTagRequirements                     SourceTags                                         // 0x1a0(0x50)
	Struct GameplayTagRequirements                     TargetTags                                         // 0x1f0(0x50)
};


// Size 0x170
class GameplayEffectModifierMagnitude: public None
{
public:
	byte                                               MagnitudeCalculationType                           // 0x0(0x1)
	Struct ScalableFloat                               ScalableFloatMagnitude                             // 0x8(0x20)
	Struct AttributeBasedFloat                         AttributeBasedMagnitude                            // 0x28(0xd8)
	Struct CustomCalculationBasedFloat                 CustomMagnitude                                    // 0x100(0x68)
	Struct SetByCallerFloat                            SetByCallerMagnitude                               // 0x168(0x8)
};


// Size 0x8
class SetByCallerFloat: public None
{
public:
	struct FName                                       DataName                                           // 0x0(0x8)
};


// Size 0x68
class CustomCalculationBasedFloat: public None
{
public:
	class                                              CalculationClassMagnitude                          // 0x0(0x8)
	Struct ScalableFloat                               Coefficient                                        // 0x8(0x20)
	Struct ScalableFloat                               PreMultiplyAdditiveValue                           // 0x28(0x20)
	Struct ScalableFloat                               PostMultiplyAdditiveValue                          // 0x48(0x20)
};


// Size 0xd8
class AttributeBasedFloat: public None
{
public:
	Struct ScalableFloat                               Coefficient                                        // 0x0(0x20)
	Struct ScalableFloat                               PreMultiplyAdditiveValue                           // 0x20(0x20)
	Struct ScalableFloat                               PostMultiplyAdditiveValue                          // 0x40(0x20)
	Struct GameplayEffectAttributeCaptureDefinition    BackingAttribute                                   // 0x60(0x10)
	Struct CurveTableRowHandle                         AttributeCurve                                     // 0x70(0x10)
	byte                                               AttributeCalculationType                           // 0x80(0x1)
	Struct GameplayTagContainer                        SourceTagFilter                                    // 0x88(0x28)
	Struct GameplayTagContainer                        TargetTagFilter                                    // 0xb0(0x28)
};


// Size 0x50
class GameplayEffectExecutionDefinition: public None
{
public:
	class                                              CalculationClass                                   // 0x0(0x8)
	Struct GameplayTagContainer                        PassedInTags                                       // 0x8(0x28)
	TArray<Struct GameplayEffectExecutionScopedModifierInfo> CalculationModifiers                               // 0x30(0x10)
	TArray<Class CalculationModifiers>                 ConditionalGameplayEffectClasses                   // 0x40(0x10)
};


// Size 0x228
class GameplayEffectExecutionScopedModifierInfo: public None
{
public:
	Struct GameplayEffectAttributeCaptureDefinition    CapturedAttribute                                  // 0x0(0x10)
	byte                                               ModifierOp                                         // 0x10(0x1)
	Struct GameplayEffectModifierMagnitude             ModifierMagnitude                                  // 0x18(0x170)
	Struct GameplayTagRequirements                     SourceTags                                         // 0x188(0x50)
	Struct GameplayTagRequirements                     TargetTags                                         // 0x1d8(0x50)
};


// Size 0xc
class AbilityTriggerData: public None
{
public:
	Struct GameplayTag                                 TriggerTag                                         // 0x0(0x8)
	byte                                               TriggerSource                                      // 0x8(0x1)
};


// Size 0xc
class WorldReticleParameters: public None
{
public:
	Struct Vector                                      AOEScale                                           // 0x0(0xc)
};


// Size 0x10
class GameplayAbilityBindInfo: public None
{
public:
	byte                                               Command                                            // 0x0(0x1)
	class                                              GameplayAbilityClass                               // 0x8(0x8)
};


// Size 0x148
class GameplayCuePendingExecute: public None
{
public:
	Struct GameplayTag                                 GameplayCueTag                                     // 0x0(0x8)
	Struct PredictionKey                               PredictionKey                                      // 0x8(0x18)
	byte                                               PayloadType                                        // 0x20(0x1)
	Class AbilitySystemComponent*                      OwningComponent                                    // 0x28(0x8)
	Struct GameplayEffectSpecForRPC                    FromSpec                                           // 0x30(0x90)
	Struct GameplayCueParameters                       CueParameters                                      // 0xc0(0x88)
};


// Size 0x28
class GameplayCueNotifyData: public None
{
public:
	Struct GameplayTag                                 GameplayCueTag                                     // 0x0(0x8)
	Struct StringAssetReference                        GameplayCueNotifyObj                               // 0x8(0x10)
	class                                              LoadedGameplayCueClass                             // 0x18(0x8)
};


// Size 0x18
class GameplayEffectCustomExecutionOutput: public None
{
public:
	TArray<Struct GameplayEffectCustomExecutionParameters> OutputModifiers                                    // 0x0(0x10)
	bool                                               bTriggerConditionalGameplayEffects                 // 0x10(0x1)
	bool                                               bHandledStackCountManually                         // 0x10(0x1)
	bool                                               bHandledGameplayCuesManually                       // 0x10(0x1)
};


// Size 0x88
class GameplayEffectCustomExecutionParameters: public None
{
public:
};


// Size 0x20
class GameplayTagResponseTableEntry: public None
{
public:
	Struct GameplayTagReponsePair                      Positive                                           // 0x0(0x10)
	Struct GameplayTagReponsePair                      Negative                                           // 0x10(0x10)
};


// Size 0x10
class GameplayTagReponsePair: public None
{
public:
	Struct GameplayTag                                 Tag                                                // 0x0(0x8)
	class                                              ResponseGameplayEffect                             // 0x8(0x8)
};


}