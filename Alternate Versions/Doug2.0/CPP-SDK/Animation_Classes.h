namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x220
class CharacterAnimationInstance: public AnimInstance
{
public:
	Struct CharacterAnimationIKUpdateParams            IKLeftHandUpdateParams                             // 0x450(0x40)
	Struct CharacterAnimationIKUpdateParams            IKRightHandUpdateParams                            // 0x490(0x40)
	struct FName                                       RightHandIKSocketName                              // 0x4d0(0x8)
	struct FName                                       LeftHandIKSocketName                               // 0x4d8(0x8)
	Struct LimbIK                                      RightHandIK                                        // 0x4e0(0x60)
	Struct LimbIK                                      LeftHandIK                                         // 0x540(0x60)
	Struct LimbIK                                      RightFootIK                                        // 0x5a0(0x60)
	Struct LimbIK                                      LeftFootIK                                         // 0x600(0x60)
};


// Size 0x0
class AnimationData: public Object
{
public:
};


// Size 0x0
class AnimationServerData: public Object
{
public:
};


// Size 0x0
class AIAnimationInstanceInterface: public Interface
{
public:
};


// Size 0x0
class AnimationDataConsumerInterface: public Interface
{
public:
};


// Size 0x0
class AnimationDataFunctionLib: public BlueprintFunctionLibrary
{
public:
};


// Size 0x0
class AnimationDataOverriderInterface: public Interface
{
public:
};


// Size 0x0
class AnimationDataStoreId: public Object
{
public:
};


// Size 0x0
class AnimationDataStoreOverrideId: public AnimationDataStoreId
{
public:
};


// Size 0x38
class AnimationDataStore: public Object
{
public:
	TArray<Struct GetAnimationDataClass>               Data                                               // 0x40(0x10)
	TArray<Struct Data>                                LoadingData                                        // 0x50(0x10)
};


// Size 0x10
class AnimationDataStoreAsset: public DataAsset
{
public:
	TArray<Struct AssetWeakRefs>                       AssetRefs                                          // 0x28(0x10)
};


// Size 0x10
class AnimationDataStoreWeakReferenceAsset: public DataAsset
{
public:
	TArray<Struct AnimationDataStoreWeakReferences>    AssetWeakRefs                                      // 0x28(0x10)
};


// Size 0x0
class AnimationDataStoreLoaderInterface: public Interface
{
public:
};


// Size 0xc8
class AnimationDataStoreComponent: public ActorComponent
{
public:
	Class AnimationDataStoreWeakReferenceAsset*        AnimationDataStoreWeakReferences                   // 0xd0(0x8)
};


// Size 0x0
class AnimationDataStoreInterface: public Interface
{
public:
};


// Size 0x10
class AnimationEditorSettings: public DeveloperSettings
{
public:
	Struct StringAssetReference                        CustomAnimationMontageIdListings                   // 0x38(0x10)
};


// Size 0x0
class AnimationLookAtInterface: public Interface
{
public:
};


// Size 0x0
class AnimationStateId: public Object
{
public:
};


// Size 0x0
class AnimNotify_DestroyAllCosmeticItems: public AnimNotify
{
public:
};


// Size 0x8
class AnimNotify_DestroyCosmeticItem: public AnimNotify
{
public:
	byte                                               DestroyLocation                                    // 0x38(0x1)
};


// Size 0x8
class AnimNotify_DetachAndMaintainWorldPosition: public AnimNotify
{
public:
	byte                                               CurrentLocation                                    // 0x38(0x1)
};


// Size 0x18
class AnimNotify_PlayAnimationForCosmetic: public AnimNotify
{
public:
	byte                                               CosmeticLocation                                   // 0x38(0x1)
	Class AnimSequenceBase*                            CosmeticItemAnimation                              // 0x40(0x8)
	bool                                               Looping                                            // 0x48(0x1)
};


// Size 0x8
class AnimNotify_PlayMontage: public AnimNotify
{
public:
	Class AnimMontage*                                 MontageToPlay                                      // 0x38(0x8)
};


// Size 0x8
class AnimNotify_SetCosmeticItemVisibility: public AnimNotify
{
public:
	byte                                               ItemLocation                                       // 0x38(0x1)
	bool                                               Visible                                            // 0x39(0x1)
	bool                                               RenderShadow                                       // 0x3a(0x1)
	bool                                               RenderShadowWhenHidden                             // 0x3b(0x1)
	bool                                               UpdateForRole                                      // 0x3c(0x1)
	byte                                               UpdateRole                                         // 0x3d(0x1)
};


// Size 0x8
class AnimNotify_SetLookAtEnabled: public AnimNotify
{
public:
	bool                                               Enabled                                            // 0x38(0x1)
};


