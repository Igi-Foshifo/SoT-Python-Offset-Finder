// Generated by DougTheDruid#2784 on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x38 (Full Size[0x400] - InheritedSize[0x3c8]
class BP_PromptActorBase_C: public Actor
{
public:
	Struct PointerToUberGraphFrame                               UberGraphFrame;                                    // 0x3c8(0x8)
	Class SceneComponent*                                        DefaultSceneRoot;                                  // 0x3d0(0x8)
	bool                                                         IsCompleted;                                       // 0x3d8(0x1)
	char                                                         pad0x7_DRJI3[0x7];                                 // 0x3d9(0x7)
	TArray<class BP_PromptCoordinator_Base_C*>                   PromptCoordinators;                                // 0x3e0(0x10)
	char                                                         pad0x30_JCQ06[0x30];                               // 0x3ee(0x30)
};


}