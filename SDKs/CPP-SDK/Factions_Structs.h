// Generated by DougTheDruid#2784 on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x28
struct LootLevelReward
{
public:
	byte                                                         LootLevel;                                         // 0x0(0x1)
	Struct RewardId                                              RewardId;                                          // 0x4(0x8)
	TArray<Struct FactionServicePopUpData>                       LootLevelPopUpMessageDesc;                         // 0x10(0x10)
	int                                                          PopUpIndex;                                        // 0x20(0x4)
};


// Size 0x20
struct FactionRequest
{
public:
	class                                                        Faction;                                           // 0x0(0x8)
};


// Size 0xa0
struct FactionDisplayInfo
{
public:
	class                                                        Faction;                                           // 0x0(0x8)
	Struct FText                                                 Title;                                             // 0x8(0x38)
	Struct FText                                                 Description;                                       // 0x40(0x38)
	Struct Vector2D                                              CardOffset;                                        // 0x78(0x8)
	Struct StringAssetReference                                  KeyArt;                                            // 0x80(0x10)
	Struct StringAssetReference                                  Icon;                                              // 0x90(0x10)
};


// Size 0xc
struct KillStreakRibbonEvent
{
public:
	int                                                          HourGlassPreValue;                                 // 0x0(0x4)
	int                                                          HourGlassPostValue;                                // 0x4(0x4)
	int                                                          HourGlassIncrement;                                // 0x8(0x4)
};


// Size 0x1
struct KillStreakHideEvent
{
public:
};


// Size 0x1
struct KillStreakShowEvent
{
public:
};


// Size 0x4
struct UpdateKillStreakEvent
{
public:
	int                                                          NewLevel;                                          // 0x0(0x4)
};


// Size 0x1
struct DeactivateKillStreakEvent
{
public:
};


// Size 0x1
struct ActivateKillStreakEvent
{
public:
	byte                                                         FactionId;                                         // 0x0(0x1)
};


// Size 0x10
struct DeactivateKillStreakNetworkEvent
{
public:
};


// Size 0x18
struct ActivateKillStreakNetworkEvent
{
public:
	byte                                                         FactionId;                                         // 0x10(0x1)
};


// Size 0x20
struct FactionShipSunkUIEvent
{
public:
	byte                                                         OpponentFaction;                                   // 0x0(0x1)
	Struct FString                                               ShipName;                                          // 0x8(0x10)
	int                                                          MyKillStreak;                                      // 0x18(0x4)
	int                                                          TheirKillStreak;                                   // 0x1c(0x4)
};


// Size 0x38
struct FactionShipSunkNetworkEvent
{
public:
	byte                                                         OpponentFaction;                                   // 0x10(0x1)
	Struct Guid                                                  OpponentCrewId;                                    // 0x14(0x10)
	int                                                          MyKillStreak;                                      // 0x24(0x4)
	int                                                          TheirKillStreak;                                   // 0x28(0x4)
	int                                                          SandsOfFateBefore;                                 // 0x2c(0x4)
	int                                                          SandsOfFateAfter;                                  // 0x30(0x4)
};


// Size 0x18
struct FactionPopupEvent
{
public:
	Class DataAsset*                                             PopUpDesc;                                         // 0x10(0x8)
};


// Size 0x10
struct StreakMesh
{
public:
	Class StaticMesh*                                            Mesh;                                              // 0x0(0x8)
	byte                                                         PartType;                                          // 0x8(0x1)
};


// Size 0x10
struct StreakMaterial
{
public:
	Class MaterialInstance*                                      Material;                                          // 0x0(0x8)
	byte                                                         PartType;                                          // 0x8(0x1)
};


// Size 0x8
struct FactionVoteRemovedEvent
{
public:
	struct FName                                                 Company;                                           // 0x0(0x8)
};


// Size 0x8
struct FactionVoteAddedEvent
{
public:
	struct FName                                                 Company;                                           // 0x0(0x8)
};


// Size 0x88
struct CinematicFactionEvent
{
public:
	class                                                        Company;                                           // 0x0(0x8)
	Struct CinematicQuestEvent                                   CinematicData;                                     // 0x8(0x80)
};


// Size 0x10
struct FactionStreakData
{
public:
	class                                                        Faction;                                           // 0x0(0x8)
	int                                                          StreakLevel;                                       // 0x8(0x4)
};


// Size 0x18
struct StreakDynamicMaterials
{
public:
	class                                                        Company;                                           // 0x0(0x8)
	TArray<class MaterialInstanceDynamic*>                       DynamicMaterials;                                  // 0x8(0x10)
};


// Size 0x18
struct StreakCompanyMaterials
{
public:
	class                                                        Company;                                           // 0x0(0x8)
	TArray<Struct StreakMaterial>                                Materials;                                         // 0x8(0x10)
};


// Size 0x8
struct StreakMaterialValue
{
public:
	int                                                          Streak;                                            // 0x0(0x4)
	float                                                        Length;                                            // 0x4(0x4)
};


// Size 0x1
struct EventLocalPlayerApproachedHourglass
{
public:
};


}