// Size 0x20
class AnimNotify_SpawnCosmeticItem: public AnimNotify
{
public:
	class                                              ItemSpawnClass                                     // 0x38(0x8)
	byte                                               SpawnLocation                                      // 0x40(0x1)
	Class CosmeticItemAnimationSetDataAsset*           CosmeticItemAnimationDataSet                       // 0x48(0x8)
	bool                                               SpawnHidden                                        // 0x50(0x1)
	bool                                               SpawnForRole                                       // 0x51(0x1)
	byte                                               SpawnRole                                          // 0x52(0x1)
};


// Size 0x8
class AnimNotify_StateComplete: public AnimNotify
{
public:
	class                                              CompletedStateId                                   // 0x38(0x8)
};


// Size 0x8
class AnimNotify_SwitchCosmeticItemAttachment: public AnimNotify
{
public:
	byte                                               PreviousLocation                                   // 0x38(0x1)
	byte                                               NewLocation                                        // 0x39(0x1)
};


// Size 0x18
class AnimNotify_ToggleIK: public AnimNotify
{
public:
	TArray<Byte TriggerWhenDisabled>                   IKLimbsToAdjust                                    // 0x38(0x10)
	bool                                               Enabled                                            // 0x48(0x1)
};


// Size 0x10
class AnimNotifyCondition_FeatureConfigValidation: public AnimNotifyCondition
{
public:
	struct FName                                       Feature                                            // 0x28(0x8)
	bool                                               TriggerWhenDisabled                                // 0x30(0x1)
};


// Size 0x8
class AnimNotifyState_HideMeshByBoneForDuration: public AnimNotifyState
{
public:
	struct FName                                       BoneName                                           // 0x28(0x8)
};


// Size 0x28
class AnimNotifyState_PropagateCurveValuesToMaterials: public AnimNotifyState
{
public:
	TArray<Struct DestroyLocation>                     CurveValues                                        // 0x28(0x10)
	bool                                               DoNotPropagteCurveValues                           // 0x38(0x1)
};


// Size 0x0
class AnimNotifyState_SetLookAtDisabledForDuration: public AnimNotifyState
{
public:
};


// Size 0x0
class AnimNotifyState_SetLookAtEnabledForDuration: public AnimNotifyState
{
public:
};


// Size 0x0
class AnimNotifyState_SetMeshInvisibleForDuration: public AnimNotifyState
{
public:
};


// Size 0x20
class AnimNotifyState_SpawnCosmeticItem: public AnimNotifyState
{
public:
	class                                              CosmeticItemToSpawn                                // 0x28(0x8)
	byte                                               SpawnLocation                                      // 0x30(0x1)
	Class CosmeticItemAnimationSetDataAsset*           CosmeticItemAnimationDataSet                       // 0x38(0x8)
	bool                                               SpawnHidden                                        // 0x40(0x1)
	bool                                               DestroyOnEnd                                       // 0x41(0x1)
	bool                                               OverrideDestroyLocation                            // 0x42(0x1)
	byte                                               DestroyLocation                                    // 0x43(0x1)
};


// Size 0x0
class AthenaAnimationControllableSocketsInterface: public Interface
{
public:
};


// Size 0x0
class CharacterIKInterface: public Interface
{
public:
};


// Size 0x80
class PreviewCharacterAnimationInstance: public CharacterAnimationInstance
{
public:
	Class AnimMontage*                                 ActiveMontage                                      // 0x660(0x8)
};


// Size 0x0
class ClientSkeletalMeshComponent: public SkeletalMeshComponent
{
public:
};


// Size 0xb0
class CosmeticItemActor: public Actor
{
public:
	Class SkeletalMeshComponent*                       MeshComponent                                      // 0x3d8(0x8)
};


// Size 0x0
class CosmeticItemAnimationInterface: public Interface
{
public:
};


// Size 0x60
class CosmeticItemAnimationComponent: public ActorComponent
{
public:
	Class CosmeticItemAnimationDataAsset*              DataAsset                                          // 0x120(0x8)
};


// Size 0x38
class CosmeticItemAnimationDataAsset: public DataAsset
{
public:
	struct FName                                       WieldSockets                                       // 0x28(0x8)
};


// Size 0x0
class CosmeticItemAnimationDataConsumerInterface: public Interface
{
public:
};


// Size 0xb0
class CosmeticItemAnimationInstance: public AnimInstance
{
public:
	Class CosmeticItemAnimationSetDataAsset*           AnimationDataSet                                   // 0x448(0x8)
	Class AnimMontage*                                 ActiveMontage                                      // 0x450(0x8)
};


