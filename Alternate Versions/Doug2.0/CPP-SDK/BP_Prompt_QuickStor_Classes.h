namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x130
class BP_Prompt_QuickStorageTransfer_C: public BP_PromptCoordinator_Base_C
{
public:
	Struct PointerToUberGraphFrame                     UberGraphFrame                                     // 0x118(0x8)
	bool                                               State_Complete                                     // 0x120(0x1)
	bool                                               State_ShowPrompt                                   // 0x121(0x1)
	Struct PrioritisedPromptWithHandle                 Prompt_QuickStorageTransfer_Take                   // 0x128(0x68)
	Struct PrioritisedPromptWithHandle                 Prompt_QuickStorageTransfer_Add                    // 0x190(0x68)
	bool                                               State_ShowAdd                                      // 0x1f8(0x1)
	Struct ObjectMessagingHandle                       Handle_ObjectWielded                               // 0x200(0x48)
};


}