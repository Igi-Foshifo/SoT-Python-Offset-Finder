namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x164
class BP_Prompt_UseAMermaid_C: public BP_PromptCoordinator_Base_C
{
public:
	Struct PointerToUberGraphFrame                     UberGraphFrame                                     // 0x118(0x8)
	bool                                               State_IsThereAMermaid                              // 0x120(0x1)
	Struct ObjectMessagingHandle                       Handle_OnMermaidActivatedLocally                   // 0x128(0x48)
	Struct ObjectMessagingHandle                       Handle_OnMermaidDeactivatedLocally                 // 0x170(0x48)
	Struct ObjectMessagingHandle                       Handle_OnMermaidUsed                               // 0x1b8(0x48)
	bool                                               State_MermaidUsed                                  // 0x200(0x1)
	Struct PrioritisedPromptWithHandle                 Prompt_UseMermaid                                  // 0x208(0x68)
	bool                                               State_ShowPrompt                                   // 0x270(0x1)
	float                                              PromptDisplayDuration                              // 0x274(0x4)
	float                                              PromptHideDuration                                 // 0x278(0x4)
};


}