// Size 0x30
class CosmeticItemAnimationSetDataAsset: public DataAsset
{
public:
	Struct CosmeticItemAnimationSetLoopData            LoopData                                           // 0x28(0x20)
	TArray<class OneShotSequences*>                    OneShotSequences                                   // 0x48(0x10)
};


// Size 0x0
class CustomAnimationHandlerInterface: public Interface
{
public:
};


// Size 0x0
class CustomAnimationInstanceInterface: public Interface
{
public:
};


// Size 0x0
class CustomAnimationInstanceProviderInterface: public Interface
{
public:
};


// Size 0x0
class CustomAnimationMontageInterface: public Interface
{
public:
};


// Size 0x70
class CustomAnimationMontageComponent: public ActorComponent
{
public:
	Struct CustomAnimationMontageComponentReplicatedData ReplicatedData                                     // 0xd0(0xc)
};


// Size 0x48
class CustomAnimationMontageDefinitionDataAsset: public DataAsset
{
public:
	struct FName                                       MontageId                                          // 0x28(0x8)
	byte                                               MontageType                                        // 0x30(0x1)
	Class AnimMontage*                                 MontageData                                        // 0x38(0x8)
	Struct CustomAnimationMontageStagedLoopingData     LoopingData                                        // 0x40(0x28)
	bool                                               Interrupts                                         // 0x68(0x1)
};


// Size 0x10
class CustomAnimationMontageDefinitionListingDataAsset: public DataAsset
{
public:
	TArray<Struct MontageIds>                          Entries                                            // 0x28(0x10)
};


// Size 0x10
class CustomAnimationMontageIdListingDataAsset: public DataAsset
{
public:
	TArray<Name None>                                  MontageIds                                         // 0x28(0x10)
};


// Size 0x0
class DockingAnimationInterface: public Interface
{
public:
};


// Size 0x0
class EmotePropDataInterface: public Interface
{
public:
};


// Size 0x0
class IndexedPlayableMontagesInterface: public Interface
{
public:
};


// Size 0x0
class LimbIKFunctionLibrary: public BlueprintFunctionLibrary
{
public:
};


// Size 0x0
class LoadableAnimationsInterface: public Interface
{
public:
};


// Size 0x0
class LocomotionFunctionLib: public BlueprintFunctionLibrary
{
public:
};


// Size 0x0
class NetworkSyncedAnimationInstanceInterface: public Interface
{
public:
};


// Size 0x48
class NetworkSyncedAnimationComponent: public ActorComponent
{
public:
	float                                              PlayRateAdjustMaxTimeDelta                         // 0xc8(0x4)
	float                                              PlayRateAdjustMaxPercentageToSpeedUpPlayRate       // 0xcc(0x4)
	float                                              PlayRateAdjustMaxPercentageToSlowDownPlayRate      // 0xd0(0x4)
	float                                              ReplicatedAnimationProgression                     // 0xd4(0x4)
	int                                                ReplicatedPlayingAnimationIndex                    // 0xd8(0x4)
	float                                              ReplicatedPlayRate                                 // 0xdc(0x4)
	Class AnimInstance*                                AnimInstance                                       // 0xe8(0x8)
};


// Size 0x0
class RemoteAnimPlayableInterface: public Interface
{
public:
};


// Size 0x0
class ServerAnimationDataStoreInterface: public Interface
{
public:
};


// Size 0x8
class SyncGroupAnimMetaData: public AnimMetaData
{
public:
	struct FName                                       SyncGroup                                          // 0x28(0x8)
};


// Size 0x508
class TransformBlendCurveComponent: public ActorComponent
{
public:
	Struct TransformBlendCurve                         Curve                                              // 0xd0(0x500)
};


// Size 0x0
class TurningFunctionLib: public BlueprintFunctionLibrary
{
public:
};


// Size 0x28
class WaitForAnimationStateEntryProxy: public Object
{
public:
};


// Size 0x20
class WaitForAnimationStateExitProxy: public Object
{
public:
};


// Size 0x18
class WeightedAnimationLoadOnDemandDataAsset: public DataAsset
{
public:
	TArray<Struct CreateNewWeightedAnimSequenceLoadOnDemand> WeightedAnimationList                              // 0x28(0x10)
	Class AnimSequence*                                FallBackAnimation                                  // 0x38(0x8)
};


// Size 0xf8
class WeightedAnimSequenceLoadOnDemand: public Object
{
public:
	Class AnimSequence*                                FallBackAnimation                                  // 0x28(0x8)
	TArray<Struct FallBackAnimation>                   WeightedAnimationList                              // 0x30(0x10)
};


// Size 0x0
class DockableInterface: public Interface
{
public:
};


}