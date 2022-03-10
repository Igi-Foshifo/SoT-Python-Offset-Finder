namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x28
class DistributionLookupTable: public None
{
public:
	byte                                               Op                                                 // 0x0(0x1)
	byte                                               EntryCount                                         // 0x1(0x1)
	byte                                               EntryStride                                        // 0x2(0x1)
	byte                                               SubEntryStride                                     // 0x3(0x1)
	float                                              TimeScale                                          // 0x4(0x4)
	float                                              TimeBias                                           // 0x8(0x4)
	TArray<Float /Game/Animation/ThirdPerson/items/pocketwatch/action2/large/3rd> Values                                             // 0x10(0x10)
	byte                                               LockFlag                                           // 0x20(0x1)
};


// Size 0x28
class RawDistribution: public None
{
public:
	Struct DistributionLookupTable                     Table                                              // 0x0(0x28)
};


// Size 0x28
class FloatDistribution: public None
{
public:
	Struct DistributionLookupTable                     Table                                              // 0x0(0x28)
};


// Size 0x28
class VectorDistribution: public None
{
public:
	Struct DistributionLookupTable                     Table                                              // 0x0(0x28)
};


// Size 0x28
class Vector4Distribution: public None
{
public:
	Struct DistributionLookupTable                     Table                                              // 0x0(0x28)
};


// Size 0x38
class ExpressionInput: public None
{
public:
	Class MaterialExpression*                          Expression                                         // 0x0(0x8)
	int                                                OutputIndex                                        // 0x8(0x4)
	Struct FString                                     InputName                                          // 0x10(0x10)
	int                                                Mask                                               // 0x20(0x4)
	int                                                MaskR                                              // 0x24(0x4)
	int                                                MaskG                                              // 0x28(0x4)
	int                                                MaskB                                              // 0x2c(0x4)
	int                                                MaskA                                              // 0x30(0x4)
	int                                                GCC64_Padding                                      // 0x34(0x4)
};


// Size 0x38
class MaterialAttributesInput: public None
{
public:
};


// Size 0x28
class ExpressionOutput: public None
{
public:
	Struct FString                                     OutputName                                         // 0x0(0x10)
	int                                                Mask                                               // 0x10(0x4)
	int                                                MaskR                                              // 0x14(0x4)
	int                                                MaskG                                              // 0x18(0x4)
	int                                                MaskB                                              // 0x1c(0x4)
	int                                                MaskA                                              // 0x20(0x4)
};


// Size 0x38
class MaterialInput: public None
{
public:
	Class MaterialExpression*                          Expression                                         // 0x0(0x8)
	int                                                OutputIndex                                        // 0x8(0x4)
	Struct FString                                     InputName                                          // 0x10(0x10)
	int                                                Mask                                               // 0x20(0x4)
	int                                                MaskR                                              // 0x24(0x4)
	int                                                MaskG                                              // 0x28(0x4)
	int                                                MaskB                                              // 0x2c(0x4)
	int                                                MaskA                                              // 0x30(0x4)
	int                                                GCC64_Padding                                      // 0x34(0x4)
};


// Size 0x40
class ColorMaterialInput: public None
{
public:
	bool                                               UseConstant                                        // 0x38(0x1)
	Struct Color                                       Constant                                           // 0x3c(0x4)
};


// Size 0x40
class ScalarMaterialInput: public None
{
public:
	bool                                               UseConstant                                        // 0x38(0x1)
	float                                              Constant                                           // 0x3c(0x4)
};


// Size 0x48
class VectorMaterialInput: public None
{
public:
	bool                                               UseConstant                                        // 0x38(0x1)
	Struct Vector                                      Constant                                           // 0x3c(0xc)
};


// Size 0x48
class Vector2MaterialInput: public None
{
public:
	bool                                               UseConstant                                        // 0x38(0x1)
	float                                              ConstantX                                          // 0x3c(0x4)
	float                                              ConstantY                                          // 0x40(0x4)
};


// Size 0x80
class HitResult: public None
{
public:
	bool                                               bBlockingHit                                       // 0x0(0x1)
	bool                                               bStartPenetrating                                  // 0x0(0x1)
	float                                              Time                                               // 0x4(0x4)
	float                                              Distance                                           // 0x8(0x4)
	Struct Vector_NetQuantize                          Location                                           // 0xc(0xc)
	Struct Vector_NetQuantize                          ImpactPoint                                        // 0x18(0xc)
	Struct Vector_NetQuantizeNormal                    Normal                                             // 0x24(0xc)
	Struct Vector_NetQuantizeNormal                    ImpactNormal                                       // 0x30(0xc)
	Struct Vector_NetQuantize                          TraceStart                                         // 0x3c(0xc)
	Struct Vector_NetQuantize                          TraceEnd                                           // 0x48(0xc)
	float                                              PenetrationDepth                                   // 0x54(0x4)
	int                                                Item                                               // 0x58(0x4)
	struct FName                                       BoneName                                           // 0x74(0x8)
	int                                                FaceIndex                                          // 0x7c(0x4)
};


// Size 0xc
class Vector_NetQuantize: public None
{
public:
};


// Size 0xc
class Vector_NetQuantizeNormal: public None
{
public:
};


// Size 0x8
class ActorPtr: public None
{
public:
	Class Actor*                                       Actor                                              // 0x0(0x8)
};


// Size 0x48
class RepAttachment: public None
{
public:
	Class Actor*                                       AttachParent                                       // 0x0(0x8)
	Struct Vector_NetQuantize100                       LocationOffset                                     // 0x8(0xc)
	Struct Vector_NetQuantize100                       RelativeScale3D                                    // 0x14(0xc)
	Struct Rotator                                     RotationOffset                                     // 0x20(0xc)
	struct FName                                       AttachSocket                                       // 0x2c(0x8)
	Class SceneComponent*                              AttachComponent                                    // 0x38(0x8)
};


// Size 0xc
class Vector_NetQuantize100: public None
{
public:
};


// Size 0x38
class RepMovement: public None
{
public:
	Struct Vector                                      LinearVelocity                                     // 0x0(0xc)
	Struct Vector                                      AngularVelocity                                    // 0xc(0xc)
	Struct Vector                                      Location                                           // 0x18(0xc)
	Struct Rotator                                     Rotation                                           // 0x24(0xc)
	bool                                               bSimulatedPhysicSleep                              // 0x30(0x1)
	bool                                               bRepPhysics                                        // 0x30(0x1)
	byte                                               LocationQuantizationLevel                          // 0x31(0x1)
	byte                                               VelocityQuantizationLevel                          // 0x32(0x1)
	byte                                               RotationQuantizationLevel                          // 0x33(0x1)
};


// Size 0x50
class ActorTickFunction: public None
{
public:
};


// Size 0x48
class TickFunction: public None
{
public:
	byte                                               TickGroup                                          // 0x30(0x1)
	bool                                               bTickEvenWhenPaused                                // 0x32(0x1)
	bool                                               bCanEverTick                                       // 0x32(0x1)
	bool                                               bStartWithTickEnabled                              // 0x32(0x1)
	bool                                               bAllowTickOnDedicatedServer                        // 0x32(0x1)
	float                                              TickInterval                                       // 0x40(0x4)
};


// Size 0x20
class SimpleMemberReference: public None
{
public:
	Class Object*                                      MemberParent                                       // 0x0(0x8)
	struct FName                                       MemberName                                         // 0x8(0x8)
	Struct Guid                                        MemberGuid                                         // 0x10(0x10)
};


// Size 0x50
class ActorComponentTickFunction: public None
{
public:
};


// Size 0x40
class SubtitleCue: public None
{
public:
	Struct FText                                       Text                                               // 0x0(0x38)
	float                                              Time                                               // 0x38(0x4)
};


// Size 0x1c
class InterpControlPoint: public None
{
public:
	Struct Vector                                      PositionControlPoint                               // 0x0(0xc)
	bool                                               bPositionIsRelative                                // 0xc(0x1)
};


// Size 0x38
class PlatformInterfaceDelegateResult: public None
{
public:
	bool                                               bSuccessful                                        // 0x0(0x1)
	Struct PlatformInterfaceData                       Data                                               // 0x8(0x30)
};


// Size 0x30
class PlatformInterfaceData: public None
{
public:
	struct FName                                       DataName                                           // 0x0(0x8)
	byte                                               Type                                               // 0x8(0x1)
	int                                                IntValue                                           // 0xc(0x4)
	float                                              FloatValue                                         // 0x10(0x4)
	Struct FString                                     StringValue                                        // 0x18(0x10)
	Class Object*                                      ObjectValue                                        // 0x28(0x8)
};


// Size 0x20
class DebugFloatHistory: public None
{
public:
	TArray<Float CustomParticleEffectSpawnTransform>   Samples                                            // 0x0(0x10)
	float                                              MaxSamples                                         // 0x10(0x4)
	float                                              MinValue                                           // 0x14(0x4)
	float                                              MaxValue                                           // 0x18(0x4)
	bool                                               bAutoAdjustMinMax                                  // 0x1c(0x1)
};


// Size 0x18
class LatentActionInfo: public None
{
public:
	int                                                Linkage                                            // 0x0(0x4)
	int                                                UUID                                               // 0x4(0x4)
	struct FName                                       ExecutionFunction                                  // 0x8(0x8)
	Class Object*                                      CallbackTarget                                     // 0x10(0x8)
};


// Size 0x4
class TimerHandle: public None
{
public:
};


// Size 0x8
class CollisionProfileName: public None
{
public:
	struct FName                                       Name                                               // 0x0(0x8)
};


// Size 0x4
class GenericStruct: public None
{
public:
	int                                                Data                                               // 0x0(0x4)
};


// Size 0x8
class FastArraySerializerItem: public None
{
public:
	int                                                ReplicationID                                      // 0x0(0x4)
	int                                                ReplicationKey                                     // 0x4(0x4)
};


// Size 0xa8
class FastArraySerializer: public None
{
public:
};


// Size 0x84
class OverlapInfo: public None
{
public:
};


// Size 0x8
class WalkableSlopeOverride: public None
{
public:
	byte                                               WalkableSlopeBehavior                              // 0x0(0x1)
	float                                              WalkableSlopeAngle                                 // 0x4(0x4)
};


// Size 0x50
class PrimitiveComponentPostPhysicsTickFunction: public None
{
public:
};


// Size 0x180
class BodyInstance: public None
{
public:
	Struct Vector                                      Scale3D                                            // 0x4(0xc)
	struct FName                                       CollisionProfileName                               // 0x14(0x8)
	Struct CollisionResponse                           CollisionResponses                                 // 0x20(0x30)
	bool                                               bUseCCD                                            // 0x50(0x1)
	bool                                               bNotifyRigidBodyCollision                          // 0x50(0x1)
	bool                                               bSimulatePhysics                                   // 0x50(0x1)
	bool                                               bOverrideMass                                      // 0x50(0x1)
	bool                                               bOverrideMassProperties                            // 0x50(0x1)
	bool                                               bEnableGravity                                     // 0x50(0x1)
	bool                                               bAutoWeld                                          // 0x50(0x1)
	bool                                               bStartAwake                                        // 0x51(0x1)
	bool                                               bGenerateWakeEvents                                // 0x51(0x1)
	bool                                               bUpdateMassWhenScaleChanges                        // 0x51(0x1)
	bool                                               bLockTranslation                                   // 0x51(0x1)
	bool                                               bLockRotation                                      // 0x51(0x1)
	bool                                               bLockXTranslation                                  // 0x51(0x1)
	bool                                               bLockYTranslation                                  // 0x51(0x1)
	bool                                               bLockZTranslation                                  // 0x51(0x1)
	bool                                               bLockXRotation                                     // 0x52(0x1)
	bool                                               bLockYRotation                                     // 0x52(0x1)
	bool                                               bLockZRotation                                     // 0x52(0x1)
	bool                                               bOverrideMaxAngularVelocity                        // 0x52(0x1)
	bool                                               bUseAsyncScene                                     // 0x52(0x1)
	bool                                               bOverrideMaxDepenetrationVelocity                  // 0x52(0x1)
	bool                                               bOverrideWalkableSlopeOnInstance                   // 0x52(0x1)
	float                                              MaxDepenetrationVelocity                           // 0x54(0x4)
	float                                              MassInKg                                           // 0x58(0x4)
	Struct MassPropertiesOverride                      MassPropertiesOverride                             // 0x5c(0x24)
	float                                              LinearDamping                                      // 0x80(0x4)
	float                                              AngularDamping                                     // 0x84(0x4)
	Struct Vector                                      COMNudge                                           // 0x88(0xc)
	float                                              MassScale                                          // 0x94(0x4)
	Struct WalkableSlopeOverride                       WalkableSlopeOverride                              // 0xa8(0x8)
	Class PhysicalMaterial*                            PhysMaterialOverride                               // 0xb0(0x8)
	float                                              MaxAngularVelocity                                 // 0xb8(0x4)
	float                                              CustomSleepThresholdMultiplier                     // 0xbc(0x4)
	float                                              PhysicsBlendWeight                                 // 0xc0(0x4)
	int                                                PositionSolverIterationCount                       // 0xc4(0x4)
	byte                                               DominanceGroup                                     // 0xc8(0x1)
	int                                                VelocitySolverIterationCount                       // 0x110(0x4)
	byte                                               SleepFamily                                        // 0x17c(0x1)
	byte                                               DOFMode                                            // 0x17d(0x1)
	byte                                               CollisionEnabled                                   // 0x17e(0x1)
	byte                                               ObjectType                                         // 0x17f(0x1)
};


// Size 0x24
class MassPropertiesOverride: public None
{
public:
	Struct Vector                                      InertiaTensorOverride                              // 0x0(0xc)
	Struct Vector                                      COMTranslationOverride                             // 0xc(0xc)
	Struct Rotator                                     COMRotatorOverride                                 // 0x18(0xc)
};


// Size 0x30
class CollisionResponse: public None
{
public:
	Struct CollisionResponseContainer                  ResponseToChannels                                 // 0x0(0x20)
	TArray<Struct ResponseChannel>                     ResponseArray                                      // 0x20(0x10)
};


// Size 0xc
class ResponseChannel: public None
{
public:
	struct FName                                       Channel                                            // 0x0(0x8)
	byte                                               Response                                           // 0x8(0x1)
};


// Size 0x20
class CollisionResponseContainer: public None
{
public:
	byte                                               WorldStatic                                        // 0x0(0x1)
	byte                                               WorldDynamic                                       // 0x1(0x1)
	byte                                               Pawn                                               // 0x2(0x1)
	byte                                               Visibility                                         // 0x3(0x1)
	byte                                               Camera                                             // 0x4(0x1)
	byte                                               PhysicsBody                                        // 0x5(0x1)
	byte                                               Vehicle                                            // 0x6(0x1)
	byte                                               Destructible                                       // 0x7(0x1)
	byte                                               EngineTraceChannel1                                // 0x8(0x1)
	byte                                               EngineTraceChannel2                                // 0x9(0x1)
	byte                                               EngineTraceChannel3                                // 0xa(0x1)
	byte                                               EngineTraceChannel4                                // 0xb(0x1)
	byte                                               EngineTraceChannel5                                // 0xc(0x1)
	byte                                               EngineTraceChannel6                                // 0xd(0x1)
	byte                                               GameTraceChannel1                                  // 0xe(0x1)
	byte                                               GameTraceChannel2                                  // 0xf(0x1)
	byte                                               GameTraceChannel3                                  // 0x10(0x1)
	byte                                               GameTraceChannel4                                  // 0x11(0x1)
	byte                                               GameTraceChannel5                                  // 0x12(0x1)
	byte                                               GameTraceChannel6                                  // 0x13(0x1)
	byte                                               GameTraceChannel7                                  // 0x14(0x1)
	byte                                               GameTraceChannel8                                  // 0x15(0x1)
	byte                                               GameTraceChannel9                                  // 0x16(0x1)
	byte                                               GameTraceChannel10                                 // 0x17(0x1)
	byte                                               GameTraceChannel11                                 // 0x18(0x1)
	byte                                               GameTraceChannel12                                 // 0x19(0x1)
	byte                                               GameTraceChannel13                                 // 0x1a(0x1)
	byte                                               GameTraceChannel14                                 // 0x1b(0x1)
	byte                                               GameTraceChannel15                                 // 0x1c(0x1)
	byte                                               GameTraceChannel16                                 // 0x1d(0x1)
	byte                                               GameTraceChannel17                                 // 0x1e(0x1)
	byte                                               GameTraceChannel18                                 // 0x1f(0x1)
};


// Size 0x10
class CustomPrimitiveData: public None
{
public:
	TArray<Float >                                     Data                                               // 0x0(0x10)
};


// Size 0x80
class RuntimeFloatCurve: public None
{
public:
	Struct RichCurve                                   EditorCurveData                                    // 0x0(0x78)
	Class CurveFloat*                                  ExternalCurve                                      // 0x78(0x8)
};


// Size 0x78
class RichCurve: public None
{
public:
	byte                                               PreInfinityExtrap                                  // 0x58(0x1)
	byte                                               PostInfinityExtrap                                 // 0x59(0x1)
	TArray<Struct RichCurveKey>                        Keys                                               // 0x60(0x10)
	float                                              DefaultValue                                       // 0x70(0x4)
};


// Size 0x58
class IndexedCurve: public None
{
public:
	Struct KeyHandleMap                                KeyHandlesToIndices                                // 0x8(0x50)
};


// Size 0x50
class KeyHandleMap: public None
{
public:
};


// Size 0x1c
class RichCurveKey: public None
{
public:
	byte                                               InterpMode                                         // 0x0(0x1)
	byte                                               TangentMode                                        // 0x1(0x1)
	byte                                               TangentWeightMode                                  // 0x2(0x1)
	float                                              Time                                               // 0x4(0x4)
	float                                              Value                                              // 0x8(0x4)
	float                                              ArriveTangent                                      // 0xc(0x4)
	float                                              ArriveTangentWeight                                // 0x10(0x4)
	float                                              LeaveTangent                                       // 0x14(0x4)
	float                                              LeaveTangentWeight                                 // 0x18(0x4)
};


// Size 0x14
class NetActorPtr: public None
{
public:
	Struct NetObjectPtr                                ObjectPtr                                          // 0x0(0x14)
};


// Size 0x14
class NetObjectPtr: public None
{
public:
};


// Size 0x20
class PacketDiscardStats: public None
{
public:
	int                                                DiscardCounts                                      // 0x0(0x4)
	int                                                BytesDiscarded                                     // 0x1c(0x4)
};


// Size 0x8
class FeatureFlag: public None
{
public:
	struct FName                                       FeatureName                                        // 0x0(0x8)
};


// Size 0x18
class UniqueNetIdRepl: public None
{
public:
};


// Size 0xc0
class RainPostProcessSettings: public None
{
public:
	bool                                               bOverride_RainParticleTexture                      // 0x0(0x1)
	bool                                               bOverride_RainMeshTexture                          // 0x0(0x1)
	bool                                               bOverride_RainIntensity                            // 0x0(0x1)
	bool                                               bOverride_RainParticleAlpha                        // 0x0(0x1)
	bool                                               bOverride_RainCloseParticleAlphaReductionMultiplier // 0x0(0x1)
	bool                                               bOverride_RainCloseParticleAlphaDistance           // 0x0(0x1)
	bool                                               bOverride_RainParticleDensity                      // 0x0(0x1)
	bool                                               bOverride_RainParticleSpeed                        // 0x0(0x1)
	bool                                               bOverride_RainParticleWindVelocity                 // 0x1(0x1)
	bool                                               bOverride_RainParticleWidth                        // 0x1(0x1)
	bool                                               bOverride_RainParticleLength                       // 0x1(0x1)
	bool                                               bOverride_RainMeshScale                            // 0x1(0x1)
	bool                                               bOverride_RainMeshTextureScroll                    // 0x1(0x1)
	bool                                               bOverride_RainMeshTextureTiling                    // 0x1(0x1)
	bool                                               bOverride_RainMeshAlpha                            // 0x1(0x1)
	bool                                               bOverride_RainMeshRowDivision                      // 0x1(0x1)
	bool                                               bOverride_RainMeshColumnDivision                   // 0x2(0x1)
	bool                                               bOverride_RainMeshBrightness                       // 0x2(0x1)
	bool                                               bOverride_RainBrightness                           // 0x2(0x1)
	bool                                               bOverride_RainTint                                 // 0x2(0x1)
	bool                                               bOverride_RainMeshEndRadiusScale                   // 0x2(0x1)
	bool                                               bOverride_RainMeshEndAlphaFade                     // 0x2(0x1)
	bool                                               bOverride_RainMeshFadeDistance                     // 0x2(0x1)
	bool                                               bOverride_RainAnimationFrameTime                   // 0x2(0x1)
	bool                                               bOverride_RainSplashesPerSecond                    // 0x3(0x1)
	bool                                               bOverride_RainSplashesPerSquareMetre               // 0x3(0x1)
	bool                                               bOverride_RainSplashesMaxPlacementAngle            // 0x3(0x1)
	bool                                               bOverride_RainSplashData                           // 0x3(0x1)
	bool                                               bOverride_RainSplashesMaxDistance1                 // 0x3(0x1)
	bool                                               bOverride_RainSplashData2                          // 0x3(0x1)
	bool                                               bOverride_RainSplashesMaxDistance2                 // 0x3(0x1)
	Class Texture*                                     RainParticleTexture                                // 0x8(0x8)
	Class Texture*                                     RainMeshTexture                                    // 0x10(0x8)
	float                                              RainIntensity                                      // 0x18(0x4)
	float                                              RainParticleAlpha                                  // 0x1c(0x4)
	float                                              RainCloseParticleAlphaReductionMultiplier          // 0x20(0x4)
	float                                              RainCloseParticleAlphaDistance                     // 0x24(0x4)
	float                                              RainParticleDensity                                // 0x28(0x4)
	float                                              RainParticleSpeed                                  // 0x2c(0x4)
	Struct Vector                                      RainParticleWindVelocity                           // 0x30(0xc)
	float                                              RainParticleWidth                                  // 0x3c(0x4)
	float                                              RainParticleLength                                 // 0x40(0x4)
	Struct Vector                                      RainMeshScale                                      // 0x44(0xc)
	Struct Vector2D                                    RainMeshTextureScroll                              // 0x50(0x8)
	Struct Vector2D                                    RainMeshTextureTiling                              // 0x58(0x8)
	float                                              RainMeshAlpha                                      // 0x60(0x4)
	int                                                RainMeshRowDivision                                // 0x64(0x4)
	int                                                RainMeshColumnDivision                             // 0x68(0x4)
	float                                              RainMeshEndRadiusScale                             // 0x6c(0x4)
	float                                              RainMeshEndAlphaFade                               // 0x70(0x4)
	float                                              RainMeshFadeDistance                               // 0x74(0x4)
	float                                              RainMeshBrightness                                 // 0x78(0x4)
	float                                              RainBrightness                                     // 0x7c(0x4)
	Struct LinearColor                                 RainTint                                           // 0x80(0x10)
	float                                              RainAnimationFrameTime                             // 0x90(0x4)
	int                                                RainSplashesPerSecond                              // 0x94(0x4)
	float                                              RainSplashesPerSquareMetre                         // 0x98(0x4)
	float                                              RainSplashesMaxPlacementAngle                      // 0x9c(0x4)
	Class ParticleComputeShaderData*                   RainSplashData                                     // 0xa0(0x8)
	float                                              RainSplashesMaxDistance1                           // 0xa8(0x4)
	Class ParticleComputeShaderData*                   RainSplashData2                                    // 0xb0(0x8)
	float                                              RainSplashesMaxDistance2                           // 0xb8(0x4)
};


// Size 0x170
class RuntimeVectorCurve: public None
{
public:
	Struct RichCurve                                   FloatCurves                                        // 0x0(0x78)
	Class CurveVector*                                 ExternalCurve                                      // 0x168(0x8)
};


// Size 0x1
class TableRowBase: public None
{
public:
};


// Size 0x14
class NetSubObjectPtr: public None
{
public:
	Struct NetObjectPtr                                SubObject                                          // 0x0(0x14)
};


// Size 0x30
class AnimNode_Base: public None
{
public:
	Struct ExposedValueHandler                         EvaluateGraphExposedInputs                         // 0x8(0x28)
};


// Size 0x28
class ExposedValueHandler: public None
{
public:
	struct FName                                       BoundFunction                                      // 0x0(0x8)
	TArray<Struct ExposedValueCopyRecord>              CopyRecords                                        // 0x8(0x10)
};


// Size 0x70
class ExposedValueCopyRecord: public None
{
public:
	Class Property*                                    SourceProperty                                     // 0x0(0x8)
	struct FName                                       SourcePropertyName                                 // 0x8(0x8)
	TArray<Struct FName>                               SourceSubPropertyNames                             // 0x10(0x10)
	int                                                SourceArrayIndex                                   // 0x20(0x4)
	Class Property*                                    DestProperty                                       // 0x28(0x8)
	int                                                DestArrayIndex                                     // 0x30(0x4)
	int                                                Size                                               // 0x34(0x4)
	byte                                               PostCopyOperation                                  // 0x38(0x1)
	Class BoolProperty*                                CachedBoolSourceProperty                           // 0x40(0x8)
	Class BoolProperty*                                CachedBoolDestProperty                             // 0x48(0x8)
};


// Size 0x8
class InputScaleBias: public None
{
public:
	float                                              Scale                                              // 0x0(0x4)
	float                                              Bias                                               // 0x4(0x4)
};


// Size 0x18
class ComponentSpacePoseLink: public None
{
public:
};


// Size 0x18
class PoseLinkBase: public None
{
public:
	int                                                LinkID                                             // 0x0(0x4)
};


// Size 0xc
class BoneReference: public None
{
public:
	struct FName                                       BoneName                                           // 0x0(0x8)
};


// Size 0x70
class IntegralCurve: public None
{
public:
	TArray<Struct IntegralKey>                         Keys                                               // 0x58(0x10)
	int                                                DefaultValue                                       // 0x68(0x4)
	bool                                               bUseDefaultValueBeforeFirstKey                     // 0x6c(0x1)
};


// Size 0x8
class IntegralKey: public None
{
public:
	float                                              Time                                               // 0x0(0x4)
	int                                                Value                                              // 0x4(0x4)
};


// Size 0x78
class StringCurve: public None
{
public:
	Struct FString                                     DefaultValue                                       // 0x58(0x10)
	TArray<Struct StringCurveKey>                      Keys                                               // 0x68(0x10)
};


// Size 0x18
class StringCurveKey: public None
{
public:
	float                                              Time                                               // 0x0(0x4)
	Struct FString                                     Value                                              // 0x8(0x10)
};


// Size 0x10
class DirectoryPath: public None
{
public:
	Struct FString                                     path                                               // 0x0(0x10)
};


// Size 0x50
class EdGraphPinType: public None
{
public:
	Struct FString                                     PinCategory                                        // 0x0(0x10)
	Struct FString                                     PinSubCategory                                     // 0x10(0x10)
	Struct SimpleMemberReference                       PinSubCategoryMemberReference                      // 0x28(0x20)
	bool                                               bIsArray                                           // 0x48(0x1)
	bool                                               bIsReference                                       // 0x49(0x1)
	bool                                               bIsConst                                           // 0x4a(0x1)
	bool                                               bIsWeakPointer                                     // 0x4b(0x1)
};


// Size 0x8
class ExposureSettings: public None
{
public:
	int                                                LogOffset                                          // 0x0(0x4)
	bool                                               bFixed                                             // 0x4(0x1)
};


// Size 0x70
class URL: public None
{
public:
	Struct FString                                     Protocol                                           // 0x0(0x10)
	Struct FString                                     Host                                               // 0x10(0x10)
	int                                                Port                                               // 0x20(0x4)
	Struct FString                                     Map                                                // 0x28(0x10)
	Struct FString                                     RedirectURL                                        // 0x38(0x10)
	TArray<Str >                                       Op                                                 // 0x48(0x10)
	Struct FString                                     Portal                                             // 0x58(0x10)
	int                                                Valid                                              // 0x68(0x4)
};


// Size 0x10
class TickPrerequisite: public None
{
public:
};


// Size 0xc
class Vector_NetQuantize10: public None
{
public:
};


// Size 0x50
class SimplygonRemeshingSettings: public None
{
public:
	bool                                               bActive                                            // 0x0(0x1)
	int                                                ScreenSize                                         // 0x4(0x4)
	bool                                               bRecalculateNormals                                // 0x8(0x1)
	float                                              HardAngleThreshold                                 // 0xc(0x4)
	int                                                MergeDistance                                      // 0x10(0x4)
	bool                                               bUseClippingPlane                                  // 0x14(0x1)
	float                                              ClippingLevel                                      // 0x18(0x4)
	int                                                AxisIndex                                          // 0x1c(0x4)
	bool                                               bPlaneNegativeHalfspace                            // 0x20(0x1)
	bool                                               bUseMassiveLOD                                     // 0x21(0x1)
	bool                                               bUseAggregateLOD                                   // 0x22(0x1)
	Struct SimplygonMaterialLODSettings                MaterialLODSettings                                // 0x28(0x28)
};


// Size 0x28
class SimplygonMaterialLODSettings: public None
{
public:
	bool                                               bActive                                            // 0x0(0x1)
	byte                                               MaterialLODType                                    // 0x1(0x1)
	bool                                               bUseAutomaticSizes                                 // 0x2(0x1)
	byte                                               TextureWidth                                       // 0x3(0x1)
	byte                                               TextureHeight                                      // 0x4(0x1)
	byte                                               SamplingQuality                                    // 0x5(0x1)
	int                                                GutterSpace                                        // 0x8(0x4)
	byte                                               TextureStrech                                      // 0xc(0x1)
	bool                                               bReuseExistingCharts                               // 0xd(0x1)
	TArray<Struct SimplygonChannelCastingSettings>     ChannelsToCast                                     // 0x10(0x10)
	bool                                               bBakeVertexData                                    // 0x20(0x1)
	bool                                               bBakeActorData                                     // 0x21(0x1)
	bool                                               bAllowMultiMaterial                                // 0x22(0x1)
	bool                                               bPreferTwoSideMaterials                            // 0x23(0x1)
};


