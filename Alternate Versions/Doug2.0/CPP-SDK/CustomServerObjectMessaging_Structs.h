namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x18
class CustomServerEvent: public None
{
public:
	struct FName                                       EventID                                            // 0x8(0x8)
	Struct DateTime                                    ServerTimeUTC                                      // 0x10(0x8)
};


// Size 0x20
class EntityCustomServerEvent: public None
{
public:
	int                                                EntityNetId                                        // 0x18(0x4)
};


// Size 0x30
class OnCannonBallHitShipCustomServerEvent: public None
{
public:
	Struct FString                                     CannonBallType                                     // 0x18(0x10)
	int                                                ShipId                                             // 0x28(0x4)
};


// Size 0x18
class GlobalCustomServerEvent: public None
{
public:
};


// Size 0x20
class PlayerCharacterEnteredShipCustomServerEvent: public None
{
public:
	int                                                UserId                                             // 0x18(0x4)
	int                                                ShipId                                             // 0x1c(0x4)
};


// Size 0x28
class WatercraftSpawnCustomServerEvent: public None
{
public:
	Struct FString                                     WatercraftId                                       // 0x18(0x10)
};


// Size 0x28
class WatercraftDespawnCustomServerEvent: public None
{
public:
	Struct FString                                     WatercraftId                                       // 0x18(0x10)
};


// Size 0x18
class TreasureSpawnedCustomServerEvent: public None
{
public:
};


// Size 0x68
class TreasureSoldCustomServerEvent: public None
{
public:
	Struct FString                                     UserId                                             // 0x18(0x10)
	Struct FString                                     CrewId                                             // 0x28(0x10)
	Struct FString                                     TreasureType                                       // 0x38(0x10)
	Struct FString                                     VendorId                                           // 0x48(0x10)
	Struct FString                                     CompanyId                                          // 0x58(0x10)
};


// Size 0x28
class TreasurePickedUpCustomServerEvent: public None
{
public:
	Struct FString                                     UserId                                             // 0x18(0x10)
};


// Size 0x38
class TreasureFoundCustomServerEvent: public None
{
public:
	Struct FString                                     UserId                                             // 0x18(0x10)
	Struct FString                                     TreasureType                                       // 0x28(0x10)
};


// Size 0x48
class TreasureDroppedCustomServerEvent: public None
{
public:
	Struct FString                                     UserId                                             // 0x18(0x10)
	Struct FString                                     TreasureType                                       // 0x28(0x10)
	Struct Vector                                      Position                                           // 0x38(0xc)
};


// Size 0x28
class ShovelCustomServerEvent: public None
{
public:
	Struct FString                                     UserId                                             // 0x18(0x10)
};


// Size 0x38
class ShipSpawnedCustomServerEvent: public None
{
public:
	Struct FString                                     ShipId                                             // 0x18(0x10)
	Struct FString                                     ShipType                                           // 0x28(0x10)
};


// Size 0x38
class ShipRepairCustomServerEvent: public None
{
public:
	Struct FString                                     UserId                                             // 0x18(0x10)
	Struct FString                                     ShipId                                             // 0x28(0x10)
};


// Size 0x28
class ShipOnFireEndCustomServerEvent: public None
{
public:
	Struct FString                                     ShipId                                             // 0x18(0x10)
};


// Size 0x38
class ShipMastCollapseStateCustomServerEvent: public None
{
public:
	Struct FString                                     ShipId                                             // 0x18(0x10)
	Struct FString                                     MastId                                             // 0x28(0x10)
};


// Size 0x28
class ShipDestroyedCustomServerEvent: public None
{
public:
	Struct FString                                     ShipId                                             // 0x18(0x10)
};


// Size 0x28
class ShipDamagedCustomServerEvent: public None
{
public:
	Struct FString                                     ShipId                                             // 0x18(0x10)
};


// Size 0x28
class ProjectileWeaponFiredCustomServerEvent: public None
{
public:
	Struct FString                                     UserId                                             // 0x18(0x10)
};


// Size 0x38
class ProjectileHitCustomServerEvent: public None
{
public:
	Struct FString                                     ProjectileType                                     // 0x18(0x10)
	Struct FString                                     RecipientId                                        // 0x28(0x10)
};


