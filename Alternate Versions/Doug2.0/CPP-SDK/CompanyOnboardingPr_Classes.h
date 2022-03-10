namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x21
class BP_CT_VoyageProgress_C: public CompanyTutorialVoyageProgress
{
public:
	Struct PointerToUberGraphFrame                     UberGraphFrame                                     // 0xe0(0x8)
	Class AthenaPlayerController*                      AthenaPlayerController                             // 0xe8(0x8)
	byte                                               VoyageState                                        // 0xf0(0x1)
	class                                              MaximumRank                                        // 0xf8(0x8)
	bool                                               NoLongerPurchaseable                               // 0x100(0x1)
};


// Size 0x48
class BP_CT_TutorialProgress_C: public Object
{
public:
	Struct PointerToUberGraphFrame                     UberGraphFrame                                     // 0x28(0x8)
	Class AthenaPlayerController*                      AthenaPlayerController                             // 0x30(0x8)
	TArray<class TutorialVoyageProgressTrackers*>      TutorialVoyageProgressTrackers                     // 0x38(0x10)
	BlueprintGeneratedClass BP_CT_VoyageProgress_C*    XMarksTutorialProgress                             // 0x48(0x8)
	BlueprintGeneratedClass BP_CT_VoyageProgress_C*    RiddleTutorialProgress                             // 0x50(0x8)
	BlueprintGeneratedClass BP_CT_VoyageProgress_C*    FaunaTutorialProgress                              // 0x58(0x8)
	BlueprintGeneratedClass BP_CT_VoyageProgress_C*    CargoTutorialProgress                              // 0x60(0x8)
	BlueprintGeneratedClass BP_CT_VoyageProgress_C*    BootyTutorialProgress                              // 0x68(0x8)
};


// Size 0xda
class BP_Prompt_VisitCompanyShop_C: public BP_PromptCoordinator_Base_C
{
public:
	Struct PointerToUberGraphFrame                     UberGraphFrame                                     // 0x118(0x8)
	Struct ObjectMessagingHandle                       Handle_TreasureChestSoldPredictedEvent             // 0x120(0x48)
	Struct PrioritisedPromptWithHandle                 Prompt_VisitCompanyShop                            // 0x168(0x68)
	class                                              Company                                            // 0x1d0(0x8)
	class                                              AccessKey                                          // 0x1d8(0x8)
	class                                              CompanyRankDesc                                    // 0x1e0(0x8)
	float                                              PromptDelayUntilDisplay                            // 0x1e8(0x4)
	float                                              PromptDisplayDuration                              // 0x1ec(0x4)
	bool                                               IsCorrectCompany                                   // 0x1f0(0x1)
	bool                                               PromptInfoSet                                      // 0x1f1(0x1)
};


// Size 0x140
class BP_Prompt_VisitSeapost_C: public BP_PromptCoordinator_Base_C
{
public:
	Struct PointerToUberGraphFrame                     UberGraphFrame                                     // 0x118(0x8)
	Struct ObjectMessagingHandle                       Handle_EventObjectWielded                          // 0x120(0x48)
	Struct PrioritisedPromptWithHandle                 Prompt_WieledFishOrMeat                            // 0x168(0x68)
	Struct PrioritisedPromptWithHandle                 Prompt_VisitSeapost                                // 0x1d0(0x68)
	bool                                               IsWieldingMeatOrFish                               // 0x238(0x1)
	float                                              DisplayDuration                                    // 0x23c(0x4)
	float                                              DelayUntilNextPrompt                               // 0x240(0x4)
	TArray<Class Prompt_WieledFishOrMeat>              IgnoredFood                                        // 0x248(0x10)
};


}