namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x38
class BP_PromptActorBase_C: public Actor
{
public:
	Struct PointerToUberGraphFrame                     UberGraphFrame                                     // 0x3d0(0x8)
	Class SceneComponent*                              DefaultSceneRoot                                   // 0x3d8(0x8)
	bool                                               IsCompleted                                        // 0x3e0(0x1)
	TArray<class PromptCoordinators*>                  PromptCoordinators                                 // 0x3e8(0x10)
};


}