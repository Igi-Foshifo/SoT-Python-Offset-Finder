namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x8
class StatusBase: public Object
{
public:
};


// Size 0x8
class StatusResponse: public Object
{
public:
};


// Size 0x0
class ActivateableSurfaceMaterialStatusZoneInterface: public Interface
{
public:
};


// Size 0x18
class AppliedStatusToSelfStatCondition: public TargetedStatCondition
{
public:
	TArray<Class CanReceiveBuff>                       Status                                             // 0x30(0x10)
	byte                                               ComparisonMode                                     // 0x40(0x1)
};


// Size 0x0
class BuffReceiverInterface: public Interface
{
public:
};


// Size 0x10
class BuffReceiverComponent: public ActorComponent
{
public:
	bool                                               CanReceiveBuff                                     // 0xd0(0x1)
};


// Size 0x20
class DebugMenuStatusDataAsset: public DataAsset
{
public:
	TArray<Struct OnStatusDelayEnd>                    StatusDefinitions                                  // 0x28(0x10)
	TArray<Float >                                     Durations                                          // 0x38(0x10)
};


// Size 0xc8
class StatusEffectOverlapZone: public Actor
{
public:
	Class BoxComponent*                                CollisionMesh                                      // 0x478(0x8)
	TArray<Struct CollisionMesh>                       StatusesToApplyOnOverlap                           // 0x480(0x10)
	bool                                               StartActive                                        // 0x490(0x1)
};


// Size 0x20
class DebugStatusEffectOverlapZoneVisualizerComponent: public ActorComponent
{
public:
	Struct Vector                                      BoxCollisionDimensions                             // 0xd0(0xc)
	Struct Color                                       DebugColour                                        // 0xdc(0x4)
	bool                                               VisibleState                                       // 0xe0(0x1)
};


// Size 0x8
class DebugStatusTicketHolder: public Actor
{
public:
	Class Actor*                                       StatusRecipient                                    // 0x3d0(0x8)
};


// Size 0x0
class StatusEffectCancellationInterface: public Interface
{
public:
};


// Size 0x0
class StatusEffectRecipientInterface: public Interface
{
public:
};


// Size 0x0
class StatusEffectResponseConfigurationInterface: public Interface
{
public:
};


// Size 0x0
class StatusEffectSuspensionInterface: public Interface
{
public:
};


// Size 0x58
class StatusResponseAsset: public DataAsset
{
public:
	Struct FText                                       HighFrequencyTriggerStatusHelper                   // 0x28(0x38)
	TArray<Class HighFrequencyTriggerStatusHelper>     TriggerStatus                                      // 0x60(0x10)
	TArray<class Responses*>                           Responses                                          // 0x70(0x10)
};


// Size 0x30
class StatusRecipientResponseList: public DataAsset
{
public:
	TArray<class ResponseAssets*>                      ResponseAssets                                     // 0x28(0x10)
	TArray<Struct ResponseAssets>                      FeatureToggledResponseLists                        // 0x38(0x10)
	TArray<class FinalResponseAssets*>                 FinalResponseAssets                                // 0x48(0x10)
};


// Size 0x38
class LightWeightStatusEffectManagerComponent: public ActorComponent
{
public:
	Class StatusRecipientResponseList*                 RecipientResponseList                              // 0xe8(0x8)
	TArray<Struct RecipientResponseList>               ActiveEffects                                      // 0xf0(0x10)
};


// Size 0x0
class MaterialStatusSusceptibilityInterface: public Interface
{
public:
};


// Size 0x0
class SurfaceMaterialStatusZoneInterface: public Interface
{
public:
};


// Size 0x30
class MaterialStatusSusceptibilityComponent: public ActorComponent
{
public:
	Class PhysicalMaterial*                            CurrentSurfaceMaterial                             // 0xd0(0x8)
};


// Size 0xc0
class SphericalStatusEffectZone: public Actor
{
public:
	Class ActorActivationComponent*                    ActorActivationComponent                           // 0x3d8(0x8)
	Class SphereComponent*                             SphereComponent                                    // 0x3e0(0x8)
	Class StatusEffectVolumeComponent*                 StatusEffectVolumeComponent                        // 0x3e8(0x8)
};


// Size 0x28
class StatusApplicationDesc: public Object
{
public:
	Struct EventAppliedStatusToTargets                 ApplicationEvent                                   // 0x28(0x28)
};


// Size 0x8
class StatusApplicationMonitorComponent: public ActorComponent
{
public:
	class                                              StatusApplicationTrigger                           // 0xc8(0x8)
};


// Size 0x0
class StatusEffectHelperFunctionLibrary: public BlueprintFunctionLibrary
{
public:
};


// Size 0x0
class StatusEffectTicketDispenserInterface: public Interface
{
public:
};


// Size 0x40
class StatusEffectManagerComponent: public ActorComponent
{
public:
	Class StatusRecipientResponseList*                 RecipientResponseList                              // 0xf0(0x8)
	TArray<Struct RecipientResponseList>               ActiveEffects                                      // 0xf8(0x10)
};


// Size 0x0
class StatusEffectPersistenceInterface: public Interface
{
public:
};


// Size 0x8
class StatusEffectPersistenceComponent: public ActorComponent
{
public:
};


// Size 0x10
class StatusEffectsSettings: public DeveloperSettings
{
public:
	Struct StringAssetReference                        DebugMenuStatusDefinitionsDataAsset                // 0x38(0x10)
};


// Size 0x20
class StatusEffectVolumeComponent: public SceneComponent
{
public:
	bool                                               UseOverlapEventsFromParentComponent                // 0x2d0(0x1)
	TArray<Struct UseOverlapEventsFromParentComponent> StatusEffectsToMaintain                            // 0x2d8(0x10)
};


// Size 0x8
class SetCanReceiveBuffStatusResponse: public StatusResponse
{
public:
	bool                                               LockBuffReceiver                                   // 0x30(0x1)
	bool                                               RevertOnDeactivate                                 // 0x31(0x1)
};


// Size 0x0
class StatusResponseNull: public StatusResponse
{
public:
};


}