// Size 0x10
class SimplygonChannelCastingSettings: public None
{
public:
	byte                                               MaterialChannel                                    // 0x0(0x1)
	byte                                               Caster                                             // 0x1(0x1)
	bool                                               bActive                                            // 0x2(0x1)
	byte                                               ColorChannels                                      // 0x3(0x1)
	int                                                BitsPerChannel                                     // 0x4(0x4)
	bool                                               bUseSRGB                                           // 0x8(0x1)
	bool                                               bBakeVertexColors                                  // 0x9(0x1)
	bool                                               bFlipBackfacingNormals                             // 0xa(0x1)
	bool                                               bUseTangentSpaceNormals                            // 0xb(0x1)
	bool                                               bFlipGreenChannel                                  // 0xc(0x1)
};


// Size 0x60
class CanvasUVTri: public None
{
public:
	Struct Vector2D                                    V0_Pos                                             // 0x0(0x8)
	Struct Vector2D                                    V0_UV                                              // 0x8(0x8)
	Struct LinearColor                                 V0_Color                                           // 0x10(0x10)
	Struct Vector2D                                    V1_Pos                                             // 0x20(0x8)
	Struct Vector2D                                    V1_UV                                              // 0x28(0x8)
	Struct LinearColor                                 V1_Color                                           // 0x30(0x10)
	Struct Vector2D                                    V2_Pos                                             // 0x40(0x8)
	Struct Vector2D                                    V2_UV                                              // 0x48(0x8)
	Struct LinearColor                                 V2_Color                                           // 0x50(0x10)
};


// Size 0x28
class FontRenderInfo: public None
{
public:
	bool                                               bClipText                                          // 0x0(0x1)
	bool                                               bEnableShadow                                      // 0x0(0x1)
	Struct DepthFieldGlowInfo                          GlowInfo                                           // 0x4(0x24)
};


// Size 0x24
class DepthFieldGlowInfo: public None
{
public:
	bool                                               bEnableGlow                                        // 0x0(0x1)
	Struct LinearColor                                 GlowColor                                          // 0x4(0x10)
	Struct Vector2D                                    GlowOuterRadius                                    // 0x14(0x8)
	Struct Vector2D                                    GlowInnerRadius                                    // 0x1c(0x8)
};


// Size 0x10
class Redirector: public None
{
public:
	struct FName                                       OldName                                            // 0x0(0x8)
	struct FName                                       NewName                                            // 0x8(0x8)
};


// Size 0x10
class FilePath: public None
{
public:
	Struct FString                                     FilePath                                           // 0x0(0x10)
};


// Size 0x18
class ComponentReference: public None
{
public:
	Class Actor*                                       OtherActor                                         // 0x0(0x8)
	struct FName                                       ComponentProperty                                  // 0x8(0x8)
};


// Size 0x8
class ConstrainComponentPropName: public None
{
public:
	struct FName                                       ComponentName                                      // 0x0(0x8)
};


// Size 0x40
class RadialDamageEvent: public None
{
public:
	Struct RadialDamageParams                          Params                                             // 0x10(0x14)
	Struct Vector                                      Origin                                             // 0x24(0xc)
	TArray<Struct Origin>                              ComponentHits                                      // 0x30(0x10)
};


// Size 0x10
class DamageEvent: public None
{
public:
	class                                              DamageTypeClass                                    // 0x8(0x8)
};


// Size 0x14
class RadialDamageParams: public None
{
public:
	float                                              BaseDamage                                         // 0x0(0x4)
	float                                              MinimumDamage                                      // 0x4(0x4)
	float                                              InnerRadius                                        // 0x8(0x4)
	float                                              OuterRadius                                        // 0xc(0x4)
	float                                              DamageFalloff                                      // 0x10(0x4)
};


// Size 0xa0
class PointDamageEvent: public None
{
public:
	float                                              Damage                                             // 0x10(0x4)
	Struct Vector_NetQuantizeNormal                    ShotDirection                                      // 0x14(0xc)
	Struct HitResult                                   HitInfo                                            // 0x20(0x80)
};


// Size 0x1
class CollisionMergingSettings: public None
{
public:
};


// Size 0x38
class MeshMergingSettings: public None
{
public:
	bool                                               bGenerateLightMapUV                                // 0x0(0x1)
	int                                                TargetLightMapUVChannel                            // 0x4(0x4)
	int                                                TargetLightMapResolution                           // 0x8(0x4)
	bool                                               bImportVertexColors                                // 0xc(0x1)
	bool                                               bPivotPointAtZero                                  // 0xd(0x1)
	bool                                               bMergePhysicsData                                  // 0xe(0x1)
	bool                                               bMergeMaterials                                    // 0xf(0x1)
	bool                                               bExportNormalMap                                   // 0x10(0x1)
	bool                                               bExportMetallicMap                                 // 0x11(0x1)
	bool                                               bExportRoughnessMap                                // 0x12(0x1)
	bool                                               bExportSpecularMap                                 // 0x13(0x1)
	int                                                MergedMaterialAtlasResolution                      // 0x14(0x4)
	bool                                               bEnableCollisionMerging                            // 0x18(0x1)
	bool                                               bUseRelativeTransform                              // 0x19(0x1)
	bool                                               bMergeRelativeToFirstComponent                     // 0x1a(0x1)
	bool                                               bDuplicateLODs                                     // 0x1b(0x1)
	TArray<Float >                                     LODScreenSizes                                     // 0x20(0x10)
	int                                                LODForCollision                                    // 0x30(0x4)
};


// Size 0x70
class MeshProxySettings: public None
{
public:
	int                                                ScreenSize                                         // 0x0(0x4)
	Struct MaterialSimplificationSettings              Material                                           // 0x4(0x44)
	int                                                TextureWidth                                       // 0x48(0x4)
	int                                                TextureHeight                                      // 0x4c(0x4)
	bool                                               bExportNormalMap                                   // 0x50(0x1)
	bool                                               bExportMetallicMap                                 // 0x51(0x1)
	bool                                               bExportRoughnessMap                                // 0x52(0x1)
	bool                                               bExportSpecularMap                                 // 0x53(0x1)
	bool                                               bRecalculateNormals                                // 0x54(0x1)
	float                                              HardAngleThreshold                                 // 0x58(0x4)
	int                                                MergeDistance                                      // 0x5c(0x4)
	bool                                               bUseClippingPlane                                  // 0x60(0x1)
	float                                              ClippingLevel                                      // 0x64(0x4)
	int                                                AxisIndex                                          // 0x68(0x4)
	bool                                               bPlaneNegativeHalfspace                            // 0x6c(0x1)
};


// Size 0x44
class MaterialSimplificationSettings: public None
{
public:
	Struct IntPoint                                    BaseColorMapSize                                   // 0x0(0x8)
	bool                                               bNormalMap                                         // 0x8(0x1)
	Struct IntPoint                                    NormalMapSize                                      // 0xc(0x8)
	float                                              MetallicConstant                                   // 0x14(0x4)
	bool                                               bMetallicMap                                       // 0x18(0x1)
	Struct IntPoint                                    MetallicMapSize                                    // 0x1c(0x8)
	float                                              RoughnessConstant                                  // 0x24(0x4)
	bool                                               bRoughnessMap                                      // 0x28(0x1)
	Struct IntPoint                                    RoughnessMapSize                                   // 0x2c(0x8)
	float                                              SpecularConstant                                   // 0x34(0x4)
	bool                                               bSpecularMap                                       // 0x38(0x1)
	Struct IntPoint                                    SpecularMapSize                                    // 0x3c(0x8)
};


// Size 0x40
class MeshBuildSettings: public None
{
public:
	bool                                               bUseMikkTSpace                                     // 0x0(0x1)
	bool                                               bRecomputeNormals                                  // 0x1(0x1)
	bool                                               bRecomputeTangents                                 // 0x2(0x1)
	bool                                               bRemoveDegenerates                                 // 0x3(0x1)
	bool                                               bBuildAdjacencyBuffer                              // 0x4(0x1)
	bool                                               bUseFullPrecisionUVs                               // 0x5(0x1)
	bool                                               bGenerateLightmapUVs                               // 0x6(0x1)
	Struct PresortedBillboardsParams                   PresortedBillboardsParams                          // 0x8(0x8)
	int                                                MinLightmapResolution                              // 0x10(0x4)
	int                                                SrcLightmapIndex                                   // 0x14(0x4)
	int                                                DstLightmapIndex                                   // 0x18(0x4)
	float                                              BuildScale                                         // 0x1c(0x4)
	Struct Vector                                      BuildScale3D                                       // 0x20(0xc)
	float                                              DistanceFieldResolutionScale                       // 0x2c(0x4)
	bool                                               bGenerateDistanceFieldAsIfTwoSided                 // 0x30(0x1)
	Class StaticMesh*                                  DistanceFieldReplacementMesh                       // 0x38(0x8)
};


// Size 0x8
class PresortedBillboardsParams: public None
{
public:
	byte                                               Mode                                               // 0x0(0x1)
	int                                                NumDirections                                      // 0x4(0x4)
};


// Size 0x58
class MeshReductionSettings: public None
{
public:
	float                                              PercentTriangles                                   // 0x0(0x4)
	float                                              MaxDeviation                                       // 0x4(0x4)
	float                                              WeldingThreshold                                   // 0x8(0x4)
	float                                              HardAngleThreshold                                 // 0xc(0x4)
	byte                                               SilhouetteImportance                               // 0x10(0x1)
	byte                                               TextureImportance                                  // 0x11(0x1)
	byte                                               ShadingImportance                                  // 0x12(0x1)
	bool                                               bActive                                            // 0x13(0x1)
	bool                                               bRecalculateNormals                                // 0x14(0x1)
	int                                                BaseLODModel                                       // 0x18(0x4)
	bool                                               bGenerateUniqueLightmapUVs                         // 0x1c(0x1)
	bool                                               bKeepSymmetry                                      // 0x1d(0x1)
	bool                                               bVisibilityAided                                   // 0x1e(0x1)
	bool                                               bCullOccluded                                      // 0x1f(0x1)
	byte                                               VisibilityAggressiveness                           // 0x20(0x1)
	Struct SimplygonMaterialLODSettings                MaterialLODSettings                                // 0x28(0x28)
	byte                                               VertexColorImportance                              // 0x50(0x1)
	bool                                               bForceRebuild                                      // 0x51(0x1)
};


// Size 0x1c
class POV: public None
{
public:
	Struct Vector                                      Location                                           // 0x0(0xc)
	Struct Rotator                                     Rotation                                           // 0xc(0xc)
	float                                              FOV                                                // 0x18(0x4)
};


// Size 0x38
class AnimUpdateRateParameters: public None
{
public:
	int                                                UpdateRate                                         // 0x4(0x4)
	int                                                EvaluationRate                                     // 0x8(0x4)
	bool                                               bInterpolateSkippedFrames                          // 0xc(0x1)
	bool                                               bSkipUpdate                                        // 0xd(0x1)
	bool                                               bSkipEvaluation                                    // 0xe(0x1)
	float                                              TickedPoseOffestTime                               // 0x10(0x4)
	float                                              AdditionalTime                                     // 0x14(0x4)
	int                                                BaseNonRenderedUpdateRate                          // 0x1c(0x4)
	TArray<Float >                                     BaseVisibleDistanceFactorThesholds                 // 0x28(0x10)
};


// Size 0xc
class AnimSlotDesc: public None
{
public:
	struct FName                                       SlotName                                           // 0x0(0x8)
	int                                                NumChannels                                        // 0x8(0x4)
};


// Size 0x18
class AnimSlotInfo: public None
{
public:
	struct FName                                       SlotName                                           // 0x0(0x8)
	TArray<Float >                                     ChannelWeights                                     // 0x8(0x10)
};


// Size 0x10
class MTDResult: public None
{
public:
	Struct Vector                                      Direction                                          // 0x0(0xc)
	float                                              Distance                                           // 0xc(0x4)
};


// Size 0x18
class OverlapResult: public None
{
public:
	bool                                               bBlockingHit                                       // 0x14(0x1)
};


// Size 0x18
class PrimitiveMaterialRef: public None
{
public:
	Class PrimitiveComponent*                          Primitive                                          // 0x0(0x8)
	Class DecalComponent*                              Decal                                              // 0x8(0x8)
	int                                                ElementIndex                                       // 0x10(0x4)
};


// Size 0x4
class SwarmDebugOptions: public None
{
public:
	bool                                               bDistributionEnabled                               // 0x0(0x1)
	bool                                               bForceContentExport                                // 0x0(0x1)
	bool                                               bInitialized                                       // 0x0(0x1)
};


// Size 0x10
class LightmassDebugOptions: public None
{
public:
	bool                                               bDebugMode                                         // 0x0(0x1)
	bool                                               bStatsEnabled                                      // 0x0(0x1)
	bool                                               bGatherBSPSurfacesAcrossComponents                 // 0x0(0x1)
	float                                              CoplanarTolerance                                  // 0x4(0x4)
	bool                                               bUseImmediateImport                                // 0x8(0x1)
	bool                                               bImmediateProcessMappings                          // 0x8(0x1)
	bool                                               bSortMappings                                      // 0x8(0x1)
	bool                                               bDumpBinaryFiles                                   // 0x8(0x1)
	bool                                               bDebugMaterials                                    // 0x8(0x1)
	bool                                               bPadMappings                                       // 0x8(0x1)
	bool                                               bDebugPaddings                                     // 0x8(0x1)
	bool                                               bOnlyCalcDebugTexelMappings                        // 0x8(0x1)
	bool                                               bUseRandomColors                                   // 0x9(0x1)
	bool                                               bColorBordersGreen                                 // 0x9(0x1)
	bool                                               bColorByExecutionTime                              // 0x9(0x1)
	float                                              ExecutionTimeDivisor                               // 0xc(0x4)
};


// Size 0x18
class LightmassPrimitiveSettings: public None
{
public:
	bool                                               bUseTwoSidedLighting                               // 0x0(0x1)
	bool                                               bShadowIndirectOnly                                // 0x0(0x1)
	bool                                               bUseEmissiveForStaticLighting                      // 0x0(0x1)
	bool                                               bUseVertexNormalForHemisphereGather                // 0x0(0x1)
	float                                              EmissiveLightFalloffExponent                       // 0x4(0x4)
	float                                              EmissiveLightExplicitInfluenceRadius               // 0x8(0x4)
	float                                              EmissiveBoost                                      // 0xc(0x4)
	float                                              DiffuseBoost                                       // 0x10(0x4)
	float                                              FullyOccludedSamplesFraction                       // 0x14(0x4)
};


// Size 0x10
class LightmassDirectionalLightSettings: public None
{
public:
	float                                              LightSourceAngle                                   // 0xc(0x4)
};


// Size 0xc
class LightmassLightSettings: public None
{
public:
	float                                              IndirectLightingSaturation                         // 0x0(0x4)
	float                                              ShadowExponent                                     // 0x4(0x4)
	bool                                               bUseAreaShadowsForStationaryLight                  // 0x8(0x1)
};


// Size 0xc
class LightmassPointLightSettings: public None
{
public:
};


// Size 0x28
class LocalizedSubtitle: public None
{
public:
	Struct FString                                     LanguageExt                                        // 0x0(0x10)
	TArray<Struct LanguageExt>                         Subtitles                                          // 0x10(0x10)
	bool                                               bMature                                            // 0x20(0x1)
	bool                                               bManualWordWrap                                    // 0x20(0x1)
	bool                                               bSingleLine                                        // 0x20(0x1)
};


// Size 0x38
class BasedPosition: public None
{
public:
	Class Actor*                                       Base                                               // 0x0(0x8)
	Struct Vector                                      Position                                           // 0x8(0xc)
	Struct Vector                                      CachedBaseLocation                                 // 0x14(0xc)
	Struct Rotator                                     CachedBaseRotation                                 // 0x20(0xc)
	Struct Vector                                      CachedTransPosition                                // 0x2c(0xc)
};


// Size 0x10
class FractureEffect: public None
{
public:
	Class ParticleSystem*                              ParticleSystem                                     // 0x0(0x8)
	Class SoundBase*                                   Sound                                              // 0x8(0x8)
};


// Size 0x28
class CollisionImpactData: public None
{
public:
	TArray<Struct RigidBodyContactInfo>                ContactInfos                                       // 0x0(0x10)
	Struct Vector                                      TotalNormalImpulse                                 // 0x10(0xc)
	Struct Vector                                      TotalFrictionImpulse                               // 0x1c(0xc)
};


// Size 0x30
class RigidBodyContactInfo: public None
{
public:
	Struct Vector                                      ContactPosition                                    // 0x0(0xc)
	Struct Vector                                      ContactNormal                                      // 0xc(0xc)
	float                                              ContactPenetration                                 // 0x18(0x4)
	Class PhysicalMaterial*                            PhysMaterial                                       // 0x20(0x8)
};


// Size 0x1c
class RigidBodyErrorCorrection: public None
{
public:
	float                                              LinearDeltaThresholdSq                             // 0x0(0x4)
	float                                              LinearInterpAlpha                                  // 0x4(0x4)
	float                                              LinearRecipFixTime                                 // 0x8(0x4)
	float                                              AngularDeltaThreshold                              // 0xc(0x4)
	float                                              AngularInterpAlpha                                 // 0x10(0x4)
	float                                              AngularRecipFixTime                                // 0x14(0x4)
	float                                              BodySpeedThresholdSq                               // 0x18(0x4)
};


// Size 0x40
class RigidBodyState: public None
{
public:
	Struct Vector_NetQuantize100                       Position                                           // 0x0(0xc)
	Struct Quat                                        Quaternion                                         // 0x10(0x10)
	Struct Vector_NetQuantize100                       LinVel                                             // 0x20(0xc)
	Struct Vector_NetQuantize100                       AngVel                                             // 0x2c(0xc)
	byte                                               Flags                                              // 0x38(0x1)
};


// Size 0x18
class EditedDocumentInfo: public None
{
public:
	Class Object*                                      EditedObject                                       // 0x0(0x8)
	Struct Vector2D                                    SavedViewOffset                                    // 0x8(0x8)
	float                                              SavedZoomAmount                                    // 0x10(0x4)
};


// Size 0x18
class BPInterfaceDescription: public None
{
public:
	class                                              Interface                                          // 0x0(0x8)
	TArray<class Graphs*>                              Graphs                                             // 0x8(0x10)
};


// Size 0xe0
class BPVariableDescription: public None
{
public:
	struct FName                                       VarName                                            // 0x0(0x8)
	Struct Guid                                        VarGuid                                            // 0x8(0x10)
	Struct EdGraphPinType                              VarType                                            // 0x18(0x50)
	Struct FString                                     FriendlyName                                       // 0x68(0x10)
	Struct FText                                       Category                                           // 0x78(0x38)
	struct FName                                       RepNotifyFunc                                      // 0xb8(0x8)
	TArray<Struct BPVariableMetaDataEntry>             MetaDataArray                                      // 0xc0(0x10)
	Struct FString                                     DefaultValue                                       // 0xd0(0x10)
};


// Size 0x18
class BPVariableMetaDataEntry: public None
{
public:
	struct FName                                       DataKey                                            // 0x0(0x8)
	Struct FString                                     DataValue                                          // 0x8(0x10)
};


// Size 0x38
class MemberReference: public None
{
public:
	Class Object*                                      MemberParent                                       // 0x0(0x8)
	Struct FString                                     MemberScope                                        // 0x8(0x10)
	struct FName                                       MemberName                                         // 0x18(0x8)
	Struct Guid                                        MemberGuid                                         // 0x20(0x10)
	bool                                               bSelfContext                                       // 0x30(0x1)
	bool                                               bWasDeprecated                                     // 0x31(0x1)
};


// Size 0x10
class AutomaticInstancingMeshComponentArray: public None
{
public:
	TArray<class Array*>                               Array                                              // 0x0(0x10)
};


// Size 0xf0
class LatentActionManager: public None
{
public:
};


// Size 0x50
class EndClothSimulationFunction: public None
{
public:
};


// Size 0x50
class StartClothSimulationFunction: public None
{
public:
};


// Size 0x50
class EndPhysicsTickFunction: public None
{
public:
};


// Size 0x50
class StartPhysicsTickFunction: public None
{
public:
};


// Size 0x20
class LevelViewportInfo: public None
{
public:
	Struct Vector                                      CamPosition                                        // 0x0(0xc)
	Struct Rotator                                     CamRotation                                        // 0xc(0xc)
	float                                              CamOrthoZoom                                       // 0x18(0x4)
	bool                                               CamUpdated                                         // 0x1c(0x1)
};


// Size 0xac
class LevelSimplificationDetails: public None
{
public:
	bool                                               bCreatePackagePerAsset                             // 0x0(0x1)
	float                                              ProxyPixelSize                                     // 0x4(0x4)
	Struct MaterialSimplificationSettings              StaticMeshMaterial                                 // 0x8(0x44)
	bool                                               bOverrideLandscapeExportLOD                        // 0x4c(0x1)
	int                                                LandscapeExportLOD                                 // 0x50(0x4)
	Struct MaterialSimplificationSettings              LandscapeMaterial                                  // 0x54(0x44)
	bool                                               bRemoveDownwardFacingTriangles                     // 0x98(0x1)
	float                                              CullAngleThreshold                                 // 0x9c(0x4)
	bool                                               bBakeFoliageToLandscape                            // 0xa0(0x1)
	bool                                               bBakeGrassToLandscape                              // 0xa1(0x1)
	bool                                               bGenerateMeshNormalMap                             // 0xa2(0x1)
	bool                                               bGenerateMeshMetallicMap                           // 0xa3(0x1)
	bool                                               bGenerateMeshRoughnessMap                          // 0xa4(0x1)
	bool                                               bGenerateMeshSpecularMap                           // 0xa5(0x1)
	bool                                               bGenerateLandscapeNormalMap                        // 0xa6(0x1)
	bool                                               bGenerateLandscapeMetallicMap                      // 0xa7(0x1)
	bool                                               bGenerateLandscapeRoughnessMap                     // 0xa8(0x1)
	bool                                               bGenerateLandscapeSpecularMap                      // 0xa9(0x1)
};


// Size 0x28
class DynamicTextureInstance: public None
{
public:
	Class Texture2D*                                   Texture                                            // 0x18(0x8)
	bool                                               bAttached                                          // 0x20(0x1)
	float                                              OriginalRadius                                     // 0x24(0x4)
};


// Size 0x14
class StreamableTextureInstance: public None
{
public:
};


// Size 0xc
class GeomSelection: public None
{
public:
	int                                                Type                                               // 0x0(0x4)
	int                                                Index                                              // 0x4(0x4)
	int                                                SelectionIndex                                     // 0x8(0x4)
};


// Size 0x24
class InteriorSettings: public None
{
public:
	bool                                               bIsWorldSettings                                   // 0x0(0x1)
	float                                              ExteriorVolume                                     // 0x4(0x4)
	float                                              ExteriorTime                                       // 0x8(0x4)
	float                                              ExteriorLPF                                        // 0xc(0x4)
	float                                              ExteriorLPFTime                                    // 0x10(0x4)
	float                                              InteriorVolume                                     // 0x14(0x4)
	float                                              InteriorTime                                       // 0x18(0x4)
	float                                              InteriorLPF                                        // 0x1c(0x4)
	float                                              InteriorLPFTime                                    // 0x20(0x4)
};


// Size 0x18
class ReverbSettings: public None
{
public:
	bool                                               bApplyReverb                                       // 0x0(0x1)
	byte                                               ReverbType                                         // 0x4(0x1)
	Class ReverbEffect*                                ReverbEffect                                       // 0x8(0x8)
	float                                              Volume                                             // 0x10(0x4)
	float                                              FadeTime                                           // 0x14(0x4)
};


// Size 0x8
class CullDistanceSizePair: public None
{
public:
	float                                              Size                                               // 0x0(0x4)
	float                                              CullDistance                                       // 0x4(0x4)
};


// Size 0x58
class NavDataConfig: public None
{
public:
	Struct Color                                       Color                                              // 0x30(0x4)
	Struct Vector                                      DefaultQueryExtent                                 // 0x34(0xc)
	class                                              NavigationDataClass                                // 0x40(0x8)
	Struct StringClassReference                        NavigationDataClassName                            // 0x48(0x10)
};


// Size 0x30
class NavAgentProperties: public None
{
public:
	struct FName                                       Name                                               // 0x4(0x8)
	float                                              AgentRadius                                        // 0xc(0x4)
	float                                              AgentHeight                                        // 0x10(0x4)
	float                                              AgentStepHeight                                    // 0x14(0x4)
	float                                              NavWalkingSearchHeightScale                        // 0x18(0x4)
	float                                              NavWalkingSearchRadiusScale                        // 0x1c(0x4)
	float                                              NavWalkingSearchRadiusScaleOffMesh                 // 0x20(0x4)
	float                                              AgentMaxSlope                                      // 0x24(0x4)
	float                                              MinRegionArea                                      // 0x28(0x4)
};


// Size 0x4
class MovementProperties: public None
{
public:
	bool                                               bCanCrouch                                         // 0x0(0x1)
	bool                                               bCanJump                                           // 0x0(0x1)
	bool                                               bCanWalk                                           // 0x0(0x1)
	bool                                               bCanSwim                                           // 0x0(0x1)
	bool                                               bCanFly                                            // 0x0(0x1)
};


// Size 0x4
class NavAgentSelector: public None
{
public:
	bool                                               bSupportsAgent0                                    // 0x0(0x1)
	bool                                               bSupportsAgent1                                    // 0x0(0x1)
	bool                                               bSupportsAgent2                                    // 0x0(0x1)
	bool                                               bSupportsAgent3                                    // 0x0(0x1)
	bool                                               bSupportsAgent4                                    // 0x0(0x1)
	bool                                               bSupportsAgent5                                    // 0x0(0x1)
	bool                                               bSupportsAgent6                                    // 0x0(0x1)
	bool                                               bSupportsAgent7                                    // 0x0(0x1)
	bool                                               bSupportsAgent8                                    // 0x1(0x1)
	bool                                               bSupportsAgent9                                    // 0x1(0x1)
	bool                                               bSupportsAgent10                                   // 0x1(0x1)
	bool                                               bSupportsAgent11                                   // 0x1(0x1)
	bool                                               bSupportsAgent12                                   // 0x1(0x1)
	bool                                               bSupportsAgent13                                   // 0x1(0x1)
	bool                                               bSupportsAgent14                                   // 0x1(0x1)
	bool                                               bSupportsAgent15                                   // 0x1(0x1)
};


// Size 0x18
class PlayerAmbientLightOverrideSettings: public None
{
public:
	bool                                               OverrideBodyLightAmbience                          // 0x0(0x1)
	float                                              BodyLightAmbienceLightFactor                       // 0x4(0x4)
	float                                              BodyLightAmbienceBlendWithDefault                  // 0x8(0x4)
	bool                                               OverrideLanternAmbience                            // 0xc(0x1)
	float                                              LanternAmbienceLightFactor                         // 0x10(0x4)
	float                                              LanternAmbienceBlendWithDefault                    // 0x14(0x4)
};


