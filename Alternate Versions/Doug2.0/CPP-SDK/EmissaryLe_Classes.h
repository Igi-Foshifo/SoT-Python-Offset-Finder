namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x98
class BP_Prompt_EmissaryLevelRankChange_C: public BP_PromptCoordinator_Base_C
{
public:
	Struct PointerToUberGraphFrame                     UberGraphFrame                                     // 0x118(0x8)
	Struct ObjectMessagingHandle                       Handle_EmissaryRankChange                          // 0x120(0x48)
	struct FName                                       CompanyName                                        // 0x168(0x8)
	int                                                NewLevel                                           // 0x170(0x4)
	bool                                               SurfacedThisSession                                // 0x174(0x1)
	struct FName                                       ExpectedCompanyName                                // 0x178(0x8)
	int                                                ExpectedLevel                                      // 0x180(0x4)
	TArray<Struct Prompts>                             Prompts                                            // 0x188(0x10)
	class                                              PromptAccessKey                                    // 0x198(0x8)
	int                                                PromptIndex                                        // 0x1a0(0x4)
	int                                                NumberOfPrompts                                    // 0x1a4(0x4)
	float                                              InitialDelay                                       // 0x1a8(0x4)
	float                                              ShowPromptDuration                                 // 0x1ac(0x4)
};


}