// Size 0x38
class PlayerStatusEffectActivatedCustomServerEvent: public None
{
public:
	Struct FString                                     UserId                                             // 0x18(0x10)
	Struct FString                                     Effect                                             // 0x28(0x10)
};


// Size 0x38
class PlayerStatusEffectDeactivatedCustomServerEvent: public None
{
public:
	Struct FString                                     UserId                                             // 0x18(0x10)
	Struct FString                                     Effect                                             // 0x28(0x10)
};


// Size 0x28
class PlayerSpawnCustomServerEvent: public None
{
public:
	Struct FString                                     UserId                                             // 0x18(0x10)
};


// Size 0x38
class PlayerSetFootLocationCustomServerEvent: public None
{
public:
	Struct FString                                     UserId                                             // 0x18(0x10)
	Struct FString                                     Location                                           // 0x28(0x10)
};


// Size 0x28
class PlayerRevivalCustomServerEvent: public None
{
public:
	Struct FString                                     UserId                                             // 0x18(0x10)
};


// Size 0x18
class PlayerRequiresMermaidCustomServerEvent: public None
{
public:
};


// Size 0x28
class PlayerRadialChatCustomServerEvent: public None
{
public:
	Struct FString                                     UserId                                             // 0x18(0x10)
};


// Size 0x28
class PlayerObjectUsageStartCustomServerEvent: public None
{
public:
	Struct FString                                     UserId                                             // 0x18(0x10)
};


// Size 0x18
class PlayerLeftGhostShipCustomServerEvent: public None
{
public:
};


// Size 0x28
class PlayerKillAICustomServerEvent: public None
{
public:
	Struct FString                                     UserId                                             // 0x18(0x10)
};


// Size 0x28
class PlayerItemUsageEndCustomServerEvent: public None
{
public:
	Struct FString                                     UserId                                             // 0x18(0x10)
};


// Size 0x28
class PlayerItemRetrievalFromContainerCustomServerEvent: public None
{
public:
	Struct FString                                     UserId                                             // 0x18(0x10)
};


// Size 0x28
class PlayerItemEquipCustomServerEvent: public None
{
public:
	Struct FString                                     UserId                                             // 0x18(0x10)
};


// Size 0x28
class PlayerItemAddToContainerCustomServerEvent: public None
{
public:
	Struct FString                                     UserId                                             // 0x18(0x10)
};


// Size 0x28
class PlayerInReviveableStateCustomServerEvent: public None
{
public:
	Struct FString                                     UserId                                             // 0x18(0x10)
};


// Size 0x28
class PlayerHeartbeatCustomServerEvent: public None
{
public:
	Struct FString                                     UserId                                             // 0x18(0x10)
};


// Size 0x28
class PlayerHealthChangeCustomServerEvent: public None
{
public:
	Struct FString                                     UserId                                             // 0x18(0x10)
};


// Size 0x28
class PlayerGameFishingCustomServerEvent: public None
{
public:
	Struct FString                                     UserId                                             // 0x18(0x10)
};


// Size 0x18
class PlayerEncounterStartCustomServerEvent: public None
{
public:
};


// Size 0x18
class PlayerEncounterEndCustomServerEvent: public None
{
public:
};


// Size 0x38
class PlayerEmoteCustomServerEvent: public None
{
public:
	Struct FString                                     UserId                                             // 0x18(0x10)
	Struct FString                                     Emote                                              // 0x28(0x10)
};


// Size 0x28
class PlayerDeathCustomServerEvent: public None
{
public:
	Struct FString                                     UserId                                             // 0x18(0x10)
};


// Size 0x38
class PlayerChangedShipLoadoutCustomServerEvent: public None
{
public:
	Struct FString                                     UserId                                             // 0x18(0x10)
	Struct FString                                     ShipId                                             // 0x28(0x10)
};


// Size 0x28
class PlayerChangedLoadoutCustomServerEvent: public None
{
public:
	Struct FString                                     UserId                                             // 0x18(0x10)
};


// Size 0x38
class PlayerCapstanUsageStartCustomServerEvent: public None
{
public:
	Struct FString                                     UserId                                             // 0x18(0x10)
	Struct FString                                     ShipId                                             // 0x28(0x10)
};


