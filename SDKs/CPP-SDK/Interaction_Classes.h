// Generated by DougTheDruid#2784 on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x60 (Full Size[0x128] - InheritedSize[0xc8]
class InteractableComponent: public ActorComponent
{
public:
	char                                                         pad0x8_9PM93[0x8];                                 // 0xc8(0x8)
	struct FName                                                 FeatureFlag;                                       // 0xd0(0x8)
	Struct Vector                                                BoxExtent;                                         // 0xd8(0xc)
	Struct Vector                                                BoxOrigin;                                         // 0xe4(0xc)
	Struct Rotator                                               BoxRotation;                                       // 0xf0(0xc)
	bool                                                         MayBeGrouped;                                      // 0xfc(0x1)
	bool                                                         ProxyForActorInteraction;                          // 0xfc(0x1)
	bool                                                         RequiresFacingFront;                               // 0xfc(0x1)
	bool                                                         RequiresNotAirborne;                               // 0xfc(0x1)
	bool                                                         RequiresNotSwimming;                               // 0xfc(0x1)
	char                                                         pad0x3_0EPGL[0x3];                                 // 0xfd(0x3)
	float                                                        InteractionRadius;                                 // 0x100(0x4)
	char                                                         pad0x4_KAHH4[0x4];                                 // 0x104(0x4)
	TArray<class InteractionPrerequisiteBase*>                   InteractionPrerequisites;                          // 0x108(0x10)
	Class InteractableArea*                                      InteractableArea;                                  // 0x118(0x8)
	byte                                                         CurrentInteractionState;                           // 0x120(0x1)
	char                                                         pad0x9_AM54M[0x9];                                 // 0x11f(0x9)
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class InteractionValidatorSetterInterface: public Interface
{
public:
};


// Size 0xc0 (Full Size[0x6b0] - InheritedSize[0x5f0]
class CharacterInteractionComponent: public BoxComponent
{
public:
	Class InteractableArea*                                      CurrentOptimalInteractable;                        // 0x5f0(0x8)
	char                                                         pad0xc8_SMO3H[0xc8];                               // 0x5f6(0xc8)
};


// Size 0x0 (Full Size[0xc8] - InheritedSize[0xc8]
class GroupedInteractableAreaComponent: public ActorComponent
{
public:
};


// Size 0x38 (Full Size[0x60] - InheritedSize[0x28]
class InteractableArea: public Object
{
public:
	Struct BoxSphereBounds                                       Bounds;                                            // 0x28(0x1c)
	struct FName                                                 Name;                                              // 0x44(0x8)
	char                                                         pad0x4_DMWQE[0x4];                                 // 0x4c(0x4)
	Class Object*                                                Interactable;                                      // 0x50(0x8)
	Class Actor*                                                 Parent;                                            // 0x58(0x8)
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class InteractableInterface: public Interface
{
public:
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class InteractableBlueprintFunctionLibrary: public BlueprintFunctionLibrary
{
public:
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class InteractableIdentifierInterface: public Interface
{
public:
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class InteractableServiceInterface: public Interface
{
public:
};


// Size 0x48 (Full Size[0x70] - InheritedSize[0x28]
class InteractableService: public Object
{
public:
	char                                                         pad0x10_PT5FI[0x10];                               // 0x28(0x10)
	TArray<class InteractableArea*>                              InteractableAreas;                                 // 0x38(0x10)
	char                                                         pad0x48_M6NO5[0x48];                               // 0x46(0x48)
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class InteractionPreventionInterface: public Interface
{
public:
};


// Size 0x18 (Full Size[0xe0] - InheritedSize[0xc8]
class InteractionPreventionComponent: public ActorComponent
{
public:
	char                                                         pad0x8_TRTOV[0x8];                                 // 0xc8(0x8)
	TArray<class Actor*>                                         ActorsToPreventInteractingWith;                    // 0xd0(0x10)
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class InteractionValidatorOwnerInterface: public Interface
{
public:
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class InteractorInterface: public Interface
{
public:
};


// Size 0xb0 (Full Size[0x690] - InheritedSize[0x5e0]
class MockActorWithCharacterInteractionComponent: public Character
{
public:
	char                                                         pad0x8_XZLR7[0x8];                                 // 0x5e0(0x8)
	Class CharacterInteractionComponent*                         CharacterInteractionComponent;                     // 0x5e8(0x8)
	char                                                         pad0xb0_WK7TT[0xb0];                               // 0x5ee(0xb0)
};


// Size 0x18 (Full Size[0x40] - InheritedSize[0x28]
class MockInteractableService: public Object
{
public:
};


// Size 0x30 (Full Size[0x3f8] - InheritedSize[0x3c8]
class MockInteractorActor: public Actor
{
public:
	char                                                         pad0x8_KO4SX[0x8];                                 // 0x3c8(0x8)
	Class Object*                                                FocusedInteractable;                               // 0x3d0(0x8)
	Class Object*                                                InteractedObject;                                  // 0x3d8(0x8)
	class                                                        InteractNotificationType;                          // 0x3e0(0x8)
	TArray<class Class*>                                         ValidInteractNotificationIds;                      // 0x3e8(0x10)
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class SelfInteractionInterface: public Interface
{
public:
};


}