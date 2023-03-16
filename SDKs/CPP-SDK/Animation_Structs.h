// Generated by DougTheDruid#2784 on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x500
struct TransformBlendCurve
{
public:
	bool                                                         UseLocationCurve;                                  // 0x0(0x1)
	char                                                         pad0x7_J6KFA[0x7];                                 // 0x1(0x7)
	Struct RuntimeVectorCurve                                    LocationCurve;                                     // 0x8(0x170)
	bool                                                         UseRotationCurve;                                  // 0x178(0x1)
	char                                                         pad0x7_29Q2N[0x7];                                 // 0x179(0x7)
	Struct RuntimeVectorCurve                                    RotationCurve;                                     // 0x180(0x170)
	bool                                                         UseScaleCurve;                                     // 0x2f0(0x1)
	char                                                         pad0x7_0R6DM[0x7];                                 // 0x2f1(0x7)
	Struct RuntimeVectorCurve                                    ScaleCurve;                                        // 0x2f8(0x170)
	char                                                         pad0x8_T6ECD[0x8];                                 // 0x468(0x8)
	Struct Transform                                             SourceTransform;                                   // 0x470(0x30)
	Struct Transform                                             TargetTransform;                                   // 0x4a0(0x30)
};


// Size 0x8
struct CustomAnimationMontageId
{
public:
	struct FName                                                 CustomAnimationMontageId;                          // 0x0(0x8)
};


// Size 0x8
struct HitReactionAnimationData
{
public:
	Class BlendSpace1D*                                          HitReactBlendSpace;                                // 0x0(0x8)
};


// Size 0x18
struct AnimDataEntryStructWrapper
{
public:
};


// Size 0x18
struct AnimationDataStoreEntry
{
public:
	class                                                        AnimDataId;                                        // 0x0(0x8)
	Class AnimationData*                                         AnimData;                                          // 0x8(0x8)
	Class AnimationServerData*                                   AnimServerData;                                    // 0x10(0x8)
};


// Size 0x40
struct AnimationDataStoreLoadingEntry
{
public:
	class                                                        AnimDataId;                                        // 0x38(0x8)
};


// Size 0x28
struct AnimationDataStoreAssetWeakReferenceEntry
{
public:
	class                                                        AnimDataId;                                        // 0x0(0x8)
};


// Size 0x18
struct AnimationDataStoreAssetEntry
{
public:
	class                                                        AnimDataId;                                        // 0x0(0x8)
	class                                                        AnimDataTypeCooked;                                // 0x8(0x8)
	Class AnimationServerData*                                   AnimServerData;                                    // 0x10(0x8)
};


// Size 0xc
struct CurveUpdateValues
{
public:
	struct FName                                                 CurveName;                                         // 0x0(0x8)
	float                                                        FinalValue;                                        // 0x8(0x4)
};


// Size 0x40
struct CharacterAnimationIKUpdateParams
{
public:
	float                                                        CurrentAlpha;                                      // 0x0(0x4)
	float                                                        TranslationStrength;                               // 0x4(0x4)
	float                                                        RotationStrength;                                  // 0x8(0x4)
	Struct Vector                                                Location;                                          // 0xc(0xc)
	char                                                         pad0x8_E2AR8[0x8];                                 // 0x18(0x8)
	Struct Quat                                                  Orientation;                                       // 0x20(0x10)
	byte                                                         EffectorSpace;                                     // 0x30(0x1)
	char                                                         pad0x3_N9XHD[0x3];                                 // 0x31(0x3)
	struct FName                                                 ParentBone;                                        // 0x34(0x8)
};


// Size 0x60
struct LimbIK
{
public:
};


// Size 0x10
struct CosmeticItems
{
public:
	TArray<class Actor*>                                         CosmeticItemArray;                                 // 0x0(0x10)
};


// Size 0x20
struct CosmeticItemAnimationSetLoopData
{
public:
	Class AnimSequenceBase*                                      Into;                                              // 0x0(0x8)
	Class AnimSequenceBase*                                      Loop;                                              // 0x8(0x8)
	struct FName                                                 IntoSyncGroup;                                     // 0x10(0x8)
	struct FName                                                 LoopSyncGroup;                                     // 0x18(0x8)
};


// Size 0xc
struct CustomAnimationMontageComponentReplicatedData
{
public:
	Struct CustomAnimationMontageId                              CustomMontageId;                                   // 0x0(0x8)
	int                                                          AnimationCallId;                                   // 0x8(0x4)
};


// Size 0x28
struct CustomAnimationMontageStagedLoopingData
{
public:
	Class AnimMontage*                                           Into;                                              // 0x0(0x8)
	TArray<class AnimMontage*>                                   LoopAnims;                                         // 0x8(0x10)
	TArray<class AnimMontage*>                                   OutOfAnims;                                        // 0x18(0x10)
};


// Size 0x18
struct CustomAnimationMontageDefinitionEntry
{
public:
	struct FName                                                 MontageId;                                         // 0x0(0x8)
	Struct StringAssetReference                                  Definition;                                        // 0x8(0x10)
};


// Size 0x18
struct ActorVelocityData
{
public:
	Struct Vector                                                ActorsVelocityVector;                              // 0x0(0xc)
	float                                                        ActorSpeed;                                        // 0xc(0x4)
	bool                                                         IsCharacterMoving;                                 // 0x10(0x1)
	char                                                         pad0x3_TQEC2[0x3];                                 // 0x11(0x3)
	float                                                        WantedMovementSpeed;                               // 0x14(0x4)
};


