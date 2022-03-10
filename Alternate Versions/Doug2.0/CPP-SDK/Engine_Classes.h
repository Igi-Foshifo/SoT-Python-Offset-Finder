namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0xa0
class ActorComponent: public Object
{
public:
	Struct ActorComponentTickFunction                  PrimaryComponentTick                               // 0x30(0x50)
	TArray<Name /Game/DataAssets/Impact/Cannonball/Impact_CannonBall_Cursed_Fir> ComponentTags                                      // 0x80(0x10)
	TArray<Struct SimpleMemberReference>               UCSModifiedProperties                              // 0x90(0x10)
	TArray<class AssetUserData*>                       AssetUserData                                      // 0xb0(0x10)
	bool                                               bReplicates                                        // 0xc0(0x1)
	bool                                               bNetAddressable                                    // 0xc0(0x1)
	bool                                               bCreatedByConstructionScript                       // 0xc1(0x1)
	bool                                               bInstanceComponent                                 // 0xc1(0x1)
	bool                                               bAutoActivate                                      // 0xc2(0x1)
	bool                                               bIsActive                                          // 0xc2(0x1)
	bool                                               bEditableWhenInherited                             // 0xc2(0x1)
	bool                                               bNeedsLoadForClient                                // 0xc3(0x1)
	bool                                               bNeedsLoadForServer                                // 0xc3(0x1)
	byte                                               TargetNetDormancy                                  // 0xc4(0x1)
	byte                                               CreationMethod                                     // 0xc5(0x1)
};


// Size 0x3a8
class Actor: public Object
{
public:
	Struct ActorTickFunction                           PrimaryActorTick                                   // 0x28(0x50)
	float                                              CustomTimeDilation                                 // 0x78(0x4)
	bool                                               bAllowRemovalFromServerWhenCollisionMerged         // 0x7c(0x1)
	bool                                               bAllowRemovalFromServerWhenAutomaticallyInstanced  // 0x7c(0x1)
	bool                                               bHidden                                            // 0x7c(0x1)
	bool                                               bNetTemporary                                      // 0x7c(0x1)
	bool                                               bNetStartup                                        // 0x7c(0x1)
	bool                                               bOnlyRelevantToOwner                               // 0x7c(0x1)
	bool                                               bAlwaysRelevant                                    // 0x7c(0x1)
	bool                                               bReplicateMovement                                 // 0x7c(0x1)
	bool                                               bTearOff                                           // 0x7d(0x1)
	bool                                               bExchangedRoles                                    // 0x7d(0x1)
	bool                                               bPendingNetUpdate                                  // 0x7d(0x1)
	bool                                               bNetLoadOnClient                                   // 0x7d(0x1)
	bool                                               bNetUseOwnerRelevancy                              // 0x7d(0x1)
	bool                                               bBlockInput                                        // 0x7d(0x1)
	bool                                               bCanBeInCluster                                    // 0x7d(0x1)
	bool                                               bActorEnableCollision                              // 0x7e(0x1)
	bool                                               bReplicateAttachment                               // 0x7e(0x1)
	bool                                               bReplicates                                        // 0x7e(0x1)
	byte                                               RemoteRole                                         // 0x82(0x1)
	Class Actor*                                       Owner                                              // 0x88(0x8)
	byte                                               SpawnRestrictions                                  // 0x90(0x1)
	Struct RepMovement                                 ReplicatedMovement                                 // 0x94(0x38)
	Struct RepAttachment                               AttachmentReplication                              // 0xd0(0x48)
	byte                                               Role                                               // 0x118(0x1)
	byte                                               AutoReceiveInput                                   // 0x11a(0x1)
	int                                                InputPriority                                      // 0x11c(0x4)
	Class InputComponent*                              InputComponent                                     // 0x120(0x8)
	float                                              NetCullDistanceSquared                             // 0x128(0x4)
	int                                                NetTag                                             // 0x130(0x4)
	float                                              NetUpdateTime                                      // 0x134(0x4)
	float                                              NetUpdateFrequency                                 // 0x138(0x4)
	float                                              NetPriority                                        // 0x13c(0x4)
	float                                              LastNetUpdateTime                                  // 0x140(0x4)
	struct FName                                       NetDriverName                                      // 0x144(0x8)
	bool                                               bAutoDestroyWhenFinished                           // 0x14c(0x1)
	bool                                               bCanBeDamaged                                      // 0x14c(0x1)
	bool                                               bActorIsBeingDestroyed                             // 0x14c(0x1)
	bool                                               bCollideWhenPlacing                                // 0x14c(0x1)
	bool                                               bFindCameraComponentWhenViewTarget                 // 0x14c(0x1)
	bool                                               bRelevantForNetworkReplays                         // 0x14c(0x1)
	byte                                               SpawnCollisionHandlingMethod                       // 0x150(0x1)
	Class Pawn*                                        Instigator                                         // 0x158(0x8)
	TArray<class Actor*>                               Children                                           // 0x160(0x10)
	Class SceneComponent*                              RootComponent                                      // 0x170(0x8)
	TArray<class ControllingMatineeActors*>            ControllingMatineeActors                           // 0x178(0x10)
	float                                              InitialLifeSpan                                    // 0x188(0x4)
	bool                                               bAllowReceiveTickEventOnDedicatedServer            // 0x190(0x1)
	TArray<Name /Game/Materials/Environments/Common/Terrain/Decals/Wilds/wld_de> Layers                                             // 0x198(0x10)
	Struct ActorPtr                                    ParentComponentActor                               // 0x1a8(0x8)
	TArray<Weakclass ParentComponentActor>             ChildComponentActors                               // 0x1b0(0x10)
	bool                                               bActorSeamlessTraveled                             // 0x1c8(0x1)
	bool                                               bIgnoresOriginShifting                             // 0x1c8(0x1)
	bool                                               bEnableAutoLODGeneration                           // 0x1c8(0x1)
	bool                                               InvertFeatureCheck                                 // 0x1c8(0x1)
	struct FName                                       Feature                                            // 0x1cc(0x8)
	TArray<Name /Game/Textures/Ships/Livery/Small/Variation/shp_small_livery_ro> Tags                                               // 0x1d8(0x10)
	bool                                               bDoOverlapNotifiesOnLoad                           // 0x231(0x1)
	TArray<class BlueprintCreatedComponents*>          BlueprintCreatedComponents                         // 0x328(0x10)
	TArray<class InstanceComponents*>                  InstanceComponents                                 // 0x338(0x10)
	TArray<class ChildActorInterfaceProviders*>        ChildActorInterfaceProviders                       // 0x350(0x10)
	double                                             DormancyLingeringInSeconds                         // 0x3c8(0x8)
};


// Size 0x0
class DataAsset: public Object
{
public:
};


// Size 0x0
class BlueprintFunctionLibrary: public Object
{
public:
};


// Size 0x208
class SceneComponent: public ActorComponent
{
public:
	Class SceneComponent*                              AttachParent                                       // 0xc8(0x8)
	TArray<class AttachChildren*>                      AttachChildren                                     // 0xd0(0x10)
	struct FName                                       AttachSocketName                                   // 0xe0(0x8)
	bool                                               bRequiresCustomLocation                            // 0xe8(0x1)
	bool                                               bAbsoluteLocation                                  // 0xe8(0x1)
	bool                                               bAbsoluteTranslation                               // 0xe8(0x1)
	bool                                               bAbsoluteRotation                                  // 0xe8(0x1)
	bool                                               bAbsoluteScale                                     // 0xe8(0x1)
	bool                                               bVisible                                           // 0xe8(0x1)
	bool                                               bHiddenInGame                                      // 0xe8(0x1)
	bool                                               bShouldUpdatePhysicsVolume                         // 0xe8(0x1)
	bool                                               bBoundsChangeTriggersStreamingDataRebuild          // 0xe9(0x1)
	bool                                               bUseAttachParentBound                              // 0xe9(0x1)
	bool                                               bComponentIsUnionOfChildren                        // 0xe9(0x1)
	bool                                               bJitterReduction                                   // 0xe9(0x1)
	bool                                               CacheRootVelocity                                  // 0xe9(0x1)
	bool                                               bWorldToComponentUpdated                           // 0xe9(0x1)
	Struct Vector                                      RelativeScale3D                                    // 0x11c(0xc)
	Struct Vector                                      RelativeLocation                                   // 0x128(0xc)
	Struct Rotator                                     RelativeRotation                                   // 0x134(0xc)
	byte                                               Mobility                                           // 0x220(0x1)
	byte                                               DetailMode                                         // 0x221(0x1)
	Struct Vector                                      ComponentVelocity                                  // 0x22c(0xc)
	TArray<Struct FName>                               SocketVelocitiesToCache                            // 0x258(0x10)
	TArray<class MovedActors*>                         MovedActors                                        // 0x268(0x10)
};


// Size 0x78
class Pawn: public Actor
{
public:
	bool                                               bUseControllerRotationPitch                        // 0x3d8(0x1)
	bool                                               bUseControllerRotationYaw                          // 0x3d8(0x1)
	bool                                               bUseControllerRotationRoll                         // 0x3d8(0x1)
	bool                                               bCanAffectNavigationGeneration                     // 0x3d8(0x1)
	float                                              BaseEyeHeight                                      // 0x3dc(0x4)
	byte                                               AutoPossessPlayer                                  // 0x3e0(0x1)
	byte                                               AutoPossessAI                                      // 0x3e1(0x1)
	class                                              AIControllerClass                                  // 0x3e8(0x8)
	Class PlayerState*                                 PlayerState                                        // 0x3f0(0x8)
	byte                                               RemoteViewPitch                                    // 0x3f8(0x1)
	Class Controller*                                  LastHitBy                                          // 0x400(0x8)
	Class Controller*                                  Controller                                         // 0x408(0x8)
	Struct Vector                                      ControlInputVector                                 // 0x428(0xc)
	Struct Vector                                      LastControlInputVector                             // 0x434(0xc)
};


// Size 0x198
class Character: public Pawn
{
public:
	Class SkeletalMeshComponent*                       Mesh                                               // 0x448(0x8)
	Class CharacterMovementComponent*                  CharacterMovement                                  // 0x450(0x8)
	Class CapsuleComponent*                            CapsuleComponent                                   // 0x458(0x8)
	Struct BasedMovementInfo                           BasedMovement                                      // 0x460(0x38)
	Struct BasedMovementInfo                           ReplicatedBasedMovement                            // 0x498(0x38)
	Struct Vector                                      BaseTranslationOffset                              // 0x4d0(0xc)
	Struct Quat                                        BaseRotationOffset                                 // 0x4e0(0x10)
	byte                                               ReplicatedMovementMode                             // 0x4f0(0x1)
	bool                                               bInBaseReplication                                 // 0x4f1(0x1)
	float                                              CrouchedEyeHeight                                  // 0x4f4(0x4)
	bool                                               bIsCrouched                                        // 0x4f8(0x1)
	bool                                               bPressedJump                                       // 0x4f8(0x1)
	bool                                               bClientUpdating                                    // 0x4f8(0x1)
	bool                                               bClientWasFalling                                  // 0x4f8(0x1)
	bool                                               bClientResimulateRootMotion                        // 0x4f8(0x1)
	bool                                               bSimGravityDisabled                                // 0x4f8(0x1)
	bool                                               bServerMoveIgnoreRootMotion                        // 0x4f8(0x1)
	float                                              JumpKeyHoldTime                                    // 0x4fc(0x4)
	float                                              JumpMaxHoldTime                                    // 0x500(0x4)
	Struct RootMotionMovementParams                    ClientRootMotionParams                             // 0x540(0x40)
	TArray<Struct ClientRootMotionParams>              RootMotionRepMoves                                 // 0x580(0x10)
	Struct RepRootMotionMontage                        RepRootMotion                                      // 0x590(0x40)
};


// Size 0x88
class InputComponent: public ActorComponent
{
public:
};


// Size 0x418
class AnimInstance: public Object
{
public:
	Class Skeleton*                                    CurrentSkeleton                                    // 0x28(0x8)
	TArray<Struct CurrentSkeleton>                     UngroupedActivePlayers                             // 0x30(0x10)
	TArray<Struct UngroupedActivePlayers>              SyncGroups                                         // 0x40(0x10)
	TArray<Struct SyncGroups>                          VertexAnims                                        // 0x50(0x10)
	byte                                               RootMotionMode                                     // 0x60(0x1)
	bool                                               bWarnAboutBlueprintUsage                           // 0x61(0x1)
	bool                                               bQueueMontageEvents                                // 0x148(0x1)
	TArray<Struct bQueueMontageEvents>                 ActiveAnimNotifyState                              // 0x240(0x10)
	bool                                               bBoneCachesInvalidated                             // 0x3a8(0x1)
	bool                                               bBlueprintAnimUpdateEnabled                        // 0x438(0x1)
};


// Size 0x10
class AnimNotify: public Object
{
public:
	bool                                               PlayedWithSequencer                                // 0x28(0x1)
};


// Size 0x0
class AnimNotifyState: public Object
{
public:
};


// Size 0x30
class AnimNotifyState_TimedParticleEffect: public AnimNotifyState
{
public:
	Class ParticleSystem*                              PSTemplate                                         // 0x28(0x8)
	struct FName                                       SocketName                                         // 0x30(0x8)
	Struct Vector                                      LocationOffset                                     // 0x38(0xc)
	Struct Rotator                                     RotationOffset                                     // 0x44(0xc)
	bool                                               bOwnerOnlySee                                      // 0x50(0x1)
	bool                                               bOwnerNoSee                                        // 0x51(0x1)
	bool                                               bDestroyAtEnd                                      // 0x52(0x1)
	bool                                               bWorldOwnedEffect                                  // 0x53(0x1)
};


// Size 0x570
class CameraComponent: public SceneComponent
{
public:
	float                                              FieldOfView                                        // 0x2d0(0x4)
	float                                              OrthoWidth                                         // 0x2d4(0x4)
	float                                              OrthoNearClipPlane                                 // 0x2d8(0x4)
	float                                              OrthoFarClipPlane                                  // 0x2dc(0x4)
	float                                              AspectRatio                                        // 0x2e0(0x4)
	bool                                               bConstrainAspectRatio                              // 0x2e4(0x1)
	bool                                               bUseFieldOfViewForLOD                              // 0x2e4(0x1)
	bool                                               bUsePawnControlRotation                            // 0x2e4(0x1)
	byte                                               ProjectionMode                                     // 0x2e8(0x1)
	float                                              PostProcessBlendWeight                             // 0x2ec(0x4)
	Struct PostProcessSettings                         PostProcessSettings                                // 0x2f0(0x540)
	bool                                               bUseControllerViewRotation                         // 0x830(0x1)
};


// Size 0x48
class MovementComponent: public ActorComponent
{
public:
	Class SceneComponent*                              UpdatedComponent                                   // 0xc8(0x8)
	Class PrimitiveComponent*                          UpdatedPrimitive                                   // 0xd0(0x8)
	Struct Vector                                      Velocity                                           // 0xdc(0xc)
	bool                                               bConstrainToPlane                                  // 0xe8(0x1)
	bool                                               bSnapToPlaneAtStart                                // 0xe8(0x1)
	byte                                               PlaneConstraintAxisSetting                         // 0xec(0x1)
	Struct Vector                                      PlaneConstraintNormal                              // 0xf0(0xc)
	Struct Vector                                      PlaneConstraintOrigin                              // 0xfc(0xc)
	bool                                               bUpdateOnlyIfRendered                              // 0x108(0x1)
	bool                                               bAutoUpdateTickRegistration                        // 0x108(0x1)
	bool                                               bAutoRegisterUpdatedComponent                      // 0x108(0x1)
};


// Size 0x48
class NavMovementComponent: public MovementComponent
{
public:
	Struct NavAgentProperties                          NavAgentProps                                      // 0x110(0x30)
	bool                                               bUpdateNavAgentWithOwnersCollision                 // 0x140(0x1)
	Struct MovementProperties                          MovementState                                      // 0x144(0x4)
	bool                                               UseDefaultNavWalkingSearchRadiusScale              // 0x150(0x1)
	bool                                               UseDefaultNavWalkingSearchHeightScale              // 0x151(0x1)
};


// Size 0x8
class PawnMovementComponent: public NavMovementComponent
{
public:
	Class Pawn*                                        PawnOwner                                          // 0x158(0x8)
};


// Size 0x400
class CharacterMovementComponent: public PawnMovementComponent
{
public:
	Class Character*                                   CharacterOwner                                     // 0x178(0x8)
	float                                              GravityScale                                       // 0x180(0x4)
	float                                              MaxStepHeight                                      // 0x184(0x4)
	float                                              JumpZVelocity                                      // 0x188(0x4)
	float                                              JumpOffJumpZFactor                                 // 0x18c(0x4)
	float                                              WalkableFloorAngle                                 // 0x190(0x4)
	float                                              WalkableFloorZ                                     // 0x194(0x4)
	byte                                               MovementMode                                       // 0x198(0x1)
	byte                                               CustomMovementMode                                 // 0x199(0x1)
	float                                              GroundFriction                                     // 0x1c0(0x4)
	float                                              MaxWalkSpeed                                       // 0x1c4(0x4)
	float                                              MaxWalkSpeedBackwards                              // 0x1c8(0x4)
	float                                              WalkBackwardsMinAngle                              // 0x1cc(0x4)
	float                                              WalkBackwardsMaxAngle                              // 0x1d0(0x4)
	float                                              MaxWalkSpeedCrouched                               // 0x1d4(0x4)
	float                                              MaxSwimSpeed                                       // 0x1d8(0x4)
	float                                              MaxFlySpeed                                        // 0x1dc(0x4)
	float                                              MaxCustomMovementSpeed                             // 0x1e0(0x4)
	float                                              MaxAcceleration                                    // 0x1e4(0x4)
	float                                              MaxChargeAcceleration                              // 0x1e8(0x4)
	float                                              BrakingFrictionFactor                              // 0x1ec(0x4)
	float                                              BrakingFriction                                    // 0x1f0(0x4)
	bool                                               bUseSeparateBrakingFriction                        // 0x1f4(0x1)
	float                                              BrakingDecelerationWalking                         // 0x1f8(0x4)
	float                                              BrakingDecelerationFalling                         // 0x1fc(0x4)
	float                                              BrakingDecelerationSwimming                        // 0x200(0x4)
	float                                              BrakingDecelerationFlying                          // 0x204(0x4)
	float                                              AirControl                                         // 0x208(0x4)
	float                                              AirControlBoostMultiplier                          // 0x20c(0x4)
	float                                              AirControlBoostVelocityThreshold                   // 0x210(0x4)
	float                                              FallingLateralFriction                             // 0x214(0x4)
	float                                              CrouchedHalfHeight                                 // 0x218(0x4)
	float                                              Buoyancy                                           // 0x21c(0x4)
	float                                              PerchRadiusThreshold                               // 0x220(0x4)
	float                                              PerchAdditionalHeight                              // 0x224(0x4)
	Struct Rotator                                     RotationRate                                       // 0x228(0xc)
	bool                                               bUseControllerDesiredRotation                      // 0x234(0x1)
	bool                                               bOrientRotationToMovement                          // 0x234(0x1)
	bool                                               bMovementInProgress                                // 0x234(0x1)
	bool                                               bEnableScopedMovementUpdates                       // 0x234(0x1)
	bool                                               bForceMaxAccel                                     // 0x234(0x1)
	bool                                               bRunPhysicsWithNoController                        // 0x234(0x1)
	bool                                               bForceNextFloorCheck                               // 0x234(0x1)
	bool                                               bShrinkProxyCapsule                                // 0x234(0x1)
	bool                                               bCanWalkOffLedges                                  // 0x235(0x1)
	bool                                               bCanWalkOffLedgesWhenCrouching                     // 0x235(0x1)
	bool                                               bDeferUpdateMoveComponent                          // 0x235(0x1)
	Class SceneComponent*                              DeferredUpdatedMoveComponent                       // 0x238(0x8)
	float                                              MaxOutOfWaterStepHeight                            // 0x240(0x4)
	float                                              OutofWaterZ                                        // 0x244(0x4)
	float                                              Mass                                               // 0x248(0x4)
	bool                                               bEnablePhysicsInteraction                          // 0x24c(0x1)
	bool                                               bTouchForceScaledToMass                            // 0x24d(0x1)
	bool                                               bPushForceScaledToMass                             // 0x24e(0x1)
	bool                                               bScalePushForceToVelocity                          // 0x24f(0x1)
	float                                              StandingDownwardForceScale                         // 0x250(0x4)
	float                                              InitialPushForceFactor                             // 0x254(0x4)
	float                                              PushForceFactor                                    // 0x258(0x4)
	float                                              PushForcePointZOffsetFactor                        // 0x25c(0x4)
	float                                              TouchForceFactor                                   // 0x260(0x4)
	float                                              MinTouchForce                                      // 0x264(0x4)
	float                                              MaxTouchForce                                      // 0x268(0x4)
	float                                              RepulsionForce                                     // 0x26c(0x4)
	float                                              NetMoveDelta                                       // 0x270(0x4)
	bool                                               bForceBraking                                      // 0x274(0x1)
	float                                              CrouchedSpeedMultiplier                            // 0x278(0x4)
	float                                              UpperImpactNormalScale                             // 0x27c(0x4)
	Struct Vector                                      Acceleration                                       // 0x280(0xc)
	Struct Vector                                      LastUpdateLocation                                 // 0x28c(0xc)
	Struct Vector                                      PendingImpulseToApply                              // 0x298(0xc)
	Struct Vector                                      PendingForceToApply                                // 0x2a4(0xc)
	float                                              AnalogInputModifier                                // 0x2b0(0x4)
	float                                              MaxSimulationTimeStep                              // 0x2c4(0x4)
	int                                                MaxSimulationIterations                            // 0x2c8(0x4)
	float                                              MaxSmoothNetUpdateDist                             // 0x2cc(0x4)
	float                                              NoSmoothNetUpdateDist                              // 0x2d0(0x4)
	float                                              NetworkSimulatedSmoothLocationTime                 // 0x2d4(0x4)
	float                                              NetworkSimulatedSmoothRotationTime                 // 0x2d8(0x4)
	float                                              LedgeCheckThreshold                                // 0x2dc(0x4)
	float                                              JumpOutOfWaterPitch                                // 0x2e0(0x4)
	Struct FindFloorResult                             CurrentFloor                                       // 0x2e4(0x8c)
	byte                                               DefaultLandMovementMode                            // 0x370(0x1)
	byte                                               DefaultWaterMovementMode                           // 0x371(0x1)
	byte                                               GroundMovementMode                                 // 0x372(0x1)
	bool                                               bMaintainHorizontalGroundVelocity                  // 0x374(0x1)
	bool                                               bImpartBaseVelocityX                               // 0x374(0x1)
	bool                                               bImpartBaseVelocityY                               // 0x374(0x1)
	bool                                               bImpartBaseVelocityZ                               // 0x374(0x1)
	bool                                               bImpartBaseAngularVelocity                         // 0x374(0x1)
	bool                                               bJustTeleported                                    // 0x374(0x1)
	bool                                               bNetworkUpdateReceived                             // 0x374(0x1)
	bool                                               bBasedMovementUpdateReceived                       // 0x374(0x1)
	bool                                               bMovementUpdateReceived                            // 0x375(0x1)
	bool                                               bNetworkMovementModeChanged                        // 0x375(0x1)
	bool                                               bNotifyApex                                        // 0x375(0x1)
	bool                                               bCheatFlying                                       // 0x375(0x1)
	bool                                               bWantsToCrouch                                     // 0x375(0x1)
	bool                                               bCrouchMaintainsBaseLocation                       // 0x375(0x1)
	bool                                               bIgnoreBaseRotation                                // 0x375(0x1)
	bool                                               bFastAttachedMove                                  // 0x375(0x1)
	bool                                               bAlwaysCheckFloor                                  // 0x376(0x1)
	bool                                               bUseFlatBaseForFloorChecks                         // 0x376(0x1)
	bool                                               bPerformingJumpOff                                 // 0x376(0x1)
	bool                                               bWantsToLeaveNavWalking                            // 0x376(0x1)
	bool                                               bUseRVOAvoidance                                   // 0x376(0x1)
	bool                                               bRequestedMoveUseAcceleration                      // 0x376(0x1)
	bool                                               bPreventSimulatedFloorChecks                       // 0x376(0x1)
	bool                                               bPreventNavMeshFalling                             // 0x376(0x1)
	bool                                               bHasRequestedVelocity                              // 0x377(0x1)
	bool                                               bRequestedMoveWithMaxSpeed                         // 0x377(0x1)
	bool                                               bWasAvoidanceUpdated                               // 0x377(0x1)
	bool                                               bProjectNavMeshWalking                             // 0x377(0x1)
	float                                              SmoothingClientPositionTolerance                   // 0x38c(0x4)
	float                                              AvoidanceConsiderationRadius                       // 0x390(0x4)
	Struct Vector                                      RequestedVelocity                                  // 0x394(0xc)
	int                                                AvoidanceUID                                       // 0x3a0(0x4)
	Struct NavAvoidanceMask                            AvoidanceGroup                                     // 0x3a4(0x4)
	Struct NavAvoidanceMask                            GroupsToAvoid                                      // 0x3a8(0x4)
	Struct NavAvoidanceMask                            GroupsToIgnore                                     // 0x3ac(0x4)
	float                                              AvoidanceWeight                                    // 0x3b0(0x4)
	Struct Vector                                      PendingLaunchVelocity                              // 0x3b4(0xc)
	float                                              NavMeshProjectionInterval                          // 0x458(0x4)
	float                                              NavMeshProjectionTimer                             // 0x45c(0x4)
	bool                                               bUseNavMeshProjectionTimeModifier                  // 0x460(0x1)
	float                                              MaxNavMeshProjectionInterval                       // 0x464(0x4)
	float                                              NavMeshProjectionInterpSpeed                       // 0x46c(0x4)
	bool                                               bUsePlaneBasedNavMeshProjectionInterpSystem        // 0x470(0x1)
	float                                              MaxAllowedZOffsetFromCurrentPlane                  // 0x474(0x4)
	float                                              MaxZDiffFromPrevPlane                              // 0x478(0x4)
	float                                              NavMeshProjectionHeightScaleUp                     // 0x498(0x4)
	float                                              NavMeshProjectionHeightScaleDown                   // 0x49c(0x4)
	bool                                               UseControllerRotationInNavWalkingMoveComponent     // 0x4a0(0x1)
	Struct CharacterMovementComponentPreClothTickFunction PreClothComponentTick                              // 0x4a8(0x50)
	float                                              MinTimeBetweenTimeStampResets                      // 0x50c(0x4)
	Struct RootMotionMovementParams                    RootMotionParams                                   // 0x510(0x40)
	bool                                               bWasSimulatingRootMotion                           // 0x550(0x1)
};


// Size 0x10
class DeveloperSettings: public Object
{
public:
};


// Size 0x950
class Engine: public Object
{
public:
	Class Font*                                        TinyFont                                           // 0x30(0x8)
	Struct StringAssetReference                        TinyFontName                                       // 0x38(0x10)
	Class Font*                                        SmallFont                                          // 0x48(0x8)
	Struct StringAssetReference                        SmallFontName                                      // 0x50(0x10)
	Class Font*                                        MediumFont                                         // 0x60(0x8)
	Struct StringAssetReference                        MediumFontName                                     // 0x68(0x10)
	Class Font*                                        LargeFont                                          // 0x78(0x8)
	Struct StringAssetReference                        LargeFontName                                      // 0x80(0x10)
	Class Font*                                        MonoFont                                           // 0x90(0x8)
	Struct StringAssetReference                        MonoFontName                                       // 0x98(0x10)
	Class Font*                                        SubtitleFont                                       // 0xa8(0x8)
	Struct StringAssetReference                        SubtitleFontName                                   // 0xb0(0x10)
	Class Font*                                        HugeFont                                           // 0xc0(0x8)
	Struct StringAssetReference                        HugeFontName                                       // 0xc8(0x10)
	TArray<class AdditionalFonts*>                     AdditionalFonts                                    // 0xd8(0x10)
	TArray<Str >                                       AdditionalFontNames                                // 0xf0(0x10)
	class                                              ConsoleClass                                       // 0x100(0x8)
	Struct StringClassReference                        ConsoleClassName                                   // 0x108(0x10)
	class                                              GameViewportClientClass                            // 0x118(0x8)
	Struct StringClassReference                        GameViewportClientClassName                        // 0x120(0x10)
	class                                              LocalPlayerClass                                   // 0x130(0x8)
	Struct StringClassReference                        LocalPlayerClassName                               // 0x138(0x10)
	class                                              WorldSettingsClass                                 // 0x148(0x8)
	Struct StringClassReference                        WorldSettingsClassName                             // 0x150(0x10)
	Struct StringClassReference                        NavigationSystemClassName                          // 0x160(0x10)
	class                                              NavigationSystemClass                              // 0x170(0x8)
	Struct StringClassReference                        AvoidanceManagerClassName                          // 0x178(0x10)
	class                                              AvoidanceManagerClass                              // 0x188(0x8)
	class                                              PhysicsCollisionHandlerClass                       // 0x190(0x8)
	Struct StringClassReference                        PhysicsCollisionHandlerClassName                   // 0x198(0x10)
	Struct StringClassReference                        GameUserSettingsClassName                          // 0x1a8(0x10)
	class                                              GameUserSettingsClass                              // 0x1b8(0x8)
	Struct StringClassReference                        AIControllerClassName                              // 0x1c0(0x10)
	Class GameUserSettings*                            GameUserSettings                                   // 0x1d0(0x8)
	class                                              LevelScriptActorClass                              // 0x1d8(0x8)
	Struct StringClassReference                        LevelScriptActorClassName                          // 0x1e0(0x10)
	Struct StringClassReference                        DefaultBlueprintBaseClassName                      // 0x1f0(0x10)
	Struct StringClassReference                        GameSingletonClassName                             // 0x200(0x10)
	Class Object*                                      GameSingleton                                      // 0x210(0x8)
	class                                              DefaultPreviewPawnClass                            // 0x218(0x8)
	Struct StringClassReference                        DefaultPreviewPawnClassName                        // 0x220(0x10)
	Struct FString                                     PlayOnConsoleSaveDir                               // 0x230(0x10)
	Class Texture2D*                                   DefaultTexture                                     // 0x240(0x8)
	Struct StringAssetReference                        DefaultTextureName                                 // 0x248(0x10)
	Class Texture*                                     DefaultDiffuseTexture                              // 0x258(0x8)
	Struct StringAssetReference                        DefaultDiffuseTextureName                          // 0x260(0x10)
	Class Texture2D*                                   DefaultBSPVertexTexture                            // 0x270(0x8)
	Struct StringAssetReference                        DefaultBSPVertexTextureName                        // 0x278(0x10)
	Class Texture2D*                                   HighFrequencyNoiseTexture                          // 0x288(0x8)
	Struct StringAssetReference                        HighFrequencyNoiseTextureName                      // 0x290(0x10)
	Class Texture2D*                                   DefaultBokehTexture                                // 0x2a0(0x8)
	Struct StringAssetReference                        DefaultBokehTextureName                            // 0x2a8(0x10)
	Class Texture2D*                                   HDRCalibrationTexture                              // 0x2b8(0x8)
	Struct StringAssetReference                        HDRCalibrationTextureName                          // 0x2c0(0x10)
	Class Material*                                    WireframeMaterial                                  // 0x2d0(0x8)
	Struct FString                                     WireframeMaterialName                              // 0x2d8(0x10)
	Class Material*                                    DebugMeshMaterial                                  // 0x2e8(0x8)
	Struct StringAssetReference                        DebugMeshMaterialName                              // 0x2f0(0x10)
	Class Material*                                    LevelColorationLitMaterial                         // 0x300(0x8)
	Struct FString                                     LevelColorationLitMaterialName                     // 0x308(0x10)
	Class Material*                                    LevelColorationUnlitMaterial                       // 0x318(0x8)
	Struct FString                                     LevelColorationUnlitMaterialName                   // 0x320(0x10)
	Class Material*                                    TriangleDensityScreenSpaceMaterial                 // 0x330(0x8)
	Struct FString                                     TriangleDensityScreenSpaceMaterialName             // 0x338(0x10)
	Class Material*                                    TriangleDensityWorldSpaceMaterial                  // 0x348(0x8)
	Struct FString                                     TriangleDensityWorldSpaceMaterialName              // 0x350(0x10)
	Class Material*                                    LightingTexelDensityMaterial                       // 0x360(0x8)
	Struct FString                                     LightingTexelDensityName                           // 0x368(0x10)
	Class Material*                                    ShadedLevelColorationLitMaterial                   // 0x378(0x8)
	Struct FString                                     ShadedLevelColorationLitMaterialName               // 0x380(0x10)
	Class Material*                                    ShadedLevelColorationUnlitMaterial                 // 0x390(0x8)
	Struct FString                                     ShadedLevelColorationUnlitMaterialName             // 0x398(0x10)
	Class Material*                                    RemoveSurfaceMaterial                              // 0x3a8(0x8)
	Struct StringAssetReference                        RemoveSurfaceMaterialName                          // 0x3b0(0x10)
	Class Material*                                    VertexColorMaterial                                // 0x3c0(0x8)
	Struct FString                                     VertexColorMaterialName                            // 0x3c8(0x10)
	Class Material*                                    VertexColorViewModeMaterial_ColorOnly              // 0x3d8(0x8)
	Struct FString                                     VertexColorViewModeMaterialName_ColorOnly          // 0x3e0(0x10)
	Class Material*                                    VertexColorViewModeMaterial_AlphaAsColor           // 0x3f0(0x8)
	Struct FString                                     VertexColorViewModeMaterialName_AlphaAsColor       // 0x3f8(0x10)
	Class Material*                                    VertexColorViewModeMaterial_RedOnly                // 0x408(0x8)
	Struct FString                                     VertexColorViewModeMaterialName_RedOnly            // 0x410(0x10)
	Class Material*                                    VertexColorViewModeMaterial_GreenOnly              // 0x420(0x8)
	Struct FString                                     VertexColorViewModeMaterialName_GreenOnly          // 0x428(0x10)
	Class Material*                                    VertexColorViewModeMaterial_BlueOnly               // 0x438(0x8)
	Struct FString                                     VertexColorViewModeMaterialName_BlueOnly           // 0x440(0x10)
	Class Material*                                    ConstraintLimitMaterial                            // 0x450(0x8)
	Class MaterialInstanceDynamic*                     ConstraintLimitMaterialX                           // 0x458(0x8)
	Class MaterialInstanceDynamic*                     ConstraintLimitMaterialY                           // 0x460(0x8)
	Class MaterialInstanceDynamic*                     ConstraintLimitMaterialZ                           // 0x468(0x8)
	Struct StringAssetReference                        ConstraintLimitMaterialName                        // 0x470(0x10)
	Class Material*                                    InvalidLightmapSettingsMaterial                    // 0x480(0x8)
	Struct StringAssetReference                        InvalidLightmapSettingsMaterialName                // 0x488(0x10)
	Class Material*                                    PreviewShadowsIndicatorMaterial                    // 0x498(0x8)
	Struct StringAssetReference                        PreviewShadowsIndicatorMaterialName                // 0x4a0(0x10)
	Class Material*                                    ArrowMaterial                                      // 0x4b0(0x8)
	Struct StringAssetReference                        ArrowMaterialName                                  // 0x4b8(0x10)
	Struct LinearColor                                 LightingOnlyBrightness                             // 0x4c8(0x10)
	TArray<Struct LightingOnlyBrightness>              LightComplexityColors                              // 0x4d8(0x10)
	TArray<Struct LightComplexityColors>               ShaderComplexityColors                             // 0x4e8(0x10)
	TArray<Struct ShaderComplexityColors>              StationaryLightOverlapColors                       // 0x4f8(0x10)
	TArray<Struct StationaryLightOverlapColors>        LODColorationColors                                // 0x508(0x10)
	float                                              MaxPixelShaderAdditiveComplexityCount              // 0x518(0x4)
	float                                              MaxES2PixelShaderAdditiveComplexityCount           // 0x51c(0x4)
	float                                              MinLightMapDensity                                 // 0x520(0x4)
	float                                              IdealLightMapDensity                               // 0x524(0x4)
	float                                              MaxLightMapDensity                                 // 0x528(0x4)
	bool                                               bRenderLightMapDensityGrayscale                    // 0x52c(0x1)
	float                                              RenderLightMapDensityGrayscaleScale                // 0x530(0x4)
	float                                              RenderLightMapDensityColorScale                    // 0x534(0x4)
	Struct LinearColor                                 LightMapDensityVertexMappedColor                   // 0x538(0x10)
	Struct LinearColor                                 LightMapDensitySelectedColor                       // 0x548(0x10)
	TArray<Struct LightMapDensitySelectedColor>        StatColorMappings                                  // 0x558(0x10)
	Class PhysicalMaterial*                            DefaultPhysMaterial                                // 0x568(0x8)
	Struct StringAssetReference                        DefaultPhysMaterialName                            // 0x570(0x10)
	TArray<Struct DefaultPhysMaterialName>             ActiveGameNameRedirects                            // 0x580(0x10)
	TArray<Struct ActiveGameNameRedirects>             ActiveClassRedirects                               // 0x590(0x10)
	TArray<Struct ActiveClassRedirects>                ActivePluginRedirects                              // 0x5a0(0x10)
	TArray<Struct ActivePluginRedirects>               ActiveStructRedirects                              // 0x5b0(0x10)
	Class Texture2D*                                   PreIntegratedSkinBRDFTexture                       // 0x5c0(0x8)
	Struct StringAssetReference                        PreIntegratedSkinBRDFTextureName                   // 0x5c8(0x10)
	Class Texture2D*                                   MiniFontTexture                                    // 0x5d8(0x8)
	Struct StringAssetReference                        MiniFontTextureName                                // 0x5e0(0x10)
	Class Texture*                                     WeightMapPlaceholderTexture                        // 0x5f0(0x8)
	Struct StringAssetReference                        WeightMapPlaceholderTextureName                    // 0x5f8(0x10)
	Class Texture2D*                                   LightMapDensityTexture                             // 0x608(0x8)
	Struct StringAssetReference                        LightMapDensityTextureName                         // 0x610(0x10)
	Class GameViewportClient*                          GameViewport                                       // 0x628(0x8)
	TArray<Str >                                       DeferredCommands                                   // 0x630(0x10)
	int                                                TickCycles                                         // 0x640(0x4)
	int                                                GameCycles                                         // 0x644(0x4)
	int                                                ClientCycles                                       // 0x648(0x4)
	float                                              NearClipPlane                                      // 0x64c(0x4)
	bool                                               bHardwareSurveyEnabled                             // 0x650(0x1)
	bool                                               bSubtitlesEnabled                                  // 0x650(0x1)
	bool                                               bSubtitlesForcedOff                                // 0x650(0x1)
	int                                                MaximumLoopIterationCount                          // 0x654(0x4)
	bool                                               bCanBlueprintsTickByDefault                        // 0x658(0x1)
	bool                                               bOptimizeAnimBlueprintMemberVariableAccess         // 0x658(0x1)
	bool                                               bEnableEditorPSysRealtimeLOD                       // 0x658(0x1)
	bool                                               bSmoothFrameRate                                   // 0x658(0x1)
	bool                                               bUseFixedFrameRate                                 // 0x658(0x1)
	float                                              FixedFrameRate                                     // 0x65c(0x4)
	Struct FloatRange                                  SmoothedFrameRateRange                             // 0x660(0x10)
	bool                                               bCheckForMultiplePawnsSpawnedInAFrame              // 0x670(0x1)
	int                                                NumPawnsAllowedToBeSpawnedInAFrame                 // 0x674(0x4)
	bool                                               bShouldGenerateLowQualityLightmaps                 // 0x678(0x1)
	Struct Color                                       C_WorldBox                                         // 0x67c(0x4)
	Struct Color                                       C_BrushWire                                        // 0x680(0x4)
	Struct Color                                       C_AddWire                                          // 0x684(0x4)
	Struct Color                                       C_SubtractWire                                     // 0x688(0x4)
	Struct Color                                       C_SemiSolidWire                                    // 0x68c(0x4)
	Struct Color                                       C_NonSolidWire                                     // 0x690(0x4)
	Struct Color                                       C_WireBackground                                   // 0x694(0x4)
	Struct Color                                       C_ScaleBoxHi                                       // 0x698(0x4)
	Struct Color                                       C_VolumeCollision                                  // 0x69c(0x4)
	Struct Color                                       C_BSPCollision                                     // 0x6a0(0x4)
	Struct Color                                       C_OrthoBackground                                  // 0x6a4(0x4)
	Struct Color                                       C_Volume                                           // 0x6a8(0x4)
	Struct Color                                       C_BrushShape                                       // 0x6ac(0x4)
	float                                              StreamingDistanceFactor                            // 0x6b0(0x4)
	byte                                               TransitionType                                     // 0x6b4(0x1)
	Struct FString                                     TransitionDescription                              // 0x6b8(0x10)
	Struct FString                                     TransitionGameMode                                 // 0x6c8(0x10)
	float                                              MeshLODRange                                       // 0x6d8(0x4)
	bool                                               bAllowMatureLanguage                               // 0x6dc(0x1)
	float                                              CameraRotationThreshold                            // 0x6e0(0x4)
	float                                              CameraTranslationThreshold                         // 0x6e4(0x4)
	float                                              PrimitiveProbablyVisibleTime                       // 0x6e8(0x4)
	float                                              MaxOcclusionPixelsFraction                         // 0x6ec(0x4)
	bool                                               bPauseOnLossOfFocus                                // 0x6f0(0x1)
	int                                                MaxParticleResize                                  // 0x6f4(0x4)
	int                                                MaxParticleResizeWarn                              // 0x6f8(0x4)
	TArray<Struct MaxParticleResizeWarn>               PendingDroppedNotes                                // 0x700(0x10)
	Struct RigidBodyErrorCorrection                    PhysicErrorCorrection                              // 0x710(0x1c)
	float                                              NetClientTicksPerSecond                            // 0x72c(0x4)
	bool                                               bHasPendingGlobalReregister                        // 0x730(0x1)
	float                                              DisplayGamma                                       // 0x734(0x4)
	float                                              MinDesiredFrameRate                                // 0x738(0x4)
	Struct LinearColor                                 DefaultSelectedMaterialColor                       // 0x73c(0x10)
	Struct LinearColor                                 SelectedMaterialColor                              // 0x74c(0x10)
	Struct LinearColor                                 SelectionOutlineColor                              // 0x75c(0x10)
	Struct LinearColor                                 SubduedSelectionOutlineColor                       // 0x76c(0x10)
	Struct LinearColor                                 SelectedMaterialColorOverride                      // 0x77c(0x10)
	bool                                               bIsOverridingSelectedColor                         // 0x78c(0x1)
	bool                                               bEnableOnScreenDebugMessages                       // 0x790(0x1)
	bool                                               bEnableOnScreenDebugMessagesDisplay                // 0x790(0x1)
	bool                                               bSuppressMapWarnings                               // 0x790(0x1)
	bool                                               bCookSeparateSharedMPGameContent                   // 0x790(0x1)
	bool                                               bDisableAILogging                                  // 0x790(0x1)
	int                                                ScreenSaverInhibitorSemaphore                      // 0x79c(0x4)
	bool                                               bLockReadOnlyLevels                                // 0x7a0(0x1)
	Struct FString                                     ParticleEventManagerClassPath                      // 0x7a8(0x10)
	float                                              SelectionHighlightIntensity                        // 0x7c8(0x4)
	float                                              BSPSelectionHighlightIntensity                     // 0x7cc(0x4)
	float                                              HoverHighlightIntensity                            // 0x7d0(0x4)
	float                                              SelectionHighlightIntensityBillboards              // 0x7d4(0x4)
	TArray<Struct SelectionHighlightIntensityBillboards> NetDriverDefinitions                               // 0x908(0x10)
	TArray<Str >                                       ServerActors                                       // 0x918(0x10)
	TArray<Str >                                       RuntimeServerActors                                // 0x928(0x10)
	bool                                               bStartedLoadMapMovie                               // 0x938(0x1)
	int                                                NextWorldContextHandle                             // 0x950(0x4)
};


// Size 0x70
class GameEngine: public Engine
{
public:
	float                                              MaxDeltaTime                                       // 0x978(0x4)
	float                                              ServerFlushLogInterval                             // 0x97c(0x4)
};


// Size 0x60
class GameInstance: public Object
{
public:
	TArray<class LocalPlayers*>                        LocalPlayers                                       // 0x38(0x10)
	Class OnlineSession*                               OnlineSession                                      // 0x50(0x8)
};


// Size 0x0
class Info: public Actor
{
public:
};


// Size 0xf8
class GameMode: public Info
{
public:
	bool                                               bDisableAsyncOcclusionChecking                     // 0x3d8(0x1)
	bool                                               bUseSeamlessTravel                                 // 0x3d8(0x1)
	bool                                               bPauseable                                         // 0x3d8(0x1)
	bool                                               bStartPlayersAsSpectators                          // 0x3d8(0x1)
	bool                                               bDelayedStart                                      // 0x3d8(0x1)
	Struct FString                                     OptionsString                                      // 0x3e0(0x10)
	class                                              DefaultPawnClass                                   // 0x3f0(0x8)
	class                                              HUDClass                                           // 0x3f8(0x8)
	int                                                NumSpectators                                      // 0x400(0x4)
	int                                                NumPlayers                                         // 0x404(0x4)
	int                                                NumBots                                            // 0x408(0x4)
	float                                              MinRespawnDelay                                    // 0x40c(0x4)
	Class GameSession*                                 GameSession                                        // 0x410(0x8)
	int                                                NumTravellingPlayers                               // 0x418(0x4)
	Struct FText                                       DefaultPlayerName                                  // 0x420(0x38)
	class                                              EngineMessageClass                                 // 0x458(0x8)
	class                                              PlayerControllerClass                              // 0x460(0x8)
	class                                              SpectatorClass                                     // 0x468(0x8)
	class                                              ReplaySpectatorPlayerControllerClass               // 0x470(0x8)
	class                                              PlayerStateClass                                   // 0x478(0x8)
	class                                              GameStateClass                                     // 0x480(0x8)
	Class GameState*                                   GameState                                          // 0x488(0x8)
	TArray<class InactivePlayerArray*>                 InactivePlayerArray                                // 0x490(0x10)
	TArray<Struct InactivePlayerArray>                 GameModeClassAliases                               // 0x4b0(0x10)
	float                                              InactivePlayerStateLifeSpan                        // 0x4c0(0x4)
	bool                                               bHandleDedicatedServerReplays                      // 0x4c4(0x1)
};


// Size 0x2e0
class PrimitiveComponent: public SceneComponent
{
public:
	float                                              MinDrawDistance                                    // 0x2d8(0x4)
	float                                              LDMaxDrawDistance                                  // 0x2e0(0x4)
	float                                              CachedMaxDrawDistance                              // 0x2e4(0x4)
	byte                                               DepthPriorityGroup                                 // 0x2e8(0x1)
	byte                                               ViewOwnerDepthPriorityGroup                        // 0x2e9(0x1)
	bool                                               bAlwaysCreatePhysicsState                          // 0x2ec(0x1)
	bool                                               bGenerateOverlapEvents                             // 0x2ec(0x1)
	bool                                               bMultiBodyOverlap                                  // 0x2ec(0x1)
	bool                                               bCheckAsyncSceneOnMove                             // 0x2ec(0x1)
	bool                                               bTraceComplexOnMove                                // 0x2ec(0x1)
	bool                                               bReturnMaterialOnMove                              // 0x2ec(0x1)
	bool                                               bUseViewOwnerDepthPriorityGroup                    // 0x2ec(0x1)
	bool                                               bAllowCullDistanceVolume                           // 0x2ec(0x1)
	bool                                               bHasMotionBlurVelocityMeshes                       // 0x2ed(0x1)
	bool                                               bRenderInMainPass                                  // 0x2ed(0x1)
	bool                                               bRenderInCustomPrePass                             // 0x2ed(0x1)
	bool                                               bReflected                                         // 0x2ed(0x1)
	bool                                               bReflectedOnLowQuality                             // 0x2ed(0x1)
	bool                                               bFFTWaterMask                                      // 0x2ed(0x1)
	bool                                               bVolumeFogMask                                     // 0x2ed(0x1)
	bool                                               bAffectsFlatWater                                  // 0x2ee(0x1)
	bool                                               bGPUParticlesKillPlane                             // 0x2ee(0x1)
	bool                                               bDontCull                                          // 0x2ee(0x1)
	bool                                               bDontSizeOnScreenCull                              // 0x2ee(0x1)
	float                                              OverriddenShadowMinTexelSize                       // 0x2f0(0x4)
	bool                                               bOverrideShadowMinSizeCulling                      // 0x2f4(0x1)
	bool                                               bOverrideShadowCascadesExclusion                   // 0x2f5(0x1)
	byte                                               ExcludedShadowCascades                             // 0x2f6(0x1)
	bool                                               bReceivesDecals                                    // 0x2f8(0x1)
	bool                                               bOwnerNoSee                                        // 0x2f8(0x1)
	bool                                               bOnlyOwnerSee                                      // 0x2f8(0x1)
	bool                                               bTreatAsBackgroundForOcclusion                     // 0x2f8(0x1)
	bool                                               bIsACloud                                          // 0x2f8(0x1)
	bool                                               bUseAsOccluder                                     // 0x2f8(0x1)
	bool                                               bSelectable                                        // 0x2f8(0x1)
	bool                                               bForceMipStreaming                                 // 0x2f8(0x1)
	bool                                               bHasPerInstanceHitProxies                          // 0x2f9(0x1)
	bool                                               CastShadow                                         // 0x2f9(0x1)
	bool                                               bAffectDynamicIndirectLighting                     // 0x2f9(0x1)
	bool                                               bUseFarCascadeLPVBiasMultiplier                    // 0x2f9(0x1)
	bool                                               bAffectDistanceFieldLighting                       // 0x2f9(0x1)
	bool                                               bCastDynamicShadow                                 // 0x2f9(0x1)
	bool                                               bCastStaticShadow                                  // 0x2f9(0x1)
	bool                                               bCastVolumetricTranslucentShadow                   // 0x2f9(0x1)
	bool                                               bSelfShadowOnly                                    // 0x2fa(0x1)
	bool                                               bCastFarShadow                                     // 0x2fa(0x1)
	bool                                               bCastInsetShadow                                   // 0x2fa(0x1)
	bool                                               bCastCinematicShadow                               // 0x2fa(0x1)
	bool                                               bCastHiddenShadow                                  // 0x2fa(0x1)
	bool                                               bCastShadowAsTwoSided                              // 0x2fa(0x1)
	bool                                               bCastShadowOnLowQuality                            // 0x2fa(0x1)
	bool                                               bLightAsIfStatic                                   // 0x2fa(0x1)
	bool                                               bLightAttachmentsAsGroup                           // 0x2fb(0x1)
	byte                                               IndirectLightingCacheQuality                       // 0x2fc(0x1)
	bool                                               bHasCachedStaticLighting                           // 0x2fd(0x1)
	bool                                               bStaticLightingBuildEnqueued                       // 0x2fe(0x1)
	bool                                               bIgnoreRadialImpulse                               // 0x300(0x1)
	bool                                               bIgnoreRadialForce                                 // 0x300(0x1)
	bool                                               AlwaysLoadOnClient                                 // 0x300(0x1)
	bool                                               AlwaysLoadOnServer                                 // 0x300(0x1)
	bool                                               bUseEditorCompositing                              // 0x300(0x1)
	bool                                               bRenderCustomDepth                                 // 0x300(0x1)
	bool                                               bAllowVelocityInMaterial                           // 0x300(0x1)
	int                                                CustomDepthStencilValue                            // 0x304(0x4)
	int                                                TranslucencySortPriority                           // 0x308(0x4)
	int                                                VisibilityId                                       // 0x30c(0x4)
	float                                              LpvBiasMultiplier                                  // 0x314(0x4)
	float                                              FarCascadeLPVBiasMultiplier                        // 0x318(0x4)
	float                                              LpvIntensityMultiplier                             // 0x31c(0x4)
	Struct CustomPrimitiveData                         CustomPrimitiveData                                // 0x320(0x10)
	Struct BodyInstance                                BodyInstance                                       // 0x330(0x180)
	bool                                               bAffectRain                                        // 0x4b0(0x1)
	bool                                               bCanEverAffectNavigation                           // 0x4b0(0x1)
	bool                                               bSkipRenderingInOuterLPVCascades                   // 0x4b0(0x1)
	bool                                               bEnableMergeCollisionComponents                    // 0x4b0(0x1)
	bool                                               bVisibleWhenAboveWaterAndPlayerUnderwater          // 0x4b0(0x1)
	bool                                               bVisibleWhenAboveWaterAndPlayerAbove               // 0x4b0(0x1)
	bool                                               bVisibleWhenUnderwaterAndPlayerAbove               // 0x4b0(0x1)
	bool                                               bVisibleWhenUnderwaterAndPlayerUnderwater          // 0x4b1(0x1)
	bool                                               bCanRenderAboveAndBelowWaterAtSameTime             // 0x4b1(0x1)
	float                                              BoundsScale                                        // 0x4b8(0x4)
	float                                              OcclusionBoundsScale                               // 0x4bc(0x4)
	float                                              LastRenderTime                                     // 0x4c0(0x4)
	bool                                               bGPUVisibility                                     // 0x4c4(0x1)
	byte                                               bHasCustomNavigableGeometry                        // 0x4c5(0x1)
	byte                                               CanCharacterStepUpOn                               // 0x4c6(0x1)
	Class PrimitiveComponent*                          LODParentPrimitive                                 // 0x548(0x8)
	Struct PrimitiveComponentPostPhysicsTickFunction   PostPhysicsComponentTick                           // 0x550(0x50)
	Class PrimitiveComponent*                          MergedCollisionComponentParent                     // 0x5a0(0x8)
};


// Size 0x58
class GameState: public Info
{
public:
	class                                              GameModeClass                                      // 0x3d0(0x8)
	Class GameMode*                                    AuthorityGameMode                                  // 0x3d8(0x8)
	class                                              SpectatorClass                                     // 0x3e0(0x8)
	struct FName                                       MatchState                                         // 0x3e8(0x8)
	struct FName                                       PreviousMatchState                                 // 0x3f0(0x8)
	int                                                ElapsedTime                                        // 0x3f8(0x4)
	TArray<class PlayerArray*>                         PlayerArray                                        // 0x400(0x10)
	float                                              ReplicatedWorldTimeSeconds                         // 0x410(0x4)
	float                                              ServerWorldTimeSecondsDelta                        // 0x414(0x4)
	float                                              ServerWorldTimeSecondsUpdateFrequency              // 0x418(0x4)
};


// Size 0x50
class GameUserSettings: public Object
{
public:
	bool                                               bUseVSync                                          // 0x28(0x1)
	int                                                WindowPosX                                         // 0x58(0x4)
	int                                                WindowPosY                                         // 0x5c(0x4)
	bool                                               bUseDesktopResolutionForFullscreen                 // 0x60(0x1)
	int                                                FullscreenMode                                     // 0x64(0x4)
	int                                                LastConfirmedFullscreenMode                        // 0x68(0x4)
	int                                                AudioQualityLevel                                  // 0x70(0x4)
};


// Size 0x8
class ScriptViewportClient: public Object
{
public:
};


// Size 0x220
class GameViewportClient: public ScriptViewportClient
{
public:
	Class Console*                                     ViewportConsole                                    // 0x38(0x8)
	TArray<Struct ViewportConsole>                     DebugProperties                                    // 0x40(0x10)
	Class World*                                       World                                              // 0x80(0x8)
	Class GameInstance*                                GameInstance                                       // 0x88(0x8)
};


// Size 0x88
class PlayerState: public Info
{
public:
	float                                              Score                                              // 0x3d0(0x4)
	byte                                               Ping                                               // 0x3d4(0x1)
	Struct FString                                     PlayerName                                         // 0x3d8(0x10)
	int                                                PlayerId                                           // 0x3f8(0x4)
	bool                                               bIsSpectator                                       // 0x3fc(0x1)
	bool                                               bOnlySpectator                                     // 0x3fc(0x1)
	bool                                               bIsABot                                            // 0x3fc(0x1)
	bool                                               bIsInactive                                        // 0x3fc(0x1)
	bool                                               bFromPreviousLevel                                 // 0x3fc(0x1)
	int                                                StartTime                                          // 0x400(0x4)
	class                                              EngineMessageClass                                 // 0x408(0x8)
	Struct UniqueNetIdRepl                             UniqueId                                           // 0x428(0x18)
};


// Size 0x60
class Controller: public Actor
{
public:
	Class Pawn*                                        Pawn                                               // 0x3d8(0x8)
	Class Character*                                   Character                                          // 0x3e8(0x8)
	Class PlayerState*                                 PlayerState                                        // 0x3f0(0x8)
	Class SceneComponent*                              TransformComponent                                 // 0x3f8(0x8)
	Struct Rotator                                     ControlRotation                                    // 0x400(0xc)
	bool                                               bAttachToPawn                                      // 0x40c(0x1)
	struct FName                                       StateName                                          // 0x418(0x8)
};


// Size 0x2f8
class PlayerController: public Controller
{
public:
	Class Player*                                      Player                                             // 0x430(0x8)
	Class Pawn*                                        AcknowledgedPawn                                   // 0x440(0x8)
	Class InterpTrackInstDirector*                     ControllingDirTrackInst                            // 0x448(0x8)
	Class HUD*                                         MyHUD                                              // 0x458(0x8)
	Class PlayerCameraManager*                         PlayerCameraManager                                // 0x460(0x8)
	class                                              PlayerCameraManagerClass                           // 0x468(0x8)
	bool                                               bAutoManageActiveCameraTarget                      // 0x470(0x1)
	Struct Rotator                                     TargetViewRotation                                 // 0x474(0xc)
	TArray<class HiddenActors*>                        HiddenActors                                       // 0x490(0x10)
	float                                              LastSpectatorStateSynchTime                        // 0x4a0(0x4)
	Struct Vector                                      LastSpectatorSyncLocation                          // 0x4a4(0xc)
	Struct Rotator                                     LastSpectatorSyncRotation                          // 0x4b0(0xc)
	int                                                ClientCap                                          // 0x4bc(0x4)
	Class CheatManager*                                CheatManager                                       // 0x4c0(0x8)
	class                                              CheatClass                                         // 0x4c8(0x8)
	Class PlayerInput*                                 PlayerInput                                        // 0x4d0(0x8)
	TArray<Struct PlayerInput>                         ActiveForceFeedbackEffects                         // 0x4d8(0x10)
	bool                                               bPlayerIsWaiting                                   // 0x578(0x1)
	byte                                               NetPlayerIndex                                     // 0x57c(0x1)
	bool                                               bHasVoiceHandshakeCompleted                        // 0x57d(0x1)
	Class NetConnection*                               PendingSwapConnection                              // 0x580(0x8)
	Class NetConnection*                               NetConnection                                      // 0x588(0x8)
	float                                              InputYawScale                                      // 0x59c(0x4)
	float                                              InputPitchScale                                    // 0x5a0(0x4)
	float                                              InputRollScale                                     // 0x5a4(0x4)
	bool                                               bShowMouseCursor                                   // 0x5a8(0x1)
	bool                                               bEnableClickEvents                                 // 0x5a8(0x1)
	bool                                               bEnableTouchEvents                                 // 0x5a8(0x1)
	bool                                               bEnableMouseOverEvents                             // 0x5a8(0x1)
	bool                                               bEnableTouchOverEvents                             // 0x5a8(0x1)
	bool                                               bForceFeedbackEnabled                              // 0x5a8(0x1)
	byte                                               DefaultMouseCursor                                 // 0x5ac(0x1)
	byte                                               CurrentMouseCursor                                 // 0x5ad(0x1)
	byte                                               DefaultClickTraceChannel                           // 0x5ae(0x1)
	byte                                               CurrentClickTraceChannel                           // 0x5af(0x1)
	float                                              HitResultTraceDistance                             // 0x5b0(0x4)
	float                                              ForceFeedbackIntensity                             // 0x5b4(0x4)
	Class InputComponent*                              InactiveStateInputComponent                        // 0x640(0x8)
	Class TouchInterface*                              CurrentTouchInterface                              // 0x668(0x8)
	Class SpectatorPawn*                               SpectatorPawn                                      // 0x6a0(0x8)
	Struct Vector                                      SpawnLocation                                      // 0x6a8(0xc)
	bool                                               bIsLocalPlayerController                           // 0x71c(0x1)
	bool                                               bInCinematicMode                                   // 0x722(0x1)
};


// Size 0x10
class StaticMeshActor: public Actor
{
public:
	Class StaticMeshComponent*                         StaticMeshComponent                                // 0x3d0(0x8)
	bool                                               bStaticMeshReplicateMovement                       // 0x3d8(0x1)
	byte                                               NavigationGeometryGatheringMode                    // 0x3d9(0x1)
};


// Size 0x38
class Brush: public Actor
{
public:
	byte                                               BrushType                                          // 0x3d0(0x1)
	Struct Color                                       BrushColor                                         // 0x3d4(0x4)
	int                                                PolyFlags                                          // 0x3d8(0x4)
	bool                                               bColored                                           // 0x3dc(0x1)
	bool                                               bSolidWhenSelected                                 // 0x3dc(0x1)
	bool                                               bPlaceableFromClassBrowser                         // 0x3dc(0x1)
	bool                                               bNotForClientOrServer                              // 0x3dc(0x1)
	Class Model*                                       Brush                                              // 0x3e0(0x8)
	Class BrushComponent*                              BrushComponent                                     // 0x3e8(0x8)
	bool                                               bInManipulation                                    // 0x3f0(0x1)
	TArray<Struct bInManipulation>                     SavedSelections                                    // 0x3f8(0x10)
};


// Size 0x0
class Volume: public Brush
{
public:
};


// Size 0x0
class BlockingVolume: public Volume
{
public:
};


// Size 0x1b8
class WorldSettings: public Info
{
public:
	bool                                               bEnableWorldBoundsChecks                           // 0x3d8(0x1)
	bool                                               bEnableNavigationSystem                            // 0x3d8(0x1)
	byte                                               WorldCompositionSetting                            // 0x3dc(0x1)
	Struct StringAssetReference                        InstancedNavMeshesDataAssetOveride                 // 0x3e0(0x10)
	bool                                               bEnableWorldOriginRebasing                         // 0x3f0(0x1)
	bool                                               bWorldGravitySet                                   // 0x3f0(0x1)
	bool                                               bGlobalGravitySet                                  // 0x3f0(0x1)
	float                                              KillZ                                              // 0x3f4(0x4)
	class                                              KillZDamageType                                    // 0x3f8(0x8)
	float                                              GlobalGravityZ                                     // 0x400(0x4)
	class                                              DefaultPhysicsVolumeClass                          // 0x408(0x8)
	class                                              PhysicsCollisionHandlerClass                       // 0x410(0x8)
	class                                              DefaultGameMode                                    // 0x418(0x8)
	TArray<Struct DefaultGameMode>                     DefaultMapPrefixes                                 // 0x420(0x10)
	class                                              GameNetworkManagerClass                            // 0x430(0x8)
	int                                                PackedLightAndShadowMapTextureSize                 // 0x438(0x4)
	bool                                               bMinimizeBSPSections                               // 0x43c(0x1)
	Struct Vector                                      DefaultColorScale                                  // 0x440(0xc)
	bool                                               bPrecomputeVisibility                              // 0x44c(0x1)
	bool                                               bPlaceCellsOnlyAlongCameraTracks                   // 0x44c(0x1)
	int                                                VisibilityCellSize                                 // 0x450(0x4)
	byte                                               VisibilityAggressiveness                           // 0x454(0x1)
	bool                                               bForceNoPrecomputedLighting                        // 0x458(0x1)
	Struct LightmassWorldInfoSettings                  LightmassSettings                                  // 0x45c(0x44)
	byte                                               LevelLightingQuality                               // 0x4a0(0x1)
	Struct ReverbSettings                              DefaultReverbSettings                              // 0x4a8(0x18)
	Struct InteriorSettings                            DefaultAmbientZoneSettings                         // 0x4c0(0x24)
	Class SoundMix*                                    DefaultBaseSoundMix                                // 0x4e8(0x8)
	float                                              WorldToMeters                                      // 0x4f0(0x4)
	Class BookMark*                                    BookMarks                                          // 0x4f8(0x8)
	float                                              TimeDilation                                       // 0x548(0x4)
	float                                              MatineeTimeDilation                                // 0x54c(0x4)
	float                                              DemoPlayTimeDilation                               // 0x550(0x4)
	bool                                               bHighPriorityLoading                               // 0x554(0x1)
	bool                                               bHighPriorityLoadingLocal                          // 0x554(0x1)
	TArray<Struct bHighPriorityLoadingLocal>           ReplicationViewers                                 // 0x558(0x10)
	TArray<class AssetUserData*>                       AssetUserData                                      // 0x568(0x10)
	float                                              WorldGravityZ                                      // 0x578(0x4)
	Class PlayerState*                                 Pauser                                             // 0x580(0x8)
};


// Size 0x560
class PostProcessComponent: public SceneComponent
{
public:
	Struct PostProcessSettings                         Settings                                           // 0x2e0(0x540)
	float                                              Priority                                           // 0x820(0x4)
	float                                              BlendRadius                                        // 0x824(0x4)
	float                                              BlendWeight                                        // 0x828(0x4)
	bool                                               bEnabled                                           // 0x82c(0x1)
	bool                                               bUnbound                                           // 0x82c(0x1)
};


// Size 0x110
class Texture: public Object
{
public:
	int                                                LODBias                                            // 0x28(0x4)
	int                                                NumCinematicMipLevels                              // 0x2c(0x4)
	bool                                               SRGB                                               // 0x30(0x1)
	bool                                               NeverStream                                        // 0x30(0x1)
	bool                                               bNoTiling                                          // 0x30(0x1)
	bool                                               bUseCinematicMipLevels                             // 0x30(0x1)
	bool                                               CompressionNone                                    // 0x30(0x1)
	bool                                               bUAV                                               // 0x30(0x1)
	int                                                CachedCombinedLODBias                              // 0x38(0x4)
	bool                                               bAsyncResourceReleaseHasBeenStarted                // 0x3c(0x1)
	byte                                               CompressionSettings                                // 0x40(0x1)
	byte                                               Filter                                             // 0x41(0x1)
	byte                                               LODGroup                                           // 0x42(0x1)
	float                                              StreamingPriorityBoost                             // 0x44(0x4)
	TArray<Struct StreamingPriorityBoost>              ExternalMips                                       // 0xa0(0x10)
};


// Size 0x8
class TextureRenderTarget: public Texture
{
public:
	float                                              TargetGamma                                        // 0x138(0x4)
};


// Size 0x28
class TextureRenderTarget2D: public TextureRenderTarget
{
public:
	int                                                SizeX                                              // 0x140(0x4)
	int                                                SizeY                                              // 0x144(0x4)
	Struct LinearColor                                 ClearColor                                         // 0x148(0x10)
	byte                                               AddressX                                           // 0x158(0x1)
	byte                                               AddressY                                           // 0x159(0x1)
	bool                                               bForceLinearGamma                                  // 0x15c(0x1)
	bool                                               bHDR                                               // 0x15c(0x1)
	bool                                               bAutoGenerateMips                                  // 0x15c(0x1)
	byte                                               OverrideFormat                                     // 0x160(0x1)
	bool                                               bDontClearOnCreation                               // 0x161(0x1)
};


// Size 0x50
class DebugCameraController: public PlayerController
{
public:
	bool                                               bUseOriginalPlayerHUD                              // 0x728(0x1)
	bool                                               bShowSelectedInfo                                  // 0x728(0x1)
	bool                                               bIsFrozenRendering                                 // 0x728(0x1)
	Class DrawFrustumComponent*                        DrawFrustum                                        // 0x730(0x8)
	Class PlayerController*                            OriginalControllerRef                              // 0x748(0x8)
	Class Player*                                      OriginalPlayer                                     // 0x750(0x8)
	float                                              SpeedScale                                         // 0x758(0x4)
	float                                              InitialMaxSpeed                                    // 0x75c(0x4)
	float                                              InitialAccel                                       // 0x760(0x4)
	float                                              InitialDecel                                       // 0x764(0x4)
	float                                              SpeedScaleAdjustment                               // 0x768(0x4)
	float                                              FovScaleAdjustment                                 // 0x76c(0x4)
};


// Size 0xf8
class HUD: public Actor
{
public:
	Struct Color                                       WhiteColor                                         // 0x3d0(0x4)
	Struct Color                                       GreenColor                                         // 0x3d4(0x4)
	Struct Color                                       RedColor                                           // 0x3d8(0x4)
	Class PlayerController*                            PlayerOwner                                        // 0x3e0(0x8)
	bool                                               bLostFocusPaused                                   // 0x3e8(0x1)
	bool                                               bShowHUD                                           // 0x3e8(0x1)
	bool                                               bShowDebugInfo                                     // 0x3e8(0x1)
	bool                                               bShowHitBoxDebugInfo                               // 0x3e8(0x1)
	bool                                               bShowOverlays                                      // 0x3e8(0x1)
	bool                                               bEnableDebugTextShadow                             // 0x3e8(0x1)
	TArray<class PostRenderedActors*>                  PostRenderedActors                                 // 0x3f0(0x10)
	float                                              LastHUDRenderTime                                  // 0x400(0x4)
	float                                              RenderDelta                                        // 0x404(0x4)
	TArray<Struct FName>                               DebugDisplay                                       // 0x408(0x10)
	TArray<Struct FName>                               ToggledDebugCategories                             // 0x418(0x10)
	Class Canvas*                                      Canvas                                             // 0x428(0x8)
	Class Canvas*                                      DebugCanvas                                        // 0x430(0x8)
	TArray<Struct DebugCanvas>                         DebugTextList                                      // 0x438(0x10)
	class                                              ShowDebugTargetDesiredClass                        // 0x448(0x8)
	Class Actor*                                       ShowDebugTargetActor                               // 0x450(0x8)
};


// Size 0x18
class FeatureToggledStringAssetReference: public DataAsset
{
public:
	TArray<Struct CoherentToWwiseEventEntries>         Entries                                            // 0x28(0x10)
	class                                              ClassType                                          // 0x38(0x8)
};


// Size 0x8
class LevelScriptActor: public Actor
{
public:
	bool                                               bInputEnabled                                      // 0x3d0(0x1)
};


// Size 0x10
class ArrowComponent: public PrimitiveComponent
{
public:
	Struct Color                                       ArrowColor                                         // 0x5a8(0x4)
	float                                              ArrowSize                                          // 0x5ac(0x4)
	bool                                               bIsScreenSizeScaled                                // 0x5b0(0x1)
	float                                              ScreenSize                                         // 0x5b4(0x4)
	bool                                               bTreatAsASprite                                    // 0x5b8(0x1)
};


// Size 0x10
class MeshComponent: public PrimitiveComponent
{
public:
	TArray<class OverrideMaterials*>                   OverrideMaterials                                  // 0x5a8(0x10)
};


// Size 0x50
class StaticMeshComponent: public MeshComponent
{
public:
	int                                                ForcedLodModel                                     // 0x5b8(0x4)
	bool                                               bOverrideMinLOD                                    // 0x5bc(0x1)
	bool                                               bOverrideNavigationToDefaultObstacle               // 0x5bd(0x1)
	int                                                MinLOD                                             // 0x5c0(0x4)
	Class StaticMesh*                                  StaticMesh                                         // 0x5c8(0x8)
	bool                                               bOverrideWireframeColor                            // 0x5d0(0x1)
	Struct Color                                       WireframeColorOverride                             // 0x5d4(0x4)
	bool                                               bIgnoreInstanceForTextureStreaming                 // 0x5d8(0x1)
	bool                                               bOverrideLightMapRes                               // 0x5d8(0x1)
	int                                                OverriddenLightMapRes                              // 0x5dc(0x4)
	float                                              StreamingDistanceMultiplier                        // 0x5e0(0x4)
	TArray<Struct StreamingDistanceMultiplier>         IrrelevantLights                                   // 0x5e8(0x10)
	TArray<Struct IrrelevantLights>                    LODData                                            // 0x5f8(0x10)
	Class MaterialInterface*                           CustomDepthMaterial                                // 0x608(0x8)
};


// Size 0x10
class FogVolume: public Actor
{
public:
	Class SphereComponent*                             SphereComponent                                    // 0x3d0(0x8)
	Class FogVolumeComponent*                          FogVolumeComponent                                 // 0x3d8(0x8)
};


// Size 0x0
class ThreadedActor: public Actor
{
public:
};


// Size 0x30
class MaterialInterface: public Object
{
public:
	Class SubsurfaceProfile*                           SubsurfaceProfile                                  // 0x30(0x8)
	Struct LightmassMaterialInterfaceSettings          LightmassSettings                                  // 0x3c(0x14)
};


// Size 0x9c0
class Material: public MaterialInterface
{
public:
	Class PhysicalMaterial*                            PhysMaterial                                       // 0x58(0x8)
	Struct ColorMaterialInput                          DiffuseColor                                       // 0x60(0x40)
	Struct ColorMaterialInput                          SpecularColor                                      // 0xa0(0x40)
	Struct ColorMaterialInput                          BaseColor                                          // 0xe0(0x40)
	Struct ScalarMaterialInput                         Metallic                                           // 0x120(0x40)
	Struct ScalarMaterialInput                         Specular                                           // 0x160(0x40)
	Struct ScalarMaterialInput                         Roughness                                          // 0x1a0(0x40)
	Struct VectorMaterialInput                         Normal                                             // 0x1e0(0x48)
	Struct ColorMaterialInput                          EmissiveColor                                      // 0x228(0x40)
	Struct ScalarMaterialInput                         Opacity                                            // 0x268(0x40)
	Struct ScalarMaterialInput                         OpacityMask                                        // 0x2a8(0x40)
	byte                                               MaterialDomain                                     // 0x2e8(0x1)
	byte                                               BlendMode                                          // 0x2e9(0x1)
	byte                                               DecalBlendMode                                     // 0x2ea(0x1)
	bool                                               bDecalNoEmissiveOrRoughness                        // 0x2eb(0x1)
	bool                                               bDecalEnableStencil                                // 0x2ec(0x1)
	byte                                               MaterialDecalResponse                              // 0x2ed(0x1)
	byte                                               ShadingModel                                       // 0x2ee(0x1)
	float                                              OpacityMaskClipValue                               // 0x2f0(0x4)
	float                                              DepthWeightScale                                   // 0x2f4(0x4)
	float                                              DepthWeightExponent                                // 0x2f8(0x4)
	float                                              DepthWeightBase                                    // 0x2fc(0x4)
	bool                                               bBlendedOITAfterTranslucency                       // 0x300(0x1)
	bool                                               bForceResolution                                   // 0x300(0x1)
	byte                                               ForcedResolution                                   // 0x304(0x1)
	float                                              FirstSplitDistance                                 // 0x308(0x4)
	float                                              SecondSplitDistance                                // 0x30c(0x4)
	float                                              FullResInFrontMaxDistance                          // 0x310(0x4)
	bool                                               FullResInFront                                     // 0x314(0x1)
	bool                                               PopPerParticle                                     // 0x314(0x1)
	Struct VectorMaterialInput                         WorldPositionOffset                                // 0x318(0x48)
	Struct VectorMaterialInput                         WorldDisplacement                                  // 0x360(0x48)
	Struct ScalarMaterialInput                         TessellationMultiplier                             // 0x3a8(0x40)
	Struct ColorMaterialInput                          SubsurfaceColor                                    // 0x3e8(0x40)
	Struct ScalarMaterialInput                         ClearCoat                                          // 0x428(0x40)
	Struct ScalarMaterialInput                         ClearCoatRoughness                                 // 0x468(0x40)
	Struct ScalarMaterialInput                         AmbientOcclusion                                   // 0x4a8(0x40)
	Struct ScalarMaterialInput                         Refraction                                         // 0x4e8(0x40)
	Struct ColorMaterialInput                          BillboardColor                                     // 0x528(0x40)
	Struct VectorMaterialInput                         BillboardParams                                    // 0x568(0x48)
	Struct Vector2MaterialInput                        CustomizedUVs                                      // 0x5b0(0x48)
	Struct MaterialAttributesInput                     MaterialAttributes                                 // 0x7f0(0x38)
	Struct ScalarMaterialInput                         PixelDepthOffset                                   // 0x838(0x40)
	bool                                               bTranslucentBeforeTranslucency                     // 0x878(0x1)
	bool                                               bTranslucentBeforeVolumeFog                        // 0x878(0x1)
	bool                                               bTranslucentWithDepthWrite                         // 0x878(0x1)
	bool                                               bEnableSeparateTranslucency                        // 0x878(0x1)
	bool                                               bEnableResponsiveAA                                // 0x878(0x1)
	bool                                               bScreenSpaceReflections                            // 0x878(0x1)
	bool                                               TwoSided                                           // 0x878(0x1)
	bool                                               DitheredLODTransition                              // 0x878(0x1)
	byte                                               ConstantMaterial                                   // 0x87c(0x1)
	float                                              SkyLightWhenOccluded                               // 0x880(0x4)
	float                                              CloudShadowsInfluence                              // 0x884(0x4)
	int                                                NumCustomizedUVs                                   // 0x888(0x4)
	byte                                               TranslucencyLightingMode                           // 0x88c(0x1)
	float                                              TranslucencyDirectionalLightingIntensity           // 0x890(0x4)
	float                                              LightColorInfluence                                // 0x894(0x4)
	float                                              AmbientLightColorInfluence                         // 0x898(0x4)
	float                                              LightIntensityInfluence                            // 0x89c(0x4)
	float                                              AmbientLightIntensityInfluence                     // 0x8a0(0x4)
	float                                              AlternativeAmbientLightColorInfluence              // 0x8a4(0x4)
	float                                              AlternativeAmbientLightIntensityInfluence          // 0x8a8(0x4)
	bool                                               bEvaluateLightningAtParticleCenter                 // 0x8ac(0x1)
	float                                              TranslucencyScaleForReflection                     // 0x8b0(0x4)
	bool                                               bObjectFadeEnabled                                 // 0x8b4(0x1)
	float                                              ObjectFadeRate                                     // 0x8b8(0x4)
	float                                              ObjectFadeDistanceThreshold                        // 0x8bc(0x4)
	float                                              TranslucentShadowDensityScale                      // 0x8c0(0x4)
	float                                              TranslucentSelfShadowDensityScale                  // 0x8c4(0x4)
	float                                              TranslucentSelfShadowSecondDensityScale            // 0x8c8(0x4)
	float                                              TranslucentSelfShadowSecondOpacity                 // 0x8cc(0x4)
	float                                              TranslucentBackscatteringExponent                  // 0x8d0(0x4)
	Struct LinearColor                                 TranslucentMultipleScatteringExtinction            // 0x8d4(0x10)
	float                                              TranslucentShadowStartOffset                       // 0x8e4(0x4)
	float                                              VolumeFogScale                                     // 0x8e8(0x4)
	bool                                               DistanceFog                                        // 0x8ec(0x1)
	bool                                               bDisableDepthTest                                  // 0x8ec(0x1)
	bool                                               bGenerateSphericalParticleNormals                  // 0x8ec(0x1)
	bool                                               bDontRenderWhenPlayerInsideShip                    // 0x8ec(0x1)
	bool                                               bTangentSpaceNormal                                // 0x8ec(0x1)
	bool                                               bUseEmissiveForDynamicAreaLighting                 // 0x8ec(0x1)
	bool                                               bBlockGI                                           // 0x8ec(0x1)
	bool                                               bUsedAsSpecialEngineMaterial                       // 0x8ec(0x1)
	bool                                               bUsedWithSkeletalMesh                              // 0x8ed(0x1)
	bool                                               bUsedWithEditorCompositing                         // 0x8ed(0x1)
	bool                                               bUsedWithLandscape                                 // 0x8ed(0x1)
	bool                                               bUsedWithParticleSprites                           // 0x8ed(0x1)
	bool                                               bUsedWithCPUParticleSprites                        // 0x8ed(0x1)
	bool                                               bUsedWithStaticMesh                                // 0x8ed(0x1)
	bool                                               bUsedWithCoverage                                  // 0x8ed(0x1)
	bool                                               bUsedWithGPUInstanceCulling                        // 0x8ed(0x1)
	bool                                               bUsedWithBeamTrails                                // 0x8ee(0x1)
	bool                                               bUsedWithMeshParticles                             // 0x8ee(0x1)
	bool                                               bUsedWithStaticLighting                            // 0x8ee(0x1)
	bool                                               bUsedWithFluidSurfaces                             // 0x8ee(0x1)
	bool                                               bUsedWithMorphTargets                              // 0x8ee(0x1)
	bool                                               bUsedWithSplineMeshes                              // 0x8ee(0x1)
	bool                                               bUsedWithInstancedStaticMeshes                     // 0x8ee(0x1)
	bool                                               bUsesDistortion                                    // 0x8ee(0x1)
	bool                                               bUsedWithClothing                                  // 0x8ef(0x1)
	bool                                               bUsedWithDeformables                               // 0x8ef(0x1)
	bool                                               bUsedWithFFTWaterMask                              // 0x8ef(0x1)
	bool                                               bUsedWithVolumeFogMask                             // 0x8ef(0x1)
	bool                                               bUsedWithDynamicObjectFading                       // 0x8ef(0x1)
	bool                                               bUsedWithWaterBoundary                             // 0x8ef(0x1)
	bool                                               bUsedWithClouds                                    // 0x8ef(0x1)
	bool                                               bUsedWithInstancedRopes                            // 0x8ef(0x1)
	bool                                               bUsedWithPlanarReflection                          // 0x8f0(0x1)
	bool                                               bUsedWithPointLightShadows                         // 0x8f0(0x1)
	bool                                               bUsedWithMaskPass                                  // 0x8f0(0x1)
	bool                                               bUsedWithUI                                        // 0x8f0(0x1)
	bool                                               bAutomaticallySetUsageInEditor                     // 0x8f0(0x1)
	bool                                               bAllowEmissiveOnLandscape                          // 0x8f0(0x1)
	bool                                               bApplyWaterMask                                    // 0x8f0(0x1)
	bool                                               bUseReZ                                            // 0x8f0(0x1)
	bool                                               bFullyRough                                        // 0x8f1(0x1)
	bool                                               bUseLightmapDirectionality                         // 0x8f1(0x1)
	byte                                               GeometryMode                                       // 0x8f4(0x1)
	byte                                               D3D11TessellationMode                              // 0x8f5(0x1)
	bool                                               bEnableCrackFreeDisplacement                       // 0x8f8(0x1)
	bool                                               bEnableAdaptiveTessellation                        // 0x8f8(0x1)
	float                                              MaxDisplacement                                    // 0x8fc(0x4)
	bool                                               Wireframe                                          // 0x900(0x1)
	bool                                               bOutputVelocityOnBasePass                          // 0x900(0x1)
	float                                              NormalOffsetShadowBiasScale                        // 0x904(0x4)
	int                                                EditorX                                            // 0x908(0x4)
	int                                                EditorY                                            // 0x90c(0x4)
	int                                                EditorPitch                                        // 0x910(0x4)
	int                                                EditorYaw                                          // 0x914(0x4)
	TArray<class Expressions*>                         Expressions                                        // 0x918(0x10)
	TArray<Struct Expressions>                         MaterialFunctionInfos                              // 0x928(0x10)
	TArray<Struct MaterialFunctionInfos>               MaterialParameterCollectionInfos                   // 0x938(0x10)
	bool                                               bCanMaskedBeAssumedOpaque                          // 0x948(0x1)
	bool                                               bIsMasked                                          // 0x948(0x1)
	bool                                               bIsPreviewMaterial                                 // 0x948(0x1)
	bool                                               bUseMaterialAttributes                             // 0x948(0x1)
	bool                                               bUseTranslucencyVertexFog                          // 0x948(0x1)
	bool                                               bUseDensityMapOnTranslucencyVertexFog              // 0x948(0x1)
	bool                                               bAllowDevelopmentShaderCompile                     // 0x948(0x1)
	bool                                               bIsMaterialEditorStatsMaterial                     // 0x948(0x1)
	byte                                               BlendableLocation                                  // 0x950(0x1)
	int                                                BlendablePriority                                  // 0x954(0x4)
	bool                                               bIsAlphaBlended                                    // 0x958(0x1)
	float                                              RefractionDepthBias                                // 0x95c(0x4)
	Struct Guid                                        StateId                                            // 0x960(0x10)
	int                                                UnwrappedUVSet                                     // 0x970(0x4)
	TArray<class ExpressionTextureReferences*>         ExpressionTextureReferences                        // 0xa00(0x10)
};


// Size 0x20
class CameraModifier: public Object
{
public:
	bool                                               bDebug                                             // 0x28(0x1)
	bool                                               bExclusive                                         // 0x28(0x1)
	byte                                               Priority                                           // 0x2c(0x1)
	Class PlayerCameraManager*                         CameraOwner                                        // 0x30(0x8)
	float                                              AlphaInTime                                        // 0x38(0x4)
	float                                              AlphaOutTime                                       // 0x3c(0x4)
	float                                              Alpha                                              // 0x40(0x4)
	bool                                               bAutoDestroyOnCompletion                           // 0x44(0x1)
};


// Size 0x10
class PhysicsVolume: public Volume
{
public:
	float                                              TerminalVelocity                                   // 0x408(0x4)
	int                                                Priority                                           // 0x40c(0x4)
	float                                              FluidFriction                                      // 0x410(0x4)
	bool                                               bWaterVolume                                       // 0x414(0x1)
	bool                                               bPhysicsOnContact                                  // 0x414(0x1)
};


// Size 0x2e0
class ParticleSystemComponent: public PrimitiveComponent
{
public:
	Class ParticleSystem*                              Template                                           // 0x5a8(0x8)
	TArray<class EmitterMaterials*>                    EmitterMaterials                                   // 0x5b0(0x10)
	TArray<class SkelMeshComponents*>                  SkelMeshComponents                                 // 0x5c0(0x10)
	bool                                               bResetOnDetach                                     // 0x5d0(0x1)
	bool                                               bUpdateOnDedicatedServer                           // 0x5d0(0x1)
	TArray<Struct bUpdateOnDedicatedServer>            InstanceParameters                                 // 0x5d8(0x10)
	Struct ParticleSysParam                            EmitterPointParameter                              // 0x5e8(0x50)
	Struct Vector                                      OldPosition                                        // 0x678(0xc)
	Struct Vector                                      PartSysVelocity                                    // 0x684(0xc)
	Struct Vector                                      CustomInheritedVelocity                            // 0x6a8(0xc)
	float                                              CustomParameterDrivingCurves                       // 0x6c0(0x4)
	Struct LinearColor                                 ColourTint                                         // 0x6c4(0x10)
	float                                              WarmUpTime                                         // 0x6d4(0x4)
	float                                              WarmupTickRate                                     // 0x6d8(0x4)
	bool                                               bWarmingUp                                         // 0x6dc(0x1)
	float                                              SecondsBeforeInactive                              // 0x6f8(0x4)
	float                                              MaxTimeBeforeForceUpdateTransform                  // 0x704(0x4)
	bool                                               bOverrideLODMethod                                 // 0x70c(0x1)
	byte                                               LODMethod                                          // 0x710(0x1)
	bool                                               bSkipUpdateDynamicDataDuringTick                   // 0x714(0x1)
	TArray<Struct bSkipUpdateDynamicDataDuringTick>    CachedViewRelevanceFlags                           // 0x718(0x10)
	TArray<class ReplayClips*>                         ReplayClips                                        // 0x730(0x10)
	float                                              CustomTimeDilation                                 // 0x7a0(0x4)
	bool                                               bUnbound                                           // 0x7b8(0x1)
};


// Size 0x80
class SplineComponent: public PrimitiveComponent
{
public:
	Struct InterpCurveVector                           SplineInfo                                         // 0x5a8(0x18)
	Struct InterpCurveQuat                             SplineRotInfo                                      // 0x5c0(0x18)
	Struct InterpCurveVector                           SplineScaleInfo                                    // 0x5d8(0x18)
	Struct InterpCurveFloat                            SplineReparamTable                                 // 0x5f0(0x18)
	bool                                               bAllowSplineEditingPerInstance                     // 0x608(0x1)
	int                                                ReparamStepsPerSegment                             // 0x60c(0x4)
	float                                              Duration                                           // 0x610(0x4)
	bool                                               bStationaryEndpoints                               // 0x614(0x1)
	bool                                               bSplineHasBeenEdited                               // 0x615(0x1)
	bool                                               bClosedLoop                                        // 0x616(0x1)
	Struct Vector                                      DefaultUpVector                                    // 0x618(0xc)
};


// Size 0x20
class ShapeComponent: public PrimitiveComponent
{
public:
	Struct Color                                       ShapeColor                                         // 0x5a8(0x4)
	Class BodySetup*                                   ShapeBodySetup                                     // 0x5b0(0x8)
	bool                                               bDrawOnlyIfSelected                                // 0x5b8(0x1)
	bool                                               bShouldCollideWhenPlacing                          // 0x5b8(0x1)
	bool                                               bDynamicObstacle                                   // 0x5b8(0x1)
	class                                              AreaClass                                          // 0x5c0(0x8)
};


// Size 0x0
class CapsuleComponent: public ShapeComponent
{
public:
	float                                              CapsuleHalfHeight                                  // 0x5c8(0x4)
	float                                              CapsuleRadius                                      // 0x5cc(0x4)
};


// Size 0x8
class TextureProxy: public Texture
{
public:
	Class Texture*                                     Texture                                            // 0x138(0x8)
};


// Size 0x58
class Commandlet: public Object
{
public:
	Struct FString                                     HelpDescription                                    // 0x28(0x10)
	Struct FString                                     HelpUsage                                          // 0x38(0x10)
	Struct FString                                     HelpWebLink                                        // 0x48(0x10)
	TArray<Str >                                       HelpParamNames                                     // 0x58(0x10)
	TArray<Str >                                       HelpParamDescriptions                              // 0x68(0x10)
	bool                                               IsServer                                           // 0x78(0x1)
	bool                                               IsClient                                           // 0x78(0x1)
	bool                                               IsEditor                                           // 0x78(0x1)
	bool                                               LogToConsole                                       // 0x78(0x1)
	bool                                               ShowErrorCount                                     // 0x78(0x1)
};


// Size 0xb0
class InstancedStaticMeshComponent: public StaticMeshComponent
{
public:
	TArray<Struct RemoveInstances>                     PerInstanceSMData                                  // 0x610(0x10)
	int                                                InstancingRandomSeed                               // 0x620(0x4)
	int                                                InstanceStartCullDistance                          // 0x624(0x4)
	int                                                InstanceEndCullDistance                            // 0x628(0x4)
	TArray<Int >                                       InstanceReorderTable                               // 0x630(0x10)
	TArray<Int >                                       RemovedInstances                                   // 0x640(0x10)
	Class PhysicsSerializer*                           PhysicsSerializer                                  // 0x698(0x8)
	int                                                NumPendingLightmaps                                // 0x6a0(0x4)
	TArray<Struct NumPendingLightmaps>                 CachedMappings                                     // 0x6a8(0x10)
};


// Size 0xd0
class HierarchicalInstancedStaticMeshComponent: public InstancedStaticMeshComponent
{
public:
	TArray<Int None>                                   SortedInstances                                    // 0x700(0x10)
	int                                                NumBuiltInstances                                  // 0x710(0x4)
	Struct Box                                         BuiltInstanceBounds                                // 0x714(0x1c)
	Struct Box                                         UnbuiltInstanceBounds                              // 0x730(0x1c)
	TArray<Struct UnbuiltInstanceBounds>               UnbuiltInstanceBoundsList                          // 0x750(0x10)
	int                                                OcclusionLayerNumNodes                             // 0x760(0x4)
	bool                                               bDisableCollision                                  // 0x766(0x1)
};


// Size 0x160
class MaterialInstance: public MaterialInterface
{
public:
	Class PhysicalMaterial*                            PhysMaterial                                       // 0x58(0x8)
	Class MaterialInterface*                           Parent                                             // 0x60(0x8)
	bool                                               bHasStaticPermutationResource                      // 0x68(0x1)
	bool                                               bOverrideSubsurfaceProfile                         // 0x68(0x1)
	Struct Guid                                        ParentLightingGuid                                 // 0x70(0x10)
	TArray<Struct ParentLightingGuid>                  FontParameterValues                                // 0x80(0x10)
	TArray<Struct FontParameterValues>                 ScalarParameterValues                              // 0x90(0x10)
	TArray<Struct ScalarParameterValues>               TextureParameterValues                             // 0xa0(0x10)
	TArray<Struct TextureParameterValues>              VectorParameterValues                              // 0xb0(0x10)
	Struct MaterialInstanceBasePropertyOverrides       BasePropertyOverrides                              // 0xc0(0x84)
};


// Size 0x0
class MaterialInstanceConstant: public MaterialInstance
{
public:
};


// Size 0x48
class MaterialExpression: public Object
{
public:
	Class Material*                                    Material                                           // 0x28(0x8)
	Class MaterialFunction*                            Function                                           // 0x30(0x8)
	Struct FString                                     Desc                                               // 0x38(0x10)
	Struct Color                                       BorderColor                                        // 0x48(0x4)
	bool                                               bRealtimePreview                                   // 0x4c(0x1)
	bool                                               bNeedToUpdatePreview                               // 0x4c(0x1)
	bool                                               bIsParameterExpression                             // 0x4c(0x1)
	bool                                               bCommentBubbleVisible                              // 0x4c(0x1)
	bool                                               bShowOutputNameOnPin                               // 0x4c(0x1)
	bool                                               bHidePreviewWindow                                 // 0x4c(0x1)
	bool                                               bCollapsed                                         // 0x4c(0x1)
	bool                                               bShaderInputData                                   // 0x4c(0x1)
	bool                                               bShowInputs                                        // 0x4d(0x1)
	bool                                               bShowOutputs                                       // 0x4d(0x1)
	TArray<Struct FText>                               MenuCategories                                     // 0x50(0x10)
	TArray<Struct MenuCategories>                      Outputs                                            // 0x60(0x10)
};


// Size 0x0
class MaterialExpressionCustomOutput: public MaterialExpression
{
public:
};


// Size 0x0
class BlueprintAsyncActionBase: public Object
{
public:
};


// Size 0x68
class BlueprintGeneratedClass: public Class
{
public:
	int                                                NumReplicatedProperties                            // 0x1c0(0x4)
	TArray<class DynamicBindingObjects*>               DynamicBindingObjects                              // 0x1c8(0x10)
	TArray<class ComponentTemplates*>                  ComponentTemplates                                 // 0x1d8(0x10)
	TArray<class Timelines*>                           Timelines                                          // 0x1e8(0x10)
	Class SimpleConstructionScript*                    SimpleConstructionScript                           // 0x1f8(0x8)
	Class InheritableComponentHandler*                 InheritableComponentHandler                        // 0x200(0x8)
	Class StructProperty*                              UberGraphFramePointerProperty                      // 0x208(0x8)
	Class Function*                                    UberGraphFunction                                  // 0x210(0x8)
	TArray<Struct UberGraphFunction>                   FastCallPairs                                      // 0x218(0x10)
};


// Size 0x18
class AISystemBase: public Object
{
public:
	Struct StringClassReference                        AISystemClassName                                  // 0x28(0x10)
	struct FName                                       AISystemModuleName                                 // 0x38(0x8)
};


// Size 0x10
class UserDefinedStruct: public ScriptStruct
{
public:
	Struct Guid                                        Guid                                               // 0x98(0x10)
};


// Size 0x20
class Player: public Object
{
public:
	Class PlayerController*                            PlayerController                                   // 0x30(0x8)
	int                                                CurrentNetSpeed                                    // 0x38(0x4)
	int                                                ConfiguredInternetSpeed                            // 0x3c(0x4)
	int                                                ConfiguredLanSpeed                                 // 0x40(0x4)
};


// Size 0x34540
class NetConnection: public Player
{
public:
	TArray<class Actor*>                               Children                                           // 0x50(0x10)
	Class NetDriver*                                   Driver                                             // 0x60(0x8)
	Class PackageMap*                                  PackageMap                                         // 0x68(0x8)
	TArray<class OpenChannels*>                        OpenChannels                                       // 0x70(0x10)
	TArray<class SentTemporaries*>                     SentTemporaries                                    // 0x80(0x10)
	Class Actor*                                       ViewTarget                                         // 0x90(0x8)
	Class Actor*                                       OwningActor                                        // 0x98(0x8)
	int                                                MaxPacket                                          // 0xa0(0x4)
	bool                                               InternalAck                                        // 0xa4(0x1)
	double                                             LastReceiveTime                                    // 0x3a0(0x8)
	int                                                MaxDormantActorsCheckedFromRelevancy               // 0x34468(0x4)
	TArray<class DeferredCloseChannels*>               DeferredCloseChannels                              // 0x344c0(0x10)
};


// Size 0x450
class NetDriver: public Object
{
public:
	Struct FString                                     NetConnectionClassName                             // 0x38(0x10)
	int                                                MaxDownloadSize                                    // 0x48(0x4)
	bool                                               bClampListenServerTickRate                         // 0x4c(0x1)
	int                                                NetServerMaxTickRate                               // 0x50(0x4)
	int                                                MaxInternetClientRate                              // 0x54(0x4)
	int                                                MaxClientRate                                      // 0x58(0x4)
	float                                              ServerTravelPause                                  // 0x5c(0x4)
	float                                              SpawnPrioritySeconds                               // 0x60(0x4)
	float                                              RelevantTimeout                                    // 0x64(0x4)
	float                                              KeepAliveTime                                      // 0x68(0x4)
	float                                              InitialConnectTimeout                              // 0x6c(0x4)
	float                                              ConnectionTimeout                                  // 0x70(0x4)
	Class NetConnection*                               ServerConnection                                   // 0x78(0x8)
	TArray<class ClientConnections*>                   ClientConnections                                  // 0x80(0x10)
	Class World*                                       World                                              // 0x90(0x8)
	class                                              NetConnectionClass                                 // 0xc8(0x8)
	Class Property*                                    RoleProperty                                       // 0xd0(0x8)
	Class Property*                                    RemoteRoleProperty                                 // 0xd8(0x8)
	struct FName                                       NetDriverName                                      // 0xe0(0x8)
};


// Size 0x0
class OnlineSession: public Object
{
public:
};


// Size 0x550
class Model: public Object
{
public:
};


// Size 0x68
class EdGraphNode: public Object
{
public:
	TArray<class Pins*>                                Pins                                               // 0x28(0x10)
	int                                                NodePosX                                           // 0x38(0x4)
	int                                                NodePosY                                           // 0x3c(0x4)
	int                                                NodeWidth                                          // 0x40(0x4)
	int                                                NodeHeight                                         // 0x44(0x4)
	bool                                               bHasCompilerMessage                                // 0x48(0x1)
	Struct FString                                     NodeComment                                        // 0x50(0x10)
	bool                                               bCommentBubblePinned                               // 0x60(0x1)
	bool                                               bCommentBubbleVisible                              // 0x61(0x1)
	int                                                ErrorType                                          // 0x64(0x4)
	Struct FString                                     ErrorMsg                                           // 0x68(0x10)
	Struct Guid                                        NodeGuid                                           // 0x78(0x10)
	byte                                               AdvancedPinDisplay                                 // 0x88(0x1)
	bool                                               bIsNodeEnabled                                     // 0x89(0x1)
	bool                                               bIsDebugFunction                                   // 0x8a(0x1)
};


// Size 0x100
class EdGraphPin: public Object
{
public:
	Struct FString                                     PinName                                            // 0x28(0x10)
	Struct FString                                     PinToolTip                                         // 0x38(0x10)
	byte                                               Direction                                          // 0x48(0x1)
	Struct EdGraphPinType                              PinType                                            // 0x50(0x50)
	Struct FString                                     DefaultValue                                       // 0xa0(0x10)
	Struct FString                                     AutogeneratedDefaultValue                          // 0xb0(0x10)
	Class Object*                                      DefaultObject                                      // 0xc0(0x8)
	Struct FText                                       DefaultTextValue                                   // 0xc8(0x38)
	TArray<class LinkedTo*>                            LinkedTo                                           // 0x100(0x10)
	TArray<class SubPins*>                             SubPins                                            // 0x110(0x10)
	Class EdGraphPin*                                  ParentPin                                          // 0x120(0x8)
};


// Size 0x0
class EngineBaseTypes: public Object
{
public:
};


// Size 0x18
class DamageType: public Object
{
public:
	bool                                               bCausedByWorld                                     // 0x28(0x1)
	bool                                               bScaleMomentumByMass                               // 0x28(0x1)
	float                                              DamageImpulse                                      // 0x2c(0x4)
	bool                                               bRadialDamageVelChange                             // 0x30(0x1)
	float                                              DestructibleImpulse                                // 0x34(0x4)
	float                                              DestructibleDamageSpreadScale                      // 0x38(0x4)
	float                                              DamageFalloff                                      // 0x3c(0x4)
};


// Size 0x0
class EngineTypes: public Object
{
public:
};


// Size 0x28
class BlueprintCore: public Object
{
public:
	class                                              SkeletonGeneratedClass                             // 0x28(0x8)
	class                                              GeneratedClass                                     // 0x30(0x8)
	bool                                               bLegacyNeedToPurgeSkelRefs                         // 0x38(0x1)
	bool                                               bLegacyGeneratedClassIsAuthoritative               // 0x39(0x1)
	Struct Guid                                        BlueprintGuid                                      // 0x3c(0x10)
};


// Size 0x88
class Blueprint: public BlueprintCore
{
public:
	bool                                               bRecompileOnLoad                                   // 0x50(0x1)
	class                                              ParentClass                                        // 0x58(0x8)
	Class Object*                                      PRIVATE_InnermostPreviousCDO                       // 0x60(0x8)
	bool                                               bHasBeenRegenerated                                // 0x68(0x1)
	bool                                               bIsRegeneratingOnLoad                              // 0x68(0x1)
	Class SimpleConstructionScript*                    SimpleConstructionScript                           // 0x70(0x8)
	TArray<class ComponentTemplates*>                  ComponentTemplates                                 // 0x78(0x10)
	TArray<class Timelines*>                           Timelines                                          // 0x88(0x10)
	Class InheritableComponentHandler*                 InheritableComponentHandler                        // 0x98(0x8)
	byte                                               BlueprintType                                      // 0xa0(0x1)
	int                                                BlueprintSystemVersion                             // 0xa4(0x4)
};


// Size 0x0
class Interface_AssetUserData: public Interface
{
public:
};


// Size 0x0
class TestInterface: public Interface
{
public:
};


// Size 0x0
class DerivedTestInterface: public TestInterface
{
public:
};


// Size 0x8
class ComponentWithDerivedTestInterface: public ActorComponent
{
public:
};


// Size 0x8
class ActorWithComponentWithDerivedTestInterface: public Actor
{
public:
	Class ComponentWithDerivedTestInterface*           ComponentWithDerivedTestInterface                  // 0x3d0(0x8)
};


// Size 0x8
class ActorWithTestInterface: public Actor
{
public:
};


// Size 0x8
class AmbientSound: public Actor
{
public:
	Class AudioComponent*                              AudioComponent                                     // 0x3d0(0x8)
};


// Size 0x58
class AutomaticInstancingActor: public Actor
{
public:
	Class SceneComponent*                              DummyRoot                                          // 0x3d0(0x8)
};


// Size 0xd8
class PendingNetGame: public Object
{
public:
	Class NetDriver*                                   NetDriver                                          // 0x30(0x8)
	Class Package*                                     PreLoadedMapPackage                                // 0xe8(0x8)
	Class World*                                       PreLoadedWorld                                     // 0xf0(0x8)
};


// Size 0x840
class World: public Object
{
public:
	Class Level*                                       PersistentLevel                                    // 0x30(0x8)
	Class NetDriver*                                   NetDriver                                          // 0x38(0x8)
	Class LineBatchComponent*                          LineBatcher                                        // 0x40(0x8)
	Class LineBatchComponent*                          PersistentLineBatcher                              // 0x48(0x8)
	Class LineBatchComponent*                          ForegroundLineBatcher                              // 0x50(0x8)
	Class GameState*                                   GameState                                          // 0x58(0x8)
	Class GameNetworkManager*                          NetworkManager                                     // 0x60(0x8)
	Class PhysicsCollisionHandler*                     PhysicsCollisionHandler                            // 0x68(0x8)
	TArray<class ExtraReferencedObjects*>              ExtraReferencedObjects                             // 0x70(0x10)
	TArray<class PerModuleDataObjects*>                PerModuleDataObjects                               // 0x80(0x10)
	TArray<class StreamingLevels*>                     StreamingLevels                                    // 0x90(0x10)
	Struct FString                                     StreamingLevelsPrefix                              // 0xa0(0x10)
	Class Level*                                       CurrentLevelPendingVisibility                      // 0xb0(0x8)
	Class ParticleEventManager*                        MyParticleEventManager                             // 0xb8(0x8)
	Class PhysicsVolume*                               DefaultPhysicsVolume                               // 0xc0(0x8)
	TArray<class DirtyStreamingLevels*>                DirtyStreamingLevels                               // 0xc8(0x10)
	struct FName                                       Feature                                            // 0xf4(0x8)
	TArray<Struct FName>                               FeatureReferences                                  // 0x100(0x10)
	bool                                               ParticleLOD_bUseGameThread                         // 0x110(0x1)
	bool                                               ParticleLOD_bUseMultipleViewportCase               // 0x111(0x1)
	Struct Vector                                      ParticleLOD_PlayerViewpointLocation                // 0x114(0xc)
	Struct FString                                     TestMetadata                                       // 0x120(0x10)
	Class NavigationSystem*                            NavigationSystem                                   // 0x130(0x8)
	Class GameMode*                                    AuthorityGameMode                                  // 0x138(0x8)
	Class AISystemBase*                                AISystem                                           // 0x140(0x8)
	Class AvoidanceManager*                            AvoidanceManager                                   // 0x148(0x8)
	TArray<class Levels*>                              Levels                                             // 0x150(0x10)
	Class Level*                                       CurrentLevel                                       // 0x1b0(0x8)
	Class GameInstance*                                OwningGameInstance                                 // 0x1c0(0x8)
	TArray<class ParameterCollectionInstances*>        ParameterCollectionInstances                       // 0x1c8(0x10)
	Class WorldComposition*                            WorldComposition                                   // 0x798(0x8)
	bool                                               bAreConstraintsDirty                               // 0x7dd(0x1)
};


// Size 0x2d8
class Level: public Object
{
public:
	Class LevelActorContainer*                         ActorCluster                                       // 0xc8(0x8)
	Class World*                                       OwningWorld                                        // 0xd0(0x8)
	Class Model*                                       Model                                              // 0xd8(0x8)
	TArray<class ModelComponents*>                     ModelComponents                                    // 0xe0(0x10)
	Class LevelScriptActor*                            LevelScriptActor                                   // 0xf0(0x8)
	Class NavigationObjectBase*                        NavListStart                                       // 0xf8(0x8)
	Class NavigationObjectBase*                        NavListEnd                                         // 0x100(0x8)
	TArray<class NavDataChunks*>                       NavDataChunks                                      // 0x108(0x10)
	float                                              LightmapTotalSize                                  // 0x118(0x4)
	float                                              ShadowmapTotalSize                                 // 0x11c(0x4)
	TArray<Struct ShadowmapTotalSize>                  StaticNavigableGeometry                            // 0x120(0x10)
	bool                                               LevelVisibility                                    // 0x260(0x1)
	bool                                               Blocked                                            // 0x270(0x1)
	TArray<class AssetUserData*>                       AssetUserData                                      // 0x2d8(0x10)
};


// Size 0x0
class BrushShape: public Brush
{
public:
};


// Size 0x50
class AudioVolume: public Volume
{
public:
	float                                              Priority                                           // 0x408(0x4)
	bool                                               bEnabled                                           // 0x40c(0x1)
	Struct ReverbSettings                              Settings                                           // 0x410(0x18)
	Struct InteriorSettings                            AmbientZoneSettings                                // 0x428(0x24)
	Class AudioVolume*                                 NextLowerPriorityVolume                            // 0x450(0x8)
};


// Size 0x0
class CameraBlockingVolume: public Volume
{
public:
};


// Size 0x18
class CullDistanceVolume: public Volume
{
public:
	TArray<Struct GetComponent>                        CullDistances                                      // 0x408(0x10)
	bool                                               bEnabled                                           // 0x418(0x1)
};


// Size 0x10
class FFTWater: public Volume
{
public:
	Class FFTWaterComponent*                           FFTWaterComponent                                  // 0x408(0x8)
	Class FFTWaterExtendedPlaneComponent*              ExtendedPlaneComponent                             // 0x410(0x8)
};


// Size 0x18
class LevelStreamingVolume: public Volume
{
public:
	TArray<Name None>                                  StreamingLevelNames                                // 0x408(0x10)
	bool                                               bEditorPreVisOnly                                  // 0x418(0x1)
	bool                                               bDisabled                                          // 0x418(0x1)
	byte                                               StreamingUsage                                     // 0x41c(0x1)
};


// Size 0x0
class LightmassCharacterIndirectDetailVolume: public Volume
{
public:
};


// Size 0x0
class LightmassImportanceVolume: public Volume
{
public:
};


// Size 0x0
class NavigationTypes: public Object
{
public:
};


// Size 0x10
class NavMeshBoundsVolume: public Volume
{
public:
	Struct NavAgentSelector                            SupportedAgents                                    // 0x408(0x4)
	struct FName                                       OriginatingLevelName                               // 0x40c(0x8)
};


// Size 0x0
class InstancedNavMeshBoundsVolume: public NavMeshBoundsVolume
{
public:
};


// Size 0x18
class NavArea: public Object
{
public:
	float                                              DefaultCost                                        // 0x28(0x4)
	float                                              FixedAreaEnteringCost                              // 0x2c(0x4)
	Struct Color                                       DrawColor                                          // 0x30(0x4)
	Struct NavAgentSelector                            SupportedAgents                                    // 0x34(0x4)
	bool                                               bSupportsAgent0                                    // 0x38(0x1)
	bool                                               bSupportsAgent1                                    // 0x38(0x1)
	bool                                               bSupportsAgent2                                    // 0x38(0x1)
	bool                                               bSupportsAgent3                                    // 0x38(0x1)
	bool                                               bSupportsAgent4                                    // 0x38(0x1)
	bool                                               bSupportsAgent5                                    // 0x38(0x1)
	bool                                               bSupportsAgent6                                    // 0x38(0x1)
	bool                                               bSupportsAgent7                                    // 0x38(0x1)
	bool                                               bSupportsAgent8                                    // 0x39(0x1)
	bool                                               bSupportsAgent9                                    // 0x39(0x1)
	bool                                               bSupportsAgent10                                   // 0x39(0x1)
	bool                                               bSupportsAgent11                                   // 0x39(0x1)
	bool                                               bSupportsAgent12                                   // 0x39(0x1)
	bool                                               bSupportsAgent13                                   // 0x39(0x1)
	bool                                               bSupportsAgent14                                   // 0x39(0x1)
	bool                                               bSupportsAgent15                                   // 0x39(0x1)
};


// Size 0x0
class NavRelevantInterface: public Interface
{
public:
};


// Size 0x10
class NavModifierVolume: public Volume
{
public:
	class                                              AreaClass                                          // 0x410(0x8)
};


// Size 0x0
class DefaultPhysicsVolume: public PhysicsVolume
{
public:
};


// Size 0x0
class KillZVolume: public PhysicsVolume
{
public:
};


// Size 0x28
class PainCausingVolume: public PhysicsVolume
{
public:
	bool                                               bPainCausing                                       // 0x418(0x1)
	float                                              DamagePerSec                                       // 0x41c(0x4)
	class                                              DamageType                                         // 0x420(0x8)
	float                                              PainInterval                                       // 0x428(0x4)
	bool                                               bEntryPain                                         // 0x42c(0x1)
	bool                                               BACKUP_bPainCausing                                // 0x42c(0x1)
	Class Controller*                                  DamageInstigator                                   // 0x430(0x8)
};


// Size 0x0
class BlendableInterface: public Interface
{
public:
};


// Size 0x0
class Scene: public Object
{
public:
};


// Size 0x0
class Interface_PostProcessVolume: public Interface
{
public:
};


// Size 0x558
class PostProcessVolume: public Volume
{
public:
	Struct PostProcessSettings                         Settings                                           // 0x410(0x540)
	float                                              Priority                                           // 0x950(0x4)
	float                                              BlendRadius                                        // 0x954(0x4)
	float                                              BlendWeight                                        // 0x958(0x4)
	bool                                               bEnabled                                           // 0x95c(0x1)
	bool                                               bUnbound                                           // 0x95c(0x1)
};


// Size 0x30
class PrecomputedVisibilityOverrideVolume: public Volume
{
public:
	TArray<class OverrideVisibleActors*>               OverrideVisibleActors                              // 0x408(0x10)
	TArray<class OverrideInvisibleActors*>             OverrideInvisibleActors                            // 0x418(0x10)
	TArray<Struct FName>                               OverrideInvisibleLevels                            // 0x428(0x10)
};


// Size 0x0
class PrecomputedVisibilityVolume: public Volume
{
public:
};


// Size 0x0
class TriggerVolume: public Volume
{
public:
};


// Size 0x8
class CalmWaterZone: public Actor
{
public:
	Class CalmWaterComponent*                          CalmWaterComponent                                 // 0x3d0(0x8)
};


// Size 0x570
class CameraActor: public Actor
{
public:
	byte                                               AutoActivateForPlayer                              // 0x3d0(0x1)
	Class CameraComponent*                             CameraComponent                                    // 0x3d8(0x8)
	bool                                               bConstrainAspectRatio                              // 0x3e8(0x1)
	float                                              AspectRatio                                        // 0x3ec(0x4)
	float                                              FOVAngle                                           // 0x3f0(0x4)
	float                                              PostProcessBlendWeight                             // 0x3f4(0x4)
	Struct PostProcessSettings                         PostProcessSettings                                // 0x400(0x540)
};


// Size 0x0
class ClientOnlyTestActor: public Actor
{
public:
};


// Size 0x0
class NavAgentInterface: public Interface
{
public:
};


// Size 0x118
class CameraShake: public Object
{
public:
	bool                                               bSingleInstance                                    // 0x28(0x1)
	float                                              OscillationDuration                                // 0x2c(0x4)
	float                                              OscillationBlendInTime                             // 0x30(0x4)
	float                                              OscillationBlendOutTime                            // 0x34(0x4)
	Struct ROscillator                                 RotOscillation                                     // 0x38(0x24)
	Struct VOscillator                                 LocOscillation                                     // 0x5c(0x24)
	Struct FOscillator                                 FOVOscillation                                     // 0x80(0xc)
	float                                              AnimPlayRate                                       // 0x8c(0x4)
	float                                              AnimScale                                          // 0x90(0x4)
	float                                              AnimBlendInTime                                    // 0x94(0x4)
	float                                              AnimBlendOutTime                                   // 0x98(0x4)
	float                                              RandomAnimSegmentDuration                          // 0x9c(0x4)
	Class CameraAnim*                                  Anim                                               // 0xa0(0x8)
	bool                                               bRandomAnimSegment                                 // 0xa8(0x1)
	Class PlayerCameraManager*                         CameraOwner                                        // 0xc0(0x8)
	float                                              ShakeScale                                         // 0x130(0x4)
	float                                              OscillatorTimeRemaining                            // 0x134(0x4)
	Class CameraAnimInst*                              AnimInst                                           // 0x138(0x8)
};


// Size 0x1880
class PlayerCameraManager: public Actor
{
public:
	Class PlayerController*                            PCOwner                                            // 0x3d0(0x8)
	Class SceneComponent*                              TransformComponent                                 // 0x3d8(0x8)
	float                                              DefaultFOV                                         // 0x3e8(0x4)
	float                                              DefaultOrthoWidth                                  // 0x3f0(0x4)
	float                                              DefaultAspectRatio                                 // 0x3f8(0x4)
	Struct CameraCacheEntry                            CameraCache                                        // 0x440(0x5b0)
	Struct CameraCacheEntry                            LastFrameCameraCache                               // 0x9f0(0x5b0)
	Struct TViewTarget                                 ViewTarget                                         // 0xfa0(0x5c0)
	Struct TViewTarget                                 PendingViewTarget                                  // 0x1560(0x5c0)
	TArray<class ModifierList*>                        ModifierList                                       // 0x1b38(0x10)
	TArray<Class ModifierList>                         DefaultModifiers                                   // 0x1b48(0x10)
	float                                              FreeCamDistance                                    // 0x1b58(0x4)
	Struct Vector                                      FreeCamOffset                                      // 0x1b5c(0xc)
	Struct Vector                                      ViewTargetOffset                                   // 0x1b68(0xc)
	TArray<class CameraLensEffects*>                   CameraLensEffects                                  // 0x1b88(0x10)
	Class CameraModifier_CameraShake*                  CachedCameraShakeMod                               // 0x1b98(0x8)
	Class CameraAnimInst*                              AnimInstPool                                       // 0x1ba0(0x8)
	TArray<Struct AnimInstPool>                        PostProcessBlendCache                              // 0x1be0(0x10)
	TArray<class ActiveAnims*>                         ActiveAnims                                        // 0x1c00(0x10)
	TArray<class FreeAnims*>                           FreeAnims                                          // 0x1c10(0x10)
	Class CameraActor*                                 AnimCameraActor                                    // 0x1c20(0x8)
	bool                                               bIsOrthographic                                    // 0x1c28(0x1)
	bool                                               bUseClientSideCameraUpdates                        // 0x1c28(0x1)
	bool                                               bFollowHmdOrientation                              // 0x1c29(0x1)
	float                                              ViewPitchMin                                       // 0x1c2c(0x4)
	float                                              ViewPitchMax                                       // 0x1c30(0x4)
	float                                              ViewYawMin                                         // 0x1c34(0x4)
	float                                              ViewYawMax                                         // 0x1c38(0x4)
	float                                              ViewRollMin                                        // 0x1c3c(0x4)
	float                                              ViewRollMax                                        // 0x1c40(0x4)
};


// Size 0x8
class CurveBase: public Object
{
public:
};


// Size 0x80
class CurveFloat: public CurveBase
{
public:
	Struct RichCurve                                   FloatCurve                                         // 0x30(0x78)
	bool                                               bIsEventCurve                                      // 0xa8(0x1)
};


// Size 0x18
class ForceFeedbackEffect: public Object
{
public:
	TArray<Struct PickedActor>                         ChannelDetails                                     // 0x28(0x10)
	float                                              Duration                                           // 0x38(0x4)
};


// Size 0x18
class LogVisualizerCameraController: public DebugCameraController
{
public:
	Class Actor*                                       PickedActor                                        // 0x778(0x8)
};


// Size 0x8
class DecalActor: public Actor
{
public:
	Class DecalComponent*                              Decal                                              // 0x3d0(0x8)
};


// Size 0x20
class DestructibleActor: public Actor
{
public:
	Class DestructibleComponent*                       DestructibleComponent                              // 0x3d0(0x8)
	bool                                               bAffectNavigation                                  // 0x3d8(0x1)
};


// Size 0x8
class DocumentationActor: public Actor
{
public:
};


// Size 0x50
class Emitter: public Actor
{
public:
	Class ParticleSystemComponent*                     ParticleSystemComponent                            // 0x3d0(0x8)
	bool                                               bDestroyOnSystemFinish                             // 0x3d8(0x1)
	bool                                               bPostUpdateTickGroup                               // 0x3d8(0x1)
	bool                                               bCurrentlyActive                                   // 0x3d8(0x1)
};


// Size 0x38
class EmitterCameraLensEffectBase: public Emitter
{
public:
	Class ParticleSystem*                              PS_CameraEffect                                    // 0x420(0x8)
	Class ParticleSystem*                              PS_CameraEffectNonExtremeContent                   // 0x428(0x8)
	float                                              BaseFOV                                            // 0x430(0x4)
	float                                              DistFromCamera                                     // 0x434(0x4)
	bool                                               bAllowMultipleInstances                            // 0x438(0x1)
	TArray<Class bAllowMultipleInstances>              EmittersToTreatAsSame                              // 0x440(0x10)
	Class PlayerCameraManager*                         BaseCamera                                         // 0x450(0x8)
};


// Size 0x0
class DebugCameraHUD: public HUD
{
public:
};


// Size 0x28
class LogVisualizerHUD: public DebugCameraHUD
{
public:
};


// Size 0x8
class AtmosphericFog: public Info
{
public:
	Class AtmosphericFogComponent*                     AtmosphericFogComponent                            // 0x3d0(0x8)
};


// Size 0x10
class ExponentialHeightFog: public Info
{
public:
	Class ExponentialHeightFogComponent*               Component                                          // 0x3d0(0x8)
	bool                                               bEnabled                                           // 0x3d8(0x1)
};


// Size 0x28
class NavigationObjectBase: public Actor
{
public:
	Class CapsuleComponent*                            CapsuleComponent                                   // 0x3d8(0x8)
	Class BillboardComponent*                          GoodSprite                                         // 0x3e0(0x8)
	Class BillboardComponent*                          BadSprite                                          // 0x3e8(0x8)
	bool                                               bIsPIEPlayerStart                                  // 0x3f0(0x1)
};


// Size 0x8
class PlayerStart: public NavigationObjectBase
{
public:
	struct FName                                       PlayerStartTag                                     // 0x3f8(0x8)
};


// Size 0x70
class GameNetworkManager: public Info
{
public:
	int                                                AdjustedNetSpeed                                   // 0x3d0(0x4)
	float                                              LastNetSpeedUpdateTime                             // 0x3d4(0x4)
	int                                                TotalNetBandwidth                                  // 0x3d8(0x4)
	int                                                MinDynamicBandwidth                                // 0x3dc(0x4)
	int                                                MaxDynamicBandwidth                                // 0x3e0(0x4)
	bool                                               bIsStandbyCheckingEnabled                          // 0x3e4(0x1)
	bool                                               bHasStandbyCheatTriggered                          // 0x3e4(0x1)
	float                                              StandbyRxCheatTime                                 // 0x3e8(0x4)
	float                                              StandbyTxCheatTime                                 // 0x3ec(0x4)
	int                                                BadPingThreshold                                   // 0x3f0(0x4)
	float                                              PercentMissingForRxStandby                         // 0x3f4(0x4)
	float                                              PercentMissingForTxStandby                         // 0x3f8(0x4)
	float                                              PercentForBadPing                                  // 0x3fc(0x4)
	float                                              JoinInProgressStandbyWaitTime                      // 0x400(0x4)
	float                                              MoveRepSize                                        // 0x404(0x4)
	float                                              MAXPOSITIONERRORSQUARED                            // 0x408(0x4)
	float                                              MAXNEARZEROVELOCITYSQUARED                         // 0x40c(0x4)
	float                                              CLIENTADJUSTUPDATECOST                             // 0x410(0x4)
	float                                              MAXCLIENTUPDATEINTERVAL                            // 0x414(0x4)
	float                                              MaxMoveDeltaTime                                   // 0x418(0x4)
	bool                                               ClientAuthorativePosition                          // 0x41c(0x1)
	float                                              ClientErrorUpdateRateLimit                         // 0x420(0x4)
	bool                                               bMovementTimeDiscrepancyDetection                  // 0x424(0x1)
	bool                                               bMovementTimeDiscrepancyResolution                 // 0x425(0x1)
	float                                              MovementTimeDiscrepancyMaxTimeMargin               // 0x428(0x4)
	float                                              MovementTimeDiscrepancyMinTimeMargin               // 0x42c(0x4)
	float                                              MovementTimeDiscrepancyResolutionRate              // 0x430(0x4)
	float                                              MovementTimeDiscrepancyDriftAllowance              // 0x434(0x4)
	bool                                               bMovementTimeDiscrepancyForceCorrectionsDuringResolution // 0x438(0x1)
	bool                                               bUseDistanceBasedRelevancy                         // 0x439(0x1)
};


// Size 0x30
class GameSession: public Info
{
public:
	int                                                MaxSpectators                                      // 0x3d0(0x4)
	int                                                MaxPlayers                                         // 0x3d4(0x4)
	byte                                               MaxSplitscreensPerConnection                       // 0x3d8(0x1)
	bool                                               bRequiresPushToTalk                                // 0x3d9(0x1)
	struct FName                                       SessionName                                        // 0x3dc(0x8)
};


// Size 0x10
class SkyLight: public Info
{
public:
	Class SkyLightComponent*                           LightComponent                                     // 0x3d0(0x8)
	bool                                               bEnabled                                           // 0x3d8(0x1)
};


// Size 0x8
class WindDirectionalSource: public Info
{
public:
	Class WindDirectionalSourceComponent*              Component                                          // 0x3d0(0x8)
};


// Size 0x8
class LevelBounds: public Actor
{
public:
	bool                                               bAutoUpdateBounds                                  // 0x3d0(0x1)
};


// Size 0x30
class LightComponentBase: public SceneComponent
{
public:
	Struct Guid                                        LightGuid                                          // 0x2d0(0x10)
	float                                              Brightness                                         // 0x2e0(0x4)
	float                                              Intensity                                          // 0x2e4(0x4)
	Struct Color                                       LightColor                                         // 0x2e8(0x4)
	bool                                               bAffectsWorld                                      // 0x2ec(0x1)
	bool                                               CastShadows                                        // 0x2ec(0x1)
	bool                                               CastStaticShadows                                  // 0x2ec(0x1)
	bool                                               CastDynamicShadows                                 // 0x2ec(0x1)
	bool                                               bAffectTranslucentLighting                         // 0x2ec(0x1)
	bool                                               bPrecomputedLightingIsValid                        // 0x2ec(0x1)
	bool                                               RainOcclusion                                      // 0x2ec(0x1)
	float                                              IndirectLightingIntensity                          // 0x2f0(0x4)
	float                                              ScaleForTranslucency                               // 0x2f4(0x4)
	float                                              CapForTranslucency                                 // 0x2f8(0x4)
};


// Size 0x160
class LightComponent: public LightComponentBase
{
public:
	float                                              Temperature                                        // 0x300(0x4)
	bool                                               bUseTemperature                                    // 0x304(0x1)
	int                                                ShadowMapChannel                                   // 0x308(0x4)
	float                                              SourceRadius                                       // 0x310(0x4)
	float                                              MinRoughness                                       // 0x314(0x4)
	float                                              ShadowBias                                         // 0x318(0x4)
	float                                              ShadowSharpen                                      // 0x31c(0x4)
	float                                              ShadowResMaxDynamicDegradation                     // 0x320(0x4)
	bool                                               InverseSquaredFalloff                              // 0x324(0x1)
	bool                                               CastTranslucentShadows                             // 0x324(0x1)
	bool                                               bCastShadowsFromCinematicObjectsOnly               // 0x324(0x1)
	bool                                               bAffectDynamicIndirectLighting                     // 0x324(0x1)
	Class MaterialInterface*                           LightFunctionMaterial                              // 0x328(0x8)
	Struct Vector                                      LightFunctionScale                                 // 0x330(0xc)
	Class TextureLightProfile*                         IESTexture                                         // 0x340(0x8)
	bool                                               bUseIESBrightness                                  // 0x348(0x1)
	float                                              IESBrightnessScale                                 // 0x34c(0x4)
	float                                              LightFunctionFadeDistance                          // 0x350(0x4)
	float                                              DisabledBrightness                                 // 0x354(0x4)
	bool                                               bEnableLightShaftBloom                             // 0x358(0x1)
	float                                              BloomScale                                         // 0x35c(0x4)
	float                                              BloomThreshold                                     // 0x360(0x4)
	Struct Color                                       BloomTint                                          // 0x364(0x4)
	bool                                               bUseRayTracedDistanceFieldShadows                  // 0x368(0x1)
	float                                              RayStartOffsetDepthScale                           // 0x36c(0x4)
};


// Size 0x8
class Light: public Actor
{
public:
	Class LightComponent*                              LightComponent                                     // 0x3d0(0x8)
};


// Size 0x8
class AmbientLightSource: public Light
{
public:
	Class AmbientLightSourceComponent*                 AmbientLightSourceComponent                        // 0x3d8(0x8)
};


// Size 0x0
class DirectionalLight: public Light
{
public:
};


// Size 0x8
class PointLight: public Light
{
public:
	Class PointLightComponent*                         PointLightComponent                                // 0x3d8(0x8)
};


// Size 0x8
class SpotLight: public Light
{
public:
	Class SpotLightComponent*                          SpotLightComponent                                 // 0x3d8(0x8)
};


// Size 0x0
class GeneratedMeshAreaLight: public SpotLight
{
public:
};


// Size 0x38
class LODActor: public Actor
{
public:
	Class StaticMeshComponent*                         StaticMeshComponent                                // 0x3d0(0x8)
	TArray<class SubActors*>                           SubActors                                          // 0x3d8(0x10)
	float                                              LODDrawDistance                                    // 0x3e8(0x4)
	int                                                LodLevel                                           // 0x3ec(0x4)
	TArray<class SubObjects*>                          SubObjects                                         // 0x3f0(0x10)
};


// Size 0x10
class MaterialInstanceActor: public Actor
{
public:
	TArray<class TargetActors*>                        TargetActors                                       // 0x3d0(0x10)
};


// Size 0x78
class MatineeActor: public Actor
{
public:
	Class InterpData*                                  MatineeData                                        // 0x3d0(0x8)
	struct FName                                       MatineeControllerName                              // 0x3d8(0x8)
	float                                              PlayRate                                           // 0x3e0(0x4)
	bool                                               bPlayOnLevelLoad                                   // 0x3e4(0x1)
	bool                                               bForceStartPos                                     // 0x3e4(0x1)
	float                                              ForceStartPosition                                 // 0x3e8(0x4)
	bool                                               bLooping                                           // 0x3ec(0x1)
	bool                                               bRewindOnPlay                                      // 0x3ec(0x1)
	bool                                               bNoResetOnRewind                                   // 0x3ec(0x1)
	bool                                               bRewindIfAlreadyPlaying                            // 0x3ec(0x1)
	bool                                               bDisableRadioFilter                                // 0x3ec(0x1)
	bool                                               bClientSideOnly                                    // 0x3ec(0x1)
	bool                                               bSkipUpdateIfNotVisible                            // 0x3ec(0x1)
	bool                                               bIsSkippable                                       // 0x3ec(0x1)
	int                                                PreferredSplitScreenNum                            // 0x3f0(0x4)
	bool                                               bDisableMovementInput                              // 0x3f4(0x1)
	bool                                               bDisableLookAtInput                                // 0x3f4(0x1)
	bool                                               bHidePlayer                                        // 0x3f4(0x1)
	bool                                               bHideHud                                           // 0x3f4(0x1)
	TArray<Struct bHideHud>                            GroupActorInfos                                    // 0x3f8(0x10)
	bool                                               bShouldShowGore                                    // 0x408(0x1)
	TArray<class GroupInst*>                           GroupInst                                          // 0x410(0x10)
	TArray<Struct GroupInst>                           CameraCuts                                         // 0x420(0x10)
	bool                                               bIsPlaying                                         // 0x430(0x1)
	bool                                               bReversePlayback                                   // 0x430(0x1)
	bool                                               bPaused                                            // 0x430(0x1)
	bool                                               bPendingStop                                       // 0x430(0x1)
	float                                              InterpPosition                                     // 0x434(0x4)
	byte                                               ReplicationForceIsPlaying                          // 0x43c(0x1)
	bool                                               bServerInitialLevelStreamingComplete               // 0x444(0x1)
};


// Size 0x8
class MatineeActorCameraAnim: public MatineeActor
{
public:
	Class CameraAnim*                                  CameraAnim                                         // 0x448(0x8)
};


// Size 0x8
class MergedCollisionActor: public Actor
{
public:
	Class MergedCollisionComponent*                    MergedCollisionComponent                           // 0x3d0(0x8)
};


// Size 0x18
class NavigationQueryFilter: public Object
{
public:
	TArray<Struct SupportedAreas>                      Areas                                              // 0x28(0x10)
	Struct NavigationFilterFlags                       IncludeFlags                                       // 0x38(0x4)
	Struct NavigationFilterFlags                       ExcludeFlags                                       // 0x3c(0x4)
};


// Size 0x1c0
class NavigationData: public Actor
{
public:
	Class PrimitiveComponent*                          RenderingComp                                      // 0x3d0(0x8)
	Struct NavDataConfig                               NavDataConfig                                      // 0x3d8(0x58)
	bool                                               bEnableDrawing                                     // 0x430(0x1)
	bool                                               bRebuildAtRuntime                                  // 0x430(0x1)
	byte                                               RuntimeGeneration                                  // 0x434(0x1)
	bool                                               bForceRebuildOnLoad                                // 0x438(0x1)
	float                                              ObservedPathsTickInterval                          // 0x43c(0x4)
	TArray<Struct ObservedPathsTickInterval>           SupportedAreas                                     // 0x528(0x10)
};


// Size 0x0
class AbstractNavData: public NavigationData
{
public:
};


// Size 0x0
class NavigationGraph: public NavigationData
{
public:
};


// Size 0xb0
class RecastNavMesh: public NavigationData
{
public:
	bool                                               bDrawTriangleEdges                                 // 0x590(0x1)
	bool                                               bDrawPolyEdges                                     // 0x590(0x1)
	bool                                               bDrawFilledPolys                                   // 0x590(0x1)
	bool                                               bDrawNavMeshEdges                                  // 0x590(0x1)
	bool                                               bDrawTileBounds                                    // 0x590(0x1)
	bool                                               bDrawPathCollidingGeometry                         // 0x590(0x1)
	bool                                               bDrawTileLabels                                    // 0x590(0x1)
	bool                                               bDrawPolygonLabels                                 // 0x590(0x1)
	bool                                               bDrawDefaultPolygonCost                            // 0x591(0x1)
	bool                                               bDrawLabelsOnPathNodes                             // 0x591(0x1)
	bool                                               bDrawNavLinks                                      // 0x591(0x1)
	bool                                               bDrawFailedNavLinks                                // 0x591(0x1)
	bool                                               bDrawClusters                                      // 0x591(0x1)
	bool                                               bDrawOctree                                        // 0x591(0x1)
	bool                                               bDistinctlyDrawTilesBeingBuilt                     // 0x591(0x1)
	bool                                               bDrawNavMesh                                       // 0x591(0x1)
	float                                              DrawOffset                                         // 0x594(0x4)
	float                                              BuiltTileSizeUU                                    // 0x598(0x4)
	float                                              BuiltCellSize                                      // 0x59c(0x4)
	bool                                               bFixedTilePoolSize                                 // 0x5a0(0x1)
	int                                                TilePoolSize                                       // 0x5a4(0x4)
	float                                              TileSizeUU                                         // 0x5a8(0x4)
	float                                              CellSize                                           // 0x5ac(0x4)
	float                                              CellHeight                                         // 0x5b0(0x4)
	float                                              AgentRadius                                        // 0x5b4(0x4)
	float                                              AgentHeight                                        // 0x5b8(0x4)
	float                                              AgentMaxHeight                                     // 0x5bc(0x4)
	float                                              AgentMaxSlope                                      // 0x5c0(0x4)
	float                                              AgentMaxStepHeight                                 // 0x5c4(0x4)
	float                                              MinRegionArea                                      // 0x5c8(0x4)
	float                                              MergeRegionSize                                    // 0x5cc(0x4)
	float                                              MaxSimplificationError                             // 0x5d0(0x4)
	int                                                MaxSimultaneousTileGenerationJobsCount             // 0x5d4(0x4)
	int                                                TileNumberHardLimit                                // 0x5d8(0x4)
	int                                                PolyRefTileBits                                    // 0x5dc(0x4)
	int                                                PolyRefNavPolyBits                                 // 0x5e0(0x4)
	int                                                PolyRefSaltBits                                    // 0x5e4(0x4)
	float                                              DefaultDrawDistance                                // 0x5e8(0x4)
	float                                              DefaultMaxSearchNodes                              // 0x5ec(0x4)
	float                                              DefaultMaxHierarchicalSearchNodes                  // 0x5f0(0x4)
	byte                                               RegionPartitioning                                 // 0x5f4(0x1)
	byte                                               LayerPartitioning                                  // 0x5f5(0x1)
	int                                                RegionChunkSplits                                  // 0x5f8(0x4)
	int                                                LayerChunkSplits                                   // 0x5fc(0x4)
	bool                                               bSortNavigationAreasByCost                         // 0x600(0x1)
	bool                                               bPerformVoxelFiltering                             // 0x600(0x1)
	bool                                               bMarkLowHeightAreas                                // 0x600(0x1)
	bool                                               bDoFullyAsyncNavDataGathering                      // 0x600(0x1)
	bool                                               bUseBetterOffsetsFromCorners                       // 0x600(0x1)
	bool                                               bUseVirtualFilters                                 // 0x600(0x1)
	bool                                               bUseVoxelCache                                     // 0x600(0x1)
	float                                              TileSetUpdateInterval                              // 0x604(0x4)
	float                                              HeuristicScale                                     // 0x608(0x4)
	float                                              VerticalDeviationFromGroundCompensation            // 0x60c(0x4)
};


// Size 0x0
class NavigationGraphNode: public Actor
{
public:
};


// Size 0x0
class PlayerStartPIE: public PlayerStart
{
public:
};


// Size 0x0
class NavPathObserverInterface: public Interface
{
public:
};


// Size 0xd0
class NavigationTestingActor: public Actor
{
public:
	Class CapsuleComponent*                            CapsuleComponent                                   // 0x3e0(0x8)
	Class NavigationInvokerComponent*                  InvokerComponent                                   // 0x3e8(0x8)
	bool                                               bActAsNavigationInvoker                            // 0x3f0(0x1)
	Struct NavAgentProperties                          NavAgentProps                                      // 0x3f4(0x30)
	Struct Vector                                      QueryingExtent                                     // 0x424(0xc)
	Class NavigationData*                              MyNavData                                          // 0x430(0x8)
	Struct Vector                                      ProjectedLocation                                  // 0x438(0xc)
	bool                                               bProjectedLocationValid                            // 0x444(0x1)
	bool                                               bSearchStart                                       // 0x444(0x1)
	bool                                               bUseHierarchicalPathfinding                        // 0x444(0x1)
	bool                                               bGatherDetailedInfo                                // 0x444(0x1)
	bool                                               bShowNodePool                                      // 0x444(0x1)
	bool                                               bShowBestPath                                      // 0x444(0x1)
	bool                                               bShowDiffWithPreviousStep                          // 0x444(0x1)
	bool                                               bShouldBeVisibleInGame                             // 0x444(0x1)
	byte                                               CostDisplayMode                                    // 0x448(0x1)
	Struct Vector2D                                    TextCanvasOffset                                   // 0x44c(0x8)
	bool                                               bPathExist                                         // 0x454(0x1)
	bool                                               bPathIsPartial                                     // 0x454(0x1)
	bool                                               bPathSearchOutOfNodes                              // 0x454(0x1)
	float                                              PathfindingTime                                    // 0x458(0x4)
	float                                              PathCost                                           // 0x45c(0x4)
	int                                                PathfindingSteps                                   // 0x460(0x4)
	Class NavigationTestingActor*                      OtherActor                                         // 0x468(0x8)
	class                                              FilterClass                                        // 0x470(0x8)
	int                                                ShowStepIndex                                      // 0x478(0x4)
	float                                              OffsetFromCornersDistance                          // 0x47c(0x4)
};


// Size 0x28
class NavLinkDefinition: public Object
{
public:
	TArray<Struct HasMovingAgents>                     Links                                              // 0x28(0x10)
	TArray<Struct Links>                               SegmentLinks                                       // 0x38(0x10)
};


// Size 0x0
class NavLinkHostInterface: public Interface
{
public:
};


// Size 0x50
class NavLinkProxy: public Actor
{
public:
	TArray<Struct ContainsEmitterType>                 PointLinks                                         // 0x3e0(0x10)
	TArray<Struct PointLinks>                          SegmentLinks                                       // 0x3f0(0x10)
	Class NavLinkCustomComponent*                      SmartLinkComp                                      // 0x400(0x8)
	bool                                               bSmartLinkIsRelevant                               // 0x408(0x1)
};


// Size 0x0
class Note: public Actor
{
public:
};


// Size 0x118
class ParticleSystem: public Object
{
public:
	byte                                               SystemUpdateMode                                   // 0x28(0x1)
	float                                              UpdateTime_FPS                                     // 0x2c(0x4)
	float                                              UpdateTime_Delta                                   // 0x30(0x4)
	float                                              WarmUpTime                                         // 0x34(0x4)
	float                                              WarmupTickRate                                     // 0x38(0x4)
	TArray<class Emitters*>                            Emitters                                           // 0x40(0x10)
	Class ParticleSystemComponent*                     PreviewComponent                                   // 0x50(0x8)
	Class InterpCurveEdSetup*                          CurveEdSetup                                       // 0x58(0x8)
	bool                                               bOrientZAxisTowardCamera                           // 0x60(0x1)
	float                                              LODDistanceCheckTime                               // 0x64(0x4)
	byte                                               LODMethod                                          // 0x68(0x1)
	TArray<Float >                                     LODDistances                                       // 0x70(0x10)
	bool                                               bRegenerateLODDuplicate                            // 0x80(0x1)
	TArray<Struct bRegenerateLODDuplicate>             LODSettings                                        // 0x88(0x10)
	bool                                               bIgnoreBoundsRotation                              // 0x98(0x1)
	bool                                               bBoostParticleAggregationPriority                  // 0x98(0x1)
	bool                                               bUseFixedRelativeBoundingBox                       // 0x98(0x1)
	Struct Box                                         FixedRelativeBoundingBox                           // 0x9c(0x1c)
	bool                                               bUseLowResTranslucencyBoundingBox                  // 0xb8(0x1)
	Struct Box                                         LowResTranslucencyBoundingBox                      // 0xbc(0x1c)
	float                                              SecondsBeforeInactive                              // 0xd8(0x4)
	bool                                               bShouldResetPeakCounts                             // 0xdc(0x1)
	bool                                               bHasPhysics                                        // 0xdc(0x1)
	bool                                               bPostPhysicsTick                                   // 0xdc(0x1)
	bool                                               bUseRealtimeThumbnail                              // 0xdc(0x1)
	bool                                               ThumbnailImageOutOfDate                            // 0xdc(0x1)
	float                                              Delay                                              // 0xe0(0x4)
	float                                              DelayLow                                           // 0xe4(0x4)
	bool                                               bUseDelayRange                                     // 0xe8(0x1)
	Struct Vector                                      MacroUVPosition                                    // 0xec(0xc)
	float                                              MacroUVRadius                                      // 0xf8(0x4)
	byte                                               OcclusionBoundsMethod                              // 0xfc(0x1)
	Struct Box                                         CustomOcclusionBounds                              // 0x100(0x1c)
	TArray<Struct CustomOcclusionBounds>               SoloTracking                                       // 0x120(0x10)
	TArray<Struct SoloTracking>                        NamedMaterialSlots                                 // 0x130(0x10)
};


// Size 0x10
class ParticleSystemAggregateTickSettings: public Object
{
public:
	int                                                FramesTickScaledOver                               // 0x28(0x4)
	int                                                MaxTicksPerFrame                                   // 0x2c(0x4)
	float                                              PriorityInflationPower                             // 0x30(0x4)
};


// Size 0x0
class ParticleEventManager: public Actor
{
public:
};


// Size 0x0
class Interface_CollisionDataProvider: public Interface
{
public:
};


// Size 0x10
class MeshPatchAsset: public Object
{
public:
};


// Size 0x210
class SkeletalMesh: public Object
{
public:
	Class Skeleton*                                    Skeleton                                           // 0x50(0x8)
	Struct BoxSphereBounds                             Bounds                                             // 0x58(0x1c)
	TArray<Struct Bounds>                              Materials                                          // 0x78(0x10)
	TArray<Struct Materials>                           SkelMirrorTable                                    // 0x88(0x10)
	byte                                               SkelMirrorAxis                                     // 0x98(0x1)
	byte                                               SkelMirrorFlipAxis                                 // 0x99(0x1)
	TArray<Struct SkelMirrorFlipAxis>                  LODInfo                                            // 0xa0(0x10)
	bool                                               bUseFullPrecisionUVs                               // 0xb0(0x1)
	bool                                               bHasBeenSimplified                                 // 0xb0(0x1)
	bool                                               bHasVertexColors                                   // 0xb0(0x1)
	TArray<Struct bHasVertexColors>                    DeformablesSettings                                // 0xb8(0x10)
	bool                                               bKeepTessellationAdjacency                         // 0xc8(0x1)
	bool                                               bKeepSkeletalMeshBuffersInMemory                   // 0xc8(0x1)
	bool                                               bEnablePerPolyCollision                            // 0xc8(0x1)
	Class BodySetup*                                   BodySetup                                          // 0xd0(0x8)
	Class PhysicsAsset*                                PhysicsAsset                                       // 0xd8(0x8)
	Class HIKCharacterization*                         Characterization                                   // 0xe0(0x8)
	Class PhysicsAsset*                                DeformablesPhysicsAsset                            // 0xe8(0x8)
	float                                              StreamingDistanceMultiplier                        // 0xf0(0x4)
	float                                              StreamingDiscardedTexelRatios                      // 0xf4(0x4)
	TArray<class MorphTargets*>                        MorphTargets                                       // 0xf8(0x10)
	TArray<class MeshPatchAssets*>                     MeshPatchAssets                                    // 0x108(0x10)
	TArray<Struct MeshPatchAssets>                     ClothingAssets                                     // 0x1f0(0x10)
	TArray<class AssetUserData*>                       AssetUserData                                      // 0x210(0x10)
	TArray<class Sockets*>                             Sockets                                            // 0x228(0x10)
};


// Size 0x28
class AnimationAsset: public Object
{
public:
	Class Skeleton*                                    Skeleton                                           // 0x28(0x8)
	TArray<class MetaData*>                            MetaData                                           // 0x40(0x10)
};


// Size 0x28
class DefaultPawn: public Pawn
{
public:
	float                                              BaseTurnRate                                       // 0x448(0x4)
	float                                              BaseLookUpRate                                     // 0x44c(0x4)
	Class PawnMovementComponent*                       MovementComponent                                  // 0x450(0x8)
	Class SphereComponent*                             CollisionComponent                                 // 0x458(0x8)
	Class StaticMeshComponent*                         MeshComponent                                      // 0x460(0x8)
	bool                                               bAddDefaultMovementBindings                        // 0x468(0x1)
};


// Size 0x0
class SpectatorPawn: public DefaultPawn
{
public:
};


// Size 0x8
class ReflectionCapture: public Actor
{
public:
	Class ReflectionCaptureComponent*                  CaptureComponent                                   // 0x3d0(0x8)
};


// Size 0x0
class BoxReflectionCapture: public ReflectionCapture
{
public:
};


// Size 0x0
class PlaneReflectionCapture: public ReflectionCapture
{
public:
};


// Size 0x8
class SphereReflectionCapture: public ReflectionCapture
{
public:
	Class DrawSphereComponent*                         DrawCaptureRadius                                  // 0x3d8(0x8)
};


// Size 0x0
class RigidBodyBase: public Actor
{
public:
};


// Size 0x20
class PhysicsConstraintActor: public RigidBodyBase
{
public:
	Class PhysicsConstraintComponent*                  ConstraintComp                                     // 0x3d0(0x8)
	Class Actor*                                       ConstraintActor1                                   // 0x3d8(0x8)
	Class Actor*                                       ConstraintActor2                                   // 0x3e0(0x8)
	bool                                               bDisableCollision                                  // 0x3e8(0x1)
};


// Size 0x8
class PhysicsThruster: public RigidBodyBase
{
public:
	Class PhysicsThrusterComponent*                    ThrusterComponent                                  // 0x3d0(0x8)
};


// Size 0x8
class RadialForceActor: public RigidBodyBase
{
public:
	Class RadialForceComponent*                        ForceComponent                                     // 0x3d0(0x8)
};


// Size 0x8
class SceneCapture: public Actor
{
public:
	Class StaticMeshComponent*                         MeshComp                                           // 0x3d0(0x8)
};


// Size 0x10
class SceneCapture2D: public SceneCapture
{
public:
	Class SceneCaptureComponent2D*                     CaptureComponent2D                                 // 0x3d8(0x8)
	Class DrawFrustumComponent*                        DrawFrustum                                        // 0x3e0(0x8)
};


// Size 0x10
class SceneCaptureCube: public SceneCapture
{
public:
	Class SceneCaptureComponentCube*                   CaptureComponentCube                               // 0x3d8(0x8)
	Class DrawFrustumComponent*                        DrawFrustum                                        // 0x3e0(0x8)
};


// Size 0x0
class ServerOnlyTestActor: public Actor
{
public:
};


// Size 0x120
class SkinnedMeshComponent: public MeshComponent
{
public:
	Class SkeletalMesh*                                SkeletalMesh                                       // 0x5b8(0x8)
	Class MaterialInterface*                           CustomDepthMaterial                                // 0x608(0x8)
	bool                                               bUseBoundsFromMasterPoseComponent                  // 0x620(0x1)
	TArray<Struct bUseBoundsFromMasterPoseComponent>   ActiveVertexAnims                                  // 0x628(0x10)
	Class PhysicsAsset*                                PhysicsAssetOverride                               // 0x638(0x8)
	int                                                ForcedLodModel                                     // 0x640(0x4)
	int                                                MinLodModel                                        // 0x644(0x4)
	int                                                PredictedLODLevel                                  // 0x648(0x4)
	int                                                OldPredictedLODLevel                               // 0x64c(0x4)
	float                                              MaxDistanceFactor                                  // 0x650(0x4)
	TArray<Struct MaxDistanceFactor>                   LODInfo                                            // 0x658(0x10)
	float                                              StreamingDistanceMultiplier                        // 0x668(0x4)
	Struct Color                                       WireframeColor                                     // 0x66c(0x4)
	bool                                               bForceWireframe                                    // 0x670(0x1)
	bool                                               bDisplayBones                                      // 0x670(0x1)
	bool                                               bDisplayBoneCollisions                             // 0x670(0x1)
	bool                                               bDisableMorphTarget                                // 0x670(0x1)
	bool                                               bHideSkin                                          // 0x670(0x1)
	bool                                               bPerBoneMotionBlur                                 // 0x688(0x1)
	bool                                               bComponentUseFixedSkelBounds                       // 0x688(0x1)
	bool                                               bConsiderAllBodiesForBounds                        // 0x688(0x1)
	byte                                               MeshComponentUpdateFlag                            // 0x68c(0x1)
	bool                                               bForceMeshObjectUpdate                             // 0x690(0x1)
	bool                                               bChartDistanceFactor                               // 0x690(0x1)
	bool                                               bCanHighlightSelectedSections                      // 0x690(0x1)
	bool                                               bRecentlyRendered                                  // 0x690(0x1)
	float                                              ProgressiveDrawingFraction                         // 0x694(0x4)
	byte                                               CustomSortAlternateIndexMode                       // 0x698(0x1)
	Struct BoxSphereBounds                             CachedLocalBounds                                  // 0x6ac(0x1c)
	bool                                               bCachedLocalBoundsUpToDate                         // 0x6c8(0x1)
	bool                                               bEnableUpdateRateOptimizations                     // 0x6c9(0x1)
	bool                                               bDisplayDebugUpdateRateOptimizations               // 0x6ca(0x1)
};


// Size 0x1b0
class PhysicsConstraintComponent: public SceneComponent
{
public:
	Class Actor*                                       ConstraintActor1                                   // 0x2d0(0x8)
	Struct ConstrainComponentPropName                  ComponentName1                                     // 0x2d8(0x8)
	Class Actor*                                       ConstraintActor2                                   // 0x2e0(0x8)
	Struct ConstrainComponentPropName                  ComponentName2                                     // 0x2e8(0x8)
	Class PhysicsConstraintTemplate*                   ConstraintSetup                                    // 0x300(0x8)
	Struct ConstraintInstance                          ConstraintInstance                                 // 0x320(0x160)
};


// Size 0x240
class Skeleton: public Object
{
public:
	TArray<Struct GetAnimInstance>                     BoneTree                                           // 0x28(0x10)
	TArray<Struct BoneTree>                            LinkupCache                                        // 0xb8(0x10)
	TArray<class Sockets*>                             Sockets                                            // 0xc8(0x10)
	Struct SmartNameContainer                          SmartNames                                         // 0x128(0x50)
	TArray<Struct SmartNames>                          SlotGroups                                         // 0x178(0x10)
};


// Size 0x0
class Interface_Animatable: public Interface
{
public:
};


// Size 0x2d0
class SkeletalMeshComponent: public SkinnedMeshComponent
{
public:
	byte                                               AnimationMode                                      // 0x6f0(0x1)
	class                                              AnimBlueprintGeneratedClass                        // 0x6f8(0x8)
	Class AnimInstance*                                AnimScriptInstance                                 // 0x700(0x8)
	Struct SingleAnimationPlayData                     AnimationData                                      // 0x708(0x20)
	TArray<Struct AnimationData>                       CachedLocalAtoms                                   // 0x738(0x10)
	TArray<Struct CachedLocalAtoms>                    CachedSpaceBases                                   // 0x748(0x10)
	float                                              GlobalAnimRateScale                                // 0x780(0x4)
	bool                                               bHasValidBodies                                    // 0x784(0x1)
	byte                                               KinematicBonesUpdateType                           // 0x788(0x1)
	bool                                               bBlendPhysics                                      // 0x78c(0x1)
	bool                                               bEnablePhysicsOnDedicatedServer                    // 0x78c(0x1)
	bool                                               bUpdateJointsFromAnimation                         // 0x78c(0x1)
	bool                                               bDisableClothSimulation                            // 0x78c(0x1)
	bool                                               bCollideWithEnvironment                            // 0x78c(0x1)
	bool                                               bCollideWithAttachedChildren                       // 0x78c(0x1)
	bool                                               bLocalSpaceSimulation                              // 0x78c(0x1)
	bool                                               bClothMorphTarget                                  // 0x78c(0x1)
	bool                                               bResetAfterTeleport                                // 0x78d(0x1)
	float                                              TeleportDistanceThreshold                          // 0x790(0x4)
	float                                              TeleportRotationThreshold                          // 0x794(0x4)
	float                                              ClothBlendWeight                                   // 0x798(0x4)
	Struct Vector                                      RootBoneTranslation                                // 0x7a0(0xc)
	bool                                               bNoSkeletonUpdate                                  // 0x7ac(0x1)
	bool                                               bPauseAnims                                        // 0x7ac(0x1)
	bool                                               bEnablePerPolyCollision                            // 0x7ac(0x1)
	Class BodySetup*                                   BodySetup                                          // 0x7b0(0x8)
	bool                                               bAutonomousTickPose                                // 0x7b8(0x1)
	bool                                               bForceRefpose                                      // 0x7b8(0x1)
	bool                                               bOldForceRefPose                                   // 0x7b8(0x1)
	bool                                               bShowPrePhysBones                                  // 0x7b8(0x1)
	bool                                               bRequiredBonesUpToDate                             // 0x7b8(0x1)
	bool                                               bAnimTreeInitialised                               // 0x7b8(0x1)
	bool                                               bEnableLineCheckWithBounds                         // 0x7b8(0x1)
	Struct Vector                                      LineCheckBoundsScale                               // 0x7bc(0xc)
	int                                                RagdollAggregateThreshold                          // 0x7c8(0x4)
	bool                                               UseRefPoseToInitialise                             // 0x7e0(0x1)
	float                                              LastPoseTickTime                                   // 0x9a8(0x4)
};


// Size 0x0
class MatineeAnimInterface: public Interface
{
public:
};


// Size 0x40
class SkeletalMeshActor: public Actor
{
public:
	bool                                               bShouldDoAnimNotifies                              // 0x3d8(0x1)
	bool                                               bWakeOnLevelStart                                  // 0x3d8(0x1)
	Class SkeletalMeshComponent*                       SkeletalMeshComponent                              // 0x3e0(0x8)
	Class SkeletalMesh*                                ReplicatedMesh                                     // 0x3e8(0x8)
	Class PhysicsAsset*                                ReplicatedPhysAsset                                // 0x3f0(0x8)
	Class MaterialInterface*                           ReplicatedMaterial0                                // 0x3f8(0x8)
	Class MaterialInterface*                           ReplicatedMaterial1                                // 0x400(0x8)
};


// Size 0x8
class SplineMeshActor: public Actor
{
public:
	Class SplineMeshComponent*                         SplineMeshComponent                                // 0x3d0(0x8)
};


// Size 0x8
class CoveredMeshActor: public StaticMeshActor
{
public:
	Class InstancedCoverageMeshComponent*              InstancedCoverageMeshComponent                     // 0x3e0(0x8)
};


// Size 0x0
class StreamingProbe: public Actor
{
public:
};


// Size 0x0
class TargetPoint: public Actor
{
public:
};


// Size 0x8
class TextRenderActor: public Actor
{
public:
	Class TextRenderComponent*                         TextRender                                         // 0x3d0(0x8)
};


// Size 0x10
class TriggerBase: public Actor
{
public:
	Class ShapeComponent*                              CollisionComponent                                 // 0x3d0(0x8)
	Class BillboardComponent*                          SpriteComponent                                    // 0x3d8(0x8)
};


// Size 0x0
class TriggerBox: public TriggerBase
{
public:
};


// Size 0x0
class TriggerCapsule: public TriggerBase
{
public:
};


// Size 0x0
class TriggerSphere: public TriggerBase
{
public:
};


// Size 0x8
class VectorFieldVolume: public Actor
{
public:
	Class VectorFieldComponent*                        VectorFieldComponent                               // 0x3d0(0x8)
};


// Size 0x8
class WaterEmissionVolume: public Actor
{
public:
	Class WaterEmissionVolumeComponent*                WaterEmissionVolumeComponent                       // 0x3d0(0x8)
};


// Size 0x8
class ComponentWithTestInterface: public ActorComponent
{
public:
};


// Size 0x8
class AnotherComponentWithTestInterface: public ActorComponent
{
public:
};


// Size 0x50
class ApplicationLifecycleComponent: public ActorComponent
{
public:
};


// Size 0x0
class AggregatorInterface: public Interface
{
public:
};


// Size 0x18
class ComponentAggregatorComponent: public ActorComponent
{
public:
	TArray<class Aggregatables*>                       Aggregatables                                      // 0xd0(0x10)
};


// Size 0x98
class InterpToMovementComponent: public MovementComponent
{
public:
	float                                              Duration                                           // 0x110(0x4)
	bool                                               bPauseOnImpact                                     // 0x114(0x1)
	byte                                               BehaviourType                                      // 0x118(0x1)
	bool                                               bForceSubStepping                                  // 0x11c(0x1)
	float                                              MaxSimulationTimeStep                              // 0x170(0x4)
	int                                                MaxSimulationIterations                            // 0x174(0x4)
	TArray<Struct InterpControlPoint>                  ControlPoints                                      // 0x178(0x10)
};


// Size 0x3b0
class NavigationSystem: public BlueprintFunctionLibrary
{
public:
	Class NavigationData*                              MainNavData                                        // 0x28(0x8)
	Class NavigationData*                              AbstractNavData                                    // 0x30(0x8)
	bool                                               bAutoCreateNavigationData                          // 0x38(0x1)
	bool                                               bAllowClientSideNavigation                         // 0x38(0x1)
	bool                                               bSupportRebuilding                                 // 0x38(0x1)
	bool                                               bInitialBuildingLocked                             // 0x38(0x1)
	bool                                               bSkipAgentHeightCheckWhenPickingNavData            // 0x38(0x1)
	byte                                               DataGatheringMode                                  // 0x3c(0x1)
	bool                                               bGenerateNavigationOnlyAroundNavigationInvokers    // 0x40(0x1)
	float                                              ActiveTilesUpdateInterval                          // 0x44(0x4)
	TArray<Struct ActiveTilesUpdateInterval>           SupportedAgents                                    // 0x48(0x10)
	float                                              DirtyAreasUpdateFreq                               // 0x58(0x4)
	TArray<class NavDataSet*>                          NavDataSet                                         // 0x60(0x10)
	TArray<class NavDataRegistrationQueue*>            NavDataRegistrationQueue                           // 0x70(0x10)
	byte                                               OperationMode                                      // 0x1cc(0x1)
	Struct StringAssetReference                        InstancedNavMeshesDataAsset                        // 0x3c0(0x10)
	Class InstancedNavMeshesDataAsset*                 InstancedNavMeshesData                             // 0x3d0(0x8)
};


// Size 0x28
class AnimSequenceBase: public AnimationAsset
{
public:
	TArray<Struct BranchingPointStateNotifyIndices>    Notifies                                           // 0x50(0x10)
	float                                              SequenceLength                                     // 0x60(0x4)
	float                                              RateScale                                          // 0x64(0x4)
	Struct RawCurveTracks                              RawCurveData                                       // 0x68(0x10)
};


// Size 0x0
class AnimCompositeBase: public AnimSequenceBase
{
public:
};


// Size 0x0
class AnimStateMachineTypes: public Object
{
public:
};


// Size 0x70
class AnimMontage: public AnimCompositeBase
{
public:
	float                                              BlendInTime                                        // 0x78(0x4)
	float                                              BlendOutTime                                       // 0x7c(0x4)
	float                                              BlendOutTriggerTime                                // 0x80(0x4)
	TArray<Struct BlendOutTriggerTime>                 CompositeSections                                  // 0x88(0x10)
	TArray<Struct CompositeSections>                   SlotAnimTracks                                     // 0x98(0x10)
	TArray<Struct SlotAnimTracks>                      BranchingPoints                                    // 0xa8(0x10)
	bool                                               bEnableRootMotionTranslation                       // 0xb8(0x1)
	bool                                               bEnableRootMotionRotation                          // 0xb9(0x1)
	byte                                               RootMotionRootLock                                 // 0xba(0x1)
	TArray<Struct RootMotionRootLock>                  BranchingPointMarkers                              // 0xc0(0x10)
	bool                                               bAnimBranchingPointNeedsSort                       // 0xd0(0x1)
	TArray<Int >                                       BranchingPointStateNotifyIndices                   // 0xd8(0x10)
};


// Size 0x0
class RVOAvoidanceInterface: public Interface
{
public:
};


// Size 0x0
class NetworkPredictionInterface: public Interface
{
public:
};


// Size 0x18
class FloatingPawnMovement: public PawnMovementComponent
{
public:
	float                                              MaxSpeed                                           // 0x160(0x4)
	float                                              Acceleration                                       // 0x164(0x4)
	float                                              Deceleration                                       // 0x168(0x4)
	float                                              TurningBoost                                       // 0x16c(0x4)
	bool                                               bPositionCorrected                                 // 0x170(0x1)
};


// Size 0x8
class SpectatorPawnMovement: public FloatingPawnMovement
{
public:
	bool                                               bIgnoreTimeDilation                                // 0x178(0x1)
};


// Size 0x68
class ProjectileMovementComponent: public MovementComponent
{
public:
	float                                              InitialSpeed                                       // 0x110(0x4)
	float                                              MaxSpeed                                           // 0x114(0x4)
	bool                                               bRotationFollowsVelocity                           // 0x118(0x1)
	bool                                               bShouldBounce                                      // 0x118(0x1)
	bool                                               bInitialVelocityInLocalSpace                       // 0x118(0x1)
	bool                                               bForceSubStepping                                  // 0x118(0x1)
	bool                                               bIsHomingProjectile                                // 0x118(0x1)
	bool                                               bBounceAngleAffectsFriction                        // 0x118(0x1)
	bool                                               bIsSliding                                         // 0x118(0x1)
	float                                              PreviousHitTime                                    // 0x11c(0x4)
	Struct Vector                                      PreviousHitNormal                                  // 0x120(0xc)
	float                                              ProjectileGravityScale                             // 0x12c(0x4)
	float                                              Buoyancy                                           // 0x130(0x4)
	float                                              Bounciness                                         // 0x134(0x4)
	float                                              Friction                                           // 0x138(0x4)
	float                                              BounceVelocityStopSimulatingThreshold              // 0x13c(0x4)
	float                                              HomingAccelerationMagnitude                        // 0x160(0x4)
	float                                              MaxSimulationTimeStep                              // 0x16c(0x4)
	int                                                MaxSimulationIterations                            // 0x170(0x4)
};


// Size 0x20
class RotatingMovementComponent: public MovementComponent
{
public:
	Struct Rotator                                     RotationRate                                       // 0x110(0xc)
	Struct Vector                                      PivotTranslation                                   // 0x11c(0xc)
	bool                                               bRotationInLocalSpace                              // 0x128(0x1)
};


// Size 0x8
class NavigationInvokerComponent: public ActorComponent
{
public:
	float                                              TileGenerationRadius                               // 0xc8(0x4)
	float                                              TileRemovalRadius                                  // 0xcc(0x4)
};


// Size 0x30
class NavRelevantComponent: public ActorComponent
{
public:
	bool                                               bNavigationRelevant                                // 0xec(0x1)
	bool                                               bAttachToOwnersRoot                                // 0xec(0x1)
	Class Object*                                      CachedNavParent                                    // 0xf0(0x8)
};


// Size 0x0
class NavLinkCustomInterface: public Interface
{
public:
};


// Size 0x98
class NavLinkCustomComponent: public NavRelevantComponent
{
public:
	class                                              EnabledAreaClass                                   // 0x108(0x8)
	class                                              DisabledAreaClass                                  // 0x110(0x8)
	Struct Vector                                      LinkRelativeStart                                  // 0x118(0xc)
	Struct Vector                                      LinkRelativeEnd                                    // 0x124(0xc)
	byte                                               LinkDirection                                      // 0x130(0x1)
	bool                                               bLinkEnabled                                       // 0x134(0x1)
	bool                                               bNotifyWhenEnabled                                 // 0x134(0x1)
	bool                                               bNotifyWhenDisabled                                // 0x134(0x1)
	bool                                               bCreateBoxObstacle                                 // 0x134(0x1)
	Struct Vector                                      ObstacleOffset                                     // 0x138(0xc)
	Struct Vector                                      ObstacleExtent                                     // 0x144(0xc)
	class                                              ObstacleAreaClass                                  // 0x150(0x8)
	float                                              BroadcastRadius                                    // 0x158(0x4)
	float                                              BroadcastInterval                                  // 0x15c(0x4)
	byte                                               BroadcastChannel                                   // 0x160(0x1)
};


// Size 0x20
class NavModifierComponent: public NavRelevantComponent
{
public:
	class                                              AreaClass                                          // 0xf8(0x8)
	Struct Vector                                      FailsafeExtent                                     // 0x100(0xc)
};


// Size 0x28
class PawnNoiseEmitterComponent: public ActorComponent
{
public:
	bool                                               bAIPerceptionSystemCompatibilityMode               // 0xc8(0x1)
	Struct Vector                                      LastRemoteNoisePosition                            // 0xcc(0xc)
	float                                              NoiseLifetime                                      // 0xd8(0x4)
	float                                              LastRemoteNoiseVolume                              // 0xdc(0x4)
	float                                              LastRemoteNoiseTime                                // 0xe0(0x4)
	float                                              LastLocalNoiseVolume                               // 0xe4(0x4)
	float                                              LastLocalNoiseTime                                 // 0xe8(0x4)
};


// Size 0xa8
class PhysicsHandleComponent: public ActorComponent
{
public:
	Class PrimitiveComponent*                          GrabbedComponent                                   // 0xc8(0x8)
	float                                              LinearDamping                                      // 0xe0(0x4)
	float                                              LinearStiffness                                    // 0xe4(0x4)
	float                                              AngularDamping                                     // 0xe8(0x4)
	float                                              AngularStiffness                                   // 0xec(0x4)
	float                                              InterpolationSpeed                                 // 0x150(0x4)
};


// Size 0x20
class PlatformEventsComponent: public ActorComponent
{
public:
};


// Size 0x1e0
class AtmosphericFogComponent: public SceneComponent
{
public:
	float                                              SunMultiplier                                      // 0x2d0(0x4)
	float                                              FogMultiplier                                      // 0x2d4(0x4)
	float                                              DensityMultiplier                                  // 0x2d8(0x4)
	float                                              DensityOffset                                      // 0x2dc(0x4)
	float                                              DistanceScale                                      // 0x2e0(0x4)
	float                                              AltitudeScale                                      // 0x2e4(0x4)
	float                                              DistanceOffset                                     // 0x2e8(0x4)
	float                                              GroundOffset                                       // 0x2ec(0x4)
	float                                              StartDistance                                      // 0x2f0(0x4)
	float                                              SunDiscScale                                       // 0x2f4(0x4)
	float                                              DefaultBrightness                                  // 0x2f8(0x4)
	Struct Color                                       DefaultLightColor                                  // 0x2fc(0x4)
	bool                                               bDisableSunDisk                                    // 0x300(0x1)
	bool                                               bDisableGroundScattering                           // 0x300(0x1)
	Struct AtmospherePrecomputeParameters              PrecomputeParams                                   // 0x304(0x2c)
	Class Texture2D*                                   TransmittanceTexture                               // 0x330(0x8)
	Class Texture2D*                                   IrradianceTexture                                  // 0x338(0x8)
};


// Size 0xc0
class SoundAttenuation: public Object
{
public:
	Struct AttenuationSettings                         Attenuation                                        // 0x28(0xc0)
};


// Size 0x150
class AudioComponent: public SceneComponent
{
public:
	Class SoundBase*                                   Sound                                              // 0x2d0(0x8)
	TArray<Struct Sound>                               InstanceParameters                                 // 0x2d8(0x10)
	Class SoundClass*                                  SoundClassOverride                                 // 0x2e8(0x8)
	bool                                               bAutoDestroy                                       // 0x2f0(0x1)
	bool                                               bStopWhenOwnerDestroyed                            // 0x2f0(0x1)
	bool                                               bShouldRemainActiveIfDropped                       // 0x2f0(0x1)
	bool                                               bAllowSpatialization                               // 0x2f0(0x1)
	bool                                               bOverrideAttenuation                               // 0x2f0(0x1)
	bool                                               bIsUISound                                         // 0x2f0(0x1)
	float                                              PitchModulationMin                                 // 0x2f4(0x4)
	float                                              PitchModulationMax                                 // 0x2f8(0x4)
	float                                              VolumeModulationMin                                // 0x2fc(0x4)
	float                                              VolumeModulationMax                                // 0x300(0x4)
	float                                              VolumeMultiplier                                   // 0x304(0x4)
	float                                              PitchMultiplier                                    // 0x308(0x4)
	float                                              HighFrequencyGainMultiplier                        // 0x30c(0x4)
	Class SoundAttenuation*                            AttenuationSettings                                // 0x310(0x8)
	Struct AttenuationSettings                         AttenuationOverrides                               // 0x318(0xc0)
};


// Size 0x10
class BasisComponent: public SceneComponent
{
public:
};


// Size 0x10
class CalmWaterComponent: public SceneComponent
{
public:
	float                                              Radius                                             // 0x2d0(0x4)
	float                                              RadiusPercentageToStartLerp                        // 0x2d4(0x4)
	float                                              DampeningFactor                                    // 0x2d8(0x4)
};


// Size 0x20
class ChildActorComponent: public SceneComponent
{
public:
	class                                              ChildActorClass                                    // 0x2d0(0x8)
	Class Actor*                                       ChildActor                                         // 0x2d8(0x8)
};


// Size 0x10
class EditorOnlyChildActorComponent: public ChildActorComponent
{
public:
	class                                              CachedChildActorClass                              // 0x2f0(0x8)
};


// Size 0x30
class DecalComponent: public SceneComponent
{
public:
	Class MaterialInterface*                           DecalMaterial                                      // 0x2d0(0x8)
	int                                                SortOrder                                          // 0x2d8(0x4)
	float                                              FadeScreenSize                                     // 0x2dc(0x4)
	Class MaterialInstanceDynamic*                     MaterialInstanceDynamic                            // 0x2e0(0x8)
};


// Size 0x60
class ExponentialHeightFogComponent: public SceneComponent
{
public:
	float                                              FogDensity                                         // 0x2d0(0x4)
	Struct LinearColor                                 FogInscatteringColor                               // 0x2d4(0x10)
	Struct LinearColor                                 FarFogInscatteringColor                            // 0x2e4(0x10)
	float                                              DirectionalInscatteringExponent                    // 0x2f4(0x4)
	float                                              DirectionalInscatteringStartDistance               // 0x2f8(0x4)
	float                                              StartScaleDirectionalInscattering                  // 0x2fc(0x4)
	float                                              FarScaleDirectionalInscattering                    // 0x300(0x4)
	Struct LinearColor                                 DirectionalInscatteringColor                       // 0x304(0x10)
	float                                              FogHeightFalloff                                   // 0x314(0x4)
	float                                              FogMaxOpacity                                      // 0x318(0x4)
	float                                              StartDistance                                      // 0x31c(0x4)
	float                                              FarDistance                                        // 0x320(0x4)
	float                                              StartScale                                         // 0x324(0x4)
	float                                              FarScale                                           // 0x328(0x4)
	bool                                               bIsUnderwater                                      // 0x32c(0x1)
};


// Size 0x100
class FogVolumeComponent: public SceneComponent
{
public:
	Struct LinearColor                                 Color                                              // 0x2d0(0x10)
	float                                              SceneFogSaturation                                 // 0x2e0(0x4)
	float                                              Density                                            // 0x2e4(0x4)
	float                                              HeightFogFalloff                                   // 0x2e8(0x4)
	float                                              DistanceFalloffPower                               // 0x2ec(0x4)
	float                                              ShadowIntensity                                    // 0x2f0(0x4)
	float                                              ScaleOnTranslucency                                // 0x2f4(0x4)
	Struct Vector                                      FogVelocity                                        // 0x2f8(0xc)
	Struct Vector                                      NoisePrimaryScale                                  // 0x304(0xc)
	Struct Vector                                      NoiseSecondaryScale                                // 0x310(0xc)
	float                                              NoiseBlend                                         // 0x31c(0x4)
	Class Texture*                                     VolumeTexture                                      // 0x320(0x8)
	float                                              InscatteringIntensity                              // 0x328(0x4)
	float                                              InscatteringPower                                  // 0x32c(0x4)
	float                                              ShadowDistance                                     // 0x330(0x4)
	float                                              ActiveBelowDepth                                   // 0x334(0x4)
	bool                                               bUseSceneInscattering                              // 0x338(0x1)
	bool                                               bUnderwater                                        // 0x33c(0x1)
	bool                                               bScaleWithLighting                                 // 0x33d(0x1)
	bool                                               bAdvancedVolumeFog                                 // 0x33e(0x1)
	bool                                               UseDensityMapOnTranslucency                        // 0x33f(0x1)
	Class Texture*                                     DensityMap                                         // 0x340(0x8)
	Struct Vector                                      DensityMapScale                                    // 0x348(0xc)
	Struct Vector                                      DensityMapOffset                                   // 0x354(0xc)
	Struct Vector                                      DensityMapActiveHemisphereOrigin                   // 0x360(0xc)
	Struct Vector                                      DensityMapActiveHemisphereDirection                // 0x36c(0xc)
	float                                              DensityMapActiveHemisphereInnerRadius              // 0x378(0x4)
	float                                              DensityMapActiveHemisphereOuterRadius              // 0x37c(0x4)
	float                                              SelfShadowBrightness                               // 0x380(0x4)
	float                                              SelfShadowFogScale                                 // 0x384(0x4)
	bool                                               bMeshFog                                           // 0x388(0x1)
	float                                              MeshFogDensity                                     // 0x38c(0x4)
	float                                              MeshFogShadowDensity                               // 0x390(0x4)
	float                                              MeshFogScatteringDensity                           // 0x394(0x4)
	Struct Vector                                      MeshFogNoisePrimaryScale                           // 0x398(0xc)
	Struct Vector                                      MeshFogNoiseSecondaryScale                         // 0x3a4(0xc)
	float                                              MeshFogNoiseBlend                                  // 0x3b0(0x4)
	Struct Vector                                      MeshFogVelocity                                    // 0x3b4(0xc)
	Class Texture*                                     MeshFogVolumeTexture                               // 0x3c0(0x8)
};


// Size 0x0
class InstancedNavMeshInterface: public Interface
{
public:
};


// Size 0x20
class InstancedNavMeshComponent: public SceneComponent
{
public:
	struct FName                                       NavMeshName                                        // 0x2d8(0x8)
	bool                                               UseAttachedParentAsPrimitiveBase                   // 0x2e0(0x1)
};


// Size 0x30
class AmbientLightSourceComponent: public LightComponent
{
public:
	float                                              Radius                                             // 0x458(0x4)
	float                                              AmbientIntensity                                   // 0x45c(0x4)
	Struct LinearColor                                 Tint                                               // 0x460(0x10)
	bool                                               QuadraticFalloff                                   // 0x470(0x1)
	byte                                               Shape                                              // 0x474(0x1)
	byte                                               SimpleFunctionType                                 // 0x475(0x1)
	float                                              ScaleOffset                                        // 0x478(0x4)
	float                                              PulsePhase                                         // 0x47c(0x4)
	float                                              FlickerFrequency                                   // 0x480(0x4)
	int                                                FlickerPerlinRow                                   // 0x484(0x4)
	bool                                               bShadowed                                          // 0x488(0x1)
	byte                                               GroupingPolicy                                     // 0x489(0x1)
};


// Size 0x80
class DirectionalLightComponent: public LightComponent
{
public:
	bool                                               bEnableLightShaftOcclusion                         // 0x458(0x1)
	float                                              OcclusionMaskDarkness                              // 0x45c(0x4)
	float                                              OcclusionDepthRange                                // 0x460(0x4)
	Struct Vector                                      LightShaftOverrideDirection                        // 0x464(0xc)
	float                                              WholeSceneDynamicShadowRadius                      // 0x470(0x4)
	float                                              DynamicShadowDistanceMovableLight                  // 0x474(0x4)
	float                                              DynamicShadowDistanceStationaryLight               // 0x478(0x4)
	int                                                DynamicShadowCascades                              // 0x47c(0x4)
	float                                              CascadeDistributionExponent                        // 0x480(0x4)
	float                                              CascadeTransitionFraction                          // 0x484(0x4)
	float                                              ShadowDistanceFadeoutFraction                      // 0x488(0x4)
	float                                              LastTransitionSizeOverride                         // 0x48c(0x4)
	float                                              CloseCascadeUpdateRateInMs                         // 0x490(0x4)
	float                                              FarCascadesUpdateRateInMs                          // 0x494(0x4)
	bool                                               bUseInsetShadowsForMovableObjects                  // 0x498(0x1)
	int                                                FarShadowCascadeCount                              // 0x49c(0x4)
	float                                              FarShadowDistance                                  // 0x4a0(0x4)
	float                                              NormalOffsetScale                                  // 0x4a4(0x4)
	float                                              CloudsShadowsIntensity                             // 0x4a8(0x4)
	float                                              DistanceFieldShadowDistance                        // 0x4ac(0x4)
	float                                              LightSourceAngle                                   // 0x4b0(0x4)
	float                                              TraceDistance                                      // 0x4b4(0x4)
	Struct LightmassDirectionalLightSettings           LightmassSettings                                  // 0x4b8(0x10)
	bool                                               bCastModulatedShadows                              // 0x4c8(0x1)
	Struct Color                                       ModulatedShadowColor                               // 0x4cc(0x4)
	bool                                               bUsedAsAtmosphereSunLight                          // 0x4d0(0x1)
};


// Size 0x40
class PointLightComponent: public LightComponent
{
public:
	float                                              Radius                                             // 0x458(0x4)
	float                                              AttenuationRadius                                  // 0x45c(0x4)
	bool                                               bUseInverseSquaredFalloff                          // 0x460(0x1)
	float                                              LightFalloffExponent                               // 0x464(0x4)
	float                                              IntensityScaleForWater                             // 0x468(0x4)
	float                                              MinDistanceToLightAssumed                          // 0x46c(0x4)
	float                                              SourceRadius                                       // 0x470(0x4)
	float                                              SourceLength                                       // 0x474(0x4)
	byte                                               SimpleFunctionType                                 // 0x478(0x1)
	float                                              ScaleOffset                                        // 0x47c(0x4)
	float                                              PulsePhase                                         // 0x480(0x4)
	float                                              FlickerFrequency                                   // 0x484(0x4)
	int                                                FlickerPerlinRow                                   // 0x488(0x4)
	Struct LightmassPointLightSettings                 LightmassSettings                                  // 0x48c(0xc)
};


// Size 0x10
class SpotLightComponent: public PointLightComponent
{
public:
	float                                              InnerConeAngle                                     // 0x498(0x4)
	float                                              OuterConeAngle                                     // 0x49c(0x4)
	float                                              LightShaftConeAngle                                // 0x4a0(0x4)
	float                                              KickBackRatio                                      // 0x4a4(0x4)
};


// Size 0x1a0
class SkyLightComponent: public LightComponentBase
{
public:
	byte                                               SourceType                                         // 0x300(0x1)
	Class TextureCube*                                 Cubemap                                            // 0x308(0x8)
	float                                              SkyDistanceThreshold                               // 0x310(0x4)
	bool                                               bLowerHemisphereIsBlack                            // 0x314(0x1)
	float                                              OcclusionMaxDistance                               // 0x318(0x4)
	float                                              Contrast                                           // 0x31c(0x4)
	float                                              MinOcclusion                                       // 0x320(0x4)
	Struct Color                                       OcclusionTint                                      // 0x324(0x4)
	float                                              ScaleForInteriors                                  // 0x328(0x4)
	Class TextureCube*                                 BlendDestinationCubemap                            // 0x3d8(0x8)
};


// Size 0x30
class NavigationGraphNodeComponent: public SceneComponent
{
public:
	Struct NavGraphNode                                Node                                               // 0x2d0(0x18)
	Class NavigationGraphNodeComponent*                NextNodeComponent                                  // 0x2e8(0x8)
	Class NavigationGraphNodeComponent*                PrevNodeComponent                                  // 0x2f0(0x8)
};


// Size 0x30
class PhysicsSpringComponent: public SceneComponent
{
public:
	float                                              SpringStiffness                                    // 0x2d0(0x4)
	float                                              SpringDamping                                      // 0x2d4(0x4)
	float                                              SpringLengthAtRest                                 // 0x2d8(0x4)
	float                                              SpringRadius                                       // 0x2dc(0x4)
	byte                                               SpringChannel                                      // 0x2e0(0x1)
	bool                                               bIgnoreSelf                                        // 0x2e1(0x1)
	float                                              SpringCompression                                  // 0x2e4(0x4)
};


// Size 0x10
class PhysicsThrusterComponent: public SceneComponent
{
public:
	float                                              ThrustStrength                                     // 0x2d0(0x4)
};


// Size 0x0
class WaterId: public Object
{
public:
};


// Size 0x10
class BaseWaterComponent: public PrimitiveComponent
{
public:
	class                                              WaterId                                            // 0x5a8(0x8)
	bool                                               ActiveInExclusionZone                              // 0x5b0(0x1)
};


// Size 0x3e0
class FFTWaterComponent: public BaseWaterComponent
{
public:
	Struct FFTWaterComponentParams                     WaterParams                                        // 0x5b8(0x310)
	Class Model*                                       Brush                                              // 0x8c8(0x8)
	Class BodySetup*                                   BrushBodySetup                                     // 0x8d0(0x8)
	Struct Vector                                      PrePivot                                           // 0x8d8(0xc)
	Class MaterialInterface*                           LightFunctionMaterial                              // 0x968(0x8)
	Class Material*                                    DefaultLightFunctionMaterial                       // 0x970(0x8)
};


// Size 0x320
class FFTWaterExtendedPlaneComponent: public BaseWaterComponent
{
public:
	Struct FFTWaterComponentParams                     WaterParams                                        // 0x5b8(0x310)
	Class Material*                                    Material                                           // 0x8c8(0x8)
};


// Size 0x20
class BillboardComponent: public PrimitiveComponent
{
public:
	Class Texture2D*                                   Sprite                                             // 0x5a8(0x8)
	bool                                               bIsScreenSizeScaled                                // 0x5b0(0x1)
	float                                              ScreenSize                                         // 0x5b4(0x4)
	float                                              U                                                  // 0x5b8(0x4)
	float                                              UL                                                 // 0x5bc(0x4)
	float                                              V                                                  // 0x5c0(0x4)
	float                                              VL                                                 // 0x5c4(0x4)
};


// Size 0x20
class BrushComponent: public PrimitiveComponent
{
public:
	Class Model*                                       Brush                                              // 0x5a8(0x8)
	Class BodySetup*                                   BrushBodySetup                                     // 0x5b0(0x8)
	Struct Vector                                      PrePivot                                           // 0x5b8(0xc)
};


// Size 0x20
class DrawFrustumComponent: public PrimitiveComponent
{
public:
	Struct Color                                       FrustumColor                                       // 0x5a8(0x4)
	float                                              FrustumAngle                                       // 0x5ac(0x4)
	float                                              FrustumAspectRatio                                 // 0x5b0(0x4)
	float                                              FrustumStartDist                                   // 0x5b4(0x4)
	float                                              FrustumEndDist                                     // 0x5b8(0x4)
	Class Texture*                                     Texture                                            // 0x5c0(0x8)
};


// Size 0x30
class LineBatchComponent: public PrimitiveComponent
{
public:
};


// Size 0x10
class MaterialBillboardComponent: public PrimitiveComponent
{
public:
	TArray<Struct CollisionChannelRedirects>           Elements                                           // 0x5a8(0x10)
};


// Size 0x120
class CollisionProfile: public DeveloperSettings
{
public:
	TArray<Struct GetBoundingBox>                      Profiles                                           // 0x38(0x10)
	TArray<Struct Profiles>                            DefaultChannelResponses                            // 0x48(0x10)
	TArray<Struct DefaultChannelResponses>             EditProfiles                                       // 0x58(0x10)
	TArray<Struct EditProfiles>                        ProfileRedirects                                   // 0x68(0x10)
	TArray<Struct ProfileRedirects>                    CollisionChannelRedirects                          // 0x78(0x10)
};


// Size 0x110
class StaticMesh: public Object
{
public:
	int                                                MinLOD                                             // 0x40(0x4)
	TArray<class Materials*>                           Materials                                          // 0x48(0x10)
	int                                                LightMapResolution                                 // 0x58(0x4)
	int                                                LightMapCoordinateIndex                            // 0x5c(0x4)
	Class BodySetup*                                   BodySetup                                          // 0x60(0x8)
	int                                                LODForCollision                                    // 0x68(0x4)
	bool                                               bUseMaximumStreamingTexelRatio                     // 0x6c(0x1)
	bool                                               bStripComplexCollisionForConsole                   // 0x6c(0x1)
	bool                                               bHasNavigationData                                 // 0x6c(0x1)
	float                                              StreamingDistanceMultiplier                        // 0x70(0x4)
	float                                              LpvBiasMultiplier                                  // 0x74(0x4)
	TArray<class Sockets*>                             Sockets                                            // 0xa8(0x10)
	Struct Vector                                      PositiveBoundsExtension                            // 0xd0(0xc)
	Struct Vector                                      NegativeBoundsExtension                            // 0xdc(0xc)
	Struct BoxSphereBounds                             ExtendedBounds                                     // 0xe8(0x1c)
	TArray<Str >                                       SourceMaterials                                    // 0x108(0x10)
	int                                                UVsForStreaming                                    // 0x118(0x4)
	int                                                ElementToIgnoreForTexFactor                        // 0x11c(0x4)
	TArray<class AssetUserData*>                       AssetUserData                                      // 0x120(0x10)
	Class NavCollision*                                NavCollision                                       // 0x130(0x8)
};


// Size 0x20
class MergedCollisionComponent: public PrimitiveComponent
{
public:
	TArray<Struct ApplyDamage>                         PerInstanceData                                    // 0x5a8(0x10)
};


// Size 0xc0
class DestructibleComponent: public SkinnedMeshComponent
{
public:
	bool                                               bFractureEffectOverride                            // 0x6e0(0x1)
	TArray<Struct bFractureEffectOverride>             FractureEffects                                    // 0x6e8(0x10)
	bool                                               bEnableHardSleeping                                // 0x6f8(0x1)
	float                                              LargeChunkThreshold                                // 0x6fc(0x4)
};


// Size 0xd0
class PoseableMeshComponent: public SkinnedMeshComponent
{
public:
};


// Size 0x10
class PoseableSkeletalMeshComponent: public SkeletalMeshComponent
{
public:
};


// Size 0xa0
class FlatWaterMeshComponent: public StaticMeshComponent
{
public:
	int                                                RandomDropRate                                     // 0x610(0x4)
	float                                              RandomDropSize                                     // 0x614(0x4)
	float                                              RandomDropHeight                                   // 0x618(0x4)
	float                                              RestorationScale                                   // 0x61c(0x4)
	float                                              ForceScale                                         // 0x620(0x4)
	float                                              DampHeight                                         // 0x624(0x4)
	float                                              NormalMapScale                                     // 0x628(0x4)
	int                                                TextureWidth                                       // 0x62c(0x4)
	int                                                TextureHeight                                      // 0x630(0x4)
	Class StaticMesh*                                  ClippingHull                                       // 0x638(0x8)
	float                                              MaxSimulationDistance                              // 0x640(0x4)
	float                                              InitialRandomHeight                                // 0x644(0x4)
	float                                              InitialRandomVelocity                              // 0x648(0x4)
	Class Texture*                                     Texture                                            // 0x650(0x8)
	Class Texture*                                     NormalTexture                                      // 0x658(0x8)
	Class TextureRenderTarget2D*                       WaterMaskTexture                                   // 0x660(0x8)
	TArray<class OriginalMaterials*>                   OriginalMaterials                                  // 0x680(0x10)
	TArray<Struct OriginalMaterials>                   TextureOverrides                                   // 0x690(0x10)
};


// Size 0x90
class InstancedCoverageMeshComponent: public StaticMeshComponent
{
public:
	int                                                InstanceCount                                      // 0x618(0x4)
	int                                                InstancingRandomSeed                               // 0x61c(0x4)
	float                                              InstancePositionExtrusion                          // 0x620(0x4)
	float                                              InstanceScale                                      // 0x624(0x4)
	float                                              InstanceScaleVariance                              // 0x628(0x4)
	Struct Rotator                                     InstanceRotation                                   // 0x62c(0xc)
	Struct Rotator                                     InstanceRotationVariance                           // 0x638(0xc)
	Struct Vector                                      InstanceAttractionDirection                        // 0x644(0xc)
	float                                              InstanceAttractionIntensity                        // 0x650(0x4)
	int                                                InstanceBaseMeshPlacementLOD                       // 0x654(0x4)
	TArray<Struct InstanceBaseMeshPlacementLOD>        LODs                                               // 0x658(0x10)
	float                                              CompleteCullingDistance                            // 0x668(0x4)
	bool                                               InstanceLODPreserveSilhouette                      // 0x66c(0x1)
	float                                              BackFaceCullingAngle                               // 0x670(0x4)
	float                                              ShadowBackFaceCullingAngle                         // 0x674(0x4)
	int                                                MaxPlacementAttempts                               // 0x678(0x4)
	bool                                               bEvenlySpaced                                      // 0x67c(0x1)
	bool                                               bVertexColourDensity                               // 0x67d(0x1)
	bool                                               bUpdatePlacement                                   // 0x67e(0x1)
	TArray<Float >                                     RandomNumbers                                      // 0x680(0x10)
	float                                              BaseMeshSurfaceArea                                // 0x690(0x4)
	Class StaticMesh*                                  CoveredMesh                                        // 0x698(0x8)
};


// Size 0x20
class MergedStaticMeshComponent: public StaticMeshComponent
{
public:
	bool                                               bDisplayMergedInEditor                             // 0x610(0x1)
	TArray<Float >                                     LODScreenSizes                                     // 0x618(0x10)
	int                                                LODForCollision                                    // 0x628(0x4)
	bool                                               bMergeVertexColours                                // 0x62c(0x1)
};


// Size 0x80
class MobileInstancedStaticMeshComponent: public StaticMeshComponent
{
public:
	int                                                MaxInstances                                       // 0x610(0x4)
	TArray<Struct MaxInstances>                        InstanceTransforms                                 // 0x620(0x10)
	TArray<Struct InstanceTransforms>                  InstanceMatrices                                   // 0x630(0x10)
	Struct BoxSphereBounds                             LocalBounds                                        // 0x640(0x1c)
	bool                                               bBoundsBuilt                                       // 0x65c(0x1)
	Class PhysicsSerializer*                           PhysicsSerializer                                  // 0x660(0x8)
};


// Size 0xa0
class SplineMeshComponent: public StaticMeshComponent
{
public:
	Struct SplineMeshParams                            SplineParams                                       // 0x618(0x58)
	Struct Vector                                      SplineUpDir                                        // 0x670(0xc)
	bool                                               bAllowSplineEditingPerInstance                     // 0x67c(0x1)
	bool                                               bSmoothInterpRollScale                             // 0x67c(0x1)
	byte                                               ForwardAxis                                        // 0x680(0x1)
	float                                              SplineBoundaryMin                                  // 0x684(0x4)
	float                                              SplineBoundaryMax                                  // 0x688(0x4)
	Class BodySetup*                                   BodySetup                                          // 0x690(0x8)
	Struct Guid                                        CachedMeshBodySetupGuid                            // 0x698(0x10)
	bool                                               bMeshDirty                                         // 0x6a8(0x1)
};


// Size 0x40
class ModelComponent: public PrimitiveComponent
{
public:
	Class BodySetup*                                   ModelBodySetup                                     // 0x5c0(0x8)
};


// Size 0x0
class NavLinkRenderingComponent: public PrimitiveComponent
{
public:
};


// Size 0x0
class NavMeshRenderingComponent: public PrimitiveComponent
{
public:
};


// Size 0x0
class NavTestRenderingComponent: public PrimitiveComponent
{
public:
};


// Size 0x10
class BoxComponent: public ShapeComponent
{
public:
	Struct Vector                                      BoxExtent                                          // 0x5c8(0xc)
};


// Size 0x0
class SphereComponent: public ShapeComponent
{
public:
	float                                              SphereRadius                                       // 0x5c8(0x4)
};


// Size 0x0
class DrawSphereComponent: public SphereComponent
{
public:
};


// Size 0x0
class EllipsoidComponent: public SphereComponent
{
public:
};


// Size 0x60
class TextRenderComponent: public PrimitiveComponent
{
public:
	Struct FText                                       Text                                               // 0x5a8(0x38)
	Class MaterialInterface*                           TextMaterial                                       // 0x5e0(0x8)
	Class Font*                                        Font                                               // 0x5e8(0x8)
	byte                                               HorizontalAlignment                                // 0x5f0(0x1)
	byte                                               VerticalAlignment                                  // 0x5f1(0x1)
	Struct Color                                       TextRenderColor                                    // 0x5f4(0x4)
	float                                              XScale                                             // 0x5f8(0x4)
	float                                              YScale                                             // 0x5fc(0x4)
	float                                              WorldSize                                          // 0x600(0x4)
	float                                              InvDefaultSize                                     // 0x604(0x4)
	float                                              HorizSpacingAdjust                                 // 0x608(0x4)
	bool                                               bAlwaysRenderAsText                                // 0x60c(0x1)
};


// Size 0x20
class VectorFieldComponent: public PrimitiveComponent
{
public:
	Class VectorField*                                 VectorField                                        // 0x5a8(0x8)
	float                                              Intensity                                          // 0x5b0(0x4)
	float                                              Tightness                                          // 0x5b4(0x4)
	bool                                               bPreviewVectorField                                // 0x5b8(0x1)
};


// Size 0x30
class RadialForceComponent: public SceneComponent
{
public:
	float                                              Radius                                             // 0x2d0(0x4)
	byte                                               Falloff                                            // 0x2d4(0x1)
	float                                              ImpulseStrength                                    // 0x2d8(0x4)
	bool                                               bImpulseVelChange                                  // 0x2dc(0x1)
	bool                                               bIgnoreOwningActor                                 // 0x2dc(0x1)
	float                                              ForceStrength                                      // 0x2e0(0x4)
	float                                              DestructibleDamage                                 // 0x2e4(0x4)
	TArray<Byte DestructibleDamage>                    ObjectTypesToAffect                                // 0x2e8(0x10)
};


// Size 0x90
class ReflectionCaptureComponent: public SceneComponent
{
public:
	bool                                               bLockSettings                                      // 0x2d0(0x1)
	float                                              Brightness                                         // 0x2d4(0x4)
	float                                              ShadowBrightness                                   // 0x2d8(0x4)
	float                                              LPVOcclusionBrightness                             // 0x2dc(0x4)
	Struct LinearColor                                 ReflectionTint                                     // 0x2e0(0x10)
	Struct Guid                                        StateId                                            // 0x2fc(0x10)
};


// Size 0x20
class BoxReflectionCaptureComponent: public ReflectionCaptureComponent
{
public:
	float                                              BoxTransitionDistance                              // 0x360(0x4)
	Class BoxComponent*                                PreviewInfluenceBox                                // 0x368(0x8)
	Class BoxComponent*                                PreviewCaptureBox                                  // 0x370(0x8)
};


// Size 0x20
class PlaneReflectionCaptureComponent: public ReflectionCaptureComponent
{
public:
	float                                              InfluenceRadiusScale                               // 0x360(0x4)
	Class DrawSphereComponent*                         PreviewInfluenceRadius                             // 0x368(0x8)
	Class BoxComponent*                                PreviewCaptureBox                                  // 0x370(0x8)
};


// Size 0x10
class SphereReflectionCaptureComponent: public ReflectionCaptureComponent
{
public:
	float                                              InfluenceRadius                                    // 0x360(0x4)
	float                                              CaptureDistanceScale                               // 0x364(0x4)
	Class DrawSphereComponent*                         PreviewInfluenceRadius                             // 0x368(0x8)
};


// Size 0x70
class SceneCaptureComponent: public SceneComponent
{
public:
	TArray<Weakclass AddOrUpdateBlendable>             HiddenComponents                                   // 0x2d0(0x10)
	bool                                               bCaptureEveryFrame                                 // 0x2e0(0x1)
	float                                              MaxViewDistanceOverride                            // 0x2e4(0x4)
	TArray<Struct MaxViewDistanceOverride>             ShowFlagSettings                                   // 0x2e8(0x10)
};


// Size 0x570
class SceneCaptureComponent2D: public SceneCaptureComponent
{
public:
	float                                              FOVAngle                                           // 0x338(0x4)
	Class TextureRenderTarget2D*                       TextureTarget                                      // 0x340(0x8)
	byte                                               CaptureSource                                      // 0x348(0x1)
	Struct PostProcessSettings                         PostProcessSettings                                // 0x350(0x540)
	float                                              PostProcessBlendWeight                             // 0x890(0x4)
	float                                              OrthoWidth                                         // 0x894(0x4)
	float                                              OrthoNearClipPlane                                 // 0x898(0x4)
	float                                              OrthoFarClipPlane                                  // 0x89c(0x4)
	byte                                               ProjectionMode                                     // 0x8a0(0x1)
	float                                              AspectRatio                                        // 0x8a4(0x4)
	bool                                               bConstrainAspectRatio                              // 0x8a8(0x1)
	int                                                LandscapeLODOverride                               // 0x8ac(0x4)
};


// Size 0x0
class SceneCaptureComponentCube: public SceneCaptureComponent
{
public:
	Class TextureRenderTargetCube*                     TextureTarget                                      // 0x338(0x8)
};


// Size 0x90
class SpringArmComponent: public SceneComponent
{
public:
	float                                              TargetArmLength                                    // 0x2d0(0x4)
	Struct Vector                                      SocketOffset                                       // 0x2d4(0xc)
	Struct Vector                                      TargetOffset                                       // 0x2e0(0xc)
	float                                              ProbeSize                                          // 0x2ec(0x4)
	byte                                               ProbeChannel                                       // 0x2f0(0x1)
	bool                                               bDoCollisionTest                                   // 0x2f4(0x1)
	bool                                               bUsePawnControlRotation                            // 0x2f4(0x1)
	bool                                               bInheritPitch                                      // 0x2f4(0x1)
	bool                                               bInheritYaw                                        // 0x2f4(0x1)
	bool                                               bInheritRoll                                       // 0x2f4(0x1)
	bool                                               bEnableCameraLag                                   // 0x2f4(0x1)
	bool                                               bEnableCameraRotationLag                           // 0x2f4(0x1)
	bool                                               bUseCameraLagSubstepping                           // 0x2f4(0x1)
	bool                                               bDrawDebugLagMarkers                               // 0x2f5(0x1)
	float                                              CameraLagSpeed                                     // 0x2f8(0x4)
	float                                              CameraRotationLagSpeed                             // 0x2fc(0x4)
	float                                              CameraLagMaxTimeStep                               // 0x300(0x4)
	float                                              CameraLagMaxDistance                               // 0x304(0x4)
};


// Size 0x30
class WaterEmissionVolumeComponent: public SceneComponent
{
public:
	float                                              Radius                                             // 0x2d0(0x4)
	float                                              GenerationDensity                                  // 0x2d4(0x4)
};


// Size 0x20
class WindDirectionalSourceComponent: public SceneComponent
{
public:
	float                                              Strength                                           // 0x2d0(0x4)
	float                                              Speed                                              // 0x2d4(0x4)
	float                                              MinGustAmount                                      // 0x2d8(0x4)
	float                                              MaxGustAmount                                      // 0x2dc(0x4)
};


// Size 0x98
class TimelineComponent: public ActorComponent
{
public:
	Struct Timeline                                    TheTimeline                                        // 0xc8(0x98)
};


// Size 0x0
class AggregatableInterface: public Interface
{
public:
};


// Size 0x10
class AnimComposite: public AnimCompositeBase
{
public:
	Struct AnimTrack                                   AnimationTrack                                     // 0x78(0x10)
};


// Size 0xe0
class AnimSequence: public AnimSequenceBase
{
public:
	int                                                NumFrames                                          // 0x78(0x4)
	TArray<Struct NumFrames>                           TrackToSkeletonMapTable                            // 0x80(0x10)
	TArray<Struct TrackToSkeletonMapTable>             TranslationData                                    // 0xa0(0x10)
	TArray<Struct TranslationData>                     RotationData                                       // 0xb0(0x10)
	TArray<Struct RotationData>                        ScaleData                                          // 0xc0(0x10)
	byte                                               TranslationCompressionFormat                       // 0xd0(0x1)
	byte                                               RotationCompressionFormat                          // 0xd1(0x1)
	byte                                               ScaleCompressionFormat                             // 0xd2(0x1)
	TArray<Int >                                       CompressedTrackOffsets                             // 0xd8(0x10)
	Struct CompressedOffsetData                        CompressedScaleOffsets                             // 0xe8(0x18)
	byte                                               KeyEncodingFormat                                  // 0x110(0x1)
	byte                                               AdditiveAnimType                                   // 0x130(0x1)
	byte                                               RefPoseType                                        // 0x131(0x1)
	Class AnimSequence*                                RefPoseSeq                                         // 0x138(0x8)
	int                                                RefFrameIndex                                      // 0x140(0x4)
	int                                                EncodingPkgVersion                                 // 0x144(0x4)
	struct FName                                       RetargetSource                                     // 0x148(0x8)
	bool                                               bEnableRootMotion                                  // 0x150(0x1)
	byte                                               RootMotionRootLock                                 // 0x151(0x1)
	bool                                               bRootMotionSettingsCopiedFromMontage               // 0x152(0x1)
};


// Size 0xb8
class BlendSpaceBase: public AnimationAsset
{
public:
	Struct BlendParameter                              BlendParameters                                    // 0x50(0x20)
	Struct InterpolationParameter                      InterpolationParam                                 // 0xb0(0x8)
	float                                              TargetWeightInterpolationSpeedPerSec               // 0xc8(0x4)
	byte                                               NotifyTriggerMode                                  // 0xcc(0x1)
	bool                                               bRotationBlendInMeshSpace                          // 0xcd(0x1)
	int                                                NumOfDimension                                     // 0xd0(0x4)
	float                                              AnimLength                                         // 0xd4(0x4)
	TArray<Struct AnimLength>                          PerBoneBlend                                       // 0xd8(0x10)
	TArray<Struct PerBoneBlend>                        SampleData                                         // 0xe8(0x10)
	TArray<Struct SampleData>                          GridSamples                                        // 0xf8(0x10)
};


// Size 0x8
class BlendSpace: public BlendSpaceBase
{
public:
	byte                                               AxisToScaleAnimation                               // 0x108(0x1)
};


// Size 0x0
class AimOffsetBlendSpace: public BlendSpace
{
public:
};


// Size 0x8
class BlendSpace1D: public BlendSpaceBase
{
public:
	bool                                               bScaleAnimation                                    // 0x108(0x1)
};


// Size 0x0
class AimOffsetBlendSpace1D: public BlendSpace1D
{
public:
};


// Size 0x18
class AnimCompress: public Object
{
public:
	Struct FString                                     Description                                        // 0x28(0x10)
	bool                                               bNeedsSkeleton                                     // 0x38(0x1)
	byte                                               TranslationCompressionFormat                       // 0x3c(0x1)
	byte                                               RotationCompressionFormat                          // 0x3d(0x1)
	byte                                               ScaleCompressionFormat                             // 0x3e(0x1)
};


// Size 0x8
class AnimCompress_Automatic: public AnimCompress
{
public:
	float                                              MaxEndEffectorError                                // 0x40(0x4)
	bool                                               bTryFixedBitwiseCompression                        // 0x44(0x1)
	bool                                               bTryPerTrackBitwiseCompression                     // 0x44(0x1)
	bool                                               bTryLinearKeyRemovalCompression                    // 0x44(0x1)
	bool                                               bTryIntervalKeyRemoval                             // 0x44(0x1)
	bool                                               bRunCurrentDefaultCompressor                       // 0x44(0x1)
	bool                                               bAutoReplaceIfExistingErrorTooGreat                // 0x44(0x1)
	bool                                               bRaiseMaxErrorToExisting                           // 0x44(0x1)
};


// Size 0x0
class AnimCompress_BitwiseCompressOnly: public AnimCompress
{
public:
};


// Size 0x0
class AnimCompress_LeastDestructive: public AnimCompress
{
public:
};


// Size 0x8
class AnimCompress_RemoveEverySecondKey: public AnimCompress
{
public:
	int                                                MinKeys                                            // 0x40(0x4)
	bool                                               bStartAtSecondKey                                  // 0x44(0x1)
};


// Size 0x20
class AnimCompress_RemoveLinearKeys: public AnimCompress
{
public:
	float                                              MaxPosDiff                                         // 0x40(0x4)
	float                                              MaxAngleDiff                                       // 0x44(0x4)
	float                                              MaxScaleDiff                                       // 0x48(0x4)
	float                                              MaxEffectorDiff                                    // 0x4c(0x4)
	float                                              MinEffectorDiff                                    // 0x50(0x4)
	float                                              EffectorDiffSocket                                 // 0x54(0x4)
	float                                              ParentKeyScale                                     // 0x58(0x4)
	bool                                               bRetarget                                          // 0x5c(0x1)
	bool                                               bActuallyFilterLinearKeys                          // 0x5c(0x1)
};


// Size 0x80
class AnimCompress_PerTrackCompression: public AnimCompress_RemoveLinearKeys
{
public:
	float                                              MaxZeroingThreshold                                // 0x60(0x4)
	float                                              MaxPosDiffBitwise                                  // 0x64(0x4)
	float                                              MaxAngleDiffBitwise                                // 0x68(0x4)
	float                                              MaxScaleDiffBitwise                                // 0x6c(0x4)
	TArray<Byte MaxScaleDiffBitwise>                   AllowedRotationFormats                             // 0x70(0x10)
	TArray<Byte AllowedRotationFormats>                AllowedTranslationFormats                          // 0x80(0x10)
	TArray<Byte AllowedTranslationFormats>             AllowedScaleFormats                                // 0x90(0x10)
	bool                                               bResampleAnimation                                 // 0xa0(0x1)
	float                                              ResampledFramerate                                 // 0xa4(0x4)
	int                                                MinKeysForResampling                               // 0xa8(0x4)
	bool                                               bUseAdaptiveError                                  // 0xac(0x1)
	bool                                               bUseOverrideForEndEffectors                        // 0xac(0x1)
	int                                                TrackHeightBias                                    // 0xb0(0x4)
	float                                              ParentingDivisor                                   // 0xb4(0x4)
	float                                              ParentingDivisorExponent                           // 0xb8(0x4)
	bool                                               bUseAdaptiveError2                                 // 0xbc(0x1)
	float                                              RotationErrorSourceRatio                           // 0xc0(0x4)
	float                                              TranslationErrorSourceRatio                        // 0xc4(0x4)
	float                                              ScaleErrorSourceRatio                              // 0xc8(0x4)
	float                                              MaxErrorPerTrackRatio                              // 0xcc(0x4)
	float                                              PerturbationProbeSize                              // 0xd0(0x4)
};


// Size 0x10
class AnimCompress_RemoveTrivialKeys: public AnimCompress
{
public:
	float                                              MaxPosDiff                                         // 0x40(0x4)
	float                                              MaxAngleDiff                                       // 0x44(0x4)
	float                                              MaxScaleDiff                                       // 0x48(0x4)
};


// Size 0xe0
class AnimSingleNodeInstance: public AnimInstance
{
public:
	Class AnimationAsset*                              CurrentAsset                                       // 0x440(0x8)
	Class VertexAnimation*                             CurrentVertexAnim                                  // 0x448(0x8)
	Struct Vector                                      BlendSpaceInput                                    // 0x450(0xc)
	TArray<Struct BlendSpaceInput>                     BlendSampleData                                    // 0x460(0x10)
	Struct BlendFilter                                 BlendFilter                                        // 0x470(0x90)
	float                                              CurrentTime                                        // 0x500(0x4)
	float                                              PlayRate                                           // 0x504(0x4)
	bool                                               bLooping                                           // 0x518(0x1)
	bool                                               bPlaying                                           // 0x518(0x1)
	bool                                               bReverse                                           // 0x518(0x1)
};


// Size 0x0
class AnimMetaData: public Object
{
public:
};


// Size 0x0
class AnimNotify_ResetDynamics: public AnimNotify
{
public:
};


// Size 0x0
class AnimNotifyCondition: public Object
{
public:
};


// Size 0x28
class AnimNotifyState_Trail: public AnimNotifyState
{
public:
	Class ParticleSystem*                              PSTemplate                                         // 0x28(0x8)
	struct FName                                       FirstSocketName                                    // 0x30(0x8)
	struct FName                                       SecondSocketName                                   // 0x38(0x8)
	byte                                               WidthScaleMode                                     // 0x40(0x1)
	struct FName                                       WidthScaleCurve                                    // 0x44(0x8)
};


// Size 0xc8
class AnimSet: public Object
{
public:
	bool                                               bAnimRotationOnly                                  // 0x28(0x1)
	TArray<Struct FName>                               TrackBoneNames                                     // 0x30(0x10)
	TArray<Struct TrackBoneNames>                      LinkupCache                                        // 0x40(0x10)
	TArray<Byte LinkupCache>                           BoneUseAnimTranslation                             // 0x50(0x10)
	TArray<Byte BoneUseAnimTranslation>                ForceUseMeshTranslation                            // 0x60(0x10)
	TArray<Struct FName>                               UseTranslationBoneNames                            // 0x70(0x10)
	TArray<Struct FName>                               ForceMeshTranslationBoneNames                      // 0x80(0x10)
	struct FName                                       PreviewSkelMeshName                                // 0x90(0x8)
	struct FName                                       BestRatioSkelMeshName                              // 0x98(0x8)
};


// Size 0x0
class AssetImportData: public Object
{
public:
};


// Size 0x0
class AssetUserData: public Object
{
public:
};


// Size 0x2e0
class AutomationTestSettings: public Object
{
public:
	Struct FilePath                                    AutomationTestmap                                  // 0x28(0x10)
	TArray<Struct AutomationTestmap>                   EditorPerformanceTestMaps                          // 0x38(0x10)
	Struct BuildPromotionTestSettings                  BuildPromotionTest                                 // 0x48(0x210)
	Struct MaterialEditorPromotionSettings             MaterialEditorPromotionTest                        // 0x258(0x30)
	Struct ParticleEditorPromotionSettings             ParticleEditorPromotionTest                        // 0x288(0x10)
	TArray<Str >                                       EngineTestModules                                  // 0x298(0x10)
	TArray<Str >                                       EditorTestModules                                  // 0x2a8(0x10)
	TArray<Str >                                       TestLevelFolders                                   // 0x2b8(0x10)
	TArray<Struct TestLevelFolders>                    TestAssetsToOpen                                   // 0x2c8(0x10)
	TArray<Struct TestAssetsToOpen>                    ExternalTools                                      // 0x2d8(0x10)
	TArray<Struct ExternalTools>                       ImportExportTestDefinitions                        // 0x2e8(0x10)
	TArray<Struct ImportExportTestDefinitions>         LaunchOnSettings                                   // 0x2f8(0x10)
};


// Size 0x30
class AutomationTestUserSettings: public Object
{
public:
	bool                                               FilterTests                                        // 0x28(0x1)
	TArray<Str >                                       IncludedTestsPrefix                                // 0x30(0x10)
	TArray<Str >                                       ExcludedTestsPrefix                                // 0x40(0x10)
	bool                                               IncludeEpicTests                                   // 0x50(0x1)
};


// Size 0xa0
class AvoidanceManager: public Object
{
public:
	float                                              DefaultTimeToLive                                  // 0x30(0x4)
	float                                              LockTimeAfterAvoid                                 // 0x34(0x4)
	float                                              LockTimeAfterClean                                 // 0x38(0x4)
	float                                              DeltaTimeToPredict                                 // 0x3c(0x4)
	float                                              ArtificialRadiusExpansion                          // 0x40(0x4)
	float                                              TestHeightDifference                               // 0x44(0x4)
};


// Size 0x28
class AnimBlueprint: public Blueprint
{
public:
	Class Skeleton*                                    TargetSkeleton                                     // 0xd8(0x8)
	TArray<Struct TargetSkeleton>                      Groups                                             // 0xe0(0x10)
	TArray<Struct FName>                               SkeletonSlotNames                                  // 0xf0(0x10)
};


// Size 0x0
class LevelScriptBlueprint: public Blueprint
{
public:
};


// Size 0x58
class DataTable: public Object
{
public:
	Class ScriptStruct*                                RowStruct                                          // 0x28(0x8)
};


// Size 0x0
class DataTableFunctionLibrary: public BlueprintFunctionLibrary
{
public:
};


// Size 0x0
class DebugDrawService: public BlueprintFunctionLibrary
{
public:
};


// Size 0x0
class DeformablesBlueprintFunctionLibrary: public BlueprintFunctionLibrary
{
public:
};


// Size 0x0
class FeatureConfigBlueprintFunctionLibrary: public BlueprintFunctionLibrary
{
public:
};


// Size 0x0
class DialogueTypes: public Object
{
public:
};


// Size 0x0
class GameplayStatics: public BlueprintFunctionLibrary
{
public:
};


// Size 0x8
class GPUSortDestData: public Object
{
public:
};


// Size 0x0
class GPUSortTestLibrary: public BlueprintFunctionLibrary
{
public:
};


// Size 0x0
class KismetArrayLibrary: public BlueprintFunctionLibrary
{
public:
};


// Size 0x0
class KismetGuidLibrary: public BlueprintFunctionLibrary
{
public:
};


// Size 0x0
class KismetInputLibrary: public BlueprintFunctionLibrary
{
public:
};


// Size 0x0
class KismetMaterialLibrary: public BlueprintFunctionLibrary
{
public:
};


// Size 0x0
class KismetMathLibrary: public BlueprintFunctionLibrary
{
public:
};


// Size 0x0
class KismetNodeHelperLibrary: public BlueprintFunctionLibrary
{
public:
};


// Size 0x0
class KismetStringLibrary: public BlueprintFunctionLibrary
{
public:
};


// Size 0x0
class KismetSystemLibrary: public BlueprintFunctionLibrary
{
public:
};


// Size 0x0
class KismetTextLibrary: public BlueprintFunctionLibrary
{
public:
};


// Size 0x0
class LoadingPerfBPFuncLib: public BlueprintFunctionLibrary
{
public:
};


// Size 0x90
class WorldComposition: public Object
{
public:
	TArray<class TilesStreaming*>                      TilesStreaming                                     // 0x98(0x10)
	double                                             TilesStreamingTimeThreshold                        // 0xa8(0x8)
	bool                                               bLoadAllTilesDuringCinematic                       // 0xb0(0x1)
	bool                                               bRebaseOriginIn3DSpace                             // 0xb1(0x1)
	float                                              RebaseOriginDistance                               // 0xb4(0x4)
};


// Size 0x20
class NestedWorldComposition: public WorldComposition
{
public:
};


// Size 0x0
class NestedWorldCompositionFunctionLib: public BlueprintFunctionLibrary
{
public:
};


// Size 0x0
class NetPushModelHelpers: public BlueprintFunctionLibrary
{
public:
};


// Size 0x0
class ParticleWarningFunctions: public BlueprintFunctionLibrary
{
public:
};


// Size 0x0
class SkeletalMeshMergeBlueprintFunctionLibrary: public BlueprintFunctionLibrary
{
public:
};


// Size 0x0
class VisualLoggerKismetLibrary: public BlueprintFunctionLibrary
{
public:
};


// Size 0x68
class AnimBlueprintGeneratedClass: public BlueprintGeneratedClass
{
public:
	TArray<Struct BuildScale3D>                        BakedStateMachines                                 // 0x228(0x10)
	Class Skeleton*                                    TargetSkeleton                                     // 0x238(0x8)
	TArray<Struct TargetSkeleton>                      AnimNotifies                                       // 0x240(0x10)
	int                                                RootAnimNodeIndex                                  // 0x250(0x4)
	TArray<Struct RootAnimNodeIndex>                   Groups                                             // 0x270(0x10)
	TArray<Struct FName>                               SkeletonSlotNames                                  // 0x280(0x10)
};


// Size 0x2a0
class BodySetup: public Object
{
public:
	Struct KAggregateGeom                              AggGeom                                            // 0x28(0x48)
	struct FName                                       BoneName                                           // 0x70(0x8)
	byte                                               PhysicsType                                        // 0x78(0x1)
	bool                                               bCookComplexGeometryOnServer                       // 0x7c(0x1)
	bool                                               bConsiderForBounds                                 // 0x7c(0x1)
	bool                                               bMeshCollideAll                                    // 0x7c(0x1)
	bool                                               bDoubleSidedGeometry                               // 0x7c(0x1)
	bool                                               bGenerateNonMirroredCollision                      // 0x7c(0x1)
	bool                                               bSharedCookedData                                  // 0x7c(0x1)
	bool                                               bGenerateMirroredCollision                         // 0x7c(0x1)
	Class PhysicalMaterial*                            PhysMaterial                                       // 0x80(0x8)
	byte                                               CollisionReponse                                   // 0x88(0x1)
	byte                                               CollisionTraceFlag                                 // 0x89(0x1)
	Struct BodyInstance                                DefaultInstance                                    // 0x90(0x180)
	Struct WalkableSlopeOverride                       WalkableSlopeOverride                              // 0x210(0x8)
	Struct Vector                                      BuildScale3D                                       // 0x218(0xc)
};


// Size 0x30
class BodySetup2D: public BodySetup
{
public:
	Struct AggregateGeometry2D                         AggGeom2D                                          // 0x2c8(0x30)
};


// Size 0x10
class BoneMaskFilter: public Object
{
public:
	TArray<Struct HiddenLevels>                        BlendPoses                                         // 0x28(0x10)
};


// Size 0x28
class BookMark: public Object
{
public:
	Struct Vector                                      Location                                           // 0x28(0xc)
	Struct Rotator                                     Rotation                                           // 0x34(0xc)
	TArray<Str >                                       HiddenLevels                                       // 0x40(0x10)
};


// Size 0x10
class BookMark2D: public Object
{
public:
	float                                              Zoom2D                                             // 0x28(0x4)
	Struct IntPoint                                    Location                                           // 0x2c(0x8)
};


// Size 0x18
class Breakpoint: public Object
{
public:
	bool                                               bEnabled                                           // 0x28(0x1)
	Class EdGraphNode*                                 Node                                               // 0x30(0x8)
	bool                                               bStepOnce                                          // 0x38(0x1)
	bool                                               bStepOnce_WasPreviouslyDisabled                    // 0x38(0x1)
	bool                                               bStepOnce_RemoveAfterHit                           // 0x38(0x1)
};


// Size 0x58
class BrushBuilder: public Object
{
public:
	Struct FString                                     BitmapFilename                                     // 0x28(0x10)
	Struct FString                                     ToolTip                                            // 0x38(0x10)
	bool                                               NotifyBadParams                                    // 0x48(0x1)
	TArray<Struct NotifyBadParams>                     Vertices                                           // 0x50(0x10)
	TArray<Struct Vertices>                            Polys                                              // 0x60(0x10)
	struct FName                                       Layer                                              // 0x70(0x8)
	bool                                               MergeCoplanars                                     // 0x78(0x1)
};


// Size 0x2a8
class ButtonStyleAsset: public Object
{
public:
	Struct ButtonStyle                                 ButtonStyle                                        // 0x28(0x2a8)
};


// Size 0x588
class CameraAnim: public Object
{
public:
	Class InterpGroup*                                 CameraInterpGroup                                  // 0x28(0x8)
	float                                              AnimLength                                         // 0x30(0x4)
	Struct Box                                         BoundingBox                                        // 0x34(0x1c)
	bool                                               bRelativeToInitialTransform                        // 0x50(0x1)
	float                                              BaseFOV                                            // 0x54(0x4)
	Struct PostProcessSettings                         BasePostProcessSettings                            // 0x60(0x540)
	float                                              BasePostProcessBlendWeight                         // 0x5a0(0x4)
};


// Size 0xf8
class CameraAnimInst: public Object
{
public:
	Class CameraAnim*                                  CamAnim                                            // 0x28(0x8)
	Class InterpGroupInst*                             InterpGroupInst                                    // 0x30(0x8)
	float                                              PlayRate                                           // 0x54(0x4)
	Class InterpTrackMove*                             MoveTrack                                          // 0x68(0x8)
	Class InterpTrackInstMove*                         MoveInst                                           // 0x70(0x8)
	Class CurveFloat*                                  BlendInCurve                                       // 0x78(0x8)
	byte                                               PlaySpace                                          // 0x80(0x1)
};


// Size 0x18
class CameraModifier_CameraShake: public CameraModifier
{
public:
	TArray<class ActiveShakes*>                        ActiveShakes                                       // 0x48(0x10)
	float                                              SplitScreenShakeScale                              // 0x58(0x4)
};


// Size 0xc8
class Canvas: public Object
{
public:
	float                                              OrgX                                               // 0x28(0x4)
	float                                              OrgY                                               // 0x2c(0x4)
	float                                              ClipX                                              // 0x30(0x4)
	float                                              ClipY                                              // 0x34(0x4)
	Struct Color                                       DrawColor                                          // 0x38(0x4)
	bool                                               bCenterX                                           // 0x3c(0x1)
	bool                                               bCenterY                                           // 0x3c(0x1)
	bool                                               bNoSmooth                                          // 0x3c(0x1)
	int                                                SizeX                                              // 0x40(0x4)
	int                                                SizeY                                              // 0x44(0x4)
	Struct Plane                                       ColorModulate                                      // 0x50(0x10)
	Class Texture2D*                                   DefaultTexture                                     // 0x60(0x8)
	Class Texture2D*                                   GradientTexture0                                   // 0x68(0x8)
	Class ReporterGraph*                               ReporterGraph                                      // 0x70(0x8)
};


// Size 0x40
class Channel: public Object
{
public:
	Class NetConnection*                               Connection                                         // 0x28(0x8)
};


// Size 0x1f8
class ActorChannel: public Channel
{
public:
	Class Actor*                                       Actor                                              // 0x68(0x8)
	TArray<class ObjectsRequiredForQueuedBunches*>     ObjectsRequiredForQueuedBunches                    // 0x158(0x10)
};


// Size 0x18
class ControlChannel: public Channel
{
public:
};


// Size 0x28
class VoiceChannel: public Channel
{
public:
	int                                                BandwidthPerSecondReservationInBytes               // 0x80(0x4)
	float                                              SaturationCooloffPeriodInSeconds                   // 0x88(0x4)
};


// Size 0x50
class CheatManager: public Object
{
public:
	Class DebugCameraController*                       DebugCameraControllerRef                           // 0x28(0x8)
	class                                              DebugCameraControllerClass                         // 0x30(0x8)
};


// Size 0x5f0
class CheckBoxStyleAsset: public Object
{
public:
	Struct CheckBoxStyle                               CheckBoxStyle                                      // 0x28(0x5f0)
};


// Size 0x20
class PluginCommandlet: public Commandlet
{
public:
};


// Size 0x0
class SmokeTestCommandlet: public Commandlet
{
public:
};


// Size 0xc8
class Console: public Object
{
public:
	Class LocalPlayer*                                 ConsoleTargetPlayer                                // 0x38(0x8)
	Class Texture2D*                                   DefaultTexture_Black                               // 0x40(0x8)
	Class Texture2D*                                   DefaultTexture_White                               // 0x48(0x8)
	TArray<Str >                                       HistoryBuffer                                      // 0x68(0x10)
};


// Size 0x1e0
class CurveLinearColor: public CurveBase
{
public:
	Struct RichCurve                                   FloatCurves                                        // 0x30(0x78)
};


// Size 0x168
class CurveVector: public CurveBase
{
public:
	Struct RichCurve                                   FloatCurves                                        // 0x30(0x78)
};


// Size 0x0
class CurveEdPresetCurve: public Object
{
public:
};


// Size 0x50
class CurveTable: public Object
{
public:
};


// Size 0x0
class CustomWidgetDrawerInterface: public Interface
{
public:
};


// Size 0x10
class InstancedNavMeshesDataAsset: public DataAsset
{
public:
	TArray<Struct Array>                               InstancedNavMeshes                                 // 0x28(0x10)
};


// Size 0x20
class ParticleComputeShaderData: public DataAsset
{
public:
};


// Size 0x10
class StringArrayDataAsset: public DataAsset
{
public:
	TArray<Str None>                                   Array                                              // 0x28(0x10)
};


// Size 0x78
class DestructibleFractureSettings: public Object
{
public:
	int                                                CellSiteCount                                      // 0x28(0x4)
	Struct FractureMaterial                            FractureMaterialDesc                               // 0x2c(0x24)
	int                                                RandomSeed                                         // 0x50(0x4)
	TArray<Struct RandomSeed>                          VoronoiSites                                       // 0x58(0x10)
	int                                                OriginalSubmeshCount                               // 0x68(0x4)
	TArray<class Materials*>                           Materials                                          // 0x70(0x10)
	TArray<Struct Materials>                           ChunkParameters                                    // 0x80(0x10)
	TArray<Str >                                       MaterialNames                                      // 0x90(0x10)
};


// Size 0x48
class AnimationSettings: public DeveloperSettings
{
public:
	TArray<Float None>                                 DefaultVisibleDistanceFactorThresholds             // 0x38(0x10)
	int                                                CompressCommandletVersion                          // 0x48(0x4)
	TArray<Str >                                       KeyEndEffectorsMatchNameArray                      // 0x50(0x10)
	class                                              DefaultCompressionAlgorithm                        // 0x60(0x8)
	byte                                               RotationCompressionFormat                          // 0x68(0x1)
	byte                                               TranslationCompressionFormat                       // 0x69(0x1)
	float                                              AlternativeCompressionThreshold                    // 0x6c(0x4)
	bool                                               ForceRecompression                                 // 0x70(0x1)
	bool                                               bOnlyCheckForMissingSkeletalMeshes                 // 0x71(0x1)
	bool                                               bForceBelowThreshold                               // 0x72(0x1)
	bool                                               bFirstRecompressUsingCurrentOrDefault              // 0x73(0x1)
	bool                                               bRaiseMaxErrorToExisting                           // 0x74(0x1)
	bool                                               bTryFixedBitwiseCompression                        // 0x75(0x1)
	bool                                               bTryPerTrackBitwiseCompression                     // 0x76(0x1)
	bool                                               bTryLinearKeyRemovalCompression                    // 0x77(0x1)
	bool                                               bTryIntervalKeyRemoval                             // 0x78(0x1)
	bool                                               bStripAnimationDataOnDedicatedServer               // 0x79(0x1)
};


// Size 0x48
class AudioSettings: public DeveloperSettings
{
public:
	Struct StringAssetReference                        DefaultSoundClassName                              // 0x38(0x10)
	Struct StringAssetReference                        DefaultBaseSoundMix                                // 0x48(0x10)
	Struct StringAssetReference                        VoiPSoundClass                                     // 0x58(0x10)
	float                                              LowPassFilterResonance                             // 0x68(0x4)
	int                                                MaximumConcurrentStreams                           // 0x6c(0x4)
	TArray<Struct MaximumConcurrentStreams>            QualityLevels                                      // 0x70(0x10)
};


// Size 0x8
class AutomaticInstancingSettings: public DeveloperSettings
{
public:
	bool                                               IsEnabled                                          // 0x38(0x1)
};


// Size 0x120
class UserInterfaceSettings: public DeveloperSettings
{
public:
	byte                                               RenderFocusRule                                    // 0x38(0x1)
	Struct StringClassReference                        DefaultCursor                                      // 0x40(0x10)
	Struct StringClassReference                        TextEditBeamCursor                                 // 0x50(0x10)
	Struct StringClassReference                        CrosshairsCursor                                   // 0x60(0x10)
	Struct StringClassReference                        GrabHandCursor                                     // 0x70(0x10)
	Struct StringClassReference                        GrabHandClosedCursor                               // 0x80(0x10)
	Struct StringClassReference                        SlashedCircleCursor                                // 0x90(0x10)
	float                                              ApplicationScale                                   // 0xa0(0x4)
	byte                                               UIScaleRule                                        // 0xa4(0x1)
	Struct StringClassReference                        CustomScalingRuleClass                             // 0xa8(0x10)
	Struct RuntimeFloatCurve                           UIScaleCurve                                       // 0xb8(0x80)
	TArray<class CursorClasses*>                       CursorClasses                                      // 0x138(0x10)
	class                                              CustomScalingRuleClassInstance                     // 0x148(0x8)
	Class DPICustomScalingRule*                        CustomScalingRule                                  // 0x150(0x8)
};


// Size 0x28
class StreamingSettings: public DeveloperSettings
{
public:
	bool                                               AsyncLoadingThreadEnabled                          // 0x38(0x1)
	bool                                               WarnIfTimeLimitExceeded                            // 0x38(0x1)
	float                                              TimeLimitExceededMultiplier                        // 0x3c(0x4)
	float                                              TimeLimitExceededMinTime                           // 0x40(0x4)
	int                                                MinBulkDataSizeForAsyncLoading                     // 0x44(0x4)
	float                                              AsyncIOBandwidthLimit                              // 0x48(0x4)
	bool                                               UseBackgroundLevelStreaming                        // 0x4c(0x1)
	bool                                               AsyncLoadingUseFullTimeLimit                       // 0x4c(0x1)
	float                                              AsyncLoadingTimeLimit                              // 0x50(0x4)
	float                                              PriorityAsyncLoadingExtraTime                      // 0x54(0x4)
	float                                              LevelStreamingActorsUpdateTimeLimit                // 0x58(0x4)
	int                                                LevelStreamingComponentsRegistrationGranularity    // 0x5c(0x4)
};


// Size 0x20
class GarbageCollectionSettings: public DeveloperSettings
{
public:
	float                                              TimeBetweenPurgingPendingKillObjects               // 0x38(0x4)
	bool                                               FlushStreamingOnGC                                 // 0x3c(0x1)
	bool                                               AllowParallelGC                                    // 0x3c(0x1)
	bool                                               CreateGCClusters                                   // 0x3c(0x1)
	bool                                               MergeGCClusters                                    // 0x3c(0x1)
	int                                                NumRetriesBeforeForcingGC                          // 0x40(0x4)
	int                                                MaxObjectsNotConsideredByGC                        // 0x44(0x4)
	int                                                SizeOfPermanentObjectPool                          // 0x48(0x4)
	int                                                MaxObjectsInGame                                   // 0x4c(0x4)
	int                                                MaxObjectsInEditor                                 // 0x50(0x4)
};


// Size 0x8
class NetworkClusteringSettings: public DeveloperSettings
{
public:
	float                                              DynamicActorGridHalfSizeKm                         // 0x38(0x4)
	float                                              DynamicActorGridCellSizeKm                         // 0x3c(0x4)
};


// Size 0x8
class NetworkSettings: public DeveloperSettings
{
public:
	bool                                               bVerifyPeer                                        // 0x38(0x1)
};


// Size 0x90
class PhysicsSettings: public DeveloperSettings
{
public:
	float                                              DefaultGravityZ                                    // 0x38(0x4)
	float                                              DefaultTerminalVelocity                            // 0x3c(0x4)
	float                                              DefaultFluidFriction                               // 0x40(0x4)
	int                                                SimulateScratchMemorySize                          // 0x44(0x4)
	int                                                RagdollAggregateThreshold                          // 0x48(0x4)
	float                                              TriangleMeshTriangleMinAreaThreshold               // 0x4c(0x4)
	bool                                               bEnableAsyncScene                                  // 0x50(0x1)
	bool                                               bEnableShapeSharing                                // 0x51(0x1)
	bool                                               bEnablePCM                                         // 0x52(0x1)
	bool                                               bWarnMissingLocks                                  // 0x53(0x1)
	bool                                               bEnable2DPhysics                                   // 0x54(0x1)
	byte                                               LockedAxis                                         // 0x55(0x1)
	byte                                               DefaultDegreesOfFreedom                            // 0x56(0x1)
	float                                              BounceThresholdVelocity                            // 0x58(0x4)
	byte                                               FrictionCombineMode                                // 0x5c(0x1)
	byte                                               RestitutionCombineMode                             // 0x5d(0x1)
	float                                              MaxAngularVelocity                                 // 0x60(0x4)
	float                                              MaxDepenetrationVelocity                           // 0x64(0x4)
	bool                                               bSimulateSkeletalMeshOnDedicatedServer             // 0x68(0x1)
	bool                                               bDefaultHasComplexCollision                        // 0x69(0x1)
	float                                              MaxPhysicsDeltaTime                                // 0x6c(0x4)
	bool                                               bSubstepping                                       // 0x70(0x1)
	bool                                               bSubsteppingAsync                                  // 0x71(0x1)
	float                                              MaxSubstepDeltaTime                                // 0x74(0x4)
	int                                                MaxSubsteps                                        // 0x78(0x4)
	float                                              SyncSceneSmoothingFactor                           // 0x7c(0x4)
	float                                              AsyncSceneSmoothingFactor                          // 0x80(0x4)
	float                                              InitialAverageFrameRate                            // 0x84(0x4)
	TArray<Struct InitialAverageFrameRate>             PhysicalSurfaces                                   // 0x88(0x10)
	TArray<Struct PhysicalSurfaces>                    DominanceGroups                                    // 0x98(0x10)
	TArray<Struct DominanceGroups>                     DominanceGroupNames                                // 0xa8(0x10)
	byte                                               DefaultStaticDominanceGroup                        // 0xb8(0x1)
	byte                                               DefaultMovableDominanceGroup                       // 0xb9(0x1)
	bool                                               bEnableMBP                                         // 0xba(0x1)
	int                                                MBPSubdivisions                                    // 0xbc(0x4)
	float                                              MBPWorldHalfExtentInCM                             // 0xc0(0x4)
};


// Size 0xd8
class RendererSettings: public DeveloperSettings
{
public:
	bool                                               bMobileHDR                                         // 0x38(0x1)
	bool                                               bMobileDynamicPointLightsUseStaticBranch           // 0x40(0x1)
	bool                                               bOcclusionCulling                                  // 0x40(0x1)
	float                                              MinScreenRadiusForLights                           // 0x44(0x4)
	float                                              MinScreenRadiusForEarlyZPass                       // 0x48(0x4)
	float                                              MinScreenRadiusForCSMdepth                         // 0x4c(0x4)
	bool                                               bPrecomputedVisibilityWarning                      // 0x50(0x1)
	bool                                               bTextureStreaming                                  // 0x50(0x1)
	bool                                               bUseDXT5NormalMaps                                 // 0x50(0x1)
	bool                                               bAllowStaticLighting                               // 0x50(0x1)
	bool                                               bUseNormalMapsForStaticLighting                    // 0x50(0x1)
	bool                                               bGenerateMeshDistanceFields                        // 0x50(0x1)
	bool                                               bGenerateLandscapeGIData                           // 0x50(0x1)
	float                                              TessellationAdaptivePixelsPerTriangle              // 0x54(0x4)
	bool                                               bSeparateTranslucency                              // 0x58(0x1)
	byte                                               TranslucentSortPolicy                              // 0x5c(0x1)
	Struct Vector                                      TranslucentSortAxis                                // 0x60(0xc)
	byte                                               CustomDepthStencil                                 // 0x6c(0x1)
	bool                                               bDefaultFeatureBloom                               // 0x70(0x1)
	bool                                               bDefaultFeatureAmbientOcclusion                    // 0x70(0x1)
	bool                                               bDefaultFeatureAmbientOcclusionStaticFraction      // 0x70(0x1)
	bool                                               bDefaultFeatureAutoExposure                        // 0x70(0x1)
	bool                                               bDefaultFeatureMotionBlur                          // 0x70(0x1)
	bool                                               bDefaultFeatureLensFlare                           // 0x70(0x1)
	byte                                               DefaultFeatureAntiAliasing                         // 0x74(0x1)
	byte                                               EarlyZPass                                         // 0x75(0x1)
	byte                                               bDepthSort                                         // 0x76(0x1)
	bool                                               bEarlyZPassMovable                                 // 0x78(0x1)
	bool                                               bDBuffer                                           // 0x78(0x1)
	byte                                               ClearSceneMethod                                   // 0x7c(0x1)
	bool                                               bBasePassOutputsVelocity                           // 0x80(0x1)
	float                                              WireframeCullThreshold                             // 0x84(0x4)
	byte                                               UIScaleRule                                        // 0x88(0x1)
	Struct RuntimeFloatCurve                           UIScaleCurve                                       // 0x90(0x80)
};


// Size 0x10
class TextureLODSettings: public Object
{
public:
	TArray<Struct CVars>                               TextureLODGroups                                   // 0x28(0x10)
};


// Size 0x48
class DeviceProfile: public TextureLODSettings
{
public:
	Struct FString                                     DeviceType                                         // 0x38(0x10)
	Struct FString                                     BaseProfileName                                    // 0x48(0x10)
	Class Object*                                      Parent                                             // 0x58(0x8)
	TArray<Str >                                       CVars                                              // 0x68(0x10)
};


// Size 0x30
class DeviceProfileManager: public Object
{
public:
	TArray<class Profiles*>                            Profiles                                           // 0x28(0x10)
};


// Size 0x18
class DialogueVoice: public Object
{
public:
	byte                                               Gender                                             // 0x28(0x1)
	byte                                               Plurality                                          // 0x29(0x1)
	Struct Guid                                        LocalizationGUID                                   // 0x2c(0x10)
};


// Size 0x38
class DialogueWave: public Object
{
public:
	bool                                               bMature                                            // 0x28(0x1)
	Struct FString                                     SpokenText                                         // 0x30(0x10)
	TArray<Struct SpokenText>                          ContextMappings                                    // 0x40(0x10)
	Struct Guid                                        LocalizationGUID                                   // 0x50(0x10)
};


// Size 0x8
class Distribution: public Object
{
public:
};


// Size 0x8
class DistributionFloat: public Distribution
{
public:
	bool                                               bCanBeBaked                                        // 0x30(0x1)
};


// Size 0x8
class DistributionFloatConstant: public DistributionFloat
{
public:
	float                                              Constant                                           // 0x38(0x4)
};


// Size 0x20
class DistributionFloatParameterBase: public DistributionFloatConstant
{
public:
	struct FName                                       ParameterName                                      // 0x40(0x8)
	float                                              MinInput                                           // 0x48(0x4)
	float                                              MaxInput                                           // 0x4c(0x4)
	float                                              MinOutput                                          // 0x50(0x4)
	float                                              MaxOutput                                          // 0x54(0x4)
	byte                                               ParamMode                                          // 0x58(0x1)
};


// Size 0x0
class DistributionFloatParticleParameter: public DistributionFloatParameterBase
{
public:
};


// Size 0x18
class DistributionFloatConstantCurve: public DistributionFloat
{
public:
	Struct InterpCurveFloat                            ConstantCurve                                      // 0x38(0x18)
};


// Size 0x8
class DistributionFloatUniform: public DistributionFloat
{
public:
	float                                              Max                                                // 0x38(0x4)
	float                                              Min                                                // 0x3c(0x4)
};


// Size 0x18
class DistributionFloatUniformCurve: public DistributionFloat
{
public:
	Struct InterpCurveVector2D                         ConstantCurve                                      // 0x38(0x18)
};


// Size 0x8
class DistributionVector: public Distribution
{
public:
	bool                                               bCanBeBaked                                        // 0x30(0x1)
	bool                                               bIsDirty                                           // 0x30(0x1)
};


// Size 0x18
class DistributionVectorConstant: public DistributionVector
{
public:
	Struct Vector                                      Constant                                           // 0x38(0xc)
	bool                                               bLockAxes                                          // 0x44(0x1)
	byte                                               LockedAxes                                         // 0x48(0x1)
};


// Size 0x40
class DistributionVectorParameterBase: public DistributionVectorConstant
{
public:
	struct FName                                       ParameterName                                      // 0x50(0x8)
	Struct Vector                                      MinInput                                           // 0x58(0xc)
	Struct Vector                                      MaxInput                                           // 0x64(0xc)
	Struct Vector                                      MinOutput                                          // 0x70(0xc)
	Struct Vector                                      MaxOutput                                          // 0x7c(0xc)
	byte                                               ParamModes                                         // 0x88(0x1)
};


// Size 0x0
class DistributionVectorParticleParameter: public DistributionVectorParameterBase
{
public:
};


// Size 0x20
class DistributionVectorConstantCurve: public DistributionVector
{
public:
	Struct InterpCurveVector                           ConstantCurve                                      // 0x38(0x18)
	bool                                               bLockAxes                                          // 0x50(0x1)
	byte                                               LockedAxes                                         // 0x54(0x1)
};


// Size 0x28
class DistributionVectorUniform: public DistributionVector
{
public:
	Struct Vector                                      Max                                                // 0x38(0xc)
	Struct Vector                                      Min                                                // 0x44(0xc)
	bool                                               bLockAxes                                          // 0x50(0x1)
	byte                                               LockedAxes                                         // 0x54(0x1)
	byte                                               MirrorFlags                                        // 0x55(0x1)
	bool                                               bUseExtremes                                       // 0x58(0x1)
};


// Size 0x28
class DistributionVectorUniformCurve: public DistributionVector
{
public:
	Struct InterpCurveTwoVectors                       ConstantCurve                                      // 0x38(0x18)
	bool                                               bLockAxes1                                         // 0x50(0x1)
	bool                                               bLockAxes2                                         // 0x50(0x1)
	byte                                               LockedAxes                                         // 0x54(0x1)
	byte                                               MirrorFlags                                        // 0x56(0x1)
	bool                                               bUseExtremes                                       // 0x5c(0x1)
};


// Size 0x0
class DPICustomScalingRule: public Object
{
public:
};


// Size 0x0
class DynamicBlueprintBinding: public Object
{
public:
};


// Size 0x10
class ComponentDelegateBinding: public DynamicBlueprintBinding
{
public:
	TArray<Struct InputActionDelegateBindings>         ComponentDelegateBindings                          // 0x28(0x10)
};


// Size 0x0
class InputDelegateBinding: public DynamicBlueprintBinding
{
public:
};


// Size 0x10
class InputActionDelegateBinding: public InputDelegateBinding
{
public:
	TArray<Struct InputAxisDelegateBindings>           InputActionDelegateBindings                        // 0x28(0x10)
};


// Size 0x10
class InputAxisDelegateBinding: public InputDelegateBinding
{
public:
	TArray<Struct InputAxisKeyDelegateBindings>        InputAxisDelegateBindings                          // 0x28(0x10)
};


// Size 0x10
class InputAxisKeyDelegateBinding: public InputDelegateBinding
{
public:
	TArray<Struct InputKeyDelegateBindings>            InputAxisKeyDelegateBindings                       // 0x28(0x10)
};


// Size 0x0
class InputVectorAxisDelegateBinding: public InputAxisKeyDelegateBinding
{
public:
};


// Size 0x10
class InputKeyDelegateBinding: public InputDelegateBinding
{
public:
	TArray<Struct InputTouchDelegateBindings>          InputKeyDelegateBindings                           // 0x28(0x10)
};


// Size 0x10
class InputTouchDelegateBinding: public InputDelegateBinding
{
public:
	TArray<Struct ActorDelegateBindings>               InputTouchDelegateBindings                         // 0x28(0x10)
};


// Size 0x10
class InstancedActorDelegateBinding: public DynamicBlueprintBinding
{
public:
	TArray<Struct bAllowRenaming>                      ActorDelegateBindings                              // 0x28(0x10)
};


// Size 0x38
class EdGraph: public Object
{
public:
	class                                              Schema                                             // 0x28(0x8)
	TArray<class Nodes*>                               Nodes                                              // 0x30(0x10)
	bool                                               bEditable                                          // 0x40(0x1)
	bool                                               bAllowDeletion                                     // 0x40(0x1)
	bool                                               bAllowRenaming                                     // 0x40(0x1)
};


// Size 0x20
class EdGraphNode_Documentation: public EdGraphNode
{
public:
	Struct FString                                     Link                                               // 0x90(0x10)
	Struct FString                                     Excerpt                                            // 0xa0(0x10)
};


// Size 0x0
class EdGraphSchema: public Object
{
public:
};


// Size 0x0
class ImportantToggleSettingInterface: public Interface
{
public:
};


// Size 0x10
class EndUserSettings: public Object
{
public:
	bool                                               bSendAnonymousUsageDataToEpic                      // 0x30(0x1)
};


// Size 0x0
class ExecutableAnimMetaDataInterface: public Interface
{
public:
};


// Size 0x40
class Exporter: public Object
{
public:
	class                                              SupportedClass                                     // 0x28(0x8)
	Class Object*                                      ExportRootScope                                    // 0x30(0x8)
	TArray<Str >                                       FormatExtension                                    // 0x38(0x10)
	TArray<Str >                                       FormatDescription                                  // 0x48(0x10)
	int                                                PreferredFormatIndex                               // 0x58(0x4)
	int                                                TextIndent                                         // 0x5c(0x4)
	bool                                               bText                                              // 0x60(0x1)
	bool                                               bSelectedOnly                                      // 0x60(0x1)
	bool                                               bForceFileOperations                               // 0x60(0x1)
};


// Size 0x0
class RareNetworkProfilerExporter: public Exporter
{
public:
};


// Size 0x28
class FFTWaterSettings: public Object
{
public:
	Struct StringAssetReference                        FFTWaterMaterialName                               // 0x28(0x10)
	Struct StringAssetReference                        FFTWaterFoamTextureName                            // 0x38(0x10)
	int                                                BaseMeshDetail                                     // 0x48(0x4)
};


// Size 0xb0
class FontImportOptions: public Object
{
public:
	Struct FontImportOptionsData                       Data                                               // 0x28(0xb0)
};


// Size 0x1b0
class Font: public Object
{
public:
	byte                                               FontCacheType                                      // 0x30(0x1)
	TArray<Struct FontCacheType>                       Characters                                         // 0x38(0x10)
	TArray<class Textures*>                            Textures                                           // 0x48(0x10)
	int                                                IsRemapped                                         // 0x58(0x4)
	float                                              EmScale                                            // 0x5c(0x4)
	float                                              Ascent                                             // 0x60(0x4)
	float                                              Descent                                            // 0x64(0x4)
	float                                              Leading                                            // 0x68(0x4)
	int                                                Kerning                                            // 0x6c(0x4)
	Struct FontImportOptionsData                       ImportOptions                                      // 0x70(0xb0)
	int                                                NumCharacters                                      // 0x120(0x4)
	TArray<Int >                                       MaxCharHeight                                      // 0x128(0x10)
	float                                              ScalingFactor                                      // 0x138(0x4)
	int                                                LegacyFontSize                                     // 0x13c(0x4)
	struct FName                                       LegacyFontName                                     // 0x140(0x8)
	Struct CompositeFont                               CompositeFont                                      // 0x148(0x28)
};


// Size 0x100
class HapticFeedbackEffect: public Object
{
public:
	Struct HapticFeedbackDetails                       HapticDetails                                      // 0x28(0x100)
};


// Size 0x18
class HighLatencySettings: public Object
{
public:
	bool                                               UseHighLatency                                     // 0x28(0x1)
	int                                                PktLag                                             // 0x2c(0x4)
	int                                                PktLagVariance                                     // 0x30(0x4)
	bool                                               PktOrder                                           // 0x34(0x1)
	int                                                PktDup                                             // 0x38(0x4)
	int                                                PktLoss                                            // 0x3c(0x4)
};


// Size 0x110
class HIKCharacterization: public Object
{
public:
	struct FName                                       Reference                                          // 0x28(0x8)
	struct FName                                       Hips                                               // 0x30(0x8)
	struct FName                                       LeftUpLeg                                          // 0x38(0x8)
	struct FName                                       LeftLeg                                            // 0x40(0x8)
	struct FName                                       LeftFoot                                           // 0x48(0x8)
	struct FName                                       RightUpLeg                                         // 0x50(0x8)
	struct FName                                       RightLeg                                           // 0x58(0x8)
	struct FName                                       RightFoot                                          // 0x60(0x8)
	struct FName                                       Spine                                              // 0x68(0x8)
	struct FName                                       LeftArm                                            // 0x70(0x8)
	struct FName                                       LeftForeArm                                        // 0x78(0x8)
	struct FName                                       LeftHand                                           // 0x80(0x8)
	struct FName                                       RightArm                                           // 0x88(0x8)
	struct FName                                       RightForeArm                                       // 0x90(0x8)
	struct FName                                       RightHand                                          // 0x98(0x8)
	struct FName                                       Head                                               // 0xa0(0x8)
	TArray<Struct Head>                                BoneTransforms                                     // 0xa8(0x10)
	bool                                               Locked                                             // 0xb8(0x1)
	TArray<Int >                                       UnrealToHumanIKBoneMapping                         // 0xc0(0x10)
	TArray<Struct UnrealToHumanIKBoneMapping>          AdditionalBones                                    // 0xd0(0x10)
	bool                                               LeftElbowInverted                                  // 0xe0(0x1)
	bool                                               RightElbowInverted                                 // 0xe1(0x1)
	bool                                               LeftKneeInverted                                   // 0xe2(0x1)
	bool                                               RightKneeInverted                                  // 0xe3(0x1)
	bool                                               AdjustLeftShoulder                                 // 0xe4(0x1)
	Struct Vector                                      AdjustLeftShoulder_Axis                            // 0xe8(0xc)
	float                                              AdjustLeftShoulder_Angle                           // 0xf4(0x4)
	bool                                               AdjustRightShoulder                                // 0xf8(0x1)
	Struct Vector                                      AdjustRightShoulder_Axis                           // 0xfc(0xc)
	float                                              AdjustRightShoulder_Angle                          // 0x108(0x4)
	bool                                               SpineSquashNStretch                                // 0x10c(0x1)
	bool                                               NeckSquashNStretch                                 // 0x10d(0x1)
	float                                              SpineJointsMinSquashNStretchFactor                 // 0x110(0x4)
	float                                              SpineJointsMaxSquashNStretchFactor                 // 0x114(0x4)
	float                                              NeckJointsMinSquashNStretchFactor                  // 0x118(0x4)
	float                                              NeckJointsMaxSquashNStretchFactor                  // 0x11c(0x4)
	bool                                               bInitFromSkeleton                                  // 0x120(0x1)
	int                                                InitFromSkeletonCount                              // 0x124(0x4)
	Struct Rotator                                     ImportRotator                                      // 0x128(0xc)
};


// Size 0x10
class InheritableComponentHandler: public Object
{
public:
	TArray<Struct ClearSmoothing>                      Records                                            // 0x28(0x10)
};


// Size 0x400
class PlayerInput: public Object
{
public:
	TArray<Struct ConsoleKeys>                         DebugExecBindings                                  // 0x120(0x10)
	TArray<Struct FName>                               GamepadInvertedAxes                                // 0x170(0x10)
	TArray<Struct FName>                               MouseInvertedAxes                                  // 0x180(0x10)
	TArray<Struct FName>                               InvertedCombinedAxisY                              // 0x190(0x10)
	TArray<Struct FName>                               InvertedCombinedAxisX                              // 0x1a0(0x10)
};


// Size 0x98
class InputSettings: public Object
{
public:
	TArray<Struct ActiveTab>                           AxisConfig                                         // 0x28(0x10)
	bool                                               bAltEnterTogglesFullscreen                         // 0x38(0x1)
	bool                                               bUseMouseForTouch                                  // 0x38(0x1)
	bool                                               bEnableMouseSmoothing                              // 0x38(0x1)
	bool                                               bEnableFOVScaling                                  // 0x38(0x1)
	float                                              FOVScale                                           // 0x3c(0x4)
	float                                              DoubleClickTime                                    // 0x40(0x4)
	TArray<Struct DoubleClickTime>                     ActionMappings                                     // 0x48(0x10)
	TArray<Struct ActionMappings>                      AxisMappings                                       // 0x58(0x10)
	TArray<Struct AxisMappings>                        CombinedAxisMappings                               // 0x68(0x10)
	bool                                               bAlwaysShowTouchInterface                          // 0x78(0x1)
	bool                                               bShowConsoleOnFourFingerTap                        // 0x79(0x1)
	Struct StringAssetReference                        DefaultTouchInterface                              // 0x80(0x10)
	Struct Key                                         ConsoleKey                                         // 0x90(0x20)
	TArray<Struct ConsoleKey>                          ConsoleKeys                                        // 0xb0(0x10)
};


// Size 0x18
class InterpCurveEdSetup: public Object
{
public:
	TArray<Struct AllEventNames>                       Tabs                                               // 0x28(0x10)
	int                                                ActiveTab                                          // 0x38(0x4)
};


// Size 0x48
class InterpData: public Object
{
public:
	float                                              InterpLength                                       // 0x28(0x4)
	float                                              PathBuildTime                                      // 0x2c(0x4)
	TArray<class InterpGroups*>                        InterpGroups                                       // 0x30(0x10)
	Class InterpCurveEdSetup*                          CurveEdSetup                                       // 0x40(0x8)
	float                                              EdSectionStart                                     // 0x48(0x4)
	float                                              EdSectionEnd                                       // 0x4c(0x4)
	bool                                               bShouldBakeAndPrune                                // 0x50(0x1)
	Class InterpGroupDirector*                         CachedDirectorGroup                                // 0x58(0x8)
	TArray<Struct FName>                               AllEventNames                                      // 0x60(0x10)
};


// Size 0x10
class InterpFilter: public Object
{
public:
	Struct FString                                     Caption                                            // 0x28(0x10)
};


// Size 0x0
class InterpFilter_Classes: public InterpFilter
{
public:
};


// Size 0x0
class InterpFilter_Custom: public InterpFilter
{
public:
};


// Size 0x28
class InterpGroup: public Object
{
public:
	TArray<class InterpTracks*>                        InterpTracks                                       // 0x30(0x10)
	struct FName                                       GroupName                                          // 0x40(0x8)
	Struct Color                                       GroupColor                                         // 0x48(0x4)
	bool                                               bCollapsed                                         // 0x4c(0x1)
	bool                                               bVisible                                           // 0x4c(0x1)
	bool                                               bIsFolder                                          // 0x4c(0x1)
	bool                                               bIsParented                                        // 0x4c(0x1)
	bool                                               bIsSelected                                        // 0x4c(0x1)
};


// Size 0x10
class InterpGroupCamera: public InterpGroup
{
public:
	Class CameraAnim*                                  CameraAnimInst                                     // 0x50(0x8)
	float                                              CompressTolerance                                  // 0x58(0x4)
};


// Size 0x0
class InterpGroupDirector: public InterpGroup
{
public:
};


// Size 0x20
class InterpGroupInst: public Object
{
public:
	Class InterpGroup*                                 Group                                              // 0x28(0x8)
	Class Actor*                                       GroupActor                                         // 0x30(0x8)
	TArray<class TrackInst*>                           TrackInst                                          // 0x38(0x10)
};


// Size 0x0
class InterpGroupInstCamera: public InterpGroupInst
{
public:
};


// Size 0x0
class InterpGroupInstDirector: public InterpGroupInst
{
public:
};


// Size 0x48
class InterpTrack: public Object
{
public:
	TArray<class SubTracks*>                           SubTracks                                          // 0x38(0x10)
	class                                              TrackInstClass                                     // 0x48(0x8)
	byte                                               ActiveCondition                                    // 0x50(0x1)
	Struct FString                                     TrackTitle                                         // 0x58(0x10)
	bool                                               bOnePerGroup                                       // 0x68(0x1)
	bool                                               bDirGroupOnly                                      // 0x68(0x1)
	bool                                               bDisableTrack                                      // 0x68(0x1)
	bool                                               bIsSelected                                        // 0x68(0x1)
	bool                                               bIsAnimControlTrack                                // 0x68(0x1)
	bool                                               bSubTrackOnly                                      // 0x68(0x1)
	bool                                               bVisible                                           // 0x68(0x1)
	bool                                               bIsRecording                                       // 0x68(0x1)
};


// Size 0x18
class InterpTrackBoolProp: public InterpTrack
{
public:
	TArray<Struct bSimulateCameraCutsOnClients>        BoolTrack                                          // 0x70(0x10)
	struct FName                                       PropertyName                                       // 0x80(0x8)
};


// Size 0x18
class InterpTrackDirector: public InterpTrack
{
public:
	TArray<Struct bUseCustomEventName>                 CutTrack                                           // 0x70(0x10)
	bool                                               bSimulateCameraCutsOnClients                       // 0x80(0x1)
};


// Size 0x18
class InterpTrackEvent: public InterpTrack
{
public:
	TArray<Struct CurveTension>                        EventTrack                                         // 0x70(0x10)
	bool                                               bFireEventsWhenForwards                            // 0x80(0x1)
	bool                                               bFireEventsWhenBackwards                           // 0x80(0x1)
	bool                                               bFireEventsWhenJumpingForwards                     // 0x80(0x1)
	bool                                               bUseCustomEventName                                // 0x80(0x1)
};


// Size 0x20
class InterpTrackFloatBase: public InterpTrack
{
public:
	Struct InterpCurveFloat                            FloatTrack                                         // 0x70(0x18)
	float                                              CurveTension                                       // 0x88(0x4)
};


// Size 0x20
class InterpTrackAnimControl: public InterpTrackFloatBase
{
public:
	struct FName                                       SlotName                                           // 0x90(0x8)
	TArray<Struct SlotName>                            AnimSeqs                                           // 0x98(0x10)
	bool                                               bSkipAnimNotifiers                                 // 0xa8(0x1)
};


// Size 0x18
class InterpTrackFade: public InterpTrackFloatBase
{
public:
	bool                                               bPersistFade                                       // 0x90(0x1)
	bool                                               bFadeAudio                                         // 0x90(0x1)
	Struct LinearColor                                 FadeColor                                          // 0x94(0x10)
};


// Size 0x18
class InterpTrackFloatAnimBPParam: public InterpTrackFloatBase
{
public:
	class                                              AnimBlueprintClass                                 // 0x90(0x8)
	struct FName                                       ParamName                                          // 0x98(0x8)
};


// Size 0x18
class InterpTrackFloatMaterialParam: public InterpTrackFloatBase
{
public:
	TArray<class TargetMaterials*>                     TargetMaterials                                    // 0x90(0x10)
	struct FName                                       ParamName                                          // 0xa0(0x8)
};


// Size 0x8
class InterpTrackFloatParticleParam: public InterpTrackFloatBase
{
public:
	struct FName                                       ParamName                                          // 0x90(0x8)
};


// Size 0x8
class InterpTrackFloatProp: public InterpTrackFloatBase
{
public:
	struct FName                                       PropertyName                                       // 0x90(0x8)
};


// Size 0x58
class InterpTrackMove: public InterpTrack
{
public:
	Struct InterpCurveVector                           PosTrack                                           // 0x70(0x18)
	Struct InterpCurveVector                           EulerTrack                                         // 0x88(0x18)
	Struct InterpLookupTrack                           LookupTrack                                        // 0xa0(0x10)
	struct FName                                       LookAtGroupName                                    // 0xb0(0x8)
	float                                              LinCurveTension                                    // 0xb8(0x4)
	float                                              AngCurveTension                                    // 0xbc(0x4)
	bool                                               bUseQuatInterpolation                              // 0xc0(0x1)
	bool                                               bShowArrowAtKeys                                   // 0xc0(0x1)
	bool                                               bDisableMovement                                   // 0xc0(0x1)
	bool                                               bShowTranslationOnCurveEd                          // 0xc0(0x1)
	bool                                               bShowRotationOnCurveEd                             // 0xc0(0x1)
	bool                                               bHide3DTrack                                       // 0xc0(0x1)
	byte                                               RotMode                                            // 0xc4(0x1)
};


// Size 0x18
class InterpTrackMoveAxis: public InterpTrackFloatBase
{
public:
	byte                                               MoveAxis                                           // 0x90(0x1)
	Struct InterpLookupTrack                           LookupTrack                                        // 0x98(0x10)
};


// Size 0x20
class InterpTrackLinearColorBase: public InterpTrack
{
public:
	Struct InterpCurveLinearColor                      LinearColorTrack                                   // 0x70(0x18)
	float                                              CurveTension                                       // 0x88(0x4)
};


// Size 0x8
class InterpTrackLinearColorProp: public InterpTrackLinearColorBase
{
public:
	struct FName                                       PropertyName                                       // 0x90(0x8)
};


// Size 0x10
class InterpTrackParticleReplay: public InterpTrack
{
public:
	TArray<Struct bFireEventsWhenJumpingForwards>      TrackKeys                                          // 0x70(0x10)
};


// Size 0x18
class InterpTrackToggle: public InterpTrack
{
public:
	TArray<Struct CurveTension>                        ToggleTrack                                        // 0x70(0x10)
	bool                                               bActivateSystemEachUpdate                          // 0x80(0x1)
	bool                                               bActivateWithJustAttachedFlag                      // 0x80(0x1)
	bool                                               bFireEventsWhenForwards                            // 0x80(0x1)
	bool                                               bFireEventsWhenBackwards                           // 0x80(0x1)
	bool                                               bFireEventsWhenJumpingForwards                     // 0x80(0x1)
};


// Size 0x20
class InterpTrackVectorBase: public InterpTrack
{
public:
	Struct InterpCurveVector                           VectorTrack                                        // 0x70(0x18)
	float                                              CurveTension                                       // 0x88(0x4)
};


// Size 0x0
class InterpTrackAudioMaster: public InterpTrackVectorBase
{
public:
};


// Size 0x8
class InterpTrackColorProp: public InterpTrackVectorBase
{
public:
	struct FName                                       PropertyName                                       // 0x90(0x8)
};


// Size 0x0
class InterpTrackColorScale: public InterpTrackVectorBase
{
public:
};


// Size 0x18
class InterpTrackSound: public InterpTrackVectorBase
{
public:
	TArray<Struct ParamName>                           Sounds                                             // 0x90(0x10)
	bool                                               bPlayOnReverse                                     // 0xa0(0x1)
	bool                                               bContinueSoundOnMatineeEnd                         // 0xa0(0x1)
	bool                                               bSuppressSubtitles                                 // 0xa0(0x1)
	bool                                               bTreatAsDialogue                                   // 0xa0(0x1)
	bool                                               bAttach                                            // 0xa0(0x1)
};


// Size 0x18
class InterpTrackVectorMaterialParam: public InterpTrackVectorBase
{
public:
	TArray<class TargetMaterials*>                     TargetMaterials                                    // 0x90(0x10)
	struct FName                                       ParamName                                          // 0xa0(0x8)
};


// Size 0x8
class InterpTrackVectorProp: public InterpTrackVectorBase
{
public:
	struct FName                                       PropertyName                                       // 0x90(0x8)
};


// Size 0x18
class InterpTrackVisibility: public InterpTrack
{
public:
	TArray<Struct LastUpdatePosition>                  VisibilityTrack                                    // 0x70(0x10)
	bool                                               bFireEventsWhenForwards                            // 0x80(0x1)
	bool                                               bFireEventsWhenBackwards                           // 0x80(0x1)
	bool                                               bFireEventsWhenJumpingForwards                     // 0x80(0x1)
};


// Size 0x0
class InterpTrackInst: public Object
{
public:
};


// Size 0x8
class InterpTrackInstAnimControl: public InterpTrackInst
{
public:
	float                                              LastUpdatePosition                                 // 0x28(0x4)
};


// Size 0x0
class InterpTrackInstAudioMaster: public InterpTrackInst
{
public:
};


// Size 0x0
class InterpTrackInstColorScale: public InterpTrackInst
{
public:
};


// Size 0x8
class InterpTrackInstDirector: public InterpTrackInst
{
public:
	Class Actor*                                       OldViewTarget                                      // 0x28(0x8)
};


// Size 0x8
class InterpTrackInstEvent: public InterpTrackInst
{
public:
	float                                              LastUpdatePosition                                 // 0x28(0x4)
};


// Size 0x0
class InterpTrackInstFade: public InterpTrackInst
{
public:
};


// Size 0x18
class InterpTrackInstFloatAnimBPParam: public InterpTrackInst
{
public:
	Class AnimInstance*                                AnimScriptInstance                                 // 0x28(0x8)
	float                                              ResetFloat                                         // 0x30(0x4)
};


// Size 0x38
class InterpTrackInstFloatMaterialParam: public InterpTrackInst
{
public:
	TArray<class MaterialInstances*>                   MaterialInstances                                  // 0x28(0x10)
	TArray<Float >                                     ResetFloats                                        // 0x38(0x10)
	TArray<Struct ResetFloats>                         PrimitiveMaterialRefs                              // 0x48(0x10)
	Class InterpTrackFloatMaterialParam*               InstancedTrack                                     // 0x58(0x8)
};


// Size 0x8
class InterpTrackInstFloatParticleParam: public InterpTrackInst
{
public:
	float                                              ResetFloat                                         // 0x28(0x4)
};


// Size 0x18
class InterpTrackInstMove: public InterpTrackInst
{
public:
	Struct Vector                                      ResetLocation                                      // 0x28(0xc)
	Struct Rotator                                     ResetRotation                                      // 0x34(0xc)
};


// Size 0x8
class InterpTrackInstParticleReplay: public InterpTrackInst
{
public:
	float                                              LastUpdatePosition                                 // 0x28(0x4)
};


// Size 0x10
class InterpTrackInstProperty: public InterpTrackInst
{
public:
	Class Property*                                    InterpProperty                                     // 0x28(0x8)
	Class Object*                                      PropertyOuterObjectInst                            // 0x30(0x8)
};


// Size 0x18
class InterpTrackInstBoolProp: public InterpTrackInstProperty
{
public:
	Class BoolProperty*                                BoolProperty                                       // 0x40(0x8)
	bool                                               ResetBool                                          // 0x48(0x1)
};


// Size 0x10
class InterpTrackInstColorProp: public InterpTrackInstProperty
{
public:
	Struct Color                                       ResetColor                                         // 0x40(0x4)
};


// Size 0x10
class InterpTrackInstFloatProp: public InterpTrackInstProperty
{
public:
	float                                              ResetFloat                                         // 0x40(0x4)
};


// Size 0x18
class InterpTrackInstLinearColorProp: public InterpTrackInstProperty
{
public:
	Struct LinearColor                                 ResetColor                                         // 0x40(0x10)
};


// Size 0x18
class InterpTrackInstVectorProp: public InterpTrackInstProperty
{
public:
	Struct Vector                                      ResetVector                                        // 0x40(0xc)
};


// Size 0x10
class InterpTrackInstSound: public InterpTrackInst
{
public:
	float                                              LastUpdatePosition                                 // 0x28(0x4)
	Class AudioComponent*                              PlayAudioComp                                      // 0x30(0x8)
};


// Size 0x10
class InterpTrackInstToggle: public InterpTrackInst
{
public:
	byte                                               Action                                             // 0x28(0x1)
	float                                              LastUpdatePosition                                 // 0x2c(0x4)
	bool                                               bSavedActiveState                                  // 0x30(0x1)
};


// Size 0x38
class InterpTrackInstVectorMaterialParam: public InterpTrackInst
{
public:
	TArray<class MaterialInstances*>                   MaterialInstances                                  // 0x28(0x10)
	TArray<Struct MaterialInstances>                   ResetVectors                                       // 0x38(0x10)
	TArray<Struct ResetVectors>                        PrimitiveMaterialRefs                              // 0x48(0x10)
	Class InterpTrackVectorMaterialParam*              InstancedTrack                                     // 0x58(0x8)
};


// Size 0x8
class InterpTrackInstVisibility: public InterpTrackInst
{
public:
	byte                                               Action                                             // 0x28(0x1)
	float                                              LastUpdatePosition                                 // 0x2c(0x4)
};


// Size 0x28
class IntSerialization: public Object
{
public:
	byte                                               UnsignedInt8Variable                               // 0x48(0x1)
	int                                                SignedInt32Variable                                // 0x4c(0x4)
};


// Size 0x20
class Layer: public Object
{
public:
	struct FName                                       LayerName                                          // 0x28(0x8)
	bool                                               bIsVisible                                         // 0x30(0x1)
	TArray<Struct bIsVisible>                          ActorStats                                         // 0x38(0x10)
};


// Size 0x10
class LevelActorContainer: public Object
{
public:
	TArray<class Actors*>                              Actors                                             // 0x28(0x10)
};


// Size 0x1e8
class LevelStreaming: public Object
{
public:
	struct FName                                       PackageNameToLoad                                  // 0x50(0x8)
	TArray<Struct FName>                               LODPackageNames                                    // 0x58(0x10)
	Struct Transform                                   LevelTransform                                     // 0x80(0x30)
	bool                                               bShouldBeVisibleInEditor                           // 0xbc(0x1)
	bool                                               Blocked                                            // 0xbc(0x1)
	bool                                               bShouldBeLoaded                                    // 0xbc(0x1)
	bool                                               bShouldBeVisible                                   // 0xbc(0x1)
	bool                                               bShouldBlockOnLoad                                 // 0xbc(0x1)
	int                                                LevelLODIndex                                      // 0xc0(0x4)
	bool                                               bDisableDistanceStreaming                          // 0xc4(0x1)
	bool                                               bDrawOnLevelStatusMap                              // 0xc4(0x1)
	Struct LinearColor                                 LevelColor                                         // 0xc8(0x10)
	TArray<class EditorStreamingVolumes*>              EditorStreamingVolumes                             // 0xd8(0x10)
	float                                              MinTimeBetweenVolumeUnloadRequests                 // 0xe8(0x4)
	TArray<Str >                                       Keywords                                           // 0xf0(0x10)
	Class Level*                                       LoadedLevel                                        // 0x200(0x8)
	Class Level*                                       PendingUnloadLevel                                 // 0x208(0x8)
};


// Size 0x0
class LevelStreamingAlwaysLoaded: public LevelStreaming
{
public:
};


// Size 0x10
class LevelStreamingKismet: public LevelStreaming
{
public:
	bool                                               bInitiallyLoaded                                   // 0x210(0x1)
	bool                                               bInitiallyVisible                                  // 0x210(0x1)
};


// Size 0x0
class LevelStreamingPersistent: public LevelStreaming
{
public:
};


// Size 0x18
class LightmappedSurfaceCollection: public Object
{
public:
	Class Model*                                       SourceModel                                        // 0x28(0x8)
	TArray<Int >                                       Surfaces                                           // 0x30(0x10)
};


// Size 0x18
class LightmassPrimitiveSettingsObject: public Object
{
public:
	Struct LightmassPrimitiveSettings                  LightmassSettings                                  // 0x28(0x18)
};


// Size 0x0
class LocalMessage: public Object
{
public:
};


// Size 0x80
class EngineMessage: public LocalMessage
{
public:
	Struct FString                                     FailedPlaceMessage                                 // 0x28(0x10)
	Struct FString                                     MaxedOutMessage                                    // 0x38(0x10)
	Struct FString                                     EnteredMessage                                     // 0x48(0x10)
	Struct FString                                     LeftMessage                                        // 0x58(0x10)
	Struct FString                                     GlobalNameChange                                   // 0x68(0x10)
	Struct FString                                     SpecEnteredMessage                                 // 0x78(0x10)
	Struct FString                                     NewPlayerMessage                                   // 0x88(0x10)
	Struct FString                                     NewSpecMessage                                     // 0x98(0x10)
};


// Size 0x38
class MaterialExpressionAbs: public MaterialExpression
{
public:
	Struct ExpressionInput                             Input                                              // 0x70(0x38)
};


// Size 0x0
class MaterialExpressionActorPositionWS: public MaterialExpression
{
public:
};


// Size 0x78
class MaterialExpressionAdd: public MaterialExpression
{
public:
	Struct ExpressionInput                             A                                                  // 0x70(0x38)
	Struct ExpressionInput                             B                                                  // 0xa8(0x38)
	float                                              ConstA                                             // 0xe0(0x4)
	float                                              ConstB                                             // 0xe4(0x4)
};


// Size 0x70
class MaterialExpressionAppendVector: public MaterialExpression
{
public:
	Struct ExpressionInput                             A                                                  // 0x70(0x38)
	Struct ExpressionInput                             B                                                  // 0xa8(0x38)
};


// Size 0x38
class MaterialExpressionAtmosphericFogColor: public MaterialExpression
{
public:
	Struct ExpressionInput                             WorldPosition                                      // 0x70(0x38)
};


// Size 0x38
class MaterialExpressionBlackBody: public MaterialExpression
{
public:
	Struct ExpressionInput                             Temp                                               // 0x70(0x38)
};


// Size 0x10
class MaterialExpressionBoneMatrix: public MaterialExpression
{
public:
	int                                                ReferenceIndex                                     // 0x70(0x4)
	struct FName                                       BoneName                                           // 0x74(0x8)
	bool                                               bPosition                                          // 0x7c(0x1)
};


// Size 0x80
class MaterialExpressionBreakMaterialAttributes: public MaterialExpression
{
public:
	Struct ExpressionInput                             Struct                                             // 0x70(0x38)
	Struct MaterialAttributesInput                     MaterialAttributes                                 // 0xa8(0x38)
};


// Size 0xb8
class MaterialExpressionBumpOffset: public MaterialExpression
{
public:
	Struct ExpressionInput                             Coordinate                                         // 0x70(0x38)
	Struct ExpressionInput                             Height                                             // 0xa8(0x38)
	Struct ExpressionInput                             HeightRatioInput                                   // 0xe0(0x38)
	float                                              HeightRatio                                        // 0x118(0x4)
	float                                              ReferencePlane                                     // 0x11c(0x4)
};


// Size 0x0
class MaterialExpressionCameraPositionWS: public MaterialExpression
{
public:
};


// Size 0x0
class MaterialExpressionCameraVectorWS: public MaterialExpression
{
public:
};


// Size 0x38
class MaterialExpressionCausticTexture: public MaterialExpression
{
public:
	Struct ExpressionInput                             Coordinates                                        // 0x70(0x38)
};


// Size 0x0
class MaterialExpressionCausticTextureCoordinate: public MaterialExpression
{
public:
};


// Size 0x38
class MaterialExpressionCeil: public MaterialExpression
{
public:
	Struct ExpressionInput                             Input                                              // 0x70(0x38)
};


// Size 0xb8
class MaterialExpressionClamp: public MaterialExpression
{
public:
	Struct ExpressionInput                             Input                                              // 0x70(0x38)
	Struct ExpressionInput                             Min                                                // 0xa8(0x38)
	Struct ExpressionInput                             Max                                                // 0xe0(0x38)
	byte                                               ClampMode                                          // 0x118(0x1)
	float                                              MinDefault                                         // 0x11c(0x4)
	float                                              MaxDefault                                         // 0x120(0x4)
};


// Size 0x20
class MaterialExpressionCollectionParameter: public MaterialExpression
{
public:
	Class MaterialParameterCollection*                 Collection                                         // 0x70(0x8)
	struct FName                                       ParameterName                                      // 0x78(0x8)
	Struct Guid                                        ParameterId                                        // 0x80(0x10)
};


// Size 0x28
class MaterialExpressionComment: public MaterialExpression
{
public:
	int                                                SizeX                                              // 0x70(0x4)
	int                                                SizeY                                              // 0x74(0x4)
	Struct FString                                     Text                                               // 0x78(0x10)
	Struct LinearColor                                 CommentColor                                       // 0x88(0x10)
};


// Size 0x40
class MaterialExpressionComponentMask: public MaterialExpression
{
public:
	Struct ExpressionInput                             Input                                              // 0x70(0x38)
	bool                                               R                                                  // 0xa8(0x1)
	bool                                               G                                                  // 0xa8(0x1)
	bool                                               B                                                  // 0xa8(0x1)
	bool                                               A                                                  // 0xa8(0x1)
};


// Size 0x8
class MaterialExpressionConstant: public MaterialExpression
{
public:
	float                                              R                                                  // 0x70(0x4)
};


// Size 0x8
class MaterialExpressionConstant2Vector: public MaterialExpression
{
public:
	float                                              R                                                  // 0x70(0x4)
	float                                              G                                                  // 0x74(0x4)
};


// Size 0x10
class MaterialExpressionConstant3Vector: public MaterialExpression
{
public:
	Struct LinearColor                                 Constant                                           // 0x70(0x10)
};


// Size 0x10
class MaterialExpressionConstant4Vector: public MaterialExpression
{
public:
	Struct LinearColor                                 Constant                                           // 0x70(0x10)
};


// Size 0x40
class MaterialExpressionConstantBiasScale: public MaterialExpression
{
public:
	Struct ExpressionInput                             Input                                              // 0x70(0x38)
	float                                              Bias                                               // 0xa8(0x4)
	float                                              Scale                                              // 0xac(0x4)
};


// Size 0x40
class MaterialExpressionCosine: public MaterialExpression
{
public:
	Struct ExpressionInput                             Input                                              // 0x70(0x38)
	float                                              Period                                             // 0xa8(0x4)
};


// Size 0x70
class MaterialExpressionCrossProduct: public MaterialExpression
{
public:
	Struct ExpressionInput                             A                                                  // 0x70(0x38)
	Struct ExpressionInput                             B                                                  // 0xa8(0x38)
};


// Size 0x48
class MaterialExpressionCustom: public MaterialExpression
{
public:
	Struct FString                                     Code                                               // 0x70(0x10)
	byte                                               OutputType                                         // 0x80(0x1)
	Struct FString                                     Description                                        // 0x88(0x10)
	TArray<Struct Description>                         Inputs                                             // 0x98(0x10)
	Struct FString                                     DeclarationCode                                    // 0xa8(0x10)
};


// Size 0x38
class MaterialExpressionCustomVelocity: public MaterialExpressionCustomOutput
{
public:
	Struct ExpressionInput                             Velocity2D                                         // 0x70(0x38)
};


// Size 0x38
class MaterialExpressionDDX: public MaterialExpression
{
public:
	Struct ExpressionInput                             Value                                              // 0x70(0x38)
};


// Size 0x38
class MaterialExpressionDDY: public MaterialExpression
{
public:
	Struct ExpressionInput                             Value                                              // 0x70(0x38)
};


// Size 0x40
class MaterialExpressionDecalMipmapLevel: public MaterialExpression
{
public:
	Struct ExpressionInput                             TextureSize                                        // 0x70(0x38)
	float                                              ConstWidth                                         // 0xa8(0x4)
	float                                              ConstHeight                                        // 0xac(0x4)
};


// Size 0x78
class MaterialExpressionDepthFade: public MaterialExpression
{
public:
	Struct ExpressionInput                             InOpacity                                          // 0x70(0x38)
	Struct ExpressionInput                             FadeDistance                                       // 0xa8(0x38)
	float                                              OpacityDefault                                     // 0xe0(0x4)
	float                                              FadeDistanceDefault                                // 0xe4(0x4)
};


// Size 0x40
class MaterialExpressionDepthOfFieldFunction: public MaterialExpression
{
public:
	byte                                               FunctionValue                                      // 0x70(0x1)
	Struct ExpressionInput                             Depth                                              // 0x78(0x38)
};


// Size 0x38
class MaterialExpressionDeriveNormalZ: public MaterialExpression
{
public:
	Struct ExpressionInput                             InXY                                               // 0x70(0x38)
};


// Size 0x80
class MaterialExpressionDesaturation: public MaterialExpression
{
public:
	Struct ExpressionInput                             Input                                              // 0x70(0x38)
	Struct ExpressionInput                             Fraction                                           // 0xa8(0x38)
	Struct LinearColor                                 LuminanceFactors                                   // 0xe0(0x10)
};


// Size 0x70
class MaterialExpressionDistance: public MaterialExpression
{
public:
	Struct ExpressionInput                             A                                                  // 0x70(0x38)
	Struct ExpressionInput                             B                                                  // 0xa8(0x38)
};


// Size 0x0
class MaterialExpressionDistanceCullFade: public MaterialExpression
{
public:
};


// Size 0x38
class MaterialExpressionDistanceFieldGradient: public MaterialExpression
{
public:
	Struct ExpressionInput                             Position                                           // 0x70(0x38)
};


// Size 0x38
class MaterialExpressionDistanceToNearestSurface: public MaterialExpression
{
public:
	Struct ExpressionInput                             Position                                           // 0x70(0x38)
};


// Size 0x78
class MaterialExpressionDivide: public MaterialExpression
{
public:
	Struct ExpressionInput                             A                                                  // 0x70(0x38)
	Struct ExpressionInput                             B                                                  // 0xa8(0x38)
	float                                              ConstA                                             // 0xe0(0x4)
	float                                              ConstB                                             // 0xe4(0x4)
};


// Size 0x70
class MaterialExpressionDotProduct: public MaterialExpression
{
public:
	Struct ExpressionInput                             A                                                  // 0x70(0x38)
	Struct ExpressionInput                             B                                                  // 0xa8(0x38)
};


// Size 0x20
class MaterialExpressionDynamicParameter: public MaterialExpression
{
public:
	TArray<Str None>                                   ParamNames                                         // 0x70(0x10)
	Struct LinearColor                                 DefaultValue                                       // 0x80(0x10)
};


// Size 0x0
class MaterialExpressionEyeAdaptation: public MaterialExpression
{
public:
};


// Size 0x118
class MaterialExpressionFeatureLevelSwitch: public MaterialExpression
{
public:
	Struct ExpressionInput                             Default                                            // 0x70(0x38)
	Struct ExpressionInput                             Inputs                                             // 0xa8(0x38)
};


// Size 0x38
class MaterialExpressionFloor: public MaterialExpression
{
public:
	Struct ExpressionInput                             Input                                              // 0x70(0x38)
};


// Size 0x70
class MaterialExpressionFmod: public MaterialExpression
{
public:
	Struct ExpressionInput                             A                                                  // 0x70(0x38)
	Struct ExpressionInput                             B                                                  // 0xa8(0x38)
};


// Size 0x10
class MaterialExpressionFontSample: public MaterialExpression
{
public:
	Class Font*                                        Font                                               // 0x70(0x8)
	int                                                FontTexturePage                                    // 0x78(0x4)
};


// Size 0x20
class MaterialExpressionFontSampleParameter: public MaterialExpressionFontSample
{
public:
	struct FName                                       ParameterName                                      // 0x80(0x8)
	Struct Guid                                        ExpressionGUID                                     // 0x88(0x10)
	struct FName                                       Group                                              // 0x98(0x8)
};


// Size 0x38
class MaterialExpressionFrac: public MaterialExpression
{
public:
	Struct ExpressionInput                             Input                                              // 0x70(0x38)
};


// Size 0xb8
class MaterialExpressionFresnel: public MaterialExpression
{
public:
	Struct ExpressionInput                             ExponentIn                                         // 0x70(0x38)
	float                                              Exponent                                           // 0xa8(0x4)
	Struct ExpressionInput                             BaseReflectFractionIn                              // 0xb0(0x38)
	float                                              BaseReflectFraction                                // 0xe8(0x4)
	Struct ExpressionInput                             Normal                                             // 0xf0(0x38)
};


// Size 0x90
class MaterialExpressionFunctionInput: public MaterialExpression
{
public:
	Struct ExpressionInput                             Preview                                            // 0x70(0x38)
	Struct FString                                     InputName                                          // 0xa8(0x10)
	Struct FString                                     Description                                        // 0xb8(0x10)
	Struct Guid                                        Id                                                 // 0xc8(0x10)
	byte                                               InputType                                          // 0xd8(0x1)
	Struct Vector4                                     PreviewValue                                       // 0xe0(0x10)
	bool                                               bUsePreviewValueAsDefault                          // 0xf0(0x1)
	int                                                SortPriority                                       // 0xf4(0x4)
	bool                                               bCompilingFunctionPreview                          // 0xf8(0x1)
};


// Size 0x78
class MaterialExpressionFunctionOutput: public MaterialExpression
{
public:
	Struct FString                                     OutputName                                         // 0x70(0x10)
	Struct FString                                     Description                                        // 0x80(0x10)
	int                                                SortPriority                                       // 0x90(0x4)
	Struct ExpressionInput                             A                                                  // 0x98(0x38)
	bool                                               bLastPreviewed                                     // 0xd0(0x1)
	Struct Guid                                        Id                                                 // 0xd4(0x10)
};


// Size 0xa8
class MaterialExpressionGIReplace: public MaterialExpression
{
public:
	Struct ExpressionInput                             Default                                            // 0x70(0x38)
	Struct ExpressionInput                             StaticIndirect                                     // 0xa8(0x38)
	Struct ExpressionInput                             DynamicIndirect                                    // 0xe0(0x38)
};


// Size 0x38
class MaterialExpressionHash: public MaterialExpression
{
public:
	Struct ExpressionInput                             Input                                              // 0x70(0x38)
};


// Size 0x128
class MaterialExpressionIf: public MaterialExpression
{
public:
	Struct ExpressionInput                             A                                                  // 0x70(0x38)
	Struct ExpressionInput                             B                                                  // 0xa8(0x38)
	Struct ExpressionInput                             AGreaterThanB                                      // 0xe0(0x38)
	Struct ExpressionInput                             AEqualsB                                           // 0x118(0x38)
	Struct ExpressionInput                             ALessThanB                                         // 0x150(0x38)
	float                                              EqualsThreshold                                    // 0x188(0x4)
	float                                              ConstB                                             // 0x18c(0x4)
	float                                              ConstAEqualsB                                      // 0x190(0x4)
};


// Size 0xf0
class MaterialExpressionIfCondition: public MaterialExpression
{
public:
	Struct ExpressionInput                             A                                                  // 0x70(0x38)
	Struct ExpressionInput                             B                                                  // 0xa8(0x38)
	Struct ExpressionInput                             IfTrue                                             // 0xe0(0x38)
	Struct ExpressionInput                             IfFalse                                            // 0x118(0x38)
	byte                                               Condition                                          // 0x150(0x1)
	byte                                               Attribute                                          // 0x151(0x1)
	float                                              ConstB                                             // 0x154(0x4)
	float                                              ConstIfTrue                                        // 0x158(0x4)
	float                                              ConstIfFalse                                       // 0x15c(0x4)
};


// Size 0x70
class MaterialExpressionIfShadowPass: public MaterialExpression
{
public:
	Struct ExpressionInput                             Shadow                                             // 0x70(0x38)
	Struct ExpressionInput                             NotShadow                                          // 0xa8(0x38)
};


// Size 0x0
class MaterialExpressionLightmapUVs: public MaterialExpression
{
public:
};


// Size 0x70
class MaterialExpressionLightmassReplace: public MaterialExpression
{
public:
	Struct ExpressionInput                             Realtime                                           // 0x70(0x38)
	Struct ExpressionInput                             Lightmass                                          // 0xa8(0x38)
};


// Size 0x0
class MaterialExpressionLightVector: public MaterialExpression
{
public:
};


// Size 0xb8
class MaterialExpressionLinearInterpolate: public MaterialExpression
{
public:
	Struct ExpressionInput                             A                                                  // 0x70(0x38)
	Struct ExpressionInput                             B                                                  // 0xa8(0x38)
	Struct ExpressionInput                             Alpha                                              // 0xe0(0x38)
	float                                              ConstA                                             // 0x118(0x4)
	float                                              ConstB                                             // 0x11c(0x4)
	float                                              ConstAlpha                                         // 0x120(0x4)
};


// Size 0x38
class MaterialExpressionLocalDisturbanceTexture: public MaterialExpression
{
public:
	Struct ExpressionInput                             Coordinates                                        // 0x70(0x38)
};


// Size 0x38
class MaterialExpressionLogarithm2: public MaterialExpression
{
public:
	Struct ExpressionInput                             X                                                  // 0x70(0x38)
};


// Size 0x38
class MaterialExpressionLowResClouds: public MaterialExpression
{
public:
	Struct ExpressionInput                             Coordinates                                        // 0x70(0x38)
};


// Size 0x0
class MaterialExpressionLumaAvg: public MaterialExpression
{
public:
};


// Size 0x578
class MaterialExpressionMakeMaterialAttributes: public MaterialExpression
{
public:
	Struct ExpressionInput                             BaseColor                                          // 0x70(0x38)
	Struct ExpressionInput                             Metallic                                           // 0xa8(0x38)
	Struct ExpressionInput                             Specular                                           // 0xe0(0x38)
	Struct ExpressionInput                             Roughness                                          // 0x118(0x38)
	Struct ExpressionInput                             EmissiveColor                                      // 0x150(0x38)
	Struct ExpressionInput                             Opacity                                            // 0x188(0x38)
	Struct ExpressionInput                             OpacityMask                                        // 0x1c0(0x38)
	Struct ExpressionInput                             Normal                                             // 0x1f8(0x38)
	Struct ExpressionInput                             WorldPositionOffset                                // 0x230(0x38)
	Struct ExpressionInput                             WorldDisplacement                                  // 0x268(0x38)
	Struct ExpressionInput                             TessellationMultiplier                             // 0x2a0(0x38)
	Struct ExpressionInput                             SubsurfaceColor                                    // 0x2d8(0x38)
	Struct ExpressionInput                             ClearCoat                                          // 0x310(0x38)
	Struct ExpressionInput                             ClearCoatRoughness                                 // 0x348(0x38)
	Struct ExpressionInput                             AmbientOcclusion                                   // 0x380(0x38)
	Struct ExpressionInput                             Refraction                                         // 0x3b8(0x38)
	Struct ExpressionInput                             CustomizedUVs                                      // 0x3f0(0x38)
	Struct ExpressionInput                             PixelDepthOffset                                   // 0x5b0(0x38)
};


// Size 0x28
class MaterialExpressionMaterialFunctionCall: public MaterialExpression
{
public:
	Class MaterialFunction*                            MaterialFunction                                   // 0x70(0x8)
	TArray<Struct MaterialFunction>                    FunctionInputs                                     // 0x78(0x10)
	TArray<Struct FunctionInputs>                      FunctionOutputs                                    // 0x88(0x10)
};


// Size 0x78
class MaterialExpressionMax: public MaterialExpression
{
public:
	Struct ExpressionInput                             A                                                  // 0x70(0x38)
	Struct ExpressionInput                             B                                                  // 0xa8(0x38)
	float                                              ConstA                                             // 0xe0(0x4)
	float                                              ConstB                                             // 0xe4(0x4)
};


// Size 0x78
class MaterialExpressionMin: public MaterialExpression
{
public:
	Struct ExpressionInput                             A                                                  // 0x70(0x38)
	Struct ExpressionInput                             B                                                  // 0xa8(0x38)
	float                                              ConstA                                             // 0xe0(0x4)
	float                                              ConstB                                             // 0xe4(0x4)
};


// Size 0x78
class MaterialExpressionMultiply: public MaterialExpression
{
public:
	Struct ExpressionInput                             A                                                  // 0x70(0x38)
	Struct ExpressionInput                             B                                                  // 0xa8(0x38)
	float                                              ConstA                                             // 0xe0(0x4)
	float                                              ConstB                                             // 0xe4(0x4)
};


// Size 0x90
class MaterialExpressionNoise: public MaterialExpression
{
public:
	Struct ExpressionInput                             Position                                           // 0x70(0x38)
	Struct ExpressionInput                             FilterWidth                                        // 0xa8(0x38)
	float                                              Scale                                              // 0xe0(0x4)
	int                                                Quality                                            // 0xe4(0x4)
	byte                                               NoiseFunction                                      // 0xe8(0x1)
	bool                                               bTurbulence                                        // 0xec(0x1)
	int                                                Levels                                             // 0xf0(0x4)
	float                                              OutputMin                                          // 0xf4(0x4)
	float                                              OutputMax                                          // 0xf8(0x4)
	float                                              LevelScale                                         // 0xfc(0x4)
};


// Size 0x38
class MaterialExpressionNormalize: public MaterialExpression
{
public:
	Struct ExpressionInput                             VectorInput                                        // 0x70(0x38)
};


// Size 0x0
class MaterialExpressionObjectBounds: public MaterialExpression
{
public:
};


// Size 0x0
class MaterialExpressionObjectOrientation: public MaterialExpression
{
public:
};


// Size 0x0
class MaterialExpressionObjectPositionWS: public MaterialExpression
{
public:
};


// Size 0x0
class MaterialExpressionObjectRadius: public MaterialExpression
{
public:
};


// Size 0x38
class MaterialExpressionOneMinus: public MaterialExpression
{
public:
	Struct ExpressionInput                             Input                                              // 0x70(0x38)
};


// Size 0x80
class MaterialExpressionPanner: public MaterialExpression
{
public:
	Struct ExpressionInput                             Coordinate                                         // 0x70(0x38)
	Struct ExpressionInput                             Time                                               // 0xa8(0x38)
	float                                              SpeedX                                             // 0xe0(0x4)
	float                                              SpeedY                                             // 0xe4(0x4)
	bool                                               bFractionalPart                                    // 0xec(0x1)
};


// Size 0x20
class MaterialExpressionParameter: public MaterialExpression
{
public:
	struct FName                                       ParameterName                                      // 0x70(0x8)
	Struct Guid                                        ExpressionGUID                                     // 0x78(0x10)
	struct FName                                       Group                                              // 0x88(0x8)
};


// Size 0x10
class MaterialExpressionScalarParameter: public MaterialExpressionParameter
{
public:
	float                                              DefaultValue                                       // 0x90(0x4)
	float                                              SliderMin                                          // 0x94(0x4)
	float                                              SliderMax                                          // 0x98(0x4)
	bool                                               bUseCustomPrimitiveData                            // 0x9c(0x1)
	byte                                               PrimitiveDataIndex                                 // 0x9d(0x1)
};


// Size 0x8
class MaterialExpressionStaticBoolParameter: public MaterialExpressionParameter
{
public:
	bool                                               DefaultValue                                       // 0x90(0x1)
};


// Size 0x70
class MaterialExpressionStaticSwitchParameter: public MaterialExpressionStaticBoolParameter
{
public:
	Struct ExpressionInput                             A                                                  // 0x98(0x38)
	Struct ExpressionInput                             B                                                  // 0xd0(0x38)
};


// Size 0x40
class MaterialExpressionStaticComponentMaskParameter: public MaterialExpressionParameter
{
public:
	Struct ExpressionInput                             Input                                              // 0x90(0x38)
	bool                                               DefaultR                                           // 0xc8(0x1)
	bool                                               DefaultG                                           // 0xc8(0x1)
	bool                                               DefaultB                                           // 0xc8(0x1)
	bool                                               DefaultA                                           // 0xc8(0x1)
};


// Size 0x18
class MaterialExpressionVectorParameter: public MaterialExpressionParameter
{
public:
	Struct LinearColor                                 DefaultValue                                       // 0x90(0x10)
	bool                                               bUseCustomPrimitiveData                            // 0xa0(0x1)
	byte                                               PrimitiveDataIndex                                 // 0xa1(0x1)
};


// Size 0x0
class MaterialExpressionParticleColor: public MaterialExpression
{
public:
};


// Size 0x0
class MaterialExpressionParticleDirection: public MaterialExpression
{
public:
};


// Size 0x0
class MaterialExpressionParticleMacroUV: public MaterialExpression
{
public:
};


// Size 0x0
class MaterialExpressionParticleMotionBlurFade: public MaterialExpression
{
public:
};


// Size 0x0
class MaterialExpressionParticlePositionWS: public MaterialExpression
{
public:
};


// Size 0x0
class MaterialExpressionParticleRadius: public MaterialExpression
{
public:
};


// Size 0x0
class MaterialExpressionParticleRelativeTime: public MaterialExpression
{
public:
};


// Size 0x0
class MaterialExpressionParticleSize: public MaterialExpression
{
public:
};


// Size 0x0
class MaterialExpressionParticleSpeed: public MaterialExpression
{
public:
};


// Size 0x0
class MaterialExpressionPerInstanceFadeAmount: public MaterialExpression
{
public:
};


// Size 0x0
class MaterialExpressionPerInstanceRandom: public MaterialExpression
{
public:
};


// Size 0x0
class MaterialExpressionPixelDepth: public MaterialExpression
{
public:
};


// Size 0x0
class MaterialExpressionPixelNormalWS: public MaterialExpression
{
public:
};


// Size 0x78
class MaterialExpressionPower: public MaterialExpression
{
public:
	Struct ExpressionInput                             Base                                               // 0x70(0x38)
	Struct ExpressionInput                             Exponent                                           // 0xa8(0x38)
	float                                              ConstExponent                                      // 0xe0(0x4)
};


// Size 0x0
class MaterialExpressionPrecomputedAOMask: public MaterialExpression
{
public:
};


// Size 0xe0
class MaterialExpressionQualitySwitch: public MaterialExpression
{
public:
	Struct ExpressionInput                             Default                                            // 0x70(0x38)
	Struct ExpressionInput                             Inputs                                             // 0xa8(0x38)
};


// Size 0x40
class MaterialExpressionReflectionVectorWS: public MaterialExpression
{
public:
	Struct ExpressionInput                             CustomWorldNormal                                  // 0x70(0x38)
	bool                                               bNormalizeCustomWorldNormal                        // 0xa8(0x1)
};


// Size 0xe8
class MaterialExpressionRotateAboutAxis: public MaterialExpression
{
public:
	Struct ExpressionInput                             NormalizedRotationAxis                             // 0x70(0x38)
	Struct ExpressionInput                             RotationAngle                                      // 0xa8(0x38)
	Struct ExpressionInput                             PivotPoint                                         // 0xe0(0x38)
	Struct ExpressionInput                             Position                                           // 0x118(0x38)
	float                                              Period                                             // 0x150(0x4)
};


// Size 0x80
class MaterialExpressionRotator: public MaterialExpression
{
public:
	Struct ExpressionInput                             Coordinate                                         // 0x70(0x38)
	Struct ExpressionInput                             Time                                               // 0xa8(0x38)
	float                                              CenterX                                            // 0xe0(0x4)
	float                                              CenterY                                            // 0xe4(0x4)
	float                                              Speed                                              // 0xe8(0x4)
};


// Size 0x80
class MaterialExpressionSceneColor: public MaterialExpression
{
public:
	byte                                               InputMode                                          // 0x70(0x1)
	Struct ExpressionInput                             Input                                              // 0x78(0x38)
	Struct ExpressionInput                             OffsetFraction                                     // 0xb0(0x38)
	Struct Vector2D                                    ConstInput                                         // 0xe8(0x8)
};


// Size 0x80
class MaterialExpressionSceneDepth: public MaterialExpression
{
public:
	byte                                               InputMode                                          // 0x70(0x1)
	Struct ExpressionInput                             Input                                              // 0x78(0x38)
	Struct ExpressionInput                             Coordinates                                        // 0xb0(0x38)
	Struct Vector2D                                    ConstInput                                         // 0xe8(0x8)
};


// Size 0x0
class MaterialExpressionSceneTexelSize: public MaterialExpression
{
public:
};


// Size 0x40
class MaterialExpressionSceneTexture: public MaterialExpression
{
public:
	Struct ExpressionInput                             Coordinates                                        // 0x70(0x38)
	byte                                               SceneTextureId                                     // 0xa8(0x1)
	bool                                               bClampUVs                                          // 0xa9(0x1)
	bool                                               bFiltered                                          // 0xaa(0x1)
};


// Size 0x0
class MaterialExpressionScreenPosition: public MaterialExpression
{
public:
};


// Size 0x40
class MaterialExpressionSine: public MaterialExpression
{
public:
	Struct ExpressionInput                             Input                                              // 0x70(0x38)
	float                                              Period                                             // 0xa8(0x4)
};


// Size 0x10
class MaterialExpressionSpeedTree: public MaterialExpression
{
public:
	byte                                               GeometryType                                       // 0x70(0x1)
	byte                                               WindType                                           // 0x71(0x1)
	byte                                               LODType                                            // 0x72(0x1)
	float                                              BillboardThreshold                                 // 0x74(0x4)
	bool                                               bAccurateWindVelocities                            // 0x78(0x1)
};


// Size 0xe8
class MaterialExpressionSphereMask: public MaterialExpression
{
public:
	Struct ExpressionInput                             A                                                  // 0x70(0x38)
	Struct ExpressionInput                             B                                                  // 0xa8(0x38)
	Struct ExpressionInput                             Radius                                             // 0xe0(0x38)
	Struct ExpressionInput                             Hardness                                           // 0x118(0x38)
	float                                              AttenuationRadius                                  // 0x150(0x4)
	float                                              HardnessPercent                                    // 0x154(0x4)
};


// Size 0x40
class MaterialExpressionSphericalParticleOpacity: public MaterialExpression
{
public:
	Struct ExpressionInput                             Density                                            // 0x70(0x38)
	float                                              ConstantDensity                                    // 0xa8(0x4)
};


// Size 0x38
class MaterialExpressionSquareRoot: public MaterialExpression
{
public:
	Struct ExpressionInput                             Input                                              // 0x70(0x38)
};


// Size 0x8
class MaterialExpressionStaticBool: public MaterialExpression
{
public:
	bool                                               Value                                              // 0x70(0x1)
};


// Size 0xb0
class MaterialExpressionStaticSwitch: public MaterialExpression
{
public:
	bool                                               DefaultValue                                       // 0x70(0x1)
	Struct ExpressionInput                             A                                                  // 0x78(0x38)
	Struct ExpressionInput                             B                                                  // 0xb0(0x38)
	Struct ExpressionInput                             Value                                              // 0xe8(0x38)
};


// Size 0x78
class MaterialExpressionSubtract: public MaterialExpression
{
public:
	Struct ExpressionInput                             A                                                  // 0x70(0x38)
	Struct ExpressionInput                             B                                                  // 0xa8(0x38)
	float                                              ConstA                                             // 0xe0(0x4)
	float                                              ConstB                                             // 0xe4(0x4)
};


// Size 0x10
class MaterialExpressionTextureBase: public MaterialExpression
{
public:
	Class Texture*                                     Texture                                            // 0x70(0x8)
	byte                                               SamplerType                                        // 0x78(0x1)
	bool                                               IsDefaultMeshpaintTexture                          // 0x7c(0x1)
};


// Size 0x0
class MaterialExpressionTextureObject: public MaterialExpressionTextureBase
{
public:
};


// Size 0x128
class MaterialExpressionTextureSample: public MaterialExpressionTextureBase
{
public:
	Struct ExpressionInput                             Coordinates                                        // 0x80(0x38)
	Struct ExpressionInput                             TextureObject                                      // 0xb8(0x38)
	Struct ExpressionInput                             MipValue                                           // 0xf0(0x38)
	Struct ExpressionInput                             CoordinatesDX                                      // 0x128(0x38)
	Struct ExpressionInput                             CoordinatesDY                                      // 0x160(0x38)
	byte                                               MipValueMode                                       // 0x198(0x1)
	byte                                               SamplerSource                                      // 0x199(0x1)
	int                                                ConstMipValue                                      // 0x1a0(0x4)
};


// Size 0x8
class MaterialExpressionParticleSubUV: public MaterialExpressionTextureSample
{
public:
	bool                                               bBlend                                             // 0x1a8(0x1)
	bool                                               bMipBiasOnLowResolution                            // 0x1a8(0x1)
};


// Size 0x40
class MaterialExpressionPredicatedTextureSample: public MaterialExpressionTextureSample
{
public:
	Struct ExpressionInput                             Predicate                                          // 0x1a8(0x38)
	Struct Color                                       DefaultColour                                      // 0x1e0(0x4)
};


// Size 0x20
class MaterialExpressionTextureSampleParameter: public MaterialExpressionTextureSample
{
public:
	struct FName                                       ParameterName                                      // 0x1a8(0x8)
	Struct Guid                                        ExpressionGUID                                     // 0x1b0(0x10)
	struct FName                                       Group                                              // 0x1c0(0x8)
};


// Size 0x0
class MaterialExpressionTextureObjectParameter: public MaterialExpressionTextureSampleParameter
{
public:
};


// Size 0x0
class MaterialExpressionTextureSampleParameter2D: public MaterialExpressionTextureSampleParameter
{
public:
};


// Size 0x8
class MaterialExpressionAntialiasedTextureMask: public MaterialExpressionTextureSampleParameter2D
{
public:
	float                                              Threshold                                          // 0x1c8(0x4)
	byte                                               Channel                                            // 0x1cc(0x1)
};


// Size 0x40
class MaterialExpressionPredicatedTextureSampleParameter2D: public MaterialExpressionTextureSampleParameter2D
{
public:
	Struct ExpressionInput                             Predicate                                          // 0x1c8(0x38)
	Struct Color                                       DefaultColour                                      // 0x200(0x4)
};


// Size 0x8
class MaterialExpressionTextureSampleParameterSubUV: public MaterialExpressionTextureSampleParameter2D
{
public:
	bool                                               bBlend                                             // 0x1c8(0x1)
	bool                                               bMipBiasOnLowResolution                            // 0x1c8(0x1)
};


// Size 0x0
class MaterialExpressionTextureSampleParameterCube: public MaterialExpressionTextureSampleParameter
{
public:
};


// Size 0x10
class MaterialExpressionTextureCoordinate: public MaterialExpression
{
public:
	int                                                CoordinateIndex                                    // 0x70(0x4)
	float                                              UTiling                                            // 0x74(0x4)
	float                                              VTiling                                            // 0x78(0x4)
	bool                                               UnMirrorU                                          // 0x7c(0x1)
	bool                                               UnMirrorV                                          // 0x7c(0x1)
};


// Size 0x8
class MaterialExpressionTime: public MaterialExpression
{
public:
	bool                                               bIgnorePause                                       // 0x70(0x1)
	bool                                               bOverride_Period                                   // 0x70(0x1)
	float                                              Period                                             // 0x74(0x4)
};


// Size 0x40
class MaterialExpressionTransform: public MaterialExpression
{
public:
	Struct ExpressionInput                             Input                                              // 0x70(0x38)
	byte                                               TransformSourceType                                // 0xa8(0x1)
	byte                                               TransformType                                      // 0xa9(0x1)
};


// Size 0x40
class MaterialExpressionTransformPosition: public MaterialExpression
{
public:
	Struct ExpressionInput                             Input                                              // 0x70(0x38)
	byte                                               TransformSourceType                                // 0xa8(0x1)
	byte                                               TransformType                                      // 0xa9(0x1)
};


// Size 0x0
class MaterialExpressionTwoSidedSign: public MaterialExpression
{
public:
};


// Size 0x38
class MaterialExpressionUnderwaterTranslucencyTexture: public MaterialExpression
{
public:
	Struct ExpressionInput                             Coordinates                                        // 0x70(0x38)
};


// Size 0x0
class MaterialExpressionVertexColor: public MaterialExpression
{
public:
};


// Size 0x0
class MaterialExpressionVertexID: public MaterialExpression
{
public:
};


// Size 0x0
class MaterialExpressionVertexNormalWS: public MaterialExpression
{
public:
};


// Size 0x8
class MaterialExpressionViewProperty: public MaterialExpression
{
public:
	byte                                               Property                                           // 0x70(0x1)
};


// Size 0x0
class MaterialExpressionViewSize: public MaterialExpression
{
public:
};


// Size 0x8
class MaterialExpressionWorldPosition: public MaterialExpression
{
public:
	byte                                               WorldPositionShaderOffset                          // 0x70(0x1)
};


// Size 0x50
class MaterialFunction: public Object
{
public:
	Struct Guid                                        StateId                                            // 0x28(0x10)
	Struct FString                                     Description                                        // 0x38(0x10)
	bool                                               bExposeToLibrary                                   // 0x48(0x1)
	TArray<Struct FText>                               LibraryCategoriesText                              // 0x50(0x10)
	TArray<class FunctionExpressions*>                 FunctionExpressions                                // 0x60(0x10)
	bool                                               bReentrantFlag                                     // 0x70(0x1)
};


// Size 0x0
class MaterialInstanceDynamic: public MaterialInstance
{
public:
};


// Size 0x38
class MaterialParameterCollection: public Object
{
public:
	Struct Guid                                        StateId                                            // 0x28(0x10)
	TArray<Struct StateId>                             ScalarParameters                                   // 0x38(0x10)
	TArray<Struct ScalarParameters>                    VectorParameters                                   // 0x48(0x10)
};


// Size 0xc8
class MaterialParameterCollectionInstance: public Object
{
public:
	Class MaterialParameterCollection*                 Collection                                         // 0x30(0x8)
	Class World*                                       World                                              // 0x38(0x8)
};


// Size 0x0
class MatineeInterface: public Interface
{
public:
};


// Size 0x58
class Texture2D: public Texture
{
public:
	int                                                RequestedMips                                      // 0x138(0x4)
	int                                                ResidentMips                                       // 0x13c(0x4)
	int                                                StreamingIndex                                     // 0x140(0x4)
	int                                                FirstResourceMemMip                                // 0x144(0x4)
	Struct IntPoint                                    ImportedSize                                       // 0x14c(0x8)
	float                                              ForceMipLevelsToBeResidentTimestamp                // 0x154(0x4)
	bool                                               bTemporarilyDisableStreaming                       // 0x158(0x1)
	bool                                               bIsStreamable                                      // 0x158(0x1)
	bool                                               bHasCancelationPending                             // 0x158(0x1)
	bool                                               bForceMiplevelsToBeResident                        // 0x158(0x1)
	bool                                               bGlobalForceMipLevelsToBeResident                  // 0x158(0x1)
	byte                                               AddressX                                           // 0x15c(0x1)
	byte                                               AddressY                                           // 0x15d(0x1)
	int                                                MinimumLoadedMips                                  // 0x160(0x4)
};


// Size 0x18
class CanvasRenderTarget2D: public TextureRenderTarget2D
{
public:
};


// Size 0x18
class CompressedCanvasRenderTarget2D: public Texture2D
{
public:
	Class CanvasRenderTarget2D*                        RenderTarget                                       // 0x198(0x8)
};


// Size 0x20
class MaybeCompressedCanvasRenderTarget2D: public Object
{
public:
	Class CanvasRenderTarget2D*                        UncompressedRenderTarget                           // 0x38(0x8)
	Class CompressedCanvasRenderTarget2D*              CompressedRenderTarget                             // 0x40(0x8)
};


// Size 0x0
class NavArea_Default: public NavArea
{
public:
};


// Size 0x0
class NavArea_LowHeight: public NavArea
{
public:
};


// Size 0x0
class NavArea_Null: public NavArea
{
public:
};


// Size 0x0
class NavArea_Obstacle: public NavArea
{
public:
};


// Size 0x0
class NavAreaMeta: public NavArea
{
public:
};


// Size 0x80
class NavAreaMeta_SwitchByAgent: public NavAreaMeta
{
public:
	class                                              Agent0Area                                         // 0x40(0x8)
	class                                              Agent1Area                                         // 0x48(0x8)
	class                                              Agent2Area                                         // 0x50(0x8)
	class                                              Agent3Area                                         // 0x58(0x8)
	class                                              Agent4Area                                         // 0x60(0x8)
	class                                              Agent5Area                                         // 0x68(0x8)
	class                                              Agent6Area                                         // 0x70(0x8)
	class                                              Agent7Area                                         // 0x78(0x8)
	class                                              Agent8Area                                         // 0x80(0x8)
	class                                              Agent9Area                                         // 0x88(0x8)
	class                                              Agent10Area                                        // 0x90(0x8)
	class                                              Agent11Area                                        // 0x98(0x8)
	class                                              Agent12Area                                        // 0xa0(0x8)
	class                                              Agent13Area                                        // 0xa8(0x8)
	class                                              Agent14Area                                        // 0xb0(0x8)
	class                                              Agent15Area                                        // 0xb8(0x8)
};


// Size 0xe8
class NavCollision: public Object
{
public:
	TArray<Struct NavigationDataName>                  CylinderCollision                                  // 0x78(0x10)
	TArray<Struct CylinderCollision>                   BoxCollision                                       // 0x88(0x10)
	class                                              AreaClass                                          // 0x98(0x8)
	bool                                               bIsDynamicObstacle                                 // 0xa0(0x1)
	bool                                               bGatherConvexGeometry                              // 0xa0(0x1)
};


// Size 0x8
class NavigationDataChunk: public Object
{
public:
	struct FName                                       NavigationDataName                                 // 0x28(0x8)
};


// Size 0x10
class RecastNavMeshDataChunk: public NavigationDataChunk
{
public:
};


// Size 0x60
class NavigationPath: public Object
{
public:
	TArray<Struct PathUpdatedNotifier>                 PathPoints                                         // 0x38(0x10)
	byte                                               RecalculateOnInvalidation                          // 0x48(0x1)
};


// Size 0x0
class NavigationPathGenerator: public Interface
{
public:
};


// Size 0x0
class RecastFilter_UseDefaultArea: public NavigationQueryFilter
{
public:
};


// Size 0x0
class NavLinkTrivial: public NavLinkDefinition
{
public:
};


// Size 0x0
class NavNodeInterface: public Interface
{
public:
};


// Size 0xd8
class DemoNetDriver: public NetDriver
{
public:
};


// Size 0x0
class NetPhysicsInterpolatorInterface: public Interface
{
public:
};


// Size 0x48
class ObjectLibrary: public Object
{
public:
	class                                              ObjectBaseClass                                    // 0x28(0x8)
	bool                                               bHasBlueprintClasses                               // 0x30(0x1)
	TArray<class Objects*>                             Objects                                            // 0x38(0x10)
	TArray<Weakclass Objects>                          WeakObjects                                        // 0x48(0x10)
	bool                                               bUseWeakReferences                                 // 0x58(0x1)
	bool                                               bIsFullyLoaded                                     // 0x59(0x1)
};


// Size 0x10
class ObjectReferencer: public Object
{
public:
	TArray<class ReferencedObjects*>                   ReferencedObjects                                  // 0x28(0x10)
};


// Size 0x1a8
class PackageMapClient: public PackageMap
{
public:
};


// Size 0x88
class ParticleEmitter: public Object
{
public:
	struct FName                                       EmitterName                                        // 0x28(0x8)
	int                                                SubUVDataOffset                                    // 0x30(0x4)
	byte                                               EmitterRenderMode                                  // 0x34(0x1)
	TArray<class LODLevels*>                           LODLevels                                          // 0x38(0x10)
	bool                                               ConvertedModules                                   // 0x48(0x1)
	int                                                PeakActiveParticles                                // 0x4c(0x4)
	int                                                InitialAllocationCount                             // 0x50(0x4)
	float                                              MediumDetailSpawnRateScale                         // 0x54(0x4)
	float                                              QualityLevelSpawnRateScale                         // 0x58(0x4)
	byte                                               DetailMode                                         // 0x5c(0x1)
	byte                                               MaxEmitterQuality                                  // 0x5d(0x1)
	byte                                               MinEmitterQuality                                  // 0x5e(0x1)
	bool                                               bIsSoloing                                         // 0x60(0x1)
	bool                                               bCookedOut                                         // 0x60(0x1)
	bool                                               bDisabledLODsKeepEmitterAlive                      // 0x60(0x1)
	bool                                               bHasAnyEnabledLODs                                 // 0x60(0x1)
	bool                                               bHasAnyEnabledLODsValid                            // 0x60(0x1)
	TArray<class ModulesNeedingInstanceData*>          ModulesNeedingInstanceData                         // 0xa0(0x10)
};


// Size 0x0
class ParticleSpriteEmitter: public ParticleEmitter
{
public:
};


// Size 0x90
class ParticleLODLevel: public Object
{
public:
	int                                                Level                                              // 0x28(0x4)
	bool                                               bEnabled                                           // 0x2c(0x1)
	Class ParticleModuleRequired*                      RequiredModule                                     // 0x30(0x8)
	TArray<class Modules*>                             Modules                                            // 0x38(0x10)
	Class ParticleModule*                              TypeDataModule                                     // 0x48(0x8)
	Class ParticleModuleSpawn*                         SpawnModule                                        // 0x50(0x8)
	Class ParticleModuleEventGenerator*                EventGenerator                                     // 0x58(0x8)
	TArray<class SpawningModules*>                     SpawningModules                                    // 0x60(0x10)
	TArray<class SpawnModules*>                        SpawnModules                                       // 0x70(0x10)
	TArray<class UpdateModules*>                       UpdateModules                                      // 0x80(0x10)
	TArray<class OrbitModules*>                        OrbitModules                                       // 0x90(0x10)
	TArray<class EventReceiverModules*>                EventReceiverModules                               // 0xa0(0x10)
	bool                                               ConvertedModules                                   // 0xb0(0x1)
	int                                                PeakActiveParticles                                // 0xb4(0x4)
};


// Size 0x28
class ParticleModule: public Object
{
public:
	bool                                               bSpawnModule                                       // 0x28(0x1)
	bool                                               bUpdateModule                                      // 0x28(0x1)
	bool                                               bFinalUpdateModule                                 // 0x28(0x1)
	bool                                               bUpdateForGPUEmitter                               // 0x28(0x1)
	bool                                               bCurvesAsColor                                     // 0x28(0x1)
	bool                                               b3DDrawMode                                        // 0x28(0x1)
	bool                                               bSupported3DDrawMode                               // 0x28(0x1)
	bool                                               bEnabled                                           // 0x28(0x1)
	bool                                               bEditable                                          // 0x29(0x1)
	bool                                               LODDuplicate                                       // 0x29(0x1)
	bool                                               bSupportsRandomSeed                                // 0x29(0x1)
	bool                                               bRequiresLoopingNotification                       // 0x29(0x1)
	byte                                               LODValidity                                        // 0x2c(0x1)
	TArray<Int >                                       ModuleInstanceOffsets                              // 0x30(0x10)
	TArray<Int >                                       ModuleOffsets                                      // 0x40(0x10)
};


// Size 0x8
class ParticleModuleAccelerationBase: public ParticleModule
{
public:
	bool                                               bAlwaysInWorldSpace                                // 0x50(0x1)
};


// Size 0x158
class ParticleModuleAcceleration: public ParticleModuleAccelerationBase
{
public:
	Struct RawDistributionVector                       Acceleration                                       // 0x58(0x38)
	Struct RawDistributionVector                       AdditionalAcceleration                             // 0x90(0x38)
	bool                                               bUseGroupAAccelerationForAllGroups                 // 0x1a8(0x1)
	bool                                               bApplyOwnerScale                                   // 0x1a8(0x1)
};


// Size 0x10
class ParticleModuleAccelerationConstant: public ParticleModuleAccelerationBase
{
public:
	Struct Vector                                      Acceleration                                       // 0x58(0xc)
};


// Size 0x70
class ParticleModuleAccelerationDrag: public ParticleModuleAccelerationBase
{
public:
	Class DistributionFloat*                           DragCoefficient                                    // 0x58(0x8)
	Class DistributionFloat*                           DragOnLocalVelocity                                // 0x60(0x8)
	bool                                               bUseGroupADragCoefficientForAllGroups              // 0x68(0x1)
	Class DistributionFloat*                           AdditionalDragCoefficient                          // 0x70(0x8)
	bool                                               bUseGroupADragOnLocalVelocityForAllGroups          // 0x98(0x1)
	Class DistributionFloat*                           AdditionalDragOnLocalVelocity                      // 0xa0(0x8)
};


// Size 0x10
class ParticleModuleAccelerationDragScaleOverLife: public ParticleModuleAccelerationBase
{
public:
	Class DistributionFloat*                           DragScale                                          // 0x58(0x8)
	Class DistributionFloat*                           DragLocalVelocityScale                             // 0x60(0x8)
};


// Size 0x40
class ParticleModuleAccelerationEmitterPoint: public ParticleModuleAccelerationBase
{
public:
	Struct RawDistributionFloat                        AccelerationScale                                  // 0x58(0x38)
	bool                                               bApplyOwnerScale                                   // 0x90(0x1)
};


// Size 0x38
class ParticleModuleAccelerationOverLifetime: public ParticleModuleAccelerationBase
{
public:
	Struct RawDistributionVector                       AccelOverLife                                      // 0x58(0x38)
};


// Size 0x0
class ParticleModuleAttractorBase: public ParticleModule
{
public:
};


// Size 0x88
class ParticleModuleAttractorLine: public ParticleModuleAttractorBase
{
public:
	Struct Vector                                      EndPoint0                                          // 0x50(0xc)
	Struct Vector                                      EndPoint1                                          // 0x5c(0xc)
	Struct RawDistributionFloat                        Range                                              // 0x68(0x38)
	Struct RawDistributionFloat                        Strength                                           // 0xa0(0x38)
};


// Size 0x90
class ParticleModuleAttractorParticle: public ParticleModuleAttractorBase
{
public:
	struct FName                                       EmitterName                                        // 0x50(0x8)
	Struct RawDistributionFloat                        Range                                              // 0x58(0x38)
	bool                                               bStrengthByDistance                                // 0x90(0x1)
	Struct RawDistributionFloat                        Strength                                           // 0x98(0x38)
	bool                                               bAffectBaseVelocity                                // 0xd0(0x1)
	byte                                               SelectionMethod                                    // 0xd4(0x1)
	bool                                               bRenewSource                                       // 0xd8(0x1)
	bool                                               bInheritSourceVel                                  // 0xd8(0x1)
	int                                                LastSelIndex                                       // 0xdc(0x4)
};


// Size 0xb0
class ParticleModuleAttractorPoint: public ParticleModuleAttractorBase
{
public:
	Struct RawDistributionVector                       Position                                           // 0x50(0x38)
	Struct RawDistributionFloat                        Range                                              // 0x88(0x38)
	Struct RawDistributionFloat                        Strength                                           // 0xc0(0x38)
	bool                                               StrengthByDistance                                 // 0xf8(0x1)
	bool                                               bAffectBaseVelocity                                // 0xf8(0x1)
	bool                                               bOverrideVelocity                                  // 0xf8(0x1)
	bool                                               bUseWorldSpacePosition                             // 0xf8(0x1)
	bool                                               Positive_X                                         // 0xf8(0x1)
	bool                                               Positive_Y                                         // 0xf8(0x1)
	bool                                               Positive_Z                                         // 0xf8(0x1)
	bool                                               Negative_X                                         // 0xf8(0x1)
	bool                                               Negative_Y                                         // 0xf9(0x1)
	bool                                               Negative_Z                                         // 0xf9(0x1)
};


// Size 0x18
class ParticleModuleAttractorPointGravity: public ParticleModuleAttractorBase
{
public:
	Struct Vector                                      Position                                           // 0x50(0xc)
	float                                              Radius                                             // 0x5c(0x4)
	Class DistributionFloat*                           Strength                                           // 0x60(0x8)
};


// Size 0x0
class ParticleModuleBeamBase: public ParticleModule
{
public:
};


// Size 0xc0
class ParticleModuleBeamModifier: public ParticleModuleBeamBase
{
public:
	byte                                               ModifierType                                       // 0x50(0x1)
	Struct BeamModifierOptions                         PositionOptions                                    // 0x54(0x4)
	Struct RawDistributionVector                       Position                                           // 0x58(0x38)
	Struct BeamModifierOptions                         TangentOptions                                     // 0x90(0x4)
	Struct RawDistributionVector                       Tangent                                            // 0x98(0x38)
	bool                                               bAbsoluteTangent                                   // 0xd0(0x1)
	Struct BeamModifierOptions                         StrengthOptions                                    // 0xd4(0x4)
	Struct RawDistributionFloat                        Strength                                           // 0xd8(0x38)
};


// Size 0x158
class ParticleModuleBeamNoise: public ParticleModuleBeamBase
{
public:
	bool                                               bLowFreq_Enabled                                   // 0x50(0x1)
	int                                                Frequency                                          // 0x54(0x4)
	int                                                Frequency_LowRange                                 // 0x58(0x4)
	Struct RawDistributionVector                       NoiseRange                                         // 0x60(0x38)
	Struct RawDistributionFloat                        NoiseRangeScale                                    // 0x98(0x38)
	bool                                               bNRScaleEmitterTime                                // 0xd0(0x1)
	Struct RawDistributionVector                       NoiseSpeed                                         // 0xd8(0x38)
	bool                                               bSmooth                                            // 0x110(0x1)
	float                                              NoiseLockRadius                                    // 0x114(0x4)
	bool                                               bNoiseLock                                         // 0x118(0x1)
	bool                                               bOscillate                                         // 0x118(0x1)
	float                                              NoiseLockTime                                      // 0x11c(0x4)
	float                                              NoiseTension                                       // 0x120(0x4)
	bool                                               bUseNoiseTangents                                  // 0x124(0x1)
	Struct RawDistributionFloat                        NoiseTangentStrength                               // 0x128(0x38)
	int                                                NoiseTessellation                                  // 0x160(0x4)
	bool                                               bTargetNoise                                       // 0x164(0x1)
	float                                              FrequencyDistance                                  // 0x168(0x4)
	bool                                               bApplyNoiseScale                                   // 0x16c(0x1)
	Struct RawDistributionFloat                        NoiseScale                                         // 0x170(0x38)
};


// Size 0xd0
class ParticleModuleBeamSource: public ParticleModuleBeamBase
{
public:
	byte                                               SourceMethod                                       // 0x50(0x1)
	struct FName                                       SourceName                                         // 0x54(0x8)
	bool                                               bSourceAbsolute                                    // 0x5c(0x1)
	Struct RawDistributionVector                       Source                                             // 0x60(0x38)
	bool                                               bLockSource                                        // 0x98(0x1)
	byte                                               SourceTangentMethod                                // 0x9c(0x1)
	Struct RawDistributionVector                       SourceTangent                                      // 0xa0(0x38)
	bool                                               bLockSourceTangent                                 // 0xd8(0x1)
	Struct RawDistributionFloat                        SourceStrength                                     // 0xe0(0x38)
	bool                                               bLockSourceStength                                 // 0x118(0x1)
};


// Size 0xd0
class ParticleModuleBeamTarget: public ParticleModuleBeamBase
{
public:
	byte                                               TargetMethod                                       // 0x50(0x1)
	struct FName                                       TargetName                                         // 0x54(0x8)
	Struct RawDistributionVector                       Target                                             // 0x60(0x38)
	bool                                               bTargetAbsolute                                    // 0x98(0x1)
	bool                                               bLockTarget                                        // 0x98(0x1)
	byte                                               TargetTangentMethod                                // 0x9c(0x1)
	Struct RawDistributionVector                       TargetTangent                                      // 0xa0(0x38)
	bool                                               bLockTargetTangent                                 // 0xd8(0x1)
	Struct RawDistributionFloat                        TargetStrength                                     // 0xe0(0x38)
	bool                                               bLockTargetStength                                 // 0x118(0x1)
	float                                              LockRadius                                         // 0x11c(0x4)
};


// Size 0x0
class ParticleModuleCameraBase: public ParticleModule
{
public:
};


// Size 0x40
class ParticleModuleCameraOffset: public ParticleModuleCameraBase
{
public:
	Struct RawDistributionFloat                        CameraOffset                                       // 0x50(0x38)
	bool                                               bSpawnTimeOnly                                     // 0x88(0x1)
	byte                                               UpdateMethod                                       // 0x8c(0x1)
};


// Size 0x0
class ParticleModuleCollisionBase: public ParticleModule
{
public:
};


// Size 0x150
class ParticleModuleCollision: public ParticleModuleCollisionBase
{
public:
	Struct RawDistributionVector                       DampingFactor                                      // 0x50(0x38)
	Struct RawDistributionVector                       DampingFactorRotation                              // 0x88(0x38)
	Struct RawDistributionFloat                        MaxCollisions                                      // 0xc0(0x38)
	byte                                               CollisionCompletionOption                          // 0xf8(0x1)
	TArray<Byte CollisionCompletionOption>             CollisionTypes                                     // 0x100(0x10)
	bool                                               bApplyPhysics                                      // 0x114(0x1)
	Struct RawDistributionFloat                        ParticleMass                                       // 0x118(0x38)
	float                                              DirScalar                                          // 0x150(0x4)
	bool                                               bPawnsDoNotDecrementCount                          // 0x154(0x1)
	bool                                               bOnlyVerticalNormalsDecrementCount                 // 0x154(0x1)
	float                                              VerticalFudgeFactor                                // 0x158(0x4)
	Struct RawDistributionFloat                        DelayAmount                                        // 0x160(0x38)
	bool                                               bDropDetail                                        // 0x198(0x1)
	bool                                               bCollideOnlyIfVisible                              // 0x198(0x1)
	bool                                               bIgnoreSourceActor                                 // 0x198(0x1)
	bool                                               bIgnoreCollisionsWithHiddenObjects                 // 0x198(0x1)
	float                                              MaxCollisionDistance                               // 0x19c(0x4)
};


// Size 0x88
class ParticleModuleCollisionGPU: public ParticleModuleCollisionBase
{
public:
	Struct RawDistributionFloat                        Resilience                                         // 0x50(0x38)
	Struct RawDistributionFloat                        ResilienceScaleOverLife                            // 0x88(0x38)
	float                                              DampingFactorRotation                              // 0xc0(0x4)
	float                                              Friction                                           // 0xc4(0x4)
	float                                              RadiusScale                                        // 0xc8(0x4)
	float                                              RadiusBias                                         // 0xcc(0x4)
	byte                                               Response                                           // 0xd0(0x1)
	byte                                               CollisionMode                                      // 0xd1(0x1)
};


// Size 0x0
class ParticleModuleColorBase: public ParticleModule
{
public:
};


// Size 0x2b8
class ParticleModuleColor: public ParticleModuleColorBase
{
public:
	bool                                               bUseGroupAColorForAllGroups                        // 0x50(0x1)
	Struct RawDistributionVector                       StartColor                                         // 0x58(0x38)
	Struct RawDistributionVector                       AdditionalStartColor                               // 0x90(0x38)
	bool                                               bUseGroupAAlphaForAllGroups                        // 0x1a8(0x1)
	Struct RawDistributionFloat                        StartAlpha                                         // 0x1b0(0x38)
	Struct RawDistributionFloat                        AdditionalStartAlpha                               // 0x1e8(0x38)
	bool                                               bClampAlpha                                        // 0x300(0x1)
	bool                                               bIgnoreComponentColorTint                          // 0x300(0x1)
};


// Size 0x20
class ParticleModuleColor_Seeded: public ParticleModuleColor
{
public:
	Struct ParticleRandomSeedInfo                      RandomSeedInfo                                     // 0x308(0x20)
};


// Size 0x78
class ParticleModuleColorOverLife: public ParticleModuleColorBase
{
public:
	Struct RawDistributionVector                       ColorOverLife                                      // 0x50(0x38)
	Struct RawDistributionFloat                        AlphaOverLife                                      // 0x88(0x38)
	bool                                               bClampAlpha                                        // 0xc0(0x1)
};


// Size 0x78
class ParticleModuleColorScaleOverLife: public ParticleModuleColorBase
{
public:
	Struct RawDistributionVector                       ColorScaleOverLife                                 // 0x50(0x38)
	Struct RawDistributionFloat                        AlphaScaleOverLife                                 // 0x88(0x38)
	bool                                               bEmitterTime                                       // 0xc0(0x1)
};


// Size 0x10
class ParticleModuleMurkyColor: public ParticleModuleColorBase
{
public:
	Struct LinearColor                                 ColorScale                                         // 0x50(0x10)
};


// Size 0x0
class ParticleModuleEventBase: public ParticleModule
{
public:
};


// Size 0x10
class ParticleModuleEventGenerator: public ParticleModuleEventBase
{
public:
	TArray<Struct Events>                              Events                                             // 0x50(0x10)
};


// Size 0x10
class ParticleModuleEventGeneratorGPU: public ParticleModuleEventBase
{
public:
	TArray<Struct EventName>                           Events                                             // 0x50(0x10)
};


// Size 0x10
class ParticleModuleEventReceiverBase: public ParticleModuleEventBase
{
public:
	byte                                               EventGeneratorType                                 // 0x50(0x1)
	struct FName                                       EventName                                          // 0x54(0x8)
};


// Size 0x8
class ParticleModuleEventReceiverKillParticles: public ParticleModuleEventReceiverBase
{
public:
	bool                                               bStopSpawning                                      // 0x60(0x1)
};


// Size 0x190
class ParticleModuleEventReceiverSpawn: public ParticleModuleEventReceiverBase
{
public:
	Struct RawDistributionFloat                        SpawnCount                                         // 0x60(0x38)
	Struct RawDistributionFloat                        AdditionalSpawnCounts                              // 0x98(0x38)
	bool                                               bUseGroupAForAll                                   // 0x1b0(0x1)
	bool                                               bUseParticleTime                                   // 0x1b0(0x1)
	bool                                               bUsePSysLocation                                   // 0x1b0(0x1)
	bool                                               bInheritVelocity                                   // 0x1b0(0x1)
	Struct RawDistributionVector                       InheritVelocityScale                               // 0x1b8(0x38)
};


// Size 0x0
class ParticleModuleKillBase: public ParticleModule
{
public:
};


// Size 0x78
class ParticleModuleKillBox: public ParticleModuleKillBase
{
public:
	Struct RawDistributionVector                       LowerLeftCorner                                    // 0x50(0x38)
	Struct RawDistributionVector                       UpperRightCorner                                   // 0x88(0x38)
	bool                                               bAbsolute                                          // 0xc0(0x1)
	bool                                               bKillInside                                        // 0xc0(0x1)
	bool                                               bAxisAlignedAndFixedSize                           // 0xc0(0x1)
};


// Size 0x40
class ParticleModuleKillHeight: public ParticleModuleKillBase
{
public:
	Struct RawDistributionFloat                        Height                                             // 0x50(0x38)
	bool                                               bAbsolute                                          // 0x88(0x1)
	bool                                               bFloor                                             // 0x88(0x1)
	bool                                               bApplyPSysScale                                    // 0x88(0x1)
};


// Size 0x10
class ParticleModuleKillOnFFTWater: public ParticleModuleKillBase
{
public:
	byte                                               FFTWaterKillPointLocation                          // 0x50(0x1)
	bool                                               bUseGroupAFFTWaterKillPointForAllGroups            // 0x54(0x1)
	byte                                               AdditionalFFTWaterKillPointLocations               // 0x58(0x1)
};


// Size 0x0
class ParticleModuleLifetimeBase: public ParticleModule
{
public:
};


// Size 0x170
class ParticleModuleLifetime: public ParticleModuleLifetimeBase
{
public:
	bool                                               bUseGroupAValuesForAllGroups                       // 0x50(0x1)
	Struct RawDistributionFloat                        LifeTime                                           // 0x58(0x38)
	Struct RawDistributionFloat                        AdditionalLifetimes                                // 0x90(0x38)
};


// Size 0x20
class ParticleModuleLifetime_Seeded: public ParticleModuleLifetime
{
public:
	Struct ParticleRandomSeedInfo                      RandomSeedInfo                                     // 0x1c0(0x20)
};


// Size 0x0
class ParticleModuleLightBase: public ParticleModule
{
public:
};


// Size 0xe8
class ParticleModuleLight: public ParticleModuleLightBase
{
public:
	bool                                               bUseInverseSquaredFalloff                          // 0x50(0x1)
	bool                                               bAffectsTranslucency                               // 0x51(0x1)
	bool                                               bIgnoreComponentTint                               // 0x52(0x1)
	bool                                               bPreviewLightRadius                                // 0x53(0x1)
	float                                              SpawnFraction                                      // 0x54(0x4)
	Struct RawDistributionVector                       ColorScaleOverLife                                 // 0x58(0x38)
	Struct RawDistributionFloat                        BrightnessOverLife                                 // 0x90(0x38)
	Struct RawDistributionFloat                        RadiusScale                                        // 0xc8(0x38)
	Struct RawDistributionFloat                        LightExponent                                      // 0x100(0x38)
};


// Size 0x20
class ParticleModuleLight_Seeded: public ParticleModuleLight
{
public:
	Struct ParticleRandomSeedInfo                      RandomSeedInfo                                     // 0x138(0x20)
};


// Size 0x0
class ParticleModuleLocationBase: public ParticleModule
{
public:
};


// Size 0x128
class ParticleModuleLocation: public ParticleModuleLocationBase
{
public:
	Struct RawDistributionVector                       StartLocation                                      // 0x50(0x38)
	Struct RawDistributionVector                       AdditionalStartLocations                           // 0x88(0x38)
	bool                                               StartLocationUseGroupAForAll                       // 0x168(0x1)
	float                                              DistributeOverNPoints                              // 0x16c(0x4)
	float                                              DistributeThreshold                                // 0x170(0x4)
};


// Size 0x20
class ParticleModuleLocation_Seeded: public ParticleModuleLocation
{
public:
	Struct ParticleRandomSeedInfo                      RandomSeedInfo                                     // 0x178(0x20)
};


// Size 0x0
class ParticleModuleLocationWorldOffset: public ParticleModuleLocation
{
public:
};


// Size 0x20
class ParticleModuleLocationWorldOffset_Seeded: public ParticleModuleLocationWorldOffset
{
public:
	Struct ParticleRandomSeedInfo                      RandomSeedInfo                                     // 0x178(0x20)
};


// Size 0x40
class ParticleModuleLocationBoneSocket: public ParticleModuleLocationBase
{
public:
	byte                                               SourceType                                         // 0x50(0x1)
	Struct Vector                                      UniversalOffset                                    // 0x54(0xc)
	TArray<Struct UniversalOffset>                     SourceLocations                                    // 0x60(0x10)
	byte                                               SelectionMethod                                    // 0x70(0x1)
	bool                                               bUpdatePositionEachFrame                           // 0x74(0x1)
	bool                                               bOrientMeshEmitters                                // 0x74(0x1)
	bool                                               bInheritBoneVelocity                               // 0x74(0x1)
	Struct Vector                                      InheritVelocityScale                               // 0x78(0xc)
	float                                              InheritedSpeedCap                                  // 0x84(0x4)
	struct FName                                       SkelMeshActorParamName                             // 0x88(0x8)
};


// Size 0xe0
class ParticleModuleLocationDirect: public ParticleModuleLocationBase
{
public:
	Struct RawDistributionVector                       Location                                           // 0x50(0x38)
	Struct RawDistributionVector                       LocationOffset                                     // 0x88(0x38)
	Struct RawDistributionVector                       ScaleFactor                                        // 0xc0(0x38)
	Struct RawDistributionVector                       Direction                                          // 0xf8(0x38)
};


// Size 0x50
class ParticleModuleLocationEmitter: public ParticleModuleLocationBase
{
public:
	struct FName                                       EmitterName                                        // 0x50(0x8)
	byte                                               SelectionMethod                                    // 0x58(0x1)
	bool                                               InheritSourceVelocity                              // 0x5c(0x1)
	Struct RawDistributionFloat                        InheritSourceVelocityScaleDistribution             // 0x60(0x38)
	bool                                               bInheritSourceRotation                             // 0x98(0x1)
	float                                              InheritSourceRotationScale                         // 0x9c(0x4)
};


// Size 0x8
class ParticleModuleLocationEmitterDirect: public ParticleModuleLocationBase
{
public:
	struct FName                                       EmitterName                                        // 0x50(0x8)
};


// Size 0x158
class ParticleModuleLocationGPU: public ParticleModuleLocationBase
{
public:
	Struct RawDistributionVector                       StartLocation                                      // 0x50(0x38)
	Struct RawDistributionVector                       AdditionalStartLocations                           // 0x88(0x38)
	bool                                               bUseGroupAStartLocationForAllGroups                // 0x1a0(0x1)
};


// Size 0x78
class ParticleModuleLocationPrimitiveBase: public ParticleModuleLocationBase
{
public:
	bool                                               Positive_X                                         // 0x50(0x1)
	bool                                               Positive_Y                                         // 0x50(0x1)
	bool                                               Positive_Z                                         // 0x50(0x1)
	bool                                               Negative_X                                         // 0x50(0x1)
	bool                                               Negative_Y                                         // 0x50(0x1)
	bool                                               Negative_Z                                         // 0x50(0x1)
	bool                                               SurfaceOnly                                        // 0x50(0x1)
	bool                                               Velocity                                           // 0x50(0x1)
	Struct RawDistributionFloat                        VelocityScale                                      // 0x58(0x38)
	Struct RawDistributionVector                       StartLocation                                      // 0x90(0x38)
};


// Size 0x8
class ParticleModuleLocationComputeShaderOutput: public ParticleModuleLocationPrimitiveBase
{
public:
	Class ParticleComputeShaderData*                   PositionData                                       // 0xc8(0x8)
};


// Size 0x280
class ParticleModuleLocationPrimitiveCylinder: public ParticleModuleLocationPrimitiveBase
{
public:
	bool                                               RadialVelocity                                     // 0xc8(0x1)
	Struct RawDistributionFloat                        StartRadius                                        // 0xd0(0x38)
	Struct RawDistributionFloat                        AdditionalStartRadiuses                            // 0x108(0x38)
	bool                                               StartRadiusUseGroupAForAll                         // 0x1e8(0x1)
	Struct Vector2D                                    RadiusScale                                        // 0x1ec(0x8)
	Struct RawDistributionFloat                        StartHeight                                        // 0x1f8(0x38)
	bool                                               StartHeightUseGroupAForAll                         // 0x230(0x1)
	Struct RawDistributionFloat                        AdditionalStartHeights                             // 0x238(0x38)
	Struct Vector2D                                    AngleRange                                         // 0x318(0x8)
	Struct Vector2D                                    AdditionalAngleRanges                              // 0x320(0x8)
	bool                                               AngleRangeUseGroupAForAll                          // 0x340(0x1)
	byte                                               HeightAxis                                         // 0x344(0x1)
};


// Size 0x20
class ParticleModuleLocationPrimitiveCylinder_Seeded: public ParticleModuleLocationPrimitiveCylinder
{
public:
	Struct ParticleRandomSeedInfo                      RandomSeedInfo                                     // 0x348(0x20)
};


// Size 0x150
class ParticleModuleLocationPrimitiveSphere: public ParticleModuleLocationPrimitiveBase
{
public:
	Struct RawDistributionFloat                        StartRadius                                        // 0xc8(0x38)
	Struct RawDistributionFloat                        AdditionalStartRadiuses                            // 0x100(0x38)
	bool                                               StartRadiusUseGroupAForAll                         // 0x1e0(0x1)
	Struct Vector2D                                    PositiveXAngleRange                                // 0x1e4(0x8)
	Struct Vector2D                                    NegativeXAngleRange                                // 0x1ec(0x8)
	Struct Vector2D                                    PositiveYAngleRange                                // 0x1f4(0x8)
	Struct Vector2D                                    NegativeYAngleRange                                // 0x1fc(0x8)
	Struct Vector2D                                    PositiveZAngleRange                                // 0x204(0x8)
	Struct Vector2D                                    NegativeZAngleRange                                // 0x20c(0x8)
};


// Size 0x20
class ParticleModuleLocationPrimitiveSphere_Seeded: public ParticleModuleLocationPrimitiveSphere
{
public:
	Struct ParticleRandomSeedInfo                      RandomSeedInfo                                     // 0x218(0x20)
};


// Size 0x2f0
class ParticleModuleLocationPrimitiveSphereGPU: public ParticleModuleLocationPrimitiveBase
{
public:
	Struct RawDistributionFloat                        StartRadius                                        // 0xc8(0x38)
	Struct RawDistributionFloat                        AdditionalStartRadius                              // 0x100(0x38)
	bool                                               bUseGroupAStartRadiusForAllGroups                  // 0x1e0(0x1)
	Struct RawDistributionFloat                        AdditionalVelocityScales                           // 0x1e8(0x38)
	bool                                               bUseGroupAVelocityScaleForAllGroups                // 0x2c8(0x1)
	Struct RawDistributionVector                       AdditionalStartLocations                           // 0x2d0(0x38)
	bool                                               bUseGroupAStartLocationForAllGroups                // 0x3b0(0x1)
};


// Size 0xf0
class ParticleModuleLocationVelocityComputeShaderOutput: public ParticleModuleLocationPrimitiveBase
{
public:
	Class ParticleComputeShaderData*                   PositionData                                       // 0xc8(0x8)
	Struct RawDistributionVector                       ComputedVelocityScale                              // 0xd0(0x38)
	float                                              SpeedCap                                           // 0x108(0x4)
	Struct RawDistributionVector                       BaseVelocity                                       // 0x110(0x38)
	Struct RawDistributionVector                       LocationOffset                                     // 0x148(0x38)
	Struct RawDistributionVector                       LocationOffsetScaledDirection                      // 0x180(0x38)
};


// Size 0x1b8
class ParticleModuleLocationPrimitiveSphereSlice: public ParticleModuleLocationBase
{
public:
	Struct RawDistributionFloat                        StartRadius                                        // 0x50(0x38)
	Struct RawDistributionFloat                        AdditionalStartRadiuses                            // 0x88(0x38)
	bool                                               StartRadiusUseGroupAForAll                         // 0x168(0x1)
	Struct PrimitiveSphereEmitterAngleRanges           AngleRanges                                        // 0x16c(0x10)
	float                                              FirstSliceDistributionWeight                       // 0x18c(0x4)
	bool                                               SurfaceOnly                                        // 0x190(0x1)
	bool                                               Velocity                                           // 0x190(0x1)
	Struct RawDistributionFloat                        VelocityScale                                      // 0x198(0x38)
	Struct RawDistributionVector                       StartLocation                                      // 0x1d0(0x38)
};


// Size 0xe0
class ParticleModuleLocationPrimitiveTriangle: public ParticleModuleLocationBase
{
public:
	Struct RawDistributionVector                       StartOffset                                        // 0x50(0x38)
	Struct RawDistributionFloat                        Height                                             // 0x88(0x38)
	Struct RawDistributionFloat                        Angle                                              // 0xc0(0x38)
	Struct RawDistributionFloat                        Thickness                                          // 0xf8(0x38)
};


// Size 0x60
class ParticleModuleLocationSkelVertSurface: public ParticleModuleLocationBase
{
public:
	byte                                               SourceType                                         // 0x50(0x1)
	Struct Vector                                      UniversalOffset                                    // 0x54(0xc)
	bool                                               bUpdatePositionEachFrame                           // 0x60(0x1)
	bool                                               bOrientMeshEmitters                                // 0x60(0x1)
	bool                                               bInheritBoneVelocity                               // 0x60(0x1)
	struct FName                                       SkelMeshActorParamName                             // 0x64(0x8)
	TArray<Struct FName>                               ValidAssociatedBones                               // 0x70(0x10)
	bool                                               bEnforceNormalCheck                                // 0x80(0x1)
	Struct Vector                                      NormalToCompare                                    // 0x84(0xc)
	float                                              NormalCheckToleranceDegrees                        // 0x90(0x4)
	float                                              NormalCheckTolerance                               // 0x94(0x4)
	TArray<Int >                                       ValidMaterialIndices                               // 0x98(0x10)
	bool                                               bInheritVertexColor                                // 0xa8(0x1)
};


// Size 0x8
class ParticleModulePivotOffset: public ParticleModuleLocationBase
{
public:
	Struct Vector2D                                    PivotOffset                                        // 0x50(0x8)
};


// Size 0x38
class ParticleModuleSourceMovement: public ParticleModuleLocationBase
{
public:
	Struct RawDistributionVector                       SourceMovementScale                                // 0x50(0x38)
};


// Size 0x0
class ParticleModuleMaterialBase: public ParticleModule
{
public:
};


// Size 0x10
class ParticleModuleMeshMaterial: public ParticleModuleMaterialBase
{
public:
	TArray<class MeshMaterials*>                       MeshMaterials                                      // 0x50(0x10)
};


// Size 0x8
class ParticleModuleOrbitBase: public ParticleModule
{
public:
	bool                                               bUseEmitterTime                                    // 0x50(0x1)
};


// Size 0xc8
class ParticleModuleOrbit: public ParticleModuleOrbitBase
{
public:
	byte                                               ChainMode                                          // 0x58(0x1)
	Struct RawDistributionVector                       OffsetAmount                                       // 0x60(0x38)
	Struct OrbitOptions                                OffsetOptions                                      // 0x98(0x4)
	Struct RawDistributionVector                       RotationAmount                                     // 0xa0(0x38)
	Struct OrbitOptions                                RotationOptions                                    // 0xd8(0x4)
	Struct RawDistributionVector                       RotationRateAmount                                 // 0xe0(0x38)
	Struct OrbitOptions                                RotationRateOptions                                // 0x118(0x4)
};


// Size 0x0
class ParticleModuleOrientationBase: public ParticleModule
{
public:
};


// Size 0x8
class ParticleModuleOrientationAxisLock: public ParticleModuleOrientationBase
{
public:
	byte                                               LockAxisFlags                                      // 0x50(0x1)
};


// Size 0x0
class ParticleModuleParameterBase: public ParticleModule
{
public:
};


// Size 0x18
class ParticleModuleParameterDynamic: public ParticleModuleParameterBase
{
public:
	TArray<Struct RandomSeedInfo>                      DynamicParams                                      // 0x50(0x10)
	int                                                UpdateFlags                                        // 0x60(0x4)
	bool                                               bUsesVelocity                                      // 0x64(0x1)
};


// Size 0x20
class ParticleModuleParameterDynamic_Seeded: public ParticleModuleParameterDynamic
{
public:
	Struct ParticleRandomSeedInfo                      RandomSeedInfo                                     // 0x68(0x20)
};


// Size 0x18
class ParticleModuleParametersOverX: public ParticleModule
{
public:
	float                                              GroupScales                                        // 0x50(0x4)
};


// Size 0x188
class ParticleModuleParametersOverCustom: public ParticleModuleParametersOverX
{
public:
	Struct RawDistributionFloat                        DynamicParamScaleOverCustomScale                   // 0x68(0x38)
	Struct RawDistributionFloat                        SpawnRateOverCustomScale                           // 0xa0(0x38)
	Struct RawDistributionFloat                        LifetimeOverCustomScale                            // 0xd8(0x38)
	Struct RawDistributionFloat                        SizeOverCustomScale                                // 0x110(0x38)
	Struct RawDistributionFloat                        InitialVelocityOverCustomScale                     // 0x148(0x38)
	Struct RawDistributionFloat                        OpacityOverCustomScale                             // 0x180(0x38)
	Struct RawDistributionFloat                        CylinderRadiusOverCustomScale                      // 0x1b8(0x38)
};


// Size 0x130
class ParticleModuleParametersOverVelocity: public ParticleModuleParametersOverX
{
public:
	float                                              MinSpeed                                           // 0x68(0x4)
	float                                              MaxSpeed                                           // 0x6c(0x4)
	Struct Vector                                      VelocityComponentsWeights                          // 0x70(0xc)
	Struct RawDistributionFloat                        SpawnRateOverSpeedScale                            // 0x80(0x38)
	Struct RawDistributionFloat                        LifetimeOverSpeedScale                             // 0xb8(0x38)
	Struct RawDistributionFloat                        SizeOverSpeedScale                                 // 0xf0(0x38)
	Struct RawDistributionFloat                        InitialVelocityOverSpeedScale                      // 0x128(0x38)
	Struct RawDistributionFloat                        OpacityOverSpeedScale                              // 0x160(0x38)
};


// Size 0x60
class SubUVAnimation: public Object
{
public:
	Class Texture2D*                                   SubUVTexture                                       // 0x28(0x8)
	int                                                SubImages_Horizontal                               // 0x30(0x4)
	int                                                SubImages_Vertical                                 // 0x34(0x4)
	byte                                               BoundingMode                                       // 0x38(0x1)
	byte                                               OpacitySourceMode                                  // 0x39(0x1)
	float                                              AlphaThreshold                                     // 0x3c(0x4)
	float                                              SafeMarginSize                                     // 0x40(0x4)
};


// Size 0x2a8
class ParticleModuleRequired: public ParticleModule
{
public:
	bool                                               bDeactivateGroupA                                  // 0x50(0x1)
	bool                                               bDeactivateGroupB                                  // 0x50(0x1)
	bool                                               bDeactivateGroupC                                  // 0x50(0x1)
	bool                                               bDeactivateGroupD                                  // 0x50(0x1)
	bool                                               bDeactivateGroupE                                  // 0x50(0x1)
	byte                                               EmitterPriority                                    // 0x54(0x1)
	bool                                               bUseComplexitySystemWhenLooping                    // 0x58(0x1)
	byte                                               SwitchPriority                                     // 0x5c(0x1)
	bool                                               bReplacementGroupIsAdditive                        // 0x60(0x1)
	Class MaterialInterface*                           Material                                           // 0x68(0x8)
	Struct Vector                                      EmitterOrigin                                      // 0x70(0xc)
	bool                                               EmitterOriginUseGroupAForAll                       // 0x7c(0x1)
	Struct Vector                                      AdditionalEmitterOrigins                           // 0x80(0xc)
	Struct Rotator                                     EmitterRotation                                    // 0xbc(0xc)
	byte                                               ScreenAlignment                                    // 0xc8(0x1)
	bool                                               bUseGroupAScreenAlignmentForAllGroups              // 0xcc(0x1)
	byte                                               AdditionalScreenAlignments                         // 0xd0(0x1)
	float                                              AlignmentInheritedVelocityScale                    // 0xd8(0x4)
	bool                                               bUseLocalSpace                                     // 0xdc(0x1)
	bool                                               bFollowEmitter                                     // 0xdc(0x1)
	bool                                               bTrailInGrandParentSpace                           // 0xdc(0x1)
	bool                                               bKillOnDeactivate                                  // 0xdc(0x1)
	bool                                               bKillOnCompleted                                   // 0xdc(0x1)
	byte                                               SortMode                                           // 0xe0(0x1)
	bool                                               bUseLegacyEmitterTime                              // 0xe4(0x1)
	float                                              EmitterDuration                                    // 0xe8(0x4)
	float                                              EmitterDurationLow                                 // 0xec(0x4)
	bool                                               bEmitterDurationUseRange                           // 0xf0(0x1)
	bool                                               bDurationRecalcEachLoop                            // 0xf0(0x1)
	bool                                               bSeparateLoopTimeForSubUV                          // 0xf0(0x1)
	int                                                EmitterLoops                                       // 0xf4(0x4)
	Struct RawDistributionFloat                        LoopTime                                           // 0xf8(0x38)
	Struct RawDistributionFloat                        LoopOffset                                         // 0x130(0x38)
	Struct RawDistributionFloat                        LoopTimeForSubUV                                   // 0x168(0x38)
	float                                              LoopBeginTime                                      // 0x1a0(0x4)
	float                                              LoopEndTime                                        // 0x1a4(0x4)
	Struct RawDistributionFloat                        SpawnRate                                          // 0x1a8(0x38)
	byte                                               ParticleBurstMethod                                // 0x1e0(0x1)
	TArray<Struct ParticleBurstMethod>                 BurstList                                          // 0x1e8(0x10)
	float                                              EmitterDelay                                       // 0x1f8(0x4)
	float                                              EmitterDelayLow                                    // 0x1fc(0x4)
	bool                                               bEmitterDelayUseRange                              // 0x200(0x1)
	bool                                               bDelayFirstLoopOnly                                // 0x200(0x1)
	byte                                               InterpolationMethod                                // 0x204(0x1)
	int                                                SubImages_Horizontal                               // 0x208(0x4)
	int                                                SubImages_Vertical                                 // 0x20c(0x4)
	bool                                               bScaleUV                                           // 0x210(0x1)
	float                                              RandomImageTime                                    // 0x214(0x4)
	int                                                RandomImageChanges                                 // 0x218(0x4)
	bool                                               bOverrideSystemMacroUV                             // 0x21c(0x1)
	Struct Vector                                      MacroUVPosition                                    // 0x220(0xc)
	float                                              MacroUVRadius                                      // 0x22c(0x4)
	bool                                               bUseMaxDrawCount                                   // 0x230(0x1)
	int                                                MaxDrawCount                                       // 0x234(0x4)
	byte                                               EmitterNormalsMode                                 // 0x238(0x1)
	Struct Vector                                      NormalsSphereCenter                                // 0x23c(0xc)
	Struct Vector                                      NormalsCylinderDirection                           // 0x248(0xc)
	bool                                               bOrbitModuleAffectsVelocityAlignment               // 0x254(0x1)
	byte                                               UVFlippingMode                                     // 0x258(0x1)
	Class Texture2D*                                   CutoutTexture                                      // 0x260(0x8)
	byte                                               BoundingMode                                       // 0x268(0x1)
	byte                                               OpacitySourceMode                                  // 0x269(0x1)
	float                                              AlphaThreshold                                     // 0x26c(0x4)
	float                                              SafeMarginSize                                     // 0x270(0x4)
	TArray<Struct FName>                               NamedMaterialOverrides                             // 0x278(0x10)
	bool                                               bUseDistanceFading                                 // 0x288(0x1)
	float                                              FarStopFade                                        // 0x28c(0x4)
	float                                              FarStartFade                                       // 0x290(0x4)
	float                                              NearStartFade                                      // 0x294(0x4)
	float                                              NearStopFade                                       // 0x298(0x4)
	bool                                               ApplyFOVDistanceScaling                            // 0x29c(0x1)
	bool                                               bUseDistanceSizeScale                              // 0x29c(0x1)
	float                                              FarScaleFactor                                     // 0x2a0(0x4)
	float                                              FarScaleEndDistance                                // 0x2a4(0x4)
	float                                              FarScaleBeginDistance                              // 0x2a8(0x4)
	float                                              NearScaleBeginDistance                             // 0x2ac(0x4)
	float                                              NearScaleEndDistance                               // 0x2b0(0x4)
	float                                              NearScaleFactor                                    // 0x2b4(0x4)
};


// Size 0x0
class ParticleModuleRotationBase: public ParticleModule
{
public:
};


// Size 0x38
class ParticleModuleAlignRotationToVelocity: public ParticleModuleRotationBase
{
public:
	Struct RawDistributionFloat                        AdditionalAngle                                    // 0x50(0x38)
};


// Size 0x40
class ParticleModuleMeshRotation: public ParticleModuleRotationBase
{
public:
	Struct RawDistributionVector                       StartRotation                                      // 0x50(0x38)
	bool                                               bInheritParent                                     // 0x88(0x1)
};


// Size 0x20
class ParticleModuleMeshRotation_Seeded: public ParticleModuleMeshRotation
{
public:
	Struct ParticleRandomSeedInfo                      RandomSeedInfo                                     // 0x90(0x20)
};


// Size 0x68
class ParticleModuleRotateRotationAxis: public ParticleModuleRotationBase
{
public:
	Struct RotationAboutAxisParameters                 FacingAxis                                         // 0x50(0x10)
	bool                                               bUseGroupAFacingAxisForAllGroups                   // 0x60(0x1)
	Struct RotationAboutAxisParameters                 AdditionalFacingAxes                               // 0x64(0x10)
};


// Size 0x158
class ParticleModuleRotation: public ParticleModuleRotationBase
{
public:
	bool                                               bUseGroupARotationForAllGroups                     // 0x50(0x1)
	Struct RawDistributionFloat                        StartRotation                                      // 0x58(0x38)
	Struct RawDistributionFloat                        AdditionalStartRotation                            // 0x90(0x38)
};


// Size 0x20
class ParticleModuleRotation_Seeded: public ParticleModuleRotation
{
public:
	Struct ParticleRandomSeedInfo                      RandomSeedInfo                                     // 0x1a8(0x20)
};


// Size 0x40
class ParticleModuleRotationOverLifetime: public ParticleModuleRotationBase
{
public:
	Struct RawDistributionFloat                        RotationOverLife                                   // 0x50(0x38)
	bool                                               Scale                                              // 0x88(0x1)
};


// Size 0x0
class ParticleModuleRotationRateBase: public ParticleModule
{
public:
};


// Size 0x38
class ParticleModuleMeshRotationRate: public ParticleModuleRotationRateBase
{
public:
	Struct RawDistributionVector                       StartRotationRate                                  // 0x50(0x38)
};


// Size 0x20
class ParticleModuleMeshRotationRate_Seeded: public ParticleModuleMeshRotationRate
{
public:
	Struct ParticleRandomSeedInfo                      RandomSeedInfo                                     // 0x88(0x20)
};


// Size 0x38
class ParticleModuleMeshRotationRateMultiplyLife: public ParticleModuleRotationRateBase
{
public:
	Struct RawDistributionVector                       LifeMultiplier                                     // 0x50(0x38)
};


// Size 0x40
class ParticleModuleMeshRotationRateOverLife: public ParticleModuleRotationRateBase
{
public:
	Struct RawDistributionVector                       RotRate                                            // 0x50(0x38)
	bool                                               bScaleRotRate                                      // 0x88(0x1)
};


// Size 0x158
class ParticleModuleRotationRate: public ParticleModuleRotationRateBase
{
public:
	bool                                               bUseGroupARotationRateForAllGroups                 // 0x50(0x1)
	Struct RawDistributionFloat                        StartRotationRate                                  // 0x58(0x38)
	Struct RawDistributionFloat                        AdditionalStartRotationRate                        // 0x90(0x38)
};


// Size 0x20
class ParticleModuleRotationRate_Seeded: public ParticleModuleRotationRate
{
public:
	Struct ParticleRandomSeedInfo                      RandomSeedInfo                                     // 0x1a8(0x20)
};


// Size 0x38
class ParticleModuleRotationRateMultiplyLife: public ParticleModuleRotationRateBase
{
public:
	Struct RawDistributionFloat                        LifeMultiplier                                     // 0x50(0x38)
};


// Size 0x0
class ParticleModuleSizeBase: public ParticleModule
{
public:
};


// Size 0x160
class ParticleModuleSize: public ParticleModuleSizeBase
{
public:
	bool                                               bUseGroupAForAll                                   // 0x50(0x1)
	Struct RawDistributionVector                       StartSize                                          // 0x58(0x38)
	Struct RawDistributionVector                       AdditionalStartSizes                               // 0x90(0x38)
	bool                                               bKeepAspectRatio                                   // 0x1a8(0x1)
	bool                                               bIgnoreComponentScale                              // 0x1a8(0x1)
};


// Size 0x20
class ParticleModuleSize_Seeded: public ParticleModuleSize
{
public:
	Struct ParticleRandomSeedInfo                      RandomSeedInfo                                     // 0x1b0(0x20)
};


// Size 0x40
class ParticleModuleSizeMultiplyLife: public ParticleModuleSizeBase
{
public:
	Struct RawDistributionVector                       LifeMultiplier                                     // 0x50(0x38)
	bool                                               MultiplyX                                          // 0x88(0x1)
	bool                                               MultiplyY                                          // 0x88(0x1)
	bool                                               MultiplyZ                                          // 0x88(0x1)
};


// Size 0x38
class ParticleModuleSizeOverVelocity: public ParticleModuleSizeBase
{
public:
	Struct RawDistributionFloat                        SizeMultiplier                                     // 0x50(0x38)
};


// Size 0x40
class ParticleModuleSizeScale: public ParticleModuleSizeBase
{
public:
	Struct RawDistributionVector                       SizeScale                                          // 0x50(0x38)
	bool                                               EnableX                                            // 0x88(0x1)
	bool                                               EnableY                                            // 0x88(0x1)
	bool                                               EnableZ                                            // 0x88(0x1)
};


// Size 0x10
class ParticleModuleSizeScaleBySpeed: public ParticleModuleSizeBase
{
public:
	Struct Vector2D                                    SpeedScale                                         // 0x50(0x8)
	Struct Vector2D                                    MaxScale                                           // 0x58(0x8)
};


// Size 0x8
class ParticleModuleSpawnBase: public ParticleModule
{
public:
	bool                                               bProcessSpawnRate                                  // 0x50(0x1)
	bool                                               bProcessBurstList                                  // 0x50(0x1)
};


// Size 0x220
class ParticleModuleSpawn: public ParticleModuleSpawnBase
{
public:
	Struct RawDistributionFloat                        Rate                                               // 0x58(0x38)
	Struct RawDistributionFloat                        AdditionalRates                                    // 0x90(0x38)
	float                                              StartScaleDistance                                 // 0x1a8(0x4)
	float                                              EndScaleDistance                                   // 0x1ac(0x4)
	Struct RawDistributionFloat                        RateScaleOverDistance                              // 0x1b0(0x38)
	Struct RawDistributionFloat                        RateScale                                          // 0x1e8(0x38)
	byte                                               ParticleBurstMethod                                // 0x220(0x1)
	TArray<Struct ParticleBurstMethod>                 BurstList                                          // 0x228(0x10)
	Struct RawDistributionFloat                        BurstScale                                         // 0x238(0x38)
	bool                                               bApplyGlobalSpawnRateScale                         // 0x270(0x1)
	bool                                               bBurstTreatedAsLoopingForLODs                      // 0x270(0x1)
};


// Size 0x50
class ParticleModuleSpawnPerUnit: public ParticleModuleSpawnBase
{
public:
	bool                                               bAffectsGroupA                                     // 0x58(0x1)
	bool                                               bAffectsGroupB                                     // 0x58(0x1)
	bool                                               bAffectsGroupC                                     // 0x58(0x1)
	bool                                               bAffectsGroupD                                     // 0x58(0x1)
	bool                                               bAffectsGroupE                                     // 0x58(0x1)
	bool                                               bAffectsReplacementGroup                           // 0x58(0x1)
	float                                              UnitScalar                                         // 0x5c(0x4)
	Struct RawDistributionFloat                        SpawnPerUnit                                       // 0x60(0x38)
	bool                                               bIgnoreSpawnRateWhenMoving                         // 0x98(0x1)
	float                                              MovementTolerance                                  // 0x9c(0x4)
	float                                              MaxFrameDistance                                   // 0xa0(0x4)
	bool                                               bIgnoreMovementAlongX                              // 0xa4(0x1)
	bool                                               bIgnoreMovementAlongY                              // 0xa4(0x1)
	bool                                               bIgnoreMovementAlongZ                              // 0xa4(0x1)
};


// Size 0x0
class ParticleModuleSpawnPerUnitNew: public ParticleModuleSpawnPerUnit
{
public:
};


// Size 0x0
class ParticleModuleSpawnRepeatPerPoint: public ParticleModuleSpawnBase
{
public:
};


// Size 0x0
class ParticleModuleSubUVBase: public ParticleModule
{
public:
};


// Size 0x40
class ParticleModuleSubUV: public ParticleModuleSubUVBase
{
public:
	Struct RawDistributionFloat                        SubImageIndex                                      // 0x50(0x38)
	bool                                               bUseRealTime                                       // 0x88(0x1)
};


// Size 0x48
class ParticleModuleSubUVMovie: public ParticleModuleSubUV
{
public:
	bool                                               bUseEmitterTime                                    // 0x90(0x1)
	Struct RawDistributionFloat                        FrameRate                                          // 0x98(0x38)
	int                                                StartingFrame                                      // 0xd0(0x4)
};


// Size 0x0
class ParticleModuleTrailBase: public ParticleModule
{
public:
};


// Size 0x68
class ParticleModuleTrailSource: public ParticleModuleTrailBase
{
public:
	byte                                               SourceMethod                                       // 0x50(0x1)
	struct FName                                       SourceName                                         // 0x54(0x8)
	Struct RawDistributionFloat                        SourceStrength                                     // 0x60(0x38)
	bool                                               bLockSourceStength                                 // 0x98(0x1)
	int                                                SourceOffsetCount                                  // 0x9c(0x4)
	TArray<Struct SourceOffsetCount>                   SourceOffsetDefaults                               // 0xa0(0x10)
	byte                                               SelectionMethod                                    // 0xb0(0x1)
	bool                                               bInheritRotation                                   // 0xb4(0x1)
};


// Size 0x0
class ParticleModuleTypeDataBase: public ParticleModule
{
public:
};


// Size 0x18
class ParticleModuleTypeDataAnimTrail: public ParticleModuleTypeDataBase
{
public:
	bool                                               bDeadTrailsOnDeactivate                            // 0x50(0x1)
	bool                                               bEnablePreviousTangentRecalculation                // 0x50(0x1)
	bool                                               bTangentRecalculationEveryFrame                    // 0x50(0x1)
	float                                              TilingDistance                                     // 0x54(0x4)
	float                                              DistanceTessellationStepSize                       // 0x58(0x4)
	float                                              TangentTessellationStepSize                        // 0x5c(0x4)
	float                                              WidthTessellationStepSize                          // 0x60(0x4)
};


// Size 0x138
class ParticleModuleTypeDataBeam2: public ParticleModuleTypeDataBase
{
public:
	byte                                               BeamMethod                                         // 0x50(0x1)
	int                                                TextureTile                                        // 0x54(0x4)
	float                                              TextureTileDistance                                // 0x58(0x4)
	int                                                Sheets                                             // 0x5c(0x4)
	int                                                MaxBeamCount                                       // 0x60(0x4)
	float                                              Speed                                              // 0x64(0x4)
	int                                                InterpolationPoints                                // 0x68(0x4)
	bool                                               bAlwaysOn                                          // 0x6c(0x1)
	int                                                UpVectorStepSize                                   // 0x70(0x4)
	struct FName                                       BranchParentName                                   // 0x74(0x8)
	Struct RawDistributionFloat                        Distance                                           // 0x80(0x38)
	byte                                               TaperMethod                                        // 0xb8(0x1)
	Struct RawDistributionFloat                        TaperFactor                                        // 0xc0(0x38)
	Struct RawDistributionFloat                        TaperScale                                         // 0xf8(0x38)
	bool                                               RenderGeometry                                     // 0x130(0x1)
	bool                                               RenderDirectLine                                   // 0x130(0x1)
	bool                                               RenderLines                                        // 0x130(0x1)
	bool                                               RenderTessellation                                 // 0x130(0x1)
	TArray<class LOD_BeamModule_Source*>               LOD_BeamModule_Source                              // 0x138(0x10)
	TArray<class LOD_BeamModule_Target*>               LOD_BeamModule_Target                              // 0x148(0x10)
	TArray<class LOD_BeamModule_Noise*>                LOD_BeamModule_Noise                               // 0x158(0x10)
	TArray<class LOD_BeamModule_SourceModifier*>       LOD_BeamModule_SourceModifier                      // 0x168(0x10)
	TArray<class LOD_BeamModule_TargetModifier*>       LOD_BeamModule_TargetModifier                      // 0x178(0x10)
};


// Size 0xcc0
class ParticleModuleTypeDataGpu: public ParticleModuleTypeDataBase
{
public:
	Struct GPUSpriteEmitterInfo                        EmitterInfo                                        // 0x50(0x2a0)
	Struct GPUSpriteResourceData                       ResourceData                                       // 0x2f0(0xa00)
	float                                              CameraMotionBlurAmount                             // 0xcf0(0x4)
	bool                                               bClearExistingParticlesOnInit                      // 0xcf4(0x1)
	byte                                               AlphaCullingAggressiveness                         // 0xcf8(0x1)
	bool                                               bOverrideAlphaThreshold                            // 0xcfc(0x1)
	float                                              OverriddenAlphaThreshold                           // 0xd00(0x4)
	byte                                               InteractionWithKillPlane                           // 0xd04(0x1)
	byte                                               KillPlanePointLocation                             // 0xd05(0x1)
	float                                              FadingTimeWhenKilled                               // 0xd08(0x4)
};


// Size 0x70
class ParticleModuleTypeDataMesh: public ParticleModuleTypeDataBase
{
public:
	Class StaticMesh*                                  Mesh                                               // 0x50(0x8)
	bool                                               CastShadows                                        // 0x58(0x1)
	bool                                               DoCollisions                                       // 0x58(0x1)
	byte                                               MeshAlignment                                      // 0x5c(0x1)
	bool                                               bOverrideMaterial                                  // 0x60(0x1)
	float                                              Pitch                                              // 0x64(0x4)
	float                                              Roll                                               // 0x68(0x4)
	float                                              Yaw                                                // 0x6c(0x4)
	Struct RawDistributionVector                       RollPitchYawRange                                  // 0x70(0x38)
	byte                                               AxisLockOption                                     // 0xb0(0x1)
	bool                                               bCameraFacing                                      // 0xb4(0x1)
	byte                                               CameraFacingUpAxisOption                           // 0xb8(0x1)
	byte                                               CameraFacingOption                                 // 0xb9(0x1)
	bool                                               bApplyParticleRotationAsSpin                       // 0xbc(0x1)
	bool                                               bFaceCameraDirectionRatherThanPosition             // 0xbc(0x1)
	bool                                               bFaceCameraOnlyOnSpawn                             // 0xbc(0x1)
	bool                                               bCollisionsConsiderPartilceSize                    // 0xbc(0x1)
};


// Size 0x30
class ParticleModuleTypeDataRibbon: public ParticleModuleTypeDataBase
{
public:
	int                                                MaxTessellationBetweenParticles                    // 0x50(0x4)
	int                                                SheetsPerTrail                                     // 0x54(0x4)
	int                                                MaxTrailCount                                      // 0x58(0x4)
	int                                                MaxParticleInTrailCount                            // 0x5c(0x4)
	bool                                               bDeadTrailsOnDeactivate                            // 0x60(0x1)
	bool                                               bDeadTrailsOnSourceLoss                            // 0x60(0x1)
	bool                                               bClipSourceSegement                                // 0x60(0x1)
	bool                                               bEnablePreviousTangentRecalculation                // 0x60(0x1)
	bool                                               bTangentRecalculationEveryFrame                    // 0x60(0x1)
	bool                                               bSpawnInitialParticle                              // 0x60(0x1)
	byte                                               RenderAxis                                         // 0x64(0x1)
	float                                              TangentSpawningScalar                              // 0x68(0x4)
	bool                                               bRenderGeometry                                    // 0x6c(0x1)
	bool                                               bRenderSpawnPoints                                 // 0x6c(0x1)
	bool                                               bRenderTangents                                    // 0x6c(0x1)
	bool                                               bRenderTessellation                                // 0x6c(0x1)
	float                                              TilingDistance                                     // 0x70(0x4)
	float                                              DistanceTessellationStepSize                       // 0x74(0x4)
	bool                                               bEnableTangentDiffInterpScale                      // 0x78(0x1)
	float                                              TangentTessellationScalar                          // 0x7c(0x4)
};


// Size 0x0
class ParticleModuleVectorFieldBase: public ParticleModule
{
public:
};


// Size 0x10
class ParticleModuleVectorFieldGlobal: public ParticleModuleVectorFieldBase
{
public:
	bool                                               bOverrideGlobalVectorFieldTightness                // 0x50(0x1)
	float                                              GlobalVectorFieldScale                             // 0x54(0x4)
	float                                              GlobalVectorFieldTightness                         // 0x58(0x4)
};


// Size 0x38
class ParticleModuleVectorFieldLocal: public ParticleModuleVectorFieldBase
{
public:
	Class VectorField*                                 VectorField                                        // 0x50(0x8)
	Struct Vector                                      RelativeTranslation                                // 0x58(0xc)
	Struct Rotator                                     RelativeRotation                                   // 0x64(0xc)
	Struct Vector                                      RelativeScale3D                                    // 0x70(0xc)
	float                                              Intensity                                          // 0x7c(0x4)
	float                                              Tightness                                          // 0x80(0x4)
	bool                                               bIgnoreComponentTransform                          // 0x84(0x1)
	bool                                               bTileX                                             // 0x84(0x1)
	bool                                               bTileY                                             // 0x84(0x1)
	bool                                               bTileZ                                             // 0x84(0x1)
};


// Size 0x18
class ParticleModuleVectorFieldRotation: public ParticleModuleVectorFieldBase
{
public:
	Struct Vector                                      MinInitialRotation                                 // 0x50(0xc)
	Struct Vector                                      MaxInitialRotation                                 // 0x5c(0xc)
};


// Size 0x10
class ParticleModuleVectorFieldRotationRate: public ParticleModuleVectorFieldBase
{
public:
	Struct Vector                                      RotationRate                                       // 0x50(0xc)
};


// Size 0x8
class ParticleModuleVectorFieldScale: public ParticleModuleVectorFieldBase
{
public:
	Class DistributionFloat*                           VectorFieldScale                                   // 0x50(0x8)
};


// Size 0x8
class ParticleModuleVectorFieldScaleOverLife: public ParticleModuleVectorFieldBase
{
public:
	Class DistributionFloat*                           VectorFieldScaleOverLife                           // 0x50(0x8)
};


// Size 0x8
class ParticleModuleVelocityBase: public ParticleModule
{
public:
	bool                                               bInWorldSpace                                      // 0x50(0x1)
	bool                                               bApplyOwnerScale                                   // 0x50(0x1)
};


// Size 0x38
class ParticleModuleEmitterPointVelocity: public ParticleModuleVelocityBase
{
public:
	Struct RawDistributionFloat                        VelocityScale                                      // 0x58(0x38)
};


// Size 0x190
class ParticleModuleVelocity: public ParticleModuleVelocityBase
{
public:
	bool                                               bUseGroupAForAll                                   // 0x58(0x1)
	Struct RawDistributionVector                       StartVelocity                                      // 0x60(0x38)
	Struct RawDistributionVector                       AdditionalStartVelocities                          // 0x98(0x38)
	Struct RawDistributionFloat                        StartVelocityRadial                                // 0x1b0(0x38)
};


// Size 0x20
class ParticleModuleVelocity_Seeded: public ParticleModuleVelocity
{
public:
	Struct ParticleRandomSeedInfo                      RandomSeedInfo                                     // 0x1e8(0x20)
};


// Size 0x330
class ParticleModuleVelocityCone: public ParticleModuleVelocityBase
{
public:
	Struct RawDistributionFloat                        Angle                                              // 0x58(0x38)
	Struct RawDistributionFloat                        Velocity                                           // 0x90(0x38)
	Struct Vector                                      Direction                                          // 0xc8(0xc)
	bool                                               bUseGroupAForAll                                   // 0xd4(0x1)
	Struct VelocityConeGroupParams                     AdditionalParams                                   // 0xd8(0x80)
	float                                              VelocityNPointsRandomness                          // 0x35c(0x4)
	Struct Vector                                      AdditiveVelocity                                   // 0x360(0xc)
	float                                              ConeDepthScale                                     // 0x36c(0x4)
	bool                                               WorldSpaceOffset                                   // 0x370(0x1)
	Struct Vector                                      EmitterOriginOffset                                // 0x374(0xc)
	float                                              PushAwayFromCenterFactor                           // 0x380(0x4)
};


// Size 0x88
class ParticleModuleVelocityConeEmitterPoint: public ParticleModuleVelocityBase
{
public:
	Struct RawDistributionFloat                        Angle                                              // 0x58(0x38)
	Struct RawDistributionFloat                        VelocityScale                                      // 0x90(0x38)
	float                                              VelocityNPointsRandomness                          // 0xcc(0x4)
	Struct Vector                                      AdditiveVelocity                                   // 0xd0(0xc)
};


// Size 0x78
class ParticleModuleVelocityInheritParent: public ParticleModuleVelocityBase
{
public:
	Struct RawDistributionVector                       Scale                                              // 0x58(0x38)
	Struct RawDistributionVector                       CustomParentScale                                  // 0x90(0x38)
	bool                                               ScalesRespectEmitterRotation                       // 0xc8(0x1)
	bool                                               UseCustomLocalSpace                                // 0xc8(0x1)
	float                                              SpeedCap                                           // 0xcc(0x4)
};


// Size 0x40
class ParticleModuleVelocityOverLifetime: public ParticleModuleVelocityBase
{
public:
	Struct RawDistributionVector                       VelOverLife                                        // 0x58(0x38)
	bool                                               Absolute                                           // 0x90(0x1)
};


// Size 0x0
class ParticleModuleWindBase: public ParticleModule
{
public:
};


// Size 0x78
class ParticleModuleWindInfluence: public ParticleModuleWindBase
{
public:
	float                                              WindSpeedCap                                       // 0x50(0x4)
	float                                              RandomFactorForWindDirection                       // 0x54(0x4)
	Struct RawDistributionFloat                        InfluenceOnAcceleration                            // 0x58(0x38)
	Struct RawDistributionFloat                        InfluenceOnVelocity                                // 0x90(0x38)
};


// Size 0x0
class ParticleModuleEventSendToGame: public Object
{
public:
};


// Size 0x18
class ParticleSystemReplay: public Object
{
public:
	int                                                ClipIDNumber                                       // 0x28(0x4)
};


// Size 0x0
class DemoPendingNetGame: public PendingNetGame
{
public:
};


// Size 0x48
class PhysicalMaterial: public Object
{
public:
	float                                              Friction                                           // 0x28(0x4)
	byte                                               FrictionCombineMode                                // 0x2c(0x1)
	bool                                               bOverrideFrictionCombineMode                       // 0x2d(0x1)
	float                                              Restitution                                        // 0x30(0x4)
	byte                                               RestitutionCombineMode                             // 0x34(0x1)
	bool                                               bOverrideRestitutionCombineMode                    // 0x35(0x1)
	float                                              Density                                            // 0x38(0x4)
	float                                              RaiseMassToPower                                   // 0x3c(0x4)
	float                                              DestructibleDamageThresholdScale                   // 0x40(0x4)
	Class PhysicalMaterialPropertyBase*                PhysicalMaterialProperty                           // 0x48(0x8)
	byte                                               SurfaceType                                        // 0x50(0x1)
};


// Size 0x0
class PhysicalMaterialPropertyBase: public Object
{
public:
};


// Size 0xd0
class PhysicsAsset: public Object
{
public:
	TArray<class BodySetup*>                           BodySetup                                          // 0x28(0x10)
	TArray<Int >                                       BoundsBodies                                       // 0x38(0x10)
	TArray<class ConstraintSetup*>                     ConstraintSetup                                    // 0x48(0x10)
};


// Size 0x18
class PhysicsCollisionHandler: public Object
{
public:
	float                                              ImpactThreshold                                    // 0x28(0x4)
	float                                              ImpactReFireDelay                                  // 0x2c(0x4)
	Class SoundBase*                                   DefaultImpactSound                                 // 0x30(0x8)
	float                                              LastImpactSoundTime                                // 0x38(0x4)
};


// Size 0x218
class PhysicsConstraintTemplate: public Object
{
public:
	struct FName                                       JointName                                          // 0x28(0x8)
	struct FName                                       ConstraintBone1                                    // 0x30(0x8)
	struct FName                                       ConstraintBone2                                    // 0x38(0x8)
	Struct Vector                                      Pos1                                               // 0x40(0xc)
	Struct Vector                                      PriAxis1                                           // 0x4c(0xc)
	Struct Vector                                      SecAxis1                                           // 0x58(0xc)
	Struct Vector                                      Pos2                                               // 0x64(0xc)
	Struct Vector                                      PriAxis2                                           // 0x70(0xc)
	Struct Vector                                      SecAxis2                                           // 0x7c(0xc)
	bool                                               bEnableProjection                                  // 0x88(0x1)
	float                                              ProjectionLinearTolerance                          // 0x8c(0x4)
	float                                              ProjectionAngularTolerance                         // 0x90(0x4)
	byte                                               LinearXMotion                                      // 0x94(0x1)
	byte                                               LinearYMotion                                      // 0x95(0x1)
	byte                                               LinearZMotion                                      // 0x96(0x1)
	float                                              LinearLimitSize                                    // 0x98(0x4)
	bool                                               bLinearLimitSoft                                   // 0x9c(0x1)
	float                                              LinearLimitStiffness                               // 0xa0(0x4)
	float                                              LinearLimitDamping                                 // 0xa4(0x4)
	bool                                               bLinearBreakable                                   // 0xa8(0x1)
	float                                              LinearBreakThreshold                               // 0xac(0x4)
	byte                                               AngularSwing1Motion                                // 0xb0(0x1)
	byte                                               AngularSwing2Motion                                // 0xb1(0x1)
	byte                                               AngularTwistMotion                                 // 0xb2(0x1)
	bool                                               bSwingLimitSoft                                    // 0xb4(0x1)
	bool                                               bTwistLimitSoft                                    // 0xb4(0x1)
	float                                              Swing1LimitAngle                                   // 0xb8(0x4)
	float                                              Swing2LimitAngle                                   // 0xbc(0x4)
	float                                              TwistLimitAngle                                    // 0xc0(0x4)
	float                                              SwingLimitStiffness                                // 0xc4(0x4)
	float                                              SwingLimitDamping                                  // 0xc8(0x4)
	float                                              TwistLimitStiffness                                // 0xcc(0x4)
	float                                              TwistLimitDamping                                  // 0xd0(0x4)
	bool                                               bAngularBreakable                                  // 0xd4(0x1)
	float                                              AngularBreakThreshold                              // 0xd8(0x4)
	Struct ConstraintInstance                          DefaultInstance                                    // 0xe0(0x160)
};


// Size 0xa8
class PhysicsSerializer: public Object
{
public:
};


// Size 0x10
class PlatformInterfaceBase: public Object
{
public:
	TArray<Struct bSuppressDelegateCalls>              AllDelegates                                       // 0x28(0x10)
};


// Size 0x18
class CloudStorageBase: public PlatformInterfaceBase
{
public:
	TArray<Str None>                                   LocalCloudFiles                                    // 0x38(0x10)
	bool                                               bSuppressDelegateCalls                             // 0x48(0x1)
};


// Size 0x28
class InGameAdManager: public PlatformInterfaceBase
{
public:
	bool                                               bShouldPauseWhileAdOpen                            // 0x38(0x1)
	TArray<Delegate bShouldPauseWhileAdOpen>           ClickedBannerDelegates                             // 0x40(0x10)
	TArray<Delegate ClickedBannerDelegates>            ClosedAdDelegates                                  // 0x50(0x10)
};


// Size 0x30
class MicroTransactionBase: public PlatformInterfaceBase
{
public:
	TArray<Struct AuthorizeAccounts>                   AvailableProducts                                  // 0x38(0x10)
	Struct FString                                     LastError                                          // 0x48(0x10)
	Struct FString                                     LastErrorSolution                                  // 0x58(0x10)
};


// Size 0x0
class TwitterIntegrationBase: public PlatformInterfaceBase
{
public:
};


// Size 0x88
class PlatformInterfaceWebResponse: public Object
{
public:
	Struct FString                                     OriginalURL                                        // 0x28(0x10)
	int                                                ResponseCode                                       // 0x38(0x4)
	int                                                Tag                                                // 0x3c(0x4)
	Struct FString                                     StringResponse                                     // 0x40(0x10)
	TArray<Byte StringResponse>                        BinaryResponse                                     // 0x50(0x10)
};


// Size 0x1c8
class LocalPlayer: public Player
{
public:
	Class GameViewportClient*                          ViewportClient                                     // 0x60(0x8)
	byte                                               AspectRatioAxisConstraint                          // 0xa8(0x1)
	class                                              PendingLevelPlayerControllerClass                  // 0xb0(0x8)
	bool                                               bSentSplitJoin                                     // 0xb8(0x1)
	float                                              MinimumAspectRatio                                 // 0xbc(0x4)
};


// Size 0x8
class ChildConnection: public NetConnection
{
public:
	Class NetConnection*                               Parent                                             // 0x34588(0x8)
};


// Size 0x10
class DemoNetConnection: public NetConnection
{
public:
};


// Size 0x10
class Polys: public Object
{
public:
};


// Size 0x8
class ReporterBase: public Object
{
public:
};


// Size 0x78
class ReporterGraph: public ReporterBase
{
public:
};


// Size 0x30
class ReverbEffect: public Object
{
public:
	float                                              Density                                            // 0x28(0x4)
	float                                              Diffusion                                          // 0x2c(0x4)
	float                                              Gain                                               // 0x30(0x4)
	float                                              GainHF                                             // 0x34(0x4)
	float                                              DecayTime                                          // 0x38(0x4)
	float                                              DecayHFRatio                                       // 0x3c(0x4)
	float                                              ReflectionsGain                                    // 0x40(0x4)
	float                                              ReflectionsDelay                                   // 0x44(0x4)
	float                                              LateGain                                           // 0x48(0x4)
	float                                              LateDelay                                          // 0x4c(0x4)
	float                                              AirAbsorptionGainHF                                // 0x50(0x4)
	float                                              RoomRolloffFactor                                  // 0x54(0x4)
};


// Size 0x20
class Rig: public Object
{
public:
	TArray<Struct DefaultSceneRootNode>                TransformBases                                     // 0x28(0x10)
	TArray<Struct TransformBases>                      Nodes                                              // 0x38(0x10)
};


// Size 0x0
class SaveGame: public Object
{
public:
};


// Size 0x18
class SimpleConstructionScript: public Object
{
public:
	TArray<class RootNodes*>                           RootNodes                                          // 0x28(0x10)
	Class SCS_Node*                                    DefaultSceneRootNode                               // 0x38(0x8)
};


// Size 0x60
class SCS_Node: public Object
{
public:
	Class ActorComponent*                              ComponentTemplate                                  // 0x28(0x8)
	struct FName                                       VariableName                                       // 0x30(0x8)
	struct FName                                       AttachToName                                       // 0x38(0x8)
	struct FName                                       ParentComponentOrVariableName                      // 0x40(0x8)
	struct FName                                       ParentComponentOwnerClassName                      // 0x48(0x8)
	bool                                               bIsParentComponentNative                           // 0x50(0x1)
	bool                                               ServerMigrationFlagSet                             // 0x51(0x1)
	TArray<class ChildNodes*>                          ChildNodes                                         // 0x58(0x10)
	TArray<Struct ChildNodes>                          MetaDataArray                                      // 0x68(0x10)
	Struct Guid                                        VariableGuid                                       // 0x78(0x10)
};


// Size 0x30
class Selection: public Object
{
public:
};


// Size 0x98
class DestructibleMesh: public SkeletalMesh
{
public:
	Struct DestructibleParameters                      DefaultDestructibleParameters                      // 0x238(0x88)
	TArray<Struct DefaultDestructibleParameters>       FractureEffects                                    // 0x2c0(0x10)
};


// Size 0x38
class SkeletalMeshSocket: public Object
{
public:
	struct FName                                       SocketName                                         // 0x28(0x8)
	struct FName                                       BoneName                                           // 0x30(0x8)
	Struct Vector                                      RelativeLocation                                   // 0x38(0xc)
	Struct Rotator                                     RelativeRotation                                   // 0x44(0xc)
	Struct Vector                                      RelativeScale                                      // 0x50(0xc)
	bool                                               bForceAlwaysAnimated                               // 0x5c(0x1)
};


// Size 0x90
class SlateBrushAsset: public Object
{
public:
	Struct SlateBrush                                  Brush                                              // 0x28(0x90)
};


// Size 0x28
class SoundBase: public Object
{
public:
	Class SoundClass*                                  SoundClassObject                                   // 0x28(0x8)
	bool                                               bDebug                                             // 0x30(0x1)
	byte                                               MaxConcurrentResolutionRule                        // 0x34(0x1)
	int                                                MaxConcurrentPlayCount                             // 0x38(0x4)
	float                                              Duration                                           // 0x3c(0x4)
	Class SoundAttenuation*                            AttenuationSettings                                // 0x40(0x8)
};


// Size 0x18
class DialogueSoundWaveProxy: public SoundBase
{
public:
};


// Size 0xe0
class SoundCue: public SoundBase
{
public:
	bool                                               bOverrideAttenuation                               // 0x50(0x1)
	Class SoundNode*                                   FirstNode                                          // 0x58(0x8)
	float                                              VolumeMultiplier                                   // 0x60(0x4)
	float                                              PitchMultiplier                                    // 0x64(0x4)
	Struct AttenuationSettings                         AttenuationOverrides                               // 0x68(0xc0)
};


// Size 0x60
class SoundGroups: public Object
{
public:
	TArray<Struct LocalizedSubtitles>                  SoundGroupProfiles                                 // 0x28(0x10)
};


// Size 0x1c8
class SoundWave: public SoundBase
{
public:
	int                                                CompressionQuality                                 // 0x50(0x4)
	bool                                               bLooping                                           // 0x54(0x1)
	bool                                               bStreaming                                         // 0x54(0x1)
	int                                                StreamingPriority                                  // 0x58(0x4)
	bool                                               bMature                                            // 0x5c(0x1)
	bool                                               bManualWordWrap                                    // 0x5c(0x1)
	bool                                               bSingleLine                                        // 0x5c(0x1)
	byte                                               SoundGroup                                         // 0x60(0x1)
	Struct FString                                     SpokenText                                         // 0x68(0x10)
	float                                              Volume                                             // 0x78(0x4)
	float                                              Pitch                                              // 0x7c(0x4)
	int                                                NumChannels                                        // 0x80(0x4)
	int                                                SampleRate                                         // 0x84(0x4)
	int                                                RawPCMDataSize                                     // 0x88(0x4)
	TArray<Struct RawPCMDataSize>                      Subtitles                                          // 0x90(0x10)
	TArray<Struct Subtitles>                           LocalizedSubtitles                                 // 0xa0(0x10)
};


// Size 0x18
class SoundWaveProcedural: public SoundWave
{
public:
};


// Size 0x50
class SoundClass: public Object
{
public:
	Struct SoundClassProperties                        Properties                                         // 0x28(0x24)
	TArray<class ChildClasses*>                        ChildClasses                                       // 0x50(0x10)
	TArray<Struct ChildClasses>                        PassiveSoundMixModifiers                           // 0x60(0x10)
	Class SoundClass*                                  ParentClass                                        // 0x70(0x8)
};


// Size 0x50
class SoundMix: public Object
{
public:
	bool                                               bApplyEQ                                           // 0x28(0x1)
	float                                              EQPriority                                         // 0x2c(0x4)
	Struct AudioEQEffect                               EQSettings                                         // 0x30(0x28)
	TArray<Struct EQSettings>                          SoundClassEffects                                  // 0x58(0x10)
	float                                              InitialDelay                                       // 0x68(0x4)
	float                                              FadeInTime                                         // 0x6c(0x4)
	float                                              Duration                                           // 0x70(0x4)
	float                                              FadeOutTime                                        // 0x74(0x4)
};


// Size 0x10
class SoundNode: public Object
{
public:
	TArray<class ChildNodes*>                          ChildNodes                                         // 0x28(0x10)
};


// Size 0x0
class SoundNodeAssetReferencer: public SoundNode
{
public:
};


// Size 0x30
class SoundNodeWavePlayer: public SoundNodeAssetReferencer
{
public:
	Class SoundWave*                                   SoundWave                                          // 0x58(0x8)
	bool                                               bLooping                                           // 0x60(0x1)
};


// Size 0xd0
class SoundNodeAttenuation: public SoundNode
{
public:
	Class SoundAttenuation*                            AttenuationSettings                                // 0x38(0x8)
	Struct AttenuationSettings                         AttenuationOverrides                               // 0x40(0xc0)
	bool                                               bOverrideAttenuation                               // 0x100(0x1)
};


// Size 0x8
class SoundNodeBranch: public SoundNode
{
public:
	struct FName                                       BoolParameterName                                  // 0x38(0x8)
};


// Size 0x10
class SoundNodeConcatenator: public SoundNode
{
public:
	TArray<Float None>                                 InputVolume                                        // 0x38(0x10)
};


// Size 0x8
class SoundNodeDelay: public SoundNode
{
public:
	float                                              DelayMin                                           // 0x38(0x4)
	float                                              DelayMax                                           // 0x3c(0x4)
};


// Size 0x28
class SoundNodeDialoguePlayer: public SoundNode
{
public:
	Struct DialogueWaveParameter                       DialogueWaveParameter                              // 0x38(0x20)
	bool                                               bLooping                                           // 0x58(0x1)
};


// Size 0x10
class SoundNodeDistanceCrossFade: public SoundNode
{
public:
	TArray<Struct ParamName>                           CrossFadeInput                                     // 0x38(0x10)
};


// Size 0x8
class SoundNodeParamCrossFade: public SoundNodeDistanceCrossFade
{
public:
	struct FName                                       ParamName                                          // 0x48(0x8)
};


// Size 0x8
class SoundNodeDoppler: public SoundNode
{
public:
	float                                              DopplerIntensity                                   // 0x38(0x4)
};


// Size 0x138
class SoundNodeEnveloper: public SoundNode
{
public:
	float                                              LoopStart                                          // 0x38(0x4)
	float                                              LoopEnd                                            // 0x3c(0x4)
	float                                              DurationAfterLoop                                  // 0x40(0x4)
	int                                                LoopCount                                          // 0x44(0x4)
	bool                                               bLoopIndefinitely                                  // 0x48(0x1)
	bool                                               bLoop                                              // 0x48(0x1)
	Class DistributionFloatConstantCurve*              VolumeInterpCurve                                  // 0x50(0x8)
	Class DistributionFloatConstantCurve*              PitchInterpCurve                                   // 0x58(0x8)
	Struct RuntimeFloatCurve                           VolumeCurve                                        // 0x60(0x80)
	Struct RuntimeFloatCurve                           PitchCurve                                         // 0xe0(0x80)
	float                                              PitchMin                                           // 0x160(0x4)
	float                                              PitchMax                                           // 0x164(0x4)
	float                                              VolumeMin                                          // 0x168(0x4)
	float                                              VolumeMax                                          // 0x16c(0x4)
};


// Size 0x10
class SoundNodeGroupControl: public SoundNode
{
public:
	TArray<Int None>                                   GroupSizes                                         // 0x38(0x10)
};


// Size 0x8
class SoundNodeLooping: public SoundNode
{
public:
	int                                                LoopCount                                          // 0x38(0x4)
	bool                                               bLoopIndefinitely                                  // 0x3c(0x1)
};


// Size 0x0
class SoundNodeMature: public SoundNode
{
public:
};


// Size 0x10
class SoundNodeMixer: public SoundNode
{
public:
	TArray<Float None>                                 InputVolume                                        // 0x38(0x10)
};


// Size 0x10
class SoundNodeModulator: public SoundNode
{
public:
	float                                              PitchMin                                           // 0x38(0x4)
	float                                              PitchMax                                           // 0x3c(0x4)
	float                                              VolumeMin                                          // 0x40(0x4)
	float                                              VolumeMax                                          // 0x44(0x4)
};


// Size 0x40
class SoundNodeModulatorContinuous: public SoundNode
{
public:
	Struct ModulatorContinuousParams                   PitchModulationParams                              // 0x38(0x20)
	Struct ModulatorContinuousParams                   VolumeModulationParams                             // 0x58(0x20)
};


// Size 0x28
class SoundNodeOscillator: public SoundNode
{
public:
	bool                                               bModulateVolume                                    // 0x38(0x1)
	bool                                               bModulatePitch                                     // 0x38(0x1)
	float                                              AmplitudeMin                                       // 0x3c(0x4)
	float                                              AmplitudeMax                                       // 0x40(0x4)
	float                                              FrequencyMin                                       // 0x44(0x4)
	float                                              FrequencyMax                                       // 0x48(0x4)
	float                                              OffsetMin                                          // 0x4c(0x4)
	float                                              OffsetMax                                          // 0x50(0x4)
	float                                              CenterMin                                          // 0x54(0x4)
	float                                              CenterMax                                          // 0x58(0x4)
};


// Size 0x0
class SoundNodeQualityLevel: public SoundNode
{
public:
};


// Size 0x30
class SoundNodeRandom: public SoundNode
{
public:
	TArray<Float None>                                 Weights                                            // 0x38(0x10)
	int                                                PreselectAtLevelLoad                               // 0x48(0x4)
	bool                                               bRandomizeWithoutReplacement                       // 0x4c(0x1)
	TArray<Bool bRandomizeWithoutReplacement>          HasBeenUsed                                        // 0x50(0x10)
	int                                                NumRandomUsed                                      // 0x60(0x4)
};


// Size 0x8
class SoundNodeSoundClass: public SoundNode
{
public:
	Class SoundClass*                                  SoundClassOverride                                 // 0x38(0x8)
};


// Size 0x8
class SoundNodeSwitch: public SoundNode
{
public:
	struct FName                                       IntParameterName                                   // 0x38(0x8)
};


// Size 0x8
class SoundNodeWaveParam: public SoundNode
{
public:
	struct FName                                       WaveParameterName                                  // 0x38(0x8)
};


// Size 0x40
class StaticMeshSocket: public Object
{
public:
	struct FName                                       SocketName                                         // 0x28(0x8)
	Struct Vector                                      RelativeLocation                                   // 0x30(0xc)
	Struct Rotator                                     RelativeRotation                                   // 0x3c(0xc)
	Struct Vector                                      RelativeScale                                      // 0x48(0xc)
	Struct FString                                     Tag                                                // 0x58(0x10)
};


// Size 0x28
class SubsurfaceProfile: public Object
{
public:
	Struct SubsurfaceProfileStruct                     Settings                                           // 0x28(0x24)
};


// Size 0x0
class TestInterfaceAlternative: public Interface
{
public:
};


// Size 0xa8
class TextPropertyTestObject: public Object
{
public:
	Struct FText                                       DefaultedText                                      // 0x28(0x38)
	Struct FText                                       UndefaultedText                                    // 0x60(0x38)
	Struct FText                                       TransientText                                      // 0x98(0x38)
};


// Size 0x8
class LightMapTexture2D: public Texture2D
{
public:
};


// Size 0x8
class ShadowMapTexture2D: public Texture2D
{
public:
	byte                                               ShadowmapFlags                                     // 0x190(0x1)
};


// Size 0x8
class TextureLightProfile: public Texture2D
{
public:
	float                                              Brightness                                         // 0x190(0x4)
	float                                              TextureMultiplier                                  // 0x194(0x4)
};


// Size 0x18
class Texture2DDynamic: public Texture
{
public:
	byte                                               Format                                             // 0x140(0x1)
};


// Size 0x58
class TextureCube: public Texture
{
public:
};


// Size 0x20
class TextureRenderTargetCube: public TextureRenderTarget
{
public:
	int                                                SizeX                                              // 0x140(0x4)
	Struct LinearColor                                 ClearColor                                         // 0x144(0x10)
	byte                                               OverrideFormat                                     // 0x154(0x1)
	bool                                               bHDR                                               // 0x158(0x1)
	bool                                               bForceLinearGamma                                  // 0x158(0x1)
};


// Size 0x0
class ThumbnailInfo: public Object
{
public:
};


// Size 0x70
class TimelineTemplate: public Object
{
public:
	float                                              TimelineLength                                     // 0x28(0x4)
	byte                                               LengthMode                                         // 0x2c(0x1)
	bool                                               bAutoPlay                                          // 0x30(0x1)
	bool                                               bLoop                                              // 0x30(0x1)
	bool                                               bReplicated                                        // 0x30(0x1)
	bool                                               bValidatedAsWired                                  // 0x30(0x1)
	TArray<Struct bValidatedAsWired>                   EventTracks                                        // 0x38(0x10)
	TArray<Struct EventTracks>                         FloatTracks                                        // 0x48(0x10)
	TArray<Struct FloatTracks>                         VectorTracks                                       // 0x58(0x10)
	TArray<Struct VectorTracks>                        LinearColorTracks                                  // 0x68(0x10)
	TArray<Struct LinearColorTracks>                   MetaDataArray                                      // 0x78(0x10)
	Struct Guid                                        TimelineGuid                                       // 0x88(0x10)
};


// Size 0x30
class TouchInterface: public Object
{
public:
	TArray<Struct DisplayNames>                        Controls                                           // 0x28(0x10)
	float                                              ActiveOpacity                                      // 0x38(0x4)
	float                                              InactiveOpacity                                    // 0x3c(0x4)
	float                                              TimeUntilDeactive                                  // 0x40(0x4)
	float                                              TimeUntilReset                                     // 0x44(0x4)
	float                                              ActivationDelay                                    // 0x48(0x4)
	bool                                               bPreventRecenter                                   // 0x4c(0x1)
	float                                              StartupDelay                                       // 0x50(0x4)
};


// Size 0x10
class UserDefinedEnum: public Enum
{
public:
	TArray<Text None>                                  DisplayNames                                       // 0x58(0x10)
};


// Size 0x0
class AnimDataEntryStruct: public UserDefinedStruct
{
public:
};


// Size 0x20
class VectorField: public Object
{
public:
	Struct Box                                         Bounds                                             // 0x28(0x1c)
	float                                              Intensity                                          // 0x44(0x4)
};


// Size 0x40
class VectorFieldAnimated: public VectorField
{
public:
	Class Texture2D*                                   Texture                                            // 0x48(0x8)
	byte                                               ConstructionOp                                     // 0x50(0x1)
	int                                                VolumeSizeX                                        // 0x54(0x4)
	int                                                VolumeSizeY                                        // 0x58(0x4)
	int                                                VolumeSizeZ                                        // 0x5c(0x4)
	int                                                SubImagesX                                         // 0x60(0x4)
	int                                                SubImagesY                                         // 0x64(0x4)
	int                                                FrameCount                                         // 0x68(0x4)
	float                                              FramesPerSecond                                    // 0x6c(0x4)
	bool                                               bLoop                                              // 0x70(0x1)
	Class VectorFieldStatic*                           NoiseField                                         // 0x78(0x8)
	float                                              NoiseScale                                         // 0x80(0x4)
	float                                              NoiseMax                                           // 0x84(0x4)
};


// Size 0x88
class VectorFieldStatic: public VectorField
{
public:
	int                                                SizeX                                              // 0x48(0x4)
	int                                                SizeY                                              // 0x4c(0x4)
	int                                                SizeZ                                              // 0x50(0x4)
};


// Size 0x8
class VertexAnimBase: public Object
{
public:
	Class SkeletalMesh*                                BaseSkelMesh                                       // 0x28(0x8)
};


// Size 0x10
class MorphTarget: public VertexAnimBase
{
public:
};


// Size 0x18
class VertexAnimation: public VertexAnimBase
{
public:
	int                                                NumAnimatedVerts                                   // 0x30(0x4)
};


// Size 0x0
class VisualLoggerAutomationTests: public Object
{
public:
};


// Size 0x0
class Default__BlueprintGeneratedClass: public None
{
public:
};


}