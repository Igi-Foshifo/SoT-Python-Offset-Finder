namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x31
class BP_PromptActor_TavernBoard_C: public BP_PromptActorBase_C
{
public:
	Struct PointerToUberGraphFrame                     UberGraphFrame                                     // 0x408(0x8)
	BlueprintGeneratedClass BP_Prompt_TavernBoard_C*   PromptCoordinator                                  // 0x410(0x8)
	TArray<Struct OnApproachedTavernBoard>             TavernBoardLocations                               // 0x418(0x10)
	TArray<class TavernBoardPromptCoordinators*>       TavernBoardPromptCoordinators                      // 0x428(0x10)
	bool                                               HasPromptShown                                     // 0x438(0x1)
};


}