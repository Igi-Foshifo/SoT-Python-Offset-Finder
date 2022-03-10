namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x20
class BP_PromptCoordinator_Base_C: public BasePromptCoordinator
{
public:
	Struct PointerToUberGraphFrame                     UberGraphFrame                                     // 0xf8(0x8)
	bool                                               IsCompleted                                        // 0x100(0x1)
};


// Size 0xd1
class BP_PromptCoordinator_DiceEmote_C: public BP_PromptCoordinator_Base_C
{
public:
	Struct PointerToUberGraphFrame                     UberGraphFrame                                     // 0x118(0x8)
	class                                              DiceEmotePromptAccessKey                           // 0x120(0x8)
	Struct ObjectMessagingHandle                       EmoteStartedEvent                                  // 0x128(0x48)
	Struct PrioritisedPromptWithHandle                 Prompt                                             // 0x170(0x68)
	bool                                               StartedDiceEmote                                   // 0x1d8(0x1)
	Struct ObjectMessagingDispatcherHandle             CharacterDispatcher                                // 0x1e0(0x8)
	bool                                               HasShown                                           // 0x1e8(0x1)
};


}