namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x0
class ForceFeedbackCondition: public Object
{
public:
};


// Size 0x0
class AthenaEngineInterface: public Interface
{
public:
};


// Size 0x0
class BoxedRpcDispatcherInterface: public Interface
{
public:
};


// Size 0x8
class BoxedRpcDispatcherComponent: public ActorComponent
{
public:
};


// Size 0x130
class DynamicColourPointLightComponent: public PointLightComponent
{
public:
	Struct RuntimeFloatCurve                           ActivationCurve                                    // 0x498(0x80)
	Struct RuntimeFloatCurve                           DeactivationCurve                                  // 0x518(0x80)
};


// Size 0x0
class EmptyObject: public Object
{
public:
};


// Size 0x0
class GameInstanceSessionIdProviderInterface: public Interface
{
public:
};


// Size 0x10
class NestedWorldRootDataAsset: public DataAsset
{
public:
};


// Size 0x0
class OnlinePlayerPermissionsRetrieverInterface: public Interface
{
public:
};


// Size 0x0
class PlayModeHelpers: public BlueprintFunctionLibrary
{
public:
};


// Size 0x0
class PlayModeInterface: public Interface
{
public:
};


// Size 0x40
class PrimitiveCollisionExtentAdjustOverTimeComponent: public ActorComponent
{
public:
	float                                              DelayBeforeExtentAdjustment                        // 0xc8(0x4)
	Class World*                                       CachedWorld                                        // 0xf8(0x8)
};


// Size 0x30
class BoxCollisionExtentAdjustOverTimeComponent: public PrimitiveCollisionExtentAdjustOverTimeComponent
{
public:
	bool                                               ShouldAdjustBoxExtentX                             // 0x108(0x1)
	float                                              PostAdjustmentBoxExtentX                           // 0x10c(0x4)
	bool                                               ShouldAdjustBoxExtentY                             // 0x110(0x1)
	float                                              PostAdjustmentBoxExtentY                           // 0x114(0x4)
	bool                                               ShouldAdjustBoxExtentZ                             // 0x118(0x1)
	float                                              PostAdjustmentBoxExtentZ                           // 0x11c(0x4)
	Struct Vector                                      ServerSizeScale                                    // 0x120(0xc)
	Class BoxComponent*                                BoxCollisionToAdjust                               // 0x130(0x8)
};


// Size 0x18
class SphereCollisionExtentAdjustOverTimeComponent: public PrimitiveCollisionExtentAdjustOverTimeComponent
{
public:
	bool                                               ShouldAdjustSphereRadius                           // 0x108(0x1)
	float                                              PostAdjustmentSphereRadius                         // 0x10c(0x4)
	float                                              ServerSizeScale                                    // 0x110(0x4)
	Class SphereComponent*                             SphereCollisionToAdjust                            // 0x118(0x8)
};


// Size 0x0
class ResourceProviderInterface: public Interface
{
public:
};


// Size 0x30
class RotateMeshToActorComponent: public ActorComponent
{
public:
	Class MeshComponent*                               MeshToRotate                                       // 0xc8(0x8)
	Class Actor*                                       ActorToRotateTo                                    // 0xd0(0x8)
	float                                              CloseProximityRadius                               // 0xd8(0x4)
	bool                                               Use2DDistanceForCloseProximityRadius               // 0xdc(0x1)
	bool                                               WhenInCloseProximityKeepLastYaw                    // 0xdd(0x1)
	float                                              RotationSpeed                                      // 0xe0(0x4)
	bool                                               PreventPitchModification                           // 0xe4(0x1)
	float                                              MaxPitch                                           // 0xe8(0x4)
	float                                              CloseProximityYawRotation                          // 0xec(0x4)
};


// Size 0x0
class RotateMeshToLocalPlayerComponent: public RotateMeshToActorComponent
{
public:
};


// Size 0x0
class ServicesStampIdInterface: public Interface
{
public:
};


// Size 0x30
class SkeletalMeshAggregateTickComponent: public ActorComponent
{
public:
	Class SkeletalMeshComponent*                       Mesh                                               // 0xc8(0x8)
};


// Size 0x28
class StringToAssetClassMap: public DataAsset
{
public:
	TArray<Struct ClosestActorToPoint>                 StringAssetClassPairs                              // 0x28(0x10)
};


// Size 0x0
class SyncedRandomRetrievalInterface: public Interface
{
public:
};


}