// Size 0x540
class PostProcessSettings: public None
{
public:
	bool                                               bOverride_WhiteTemp                                // 0x0(0x1)
	bool                                               bOverride_WhiteTint                                // 0x0(0x1)
	bool                                               bOverride_ColorSaturation                          // 0x0(0x1)
	bool                                               bOverride_ColorContrast                            // 0x0(0x1)
	bool                                               bOverride_ColorGamma                               // 0x0(0x1)
	bool                                               bOverride_ColorGain                                // 0x0(0x1)
	bool                                               bOverride_ColorOffset                              // 0x0(0x1)
	bool                                               bOverride_FilmWhitePoint                           // 0x0(0x1)
	bool                                               bOverride_FilmSaturation                           // 0x1(0x1)
	bool                                               bOverride_FilmChannelMixerRed                      // 0x1(0x1)
	bool                                               bOverride_FilmChannelMixerGreen                    // 0x1(0x1)
	bool                                               bOverride_FilmChannelMixerBlue                     // 0x1(0x1)
	bool                                               bOverride_FilmContrast                             // 0x1(0x1)
	bool                                               bOverride_FilmDynamicRange                         // 0x1(0x1)
	bool                                               bOverride_FilmHealAmount                           // 0x1(0x1)
	bool                                               bOverride_FilmToeAmount                            // 0x1(0x1)
	bool                                               bOverride_FilmShadowTint                           // 0x2(0x1)
	bool                                               bOverride_FilmShadowTintBlend                      // 0x2(0x1)
	bool                                               bOverride_FilmShadowTintAmount                     // 0x2(0x1)
	bool                                               bOverride_FilmSlope                                // 0x2(0x1)
	bool                                               bOverride_FilmToe                                  // 0x2(0x1)
	bool                                               bOverride_FilmShoulder                             // 0x2(0x1)
	bool                                               bOverride_FilmBlackClip                            // 0x2(0x1)
	bool                                               bOverride_FilmWhiteClip                            // 0x2(0x1)
	bool                                               bOverride_SceneColorTint                           // 0x3(0x1)
	bool                                               bOverride_SceneFringeIntensity                     // 0x3(0x1)
	bool                                               bOverride_SceneFringeSaturation                    // 0x3(0x1)
	bool                                               bOverride_AmbientCubemapTint                       // 0x3(0x1)
	bool                                               bOverride_AmbientCubemapIntensity                  // 0x3(0x1)
	bool                                               bOverride_BloomIntensity                           // 0x3(0x1)
	bool                                               bOverride_BloomThreshold                           // 0x3(0x1)
	bool                                               bOverride_Bloom1Tint                               // 0x3(0x1)
	bool                                               bOverride_Bloom1Size                               // 0x4(0x1)
	bool                                               bOverride_Bloom2Size                               // 0x4(0x1)
	bool                                               bOverride_Bloom2Tint                               // 0x4(0x1)
	bool                                               bOverride_Bloom3Tint                               // 0x4(0x1)
	bool                                               bOverride_Bloom3Size                               // 0x4(0x1)
	bool                                               bOverride_Bloom4Tint                               // 0x4(0x1)
	bool                                               bOverride_Bloom4Size                               // 0x4(0x1)
	bool                                               bOverride_Bloom5Tint                               // 0x4(0x1)
	bool                                               bOverride_Bloom5Size                               // 0x5(0x1)
	bool                                               bOverride_Bloom6Tint                               // 0x5(0x1)
	bool                                               bOverride_Bloom6Size                               // 0x5(0x1)
	bool                                               bOverride_BloomSizeScale                           // 0x5(0x1)
	bool                                               bOverride_BloomDirtMaskIntensity                   // 0x5(0x1)
	bool                                               bOverride_BloomDirtMaskTint                        // 0x5(0x1)
	bool                                               bOverride_BloomDirtMask                            // 0x5(0x1)
	bool                                               bOverride_AutoExposureLowPercent                   // 0x5(0x1)
	bool                                               bOverride_AutoExposureHighPercent                  // 0x6(0x1)
	bool                                               bOverride_AutoExposureMinBrightness                // 0x6(0x1)
	bool                                               bOverride_AutoExposureMaxBrightness                // 0x6(0x1)
	bool                                               bOverride_AutoExposureSpeedUp                      // 0x6(0x1)
	bool                                               bOverride_AutoExposureSpeedDown                    // 0x6(0x1)
	bool                                               bOverride_AutoExposureBias                         // 0x6(0x1)
	bool                                               bOverride_HistogramLogMin                          // 0x6(0x1)
	bool                                               bOverride_HistogramLogMax                          // 0x6(0x1)
	bool                                               bOverride_LensFlareIntensity                       // 0x7(0x1)
	bool                                               bOverride_LensFlareTint                            // 0x7(0x1)
	bool                                               bOverride_LensFlareTints                           // 0x7(0x1)
	bool                                               bOverride_LensFlareBokehSize                       // 0x7(0x1)
	bool                                               bOverride_LensFlareBokehShape                      // 0x7(0x1)
	bool                                               bOverride_LensFlareThreshold                       // 0x7(0x1)
	bool                                               bOverride_VignetteIntensity                        // 0x7(0x1)
	bool                                               bOverride_GrainIntensity                           // 0x7(0x1)
	bool                                               bOverride_GrainJitter                              // 0x8(0x1)
	bool                                               bOverride_AmbientOcclusionIntensity                // 0x8(0x1)
	bool                                               bOverride_AmbientOcclusionStaticFraction           // 0x8(0x1)
	bool                                               bOverride_AmbientOcclusionRadius                   // 0x8(0x1)
	bool                                               bOverride_AmbientOcclusionFadeDistance             // 0x8(0x1)
	bool                                               bOverride_AmbientOcclusionFadeRadius               // 0x8(0x1)
	bool                                               bOverride_AmbientOcclusionDistance                 // 0x8(0x1)
	bool                                               bOverride_AmbientOcclusionRadiusInWS               // 0x8(0x1)
	bool                                               bOverride_AmbientOcclusionPower                    // 0x9(0x1)
	bool                                               bOverride_AmbientOcclusionBias                     // 0x9(0x1)
	bool                                               bOverride_AmbientOcclusionQuality                  // 0x9(0x1)
	bool                                               bOverride_AmbientOcclusionMipBlend                 // 0x9(0x1)
	bool                                               bOverride_AmbientOcclusionMipScale                 // 0x9(0x1)
	bool                                               bOverride_AmbientOcclusionMipThreshold             // 0x9(0x1)
	bool                                               bOverride_AmbientOcclusionHemiIntensity            // 0x9(0x1)
	bool                                               bOverride_AmbientOcclusionHemiPower                // 0x9(0x1)
	bool                                               bOverride_AmbientOcclusionHemiRadius               // 0xa(0x1)
	bool                                               bOverride_AmbientOcclusionHemiBlurTolerance        // 0xa(0x1)
	bool                                               bOverride_AmbientOcclusionHemiUpsampleTolerance    // 0xa(0x1)
	bool                                               bOverride_AmbientOcclusionHemiNoiseFilterTolerance // 0xa(0x1)
	bool                                               bOverride_AmbientOcclusionHemiRejectionFalloff     // 0xa(0x1)
	bool                                               bOverride_AmbientOcclusionHemiBias                 // 0xa(0x1)
	bool                                               bOverride_AmbientOcclusionHemiMaxDepthDownsample   // 0xa(0x1)
	bool                                               bOverride_AmbientOcclusionHemiUseNormals           // 0xa(0x1)
	bool                                               bOverride_AmbientOcclusionHemiCombineBeforeBlur    // 0xb(0x1)
	bool                                               bOverride_AmbientOcclusionHemiCombineWithMultiply  // 0xb(0x1)
	bool                                               bOverride_MinOverdrawCount                         // 0xb(0x1)
	bool                                               bOverride_MaxOverdrawCount                         // 0xb(0x1)
	bool                                               bOverride_MinOverdrawColour                        // 0xb(0x1)
	bool                                               bOverride_MaxOverdrawColour                        // 0xb(0x1)
	bool                                               bOverride_LPVIntensity                             // 0xb(0x1)
	bool                                               bOverride_LPVDirectionalOcclusionIntensity         // 0xb(0x1)
	bool                                               bOverride_LPVDirectionalOcclusionRadius            // 0xc(0x1)
	bool                                               bOverride_LPVDiffuseOcclusionExponent              // 0xc(0x1)
	bool                                               bOverride_LPVSpecularOcclusionExponent             // 0xc(0x1)
	bool                                               bOverride_LPVDiffuseOcclusionIntensity             // 0xc(0x1)
	bool                                               bOverride_LPVSpecularOcclusionIntensity            // 0xc(0x1)
	bool                                               bOverride_LPVSize                                  // 0xc(0x1)
	bool                                               bOverride_LPVSecondaryOcclusionIntensity           // 0xc(0x1)
	bool                                               bOverride_LPVSecondaryBounceIntensity              // 0xc(0x1)
	bool                                               bOverride_LPVGeometryVolumeBias                    // 0xd(0x1)
	bool                                               bOverride_LPVVplInjectionBias                      // 0xd(0x1)
	bool                                               bOverride_LPVEmissiveInjectionIntensity            // 0xd(0x1)
	bool                                               bOverride_LPVWorldRef                              // 0xd(0x1)
	bool                                               bOverride_IndirectLightingColor                    // 0xd(0x1)
	bool                                               bOverride_IndirectLightingIntensity                // 0xd(0x1)
	bool                                               bOverride_ColorGradingIntensity                    // 0xd(0x1)
	bool                                               bOverride_ColorGradingLUT                          // 0xd(0x1)
	bool                                               bOverride_DepthOfFieldFocalDistance                // 0xe(0x1)
	bool                                               bOverride_DepthOfFieldFstop                        // 0xe(0x1)
	bool                                               bOverride_DepthOfFieldDepthBlurRadius              // 0xe(0x1)
	bool                                               bOverride_DepthOfFieldDepthBlurAmount              // 0xe(0x1)
	bool                                               bOverride_DepthOfFieldFocalRegion                  // 0xe(0x1)
	bool                                               bOverride_DepthOfFieldNearTransitionRegion         // 0xe(0x1)
	bool                                               bOverride_DepthOfFieldFarTransitionRegion          // 0xe(0x1)
	bool                                               bOverride_DepthOfFieldScale                        // 0xe(0x1)
	bool                                               bOverride_DepthOfFieldMaxBokehSize                 // 0xf(0x1)
	bool                                               bOverride_DepthOfFieldNearBlurSize                 // 0xf(0x1)
	bool                                               bOverride_DepthOfFieldFarBlurSize                  // 0xf(0x1)
	bool                                               bOverride_DepthOfFieldMethod                       // 0xf(0x1)
	bool                                               bOverride_DepthOfFieldBokehShape                   // 0xf(0x1)
	bool                                               bOverride_DepthOfFieldOcclusion                    // 0xf(0x1)
	bool                                               bOverride_DepthOfFieldColorThreshold               // 0xf(0x1)
	bool                                               bOverride_DepthOfFieldSizeThreshold                // 0xf(0x1)
	bool                                               bOverride_DepthOfFieldSkyFocusDistance             // 0x10(0x1)
	bool                                               bOverride_MotionBlurAmount                         // 0x10(0x1)
	bool                                               bOverride_MotionBlurMax                            // 0x10(0x1)
	bool                                               bOverride_MotionBlurPerObjectSize                  // 0x10(0x1)
	bool                                               bOverride_ScreenPercentage                         // 0x10(0x1)
	bool                                               bOverride_AntiAliasingMethod                       // 0x10(0x1)
	bool                                               bOverride_ScreenSpaceReflectionIntensity           // 0x10(0x1)
	bool                                               bOverride_ScreenSpaceReflectionQuality             // 0x10(0x1)
	bool                                               bOverride_ScreenSpaceReflectionMaxRoughness        // 0x11(0x1)
	bool                                               bOverride_ScreenSpaceReflectionRoughnessScale      // 0x11(0x1)
	bool                                               bOverride_SkyLightIntensityScale                   // 0x11(0x1)
	bool                                               bOverride_SkyLightIntensityScaleForMinSpec         // 0x11(0x1)
	bool                                               bOverride_SkyLightIntensityScaleInteriorInfluence  // 0x11(0x1)
	bool                                               bOverride_GlobalReflectionTint                     // 0x11(0x1)
	bool                                               bOverride_InsideAmbientColourForParticlesInfluence // 0x11(0x1)
	bool                                               bOverride_InsideAmbientColourForParticles          // 0x11(0x1)
	bool                                               bUseThisVolumeForLPVSettings                       // 0x12(0x1)
	bool                                               bOverride_GaussianBlur                             // 0x12(0x1)
	bool                                               bOverride_DisableShadowMapMethod                   // 0x12(0x1)
	bool                                               bOverride_UseVolumeFogScale                        // 0x12(0x1)
	bool                                               bOverride_VolumeFogScale                           // 0x12(0x1)
	float                                              WhiteTemp                                          // 0x14(0x4)
	float                                              WhiteTint                                          // 0x18(0x4)
	Struct Vector                                      ColorSaturation                                    // 0x1c(0xc)
	Struct Vector                                      ColorContrast                                      // 0x28(0xc)
	Struct Vector                                      ColorGamma                                         // 0x34(0xc)
	Struct Vector                                      ColorGain                                          // 0x40(0xc)
	Struct Vector                                      ColorOffset                                        // 0x4c(0xc)
	Struct LinearColor                                 FilmWhitePoint                                     // 0x58(0x10)
	Struct LinearColor                                 FilmShadowTint                                     // 0x68(0x10)
	float                                              FilmShadowTintBlend                                // 0x78(0x4)
	float                                              FilmShadowTintAmount                               // 0x7c(0x4)
	float                                              FilmSaturation                                     // 0x80(0x4)
	Struct LinearColor                                 FilmChannelMixerRed                                // 0x84(0x10)
	Struct LinearColor                                 FilmChannelMixerGreen                              // 0x94(0x10)
	Struct LinearColor                                 FilmChannelMixerBlue                               // 0xa4(0x10)
	float                                              FilmContrast                                       // 0xb4(0x4)
	float                                              FilmToeAmount                                      // 0xb8(0x4)
	float                                              FilmHealAmount                                     // 0xbc(0x4)
	float                                              FilmDynamicRange                                   // 0xc0(0x4)
	float                                              FilmSlope                                          // 0xc4(0x4)
	float                                              FilmToe                                            // 0xc8(0x4)
	float                                              FilmShoulder                                       // 0xcc(0x4)
	float                                              FilmBlackClip                                      // 0xd0(0x4)
	float                                              FilmWhiteClip                                      // 0xd4(0x4)
	Struct LinearColor                                 SceneColorTint                                     // 0xd8(0x10)
	float                                              SceneFringeIntensity                               // 0xe8(0x4)
	float                                              SceneFringeSaturation                              // 0xec(0x4)
	float                                              BloomIntensity                                     // 0xf0(0x4)
	float                                              BloomThreshold                                     // 0xf4(0x4)
	float                                              BloomSizeScale                                     // 0xf8(0x4)
	float                                              Bloom1Size                                         // 0xfc(0x4)
	float                                              Bloom2Size                                         // 0x100(0x4)
	float                                              Bloom3Size                                         // 0x104(0x4)
	float                                              Bloom4Size                                         // 0x108(0x4)
	float                                              Bloom5Size                                         // 0x10c(0x4)
	float                                              Bloom6Size                                         // 0x110(0x4)
	Struct LinearColor                                 Bloom1Tint                                         // 0x114(0x10)
	Struct LinearColor                                 Bloom2Tint                                         // 0x124(0x10)
	Struct LinearColor                                 Bloom3Tint                                         // 0x134(0x10)
	Struct LinearColor                                 Bloom4Tint                                         // 0x144(0x10)
	Struct LinearColor                                 Bloom5Tint                                         // 0x154(0x10)
	Struct LinearColor                                 Bloom6Tint                                         // 0x164(0x10)
	float                                              BloomDirtMaskIntensity                             // 0x174(0x4)
	Struct LinearColor                                 BloomDirtMaskTint                                  // 0x178(0x10)
	Class Texture*                                     BloomDirtMask                                      // 0x188(0x8)
	float                                              LPVIntensity                                       // 0x190(0x4)
	float                                              LPVVplInjectionBias                                // 0x194(0x4)
	float                                              LPVSize                                            // 0x198(0x4)
	float                                              LPVSecondaryOcclusionIntensity                     // 0x19c(0x4)
	float                                              LPVSecondaryBounceIntensity                        // 0x1a0(0x4)
	float                                              LPVGeometryVolumeBias                              // 0x1a4(0x4)
	float                                              LPVEmissiveInjectionIntensity                      // 0x1a8(0x4)
	float                                              LPVDirectionalOcclusionIntensity                   // 0x1ac(0x4)
	Struct Transform                                   LPVWorldRef                                        // 0x1b0(0x30)
	float                                              LPVDirectionalOcclusionRadius                      // 0x1e0(0x4)
	float                                              LPVDiffuseOcclusionExponent                        // 0x1e4(0x4)
	float                                              LPVSpecularOcclusionExponent                       // 0x1e8(0x4)
	float                                              LPVDiffuseOcclusionIntensity                       // 0x1ec(0x4)
	float                                              LPVSpecularOcclusionIntensity                      // 0x1f0(0x4)
	Struct LinearColor                                 AmbientCubemapTint                                 // 0x1f4(0x10)
	float                                              AmbientCubemapIntensity                            // 0x204(0x4)
	Class TextureCube*                                 AmbientCubemap                                     // 0x208(0x8)
	float                                              AutoExposureLowPercent                             // 0x210(0x4)
	float                                              AutoExposureHighPercent                            // 0x214(0x4)
	float                                              AutoExposureMinBrightness                          // 0x218(0x4)
	float                                              AutoExposureMaxBrightness                          // 0x21c(0x4)
	float                                              AutoExposureSpeedUp                                // 0x220(0x4)
	float                                              AutoExposureSpeedDown                              // 0x224(0x4)
	float                                              AutoExposureBias                                   // 0x228(0x4)
	float                                              HistogramLogMin                                    // 0x22c(0x4)
	float                                              HistogramLogMax                                    // 0x230(0x4)
	float                                              LensFlareIntensity                                 // 0x234(0x4)
	Struct LinearColor                                 LensFlareTint                                      // 0x238(0x10)
	float                                              LensFlareBokehSize                                 // 0x248(0x4)
	float                                              LensFlareThreshold                                 // 0x24c(0x4)
	Class Texture*                                     LensFlareBokehShape                                // 0x250(0x8)
	Struct LinearColor                                 LensFlareTints                                     // 0x258(0x10)
	float                                              VignetteIntensity                                  // 0x2d8(0x4)
	float                                              GrainJitter                                        // 0x2dc(0x4)
	float                                              GrainIntensity                                     // 0x2e0(0x4)
	float                                              AmbientOcclusionIntensity                          // 0x2e4(0x4)
	float                                              AmbientOcclusionStaticFraction                     // 0x2e8(0x4)
	float                                              AmbientOcclusionRadius                             // 0x2ec(0x4)
	bool                                               AmbientOcclusionRadiusInWS                         // 0x2f0(0x1)
	float                                              AmbientOcclusionFadeDistance                       // 0x2f4(0x4)
	float                                              AmbientOcclusionFadeRadius                         // 0x2f8(0x4)
	float                                              AmbientOcclusionDistance                           // 0x2fc(0x4)
	float                                              AmbientOcclusionPower                              // 0x300(0x4)
	float                                              AmbientOcclusionBias                               // 0x304(0x4)
	float                                              AmbientOcclusionQuality                            // 0x308(0x4)
	float                                              AmbientOcclusionMipBlend                           // 0x30c(0x4)
	float                                              AmbientOcclusionMipScale                           // 0x310(0x4)
	float                                              AmbientOcclusionMipThreshold                       // 0x314(0x4)
	float                                              AmbientOcclusionHemiIntensity                      // 0x318(0x4)
	float                                              AmbientOcclusionHemiPower                          // 0x31c(0x4)
	float                                              AmbientOcclusionHemiRadius                         // 0x320(0x4)
	float                                              AmbientOcclusionHemiBlurTolerance                  // 0x324(0x4)
	float                                              AmbientOcclusionHemiUpsampleTolerance              // 0x328(0x4)
	float                                              AmbientOcclusionHemiNoiseFilterTolerance           // 0x32c(0x4)
	float                                              AmbientOcclusionHemiRejectionFalloff               // 0x330(0x4)
	float                                              AmbientOcclusionHemiBias                           // 0x334(0x4)
	bool                                               AmbientOcclusionHemiMaxDepthDownsample             // 0x338(0x1)
	bool                                               AmbientOcclusionHemiUseNormals                     // 0x338(0x1)
	bool                                               AmbientOcclusionHemiCombineBeforeBlur              // 0x338(0x1)
	bool                                               AmbientOcclusionHemiCombineWithMultiply            // 0x338(0x1)
	float                                              MinOverdrawCount                                   // 0x33c(0x4)
	float                                              MaxOverdrawCount                                   // 0x340(0x4)
	Struct LinearColor                                 MinOverdrawColour                                  // 0x344(0x10)
	Struct LinearColor                                 MaxOverdrawColour                                  // 0x354(0x10)
	Struct LinearColor                                 IndirectLightingColor                              // 0x364(0x10)
	float                                              IndirectLightingIntensity                          // 0x374(0x4)
	float                                              ColorGradingIntensity                              // 0x378(0x4)
	Class Texture*                                     ColorGradingLUT                                    // 0x380(0x8)
	byte                                               DepthOfFieldMethod                                 // 0x388(0x1)
	float                                              DepthOfFieldDepthBlurAmount                        // 0x38c(0x4)
	float                                              DepthOfFieldDepthBlurRadius                        // 0x390(0x4)
	float                                              DepthOfFieldFstop                                  // 0x394(0x4)
	float                                              DepthOfFieldFocalDistance                          // 0x398(0x4)
	float                                              DepthOfFieldFocalRegion                            // 0x39c(0x4)
	float                                              DepthOfFieldNearTransitionRegion                   // 0x3a0(0x4)
	float                                              DepthOfFieldFarTransitionRegion                    // 0x3a4(0x4)
	float                                              DepthOfFieldScale                                  // 0x3a8(0x4)
	float                                              DepthOfFieldMaxBokehSize                           // 0x3ac(0x4)
	float                                              DepthOfFieldNearBlurSize                           // 0x3b0(0x4)
	float                                              DepthOfFieldFarBlurSize                            // 0x3b4(0x4)
	Class Texture*                                     DepthOfFieldBokehShape                             // 0x3b8(0x8)
	float                                              DepthOfFieldOcclusion                              // 0x3c0(0x4)
	float                                              DepthOfFieldColorThreshold                         // 0x3c4(0x4)
	float                                              DepthOfFieldSizeThreshold                          // 0x3c8(0x4)
	float                                              DepthOfFieldSkyFocusDistance                       // 0x3cc(0x4)
	float                                              MotionBlurAmount                                   // 0x3d0(0x4)
	float                                              MotionBlurMax                                      // 0x3d4(0x4)
	float                                              MotionBlurPerObjectSize                            // 0x3d8(0x4)
	float                                              ScreenPercentage                                   // 0x3dc(0x4)
	byte                                               AntiAliasingMethod                                 // 0x3e0(0x1)
	float                                              ScreenSpaceReflectionIntensity                     // 0x3e4(0x4)
	float                                              ScreenSpaceReflectionQuality                       // 0x3e8(0x4)
	float                                              ScreenSpaceReflectionMaxRoughness                  // 0x3ec(0x4)
	float                                              SkyLightIntensityScale                             // 0x3f0(0x4)
	float                                              SkyLightIntensityScaleForMinSpec                   // 0x3f4(0x4)
	float                                              SkyLightIntensityScaleInteriorInfluence            // 0x3f8(0x4)
	bool                                               bUseVolumeFogScale                                 // 0x3fc(0x1)
	float                                              VolumeFogScale                                     // 0x400(0x4)
	Struct LinearColor                                 GlobalReflectionTint                               // 0x404(0x10)
	float                                              InsideAmbientColourForParticlesInfluence           // 0x414(0x4)
	Struct LinearColor                                 InsideAmbientColourForParticles                    // 0x418(0x10)
	Struct RainPostProcessSettings                     RainSettings                                       // 0x428(0xc0)
	TArray<Struct LPVCascadeSettings>                  LPVSettings                                        // 0x4e8(0x10)
	Struct PlayerAmbientLightOverrideSettings          PlayerAmbientLightOverrideSettings                 // 0x4f8(0x18)
	float                                              GaussianBlurIntensity                              // 0x510(0x4)
	byte                                               DisableShadowMethod                                // 0x514(0x1)
	Struct WeightedBlendables                          WeightedBlendables                                 // 0x518(0x10)
	TArray<class Blendables*>                          Blendables                                         // 0x528(0x10)
};


// Size 0x10
class WeightedBlendables: public None
{
public:
	TArray<Struct WeightedBlendable>                   Array                                              // 0x0(0x10)
};


// Size 0x10
class WeightedBlendable: public None
{
public:
	float                                              Weight                                             // 0x0(0x4)
	Class Object*                                      Object                                             // 0x8(0x8)
};


// Size 0x70
class LPVCascadeSettings: public None
{
public:
	bool                                               bOverride_LPVIntensity                             // 0x0(0x1)
	bool                                               bOverride_LPVDirectionalOcclusionIntensity         // 0x0(0x1)
	bool                                               bOverride_LPVDirectionalOcclusionRadius            // 0x0(0x1)
	bool                                               bOverride_LPVDiffuseOcclusionExponent              // 0x0(0x1)
	bool                                               bOverride_LPVSpecularOcclusionExponent             // 0x0(0x1)
	bool                                               bOverride_LPVDiffuseOcclusionIntensity             // 0x0(0x1)
	bool                                               bOverride_LPVSpecularOcclusionIntensity            // 0x0(0x1)
	bool                                               bOverride_LPVSize                                  // 0x0(0x1)
	bool                                               bOverride_LPVSecondaryOcclusionIntensity           // 0x1(0x1)
	bool                                               bOverride_LPVSecondaryBounceIntensity              // 0x1(0x1)
	bool                                               bOverride_LPVGeometryVolumeBias                    // 0x1(0x1)
	bool                                               bOverride_LPVVplInjectionBias                      // 0x1(0x1)
	bool                                               bOverride_LPVEmissiveInjectionIntensity            // 0x1(0x1)
	bool                                               bOverride_NumberOfPropagationSteps                 // 0x1(0x1)
	bool                                               bFreezeLPVUpdate                                   // 0x1(0x1)
	float                                              LPVIntensity                                       // 0x4(0x4)
	float                                              LPVVplInjectionBias                                // 0x8(0x4)
	float                                              LPVSize                                            // 0xc(0x4)
	float                                              LPVSecondaryOcclusionIntensity                     // 0x10(0x4)
	float                                              LPVSecondaryBounceIntensity                        // 0x14(0x4)
	float                                              LPVGeometryVolumeBias                              // 0x18(0x4)
	float                                              LPVEmissiveInjectionIntensity                      // 0x1c(0x4)
	float                                              LPVDirectionalOcclusionIntensity                   // 0x20(0x4)
	float                                              LPVDirectionalOcclusionRadius                      // 0x24(0x4)
	float                                              LPVDiffuseOcclusionExponent                        // 0x28(0x4)
	float                                              LPVSpecularOcclusionExponent                       // 0x2c(0x4)
	float                                              LPVDiffuseOcclusionIntensity                       // 0x30(0x4)
	float                                              LPVSpecularOcclusionIntensity                      // 0x34(0x4)
	int                                                LPVNumberOfPropagationSteps                        // 0x38(0x4)
	Struct Transform                                   LPVWorldRef                                        // 0x40(0x30)
};


// Size 0x5a0
class MinimalViewInfo: public None
{
public:
	Struct Vector                                      Location                                           // 0x0(0xc)
	Struct Rotator                                     Rotation                                           // 0xc(0xc)
	float                                              FOV                                                // 0x28(0x4)
	float                                              OrthoWidth                                         // 0x2c(0x4)
	float                                              OrthoNearClipPlane                                 // 0x30(0x4)
	float                                              OrthoFarClipPlane                                  // 0x34(0x4)
	float                                              AspectRatio                                        // 0x38(0x4)
	bool                                               bConstrainAspectRatio                              // 0x3c(0x1)
	bool                                               bUseFieldOfViewForLOD                              // 0x3c(0x1)
	byte                                               ProjectionMode                                     // 0x40(0x1)
	float                                              PostProcessBlendWeight                             // 0x44(0x4)
	Struct PostProcessSettings                         PostProcessSettings                                // 0x50(0x540)
};


// Size 0x24
class VOscillator: public None
{
public:
	Struct FOscillator                                 X                                                  // 0x0(0xc)
	Struct FOscillator                                 Y                                                  // 0xc(0xc)
	Struct FOscillator                                 Z                                                  // 0x18(0xc)
};


// Size 0xc
class FOscillator: public None
{
public:
	float                                              Amplitude                                          // 0x0(0x4)
	float                                              Frequency                                          // 0x4(0x4)
	byte                                               InitialOffset                                      // 0x8(0x1)
};


// Size 0x24
class ROscillator: public None
{
public:
	Struct FOscillator                                 Pitch                                              // 0x0(0xc)
	Struct FOscillator                                 Yaw                                                // 0xc(0xc)
	Struct FOscillator                                 Roll                                               // 0x18(0xc)
};


// Size 0x10
class ViewTargetTransitionParams: public None
{
public:
	float                                              BlendTime                                          // 0x0(0x4)
	byte                                               BlendFunction                                      // 0x4(0x1)
	float                                              BlendExp                                           // 0x8(0x4)
	bool                                               bLockOutgoing                                      // 0xc(0x1)
};


// Size 0x5c0
class TViewTarget: public None
{
public:
	Class Actor*                                       Target                                             // 0x0(0x8)
	Struct MinimalViewInfo                             POV                                                // 0x10(0x5a0)
	Class PlayerState*                                 PlayerState                                        // 0x5b0(0x8)
};


// Size 0x5b0
class CameraCacheEntry: public None
{
public:
	float                                              TimeStamp                                          // 0x0(0x4)
	Struct MinimalViewInfo                             POV                                                // 0x10(0x5a0)
};


// Size 0x68
class NameCurve: public None
{
public:
	TArray<Struct NameCurveKey>                        Keys                                               // 0x58(0x10)
};


// Size 0xc
class NameCurveKey: public None
{
public:
	float                                              Time                                               // 0x0(0x4)
	struct FName                                       Value                                              // 0x4(0x8)
};


// Size 0x18
class ActiveForceFeedbackEffect: public None
{
public:
	Class ForceFeedbackEffect*                         ForceFeedbackEffect                                // 0x0(0x8)
};


// Size 0x88
class ForceFeedbackChannelDetails: public None
{
public:
	bool                                               bAffectsLeftLarge                                  // 0x0(0x1)
	bool                                               bAffectsLeftSmall                                  // 0x0(0x1)
	bool                                               bAffectsRightLarge                                 // 0x0(0x1)
	bool                                               bAffectsRightSmall                                 // 0x0(0x1)
	bool                                               bAffectsLeftTrigger                                // 0x0(0x1)
	bool                                               bAffectsRightTrigger                               // 0x0(0x1)
	Struct RuntimeFloatCurve                           Curve                                              // 0x8(0x80)
};


// Size 0x18
class LevelStreamingStatusUpdateInfo: public None
{
public:
	Struct FString                                     PackageName                                        // 0x0(0x10)
	int                                                LODIndex                                           // 0x10(0x4)
	bool                                               bNewShouldBeLoaded                                 // 0x14(0x1)
	bool                                               bNewShouldBeVisible                                // 0x14(0x1)
	bool                                               bNewShouldBlockOnLoad                              // 0x14(0x1)
};


// Size 0x60
class DebugTextInfo: public None
{
public:
	Class Actor*                                       SrcActor                                           // 0x0(0x8)
	Struct Vector                                      SrcActorOffset                                     // 0x8(0xc)
	Struct Vector                                      SrcActorDesiredOffset                              // 0x14(0xc)
	Struct FString                                     DebugText                                          // 0x20(0x10)
	float                                              TimeRemaining                                      // 0x30(0x4)
	float                                              Duration                                           // 0x34(0x4)
	Struct Color                                       TextColor                                          // 0x38(0x4)
	bool                                               bAbsoluteLocation                                  // 0x3c(0x1)
	bool                                               bKeepAttachedToActor                               // 0x3c(0x1)
	bool                                               bDrawShadow                                        // 0x3c(0x1)
	Struct Vector                                      OrigActorLocation                                  // 0x40(0xc)
	Class Font*                                        Font                                               // 0x50(0x8)
	float                                              FontScale                                          // 0x58(0x4)
};