// Size 0x38
class PlayerCapstanUsageEndCustomServerEvent: public None
{
public:
	Struct FString                                     UserId                                             // 0x18(0x10)
	Struct FString                                     ShipId                                             // 0x28(0x10)
};


// Size 0x28
class PlayerBucketScoopCustomServerEvent: public None
{
public:
	Struct FString                                     UserId                                             // 0x18(0x10)
};


// Size 0x28
class PlayerBucketEmptyCustomServerEvent: public None
{
public:
	Struct FString                                     UserId                                             // 0x18(0x10)
};


// Size 0x38
class PlayerActionCannonCustomServerEvent: public None
{
public:
	Struct FString                                     UserId                                             // 0x18(0x10)
	Struct FString                                     ShipId                                             // 0x28(0x10)
};


// Size 0x38
class PlayerActionCustomServerEvent: public None
{
public:
	Struct FString                                     UserId                                             // 0x18(0x10)
	Struct FString                                     Action                                             // 0x28(0x10)
};


// Size 0x28
class MermaidUsedCustomServerEvent: public None
{
public:
	Struct FString                                     UserId                                             // 0x18(0x10)
};


// Size 0x28
class MermaidSpawnedCustomServerEvent: public None
{
public:
	Struct Vector                                      Position                                           // 0x18(0xc)
};


// Size 0x28
class MeleeWeaponAttackCustomServerEvent: public None
{
public:
	Struct FString                                     UserId                                             // 0x18(0x10)
};


// Size 0x18
class LevelLoadCompletedCustomServerEvent: public None
{
public:
};


// Size 0x20
class KrakenTentacleDestroyedCustomServerEvent: public None
{
public:
	int                                                TentacleRemaining                                  // 0x18(0x4)
};


// Size 0x28
class KrakenSpawnCustomServerEvent: public None
{
public:
	Struct Vector                                      Position                                           // 0x18(0xc)
};


// Size 0x38
class ItemSpawnCustomServerEvent: public None
{
public:
	Struct FString                                     ItemId                                             // 0x18(0x10)
	Struct FString                                     ItemType                                           // 0x28(0x10)
};


// Size 0x18
class FortWaveCompletedCustomServerEvent: public None
{
public:
};


// Size 0x28
class FortKeyUsedCustomServerEvent: public None
{
public:
	Struct FString                                     UserId                                             // 0x18(0x10)
};


// Size 0x20
class CustomTriggerOverlapCustomServerEvent: public None
{
public:
	int                                                TriggerNetId                                       // 0x18(0x4)
	int                                                OtherNetId                                         // 0x1c(0x4)
};


// Size 0x28
class CrewSessionLeaveCustomServerEvent: public None
{
public:
	Struct FString                                     CrewId                                             // 0x18(0x10)
};


// Size 0x28
class CrewPlayerLeftCustomServerEvent: public None
{
public:
	Struct FString                                     CrewId                                             // 0x18(0x10)
};


// Size 0x38
class CookStartCustomServerEvent: public None
{
public:
	Struct FString                                     UserId                                             // 0x18(0x10)
	Struct FString                                     FoodType                                           // 0x28(0x10)
};


// Size 0x48
class CookEndCustomServerEvent: public None
{
public:
	Struct FString                                     UserId                                             // 0x18(0x10)
	Struct FString                                     FoodType                                           // 0x28(0x10)
	Struct FString                                     CookedState                                        // 0x38(0x10)
};


// Size 0x38
class AISpawnCustomServerEvent: public None
{
public:
	Struct FString                                     AIId                                               // 0x18(0x10)
	Struct FString                                     AIType                                             // 0x28(0x10)
};


// Size 0x28
class AIShipSpawnCustomServerEvent: public None
{
public:
	Struct FString                                     AIShipId                                           // 0x18(0x10)
};


// Size 0x28
class AIShipDespawnCustomServerEvent: public None
{
public:
	Struct FString                                     AIShipId                                           // 0x18(0x10)
};


// Size 0x30
class AIShipDamagedCustomServerEvent: public None
{
public:
	Struct FString                                     AIShipId                                           // 0x18(0x10)
	float                                              AIShipWaterLevel                                   // 0x28(0x4)
};


// Size 0x18
class TinySharkSpawnCustomServerEvent: public None
{
public:
};


}