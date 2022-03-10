namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0xb8
class CompanyTutorialVoyageProgress: public Object
{
public:
	class                                              AssignedVoyageProposalDescClass                    // 0x28(0x8)
	class                                              AssignedTaleRankDescClass                          // 0x30(0x8)
};


// Size 0x58
class ContextualTutorialComponent: public ActorComponent
{
public:
	TArray<Struct TutorialStarterType>                 ContextualTutorialClasses                          // 0xc8(0x10)
	TArray<class SpawnedPromptActors*>                 SpawnedPromptActors                                // 0xd8(0x10)
};


// Size 0x8
class HasTutorialStarterBegunNPCDialogConditional: public NPCDialogConditional
{
public:
	byte                                               TutorialStarterType                                // 0x30(0x1)
};


// Size 0x0
class OnboardingStatusInterface: public Interface
{
public:
};


// Size 0x8
class Tutorial2019Component: public ActorComponent
{
public:
	bool                                               IsEnabledByServer                                  // 0xc8(0x1)
	bool                                               IsInTutorialTale                                   // 0xc9(0x1)
};


// Size 0x8
class Tutorial2019ContextualDelegatingComponent: public Tutorial2019Component
{
public:
	Class ContextualTutorialComponent*                 ContextualTutorialComponent                        // 0xd0(0x8)
};


// Size 0x0
class Tutorial2019FunctionLibrary: public BlueprintFunctionLibrary
{
public:
};


// Size 0x0
class TutorialHelpersBlueprintLibrary: public BlueprintFunctionLibrary
{
public:
};


// Size 0x0
class TutorialManagerInterface: public Interface
{
public:
};


// Size 0x50
class TutorialManager: public ActorComponent
{
public:
	class                                              CompanyOnboardingStarterClass                      // 0xd0(0x8)
	class                                              MaidenVoyageStarterClass                           // 0xd8(0x8)
	class                                              BeachNPCSpawnFlowStarterClass                      // 0xe0(0x8)
	class                                              SelectedTutorialClass                              // 0xe8(0x8)
	Class TutorialStarter*                             SelectedTutorial                                   // 0xf0(0x8)
	byte                                               TutorialType                                       // 0xf8(0x1)
	bool                                               HasEverPlayedFirstPersonAnimation                  // 0xf9(0x1)
	bool                                               HasStartedTutorial                                 // 0xfa(0x1)
	bool                                               HasReceivedEntitlements                            // 0xfb(0x1)
	bool                                               HasPosessedPawn                                    // 0xfc(0x1)
};


// Size 0x38
class TutorialStarter: public Object
{
public:
	Class AthenaPlayerController*                      AthenaPlayerController                             // 0x28(0x8)
	bool                                               ShouldPlayIntroAnimatic                            // 0x30(0x1)
	bool                                               ShouldDisableAllIntroBehaviour                     // 0x31(0x1)
	Struct FirstPersonAnimaticSettings                 IntroAnimationSettings                             // 0x34(0x2c)
};


// Size 0x0
class BeachNPCSpawnFlowStarter: public TutorialStarter
{
public:
};


// Size 0x0
class CompanyOnboardingStarter: public TutorialStarter
{
public:
};


// Size 0x0
class MaidenVoyageStarter: public TutorialStarter
{
public:
};


}