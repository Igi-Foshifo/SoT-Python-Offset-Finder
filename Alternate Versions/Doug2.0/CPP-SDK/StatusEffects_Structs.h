namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x18
class Status: public None
{
public:
	TArray<Class EventCurseWheelLockEnd>               Type                                               // 0x0(0x10)
	Struct StatusDescriptor                            Descriptor                                         // 0x10(0x4)
};


// Size 0x4
class StatusDescriptor: public None
{
public:
	float                                              Intensity                                          // 0x0(0x4)
};


// Size 0x20
class DebugMenuStatusDefinition: public None
{
public:
	struct FName                                       Identifier                                         // 0x0(0x8)
	Struct Status                                      Status                                             // 0x8(0x18)
};


// Size 0x20
class DelayedStatusEffect: public None
{
public:
	Struct Status                                      StatusEffect                                       // 0x0(0x18)
	float                                              InEffectTime                                       // 0x18(0x4)
};


// Size 0x50
class ActiveStatusEffect: public None
{
public:
	TArray<Class FeatureToggledStatusResponseList>     SourceStatus                                       // 0x0(0x10)
	Struct StatusDescriptor                            Descriptor                                         // 0x10(0x4)
	TArray<class ResponseTemplates*>                   ResponseTemplates                                  // 0x18(0x10)
	TArray<class InstancedResponses*>                  InstancedResponses                                 // 0x28(0x10)
	bool                                               ResponsesAreActive                                 // 0x38(0x1)
};


// Size 0x18
class FeatureToggledStatusResponseList: public None
{
public:
	struct FName                                       Feature                                            // 0x0(0x8)
	TArray<class ResponseAssets*>                      ResponseAssets                                     // 0x8(0x10)
};


// Size 0x28
class EventAppliedStatusToTargets: public None
{
public:
	TArray<Class StatusEffectPersistenceKey>           StatusApplied                                      // 0x0(0x10)
	TArray<class Targets*>                             Targets                                            // 0x10(0x10)
	Class Actor*                                       StatusSource                                       // 0x20(0x8)
};


// Size 0x18
class StatusEffectPersistenceKey: public None
{
public:
	Struct Status                                      AppliedStatuses                                    // 0x0(0x18)
};


// Size 0x18
class ApplyStatusEvent: public None
{
public:
	Struct Status                                      StatusToApply                                      // 0x0(0x18)
};


// Size 0x18
class BuffedTargetData: public None
{
public:
};


// Size 0x18
class StatusDeactivatedEvent: public None
{
public:
	Struct Guid                                        Id                                                 // 0x0(0x10)
	struct FName                                       StatusName                                         // 0x10(0x8)
};


// Size 0x18
class StatusActivatedEvent: public None
{
public:
	Struct Guid                                        Id                                                 // 0x0(0x10)
	struct FName                                       StatusName                                         // 0x10(0x8)
};


// Size 0x14
class EventStatusMaterialEffectEnded: public None
{
public:
	struct FName                                       MaterialParamName                                  // 0x0(0x8)
	struct FName                                       CanShowMaterialParam                               // 0x8(0x8)
	float                                              FadeOutAcceleration                                // 0x10(0x4)
};


// Size 0x30
class EventStatusMaterialEffectStarted: public None
{
public:
	struct FName                                       MaterialParamName                                  // 0x0(0x8)
	struct FName                                       CanShowMaterialParam                               // 0x8(0x8)
	struct FName                                       TintParamName                                      // 0x10(0x8)
	Struct LinearColor                                 TintColor                                          // 0x18(0x10)
	float                                              TargetEffectStrength                               // 0x28(0x4)
	float                                              FadeInAcceleration                                 // 0x2c(0x4)
};


// Size 0xc
class EventStatusScreenEffectEnded: public None
{
public:
	struct FName                                       MaterialParamName                                  // 0x0(0x8)
	float                                              FadeOutAcceleration                                // 0x8(0x4)
};


// Size 0x8
class EventStatusScreenSpaceParticleEffectEnded: public None
{
public:
	Class Object*                                      ParticleSystem                                     // 0x0(0x8)
};


// Size 0x8
class EventStatusScreenSpaceParticleEffectStarted: public None
{
public:
	Class Object*                                      ParticleSystem                                     // 0x0(0x8)
};


// Size 0x28
class EventStatusScreenEffectStarted: public None
{
public:
	struct FName                                       MaterialParamName                                  // 0x0(0x8)
	struct FName                                       TintParamName                                      // 0x8(0x8)
	Struct LinearColor                                 TintColor                                          // 0x10(0x10)
	float                                              TargetEffectStrength                               // 0x20(0x4)
	float                                              FadeInAcceleration                                 // 0x24(0x4)
};


// Size 0x1
class EventExitedSurfaceMaterialStatusZone: public None
{
public:
};


// Size 0x10
class EventEnteredSurfaceMaterialStatusZone: public None
{
public:
};


}