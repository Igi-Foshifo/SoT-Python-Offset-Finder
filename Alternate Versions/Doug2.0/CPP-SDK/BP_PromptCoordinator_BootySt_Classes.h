namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x2e8
class BP_PromptCoordinator_BootyStorage_C: public BP_PromptCoordinator_Base_C
{
public:
	Struct PointerToUberGraphFrame                     UberGraphFrame                                     // 0x118(0x8)
	bool                                               ShowLootPrompt                                     // 0x120(0x1)
	bool                                               ShowMermaidPrompt                                  // 0x121(0x1)
	bool                                               HasUsedStatue                                      // 0x122(0x1)
	bool                                               HasRetrievedLoot                                   // 0x123(0x1)
	Struct PrioritisedPromptWithHandle                 MermaidPrompt                                      // 0x128(0x68)
	Struct PrioritisedPromptWithHandle                 LootPrompt                                         // 0x190(0x68)
	Struct ObjectMessagingHandle                       CrewStorageChangedHandle                           // 0x1f8(0x48)
	Struct ObjectMessagingHandle                       CrewStorageFullHandle                              // 0x240(0x48)
	Struct ObjectMessagingHandle                       ItemsRetrievedHandle                               // 0x288(0x48)
	Struct ObjectMessagingHandle                       RetrieveActorHandle                                // 0x2d0(0x48)
	Struct ObjectMessagingHandle                       WieldedEventHandle                                 // 0x318(0x48)
	class                                              PromptKey                                          // 0x360(0x8)
	Class WieldableItem*                               CurrentlyWieldedItem                               // 0x368(0x8)
	Struct ObjectMessagingHandle                       StowedEventHandle                                  // 0x370(0x48)
	Struct ObjectMessagingHandle                       RetrieveActorDespawnHandle                         // 0x3b8(0x48)
};


}