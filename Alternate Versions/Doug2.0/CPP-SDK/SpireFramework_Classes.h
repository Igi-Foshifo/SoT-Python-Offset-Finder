namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x30
class HeightTriggerableAudioComponentParams: public DataAsset
{
public:
	Class WwiseObjectPoolWrapper*                      Pool                                               // 0x28(0x8)
	Class WwiseEvent*                                  RisingOneShot                                      // 0x30(0x8)
	Class WwiseEvent*                                  RisingStart                                        // 0x38(0x8)
	Class WwiseEvent*                                  RisingStop                                         // 0x40(0x8)
	Class WwiseEvent*                                  LoweringStart                                      // 0x48(0x8)
	Class WwiseEvent*                                  LoweringStop                                       // 0x50(0x8)
};


// Size 0x90
class HeightTriggerableEffectsComponent: public ActorComponent
{
public:
	Class HeightTriggerableAudioComponentParams*       AudioParams                                        // 0xc8(0x8)
	Struct ActorComponentSelector                      EmitterOwner                                       // 0xd0(0x10)
	Struct Vector                                      EmitterOffset                                      // 0xe0(0xc)
	bool                                               UseParentEmitter                                   // 0xec(0x1)
	float                                              RisingAudioTriggerValue                            // 0xf0(0x4)
	class                                              CameraShake                                        // 0xf8(0x8)
	float                                              ShakeInnerRadius                                   // 0x100(0x4)
	float                                              ShakeOuterRadius                                   // 0x104(0x4)
};


// Size 0x8
class SpireResource: public Actor
{
public:
};


// Size 0x0
class SpireServiceInterface: public Interface
{
public:
};


// Size 0x8
class SpireServiceParams: public DataAsset
{
public:
	Class ActorSpawnData*                              OnCancelFakeSpire                                  // 0x28(0x8)
};


// Size 0x98
class SpireService: public Actor
{
public:
	Class SpireServiceParams*                          Params                                             // 0x3d8(0x8)
	TArray<Struct Params>                              ServerOnlySpireInfo                                // 0x3e0(0x10)
	TArray<Struct ServerOnlySpireInfo>                 SpireLevels                                        // 0x3f0(0x10)
};


// Size 0x20
class SpireStreamedLevelDataAsset: public DataAsset
{
public:
	Class AthenaStreamedLevelDataAsset*                StreamedLevel                                      // 0x28(0x8)
	TArray<Struct StreamedLevel>                       Entries                                            // 0x30(0x10)
	struct FName                                       FeatureToggle                                      // 0x40(0x8)
};


// Size 0x0
class SpireSettingsInterface: public Interface
{
public:
};


// Size 0x10
class SpireShippingDrawDebugActorSphereCollection: public ShippingDebugActorSphereCollection
{
public:
	TArray<Weakclass IsSpireVisible>                   SpireList                                          // 0x3e0(0x10)
};


// Size 0x0
class TaleLoadSpireStep: public TaleQuestStep
{
public:
};


// Size 0x48
class TaleSpireService: public TaleQuestService
{
public:
};


// Size 0x0
class TaleSpireServiceDesc: public TaleQuestServiceDesc
{
public:
};


// Size 0x0
class TaleLoadSpireStepDesc: public TaleQuestStepDesc
{
public:
};


// Size 0x0
class TaleMakeSpireVisibleStep: public TaleQuestStep
{
public:
};


// Size 0x0
class TaleMakeSpireVisibleStepDesc: public TaleQuestStepDesc
{
public:
};


// Size 0x10
class TaleRegisterSpireStep: public TaleQuestStep
{
public:
	Class TaleRegisterSpireStepDesc*                   StepDesc                                           // 0x90(0x8)
};


// Size 0x80
class TaleRegisterSpireStepDesc: public TaleQuestStepDesc
{
public:
	Struct QuestVariableVector                         SelectionOriginPoint                               // 0x80(0x20)
	Struct QuestVariableFloat                          PlayerExclusionSelectionRadius                     // 0xa0(0x20)
	Struct QuestVariableTaleResourceHandle             AllocatedSpireHandle                               // 0xc0(0x20)
	Struct QuestVariableVector                         AllocatedSpireLocation                             // 0xe0(0x20)
};


// Size 0x8
class TaleReleaseSpireStep: public TaleQuestStep
{
public:
};


// Size 0x20
class TaleReleaseSpireStepDesc: public TaleQuestStepDesc
{
public:
	Struct QuestVariableTaleResourceHandle             SpireHandle                                        // 0x80(0x20)
};


// Size 0x0
class TaleUnloadSpireStep: public TaleQuestStep
{
public:
};


// Size 0x0
class TaleUnloadSpireStepDesc: public TaleQuestStepDesc
{
public:
};


// Size 0x50
class TaleWaitForSpireToLoadStep: public TaleQuestStep
{
public:
};


// Size 0x0
class TaleWaitForSpireToLoadStepDesc: public TaleQuestStepDesc
{
public:
};


}