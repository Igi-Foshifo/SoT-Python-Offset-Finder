// Generated by DougTheDruid#2784 on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x90 (Full Size[0x1a8] - InheritedSize[0x118]
class BP_Prompt_EmissaryActivated_C: public BP_PromptCoordinator_Base_C
{
public:
	Struct PointerToUberGraphFrame                               UberGraphFrame;                                    // 0x118(0x8)
	char                                                         pad0x132_L3MY4[0x132];                             // 0x120(0x132)
	Struct ObjectMessagingHandle                                 Handle_EmissaryCompanyChangedEvent;                // 0x120(0x48)
	struct FName                                                 CompanyName;                                       // 0x168(0x8)
	struct FName                                                 ExpectedCompanyName;                               // 0x170(0x8)
	TArray<struct Prompts>                                       Prompts;                                           // 0x178(0x10)
	bool                                                         PromptSurfacedThisSession;                         // 0x188(0x1)
	char                                                         pad0x7_KKRCP[0x7];                                 // 0x189(0x7)
	class                                                        PromptAccessKey;                                   // 0x190(0x8)
	int                                                          PromptIndex;                                       // 0x198(0x4)
	int                                                          NumberOfPrompts;                                   // 0x19c(0x4)
	float                                                        InitialDelay;                                      // 0x1a0(0x4)
	float                                                        ShowPromptDuration;                                // 0x1a4(0x4)
};


}