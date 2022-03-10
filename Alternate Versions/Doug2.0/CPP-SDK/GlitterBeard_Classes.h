namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x0
class GlitterBeardEntitlementDesc: public EntitlementDesc
{
public:
};


// Size 0x98
class GlitterBeardFinaleCoordinatorComponent: public ActorComponent
{
public:
	Class WwiseEvent*                                  AudioEventToSynchronise                            // 0xc8(0x8)
	Struct FinaleReplicationState                      ReplicationState                                   // 0xd0(0x10)
};


// Size 0x0
class GlitterBeardIsHideoutOpenConditional: public NPCDialogConditional
{
public:
};


// Size 0x48
class GlitterBeardLanternSoundEffect: public EffectBlendObjectBase
{
public:
	float                                              TriggerThreshold                                   // 0x38(0x4)
	Class WwiseObjectPoolWrapper*                      WWisePool                                          // 0x40(0x8)
	Class WwiseEvent*                                  WwiseEvent                                         // 0x48(0x8)
	Struct WwiseEmitter                                Emitter                                            // 0x50(0x20)
};


// Size 0x8
class GlitterbeardSlidingDoor: public SlidingDoor
{
public:
	Class EffectBlendControllerComponent*              DecalBlendComponent                                // 0x538(0x8)
};


// Size 0x48
class GlitterBeardTelemetryComponent: public ActorComponent
{
public:
};


// Size 0x0
class GlitterBeardTrustedTreeInterface: public Interface
{
public:
};


// Size 0x300
class GlitterBeardTree: public Actor
{
public:
	Class ActionRulesComponent*                        ActionRulesComponent                               // 0x3f8(0x8)
	Class ActionRulesInteractableComponent*            InteractableComponent                              // 0x400(0x8)
	float                                              LanternLightDelay                                  // 0x408(0x4)
	Class GlitterBeardUnlockVFXCoordinatorComponent*   UnlockVFXCoordinatorComponent                      // 0x410(0x8)
	Class GlitterBeardTelemetryComponent*              TelemetryComponent                                 // 0x418(0x8)
	class                                              VocalShanty                                        // 0x420(0x8)
	Class WwiseEvent*                                  VocalsFadeEvent                                    // 0x428(0x8)
	float                                              VocalsFadeDelay                                    // 0x430(0x4)
	float                                              UnlockDelay                                        // 0x434(0x4)
	Class GlitterBeardFinaleCoordinatorComponent*      FinaleCoordinator                                  // 0x438(0x8)
	Class LandmarkReactionTriggerComponent*            LandmarkReactionTrigger                            // 0x440(0x8)
	float                                              DistanceFromTreeToPauseAISpawn                     // 0x448(0x4)
	Class SlidingDoor*                                 HideoutDoor                                        // 0x678(0x8)
	Struct WwiseEmitter                                SoundEmitter                                       // 0x680(0x20)
};


// Size 0x50
class GlitterBeardTreeVisualFeedbackComponent: public ActorComponent
{
public:
	TArray<Struct TreeBlendTime>                       FeedbackActions                                    // 0xc8(0x10)
	TArray<Byte FeedbackActions>                       CurrentStates                                      // 0xe8(0x10)
};


// Size 0x28
class GlitterBeardUnlockVFXCoordinatorComponent: public ActorComponent
{
public:
	Struct ActorComponentSelector                      TreeActor                                          // 0xc8(0x10)
	Class MaterialInstanceDynamic*                     TreeMaterialInstanceDynamic                        // 0xd8(0x8)
	float                                              TreeBlendTime                                      // 0xe0(0x4)
};


}