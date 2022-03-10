namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x0
class CookableInterface: public Interface
{
public:
};


// Size 0x0
class CookingDefaultsInterface: public Interface
{
public:
};


// Size 0x0
class CookingStatusPublisherInterface: public Interface
{
public:
};


// Size 0x0
class CookingStateInterface: public Interface
{
public:
};


// Size 0x60
class CookableComponent: public ActorComponent
{
public:
	class                                              NextCookState                                      // 0xe8(0x8)
	float                                              TimeToNextCookState                                // 0xf0(0x4)
	TArray<Struct TimeToNextCookState>                 SmokeFeedbackLevels                                // 0xf8(0x10)
	Class CurveFloat*                                  VisibleCookedExtentOverTime                        // 0x108(0x8)
	float                                              DefaultVisibleCookedExtent                         // 0x110(0x4)
	struct FName                                       CookableTypeName                                   // 0x114(0x8)
	Struct PlayerStat                                  CookedStat                                         // 0x11c(0x4)
	Struct PlayerStat                                  ShipCookedStat                                     // 0x120(0x4)
	byte                                               CookingState                                       // 0x124(0x1)
	byte                                               InitialCookingState                                // 0x125(0x1)
	byte                                               RemovedCookingState                                // 0x126(0x1)
};


// Size 0x0
class CookerInterface: public Interface
{
public:
};


// Size 0x180
class CookerComponent: public ActorComponent
{
public:
	TArray<Struct MaxCookingRtpcAmount>                StatusToApplyToContents                            // 0xd0(0x10)
	TArray<Struct StatusToApplyToContents>             VFXFeedback                                        // 0xe0(0x10)
	Class StaticMeshMemoryConstraintComponent*         CookableStaticMeshComponent                        // 0xf0(0x8)
	Class SkeletalMeshMemoryConstraintComponent*       CookableSkeletalMeshComponent                      // 0xf8(0x8)
	struct FName                                       CookedMaterialParameterName                        // 0x100(0x8)
	struct FName                                       BurnDownDirectionParameterName                     // 0x108(0x8)
	float                                              PlacementVarianceAngleBound                        // 0x110(0x4)
	bool                                               OnByDefault                                        // 0x114(0x1)
	Class CookingComponentAudioParams*                 AudioParams                                        // 0x118(0x8)
	byte                                               VfxLocation                                        // 0x120(0x1)
	Class ItemInfo*                                    CurrentlyCookingItem                               // 0x128(0x8)
	Struct CookingClientRepresentation                 CookingState                                       // 0x130(0x68)
	Class ParticleSystemComponent*                     SmokeParticleComponent                             // 0x198(0x8)
	Class MaterialInstanceDynamic*                     VisibleCookableMaterial                            // 0x1a0(0x8)
	bool                                               TurnedOn                                           // 0x1a8(0x1)
	bool                                               OnIsland                                           // 0x1a9(0x1)
};


// Size 0x78
class CookingComponentAudioParams: public DataAsset
{
public:
	Class WwiseObjectPoolWrapper*                      CookingPool                                        // 0x28(0x8)
	Struct Vector                                      EmitterOffsetVector                                // 0x30(0xc)
	Class WwiseEvent*                                  FoodPlaceInPot                                     // 0x40(0x8)
	Class WwiseEvent*                                  CookingStart                                       // 0x48(0x8)
	Class WwiseEvent*                                  CookingStop                                        // 0x50(0x8)
	struct FName                                       CookingTypeSwitchGroup                             // 0x58(0x8)
	struct FName                                       CookingTypeSizzle                                  // 0x60(0x8)
	struct FName                                       CookingTypeSimmer                                  // 0x68(0x8)
	struct FName                                       FoodTypeSwitchGroup                                // 0x70(0x8)
	struct FName                                       FoodTypeFruit                                      // 0x78(0x8)
	struct FName                                       FoodTypeMeat                                       // 0x80(0x8)
	struct FName                                       FoodTypeRareMeat                                   // 0x88(0x8)
	struct FName                                       FoodCookedAmount                                   // 0x90(0x8)
	float                                              MaxCookingRtpcAmount                               // 0x98(0x4)
};


// Size 0x1e0
class CookingPot: public InteractableBase
{
public:
	Class StaticMeshComponent*                         MeshComponent                                      // 0x400(0x8)
	Class ActionRulesInteractableComponent*            InteractableComponent                              // 0x408(0x8)
	Class CookerComponent*                             CookerComponent                                    // 0x410(0x8)
	float                                              HoldToInteractTime                                 // 0x418(0x4)
	Struct FText                                       NotWieldingCookableItemTooltip                     // 0x420(0x38)
	Struct FText                                       WieldingCookableItemTooltip                        // 0x458(0x38)
	Struct FText                                       TakeItemTooltip                                    // 0x490(0x38)
	Struct FText                                       CannotTakeItemTooltip                              // 0x4c8(0x38)
	Struct FText                                       MixInItemTooltip                                   // 0x500(0x38)
};


// Size 0x0
class CookItemConditionalStatTrigger: public ConditionalStatsTriggerType
{
public:
};


// Size 0x8
class HasRequiredCookingStateStatCondition: public TargetedStatCondition
{
public:
	byte                                               RequiredState                                      // 0x30(0x1)
};


// Size 0x0
class MixableInterface: public Interface
{
public:
};


// Size 0x0
class PottableInterface: public Interface
{
public:
};


// Size 0x10
class PottableComponent: public ActorComponent
{
public:
	bool                                               CanBePutInPot                                      // 0xd0(0x1)
};


}