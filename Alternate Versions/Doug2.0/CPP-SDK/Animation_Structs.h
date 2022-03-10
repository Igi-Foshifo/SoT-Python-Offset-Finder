namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x500
class TransformBlendCurve: public None
{
public:
	bool                                               UseLocationCurve                                   // 0x0(0x1)
	Struct RuntimeVectorCurve                          LocationCurve                                      // 0x8(0x170)
	bool                                               UseRotationCurve                                   // 0x178(0x1)
	Struct RuntimeVectorCurve                          RotationCurve                                      // 0x180(0x170)
	bool                                               UseScaleCurve                                      // 0x2f0(0x1)
	Struct RuntimeVectorCurve                          ScaleCurve                                         // 0x2f8(0x170)
	Struct Transform                                   SourceTransform                                    // 0x470(0x30)
	Struct Transform                                   TargetTransform                                    // 0x4a0(0x30)
};


// Size 0x8
class CustomAnimationMontageId: public None
{
public:
	struct FName                                       CustomAnimationMontageId                           // 0x0(0x8)
};


// Size 0x8
class HitReactionAnimationData: public None
{
public:
	Class BlendSpace1D*                                HitReactBlendSpace                                 // 0x0(0x8)
};


// Size 0x18
class AnimDataEntryStructWrapper: public None
{
public:
};


// Size 0x18
class AnimationDataStoreEntry: public None
{
public:
	class                                              AnimDataId                                         // 0x0(0x8)
	Class AnimationData*                               AnimData                                           // 0x8(0x8)
	Class AnimationServerData*                         AnimServerData                                     // 0x10(0x8)
};


// Size 0x40
class AnimationDataStoreLoadingEntry: public None
{
public:
	class                                              AnimDataId                                         // 0x38(0x8)
};


// Size 0x28
class AnimationDataStoreAssetWeakReferenceEntry: public None
{
public:
	class                                              AnimDataId                                         // 0x0(0x8)
};


// Size 0x18
class AnimationDataStoreAssetEntry: public None
{
public:
	class                                              AnimDataId                                         // 0x0(0x8)
	class                                              AnimDataTypeCooked                                 // 0x8(0x8)
	Class AnimationServerData*                         AnimServerData                                     // 0x10(0x8)
};


// Size 0xc
class CurveUpdateValues: public None
{
public:
	struct FName                                       CurveName                                          // 0x0(0x8)
	float                                              FinalValue                                         // 0x8(0x4)
};


// Size 0x40
class CharacterAnimationIKUpdateParams: public None
{
public:
	float                                              CurrentAlpha                                       // 0x0(0x4)
	float                                              TranslationStrength                                // 0x4(0x4)
	float                                              RotationStrength                                   // 0x8(0x4)
	Struct Vector                                      Location                                           // 0xc(0xc)
	Struct Quat                                        Orientation                                        // 0x20(0x10)
	byte                                               EffectorSpace                                      // 0x30(0x1)
	struct FName                                       ParentBone                                         // 0x34(0x8)
};


// Size 0x60
class LimbIK: public None
{
public:
};


// Size 0x10
class CosmeticItems: public None
{
public:
	TArray<class CosmeticItemArray*>                   CosmeticItemArray                                  // 0x0(0x10)
};


// Size 0x20
class CosmeticItemAnimationSetLoopData: public None
{
public:
	Class AnimSequenceBase*                            Into                                               // 0x0(0x8)
	Class AnimSequenceBase*                            Loop                                               // 0x8(0x8)
	struct FName                                       IntoSyncGroup                                      // 0x10(0x8)
	struct FName                                       LoopSyncGroup                                      // 0x18(0x8)
};


// Size 0xc
class CustomAnimationMontageComponentReplicatedData: public None
{
public:
	Struct CustomAnimationMontageId                    CustomMontageId                                    // 0x0(0x8)
	int                                                AnimationCallId                                    // 0x8(0x4)
};


// Size 0x28
class CustomAnimationMontageStagedLoopingData: public None
{
public:
	Class AnimMontage*                                 Into                                               // 0x0(0x8)
	TArray<class LoopAnims*>                           LoopAnims                                          // 0x8(0x10)
	TArray<class OutOfAnims*>                          OutOfAnims                                         // 0x18(0x10)
};


// Size 0x18
class CustomAnimationMontageDefinitionEntry: public None
{
public:
	struct FName                                       MontageId                                          // 0x0(0x8)
	Struct StringAssetReference                        Definition                                         // 0x8(0x10)
};


// Size 0x18
class ActorVelocityData: public None
{
public:
	Struct Vector                                      ActorsVelocityVector                               // 0x0(0xc)
	float                                              ActorSpeed                                         // 0xc(0x4)
	bool                                               IsCharacterMoving                                  // 0x10(0x1)
	float                                              WantedMovementSpeed                                // 0x14(0x4)
};