// Size 0x18
struct WeightedAnimationData
{
public:
	Struct StringAssetReference                                  Animation;                                         // 0x0(0x10)
	float                                                        Weighting;                                         // 0x10(0x4)
};


// Size 0x8
struct EventCosmeticItemAttachmentSwitched
{
public:
	Class Actor*                                                 Owner;                                             // 0x0(0x8)
};


// Size 0x8
struct EventCosmeticItemSpawnedOwnerNotification
{
public:
	Class Actor*                                                 CosmeticItemActor;                                 // 0x0(0x8)
};


// Size 0x10
struct EventCosmeticItemSpawned
{
public:
	Class Actor*                                                 Owner;                                             // 0x0(0x8)
	Class CosmeticItemAnimationSetDataAsset*                     CosmeticData;                                      // 0x8(0x8)
};


// Size 0x1
struct EventAnimationResetHappyReact
{
public:
};


// Size 0x1
struct EventAnimationHappyReact
{
public:
};


// Size 0x1
struct EventHitReactAnimationFinished
{
public:
};


// Size 0x1c
struct EventHitReactAnimationRequested
{
public:
	Struct Vector                                                HitNormal;                                         // 0x0(0xc)
	Struct Vector                                                HitVelocity;                                       // 0xc(0xc)
	byte                                                         ReactionAnimType;                                  // 0x18(0x1)
};


// Size 0x28
struct HitReactionAnimationState
{
public:
	float                                                        Yaw;                                               // 0x0(0x4)
	float                                                        AdditiveBlend;                                     // 0x4(0x4)
	byte                                                         ReactType;                                         // 0x8(0x1)
	bool                                                         ActivateNewHitReact;                               // 0x9(0x1)
};


// Size 0xc
struct AnimationLookAtParams
{
public:
	float                                                        ActivationSpeed;                                   // 0x0(0x4)
	float                                                        HorizontalLimit;                                   // 0x4(0x4)
	float                                                        VerticalLimit;                                     // 0x8(0x4)
};


// Size 0x98
struct AnimationLookAt
{
public:
	Struct AnimationLookAtParams                                 Params;                                            // 0x8(0xc)
	Struct Vector                                                LookAtTarget;                                      // 0x14(0xc)
	bool                                                         IKLookAtActive;                                    // 0x20(0x1)
};


// Size 0x1
struct EventAnimationLookAtUpdated
{
public:
};


// Size 0xc
struct IKLookAtParams
{
public:
	float                                                        ActivationSpeed;                                   // 0x0(0x4)
	float                                                        HorizontalLimit;                                   // 0x4(0x4)
	float                                                        VerticalLimit;                                     // 0x8(0x4)
};


// Size 0x70
struct AnimNode_WeightedLoadOnDemandSquencePlayer
{
public:
	float                                                        PlayRate;                                          // 0x40(0x4)
	char                                                         pad0x4_6YVV8[0x4];                                 // 0x44(0x4)
	Class WeightedAnimSequenceLoadOnDemand*                      WeightedAnimSequenceLoadOnDemand;                  // 0x48(0x8)
	int                                                          GroupIndex;                                        // 0x50(0x4)
	byte                                                         GroupRole;                                         // 0x54(0x1)
	char                                                         pad0x3_8XXI3[0x3];                                 // 0x55(0x3)
	Class AnimSequence*                                          CurrentSequence;                                   // 0x58(0x8)
	Class AnimSequence*                                          NextSequence;                                      // 0x60(0x8)
};


// Size 0x38
struct WeightedAnimationLoadOnDemandDataMetaData
{
public:
	TArray<struct AnimationList>                                 AnimationList;                                     // 0x0(0x10)
	Struct FString                                               AssetName;                                         // 0x10(0x10)
	Struct FString                                               FallbackSkeletonName;                              // 0x20(0x10)
	bool                                                         FallbackValidAdditive;                             // 0x30(0x1)
};


// Size 0xc
struct EventCustomAnimationMontageExitRequested
{
public:
};


// Size 0x8
struct EventCustomAnimationMontageRequested
{
public:
};


// Size 0xd8
struct CustomAnimationMontageStateMachine
{
public:
	Class CustomAnimationMontageDefinitionDataAsset*             ActiveState;                                       // 0x0(0x8)
	Class CustomAnimationMontageDefinitionDataAsset*             PendingState;                                      // 0x8(0x8)
	Class AnimMontage*                                           ActiveMontage;                                     // 0x10(0x8)
};


// Size 0x8
struct EventPreviewCharacterAnimationRequest
{
public:
	Class AnimationAsset*                                        AnimationToPlay;                                   // 0x0(0x8)
};


// Size 0x8
struct AnimationStateCompleteEvent
{
public:
	class                                                        CompletedStateId;                                  // 0x0(0x8)
};


// Size 0x10
struct WeightedAnimationTimeoutSelector
{
public:
	TArray<struct Weightings>                                    Weightings;                                        // 0x0(0x10)
};


// Size 0x14
struct WeightedAnimationTimeout
{
public:
	Struct FloatRange                                            TimeoutRange;                                      // 0x0(0x10)
	float                                                        Weighting;                                         // 0x10(0x4)
};


// Size 0x18
struct DockableInfo
{
public:
	struct FName                                                 SocketName;                                        // 0x0(0x8)
	Class SceneComponent*                                        SceneComponent;                                    // 0x8(0x8)
	byte                                                         ShouldOverlapsUpdateOnParentUpdate;                // 0x10(0x1)
};


// Size 0x90
struct Docker
{
public:
};


}