// Size 0x20
class GameClassShortName: public None
{
public:
	Struct FString                                     ShortName                                          // 0x0(0x10)
	Struct FString                                     GameClassName                                      // 0x10(0x10)
};


// Size 0xc
class MergedCollisionActorsSimplification: public None
{
public:
	Struct CollisionMergingSettings                    MergeCollisionSettings                             // 0x0(0x1)
	float                                              MaxBoundRadius                                     // 0x4(0x4)
	int                                                MinNumberOfComponentsToMerge                       // 0x8(0x4)
};


// Size 0xc0
class HierarchicalSimplification: public None
{
public:
	bool                                               bSimplifyMesh                                      // 0x0(0x1)
	float                                              DrawDistance                                       // 0x4(0x4)
	float                                              DesiredBoundRadius                                 // 0x8(0x4)
	float                                              DesiredFillingPercentage                           // 0xc(0x4)
	int                                                MinNumberOfActorsToBuild                           // 0x10(0x4)
	Struct MeshProxySettings                           ProxySetting                                       // 0x14(0x70)
	Struct MeshMergingSettings                         MergeSetting                                       // 0x88(0x38)
};


// Size 0x28
class NetViewer: public None
{
public:
	Class Actor*                                       InViewer                                           // 0x0(0x8)
	Class Actor*                                       ViewTarget                                         // 0x8(0x8)
	Struct Vector                                      ViewLocation                                       // 0x10(0xc)
	Struct Vector                                      ViewDir                                            // 0x1c(0xc)
};


// Size 0x44
class LightmassWorldInfoSettings: public None
{
public:
	float                                              StaticLightingLevelScale                           // 0x0(0x4)
	int                                                NumIndirectLightingBounces                         // 0x4(0x4)
	float                                              IndirectLightingQuality                            // 0x8(0x4)
	float                                              IndirectLightingSmoothness                         // 0xc(0x4)
	Struct Color                                       EnvironmentColor                                   // 0x10(0x4)
	float                                              EnvironmentIntensity                               // 0x14(0x4)
	float                                              EmissiveBoost                                      // 0x18(0x4)
	float                                              DiffuseBoost                                       // 0x1c(0x4)
	bool                                               bUseAmbientOcclusion                               // 0x20(0x1)
	bool                                               bGenerateAmbientOcclusionMaterialMask              // 0x20(0x1)
	float                                              DirectIlluminationOcclusionFraction                // 0x24(0x4)
	float                                              IndirectIlluminationOcclusionFraction              // 0x28(0x4)
	float                                              OcclusionExponent                                  // 0x2c(0x4)
	float                                              FullyOccludedSamplesFraction                       // 0x30(0x4)
	float                                              MaxOcclusionDistance                               // 0x34(0x4)
	bool                                               bVisualizeMaterialDiffuse                          // 0x38(0x1)
	bool                                               bVisualizeAmbientOcclusion                         // 0x38(0x1)
	float                                              VolumeLightSamplePlacementScale                    // 0x3c(0x4)
	bool                                               bCompressLightmaps                                 // 0x40(0x1)
};


// Size 0x20
class GameModePrefix: public None
{
public:
	Struct FString                                     Prefix                                             // 0x0(0x10)
	Struct FString                                     GameMode                                           // 0x10(0x10)
};


// Size 0x18
class InterpGroupActorInfo: public None
{
public:
	struct FName                                       ObjectName                                         // 0x0(0x8)
	TArray<class Actors*>                              Actors                                             // 0x8(0x10)
};


// Size 0x10
class CameraCutInfo: public None
{
public:
	Struct Vector                                      Location                                           // 0x0(0xc)
	float                                              TimeStamp                                          // 0xc(0x4)
};


// Size 0x4
class NavigationFilterFlags: public None
{
public:
	bool                                               bNavFlag0                                          // 0x0(0x1)
	bool                                               bNavFlag1                                          // 0x0(0x1)
	bool                                               bNavFlag2                                          // 0x0(0x1)
	bool                                               bNavFlag3                                          // 0x0(0x1)
	bool                                               bNavFlag4                                          // 0x0(0x1)
	bool                                               bNavFlag5                                          // 0x0(0x1)
	bool                                               bNavFlag6                                          // 0x0(0x1)
	bool                                               bNavFlag7                                          // 0x0(0x1)
	bool                                               bNavFlag8                                          // 0x1(0x1)
	bool                                               bNavFlag9                                          // 0x1(0x1)
	bool                                               bNavFlag10                                         // 0x1(0x1)
	bool                                               bNavFlag11                                         // 0x1(0x1)
	bool                                               bNavFlag12                                         // 0x1(0x1)
	bool                                               bNavFlag13                                         // 0x1(0x1)
	bool                                               bNavFlag14                                         // 0x1(0x1)
	bool                                               bNavFlag15                                         // 0x1(0x1)
};


// Size 0x18
class NavigationFilterArea: public None
{
public:
	class                                              AreaClass                                          // 0x0(0x8)
	float                                              TravelCostOverride                                 // 0x8(0x4)
	float                                              EnteringCostOverride                               // 0xc(0x4)
	bool                                               bIsExcluded                                        // 0x10(0x1)
	bool                                               bOverrideTravelCost                                // 0x10(0x1)
	bool                                               bOverrideEnteringCost                              // 0x10(0x1)
};


// Size 0x20
class SupportedAreaData: public None
{
public:
	Struct FString                                     AreaClassName                                      // 0x0(0x10)
	int                                                AreaID                                             // 0x10(0x4)
	class                                              AreaClass                                          // 0x18(0x8)
};


// Size 0x18
class NavGraphNode: public None
{
public:
	Class Object*                                      Owner                                              // 0x0(0x8)
};


// Size 0x18
class NavGraphEdge: public None
{
public:
};


// Size 0x60
class NavigationSegmentLink: public None
{
public:
	Struct Vector                                      LeftStart                                          // 0x30(0xc)
	Struct Vector                                      LeftEnd                                            // 0x3c(0xc)
	Struct Vector                                      RightStart                                         // 0x48(0xc)
	Struct Vector                                      RightEnd                                           // 0x54(0xc)
};


// Size 0x30
class NavigationLinkBase: public None
{
public:
	float                                              LeftProjectHeight                                  // 0x0(0x4)
	float                                              MaxFallDownLength                                  // 0x4(0x4)
	byte                                               Direction                                          // 0x8(0x1)
	float                                              SnapRadius                                         // 0x10(0x4)
	float                                              SnapHeight                                         // 0x14(0x4)
	bool                                               bUseSnapHeight                                     // 0x18(0x1)
	bool                                               bSnapToCheapestArea                                // 0x18(0x1)
	class                                              AreaClass                                          // 0x20(0x8)
	Struct NavAgentSelector                            SupportedAgents                                    // 0x28(0x4)
	bool                                               bSupportsAgent0                                    // 0x2c(0x1)
	bool                                               bSupportsAgent1                                    // 0x2c(0x1)
	bool                                               bSupportsAgent2                                    // 0x2c(0x1)
	bool                                               bSupportsAgent3                                    // 0x2c(0x1)
	bool                                               bSupportsAgent4                                    // 0x2c(0x1)
	bool                                               bSupportsAgent5                                    // 0x2c(0x1)
	bool                                               bSupportsAgent6                                    // 0x2c(0x1)
	bool                                               bSupportsAgent7                                    // 0x2c(0x1)
	bool                                               bSupportsAgent8                                    // 0x2d(0x1)
	bool                                               bSupportsAgent9                                    // 0x2d(0x1)
	bool                                               bSupportsAgent10                                   // 0x2d(0x1)
	bool                                               bSupportsAgent11                                   // 0x2d(0x1)
	bool                                               bSupportsAgent12                                   // 0x2d(0x1)
	bool                                               bSupportsAgent13                                   // 0x2d(0x1)
	bool                                               bSupportsAgent14                                   // 0x2d(0x1)
	bool                                               bSupportsAgent15                                   // 0x2d(0x1)
};


// Size 0x48
class NavigationLink: public None
{
public:
	Struct Vector                                      Left                                               // 0x30(0xc)
	Struct Vector                                      Right                                              // 0x3c(0xc)
};


// Size 0x14
class LightmassMaterialInterfaceSettings: public None
{
public:
	bool                                               bCastShadowAsMasked                                // 0x0(0x1)
	float                                              EmissiveBoost                                      // 0x4(0x4)
	float                                              DiffuseBoost                                       // 0x8(0x4)
	float                                              ExportResolutionScale                              // 0xc(0x4)
	bool                                               bOverrideCastShadowAsMasked                        // 0x10(0x1)
	bool                                               bOverrideEmissiveBoost                             // 0x10(0x1)
	bool                                               bOverrideDiffuseBoost                              // 0x10(0x1)
	bool                                               bOverrideExportResolutionScale                     // 0x10(0x1)
};


// Size 0xc
class MaterialRelevance: public None
{
public:
	bool                                               bOpaque                                            // 0x0(0x1)
	bool                                               bMasked                                            // 0x0(0x1)
	bool                                               bDistortion                                        // 0x0(0x1)
	bool                                               bSeparateTranslucency                              // 0x0(0x1)
	bool                                               bNormalTranslucency                                // 0x0(0x1)
	bool                                               bDisableDepthTest                                  // 0x0(0x1)
	bool                                               bOutputsVelocityInBasePass                         // 0x0(0x1)
	bool                                               bUsesGlobalDistanceField                           // 0x0(0x1)
	bool                                               bOITTranslucencyRelevance                          // 0x8(0x1)
	bool                                               bOITAfterTranslucencyRelevance                     // 0x8(0x1)
	bool                                               bLowResTranslucencyRelevance                       // 0x8(0x1)
	bool                                               bLowResCloudsRelevance                             // 0x8(0x1)
	bool                                               bMaskPassRelevance                                 // 0x8(0x1)
	bool                                               bTranslucentBeforeTranslucency                     // 0x8(0x1)
	bool                                               bTranslucentBeforeVolumeFog                        // 0x8(0x1)
	bool                                               bTranslucentWithDepthWrite                         // 0x8(0x1)
};


// Size 0x78
class SpriteCategoryInfo: public None
{
public:
	struct FName                                       Category                                           // 0x0(0x8)
	Struct FText                                       DisplayName                                        // 0x8(0x38)
	Struct FText                                       Description                                        // 0x40(0x38)
};


// Size 0x10
class NamedEmitterMaterial: public None
{
public:
	struct FName                                       Name                                               // 0x0(0x8)
	Class MaterialInterface*                           Material                                           // 0x8(0x8)
};


// Size 0x10
class LODSoloTrack: public None
{
public:
	TArray<Byte ParticleSystemLOD>                     SoloEnableSetting                                  // 0x0(0x10)
};


// Size 0x1
class ParticleSystemLOD: public None
{
public:
};


// Size 0x50
class ParticleSysParam: public None
{
public:
	struct FName                                       Name                                               // 0x0(0x8)
	byte                                               ParamType                                          // 0x8(0x1)
	float                                              Scalar                                             // 0xc(0x4)
	float                                              Scalar_Low                                         // 0x10(0x4)
	Struct Vector                                      Vector                                             // 0x14(0xc)
	Struct Vector                                      Vector_Low                                         // 0x20(0xc)
	Struct Color                                       Color                                              // 0x2c(0x4)
	Class Actor*                                       Actor                                              // 0x30(0x8)
	Class MaterialInterface*                           Material                                           // 0x38(0x8)
	TArray<Struct EmitterPointData>                    EmitterPoints                                      // 0x40(0x10)
};


// Size 0x40
class EmitterPointData: public None
{
public:
	Struct Vector4                                     Position                                           // 0x0(0x10)
	Struct Vector4                                     InheritedVelocity                                  // 0x10(0x10)
	Struct Vector4                                     Orientation                                        // 0x20(0x10)
	Struct Vector                                      Scale                                              // 0x30(0xc)
};


// Size 0x38
class TriMeshCollisionData: public None
{
public:
	TArray<Struct PreviewAssetAttachContainer>         Vertices                                           // 0x0(0x10)
	TArray<Struct TriIndices>                          Indices                                            // 0x10(0x10)
	bool                                               bFlipNormals                                       // 0x20(0x1)
};


// Size 0xc
class TriIndices: public None
{
public:
	int                                                v0                                                 // 0x0(0x4)
	int                                                v1                                                 // 0x4(0x4)
	int                                                v2                                                 // 0x8(0x4)
};


// Size 0x10
class PreviewAssetAttachContainer: public None
{
public:
	TArray<Struct PreviewAttachedObjectPair>           AttachedObjects                                    // 0x0(0x10)
};


// Size 0x30
class PreviewAttachedObjectPair: public None
{
public:
	Class Object*                                      Object                                             // 0x20(0x8)
	struct FName                                       AttachedTo                                         // 0x28(0x8)
};


// Size 0x10
class DeformablesSettings: public None
{
public:
	float                                              DistanceStiffness                                  // 0x0(0x4)
	float                                              VolumeStiffness                                    // 0x4(0x4)
	float                                              Damping                                            // 0x8(0x4)
	float                                              MaxDistance                                        // 0xc(0x4)
};


// Size 0x10
class SkeletalMaterial: public None
{
public:
	Class MaterialInterface*                           MaterialInterface                                  // 0x0(0x8)
	bool                                               bEnableShadowCasting                               // 0x8(0x1)
};


// Size 0x40
class ClothingAssetData: public None
{
public:
	struct FName                                       AssetName                                          // 0x0(0x8)
	Struct FString                                     ApexFileName                                       // 0x8(0x10)
	bool                                               bClothPropertiesChanged                            // 0x18(0x1)
	Struct ClothPhysicsProperties                      PhysicsProperties                                  // 0x1c(0x24)
};


// Size 0x24
class ClothPhysicsProperties: public None
{
public:
	float                                              BendResistance                                     // 0x0(0x4)
	float                                              ShearResistance                                    // 0x4(0x4)
	float                                              StretchLimit                                       // 0x8(0x4)
	float                                              Friction                                           // 0xc(0x4)
	float                                              Damping                                            // 0x10(0x4)
	float                                              Drag                                               // 0x14(0x4)
	float                                              GravityScale                                       // 0x18(0x4)
	float                                              InertiaBlend                                       // 0x1c(0x4)
	float                                              SelfCollisionThickness                             // 0x20(0x4)
};


// Size 0x10
class MorphTargetMap: public None
{
public:
	struct FName                                       Name                                               // 0x0(0x8)
	Class MorphTarget*                                 MorphTarget                                        // 0x8(0x8)
};


// Size 0xf0
class SkeletalMeshLODInfo: public None
{
public:
	float                                              ScreenSize                                         // 0x0(0x4)
	float                                              LODHysteresis                                      // 0x4(0x4)
	TArray<Int >                                       LODMaterialMap                                     // 0x8(0x10)
	TArray<Struct TriangleSortSettings>                TriangleSortSettings                               // 0x18(0x10)
	bool                                               bHasBeenSimplified                                 // 0x28(0x1)
	Struct SkeletalMeshOptimizationSettings            ReductionSettings                                  // 0x30(0x70)
	Struct SimplygonRemeshingSettings                  RemeshingSettings                                  // 0xa0(0x50)
};


// Size 0x70
class SkeletalMeshOptimizationSettings: public None
{
public:
	byte                                               ReductionMethod                                    // 0x0(0x1)
	float                                              NumOfTrianglesPercentage                           // 0x4(0x4)
	float                                              MaxDeviationPercentage                             // 0x8(0x4)
	float                                              WeldingThreshold                                   // 0xc(0x4)
	bool                                               bRecalcNormals                                     // 0x10(0x1)
	float                                              NormalsThreshold                                   // 0x14(0x4)
	byte                                               SilhouetteImportance                               // 0x18(0x1)
	byte                                               TextureImportance                                  // 0x19(0x1)
	byte                                               ShadingImportance                                  // 0x1a(0x1)
	byte                                               SkinningImportance                                 // 0x1b(0x1)
	float                                              BoneReductionRatio                                 // 0x1c(0x4)
	int                                                MaxBonesPerVertex                                  // 0x20(0x4)
	TArray<Struct MaxBonesPerVertex>                   BonesToRemove                                      // 0x28(0x10)
	int                                                BaseLODModel                                       // 0x38(0x4)
	int                                                LODChainLastIndex                                  // 0x3c(0x4)
	bool                                               bForceRebuild                                      // 0x40(0x1)
	Struct SimplygonMaterialLODSettings                MaterialLODSettings                                // 0x48(0x28)
};


// Size 0xc
class TriangleSortSettings: public None
{
public:
	byte                                               TriangleSorting                                    // 0x0(0x1)
	byte                                               CustomLeftRightAxis                                // 0x1(0x1)
	struct FName                                       CustomLeftRightBoneName                            // 0x4(0x8)
};


// Size 0x14
class BoneMirrorExport: public None
{
public:
	struct FName                                       BoneName                                           // 0x0(0x8)
	struct FName                                       SourceBoneName                                     // 0x8(0x8)
	byte                                               BoneFlipAxis                                       // 0x10(0x1)
};


// Size 0x8
class BoneMirrorInfo: public None
{
public:
	int                                                SourceIndex                                        // 0x0(0x4)
	byte                                               BoneFlipAxis                                       // 0x4(0x1)
};


// Size 0xc
class AnimationGroupReference: public None
{
public:
	struct FName                                       GroupName                                          // 0x0(0x8)
	byte                                               GroupRole                                          // 0x8(0x1)
};


// Size 0x40
class RootMotionMovementParams: public None
{
public:
	bool                                               bHasRootMotion                                     // 0x0(0x1)
	float                                              BlendWeight                                        // 0x4(0x4)
	Struct Transform                                   RootMotionTransform                                // 0x10(0x30)
};


// Size 0x18
class AnimGroupInstance: public None
{
public:
};


// Size 0x40
class AnimTickRecord: public None
{
public:
	Class AnimationAsset*                              SourceAsset                                        // 0x0(0x8)
};


// Size 0x8
class AnimExtractContext: public None
{
public:
	bool                                               bExtractRootMotion                                 // 0x0(0x1)
	float                                              CurrentTime                                        // 0x4(0x4)
};


// Size 0x90
class BlendFilter: public None
{
public:
};


// Size 0x20
class BlendSampleData: public None
{
public:
	int                                                SampleDataIndex                                    // 0x0(0x4)
	float                                              TotalWeight                                        // 0x4(0x4)
	float                                              Time                                               // 0x8(0x4)
};


// Size 0x38
class BasedMovementInfo: public None
{
public:
	Class PrimitiveComponent*                          MovementBase                                       // 0x0(0x8)
	struct FName                                       BoneName                                           // 0x8(0x8)
	Struct Vector_NetQuantize100                       Location                                           // 0x10(0xc)
	Struct Rotator                                     Rotation                                           // 0x1c(0xc)
	bool                                               bServerHasBaseComponent                            // 0x28(0x1)
	bool                                               bRelativeRotation                                  // 0x29(0x1)
	Struct Vector                                      LinearVelocity                                     // 0x2c(0xc)
};


// Size 0x48
class SimulatedRootMotionReplicatedMove: public None
{
public:
	float                                              Time                                               // 0x0(0x4)
	Struct RepRootMotionMontage                        RootMotion                                         // 0x8(0x40)
};


// Size 0x40
class RepRootMotionMontage: public None
{
public:
	Class AnimMontage*                                 AnimMontage                                        // 0x0(0x8)
	float                                              Position                                           // 0x8(0x4)
	Struct Vector_NetQuantize10                        Location                                           // 0xc(0xc)
	Struct Rotator                                     Rotation                                           // 0x18(0xc)
	Class PrimitiveComponent*                          MovementBase                                       // 0x28(0x8)
	struct FName                                       MovementBaseBoneName                               // 0x30(0x8)
	bool                                               bRelativePosition                                  // 0x38(0x1)
	bool                                               bRelativeRotation                                  // 0x39(0x1)
};


// Size 0x10
class SkelMeshComponentLODInfo: public None
{
public:
	TArray<Bool ActiveVertexAnim>                      HiddenMaterials                                    // 0x0(0x10)
};


// Size 0x10
class ActiveVertexAnim: public None
{
public:
	Class VertexAnimBase*                              VertAnim                                           // 0x0(0x8)
	float                                              Weight                                             // 0x8(0x4)
	float                                              Time                                               // 0xc(0x4)
};


// Size 0x160
class ConstraintInstance: public None
{
public:
	Class SceneComponent*                              OwnerComponent                                     // 0x8(0x8)
	struct FName                                       JointName                                          // 0x1c(0x8)
	struct FName                                       ConstraintBone1                                    // 0x24(0x8)
	struct FName                                       ConstraintBone2                                    // 0x2c(0x8)
	Struct Vector                                      Pos1                                               // 0x34(0xc)
	Struct Vector                                      PriAxis1                                           // 0x40(0xc)
	Struct Vector                                      SecAxis1                                           // 0x4c(0xc)
	Struct Vector                                      Pos2                                               // 0x58(0xc)
	Struct Vector                                      PriAxis2                                           // 0x64(0xc)
	Struct Vector                                      SecAxis2                                           // 0x70(0xc)
	bool                                               bDisableCollision                                  // 0x7c(0x1)
	bool                                               bEnableProjection                                  // 0x7c(0x1)
	float                                              ProjectionLinearTolerance                          // 0x80(0x4)
	float                                              ProjectionAngularTolerance                         // 0x84(0x4)
	byte                                               LinearXMotion                                      // 0x88(0x1)
	byte                                               LinearYMotion                                      // 0x89(0x1)
	byte                                               LinearZMotion                                      // 0x8a(0x1)
	float                                              LinearLimitSize                                    // 0x8c(0x4)
	bool                                               bLinearLimitSoft                                   // 0x90(0x1)
	float                                              LinearLimitStiffness                               // 0x94(0x4)
	float                                              LinearLimitDamping                                 // 0x98(0x4)
	bool                                               bLinearBreakable                                   // 0x9c(0x1)
	float                                              LinearBreakThreshold                               // 0xa0(0x4)
	byte                                               AngularSwing1Motion                                // 0xa4(0x1)
	byte                                               AngularTwistMotion                                 // 0xa5(0x1)
	byte                                               AngularSwing2Motion                                // 0xa6(0x1)
	bool                                               bSwingLimitSoft                                    // 0xa8(0x1)
	bool                                               bTwistLimitSoft                                    // 0xa8(0x1)
	float                                              Swing1LimitAngle                                   // 0xac(0x4)
	float                                              TwistLimitAngle                                    // 0xb0(0x4)
	float                                              Swing2LimitAngle                                   // 0xb4(0x4)
	float                                              SwingLimitStiffness                                // 0xb8(0x4)
	float                                              SwingLimitDamping                                  // 0xbc(0x4)
	float                                              TwistLimitStiffness                                // 0xc0(0x4)
	float                                              TwistLimitDamping                                  // 0xc4(0x4)
	Struct Rotator                                     AngularRotationOffset                              // 0xc8(0xc)
	bool                                               bAngularBreakable                                  // 0xd4(0x1)
	float                                              AngularBreakThreshold                              // 0xd8(0x4)
	bool                                               bLinearXPositionDrive                              // 0xdc(0x1)
	bool                                               bLinearXVelocityDrive                              // 0xdc(0x1)
	bool                                               bLinearYPositionDrive                              // 0xdc(0x1)
	bool                                               bLinearYVelocityDrive                              // 0xdc(0x1)
	bool                                               bLinearZPositionDrive                              // 0xdc(0x1)
	bool                                               bLinearZVelocityDrive                              // 0xdc(0x1)
	bool                                               bLinearPositionDrive                               // 0xdc(0x1)
	bool                                               bLinearVelocityDrive                               // 0xdc(0x1)
	Struct Vector                                      LinearPositionTarget                               // 0xe0(0xc)
	Struct Vector                                      LinearVelocityTarget                               // 0xec(0xc)
	float                                              LinearDriveSpring                                  // 0xf8(0x4)
	float                                              LinearDriveDamping                                 // 0xfc(0x4)
	float                                              LinearDriveForceLimit                              // 0x100(0x4)
	bool                                               bSwingPositionDrive                                // 0x104(0x1)
	bool                                               bSwingVelocityDrive                                // 0x104(0x1)
	bool                                               bTwistPositionDrive                                // 0x104(0x1)
	bool                                               bTwistVelocityDrive                                // 0x104(0x1)
	bool                                               bAngularSlerpDrive                                 // 0x104(0x1)
	bool                                               bAngularOrientationDrive                           // 0x104(0x1)
	bool                                               bEnableSwingDrive                                  // 0x104(0x1)
	bool                                               bEnableTwistDrive                                  // 0x104(0x1)
	bool                                               bAngularVelocityDrive                              // 0x105(0x1)
	Struct Quat                                        AngularPositionTarget                              // 0x110(0x10)
	byte                                               AngularDriveMode                                   // 0x120(0x1)
	Struct Rotator                                     AngularOrientationTarget                           // 0x124(0xc)
	Struct Vector                                      AngularVelocityTarget                              // 0x130(0xc)
	float                                              AngularDriveSpring                                 // 0x13c(0x4)
	float                                              AngularDriveDamping                                // 0x140(0x4)
	float                                              AngularDriveForceLimit                             // 0x144(0x4)
};


// Size 0x50
class SmartNameContainer: public None
{
public:
};


// Size 0x68
class SmartNameMapping: public None
{
public:
};


// Size 0x18
class AnimSlotGroup: public None
{
public:
	struct FName                                       GroupName                                          // 0x0(0x8)
	TArray<Struct FName>                               SlotNames                                          // 0x8(0x10)
};


// Size 0x18
class RigConfiguration: public None
{
public:
	Class Rig*                                         Rig                                                // 0x0(0x8)
	TArray<Struct NameMapping>                         BoneMappingTable                                   // 0x8(0x10)
};


// Size 0x10
class NameMapping: public None
{
public:
	struct FName                                       NodeName                                           // 0x0(0x8)
	struct FName                                       BoneName                                           // 0x8(0x8)
};


// Size 0x10
class BoneReductionSetting: public None
{
public:
	TArray<Name None>                                  BonesToRemove                                      // 0x0(0x10)
};


// Size 0x18
class ReferencePose: public None
{
public:
	struct FName                                       PoseName                                           // 0x0(0x8)
	TArray<Struct PoseName>                            ReferencePose                                      // 0x8(0x10)
};


// Size 0x1
class BoneNode: public None
{
public:
	byte                                               TranslationRetargetingMode                         // 0x0(0x1)
};


// Size 0x20
class SkeletonToMeshLinkup: public None
{
public:
	TArray<Int None>                                   SkeletonToMeshTable                                // 0x0(0x10)
	TArray<Int >                                       MeshToSkeletonTable                                // 0x10(0x10)
};


// Size 0x30
class AnimLinkableElement: public None
{
public:
	Class AnimMontage*                                 LinkedMontage                                      // 0x8(0x8)
	int                                                SlotIndex                                          // 0x10(0x4)
	int                                                SegmentIndex                                       // 0x14(0x4)
	byte                                               LinkMethod                                         // 0x18(0x1)
	byte                                               CachedLinkMethod                                   // 0x19(0x1)
	float                                              SegmentBeginTime                                   // 0x1c(0x4)
	float                                              SegmentLength                                      // 0x20(0x4)
	float                                              LinkValue                                          // 0x24(0x4)
	Class AnimSequenceBase*                            LinkedSequence                                     // 0x28(0x8)
};


// Size 0x28
class AnimNotifyTrack: public None
{
public:
	struct FName                                       TrackName                                          // 0x0(0x8)
	Struct LinearColor                                 TrackColor                                         // 0x8(0x10)
};


// Size 0xb0
class AnimNotifyEvent: public None
{
public:
	float                                              DisplayTime                                        // 0x30(0x4)
	float                                              TriggerTimeOffset                                  // 0x34(0x4)
	float                                              EndTriggerTimeOffset                               // 0x38(0x4)
	float                                              TriggerWeightThreshold                             // 0x3c(0x4)
	struct FName                                       NotifyName                                         // 0x40(0x8)
	Class AnimNotify*                                  Notify                                             // 0x48(0x8)
	Class AnimNotifyState*                             NotifyStateClass                                   // 0x50(0x8)
	Class AnimNotifyCondition*                         NotifyCondition                                    // 0x58(0x8)
	float                                              Duration                                           // 0x60(0x4)
	Struct AnimLinkableElement                         EndLink                                            // 0x68(0x30)
	bool                                               bConvertedFromBranchingPoint                       // 0x98(0x1)
	byte                                               MontageTickType                                    // 0x99(0x1)
	float                                              NotifyTriggerChance                                // 0x9c(0x4)
	byte                                               NotifyFilterType                                   // 0xa0(0x1)
	int                                                NotifyFilterLOD                                    // 0xa4(0x4)
	int                                                TrackIndex                                         // 0xa8(0x4)
};


// Size 0x10
class RawCurveTracks: public None
{
public:
	TArray<Struct FloatCurve>                          FloatCurves                                        // 0x0(0x10)
};


// Size 0x90
class FloatCurve: public None
{
public:
	Struct RichCurve                                   FloatCurve                                         // 0x18(0x78)
};


// Size 0x18
class AnimCurveBase: public None
{
public:
	struct FName                                       LastObservedName                                   // 0x8(0x8)
	int                                                CurveTypeFlags                                     // 0x14(0x4)
};


// Size 0x498
class TransformCurve: public None
{
public:
	Struct VectorCurve                                 TranslationCurve                                   // 0x18(0x180)
	Struct VectorCurve                                 RotationCurve                                      // 0x198(0x180)
	Struct VectorCurve                                 ScaleCurve                                         // 0x318(0x180)
};


// Size 0x180
class VectorCurve: public None
{
public:
	Struct RichCurve                                   FloatCurves                                        // 0x18(0x78)
};


// Size 0x50
class SkeletalMeshComponentPreClothTickFunction: public None
{
public:
};


