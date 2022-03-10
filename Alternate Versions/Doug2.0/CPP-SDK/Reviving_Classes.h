namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x60
class ReviveSettings: public DeveloperSettings
{
public:
	float                                              HealthRegained                                     // 0x38(0x4)
	float                                              MaximumReviveDistance                              // 0x3c(0x4)
	Struct LinearColor                                 FadeColour                                         // 0x40(0x10)
	bool                                               ShouldFadeAudio                                    // 0x50(0x1)
	float                                              ServerWaitTimeBeforeFullyReviving                  // 0x54(0x4)
	float                                              ReviveTime                                         // 0x58(0x4)
	float                                              ReviveTimeOnEnemyShip                              // 0x5c(0x4)
	float                                              MaxRevertEvaporateDuration                         // 0x60(0x4)
	TArray<Byte MaxRevertEvaporateDuration>            UnsupportedPlayModes                               // 0x68(0x10)
	TArray<Struct UnsupportedPlayModes>                ModeSpecificSettings                               // 0x78(0x10)
	float                                              GiveUpHoldTime                                     // 0x88(0x4)
	float                                              GiveUpFadeDuration                                 // 0x8c(0x4)
	float                                              GiveUpEvaporateDuration                            // 0x90(0x4)
};


// Size 0x60
class DeathSelfInteractionComponent: public InteractableComponent
{
public:
	bool                                               HasGivenUp                                         // 0x120(0x1)
};


// Size 0x0
class PostReviveLocomotionActionStateId: public ActionStateId
{
public:
};


// Size 0x0
class RevivableStatus: public StatusBase
{
public:
};


// Size 0x0
class ReviveableActionStateId: public ActionStateId
{
public:
};


// Size 0x0
class ReviveableCharacterInterface: public Interface
{
public:
};


// Size 0x0
class ReviveableRepresentationInterface: public Interface
{
public:
};


// Size 0x20
class ReviveAudioComponent: public WwiseEmitterComponent
{
public:
	Class ReviveEffectsDataAsset*                      ReviveEffectsDataAsset                             // 0x300(0x8)
};


// Size 0x0
class ReviveInterface: public Interface
{
public:
};


// Size 0x148
class ReviveComponent: public InteractableComponent
{
public:
	Class Character*                                   OwningCharacter                                    // 0x128(0x8)
	Class Actor*                                       ReviveableRepresentationActor                      // 0x130(0x8)
	byte                                               ReviveState                                        // 0x138(0x1)
	byte                                               InteractionState                                   // 0x139(0x1)
	class                                              ReviveableRepresentationClass                      // 0x140(0x8)
	bool                                               ReviveWindowIsOpen                                 // 0x15a(0x1)
	Struct Status                                      RevivableStatus                                    // 0x230(0x18)
};


// Size 0x0
class ReviveConditionalStatTrigger: public ConditionalStatsTriggerType
{
public:
};


// Size 0x0
class RevivedActionStateId: public ActionStateId
{
public:
};


// Size 0x98
class ReviveDebugComponent: public ActorComponent
{
public:
};


// Size 0xa8
class ReviveEffectsDataAsset: public DataAsset
{
public:
	Class MaterialParameterCollection*                 ReviveMaterialParameterCollection                  // 0x28(0x8)
	struct FName                                       AstralCordReviveInProgressMaterialCollectionScalarParameterName // 0x30(0x8)
	struct FName                                       AstralCordFadeMaterialCollectionScalarParameterName // 0x38(0x8)
	struct FName                                       AstralCordBorderMaterialCollectionScalarParameterName // 0x40(0x8)
	Class CurveFloat*                                  AstralCordBorderParamValueByAbsoluteTimeSinceDeath // 0x48(0x8)
	Class Material*                                    ReviveePostProcessMaterial                         // 0x50(0x8)
	float                                              GhostShaderGhostEffectInterpolationValue           // 0x58(0x4)
	float                                              ReviveSuccessfulEffectDuration                     // 0x5c(0x4)
	Class Object*                                      ReviveSuccessfulOneShotVFX                         // 0x60(0x8)
	Class Object*                                      ReviveSuccessfulOneShotVFX_Revivee                 // 0x68(0x8)
	Class Object*                                      ReviveInProgressLoopingVFX                         // 0x70(0x8)
	float                                              AstralCordReviveInProgressInterpolationSpeed       // 0x78(0x4)
	float                                              AstralCordReviveNotInProgressInterpolationSpeed    // 0x7c(0x4)
	Class Object*                                      ContinuousBodyLoopingVFX                           // 0x80(0x8)
	float                                              AstralCordFadeInInterpolationSpeed                 // 0x88(0x4)
	float                                              AstralCordFadeOutInterpolationSpeed                // 0x8c(0x4)
	float                                              DefaultAstralCordHeight                            // 0x90(0x4)
	float                                              AstralCordHeightOffsetFromTheGhost                 // 0x94(0x4)
	Class Object*                                      DeadPlayerBodyEvaporatesOneShotVFX                 // 0x98(0x8)
	Class WwiseEvent*                                  OtherPlayers_ReviveGhostAmbientStart               // 0xa0(0x8)
	Class WwiseEvent*                                  OtherPlayers_ReviveGhostAmbientStop                // 0xa8(0x8)
	Class WwiseEvent*                                  DeadPlayer_ReviveInProgressStart                   // 0xb0(0x8)
	Class WwiseEvent*                                  DeadPlayer_ReviveInProgressStop                    // 0xb8(0x8)
	Class WwiseEvent*                                  OtherPlayers_ReviveInProgressStart                 // 0xc0(0x8)
	Class WwiseEvent*                                  OtherPlayers_ReviveInProgressStop                  // 0xc8(0x8)
};


// Size 0x258
class ReviveGhost: public Actor
{
public:
	TArray<class CorpseMaterials*>                     CorpseMaterials                                    // 0x3e0(0x10)
	Class SceneComponent*                              Root                                               // 0x3f0(0x8)
	Class SkeletalMeshComponent*                       MeshComponent                                      // 0x3f8(0x8)
	Class SceneComponent*                              AstralCordContainer                                // 0x400(0x8)
	Class AnimationDataStoreComponent*                 AnimationDataStoreComponent                        // 0x408(0x8)
	Class PostProcessComponent*                        PostProcessComponent                               // 0x410(0x8)
	Class DitherComponent*                             DitherComponent                                    // 0x418(0x8)
	Class ReviveAudioComponent*                        AudioComponent                                     // 0x420(0x8)
	byte                                               RevivableOwnerNetRole                              // 0x438(0x1)
	Class GhostDataAsset*                              ReviveGhostDataAsset                               // 0x440(0x8)
	Class ReviveEffectsDataAsset*                      ReviveEffectsDataAsset                             // 0x448(0x8)
	Struct ReviveEffectsValues                         ReviveEffectsValues                                // 0x450(0x20)
	Struct ModeSpecificReviveSettings                  ReviveSettings                                     // 0x470(0x30)
	TArray<class AstralCordDynamicMaterials*>          AstralCordDynamicMaterials                         // 0x608(0x10)
	Struct GhostPlayModeParameters                     GhostPlayModeSpecificParameters                    // 0x618(0xc)
};


// Size 0x0
class RevivePlayerActionStateId: public ActionStateId
{
public:
};


}