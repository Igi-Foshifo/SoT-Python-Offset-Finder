namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0xd0
class BasePromptCoordinator: public Object
{
public:
	Class AthenaPlayerController*                      PlayerController                                   // 0x28(0x8)
	Class PrioritisedPromptsManager*                   PrioritisedPromptsManager                          // 0x40(0x8)
	Class Character*                                   CharacterWithRegisteredEvents                      // 0x48(0x8)
};


// Size 0x18
class GetPromptsLocalService: public BlueprintAsyncActionBase
{
public:
	Class Object*                                      WorldContextObject                                 // 0x38(0x8)
};


// Size 0x0
class PrioritisedPromptsManagerInterface: public Interface
{
public:
};


// Size 0x50
class PrioritisedPromptsManager: public Object
{
public:
	TArray<Struct Key>                                 AllPrompts                                         // 0x30(0x10)
	Class PlayerController*                            PlayerController                                   // 0x40(0x8)
};


// Size 0x10
class PromptCounterAccessKey: public Object
{
public:
	Struct FString                                     Key                                                // 0x28(0x10)
};


// Size 0x0
class PromptsLocalServiceInterface: public Interface
{
public:
};


// Size 0x70
class PromptsLocalService: public Object
{
public:
};


}