// Size 0x20
class SingleAnimationPlayData: public None
{
public:
	Class AnimationAsset*                              AnimToPlay                                         // 0x0(0x8)
	Class VertexAnimation*                             VertexAnimToPlay                                   // 0x8(0x8)
	bool                                               bSavedLooping                                      // 0x10(0x1)
	bool                                               bSavedPlaying                                      // 0x10(0x1)
	float                                              SavedPosition                                      // 0x14(0x4)
	float                                              SavedPlayRate                                      // 0x18(0x4)
};


// Size 0x10
class AnimTrack: public None
{
public:
	TArray<Struct AnimSegment>                         AnimSegments                                       // 0x0(0x10)
};


// Size 0x20
class AnimSegment: public None
{
public:
	Class AnimSequenceBase*                            AnimReference                                      // 0x0(0x8)
	float                                              StartPos                                           // 0x8(0x4)
	float                                              AnimStartTime                                      // 0xc(0x4)
	float                                              AnimEndTime                                        // 0x10(0x4)
	float                                              AnimPlayRate                                       // 0x14(0x4)
	int                                                LoopingCount                                       // 0x18(0x4)
};


// Size 0x10
class RootMotionExtractionStep: public None
{
public:
	Class AnimSequence*                                AnimSequence                                       // 0x0(0x8)
	float                                              StartPosition                                      // 0x8(0x4)
	float                                              EndPosition                                        // 0xc(0x4)
};


// Size 0x30
class AlphaBlend: public None
{
public:
	byte                                               BlendOption                                        // 0x0(0x1)
	float                                              BeginValue                                         // 0x4(0x4)
	float                                              DesiredValue                                       // 0x8(0x4)
	float                                              BlendTime                                          // 0xc(0x4)
	Class CurveFloat*                                  CustomCurve                                        // 0x10(0x8)
	float                                              AlphaLerp                                          // 0x18(0x4)
	float                                              AlphaBlend                                         // 0x1c(0x4)
	float                                              AlphaTarget                                        // 0x20(0x4)
	float                                              BlendTimeRemaining                                 // 0x24(0x4)
	float                                              BlendedValue                                       // 0x28(0x4)
};


// Size 0x30
class BakedAnimationStateMachine: public None
{
public:
	struct FName                                       MachineName                                        // 0x0(0x8)
	int                                                InitialState                                       // 0x8(0x4)
	TArray<Struct BakedAnimationState>                 States                                             // 0x10(0x10)
	TArray<Struct AnimationTransitionBetweenStates>    Transitions                                        // 0x20(0x10)
};


// Size 0x38
class AnimationTransitionBetweenStates: public None
{
public:
	int                                                PreviousState                                      // 0x8(0x4)
	int                                                NextState                                          // 0xc(0x4)
	float                                              CrossfadeDuration                                  // 0x10(0x4)
	int                                                StartNotify                                        // 0x14(0x4)
	int                                                EndNotify                                          // 0x18(0x4)
	int                                                InterruptNotify                                    // 0x1c(0x4)
	byte                                               BlendMode                                          // 0x20(0x1)
	Class CurveFloat*                                  CustomCurve                                        // 0x28(0x8)
	byte                                               LogicType                                          // 0x30(0x1)
};


// Size 0x8
class AnimationStateBase: public None
{
public:
	struct FName                                       StateName                                          // 0x0(0x8)
};


// Size 0x50
class BakedAnimationState: public None
{
public:
	struct FName                                       StateName                                          // 0x0(0x8)
	struct FName                                       PathedStateName                                    // 0x8(0x8)
	TArray<Struct BakedStateExitTransition>            Transitions                                        // 0x10(0x10)
	int                                                StateRootNodeIndex                                 // 0x20(0x4)
	int                                                StartNotify                                        // 0x24(0x4)
	int                                                EndNotify                                          // 0x28(0x4)
	int                                                FullyBlendedNotify                                 // 0x2c(0x4)
	bool                                               bIsAConduit                                        // 0x30(0x1)
	int                                                EntryRuleNodeIndex                                 // 0x34(0x4)
	TArray<Int >                                       PlayerNodeIndices                                  // 0x38(0x10)
	bool                                               CanBeReEntered                                     // 0x48(0x1)
};


// Size 0x20
class BakedStateExitTransition: public None
{
public:
	int                                                CanTakeDelegateIndex                               // 0x0(0x4)
	int                                                CustomResultNodeIndex                              // 0x4(0x4)
	int                                                TransitionIndex                                    // 0x8(0x4)
	bool                                               bDesiredTransitionReturnValue                      // 0xc(0x1)
	bool                                               bAutomaticRemainingTimeRule                        // 0xd(0x1)
	TArray<Int >                                       PoseEvaluatorLinks                                 // 0x10(0x10)
};


// Size 0x28
class AnimationState: public None
{
public:
	TArray<Struct AnimationTransitionRule>             Transitions                                        // 0x8(0x10)
	int                                                StateRootNodeIndex                                 // 0x18(0x4)
	int                                                StartNotify                                        // 0x1c(0x4)
	int                                                EndNotify                                          // 0x20(0x4)
	int                                                FullyBlendedNotify                                 // 0x24(0x4)
};


// Size 0x10
class AnimationTransitionRule: public None
{
public:
	struct FName                                       RuleToExecute                                      // 0x0(0x8)
	bool                                               TransitionReturnVal                                // 0x8(0x1)
	int                                                TransitionIndex                                    // 0xc(0x4)
};


// Size 0x48
class SlotEvaluationPose: public None
{
public:
	byte                                               AdditiveType                                       // 0x0(0x1)
	float                                              Weight                                             // 0x4(0x4)
};


// Size 0x10
class PerBoneBlendWeights: public None
{
public:
	TArray<Struct PerBoneBlendWeight>                  BoneBlendWeights                                   // 0x0(0x10)
};


// Size 0x8
class PerBoneBlendWeight: public None
{
public:
	int                                                SourceIndex                                        // 0x0(0x4)
	float                                              BlendWeight                                        // 0x4(0x4)
};


// Size 0x28
class A2CSPose: public None
{
public:
	TArray<Byte AnimMontageInstance>                   ComponentSpaceFlags                                // 0x18(0x10)
};


// Size 0x10
class A2Pose: public None
{
public:
	TArray<Struct ComponentSpaceFlags>                 Bones                                              // 0x0(0x10)
};


// Size 0xa0
class AnimMontageInstance: public None
{
public:
	Class AnimMontage*                                 Montage                                            // 0x0(0x8)
	float                                              DesiredWeight                                      // 0x8(0x4)
	float                                              Weight                                             // 0xc(0x4)
	float                                              BlendTime                                          // 0x10(0x4)
	float                                              DefaultBlendTimeMultiplier                         // 0x14(0x4)
	TArray<Int >                                       NextSections                                       // 0x18(0x10)
	TArray<Int >                                       PrevSections                                       // 0x28(0x10)
	bool                                               bPlaying                                           // 0x38(0x1)
	TArray<Struct bPlaying>                            ActiveStateBranchingPoints                         // 0x68(0x10)
	float                                              Position                                           // 0x78(0x4)
	float                                              PlayRate                                           // 0x7c(0x4)
};


// Size 0xc
class BranchingPointMarker: public None
{
public:
	int                                                NotifyIndex                                        // 0x0(0x4)
	float                                              TriggerTime                                        // 0x4(0x4)
	byte                                               NotifyEventType                                    // 0x8(0x1)
};


// Size 0x40
class BranchingPoint: public None
{
public:
	struct FName                                       EventName                                          // 0x30(0x8)
	float                                              DisplayTime                                        // 0x38(0x4)
	float                                              TriggerTimeOffset                                  // 0x3c(0x4)
};


// Size 0x18
class SlotAnimationTrack: public None
{
public:
	struct FName                                       SlotName                                           // 0x0(0x8)
	Struct AnimTrack                                   AnimTrack                                          // 0x8(0x10)
};


// Size 0x58
class CompositeSection: public None
{
public:
	struct FName                                       SectionName                                        // 0x30(0x8)
	float                                              StartTime                                          // 0x38(0x4)
	struct FName                                       NextSectionName                                    // 0x3c(0x8)
	TArray<class MetaData*>                            MetaData                                           // 0x48(0x10)
};


// Size 0x4
class NavAvoidanceMask: public None
{
public:
	bool                                               bGroup0                                            // 0x0(0x1)
	bool                                               bGroup1                                            // 0x0(0x1)
	bool                                               bGroup2                                            // 0x0(0x1)
	bool                                               bGroup3                                            // 0x0(0x1)
	bool                                               bGroup4                                            // 0x0(0x1)
	bool                                               bGroup5                                            // 0x0(0x1)
	bool                                               bGroup6                                            // 0x0(0x1)
	bool                                               bGroup7                                            // 0x0(0x1)
	bool                                               bGroup8                                            // 0x1(0x1)
	bool                                               bGroup9                                            // 0x1(0x1)
	bool                                               bGroup10                                           // 0x1(0x1)
	bool                                               bGroup11                                           // 0x1(0x1)
	bool                                               bGroup12                                           // 0x1(0x1)
	bool                                               bGroup13                                           // 0x1(0x1)
	bool                                               bGroup14                                           // 0x1(0x1)
	bool                                               bGroup15                                           // 0x1(0x1)
	bool                                               bGroup16                                           // 0x2(0x1)
	bool                                               bGroup17                                           // 0x2(0x1)
	bool                                               bGroup18                                           // 0x2(0x1)
	bool                                               bGroup19                                           // 0x2(0x1)
	bool                                               bGroup20                                           // 0x2(0x1)
	bool                                               bGroup21                                           // 0x2(0x1)
	bool                                               bGroup22                                           // 0x2(0x1)
	bool                                               bGroup23                                           // 0x2(0x1)
	bool                                               bGroup24                                           // 0x3(0x1)
	bool                                               bGroup25                                           // 0x3(0x1)
	bool                                               bGroup26                                           // 0x3(0x1)
	bool                                               bGroup27                                           // 0x3(0x1)
	bool                                               bGroup28                                           // 0x3(0x1)
	bool                                               bGroup29                                           // 0x3(0x1)
	bool                                               bGroup30                                           // 0x3(0x1)
	bool                                               bGroup31                                           // 0x3(0x1)
};


// Size 0x50
class CharacterMovementComponentPreClothTickFunction: public None
{
public:
};


// Size 0x8c
class FindFloorResult: public None
{
public:
	bool                                               bBlockingHit                                       // 0x0(0x1)
	bool                                               bWalkableFloor                                     // 0x0(0x1)
	bool                                               bLineTrace                                         // 0x0(0x1)
	float                                              FloorDist                                          // 0x4(0x4)
	float                                              LineDist                                           // 0x8(0x4)
	Struct HitResult                                   HitResult                                          // 0xc(0x80)
};


// Size 0x2c
class AtmospherePrecomputeParameters: public None
{
public:
	float                                              DensityHeight                                      // 0x0(0x4)
	float                                              DecayHeight                                        // 0x4(0x4)
	int                                                MaxScatteringOrder                                 // 0x8(0x4)
	int                                                TransmittanceTexWidth                              // 0xc(0x4)
	int                                                TransmittanceTexHeight                             // 0x10(0x4)
	int                                                IrradianceTexWidth                                 // 0x14(0x4)
	int                                                IrradianceTexHeight                                // 0x18(0x4)
	int                                                InscatterAltitudeSampleNum                         // 0x1c(0x4)
	int                                                InscatterMuNum                                     // 0x20(0x4)
	int                                                InscatterMuSNum                                    // 0x24(0x4)
	int                                                InscatterNuNum                                     // 0x28(0x4)
};


// Size 0xc0
class AttenuationSettings: public None
{
public:
	bool                                               bAttenuate                                         // 0x0(0x1)
	bool                                               bSpatialize                                        // 0x0(0x1)
	bool                                               bAttenuateWithLPF                                  // 0x0(0x1)
	byte                                               DistanceAlgorithm                                  // 0x4(0x1)
	Struct RuntimeFloatCurve                           CustomAttenuationCurve                             // 0x8(0x80)
	byte                                               DistanceType                                       // 0x88(0x1)
	byte                                               AttenuationShape                                   // 0x89(0x1)
	float                                              dBAttenuationAtMax                                 // 0x8c(0x4)
	float                                              OmniRadius                                         // 0x90(0x4)
	byte                                               SpatializationAlgorithm                            // 0x94(0x1)
	float                                              RadiusMin                                          // 0x98(0x4)
	float                                              RadiusMax                                          // 0x9c(0x4)
	Struct Vector                                      AttenuationShapeExtents                            // 0xa0(0xc)
	float                                              ConeOffset                                         // 0xac(0x4)
	float                                              FalloffDistance                                    // 0xb0(0x4)
	float                                              LPFRadiusMin                                       // 0xb4(0x4)
	float                                              LPFRadiusMax                                       // 0xb8(0x4)
};


// Size 0x20
class AudioComponentParam: public None
{
public:
	struct FName                                       ParamName                                          // 0x0(0x8)
	float                                              FloatParam                                         // 0x8(0x4)
	bool                                               BoolParam                                          // 0xc(0x1)
	int                                                IntParam                                           // 0x10(0x4)
	Class SoundWave*                                   SoundWaveParam                                     // 0x18(0x8)
};


// Size 0x130
class FogVolumeInfo: public None
{
public:
	Class FogVolumeComponent*                          Component                                          // 0x0(0x8)
	Class Texture*                                     VolumeTexture                                      // 0x100(0x8)
	Class Texture*                                     MeshFogVolumeTexture                               // 0x108(0x8)
};


// Size 0x30
class WaterSimPlane: public None
{
public:
	class                                              WaterId                                            // 0x0(0x8)
	Class Object*                                      WaterOwner                                         // 0x8(0x8)
	Struct Plane                                       NonFFTPlane                                        // 0x10(0x10)
	bool                                               bUseFFT                                            // 0x20(0x1)
	bool                                               bActive                                            // 0x21(0x1)
	float                                              FFTBasePlaneHeight                                 // 0x24(0x4)
};


// Size 0x20
class MurkyRegion: public None
{
public:
	bool                                               Enabled                                            // 0x0(0x1)
	Struct Vector                                      Position                                           // 0x4(0xc)
	float                                              InnerRadius                                        // 0x10(0x4)
	float                                              OuterRadius                                        // 0x14(0x4)
	float                                              Density                                            // 0x18(0x4)
	bool                                               IsSuperHeatedWater                                 // 0x1c(0x1)
};


// Size 0x310
class FFTWaterComponentParams: public None
{
public:
	Struct LinearColor                                 AmbientColour                                      // 0x0(0x10)
	Struct LinearColor                                 WaterColour                                        // 0x10(0x10)
	Struct LinearColor                                 ShallowWaterColour                                 // 0x20(0x10)
	Struct LinearColor                                 BackLitColour                                      // 0x30(0x10)
	Struct LinearColor                                 FoamColour                                         // 0x40(0x10)
	Struct LinearColor                                 FoamHighlightColour                                // 0x50(0x10)
	float                                              FresnelPower                                       // 0x60(0x4)
	float                                              SpecularBrightness                                 // 0x64(0x4)
	float                                              FoamBrightness                                     // 0x68(0x4)
	float                                              ReflectionBrightness                               // 0x6c(0x4)
	float                                              FoamFadeStart                                      // 0x70(0x4)
	float                                              FoamFadeEnd                                        // 0x74(0x4)
	bool                                               DEBUG_Wireframe                                    // 0x78(0x1)
	float                                              Size                                               // 0x7c(0x4)
	float                                              WindSpeed                                          // 0x80(0x4)
	float                                              WindSpeedInEditor                                  // 0x84(0x4)
	float                                              CarrierWaveAmplitude                               // 0x88(0x4)
	float                                              CarrierWaveWaveLength                              // 0x8c(0x4)
	float                                              CarrierWavePropagationSpeed                        // 0x90(0x4)
	float                                              HorizonFadeDistance                                // 0x94(0x4)
	float                                              HorizonDarkenStart                                 // 0x98(0x4)
	float                                              HorizonDarkenRange                                 // 0x9c(0x4)
	float                                              CloudShadowDarkenStart                             // 0xa0(0x4)
	float                                              CloudShadowDarkenRange                             // 0xa4(0x4)
	float                                              CausticsDepth                                      // 0xa8(0x4)
	Class Texture*                                     FoamColourTex                                      // 0xb0(0x8)
	Struct FFTWaterComponentParticleParams             ParticleParams                                     // 0xb8(0x248)
	float                                              ExtendedPlaneSize                                  // 0x300(0x4)
	float                                              ExtendedPlaneFadeDistance                          // 0x304(0x4)
	Struct Vector2D                                    PositionOffset                                     // 0x308(0x8)
};


// Size 0x248
class FFTWaterComponentParticleParams: public None
{
public:
	int                                                MaxParticlesPerFrame                               // 0x0(0x4)
	Struct FFTWaterComponentWaveParticleType           WaveParticles                                      // 0x8(0x38)
	Struct FFTWaterComponentIntersectParticleType      IntersectionParticles                              // 0xe8(0x58)
};


// Size 0x58
class FFTWaterComponentIntersectParticleType: public None
{
public:
	Struct Vector2D                                    VelocityRange                                      // 0x0(0x8)
	Struct Vector2D                                    FoamRange                                          // 0x8(0x8)
	Struct Vector2D                                    HeightRange                                        // 0x10(0x8)
	Struct Vector2D                                    ParticleWaveVelocityRange                          // 0x18(0x8)
	Struct Vector2D                                    ParticleWaveAbsoluteSpeedDifferenceRange           // 0x20(0x8)
	float                                              Density                                            // 0x28(0x4)
	float                                              VolumeHorizontalVelocityWeight                     // 0x2c(0x4)
	float                                              HorizontalDirectionFromVolumeWeight                // 0x30(0x4)
	float                                              HorizontalRandomVelocityWeight                     // 0x34(0x4)
	float                                              VolumeVerticalVelocityWeight                       // 0x38(0x4)
	float                                              VerticalRandomVelocityWeight                       // 0x3c(0x4)
	float                                              WaterVelocityWeight                                // 0x40(0x4)
	float                                              VelocityScaling                                    // 0x44(0x4)
	bool                                               UnderwaterParticles                                // 0x48(0x1)
	Class ParticleComputeShaderData*                   ParticleComputeShaderData                          // 0x50(0x8)
};


// Size 0x38
class FFTWaterComponentWaveParticleType: public None
{
public:
	Struct Vector2D                                    SpawnRadiusRange                                   // 0x0(0x8)
	Struct Vector2D                                    FoamRange                                          // 0x8(0x8)
	Struct Vector2D                                    HeightRange                                        // 0x10(0x8)
	Struct Vector2D                                    AngleRange                                         // 0x18(0x8)
	Struct Vector2D                                    CalmWaterDampeningFactorRange                      // 0x20(0x8)
	float                                              Density                                            // 0x28(0x4)
	Class ParticleComputeShaderData*                   ParticleComputeShaderData                          // 0x30(0x8)
};


// Size 0x28
class BatchedPoint: public None
{
public:
	Struct Vector                                      Position                                           // 0x0(0xc)
	Struct LinearColor                                 Color                                              // 0xc(0x10)
	float                                              PointSize                                          // 0x1c(0x4)
	float                                              RemainingLifeTime                                  // 0x20(0x4)
	byte                                               DepthPriority                                      // 0x24(0x1)
};


// Size 0x34
class BatchedLine: public None
{
public:
	Struct Vector                                      Start                                              // 0x0(0xc)
	Struct Vector                                      End                                                // 0xc(0xc)
	Struct LinearColor                                 Color                                              // 0x18(0x10)
	float                                              Thickness                                          // 0x28(0x4)
	float                                              RemainingLifeTime                                  // 0x2c(0x4)
	byte                                               DepthPriority                                      // 0x30(0x1)
};


// Size 0x28
class MaterialSpriteElement: public None
{
public:
	Class MaterialInterface*                           Material                                           // 0x0(0x8)
	Class CurveFloat*                                  DistanceToOpacityCurve                             // 0x8(0x8)
	bool                                               bSizeIsInScreenSpace                               // 0x10(0x1)
	float                                              BaseSizeX                                          // 0x14(0x4)
	float                                              BaseSizeY                                          // 0x18(0x4)
	Class CurveFloat*                                  DistanceToSizeCurve                                // 0x20(0x8)
};


// Size 0x18
class CustomProfile: public None
{
public:
	struct FName                                       Name                                               // 0x0(0x8)
	TArray<Struct Name>                                CustomResponses                                    // 0x8(0x10)
};


// Size 0x10
class CustomChannelSetup: public None
{
public:
	byte                                               Channel                                            // 0x0(0x1)
	struct FName                                       Name                                               // 0x4(0x8)
	byte                                               DefaultResponse                                    // 0xc(0x1)
	bool                                               bTraceType                                         // 0xd(0x1)
	bool                                               bStaticObject                                      // 0xe(0x1)
};


// Size 0x60
class CollisionResponseTemplate: public None
{
public:
	struct FName                                       Name                                               // 0x0(0x8)
	byte                                               CollisionEnabled                                   // 0x8(0x1)
	struct FName                                       ObjectTypeName                                     // 0xc(0x8)
	TArray<Struct ObjectTypeName>                      CustomResponses                                    // 0x18(0x10)
	Struct FString                                     HelpMessage                                        // 0x28(0x10)
	bool                                               bCanModify                                         // 0x38(0x1)
};


// Size 0x28
class AssetEditorOrbitCameraPosition: public None
{
public:
	bool                                               bIsSet                                             // 0x0(0x1)
	Struct Vector                                      CamOrbitPoint                                      // 0x4(0xc)
	Struct Vector                                      CamOrbitZoom                                       // 0x10(0xc)
	Struct Rotator                                     CamOrbitRotation                                   // 0x1c(0xc)
};


// Size 0x50
class MeshSectionInfoMap: public None
{
public:
};


// Size 0x8
class MeshSectionInfo: public None
{
public:
	int                                                MaterialIndex                                      // 0x0(0x4)
	bool                                               bEnableCollision                                   // 0x4(0x1)
	bool                                               bCastShadow                                        // 0x5(0x1)
};


// Size 0xf8
class StaticMeshSourceModel: public None
{
public:
	Struct MeshBuildSettings                           BuildSettings                                      // 0x0(0x40)
	Struct MeshReductionSettings                       ReductionSettings                                  // 0x40(0x58)
	Struct SimplygonRemeshingSettings                  RemeshingSettings                                  // 0x98(0x50)
	int                                                OverriddenLightMapRes                              // 0xe8(0x4)
	float                                              LODDistance                                        // 0xec(0x4)
	float                                              ScreenSize                                         // 0xf0(0x4)
	float                                              MaxDeviation                                       // 0xf4(0x4)
};


// Size 0x1c
class StaticMeshOptimizationSettings: public None
{
public:
	byte                                               ReductionMethod                                    // 0x0(0x1)
	float                                              NumOfTrianglesPercentage                           // 0x4(0x4)
	float                                              MaxDeviationPercentage                             // 0x8(0x4)
	float                                              WeldingThreshold                                   // 0xc(0x4)
	bool                                               bRecalcNormals                                     // 0x10(0x1)
	float                                              NormalsThreshold                                   // 0x14(0x4)
	byte                                               SilhouetteImportance                               // 0x18(0x1)
	byte                                               TextureImportance                                  // 0x19(0x1)
	byte                                               ShadingImportance                                  // 0x1a(0x1)
};


// Size 0x40
class MergedCollisionComponentStaticMeshInstanceData: public None
{
public:
	Struct Transform                                   RelativeTransform                                  // 0x0(0x30)
	Class StaticMesh*                                  StaticMesh                                         // 0x30(0x8)
	int                                                OwningActorCrc32                                   // 0x38(0x4)
};


// Size 0x28
class StaticMeshComponentLODInfo: public None
{
public:
	TArray<Struct PaintedVertex>                       PaintedVertices                                    // 0x10(0x10)
};


// Size 0x14
class PaintedVertex: public None
{
public:
	Struct Vector                                      Position                                           // 0x0(0xc)
	Struct PackedNormal                                Normal                                             // 0xc(0x4)
	Struct Color                                       Color                                              // 0x10(0x4)
};


// Size 0x28
class TexturePlatformData: public None
{
public:
};


// Size 0x80
class TextureSource: public None
{
public:
};


// Size 0x28
class ExternalMip: public None
{
public:
};


// Size 0x18
class FlatWaterMeshTextureOverride: public None
{
public:
	Class Texture*                                     Texture                                            // 0x10(0x8)
};


// Size 0xc
class NameIndexPair: public None
{
public:
};


// Size 0x8
class InstancedCoverageMeshLOD: public None
{
public:
	float                                              LODReduction                                       // 0x0(0x4)
	float                                              DistanceToLOD                                      // 0x4(0x4)
};


// Size 0x8
class InstancedStaticMeshMappingInfo: public None
{
public:
};


// Size 0x50
class InstancedStaticMeshInstanceData: public None
{
public:
	Struct Matrix                                      Transform                                          // 0x0(0x40)
	Struct Vector2D                                    LightmapUVBias                                     // 0x40(0x8)
	Struct Vector2D                                    ShadowmapUVBias                                    // 0x48(0x8)
};


// Size 0x28
class ClusterNode: public None
{
public:
	Struct Vector                                      BoundMin                                           // 0x0(0xc)
	int                                                FirstChild                                         // 0xc(0x4)
	Struct Vector                                      BoundMax                                           // 0x10(0xc)
	int                                                LastChild                                          // 0x1c(0x4)
	int                                                FirstInstance                                      // 0x20(0x4)
	int                                                LastInstance                                       // 0x24(0x4)
};


// Size 0x8
class MobileInstancedStaticMeshLOD: public None
{
public:
	float                                              LODReduction                                       // 0x0(0x4)
	float                                              DistanceToLOD                                      // 0x4(0x4)
};


// Size 0x58
class SplineMeshParams: public None
{
public:
	Struct Vector                                      StartPos                                           // 0x0(0xc)
	Struct Vector                                      StartTangent                                       // 0xc(0xc)
	Struct Vector2D                                    StartScale                                         // 0x18(0x8)
	float                                              StartRoll                                          // 0x20(0x4)
	Struct Vector2D                                    StartOffset                                        // 0x24(0x8)
	Struct Vector                                      EndPos                                             // 0x2c(0xc)
	Struct Vector                                      EndTangent                                         // 0x38(0xc)
	Struct Vector2D                                    EndScale                                           // 0x44(0x8)
	float                                              EndRoll                                            // 0x4c(0x4)
	Struct Vector2D                                    EndOffset                                          // 0x50(0x8)
};


// Size 0x18
class EngineShowFlagsSetting: public None
{
public:
	Struct FString                                     ShowFlagName                                       // 0x0(0x10)
	bool                                               Enabled                                            // 0x10(0x1)
};


// Size 0x98
class Timeline: public None
{
public:
	byte                                               LengthMode                                         // 0x0(0x1)
	float                                              Length                                             // 0x4(0x4)
	bool                                               bLooping                                           // 0x8(0x1)
	bool                                               bReversePlayback                                   // 0x8(0x1)
	bool                                               bPlaying                                           // 0x8(0x1)
	float                                              PlayRate                                           // 0xc(0x4)
	float                                              Position                                           // 0x10(0x4)
	TArray<Struct TimelineEventEntry>                  Events                                             // 0x18(0x10)
	TArray<Struct TimelineVectorTrack>                 InterpVectors                                      // 0x28(0x10)
	TArray<Struct TimelineFloatTrack>                  InterpFloats                                       // 0x38(0x10)
	TArray<Struct TimelineLinearColorTrack>            InterpLinearColors                                 // 0x48(0x10)
	struct FName                                       DirectionPropertyName                              // 0x88(0x8)
	Class ByteProperty*                                DirectionProperty                                  // 0x90(0x8)
};


// Size 0x30
class TimelineLinearColorTrack: public None
{
public:
	Class CurveLinearColor*                            LinearColorCurve                                   // 0x0(0x8)
	struct FName                                       LinearColorPropertyName                            // 0x18(0x8)
	Class StructProperty*                              LinearColorProperty                                // 0x20(0x8)
};


// Size 0x30
class TimelineFloatTrack: public None
{
public:
	Class CurveFloat*                                  FloatCurve                                         // 0x0(0x8)
	struct FName                                       FloatPropertyName                                  // 0x18(0x8)
	Class FloatProperty*                               FloatProperty                                      // 0x20(0x8)
};


// Size 0x30
class TimelineVectorTrack: public None
{
public:
	Class CurveVector*                                 VectorCurve                                        // 0x0(0x8)
	struct FName                                       VectorPropertyName                                 // 0x18(0x8)
	Class StructProperty*                              VectorProperty                                     // 0x20(0x8)
};


// Size 0x14
class TimelineEventEntry: public None
{
public:
	float                                              Time                                               // 0x0(0x4)
};


// Size 0x18
class CompressedOffsetData: public None
{
public:
	TArray<Int None>                                   OffsetData                                         // 0x0(0x10)
	int                                                StripSize                                          // 0x10(0x4)
};


// Size 0x38
class CompressedTrack: public None
{
public:
	TArray<Byte CurveTrack>                            ByteStream                                         // 0x0(0x10)
	TArray<Float >                                     Times                                              // 0x10(0x10)
	float                                              Mins                                               // 0x20(0x4)
	float                                              Ranges                                             // 0x2c(0x4)
};


// Size 0x18
class CurveTrack: public None
{
public:
	struct FName                                       CurveName                                          // 0x0(0x8)
	TArray<Float >                                     CurveWeights                                       // 0x8(0x10)
};


// Size 0x20
class ScaleTrack: public None
{
public:
	TArray<Struct RotationTrack>                       ScaleKeys                                          // 0x0(0x10)
	TArray<Float >                                     Times                                              // 0x10(0x10)
};


// Size 0x20
class RotationTrack: public None
{
public:
	TArray<Struct TranslationTrack>                    RotKeys                                            // 0x0(0x10)
	TArray<Float >                                     Times                                              // 0x10(0x10)
};


