namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x17d
class BP_Prompt_ScuttleShip_C: public BP_PromptCoordinator_Base_C
{
public:
	Struct PointerToUberGraphFrame                     UberGraphFrame                                     // 0x118(0x8)
	Struct ObjectMessagingHandle                       Handle_CharacterDeadEvent                          // 0x120(0x48)
	Struct ObjectMessagingHandle                       Handle_WaitingToSpawnEndedEvent                    // 0x168(0x48)
	Struct PrioritisedPromptWithHandle                 Prompt_ArrivedOnFerry                              // 0x1b0(0x68)
	Struct PrioritisedPromptWithHandle                 Prompt_SuggestScuttling                            // 0x218(0x68)
	float                                              SpawnKillTimeThreshold                             // 0x280(0x4)
	int                                                RepeatDeathThreshold                               // 0x284(0x4)
	Struct GameTime                                    TimeOfLastPvPDeath                                 // 0x288(0x8)
	int                                                NumRecentDeaths                                    // 0x290(0x4)
	bool                                               DiedEnough                                         // 0x294(0x1)
};


}