// Generated by DougTheDruid#2784 on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x510 (Full Size[0x628] - InheritedSize[0x118]
class BP_Prompt_MaidenVoyage_FishingRodTutorial_C: public BP_PromptCoordinator_Base_C
{
public:
	Struct PointerToUberGraphFrame                               UberGraphFrame;                                    // 0x118(0x8)
	char                                                         pad0x132_HV9XM[0x132];                             // 0x120(0x132)
	bool                                                         State_RodWielded;                                  // 0x120(0x1)
	bool                                                         State_FishBattling;                                // 0x121(0x1)
	bool                                                         State_CastRod;                                     // 0x122(0x1)
	bool                                                         State_CaughtFish;                                  // 0x123(0x1)
	bool                                                         State_DockWithCannon;                              // 0x124(0x1)
	bool                                                         State_BattleFish;                                  // 0x125(0x1)
	bool                                                         State_FishTired;                                   // 0x126(0x1)
	bool                                                         State_ReelingWhileBattling;                        // 0x127(0x1)
	Struct PrioritisedPromptWithHandle                           Prompt_CastRod;                                    // 0x128(0x68)
	Struct PrioritisedPromptWithHandle                           Prompt_WaitForBite;                                // 0x190(0x68)
	Struct PrioritisedPromptWithHandle                           Prompt_BattleFish;                                 // 0x1f8(0x68)
	Struct PrioritisedPromptWithHandle                           Prompt_ReelFish;                                   // 0x260(0x68)
	Struct ObjectMessagingHandle                                 Handle_WieldRod;                                   // 0x2c8(0x48)
	Struct ObjectMessagingHandle                                 Handle_CastRod;                                    // 0x310(0x48)
	Struct ObjectMessagingHandle                                 Handle_FishBite;                                   // 0x358(0x48)
	Struct ObjectMessagingHandle                                 Handle_FishCaught;                                 // 0x3a0(0x48)
	Struct ObjectMessagingHandle                                 Handle_BattleFish;                                 // 0x3e8(0x48)
	class                                                        RequiredInput;                                     // 0x430(0x8)
	class                                                        WieldedItemType;                                   // 0x438(0x8)
	class                                                        Sword_WieldedItemType;                             // 0x440(0x8)
	Struct PrioritisedPromptWithHandle                           Prompt_SnapLine;                                   // 0x448(0x68)
	Struct ObjectMessagingHandle                                 Handle_ReelingWhileBattling;                       // 0x4b0(0x48)
	Struct ObjectMessagingHandle                                 Handle_StowRod;                                    // 0x4f8(0x48)
	bool                                                         FishStartedBattling;                               // 0x540(0x1)
	char                                                         pad0x7_VEMSW[0x7];                                 // 0x541(0x7)
	Struct ObjectMessagingHandle                                 Handle_FishEscaped;                                // 0x548(0x48)
	bool                                                         State_Completed;                                   // 0x590(0x1)
	char                                                         pad0x7_YOAW6[0x7];                                 // 0x591(0x7)
	Struct ObjectMessagingHandle                                 Handle_PlayerDeath;                                // 0x598(0x48)
	Struct ObjectMessagingHandle                                 Handle_DockToObject;                               // 0x5e0(0x48)
};


}