// Size 0x20
class TranslationTrack: public None
{
public:
	TArray<Struct TrackToSkeletonMap>                  PosKeys                                            // 0x0(0x10)
	TArray<Float >                                     Times                                              // 0x10(0x10)
};


// Size 0x4
class TrackToSkeletonMap: public None
{
public:
	int                                                BoneTreeIndex                                      // 0x0(0x4)
};


// Size 0x20
class AnimSequenceTrackContainer: public None
{
public:
	TArray<Struct RawAnimSequenceTrack>                AnimationTracks                                    // 0x0(0x10)
	TArray<Struct FName>                               TrackNames                                         // 0x10(0x10)
};


// Size 0x30
class RawAnimSequenceTrack: public None
{
public:
	TArray<Struct PerBoneInterpolation>                PosKeys                                            // 0x0(0x10)
	TArray<Struct PosKeys>                             RotKeys                                            // 0x10(0x10)
	TArray<Struct RotKeys>                             ScaleKeys                                          // 0x20(0x10)
};


// Size 0x10
class PerBoneInterpolation: public None
{
public:
	Struct BoneReference                               BoneReference                                      // 0x0(0xc)
	float                                              InterpolationSpeedPerSec                           // 0xc(0x4)
};


// Size 0x1c
class GridBlendSample: public None
{
public:
	Struct EditorElement                               GridElement                                        // 0x0(0x18)
	float                                              BlendWeight                                        // 0x18(0x4)
};


// Size 0x18
class EditorElement: public None
{
public:
	int                                                Indices                                            // 0x0(0x4)
	float                                              Weights                                            // 0xc(0x4)
};


// Size 0x18
class BlendSample: public None
{
public:
	Class AnimSequence*                                Animation                                          // 0x0(0x8)
	Struct Vector                                      SampleValue                                        // 0x8(0xc)
};


// Size 0x20
class BlendParameter: public None
{
public:
	Struct FString                                     DisplayName                                        // 0x0(0x10)
	float                                              Min                                                // 0x10(0x4)
	float                                              Max                                                // 0x14(0x4)
	int                                                GridNum                                            // 0x18(0x4)
};


// Size 0x8
class InterpolationParameter: public None
{
public:
	float                                              InterpolationTime                                  // 0x0(0x4)
	byte                                               InterpolationType                                  // 0x4(0x1)
};


// Size 0x10
class AnimSetMeshLinkup: public None
{
public:
	TArray<Int None>                                   BoneToTrackTable                                   // 0x0(0x10)
};


// Size 0x1
class AssetImportInfo: public None
{
public:
};


// Size 0x20
class LaunchOnTestSettings: public None
{
public:
	Struct FilePath                                    LaunchOnTestmap                                    // 0x0(0x10)
	Struct FString                                     DeviceID                                           // 0x10(0x10)
};


// Size 0x18
class EditorMapPerformanceTestDefinition: public None
{
public:
	Struct FilePath                                    PerformanceTestmap                                 // 0x0(0x10)
	int                                                TestTimer                                          // 0x10(0x4)
};


// Size 0x210
class BuildPromotionTestSettings: public None
{
public:
	Struct FilePath                                    DefaultStaticMeshAsset                             // 0x0(0x10)
	Struct BuildPromotionImportWorkflowSettings        ImportWorkflow                                     // 0x10(0x150)
	Struct BuildPromotionOpenAssetSettings             OpenAssets                                         // 0x160(0x60)
	Struct BuildPromotionBlueprintSettings             BlueprintSettings                                  // 0x1c0(0x20)
	Struct BuildPromotionNewProjectSettings            NewProjectSettings                                 // 0x1e0(0x20)
	Struct FilePath                                    SourceControlMaterial                              // 0x200(0x10)
};


// Size 0x20
class BuildPromotionNewProjectSettings: public None
{
public:
	Struct DirectoryPath                               NewProjectFolderOverride                           // 0x0(0x10)
	Struct FString                                     NewProjectNameOverride                             // 0x10(0x10)
};


// Size 0x20
class BuildPromotionBlueprintSettings: public None
{
public:
	Struct FilePath                                    FirstMeshPath                                      // 0x0(0x10)
	Struct FilePath                                    SecondMeshPath                                     // 0x10(0x10)
};


// Size 0x60
class BuildPromotionOpenAssetSettings: public None
{
public:
	Struct FilePath                                    BlueprintAsset                                     // 0x0(0x10)
	Struct FilePath                                    MaterialAsset                                      // 0x10(0x10)
	Struct FilePath                                    ParticleSystemAsset                                // 0x20(0x10)
	Struct FilePath                                    SkeletalMeshAsset                                  // 0x30(0x10)
	Struct FilePath                                    StaticMeshAsset                                    // 0x40(0x10)
	Struct FilePath                                    TextureAsset                                       // 0x50(0x10)
};


// Size 0x150
class BuildPromotionImportWorkflowSettings: public None
{
public:
	Struct EditorImportWorkflowDefinition              Diffuse                                            // 0x0(0x20)
	Struct EditorImportWorkflowDefinition              Normal                                             // 0x20(0x20)
	Struct EditorImportWorkflowDefinition              StaticMesh                                         // 0x40(0x20)
	Struct EditorImportWorkflowDefinition              ReimportStaticMesh                                 // 0x60(0x20)
	Struct EditorImportWorkflowDefinition              BlendShapeMesh                                     // 0x80(0x20)
	Struct EditorImportWorkflowDefinition              MorphMesh                                          // 0xa0(0x20)
	Struct EditorImportWorkflowDefinition              SkeletalMesh                                       // 0xc0(0x20)
	Struct EditorImportWorkflowDefinition              Animation                                          // 0xe0(0x20)
	Struct EditorImportWorkflowDefinition              Sound                                              // 0x100(0x20)
	Struct EditorImportWorkflowDefinition              SurroundSound                                      // 0x120(0x20)
	TArray<Struct EditorImportWorkflowDefinition>      OtherAssetsToImport                                // 0x140(0x10)
};


// Size 0x20
class EditorImportWorkflowDefinition: public None
{
public:
	Struct FilePath                                    ImportFilePath                                     // 0x0(0x10)
	TArray<Struct ImportFactorySettingValues>          FactorySettings                                    // 0x10(0x10)
};


// Size 0x20
class ImportFactorySettingValues: public None
{
public:
	Struct FString                                     SettingName                                        // 0x0(0x10)
	Struct FString                                     Value                                              // 0x10(0x10)
};


// Size 0x10
class ParticleEditorPromotionSettings: public None
{
public:
	Struct FilePath                                    DefaultParticleAsset                               // 0x0(0x10)
};


// Size 0x30
class MaterialEditorPromotionSettings: public None
{
public:
	Struct FilePath                                    DefaultMaterialAsset                               // 0x0(0x10)
	Struct FilePath                                    DefaultDiffuseTexture                              // 0x10(0x10)
	Struct FilePath                                    DefaultNormalTexture                               // 0x20(0x10)
};


// Size 0x38
class EditorImportExportTestDefinition: public None
{
public:
	Struct FilePath                                    ImportFilePath                                     // 0x0(0x10)
	Struct FString                                     ExportFileExtension                                // 0x10(0x10)
	bool                                               bSkipExport                                        // 0x20(0x1)
	TArray<Struct bSkipExport>                         FactorySettings                                    // 0x28(0x10)
};


// Size 0x60
class ExternalToolDefinition: public None
{
public:
	Struct FString                                     ToolName                                           // 0x0(0x10)
	Struct FilePath                                    ExecutablePath                                     // 0x10(0x10)
	Struct FString                                     CommandLineOptions                                 // 0x20(0x10)
	Struct DirectoryPath                               WorkingDirectory                                   // 0x30(0x10)
	Struct FString                                     ScriptExtension                                    // 0x40(0x10)
	Struct DirectoryPath                               ScriptDirectory                                    // 0x50(0x10)
};


// Size 0x18
class OpenTestAsset: public None
{
public:
	Struct FilePath                                    AssetToOpen                                        // 0x0(0x10)
	bool                                               bSkipTestWhenUnAttended                            // 0x10(0x1)
};


// Size 0x3c
class NavAvoidanceData: public None
{
public:
};


// Size 0x18
class AnimParentNodeAssetOverride: public None
{
public:
	Class AnimationAsset*                              NewAsset                                           // 0x0(0x8)
	Struct Guid                                        ParentNodeGuid                                     // 0x8(0x10)
};


// Size 0x18
class AnimGroupInfo: public None
{
public:
	struct FName                                       Name                                               // 0x0(0x8)
	Struct LinearColor                                 Color                                              // 0x8(0x10)
};


// Size 0x18
class DataTableCategoryHandle: public None
{
public:
	Class DataTable*                                   DataTable                                          // 0x0(0x8)
	struct FName                                       ColumnName                                         // 0x8(0x8)
	struct FName                                       RowContents                                        // 0x10(0x8)
};


// Size 0x10
class DataTableRowHandle: public None
{
public:
	Class DataTable*                                   DataTable                                          // 0x0(0x8)
	struct FName                                       RowName                                            // 0x8(0x8)
};


// Size 0x20
class DialogueWaveParameter: public None
{
public:
	Class DialogueWave*                                DialogueWave                                       // 0x0(0x8)
	Struct DialogueContext                             Context                                            // 0x8(0x18)
};


// Size 0x18
class DialogueContext: public None
{
public:
	Class DialogueVoice*                               Speaker                                            // 0x0(0x8)
	TArray<class Targets*>                             Targets                                            // 0x8(0x10)
};


// Size 0x70
class FormatTextArgument: public None
{
public:
	Struct FText                                       ArgumentName                                       // 0x0(0x38)
	Struct FText                                       TextValue                                          // 0x38(0x38)
};


// Size 0x10
class EventGraphFastCallPair: public None
{
public:
	Class Function*                                    FunctionToPatch                                    // 0x0(0x8)
	int                                                EventGraphCallOffset                               // 0x8(0x4)
};


// Size 0x1
class BlueprintDebugData: public None
{
public:
};


// Size 0x8
class PointerToUberGraphFrame: public None
{
public:
};


// Size 0x140
class DebuggingInfoForSingleFunction: public None
{
public:
};


// Size 0x14
class NodeToCodeAssociation: public None
{
public:
};


// Size 0x1
class AnimBlueprintDebugData: public None
{
public:
};


// Size 0x1
class AnimationFrameSnapshot: public None
{
public:
};


// Size 0xb0
class StateMachineDebugData: public None
{
public:
};


// Size 0x20
class KShapeElem: public None
{
public:
};


// Size 0x50
class KBoxElem: public None
{
public:
	Struct Vector                                      Center                                             // 0x20(0xc)
	Struct Quat                                        Orientation                                        // 0x30(0x10)
	float                                              X                                                  // 0x40(0x4)
	float                                              Y                                                  // 0x44(0x4)
	float                                              Z                                                  // 0x48(0x4)
};


// Size 0x90
class KConvexElem: public None
{
public:
	TArray<Struct KSphereElem>                         VertexData                                         // 0x20(0x10)
	Struct Box                                         ElemBox                                            // 0x30(0x1c)
	Struct Transform                                   Transform                                          // 0x50(0x30)
};


// Size 0x30
class KSphereElem: public None
{
public:
	Struct Vector                                      Center                                             // 0x20(0xc)
	float                                              Radius                                             // 0x2c(0x4)
};


// Size 0x50
class KSphylElem: public None
{
public:
	Struct Vector                                      Center                                             // 0x20(0xc)
	Struct Quat                                        Orientation                                        // 0x30(0x10)
	float                                              Radius                                             // 0x40(0x4)
	float                                              Length                                             // 0x44(0x4)
};


// Size 0x48
class KAggregateGeom: public None
{
public:
	TArray<Struct AggregateGeometry2D>                 SphereElems                                        // 0x0(0x10)
	TArray<Struct SphereElems>                         BoxElems                                           // 0x10(0x10)
	TArray<Struct BoxElems>                            SphylElems                                         // 0x20(0x10)
	TArray<Struct SphylElems>                          ConvexElems                                        // 0x30(0x10)
};


// Size 0x30
class AggregateGeometry2D: public None
{
public:
	TArray<Struct CircleElement2D>                     CircleElements                                     // 0x0(0x10)
	TArray<Struct BoxElement2D>                        BoxElements                                        // 0x10(0x10)
	TArray<Struct ConvexElement2D>                     ConvexElements                                     // 0x20(0x10)
};


// Size 0x10
class ConvexElement2D: public None
{
public:
	TArray<Struct BoxElements>                         VertexData                                         // 0x0(0x10)
};


// Size 0x14
class BoxElement2D: public None
{
public:
	Struct Vector2D                                    Center                                             // 0x0(0x8)
	float                                              Width                                              // 0x8(0x4)
	float                                              Height                                             // 0xc(0x4)
	float                                              Angle                                              // 0x10(0x4)
};


// Size 0xc
class CircleElement2D: public None
{
public:
	Struct Vector2D                                    Center                                             // 0x0(0x8)
	float                                              Radius                                             // 0x8(0x4)
};


// Size 0x10
class InputBlendPose: public None
{
public:
	TArray<Struct BranchFilter>                        BranchFilters                                      // 0x0(0x10)
};


// Size 0xc
class BranchFilter: public None
{
public:
	struct FName                                       BoneName                                           // 0x0(0x8)
	int                                                BlendDepth                                         // 0x8(0x4)
};


// Size 0x20
class BuilderPoly: public None
{
public:
	TArray<Int None>                                   VertexIndices                                      // 0x0(0x10)
	int                                                Direction                                          // 0x10(0x4)
	struct FName                                       ItemName                                           // 0x14(0x8)
	int                                                PolyFlags                                          // 0x1c(0x4)
};


// Size 0x18
class WrappedStringElement: public None
{
public:
	Struct FString                                     Value                                              // 0x0(0x10)
	Struct Vector2D                                    LineExtent                                         // 0x10(0x8)
};


// Size 0x28
class TextSizingParameters: public None
{
public:
	float                                              DrawX                                              // 0x0(0x4)
	float                                              DrawY                                              // 0x4(0x4)
	float                                              DrawXL                                             // 0x8(0x4)
	float                                              DrawYL                                             // 0xc(0x4)
	Struct Vector2D                                    Scaling                                            // 0x10(0x8)
	Class Font*                                        DrawFont                                           // 0x18(0x8)
	Struct Vector2D                                    SpacingAdjust                                      // 0x20(0x8)
};


// Size 0x48
class TextureRenderData: public None
{
public:
	Class Texture*                                     RenderTexture                                      // 0x0(0x8)
	Struct Vector2D                                    ScreenPosition                                     // 0x8(0x8)
	Struct Vector2D                                    ScreenSize                                         // 0x10(0x8)
	Struct Vector2D                                    CoordinatePosition                                 // 0x18(0x8)
	Struct Vector2D                                    CoordinateSize                                     // 0x20(0x8)
	Struct LinearColor                                 RenderColor                                        // 0x28(0x10)
	byte                                               BlendMode                                          // 0x38(0x1)
	float                                              Rotation                                           // 0x3c(0x4)
	Struct Vector2D                                    PivotPoint                                         // 0x40(0x8)
};


// Size 0x18
class CanvasIcon: public None
{
public:
	Class Texture*                                     Texture                                            // 0x0(0x8)
	float                                              U                                                  // 0x8(0x4)
	float                                              V                                                  // 0xc(0x4)
	float                                              UL                                                 // 0x10(0x4)
	float                                              VL                                                 // 0x14(0x4)
};


// Size 0xc0
class RPCStats: public None
{
public:
	Struct RPCStatEntry                                Entries                                            // 0x0(0x60)
};


// Size 0x60
class RPCStatEntry: public None
{
public:
	double                                             AccumulatedPayloadInKB                             // 0x30(0x8)
	double                                             TimeIntervalInSec                                  // 0x38(0x8)
	Struct SpikeStatEntry                              WorstSpike                                         // 0x40(0x18)
};


// Size 0x18
class SpikeStatEntry: public None
{
public:
	TArray<Struct FuncStatEntry>                       WorstRPCs                                          // 0x0(0x10)
	byte                                               SpikeDetected                                      // 0x14(0x1)
};


// Size 0x20
class FuncStatEntry: public None
{
public:
	Struct FString                                     Name                                               // 0x0(0x10)
};


// Size 0x28
class FuncStatHolder: public None
{
public:
};


// Size 0x28
class AutoCompleteNode: public None
{
public:
	int                                                IndexChar                                          // 0x0(0x4)
	TArray<Int >                                       AutoCompleteListIndices                            // 0x8(0x10)
};


// Size 0x1e8
class RuntimeCurveLinearColor: public None
{
public:
	Struct RichCurve                                   ColorCurves                                        // 0x0(0x78)
	Class CurveLinearColor*                            ExternalCurve                                      // 0x1e0(0x8)
};


// Size 0x10
class CurveTableRowHandle: public None
{
public:
	Class CurveTable*                                  CurveTable                                         // 0x0(0x8)
	struct FName                                       RowName                                            // 0x8(0x8)
};


// Size 0x18
class FeatureToggledStringAssetReferenceEntry: public None
{
public:
	Struct StringAssetReference                        Asset                                              // 0x0(0x10)
	struct FName                                       Feature                                            // 0x10(0x8)
};


// Size 0x38
class InstancedNavMesh: public None
{
public:
	Struct Vector                                      Location                                           // 0x20(0xc)
	struct FName                                       NavMeshName                                        // 0x2c(0x8)
	Struct NavAgentSelector                            SupportedAgents                                    // 0x34(0x4)
};


// Size 0x4
class DestructibleChunkParameters: public None
{
public:
	bool                                               bIsSupportChunk                                    // 0x0(0x1)
	bool                                               bDoNotFracture                                     // 0x1(0x1)
	bool                                               bDoNotDamage                                       // 0x2(0x1)
	bool                                               bDoNotCrumble                                      // 0x3(0x1)
};


// Size 0x24
class FractureMaterial: public None
{
public:
	Struct Vector2D                                    UVScale                                            // 0x0(0x8)
	Struct Vector2D                                    UVOffset                                           // 0x8(0x8)
	Struct Vector                                      Tangent                                            // 0x10(0xc)
	float                                              UAngle                                             // 0x1c(0x4)
	int                                                InteriorElementIndex                               // 0x20(0x4)
};


// Size 0x40
class AudioQualitySettings: public None
{
public:
	Struct FText                                       DisplayName                                        // 0x0(0x38)
	int                                                MaxChannels                                        // 0x38(0x4)
};


// Size 0xc
class PhysicalSurfaceName: public None
{
public:
	byte                                               Type                                               // 0x0(0x1)
	struct FName                                       Name                                               // 0x4(0x8)
};


// Size 0xc
class DominanceGroupName: public None
{
public:
	byte                                               Type                                               // 0x0(0x1)
	struct FName                                       Name                                               // 0x4(0x8)
};


// Size 0xc
class DominanceGroupPair: public None
{
public:
	byte                                               FirstGroupId                                       // 0x0(0x1)
	byte                                               SecondGroupId                                      // 0x1(0x1)
	int                                                FirstDominanceValue                                // 0x4(0x4)
	int                                                SecondDominanceValue                               // 0x8(0x4)
};


// Size 0x3c
class TextureLODGroup: public None
{
public:
	byte                                               Group                                              // 0x0(0x1)
	int                                                LODBias                                            // 0xc(0x4)
	int                                                NumStreamedMips                                    // 0x14(0x4)
	byte                                               MipGenSettings                                     // 0x18(0x1)
	int                                                MinLODSize                                         // 0x1c(0x4)
	int                                                MaxLODSize                                         // 0x20(0x4)
	struct FName                                       MinMagFilter                                       // 0x24(0x8)
	struct FName                                       MipFilter                                          // 0x2c(0x8)
	int                                                TextureQualityReduction                            // 0x34(0x4)
	int                                                bDisableMaxTextureResolutionOverride               // 0x38(0x4)
};


// Size 0x28
class DialogueContextMapping: public None
{
public:
	Struct DialogueContext                             Context                                            // 0x0(0x18)
	Class SoundWave*                                   SoundWave                                          // 0x18(0x8)
	Class DialogueSoundWaveProxy*                      Proxy                                              // 0x20(0x8)
};


// Size 0x38
class RawDistributionFloat: public None
{
public:
	float                                              MinValue                                           // 0x28(0x4)
	float                                              MaxValue                                           // 0x2c(0x4)
	Class DistributionFloat*                           Distribution                                       // 0x30(0x8)
};


// Size 0x38
class RawDistributionVector: public None
{
public:
	float                                              MinValue                                           // 0x28(0x4)
	float                                              MaxValue                                           // 0x2c(0x4)
	Class DistributionVector*                          Distribution                                       // 0x30(0x8)
};


// Size 0x18
class BlueprintComponentDelegateBinding: public None
{
public:
	struct FName                                       ComponentPropertyName                              // 0x0(0x8)
	struct FName                                       DelegatePropertyName                               // 0x8(0x8)
	struct FName                                       FunctionNameToBind                                 // 0x10(0x8)
};


// Size 0x4
class BlueprintInputDelegateBinding: public None
{
public:
	bool                                               bConsumeInput                                      // 0x0(0x1)
	bool                                               bExecuteWhenPaused                                 // 0x0(0x1)
	bool                                               bOverrideParentBinding                             // 0x0(0x1)
};


// Size 0x18
class BlueprintInputActionDelegateBinding: public None
{
public:
	struct FName                                       InputActionName                                    // 0x4(0x8)
	byte                                               InputKeyEvent                                      // 0xc(0x1)
	struct FName                                       FunctionNameToBind                                 // 0x10(0x8)
};


// Size 0x14
class BlueprintInputAxisDelegateBinding: public None
{
public:
	struct FName                                       InputAxisName                                      // 0x4(0x8)
	struct FName                                       FunctionNameToBind                                 // 0xc(0x8)
};


// Size 0x30
class BlueprintInputAxisKeyDelegateBinding: public None
{
public:
	Struct Key                                         AxisKey                                            // 0x8(0x20)
	struct FName                                       FunctionNameToBind                                 // 0x28(0x8)
};


// Size 0x40
class BlueprintInputKeyDelegateBinding: public None
{
public:
	Struct InputChord                                  InputChord                                         // 0x8(0x28)
	byte                                               InputKeyEvent                                      // 0x30(0x1)
	struct FName                                       FunctionNameToBind                                 // 0x34(0x8)
};


// Size 0x10
class BlueprintInputTouchDelegateBinding: public None
{
public:
	byte                                               InputKeyEvent                                      // 0x4(0x1)
	struct FName                                       FunctionNameToBind                                 // 0x8(0x8)
};


// Size 0x10
class BlueprintInstancedActorDelegateBinding: public None
{
public:
	struct FName                                       DelegatePropertyName                               // 0x0(0x8)
	struct FName                                       FunctionNameToBind                                 // 0x8(0x8)
};


// Size 0x20
class GraphReference: public None
{
public:
	Class EdGraph*                                     MacroGraph                                         // 0x0(0x8)
	Class Blueprint*                                   GraphBlueprint                                     // 0x8(0x8)
	Struct Guid                                        GraphGuid                                          // 0x10(0x10)
};


// Size 0xd0
class EdGraphSchemaAction_NewNode: public None
{
public:
	Class EdGraphNode*                                 NodeTemplate                                       // 0xc8(0x8)
};


// Size 0xc8
class EdGraphSchemaAction: public None
{
public:
	Struct FText                                       MenuDescription                                    // 0x8(0x38)
	Struct FString                                     TooltipDescription                                 // 0x40(0x10)
	Struct FText                                       Category                                           // 0x50(0x38)
	Struct FText                                       Keywords                                           // 0x88(0x38)
	int                                                Grouping                                           // 0xc0(0x4)
	int                                                SectionID                                          // 0xc4(0x4)
};


// Size 0x20
class PluginRedirect: public None
{
public:
	Struct FString                                     OldPluginName                                      // 0x0(0x10)
	Struct FString                                     NewPluginName                                      // 0x10(0x10)
};


// Size 0x20
class StructRedirect: public None
{
public:
	Struct FString                                     OldStructName                                      // 0x0(0x10)
	Struct FString                                     NewStructName                                      // 0x10(0x10)
};


// Size 0x58
class ClassRedirect: public None
{
public:
	Struct FString                                     ObjectName                                         // 0x0(0x10)
	Struct FString                                     OldClassName                                       // 0x10(0x10)
	Struct FString                                     NewClassName                                       // 0x20(0x10)
	Struct FString                                     OldSubobjName                                      // 0x30(0x10)
	Struct FString                                     NewSubobjName                                      // 0x40(0x10)
	bool                                               InstanceOnly                                       // 0x50(0x1)
};


// Size 0x20
class GameNameRedirect: public None
{
public:
	Struct FString                                     OldGameName                                        // 0x0(0x10)
	Struct FString                                     NewGameName                                        // 0x10(0x10)
};


// Size 0x30
class ScreenMessageString: public None
{
public:
	Struct FString                                     ScreenMessage                                      // 0x8(0x10)
	Struct Color                                       DisplayColor                                       // 0x18(0x4)
	float                                              TimeToDisplay                                      // 0x1c(0x4)
	float                                              CurrentTimeDisplayed                               // 0x20(0x4)
};


// Size 0x28
class DropNoteInfo: public None
{
public:
	Struct Vector                                      Location                                           // 0x0(0xc)
	Struct Rotator                                     Rotation                                           // 0xc(0xc)
	Struct FString                                     Comment                                            // 0x18(0x10)
};


// Size 0x28
class StatColorMapping: public None
{
public:
	Struct FString                                     StatName                                           // 0x0(0x10)
	TArray<Struct StatColorMapEntry>                   ColorMap                                           // 0x10(0x10)
	bool                                               DisableBlend                                       // 0x20(0x1)
};


// Size 0x8
class StatColorMapEntry: public None
{
public:
	float                                              In                                                 // 0x0(0x4)
	Struct Color                                       Out                                                // 0x4(0x4)
};


// Size 0x298
class WorldContext: public None
{
public:
	Struct URL                                         LastURL                                            // 0xe0(0x70)
	Struct URL                                         LastRemoteURL                                      // 0x150(0x70)
	Class PendingNetGame*                              PendingNetGame                                     // 0x1c0(0x8)
	TArray<Struct FullyLoadedPackagesInfo>             PackagesToFullyLoad                                // 0x1c8(0x10)
	TArray<class LoadedLevelsForPendingMapChange*>     LoadedLevelsForPendingMapChange                    // 0x1e8(0x10)
	TArray<class ObjectReferencers*>                   ObjectReferencers                                  // 0x210(0x10)
	TArray<Struct LevelStreamingStatus>                PendingLevelStreamingStatusUpdates                 // 0x220(0x10)
	Class GameViewportClient*                          GameViewport                                       // 0x230(0x8)
	Class GameInstance*                                OwningGameInstance                                 // 0x238(0x8)
	TArray<Struct NamedNetDriver>                      ActiveNetDrivers                                   // 0x240(0x10)
};


// Size 0x10
class NamedNetDriver: public None
{
public:
	Class NetDriver*                                   NetDriver                                          // 0x0(0x8)
};


// Size 0x10
class LevelStreamingStatus: public None
{
public:
	struct FName                                       PackageName                                        // 0x0(0x8)
	bool                                               bShouldBeLoaded                                    // 0x8(0x1)
	bool                                               bShouldBeVisible                                   // 0x8(0x1)
};


// Size 0x38
class FullyLoadedPackagesInfo: public None
{
public:
	byte                                               FullyLoadType                                      // 0x0(0x1)
	Struct FString                                     Tag                                                // 0x8(0x10)
	TArray<Struct FName>                               PackagesToLoad                                     // 0x18(0x10)
	TArray<class LoadedObjects*>                       LoadedObjects                                      // 0x28(0x10)
};


// Size 0x18
class NetDriverDefinition: public None
{
public:
	struct FName                                       DefName                                            // 0x0(0x8)
	struct FName                                       DriverClassName                                    // 0x8(0x8)
	struct FName                                       DriverClassNameFallback                            // 0x10(0x8)
};


// Size 0xb0
class FontImportOptionsData: public None
{
public:
	Struct FString                                     FontName                                           // 0x0(0x10)
	float                                              Height                                             // 0x10(0x4)
	bool                                               bEnableAntialiasing                                // 0x14(0x1)
	bool                                               bEnableBold                                        // 0x14(0x1)
	bool                                               bEnableItalic                                      // 0x14(0x1)
	bool                                               bEnableUnderline                                   // 0x14(0x1)
	bool                                               bAlphaOnly                                         // 0x14(0x1)
	byte                                               CharacterSet                                       // 0x18(0x1)
	Struct FString                                     Chars                                              // 0x20(0x10)
	Struct FString                                     UnicodeRange                                       // 0x30(0x10)
	Struct FString                                     CharsFilePath                                      // 0x40(0x10)
	Struct FString                                     CharsFileWildcard                                  // 0x50(0x10)
	bool                                               bCreatePrintableOnly                               // 0x60(0x1)
	bool                                               bIncludeASCIIRange                                 // 0x60(0x1)
	Struct LinearColor                                 ForegroundColor                                    // 0x64(0x10)
	bool                                               bEnableDropShadow                                  // 0x74(0x1)
	int                                                TexturePageWidth                                   // 0x78(0x4)
	int                                                TexturePageMaxHeight                               // 0x7c(0x4)
	int                                                XPadding                                           // 0x80(0x4)
	int                                                YPadding                                           // 0x84(0x4)
	int                                                ExtendBoxTop                                       // 0x88(0x4)
	int                                                ExtendBoxBottom                                    // 0x8c(0x4)
	int                                                ExtendBoxRight                                     // 0x90(0x4)
	int                                                ExtendBoxLeft                                      // 0x94(0x4)
	bool                                               bEnableLegacyMode                                  // 0x98(0x1)
	int                                                Kerning                                            // 0x9c(0x4)
	bool                                               bUseDistanceFieldAlpha                             // 0xa0(0x1)
	int                                                DistanceFieldScaleFactor                           // 0xa4(0x4)
	float                                              DistanceFieldScanRadiusScale                       // 0xa8(0x4)
};


