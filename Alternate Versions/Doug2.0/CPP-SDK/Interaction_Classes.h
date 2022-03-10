namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x50
class InteractableComponent: public ActorComponent
{
public:
	struct FName                                       FeatureFlag                                        // 0xd0(0x8)
	Struct Vector                                      BoxExtent                                          // 0xd8(0xc)
	Struct Vector                                      BoxOrigin                                          // 0xe4(0xc)
	Struct Rotator                                     BoxRotation                                        // 0xf0(0xc)
	bool                                               MayBeGrouped                                       // 0xfc(0x1)
	bool                                               ProxyForActorInteraction                           // 0xfc(0x1)
	bool                                               RequiresFacingFront                                // 0xfc(0x1)
	bool                                               RequiresNotAirborne                                // 0xfc(0x1)
	bool                                               RequiresNotSwimming                                // 0xfc(0x1)
	float                                              InteractionRadius                                  // 0x100(0x4)
	Class InteractableArea*                            InteractableArea                                   // 0x108(0x8)
	byte                                               CurrentInteractionState                            // 0x110(0x1)
};


// Size 0x0
class InteractionValidatorSetterInterface: public Interface
{
public:
};


// Size 0xc0
class CharacterInteractionComponent: public BoxComponent
{
public:
	Class InteractableArea*                            CurrentOptimalInteractable                         // 0x5e0(0x8)
};


// Size 0x0
class GroupedInteractableAreaComponent: public ActorComponent
{
public:
};


// Size 0x38
class InteractableArea: public Object
{
public:
	Struct BoxSphereBounds                             Bounds                                             // 0x28(0x1c)
	struct FName                                       Name                                               // 0x44(0x8)
	Class Object*                                      Interactable                                       // 0x50(0x8)
	Class Actor*                                       Parent                                             // 0x58(0x8)
};


// Size 0x0
class InteractableInterface: public Interface
{
public:
};


// Size 0x0
class InteractableBlueprintFunctionLibrary: public BlueprintFunctionLibrary
{
public:
};


// Size 0x0
class InteractableIdentifierInterface: public Interface
{
public:
};


// Size 0x0
class InteractableServiceInterface: public Interface
{
public:
};


// Size 0x48
class InteractableService: public Object
{
public:
	TArray<class InteractableAreas*>                   InteractableAreas                                  // 0x38(0x10)
};


// Size 0x0
class InteractionValidatorOwnerInterface: public Interface
{
public:
};


// Size 0x0
class InteractorInterface: public Interface
{
public:
};


// Size 0xb0
class MockActorWithCharacterInteractionComponent: public Character
{
public:
	Class CharacterInteractionComponent*               CharacterInteractionComponent                      // 0x5e8(0x8)
};


// Size 0x18
class MockInteractableService: public Object
{
public:
};


// Size 0x30
class MockInteractorActor: public Actor
{
public:
	Class Object*                                      FocusedInteractable                                // 0x3d8(0x8)
	Class Object*                                      InteractedObject                                   // 0x3e0(0x8)
	class                                              InteractNotificationType                           // 0x3e8(0x8)
	TArray<Class InteractNotificationType>             ValidInteractNotificationIds                       // 0x3f0(0x10)
};


// Size 0x0
class SelfInteractionInterface: public Interface
{
public:
};


}