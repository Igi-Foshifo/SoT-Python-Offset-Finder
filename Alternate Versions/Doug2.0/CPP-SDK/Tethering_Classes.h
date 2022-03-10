namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x0
class CordRenderInterface: public Interface
{
public:
};


// Size 0x40
class CordRenderComponent: public StaticMeshComponent
{
public:
	TArray<class CordMaterials*>                       CordMaterials                                      // 0x618(0x10)
	float                                              ThicknessCm                                        // 0x628(0x4)
};


// Size 0x60
class DynamicCordRenderComponent: public CordRenderComponent
{
public:
	float                                              BoundsPadding                                      // 0x648(0x4)
	Class SceneComponent*                              EndPointA                                          // 0x650(0x8)
	Class SceneComponent*                              EndPointB                                          // 0x658(0x8)
};


// Size 0x20
class HarpoonRenderComponent: public CordRenderComponent
{
public:
	TArray<class HarpoonMaterials*>                    HarpoonMaterials                                   // 0x648(0x10)
	float                                              LaunchAnimationDurationSecs                        // 0x658(0x4)
	float                                              HitAnimationDurationSecs                           // 0x65c(0x4)
	float                                              QuickRetractAnimationSpeed                         // 0x660(0x4)
};


// Size 0x0
class TetherConstraintInterface: public Interface
{
public:
};


// Size 0x88
class DistanceJointComponent: public ActorComponent
{
public:
	float                                              MinDistance                                        // 0x138(0x4)
	float                                              MaxDistance                                        // 0x13c(0x4)
	float                                              SpringStiffness                                    // 0x140(0x4)
	float                                              SpringDamping                                      // 0x144(0x4)
	bool                                               ApplyAsSpring                                      // 0x148(0x1)
	bool                                               EnforceMinDistance                                 // 0x149(0x1)
	bool                                               EnforceMaxDistance                                 // 0x14a(0x1)
};


// Size 0x0
class ShouldTetherInWorldSpaceInterface: public Interface
{
public:
};


// Size 0x0
class TetherQueriableInterface: public Interface
{
public:
};


// Size 0x0
class TetherCustomisationInterface: public TetherQueriableInterface
{
public:
};


// Size 0x0
class TetherInterface: public Interface
{
public:
};


// Size 0x140
class Tether: public Actor
{
public:
	Class SceneComponent*                              TetherPositionAnchorComponent                      // 0x4c8(0x8)
	Class SphereComponent*                             SourcePhysicsHandle                                // 0x4d0(0x8)
	Class SphereComponent*                             TargetPhysicsHandle                                // 0x4d8(0x8)
	Class DistanceJointComponent*                      JointComponent                                     // 0x4e0(0x8)
	Class Actor*                                       SourceActor                                        // 0x4e8(0x8)
	Class Actor*                                       TargetActor                                        // 0x4f0(0x8)
	float                                              SlackCm                                            // 0x4f8(0x4)
	float                                              MaxLengthWhenGrowing                               // 0x4fc(0x4)
	bool                                               HasAttached                                        // 0x508(0x1)
	bool                                               HasSourceActor                                     // 0x509(0x1)
	bool                                               HasTargetActor                                     // 0x50a(0x1)
	bool                                               IsSlackEnabled                                     // 0x50b(0x1)
	byte                                               CurrentTetherMode                                  // 0x50c(0x1)
};


// Size 0x60
class TetherCustomisationComponent: public ActorComponent
{
public:
	Class SceneComponent*                              ComponentToTetherTo                                // 0xd0(0x8)
	float                                              MassIntertiaScale                                  // 0x120(0x4)
	bool                                               CanBeTethered                                      // 0x124(0x1)
	bool                                               IsMassInertiaScalingEnabled                        // 0x125(0x1)
};


// Size 0x8
class TetherInWorldSpaceComponent: public ActorComponent
{
public:
};


}