// Generated by DougTheDruid#2784 on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x118
class BP_Prompt_RepairShip_C: public BP_PromptCoordinator_Base_C
{
public:
	Struct PointerToUberGraphFrame                               UberGraphFrame;                                    // 0x118(0x8)
	bool                                                         State_ShipDamaged;                                 // 0x120(0x1)
	Struct ObjectMessagingHandle                                 Handle_OnShipDamaged;                              // 0x128(0x48)
	bool                                                         State_Complete;                                    // 0x170(0x1)
	Struct PrioritisedPromptWithHandle                           Prompt_RepairShip;                                 // 0x178(0x68)
	Struct ObjectMessagingHandle                                 Handle_CurrentShipChanged;                         // 0x1e0(0x48)
	Class Ship*                                                  CurrentShip;                                       // 0x228(0x8)
};


}