namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x119
class BP_Wheel_C: public Wheel
{
public:
	Struct PointerToUberGraphFrame                     UberGraphFrame                                     // 0x9a8(0x8)
	Class SkeletalMeshComponent*                       Wheel                                              // 0x9b0(0x8)
	Class SphereComponent*                             ProjectileCollision                                // 0x9b8(0x8)
	Class InteractableComponent*                       Interactable                                       // 0x9c0(0x8)
	Struct ObjectMessagingHandle                       Wheel Centered                                     // 0x9c8(0x48)
	Struct ObjectMessagingHandle                       Wheel Movement Started                             // 0xa10(0x48)
	Struct ObjectMessagingHandle                       Wheel Movement Stopped                             // 0xa58(0x48)
	Struct WwiseEmitter                                AudioEmitter                                       // 0xaa0(0x20)
	bool                                               ShipWheelTurning                                   // 0xac0(0x1)
};


}