// Size 0x18
class FontCharacter: public None
{
public:
	int                                                StartU                                             // 0x0(0x4)
	int                                                StartV                                             // 0x4(0x4)
	int                                                USize                                              // 0x8(0x4)
	int                                                VSize                                              // 0xc(0x4)
	byte                                               TextureIndex                                       // 0x10(0x1)
	int                                                VerticalOffset                                     // 0x14(0x4)
};


// Size 0x10
class ActiveHapticFeedbackEffect: public None
{
public:
	Class HapticFeedbackEffect*                        HapticEffect                                       // 0x0(0x8)
};


// Size 0x100
class HapticFeedbackDetails: public None
{
public:
	Struct RuntimeFloatCurve                           Frequency                                          // 0x0(0x80)
	Struct RuntimeFloatCurve                           Amplitude                                          // 0x80(0x80)
};


// Size 0x18
class PoseLink: public None
{
public:
};


// Size 0x48
class AnimNode_HIKBase: public None
{
public:
	Struct ComponentSpacePoseLink                      HIKSettings                                        // 0x30(0x18)
};


// Size 0x58
class HIKElements: public None
{
public:
};


// Size 0xc
class HIKBoneMapping: public None
{
public:
	struct FName                                       UnrealBoneName                                     // 0x0(0x8)
	int                                                HumanIKBone                                        // 0x8(0x4)
};


// Size 0x30
class HIKBoneTransform: public None
{
public:
	int                                                BoneID                                             // 0x0(0x4)
	Struct Vector                                      Translation                                        // 0x4(0xc)
	Struct Quat                                        Orientation                                        // 0x10(0x10)
	Struct Vector                                      Scale                                              // 0x20(0xc)
};


// Size 0x28
class ComponentOverrideRecord: public None
{
public:
	Class ActorComponent*                              ComponentTemplate                                  // 0x0(0x8)
	Struct ComponentKey                                ComponentKey                                       // 0x8(0x20)
};


// Size 0x20
class ComponentKey: public None
{
public:
	class                                              OwnerClass                                         // 0x0(0x8)
	struct FName                                       SCSVariableName                                    // 0x8(0x8)
	Struct Guid                                        AssociatedGuid                                     // 0x10(0x10)
};


// Size 0x58
class InputCombinedAxisKeyMapping: public None
{
public:
	struct FName                                       AxisName                                           // 0x0(0x8)
	Struct Key                                         KeyX                                               // 0x8(0x20)
	Struct Key                                         KeyY                                               // 0x28(0x20)
	float                                              Scale                                              // 0x48(0x4)
	float                                              CircularDeadZoneLowerBound                         // 0x4c(0x4)
	float                                              CircularDeadZoneUpperBound                         // 0x50(0x4)
	float                                              Exponent                                           // 0x54(0x4)
};


// Size 0x30
class InputAxisKeyMapping: public None
{
public:
	struct FName                                       AxisName                                           // 0x0(0x8)
	Struct Key                                         Key                                                // 0x8(0x20)
	float                                              Scale                                              // 0x28(0x4)
};


// Size 0x30
class InputActionKeyMapping: public None
{
public:
	struct FName                                       ActionName                                         // 0x0(0x8)
	Struct Key                                         Key                                                // 0x8(0x20)
	bool                                               bShift                                             // 0x28(0x1)
	bool                                               bCtrl                                              // 0x28(0x1)
	bool                                               bAlt                                               // 0x28(0x1)
	bool                                               bCmd                                               // 0x28(0x1)
};


// Size 0x18
class InputAxisConfigEntry: public None
{
public:
	struct FName                                       AxisKeyName                                        // 0x0(0x8)
	Struct InputAxisProperties                         AxisProperties                                     // 0x8(0x10)
};


// Size 0x10
class InputAxisProperties: public None
{
public:
	float                                              DeadZone                                           // 0x0(0x4)
	float                                              Sensitivity                                        // 0x4(0x4)
	float                                              Exponent                                           // 0x8(0x4)
	bool                                               bInvert                                            // 0xc(0x1)
};


// Size 0x38
class KeyBind: public None
{
public:
	Struct Key                                         Key                                                // 0x0(0x20)
	Struct FString                                     Command                                            // 0x20(0x10)
	bool                                               Control                                            // 0x30(0x1)
	bool                                               Shift                                              // 0x30(0x1)
	bool                                               Alt                                                // 0x30(0x1)
	bool                                               Cmd                                                // 0x30(0x1)
	bool                                               bIgnoreCtrl                                        // 0x30(0x1)
	bool                                               bIgnoreShift                                       // 0x30(0x1)
	bool                                               bIgnoreAlt                                         // 0x30(0x1)
	bool                                               bIgnoreCmd                                         // 0x30(0x1)
};


// Size 0x30
class CurveEdTab: public None
{
public:
	Struct FString                                     TabName                                            // 0x0(0x10)
	TArray<Struct CurveEdEntry>                        Curves                                             // 0x10(0x10)
	float                                              ViewStartInput                                     // 0x20(0x4)
	float                                              ViewEndInput                                       // 0x24(0x4)
	float                                              ViewStartOutput                                    // 0x28(0x4)
	float                                              ViewEndOutput                                      // 0x2c(0x4)
};


// Size 0x38
class CurveEdEntry: public None
{
public:
	Class Object*                                      CurveObject                                        // 0x0(0x8)
	Struct Color                                       CurveColor                                         // 0x8(0x4)
	Struct FString                                     CurveName                                          // 0x10(0x10)
	int                                                bHideCurve                                         // 0x20(0x4)
	int                                                bColorCurve                                        // 0x24(0x4)
	int                                                bFloatingPointColorCurve                           // 0x28(0x4)
	int                                                bClamp                                             // 0x2c(0x4)
	float                                              ClampLow                                           // 0x30(0x4)
	float                                              ClampHigh                                          // 0x34(0x4)
};


// Size 0x18
class InterpEdSelKey: public None
{
public:
	Class InterpGroup*                                 Group                                              // 0x0(0x8)
	Class InterpTrack*                                 Track                                              // 0x8(0x8)
	int                                                KeyIndex                                           // 0x10(0x4)
	float                                              UnsnappedPosition                                  // 0x14(0x4)
};


// Size 0x30
class CameraPreviewInfo: public None
{
public:
	class                                              PawnClass                                          // 0x0(0x8)
	Class AnimSequence*                                AnimSeq                                            // 0x8(0x8)
	Struct Vector                                      Location                                           // 0x10(0xc)
	Struct Rotator                                     Rotation                                           // 0x1c(0xc)
	Class Pawn*                                        PawnInst                                           // 0x28(0x8)
};


// Size 0x28
class SubTrackGroup: public None
{
public:
	Struct FString                                     GroupName                                          // 0x0(0x10)
	TArray<Int >                                       TrackIndices                                       // 0x10(0x10)
	bool                                               bIsCollapsed                                       // 0x20(0x1)
	bool                                               bIsSelected                                        // 0x20(0x1)
};


// Size 0x20
class SupportedSubTrackInfo: public None
{
public:
	class                                              SupportedClass                                     // 0x0(0x8)
	Struct FString                                     SubTrackName                                       // 0x8(0x10)
	int                                                GroupIndex                                         // 0x18(0x4)
};


// Size 0x8
class BoolTrackKey: public None
{
public:
	float                                              Time                                               // 0x0(0x4)
	bool                                               Value                                              // 0x4(0x1)
};


// Size 0x14
class DirectorTrackCut: public None
{
public:
	float                                              Time                                               // 0x0(0x4)
	float                                              TransitionTime                                     // 0x4(0x4)
	struct FName                                       TargetCamGroup                                     // 0x8(0x8)
	int                                                ShotNumber                                         // 0x10(0x4)
};


// Size 0xc
class EventTrackKey: public None
{
public:
	float                                              Time                                               // 0x0(0x4)
	struct FName                                       EventName                                          // 0x4(0x8)
};


// Size 0x20
class AnimControlTrackKey: public None
{
public:
	float                                              StartTime                                          // 0x0(0x4)
	Class AnimSequence*                                AnimSeq                                            // 0x8(0x8)
	float                                              AnimStartOffset                                    // 0x10(0x4)
	float                                              AnimEndOffset                                      // 0x14(0x4)
	float                                              AnimPlayRate                                       // 0x18(0x4)
	bool                                               bLooping                                           // 0x1c(0x1)
	bool                                               bReverse                                           // 0x1c(0x1)
};


// Size 0x10
class InterpLookupTrack: public None
{
public:
	TArray<Struct InterpLookupPoint>                   Points                                             // 0x0(0x10)
};


// Size 0xc
class InterpLookupPoint: public None
{
public:
	struct FName                                       GroupName                                          // 0x0(0x8)
	float                                              Time                                               // 0x8(0x4)
};


// Size 0xc
class ParticleReplayTrackKey: public None
{
public:
	float                                              Time                                               // 0x0(0x4)
	float                                              Duration                                           // 0x4(0x4)
	int                                                ClipIDNumber                                       // 0x8(0x4)
};


// Size 0x8
class ToggleTrackKey: public None
{
public:
	float                                              Time                                               // 0x0(0x4)
	byte                                               ToggleAction                                       // 0x4(0x1)
};


// Size 0x18
class SoundTrackKey: public None
{
public:
	float                                              Time                                               // 0x0(0x4)
	float                                              Volume                                             // 0x4(0x4)
	float                                              Pitch                                              // 0x8(0x4)
	Class SoundBase*                                   Sound                                              // 0x10(0x8)
};


// Size 0x8
class VisibilityTrackKey: public None
{
public:
	float                                              Time                                               // 0x0(0x4)
	byte                                               Action                                             // 0x4(0x1)
	byte                                               ActiveCondition                                    // 0x5(0x1)
};


// Size 0x10
class LayerActorStats: public None
{
public:
	class                                              Type                                               // 0x0(0x8)
	int                                                Total                                              // 0x8(0x4)
};


// Size 0x40
class ClientReceiveData: public None
{
public:
	Class PlayerController*                            LocalPC                                            // 0x0(0x8)
	struct FName                                       MessageType                                        // 0x8(0x8)
	int                                                MessageIndex                                       // 0x10(0x4)
	Struct FString                                     MessageString                                      // 0x18(0x10)
	Class PlayerState*                                 RelatedPlayerState                                 // 0x28(0x8)
	Class PlayerState*                                 RelatedPlayerState                                 // 0x30(0x8)
	Class Object*                                      OptionalObject                                     // 0x38(0x8)
};


// Size 0x48
class CustomInput: public None
{
public:
	Struct FString                                     InputName                                          // 0x0(0x10)
	Struct ExpressionInput                             Input                                              // 0x10(0x38)
};


// Size 0x40
class FunctionExpressionOutput: public None
{
public:
	Class MaterialExpressionFunctionOutput*            ExpressionOutput                                   // 0x0(0x8)
	Struct Guid                                        ExpressionOutputId                                 // 0x8(0x10)
	Struct ExpressionOutput                            Output                                             // 0x18(0x28)
};


// Size 0x50
class FunctionExpressionInput: public None
{
public:
	Class MaterialExpressionFunctionInput*             ExpressionInput                                    // 0x0(0x8)
	Struct Guid                                        ExpressionInputId                                  // 0x8(0x10)
	Struct ExpressionInput                             Input                                              // 0x18(0x38)
};


// Size 0x18
class MaterialParameterCollectionInfo: public None
{
public:
	Struct Guid                                        StateId                                            // 0x0(0x10)
	Class MaterialParameterCollection*                 ParameterCollection                                // 0x10(0x8)
};


// Size 0x18
class MaterialFunctionInfo: public None
{
public:
	Struct Guid                                        StateId                                            // 0x0(0x10)
	Class MaterialFunction*                            Function                                           // 0x10(0x8)
};


// Size 0x84
class MaterialInstanceBasePropertyOverrides: public None
{
public:
	bool                                               bOverride_OpacityMaskClipValue                     // 0x0(0x1)
	bool                                               bOverride_BlendMode                                // 0x1(0x1)
	bool                                               bOverride_ShadingModel                             // 0x2(0x1)
	bool                                               bOverride_DitheredLODTransition                    // 0x3(0x1)
	bool                                               bOverride_TwoSided                                 // 0x4(0x1)
	bool                                               bOverride_TessellationMode                         // 0x5(0x1)
	bool                                               bOverride_LowResTranslucency                       // 0x6(0x1)
	bool                                               bOverride_SkyLightWhenOccluded                     // 0x7(0x1)
	bool                                               bOverride_CloudShadowInfluence                     // 0x8(0x1)
	bool                                               bOverride_LightColorInfluence                      // 0x9(0x1)
	bool                                               bOverride_AmbientLightColorInfluence               // 0xa(0x1)
	bool                                               bOverride_LightIntensityInfluence                  // 0xb(0x1)
	bool                                               bOverride_AmbientLightIntensityInfluence           // 0xc(0x1)
	bool                                               bOverride_AlternativeAmbientLightColorInfluence    // 0xd(0x1)
	bool                                               bOverride_AlternativeAmbientLightIntensityInfluence // 0xe(0x1)
	bool                                               bOverride_EvaluateLightningAtParticleCenter        // 0xf(0x1)
	bool                                               bOverride_DontRenderWhenPlayerInsideShip           // 0x10(0x1)
	bool                                               bOverride_ObjectFadeEnabled                        // 0x11(0x1)
	bool                                               bOverride_ObjectFadeRate                           // 0x12(0x1)
	bool                                               bOverride_ObjectFadeDistanceThreshold              // 0x13(0x1)
	bool                                               bOverride_TranslucencyDirectionalLightingIntensity // 0x14(0x1)
	bool                                               bOverride_TranslucencyVolumeFogScale               // 0x15(0x1)
	bool                                               bOverride_TranslucencyDistanceFog                  // 0x16(0x1)
	bool                                               bOverride_TranslucencyPass                         // 0x17(0x1)
	bool                                               bOverride_TranslucencyInReflection                 // 0x18(0x1)
	float                                              OpacityMaskClipValue                               // 0x1c(0x4)
	byte                                               BlendMode                                          // 0x20(0x1)
	byte                                               ShadingModel                                       // 0x21(0x1)
	bool                                               TwoSided                                           // 0x24(0x1)
	bool                                               DitheredLODTransition                              // 0x24(0x1)
	byte                                               D3D11TessellationMode                              // 0x28(0x1)
	bool                                               ForceResolution                                    // 0x2c(0x1)
	byte                                               ForcedResolution                                   // 0x30(0x1)
	bool                                               DisableTransition                                  // 0x34(0x1)
	float                                              FirstSplitDistance                                 // 0x38(0x4)
	float                                              SecondSplitDistance                                // 0x3c(0x4)
	float                                              FullResInFrontMaxDistance                          // 0x40(0x4)
	bool                                               FullResInFront                                     // 0x44(0x1)
	bool                                               PopPerParticle                                     // 0x44(0x1)
	float                                              SkyLightWhenOccluded                               // 0x48(0x4)
	float                                              CloudShadowInfluence                               // 0x4c(0x4)
	float                                              LightIntensityInfluence                            // 0x50(0x4)
	float                                              LightColorInfluence                                // 0x54(0x4)
	float                                              AmbientLightIntensityInfluence                     // 0x58(0x4)
	float                                              AmbientLightColorInfluence                         // 0x5c(0x4)
	float                                              AlternativeAmbientLightIntensityInfluence          // 0x60(0x4)
	float                                              AlternativeAmbientLightColorInfluence              // 0x64(0x4)
	bool                                               bEvaluateLightningAtParticleCenter                 // 0x68(0x1)
	bool                                               bDontRenderWhenPlayerInsideShip                    // 0x68(0x1)
	bool                                               ObjectFadeEnabled                                  // 0x68(0x1)
	float                                              ObjectFadeRate                                     // 0x6c(0x4)
	float                                              ObjectFadeDistanceThreshold                        // 0x70(0x4)
	float                                              TranslucencyDirectionalLightingIntensity           // 0x74(0x4)
	float                                              TranslucencyVolumeFogScale                         // 0x78(0x4)
	bool                                               TranslucencyDistanceFog                            // 0x7c(0x1)
	bool                                               TranslucencyInReflection                           // 0x7c(0x1)
	byte                                               TranslucencyPass                                   // 0x80(0x1)
};


// Size 0x28
class VectorParameterValue: public None
{
public:
	struct FName                                       ParameterName                                      // 0x0(0x8)
	Struct LinearColor                                 ParameterValue                                     // 0x8(0x10)
	Struct Guid                                        ExpressionGUID                                     // 0x18(0x10)
};


// Size 0x20
class TextureParameterValue: public None
{
public:
	struct FName                                       ParameterName                                      // 0x0(0x8)
	Class Texture*                                     ParameterValue                                     // 0x8(0x8)
	Struct Guid                                        ExpressionGUID                                     // 0x10(0x10)
};


// Size 0x1c
class ScalarParameterValue: public None
{
public:
	struct FName                                       ParameterName                                      // 0x0(0x8)
	float                                              ParameterValue                                     // 0x8(0x4)
	Struct Guid                                        ExpressionGUID                                     // 0xc(0x10)
};


// Size 0x28
class FontParameterValue: public None
{
public:
	struct FName                                       ParameterName                                      // 0x0(0x8)
	Class Font*                                        FontValue                                          // 0x8(0x8)
	int                                                FontPage                                           // 0x10(0x4)
	Struct Guid                                        ExpressionGUID                                     // 0x14(0x10)
};


// Size 0x28
class CollectionVectorParameter: public None
{
public:
	Struct LinearColor                                 DefaultValue                                       // 0x18(0x10)
};


// Size 0x18
class CollectionParameterBase: public None
{
public:
	struct FName                                       ParameterName                                      // 0x0(0x8)
	Struct Guid                                        Id                                                 // 0x8(0x10)
};


// Size 0x1c
class CollectionScalarParameter: public None
{
public:
	float                                              DefaultValue                                       // 0x18(0x4)
};


// Size 0x18
class NavCollisionBox: public None
{
public:
	Struct Vector                                      Offset                                             // 0x0(0xc)
	Struct Vector                                      Extent                                             // 0xc(0xc)
};


// Size 0x14
class NavCollisionCylinder: public None
{
public:
	Struct Vector                                      Offset                                             // 0x0(0xc)
	float                                              Radius                                             // 0xc(0x4)
	float                                              Height                                             // 0x10(0x4)
};


// Size 0x14
class ParticleBurst: public None
{
public:
	int                                                Count                                              // 0x0(0x4)
	int                                                CountLow                                           // 0x4(0x4)
	float                                              Time                                               // 0x8(0x4)
	float                                              SpawnMultiplier                                    // 0xc(0x4)
	byte                                               Group                                              // 0x10(0x1)
};


// Size 0x20
class ParticleRandomSeedInfo: public None
{
public:
	struct FName                                       ParameterName                                      // 0x0(0x8)
	bool                                               bGetSeedFromInstance                               // 0x8(0x1)
	bool                                               bInstanceSeedIsIndex                               // 0x8(0x1)
	bool                                               bResetSeedOnEmitterLooping                         // 0x8(0x1)
	bool                                               bRandomlySelectSeedArray                           // 0x8(0x1)
	TArray<Int >                                       RandomSeeds                                        // 0x10(0x10)
};


// Size 0x18
class ParticleCurvePair: public None
{
public:
	Struct FString                                     CurveName                                          // 0x0(0x10)
	Class Object*                                      CurveObject                                        // 0x10(0x8)
};


// Size 0x4
class BeamModifierOptions: public None
{
public:
	bool                                               bModify                                            // 0x0(0x1)
	bool                                               bScale                                             // 0x0(0x1)
	bool                                               bLock                                              // 0x0(0x1)
};


// Size 0x28
class ParticleEvent_GenerateInfo: public None
{
public:
	byte                                               Type                                               // 0x0(0x1)
	int                                                Frequency                                          // 0x4(0x4)
	int                                                ParticleFrequency                                  // 0x8(0x4)
	bool                                               FirstTimeOnly                                      // 0xc(0x1)
	bool                                               LastTimeOnly                                       // 0xc(0x1)
	bool                                               UseReflectedImpactVector                           // 0xc(0x1)
	bool                                               bUseOrbitOffset                                    // 0xc(0x1)
	struct FName                                       CustomName                                         // 0x10(0x8)
	TArray<class ParticleModuleEventsToSendToGame*>    ParticleModuleEventsToSendToGame                   // 0x18(0x10)
};


// Size 0x28
class ParticleEventGPU_GenerateInfo: public None
{
public:
	byte                                               Type                                               // 0x0(0x1)
	int                                                Frequency                                          // 0x4(0x4)
	struct FName                                       CustomName                                         // 0x8(0x8)
	byte                                               CollisionEventLimit                                // 0x10(0x1)
	TArray<class ParticleModuleEventsToSendToGame*>    ParticleModuleEventsToSendToGame                   // 0x18(0x10)
};


// Size 0x14
class LocationBoneSocketInfo: public None
{
public:
	struct FName                                       BoneSocketName                                     // 0x0(0x8)
	Struct Vector                                      Offset                                             // 0x8(0xc)
};


// Size 0x10
class PrimitiveSphereEmitterAngleRanges: public None
{
public:
	Struct Vector2D                                    HorizontalAngle                                    // 0x0(0x8)
	Struct Vector2D                                    VerticalAngle                                      // 0x8(0x8)
};


// Size 0x4
class OrbitOptions: public None
{
public:
	bool                                               bProcessDuringSpawn                                // 0x0(0x1)
	bool                                               bProcessDuringUpdate                               // 0x0(0x1)
	bool                                               bUseEmitterTime                                    // 0x0(0x1)
};


// Size 0x50
class EmitterDynamicParameter: public None
{
public:
	struct FName                                       ParamName                                          // 0x0(0x8)
	bool                                               bUseEmitterTime                                    // 0x8(0x1)
	bool                                               bSpawnTimeOnly                                     // 0x8(0x1)
	byte                                               ValueMethod                                        // 0xc(0x1)
	bool                                               bScaleVelocityByParamValue                         // 0x10(0x1)
	Struct RawDistributionFloat                        ParamValue                                         // 0x18(0x38)
};


// Size 0x10
class RotationAboutAxisParameters: public None
{
public:
	Struct Vector                                      Rotation                                           // 0x0(0xc)
	bool                                               bUseRotation                                       // 0xc(0x1)
	bool                                               bUseLocalSpace                                     // 0xc(0x1)
};


// Size 0xc
class BeamTargetData: public None
{
public:
	struct FName                                       TargetName                                         // 0x0(0x8)
	float                                              TargetPercentage                                   // 0x8(0x4)
};


// Size 0xa00
class GPUSpriteResourceData: public None
{
public:
	TArray<Struct GPUSpriteEmitterInfo>                QuantizedColorSamples                              // 0x0(0x10)
	TArray<Struct QuantizedColorSamples>               QuantizedMiscSamples                               // 0x10(0x10)
	TArray<Struct QuantizedMiscSamples>                QuantizedDynamicParamSamples                       // 0x20(0x10)
	TArray<Struct QuantizedDynamicParamSamples>        QuantizedSimulationAttrSamples                     // 0x30(0x10)
	TArray<Struct QuantizedSimulationAttrSamples>      QuantizedSizeOverVelocitySamples                   // 0x40(0x10)
	Struct Vector4                                     ColorScale                                         // 0x50(0x10)
	Struct Vector4                                     ColorBias                                          // 0x60(0x10)
	Struct Vector4                                     MiscScale                                          // 0x70(0x10)
	Struct Vector4                                     MiscBias                                           // 0x80(0x10)
	Struct Vector4                                     DynParamScale                                      // 0x90(0x10)
	Struct Vector4                                     DynParamBias                                       // 0xa0(0x10)
	Struct Vector4                                     MurkyColorScale                                    // 0xb0(0x10)
	Struct Vector4                                     SimulationAttrCurveScale                           // 0xc0(0x10)
	Struct Vector4                                     SimulationAttrCurveBias                            // 0xd0(0x10)
	Struct Vector4                                     SizeOverVelocityScale                              // 0xe0(0x10)
	Struct Vector4                                     SizeOverVelocityBias                               // 0xf0(0x10)
	Struct Vector4                                     SubImageSize                                       // 0x100(0x10)
	Struct Vector4                                     SizeBySpeed                                        // 0x110(0x10)
	Struct Vector                                      ConstantAcceleration                               // 0x120(0xc)
	Struct Vector                                      OrbitOffsetBase                                    // 0x12c(0xc)
	Struct Vector                                      OrbitOffsetRange                                   // 0x138(0xc)
	Struct Vector                                      OrbitFrequencyBase                                 // 0x144(0xc)
	Struct Vector                                      OrbitFrequencyRange                                // 0x150(0xc)
	Struct Vector                                      OrbitPhaseBase                                     // 0x15c(0xc)
	Struct Vector                                      OrbitPhaseRange                                    // 0x168(0xc)
	float                                              GlobalVectorFieldScale                             // 0x174(0x4)
	float                                              GlobalVectorFieldTightness                         // 0x178(0x4)
	float                                              PerParticleVectorFieldScale                        // 0x17c(0x4)
	float                                              PerParticleVectorFieldBias                         // 0x180(0x4)
	float                                              DragCoefficientScale                               // 0x184(0x4)
	float                                              DragCoefficientBias                                // 0x19c(0x4)
	float                                              DragLocalVelocityScale                             // 0x1b4(0x4)
	float                                              DragLocalVelocityBias                              // 0x1cc(0x4)
	float                                              ResilienceScale                                    // 0x1e4(0x4)
	float                                              ResilienceBias                                     // 0x1e8(0x4)
	float                                              CollisionRadiusScale                               // 0x1ec(0x4)
	float                                              CollisionRadiusBias                                // 0x1f0(0x4)
	float                                              CollisionTimeBias                                  // 0x1f4(0x4)
	float                                              OneMinusFriction                                   // 0x1f8(0x4)
	float                                              CameraMotionBlurAmount                             // 0x1fc(0x4)
	float                                              AlphaThreshold                                     // 0x200(0x4)
	byte                                               ScreenAlignment                                    // 0x204(0x1)
	byte                                               LockAxisFlag                                       // 0x20a(0x1)
	Struct Vector2D                                    PivotOffset                                        // 0x20c(0x8)
	float                                              AlignmentInheritedVelocityScale                    // 0x680(0x4)
};


// Size 0x2a0
class GPUSpriteEmitterInfo: public None
{
public:
	Class ParticleModuleRequired*                      RequiredModule                                     // 0x0(0x8)
	Class ParticleModuleSpawn*                         SpawnModule                                        // 0x8(0x8)
	Class ParticleModuleSpawnPerUnit*                  SpawnPerUnitModule                                 // 0x10(0x8)
	Class ParticleModuleSpawnRepeatPerPoint*           SpawnRepeatPerPointModule                          // 0x18(0x8)
	Class ParticleComputeShaderData*                   ParticleComputeData                                // 0x20(0x8)
	Class ParticleModuleParametersOverVelocity*        ParametersOverVelocity                             // 0x28(0x8)
	Class ParticleModuleParametersOverCustom*          ParametersOverCustom                               // 0x30(0x8)
	TArray<class SpawnModules*>                        SpawnModules                                       // 0x38(0x10)
	Struct GPUSpriteLocalVectorFieldInfo               LocalVectorField                                   // 0x50(0x70)
	Struct FloatDistribution                           VectorFieldScale                                   // 0xc0(0x28)
	Struct FloatDistribution                           PointAttractorStrength                             // 0xe8(0x28)
	Struct FloatDistribution                           Resilience                                         // 0x110(0x28)
	Struct Vector                                      ConstantAcceleration                               // 0x138(0xc)
	Struct Vector                                      PointAttractorPosition                             // 0x144(0xc)
	float                                              PointAttractorRadiusSq                             // 0x150(0x4)
	Struct Vector                                      OrbitOffsetBase                                    // 0x154(0xc)
	Struct Vector                                      OrbitOffsetRange                                   // 0x160(0xc)
	Struct Vector2D                                    InvMaxSize                                         // 0x16c(0x8)
	float                                              MaxLifetime                                        // 0x174(0x4)
	int                                                MaxParticleCount                                   // 0x178(0x4)
	int                                                MaxDeathRate                                       // 0x17c(0x4)
	byte                                               ScreenAlignment                                    // 0x180(0x1)
	byte                                               LockAxisFlag                                       // 0x186(0x1)
	bool                                               bEnableCollision                                   // 0x188(0x1)
	bool                                               bNeedsVectorFields                                 // 0x188(0x1)
	bool                                               bOpacitySpawnsOnCPU                                // 0x188(0x1)
	bool                                               bSizeSpawnsOnCPU                                   // 0x188(0x1)
	bool                                               bVelocitySpawnsOnCPU                               // 0x188(0x1)
	bool                                               bIgnoreComponentColorTint                          // 0x188(0x1)
	bool                                               bGeneratesDeathEvents                              // 0x188(0x1)
	bool                                               bGeneratesCollisionEvents                          // 0x188(0x1)
	byte                                               CollisionMode                                      // 0x18c(0x1)
	Struct RawDistributionVector                       DynamicColor                                       // 0x190(0x38)
	Struct RawDistributionFloat                        DynamicAlpha                                       // 0x1c8(0x38)
	Struct RawDistributionVector                       DynamicColorScale                                  // 0x200(0x38)
	Struct RawDistributionFloat                        DynamicAlphaScale                                  // 0x238(0x38)
	Struct Vector4                                     MurkyColorScale                                    // 0x270(0x10)
	struct FName                                       LocationEmitterName                                // 0x280(0x8)
	bool                                               bUseInheritedVelocityLocationEmitter               // 0x288(0x1)
	Struct Vector2D                                    InheritedVelocityScaleLocationEmitter              // 0x28c(0x8)
	bool                                               bKillParticlesOnFFTWater                           // 0x294(0x1)
};