// Size 0x18
class WeightedAnimationData: public None
{
public:
	Struct StringAssetReference                        Animation                                          // 0x0(0x10)
	float                                              Weighting                                          // 0x10(0x4)
};


// Size 0x8
class EventCosmeticItemAttachmentSwitched: public None
{
public:
	Class Actor*                                       Owner                                              // 0x0(0x8)
};


// Size 0x8
class EventCosmeticItemSpawnedOwnerNotification: public None
{
public:
	Class Actor*                                       CosmeticItemActor                                  // 0x0(0x8)
};


// Size 0x10
class EventCosmeticItemSpawned: public None
{
public:
	Class Actor*                                       Owner                                              // 0x0(0x8)
	Class CosmeticItemAnimationSetDataAsset*           CosmeticData                                       // 0x8(0x8)
};


// Size 0x1
class EventAnimationHappyReact: public None
{
public:
};


// Size 0x1
class EventHitReactAnimationFinished: public None
{
public:
};


// Size 0x1c
class EventHitReactAnimationRequested: public None
{
public:
	Struct Vector                                      HitNormal                                          // 0x0(0xc)
	Struct Vector                                      HitVelocity                                        // 0xc(0xc)
	byte                                               ReactionAnimType                                   // 0x18(0x1)
};


// Size 0x28
class HitReactionAnimationState: public None
{
public:
	float                                              Yaw                                                // 0x0(0x4)
	float                                              AdditiveBlend                                      // 0x4(0x4)
	byte                                               ReactType                                          // 0x8(0x1)
	bool                                               ActivateNewHitReact                                // 0x9(0x1)
};


// Size 0xc
class AnimationLookAtParams: public None
{
public:
	float                                              ActivationSpeed                                    // 0x0(0x4)
	float                                              HorizontalLimit                                    // 0x4(0x4)
	float                                              VerticalLimit                                      // 0x8(0x4)
};


// Size 0x98
class AnimationLookAt: public None
{
public:
	Struct AnimationLookAtParams                       Params                                             // 0x8(0xc)
	Struct Vector                                      LookAtTarget                                       // 0x14(0xc)
	bool                                               IKLookAtActive                                     // 0x20(0x1)
};


// Size 0x1
class EventAnimationLookAtUpdated: public None
{
public:
};


// Size 0xc
class IKLookAtParams: public None
{
public:
	float                                              ActivationSpeed                                    // 0x0(0x4)
	float                                              HorizontalLimit                                    // 0x4(0x4)
	float                                              VerticalLimit                                      // 0x8(0x4)
};


// Size 0x70
class AnimNode_WeightedLoadOnDemandSquencePlayer: public None
{
public:
	float                                              PlayRate                                           // 0x40(0x4)
	Class WeightedAnimSequenceLoadOnDemand*            WeightedAnimSequenceLoadOnDemand                   // 0x48(0x8)
	int                                                GroupIndex                                         // 0x50(0x4)
	byte                                               GroupRole                                          // 0x54(0x1)
	Class AnimSequence*                                CurrentSequence                                    // 0x58(0x8)
	Class AnimSequence*                                NextSequence                                       // 0x60(0x8)
};


// Size 0xc
class EventCustomAnimationMontageExitRequested: public None
{
public:
};


// Size 0x8
class EventCustomAnimationMontageRequested: public None
{
public:
};


// Size 0xd8
class CustomAnimationMontageStateMachine: public None
{
public:
	Class CustomAnimationMontageDefinitionDataAsset*   ActiveState                                        // 0x0(0x8)
	Class CustomAnimationMontageDefinitionDataAsset*   PendingState                                       // 0x8(0x8)
	Class AnimMontage*                                 ActiveMontage                                      // 0x10(0x8)
};


// Size 0x8
class EventPreviewCharacterAnimationRequest: public None
{
public:
	Class AnimationAsset*                              AnimationToPlay                                    // 0x0(0x8)
};


// Size 0x8
class AnimationStateCompleteEvent: public None
{
public:
	class                                              CompletedStateId                                   // 0x0(0x8)
};


// Size 0x10
class WeightedAnimationTimeoutSelector: public None
{
public:
	TArray<Struct WeightedAnimationTimeout>            Weightings                                         // 0x0(0x10)
};


// Size 0x14
class WeightedAnimationTimeout: public None
{
public:
	Struct FloatRange                                  TimeoutRange                                       // 0x0(0x10)
	float                                              Weighting                                          // 0x10(0x4)
};


// Size 0x18
class DockableInfo: public None
{
public:
	struct FName                                       SocketName                                         // 0x0(0x8)
	Class SceneComponent*                              SceneComponent                                     // 0x8(0x8)
	byte                                               ShouldOverlapsUpdateOnParentUpdate                 // 0x10(0x1)
};


// Size 0x50
class Docker: public None
{
public:
};


}