// Size 0x70
class GPUSpriteLocalVectorFieldInfo: public None
{
public:
	Class VectorField*                                 Field                                              // 0x0(0x8)
	Struct Transform                                   Transform                                          // 0x10(0x30)
	Struct Rotator                                     MinInitialRotation                                 // 0x40(0xc)
	Struct Rotator                                     MaxInitialRotation                                 // 0x4c(0xc)
	Struct Rotator                                     RotationRate                                       // 0x58(0xc)
	float                                              Intensity                                          // 0x64(0x4)
	float                                              Tightness                                          // 0x68(0x4)
	bool                                               bIgnoreComponentTransform                          // 0x6c(0x1)
	bool                                               bTileX                                             // 0x6c(0x1)
	bool                                               bTileY                                             // 0x6c(0x1)
	bool                                               bTileZ                                             // 0x6c(0x1)
};


// Size 0x80
class VelocityConeGroupParams: public None
{
public:
	Struct RawDistributionFloat                        Angle                                              // 0x0(0x38)
	Struct RawDistributionFloat                        Velocity                                           // 0x38(0x38)
	Struct Vector                                      Direction                                          // 0x70(0xc)
};


// Size 0x10
class ParticleSystemReplayFrame: public None
{
public:
};


// Size 0x10
class ParticleEmitterReplayFrame: public None
{
public:
};


// Size 0x10
class DelegateArray: public None
{
public:
	TArray<Delegate PurchaseInfo>                      Delegates                                          // 0x0(0x10)
};


// Size 0x40
class PurchaseInfo: public None
{
public:
	Struct FString                                     Identifier                                         // 0x0(0x10)
	Struct FString                                     DisplayName                                        // 0x10(0x10)
	Struct FString                                     DisplayDescription                                 // 0x20(0x10)
	Struct FString                                     DisplayPrice                                       // 0x30(0x10)
};


// Size 0x20
class DebugDisplayProperty: public None
{
public:
	Class Object*                                      Obj                                                // 0x0(0x8)
	class                                              WithinClass                                        // 0x8(0x8)
};


// Size 0x28
class TransformBase: public None
{
public:
	struct FName                                       Node                                               // 0x0(0x8)
	Struct TransformBaseConstraint                     Constraints                                        // 0x8(0x10)
};


// Size 0x10
class TransformBaseConstraint: public None
{
public:
	TArray<Struct RigTransformConstraint>              TransformConstraints                               // 0x0(0x10)
};


// Size 0x10
class RigTransformConstraint: public None
{
public:
	byte                                               TranformType                                       // 0x0(0x1)
	struct FName                                       ParentSpace                                        // 0x4(0x8)
	float                                              Weight                                             // 0xc(0x4)
};


// Size 0x60
class Node: public None
{
public:
	struct FName                                       Name                                               // 0x0(0x8)
	struct FName                                       ParentName                                         // 0x8(0x8)
	Struct Transform                                   Transform                                          // 0x10(0x30)
	Struct FString                                     DisplayName                                        // 0x40(0x10)
	bool                                               bAdvanced                                          // 0x50(0x1)
};


// Size 0x88
class DestructibleParameters: public None
{
public:
	Struct DestructibleDamageParameters                DamageParameters                                   // 0x0(0x1c)
	Struct DestructibleDebrisParameters                DebrisParameters                                   // 0x1c(0x2c)
	Struct DestructibleAdvancedParameters              AdvancedParameters                                 // 0x48(0x10)
	Struct DestructibleSpecialHierarchyDepths          SpecialHierarchyDepths                             // 0x58(0x14)
	TArray<Struct DestructibleDepthParameters>         DepthParameters                                    // 0x70(0x10)
	Struct DestructibleParametersFlag                  Flags                                              // 0x80(0x4)
};


// Size 0x4
class DestructibleParametersFlag: public None
{
public:
	bool                                               bAccumulateDamage                                  // 0x0(0x1)
	bool                                               bAssetDefinedSupport                               // 0x0(0x1)
	bool                                               bWorldSupport                                      // 0x0(0x1)
	bool                                               bDebrisTimeout                                     // 0x0(0x1)
	bool                                               bDebrisMaxSeparation                               // 0x0(0x1)
	bool                                               bCrumbleSmallestChunks                             // 0x0(0x1)
	bool                                               bAccurateRaycasts                                  // 0x0(0x1)
	bool                                               bUseValidBounds                                    // 0x0(0x1)
	bool                                               bFormExtendedStructures                            // 0x1(0x1)
};


// Size 0x1
class DestructibleDepthParameters: public None
{
public:
	byte                                               ImpactDamageOverride                               // 0x0(0x1)
};


// Size 0x14
class DestructibleSpecialHierarchyDepths: public None
{
public:
	int                                                SupportDepth                                       // 0x0(0x4)
	int                                                MinimumFractureDepth                               // 0x4(0x4)
	bool                                               bEnableDebris                                      // 0x8(0x1)
	int                                                DebrisDepth                                        // 0xc(0x4)
	int                                                EssentialDepth                                     // 0x10(0x4)
};


// Size 0x10
class DestructibleAdvancedParameters: public None
{
public:
	float                                              DamageCap                                          // 0x0(0x4)
	float                                              ImpactVelocityThreshold                            // 0x4(0x4)
	float                                              MaxChunkSpeed                                      // 0x8(0x4)
	float                                              FractureImpulseScale                               // 0xc(0x4)
};


// Size 0x2c
class DestructibleDebrisParameters: public None
{
public:
	float                                              DebrisLifetimeMin                                  // 0x0(0x4)
	float                                              DebrisLifetimeMax                                  // 0x4(0x4)
	float                                              DebrisMaxSeparationMin                             // 0x8(0x4)
	float                                              DebrisMaxSeparationMax                             // 0xc(0x4)
	Struct Box                                         ValidBounds                                        // 0x10(0x1c)
};


// Size 0x1c
class DestructibleDamageParameters: public None
{
public:
	float                                              DamageThreshold                                    // 0x0(0x4)
	float                                              DamageSpread                                       // 0x4(0x4)
	bool                                               bEnableImpactDamage                                // 0x8(0x1)
	float                                              ImpactDamage                                       // 0xc(0x4)
	int                                                DefaultImpactDamageDepth                           // 0x10(0x4)
	bool                                               bCustomImpactResistance                            // 0x14(0x1)
	float                                              ImpactResistance                                   // 0x18(0x4)
};


// Size 0x8
class SoundNodeEditorData: public None
{
public:
};


// Size 0x20
class SoundGroup: public None
{
public:
	byte                                               SoundGroup                                         // 0x0(0x1)
	Struct FString                                     DisplayName                                        // 0x8(0x10)
	bool                                               bAlwaysDecompressOnLoad                            // 0x18(0x1)
	float                                              DecompressedDuration                               // 0x1c(0x4)
};


// Size 0x20
class StreamedAudioPlatformData: public None
{
public:
};


// Size 0x10
class PassiveSoundMixModifier: public None
{
public:
	Class SoundMix*                                    SoundMix                                           // 0x0(0x8)
	float                                              MinVolumeThreshold                                 // 0x8(0x4)
	float                                              MaxVolumeThreshold                                 // 0xc(0x4)
};


// Size 0x24
class SoundClassProperties: public None
{
public:
	float                                              Volume                                             // 0x0(0x4)
	float                                              Pitch                                              // 0x4(0x4)
	float                                              StereoBleed                                        // 0x8(0x4)
	float                                              LFEBleed                                           // 0xc(0x4)
	float                                              VoiceCenterChannelVolume                           // 0x10(0x4)
	float                                              RadioFilterVolume                                  // 0x14(0x4)
	float                                              RadioFilterVolumeThreshold                         // 0x18(0x4)
	bool                                               bApplyEffects                                      // 0x1c(0x1)
	bool                                               bAlwaysPlay                                        // 0x1c(0x1)
	bool                                               bIsUISound                                         // 0x1c(0x1)
	bool                                               bIsMusic                                           // 0x1c(0x1)
	bool                                               bReverb                                            // 0x1c(0x1)
	bool                                               bCenterChannelOnly                                 // 0x1c(0x1)
	bool                                               bApplyAmbientVolumes                               // 0x1c(0x1)
	byte                                               OutputTarget                                       // 0x20(0x1)
};


// Size 0x8
class SoundClassEditorData: public None
{
public:
};


// Size 0x18
class SoundClassAdjuster: public None
{
public:
	Class SoundClass*                                  SoundClassObject                                   // 0x0(0x8)
	float                                              VolumeAdjuster                                     // 0x8(0x4)
	float                                              PitchAdjuster                                      // 0xc(0x4)
	bool                                               bApplyToChildren                                   // 0x10(0x1)
	float                                              VoiceCenterChannelVolumeAdjuster                   // 0x14(0x4)
};


// Size 0x28
class AudioEQEffect: public None
{
public:
	float                                              HFFrequency                                        // 0x8(0x4)
	float                                              HFGain                                             // 0xc(0x4)
	float                                              MFCutoffFrequency                                  // 0x10(0x4)
	float                                              MFBandwidth                                        // 0x14(0x4)
	float                                              MFGain                                             // 0x18(0x4)
	float                                              LFFrequency                                        // 0x1c(0x4)
	float                                              LFGain                                             // 0x20(0x4)
};


// Size 0x14
class DistanceDatum: public None
{
public:
	float                                              FadeInDistanceStart                                // 0x0(0x4)
	float                                              FadeInDistanceEnd                                  // 0x4(0x4)
	float                                              FadeOutDistanceStart                               // 0x8(0x4)
	float                                              FadeOutDistanceEnd                                 // 0xc(0x4)
	float                                              Volume                                             // 0x10(0x4)
};


// Size 0x20
class ModulatorContinuousParams: public None
{
public:
	struct FName                                       ParameterName                                      // 0x0(0x8)
	float                                              Default                                            // 0x8(0x4)
	float                                              MinInput                                           // 0xc(0x4)
	float                                              MaxInput                                           // 0x10(0x4)
	float                                              MinOutput                                          // 0x14(0x4)
	float                                              MaxOutput                                          // 0x18(0x4)
	byte                                               ParamMode                                          // 0x1c(0x1)
};


// Size 0x24
class SubsurfaceProfileStruct: public None
{
public:
	float                                              ScatterRadius                                      // 0x0(0x4)
	Struct LinearColor                                 SubsurfaceColor                                    // 0x4(0x10)
	Struct LinearColor                                 FalloffColor                                       // 0x14(0x10)
};


// Size 0x18
class TTLinearColorTrack: public None
{
public:
	Class CurveLinearColor*                            CurveLinearColor                                   // 0x10(0x8)
};


// Size 0xc
class TTTrackBase: public None
{
public:
	struct FName                                       TrackName                                          // 0x0(0x8)
	bool                                               bIsExternalCurve                                   // 0x8(0x1)
};


// Size 0x18
class TTVectorTrack: public None
{
public:
	Class CurveVector*                                 CurveVector                                        // 0x10(0x8)
};


// Size 0x18
class TTFloatTrack: public None
{
public:
	Class CurveFloat*                                  CurveFloat                                         // 0x10(0x8)
};


// Size 0x18
class TTEventTrack: public None
{
public:
	Class CurveFloat*                                  CurveKeys                                          // 0x10(0x8)
};


// Size 0x78
class TouchInputControl: public None
{
public:
	Class Texture2D*                                   Image1                                             // 0x0(0x8)
	Class Texture2D*                                   Image2                                             // 0x8(0x8)
	Struct Vector2D                                    Center                                             // 0x10(0x8)
	Struct Vector2D                                    VisualSize                                         // 0x18(0x8)
	Struct Vector2D                                    ThumbSize                                          // 0x20(0x8)
	Struct Vector2D                                    InteractionSize                                    // 0x28(0x8)
	Struct Vector2D                                    InputScale                                         // 0x30(0x8)
	Struct Key                                         MainInputKey                                       // 0x38(0x20)
	Struct Key                                         AltInputKey                                        // 0x58(0x20)
};


// Size 0xc
class AnimationRecordingSettings: public None
{
public:
	bool                                               bRecordInWorldSpace                                // 0x0(0x1)
	bool                                               bRemoveRootAnimation                               // 0x1(0x1)
	bool                                               bAutoSaveAsset                                     // 0x2(0x1)
	float                                              SampleRate                                         // 0x4(0x4)
	float                                              Length                                             // 0x8(0x4)
};


// Size 0x70
class AnimNode_ApplyAdditive: public None
{
public:
	Struct PoseLink                                    Base                                               // 0x30(0x18)
	Struct PoseLink                                    Additive                                           // 0x48(0x18)
	float                                              Alpha                                              // 0x60(0x4)
	Struct InputScaleBias                              AlphaScaleBias                                     // 0x64(0x8)
};


// Size 0x40
class AnimNode_AssetPlayerBase: public None
{
public:
	bool                                               bIgnoreForRelevancyTest                            // 0x30(0x1)
	float                                              BlendWeight                                        // 0x34(0x4)
	float                                              InternalTimeAccumulator                            // 0x38(0x4)
};


// Size 0xa8
class AnimNode_BlendListBase: public None
{
public:
	TArray<Struct AnimNode_BlendListByBool>            BlendPose                                          // 0x30(0x10)
	TArray<Float >                                     BlendTime                                          // 0x40(0x10)
	byte                                               BlendType                                          // 0x50(0x1)
	Class CurveFloat*                                  CustomBlendCurve                                   // 0x58(0x8)
	TArray<Struct CustomBlendCurve>                    Blends                                             // 0x60(0x10)
	TArray<Float >                                     BlendWeights                                       // 0x70(0x10)
	TArray<Float >                                     RemainingBlendTimes                                // 0x80(0x10)
	int                                                LastActiveChildIndex                               // 0x90(0x4)
};


// Size 0xb0
class AnimNode_BlendListByBool: public None
{
public:
	bool                                               bActiveValue                                       // 0xa8(0x1)
};


// Size 0xc0
class AnimNode_BlendListByEnum: public None
{
public:
	TArray<Int None>                                   EnumToPoseIndex                                    // 0xa8(0x10)
	byte                                               ActiveEnumValue                                    // 0xb8(0x1)
};


// Size 0xb0
class AnimNode_BlendListByInt: public None
{
public:
	int                                                ActiveChildIndex                                   // 0xa8(0x4)
};


// Size 0xc0
class AnimNode_BlendListByObject: public None
{
public:
	class                                              ActiveTypeValue                                    // 0xa8(0x8)
	TArray<Class ActiveTypeValue>                      ObjectToPoseIndex                                  // 0xb0(0x10)
};


// Size 0x110
class AnimNode_BlendSpacePlayer: public None
{
public:
	float                                              X                                                  // 0x40(0x4)
	float                                              Y                                                  // 0x44(0x4)
	float                                              Z                                                  // 0x48(0x4)
	float                                              PlayRate                                           // 0x4c(0x4)
	bool                                               bLoop                                              // 0x50(0x1)
	Class BlendSpaceBase*                              BlendSpace                                         // 0x58(0x8)
	int                                                GroupIndex                                         // 0x60(0x4)
	byte                                               GroupRole                                          // 0x64(0x1)
	Struct BlendFilter                                 BlendFilter                                        // 0x68(0x90)
	TArray<Struct BlendFilter>                         BlendSampleDataCache                               // 0xf8(0x10)
};


// Size 0x118
class AnimNode_BlendSpaceEvaluator: public None
{
public:
	float                                              NormalizedTime                                     // 0x110(0x4)
};


// Size 0xc0
class AnimNode_HIKFloorContact: public None
{
public:
	bool                                               FeetContact                                        // 0x48(0x1)
	bool                                               HandsContact                                       // 0x49(0x1)
	bool                                               FingersContact                                     // 0x4a(0x1)
	bool                                               ToesContact                                        // 0x4b(0x1)
	byte                                               FeetContactType                                    // 0x4c(0x1)
	byte                                               HandsContactType                                   // 0x4d(0x1)
	float                                              DistanceUp                                         // 0x50(0x4)
	float                                              DistanceDown                                       // 0x54(0x4)
	int                                                NbRays                                             // 0x58(0x4)
	float                                              FootRadius                                         // 0x5c(0x4)
	float                                              DeltaTime                                          // 0x60(0x4)
	float                                              Smoothing                                          // 0x64(0x4)
	Struct CollisionResponseContainer                  OverrideRaycastCollisionResponse                   // 0x68(0x20)
	float                                              FeetHeight                                         // 0x88(0x4)
	float                                              FeetBack                                           // 0x8c(0x4)
	float                                              FeetMiddle                                         // 0x90(0x4)
	float                                              FeetFront                                          // 0x94(0x4)
	float                                              FeetInSide                                         // 0x98(0x4)
	float                                              FeetOutSide                                        // 0x9c(0x4)
	float                                              HandsHeight                                        // 0xa0(0x4)
	float                                              HandsBack                                          // 0xa4(0x4)
	float                                              HandsMiddle                                        // 0xa8(0x4)
	float                                              HandsFront                                         // 0xac(0x4)
	float                                              HandsInSide                                        // 0xb0(0x4)
	float                                              HandsOutSide                                       // 0xb4(0x4)
};


// Size 0x88
class AnimNode_HIKLookAt: public None
{
public:
	float                                              Alpha                                              // 0x48(0x4)
	Struct Vector                                      TargetPosition                                     // 0x4c(0xc)
	float                                              ChestContribution                                  // 0x58(0x4)
	bool                                               XYOnly                                             // 0x5c(0x1)
	byte                                               Limits                                             // 0x5d(0x1)
	float                                              LimitsHorizontalAngle                              // 0x60(0x4)
	float                                              LimitsVerticalAngle                                // 0x64(0x4)
	float                                              ActivationSpeed                                    // 0x68(0x4)
	float                                              TargetPositionSpeed                                // 0x6c(0x4)
	byte                                               InterpolationMode                                  // 0x70(0x1)
};


// Size 0x60
class AnimNode_HIKOffset: public None
{
public:
	float                                              Alpha                                              // 0x48(0x4)
	float                                              ReachT                                             // 0x4c(0x4)
	Struct Vector                                      Translation                                        // 0x50(0xc)
	byte                                               Effector                                           // 0x5c(0x1)
	byte                                               EffectorSpace                                      // 0x5d(0x1)
};


// Size 0x58
class AnimNode_HIKPin: public None
{
public:
	float                                              Alpha                                              // 0x48(0x4)
	float                                              PinTStrength                                       // 0x4c(0x4)
	float                                              PinRStrength                                       // 0x50(0x4)
	byte                                               Effector                                           // 0x54(0x1)
};


// Size 0x60
class AnimNode_HIKPlant: public None
{
public:
	float                                              Alpha                                              // 0x48(0x4)
	float                                              HipsLevel                                          // 0x4c(0x4)
	float                                              ProjectionDistance                                 // 0x50(0x4)
	bool                                               PullFeetInsteadOfAnkles                            // 0x54(0x1)
	bool                                               IsQuadruped                                        // 0x55(0x1)
	float                                              ChestLevel                                         // 0x58(0x4)
	bool                                               PullHandsInsteadOfWrists                           // 0x5c(0x1)
};


// Size 0x50
class AnimNode_HIKPull: public None
{
public:
	float                                              Alpha                                              // 0x48(0x4)
	byte                                               Effector                                           // 0x4c(0x1)
};


// Size 0x80
class AnimNode_HIKReach: public None
{
public:
	float                                              Alpha                                              // 0x48(0x4)
	float                                              ReachT                                             // 0x4c(0x4)
	float                                              ReachR                                             // 0x50(0x4)
	Struct Vector                                      Translation                                        // 0x54(0xc)
	Struct Quat                                        Orientation                                        // 0x60(0x10)
	byte                                               Effector                                           // 0x70(0x1)
	byte                                               EffectorSpace                                      // 0x71(0x1)
	struct FName                                       ParentBone                                         // 0x74(0x8)
};


// Size 0x70
class AnimNode_HIKReachRotator: public None
{
public:
	float                                              Alpha                                              // 0x48(0x4)
	float                                              ReachT                                             // 0x4c(0x4)
	float                                              ReachR                                             // 0x50(0x4)
	Struct Vector                                      Translation                                        // 0x54(0xc)
	Struct Rotator                                     Orientation                                        // 0x60(0xc)
	byte                                               Effector                                           // 0x6c(0x1)
	byte                                               EffectorSpace                                      // 0x6d(0x1)
};


// Size 0x98
class AnimNode_HIKRelativePlant: public None
{
public:
	float                                              Alpha                                              // 0x48(0x4)
	float                                              Depth                                              // 0x4c(0x4)
	float                                              HipsRotationFactor                                 // 0x50(0x4)
	float                                              ChestRotationFactor                                // 0x54(0x4)
	float                                              DistanceUp                                         // 0x58(0x4)
	float                                              DistanceDown                                       // 0x5c(0x4)
	int                                                NbRays                                             // 0x60(0x4)
	float                                              FootRadius                                         // 0x64(0x4)
	Struct CollisionResponseContainer                  OverrideRaycastCollisionResponse                   // 0x68(0x20)
	float                                              DeltaTime                                          // 0x88(0x4)
	float                                              Smoothing                                          // 0x8c(0x4)
};


// Size 0x50
class AnimNode_HIKResist: public None
{
public:
	float                                              Alpha                                              // 0x48(0x4)
	byte                                               Effector                                           // 0x4c(0x1)
};


// Size 0x50
class AnimNode_HIKSetProperty: public None
{
public:
	byte                                               Property                                           // 0x48(0x1)
	float                                              Value                                              // 0x4c(0x4)
};


// Size 0x80
class AnimNode_HIKSolve: public None
{
public:
	float                                              Alpha                                              // 0x48(0x4)
	Struct ComponentSpacePoseLink                      InputFKPose                                        // 0x50(0x18)
	bool                                               enablePullEngine                                   // 0x68(0x1)
	bool                                               enableBodyPartSolving                              // 0x69(0x1)
	bool                                               enableLODSolver                                    // 0x6a(0x1)
	bool                                               enableLegsSNS                                      // 0x6b(0x1)
	bool                                               enableArmsSNS                                      // 0x6c(0x1)
	bool                                               boneLengthFromInputPose                            // 0x6d(0x1)
	bool                                               bodyPartSolveLeftShoulder                          // 0x6e(0x1)
	bool                                               bodyPartSolveRightShoulder                         // 0x6f(0x1)
	bool                                               bodyPartSolveLeftArm                               // 0x70(0x1)
	bool                                               bodyPartSolveRightArm                              // 0x71(0x1)
	bool                                               bodyPartSolveLeftLeg                               // 0x72(0x1)
	bool                                               bodyPartSolveRightLeg                              // 0x73(0x1)
	bool                                               bodyPartSolveLeftHand                              // 0x74(0x1)
	bool                                               bodyPartSolveRightHand                             // 0x75(0x1)
	bool                                               bodyPartSolveLeftFoot                              // 0x76(0x1)
	bool                                               bodyPartSolveRightFoot                             // 0x77(0x1)
	bool                                               bodyPartSolveHead                                  // 0x78(0x1)
	bool                                               bodyPartSolveSpine                                 // 0x79(0x1)
	bool                                               checkOutputPoseContainsNaNs                        // 0x7a(0x1)
};


// Size 0x58
class AnimNode_HIKTest: public None
{
public:
	float                                              Alpha                                              // 0x48(0x4)
	float                                              Param                                              // 0x4c(0x4)
	float                                              Intensity                                          // 0x50(0x4)
};


// Size 0xa0
class AnimNode_LayeredBoneBlend: public None
{
public:
	Struct PoseLink                                    BasePose                                           // 0x30(0x18)
	TArray<Struct BasePose>                            BlendPoses                                         // 0x48(0x10)
	TArray<Struct BlendPoses>                          LayerSetup                                         // 0x58(0x10)
	TArray<Float >                                     BlendWeights                                       // 0x68(0x10)
	bool                                               bMeshSpaceRotationBlend                            // 0x78(0x1)
	byte                                               CurveBlendOption                                   // 0x79(0x1)
};


// Size 0x70
class AnimNode_MultiWayBlend: public None
{
public:
	TArray<Struct AnimNode_MeshSpaceRefPose>           Poses                                              // 0x30(0x10)
	TArray<Float >                                     DesiredAlphas                                      // 0x40(0x10)
	bool                                               bAdditiveNode                                      // 0x50(0x1)
	bool                                               bNormalizeAlpha                                    // 0x51(0x1)
	Struct InputScaleBias                              AlphaScaleBias                                     // 0x54(0x8)
};


// Size 0x30
class AnimNode_MeshSpaceRefPose: public None
{
public:
};


// Size 0x38
class AnimNode_RefPose: public None
{
public:
	byte                                               RefPoseType                                        // 0x30(0x1)
};


// Size 0x48
class AnimNode_Root: public None
{
public:
	Struct PoseLink                                    Result                                             // 0x30(0x18)
};


// Size 0x60
class AnimNode_RotateRootBone: public None
{
public:
	Struct PoseLink                                    BasePose                                           // 0x30(0x18)
	float                                              Pitch                                              // 0x48(0x4)
	float                                              Yaw                                                // 0x4c(0x4)
	Struct Rotator                                     MeshToComponent                                    // 0x50(0xc)
};


// Size 0x128
class AnimNode_RotationOffsetBlendSpace: public None
{
public:
	Struct PoseLink                                    BasePose                                           // 0x110(0x18)
};


// Size 0x90
class AnimNode_SaveCachedPose: public None
{
public:
	Struct PoseLink                                    Pose                                               // 0x38(0x18)
};


// Size 0x50
class AnimNode_SequenceEvaluator: public None
{
public:
	Class AnimSequenceBase*                            Sequence                                           // 0x40(0x8)
	float                                              ExplicitTime                                       // 0x48(0x4)
};


// Size 0x60
class AnimNode_SequencePlayer: public None
{
public:
	Class AnimSequenceBase*                            Sequence                                           // 0x40(0x8)
	bool                                               bLoopAnimation                                     // 0x48(0x1)
	float                                              PlayRate                                           // 0x4c(0x4)
	int                                                GroupIndex                                         // 0x50(0x4)
	byte                                               GroupRole                                          // 0x54(0x1)
};


// Size 0x60
class AnimNode_Slot: public None
{
public:
	Struct PoseLink                                    Source                                             // 0x30(0x18)
	struct FName                                       SlotName                                           // 0x48(0x8)
};


// Size 0xa8
class AnimNode_StateMachine: public None
{
public:
	int                                                StateMachineIndexInClass                           // 0x30(0x4)
	int                                                MaxTransitionsPerFrame                             // 0x34(0x4)
	int                                                CurrentState                                       // 0x40(0x4)
	float                                              ElapsedTime                                        // 0x44(0x4)
};


// Size 0x10
class AnimationPotentialTransition: public None
{
public:
};


// Size 0x90
class AnimationActiveTransitionEntry: public None
{
public:
};


// Size 0x80
class AnimNode_TransitionPoseEvaluator: public None
{
public:
	byte                                               DataSource                                         // 0x30(0x1)
	byte                                               EvaluatorMode                                      // 0x31(0x1)
	int                                                FramesToCachePose                                  // 0x34(0x4)
	int                                                CacheFramesRemaining                               // 0x78(0x4)
};


// Size 0x40
class AnimNode_TransitionResult: public None
{
public:
	bool                                               bCanEnterTransition                                // 0x30(0x1)
};


// Size 0x70
class AnimationNode_TwoWayBlend: public None
{
public:
	Struct PoseLink                                    A                                                  // 0x30(0x18)
	Struct PoseLink                                    B                                                  // 0x48(0x18)
	float                                              Alpha                                              // 0x60(0x4)
	Struct InputScaleBias                              AlphaScaleBias                                     // 0x64(0x8)
};


// Size 0x48
class AnimNode_UseCachedPose: public None
{
public:
	Struct PoseLink                                    LinkToCachingNode                                  // 0x30(0x18)
};


// Size 0x48
class AnimNode_ConvertLocalToComponentSpace: public None
{
public:
	Struct PoseLink                                    LocalPose                                          // 0x30(0x18)
};


// Size 0x48
class AnimNode_ConvertComponentToLocalSpace: public None
{
public:
	Struct ComponentSpacePoseLink                      ComponentPose                                      // 0x30(0x18)
};


// Size 0x1
class DummySpacerCameraTypes: public None
{
public:
};


// Size 0x70
class NetTimeStampCalculator: public None
{
public:
};


// Size 0xc0
class StreamableManager: public None
{
public:
};


// Size 0x10
class ServerMigrationTelemetryFailedData: public None
{
public:
	Struct FString                                     Stage                                              // 0x0(0x10)
};


// Size 0x20
class ServerMigrationTelemetrySucceededData: public None
{
public:
	TArray<Struct ServerMigrationTelemetryActorData>   ActorDetails                                       // 0x0(0x10)
	float                                              TotalTime                                          // 0x10(0x4)
	int                                                NumClients                                         // 0x14(0x4)
	int                                                NumActorsMigrated                                  // 0x18(0x4)
	int                                                ActorSerialisationBytes                            // 0x1c(0x4)
};


// Size 0x28
class ServerMigrationTelemetryActorData: public None
{
public:
	int                                                Count                                              // 0x20(0x4)
};


// Size 0x50
class ReplicatedPhysicsState: public None
{
public:
	Class PrimitiveComponent*                          MovementBase                                       // 0x0(0x8)
	Class SceneComponent*                              AttachParent                                       // 0x8(0x8)
	Struct RepMovement                                 ReplicatedMovement                                 // 0x10(0x38)
	bool                                               IsAttached                                         // 0x48(0x1)
};


// Size 0x30
class ReplicatedTransformState: public None
{
public:
	Class SceneComponent*                              MovementBase                                       // 0x0(0x8)
	Class SceneComponent*                              AttachParent                                       // 0x8(0x8)
	Struct RepTransform                                ReplicatedMovement                                 // 0x10(0x18)
	bool                                               IsAttached                                         // 0x28(0x1)
};


// Size 0x18
class RepTransform: public None
{
public:
	Struct Vector                                      Location                                           // 0x0(0xc)
	Struct Rotator                                     Rotation                                           // 0xc(0xc)
};


// Size 0xc
class SkelMeshMergeMorphTarget: public None
{
public:
};


}