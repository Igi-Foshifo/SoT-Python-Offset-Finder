// Generated by DougTheDruid#2784 on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x20
struct EmissaryFlagMeshReferences
{
public:
	Struct StringAssetReference                                  BackOfShipEmissaryFlagMeshAssetReference;          // 0x0(0x10)
	Struct StringAssetReference                                  MastEmissaryFlagMeshAssetReference;                // 0x10(0x10)
};


// Size 0x28
struct ParticleVisualisation
{
public:
	Struct ActorComponentSelector                                TargetParticles;                                   // 0x0(0x10)
	float                                                        Delay;                                             // 0x10(0x4)
	float                                                        DelayAfterPutOutParticles;                         // 0x14(0x4)
	Class ParticleSystem*                                        PutOutParticles;                                   // 0x18(0x8)
	Class ParticleSystemComponent*                               ParticleSystem;                                    // 0x20(0x8)
};


// Size 0x28
struct LightVisualisation
{
public:
	Struct ActorComponentSelector                                TargetLight;                                       // 0x0(0x10)
	float                                                        TransitionTime;                                    // 0x10(0x4)
	float                                                        ActiveValue;                                       // 0x14(0x4)
	float                                                        InactiveValue;                                     // 0x18(0x4)
	Class LightComponent*                                        Light;                                             // 0x20(0x8)
};


// Size 0x30
struct MaterialVisualisation
{
public:
	Struct ActorComponentSelector                                TargetMesh;                                        // 0x0(0x10)
	float                                                        TransitionTime;                                    // 0x10(0x4)
	int                                                          MaterialIndex;                                     // 0x14(0x4)
	struct FName                                                 ParameterName;                                     // 0x18(0x8)
	float                                                        ActiveValue;                                       // 0x20(0x4)
	float                                                        InactiveValue;                                     // 0x24(0x4)
	Class MaterialInstanceDynamic*                               DynamicMaterial;                                   // 0x28(0x8)
};


// Size 0x88
struct EmissaryLevelEntry
{
public:
	class                                                        Company;                                           // 0x0(0x8)
	TArray<Struct EmissaryLevelData>                             CompanyLevelData;                                  // 0x8(0x10)
	Class DataAsset*                                             MaxRankPopUpToastData;                             // 0x18(0x8)
	Class DataAsset*                                             EmissaryJoinedPopUpToastData;                      // 0x20(0x8)
	Class DataAsset*                                             EmissarySunkPopUpToastData;                        // 0x28(0x8)
	Struct EmissaryCompanyCosmetics                              CompanyCosmetics;                                  // 0x30(0x20)
	Struct PlayerStat                                            TimeSpentAtMaxRankStat;                            // 0x50(0x4)
	TArray<Struct PlayerStat>                                    StatsToFireOnFullEmissaryClothing;                 // 0x58(0x10)
	TArray<Struct PlayerStat>                                    StatsToFireOnFullEmissaryShipCustomizations;       // 0x68(0x10)
	TArray<Struct PlayerStat>                                    StatsToFireOnFullShipCustomizationsAndClothing;    // 0x78(0x10)
};


// Size 0x20
struct EmissaryCompanyCosmetics
{
public:
	TArray<Class CompanyCostumeCosmetics>                        CompanyCostumeCosmetics;                           // 0x0(0x10)
	TArray<Class CompanyShipCosmetics>                           CompanyShipCosmetics;                              // 0x10(0x10)
};


// Size 0x80
struct EmissaryLevelData
{
public:
	int                                                          LevelTarget;                                       // 0x0(0x4)
	Struct EmissaryFlagMeshReferences                            EmissaryFlagMeshAssetReferences;                   // 0x8(0x20)
	Struct RewardId                                              EmissaryDeactivationReward;                        // 0x48(0x8)
	TArray<Struct PlayerStat>                                    StatsToFireOnEmissaryLevelReached;                 // 0x50(0x10)
	Struct StringAssetReference                                  TreasureSoldNotificationFlag;                      // 0x60(0x10)
	Struct StringAssetReference                                  EmissaryFlagTextureReference;                      // 0x70(0x10)
};


// Size 0x8
struct EmissaryPointBoostMultipliers
{
public:
	float                                                        PlayerWearningCompanyCostume;                      // 0x0(0x4)
	float                                                        CrewShipFullyEquippedWithCompanyCosmetics;         // 0x4(0x4)
};


// Size 0x4
struct EmissaryLevelStatusStatInfo
{
public:
	Struct PlayerStat                                            StatToFire;                                        // 0x0(0x4)
};


// Size 0x8
struct EmissaryPointsBoostCriteria
{
public:
};


// Size 0x18
struct TrackedPlayerKillEntry
{
public:
	Struct FString                                               KilledPlayer;                                      // 0x0(0x10)
	int                                                          KillCount;                                         // 0x10(0x4)
	float                                                        KillTime;                                          // 0x14(0x4)
};


// Size 0x28
struct EmissaryCompanyCampaignSettings
{
public:
	class                                                        Company;                                           // 0x0(0x8)
	TArray<Struct EmissaryCompanyCampaignKillPlayer>             KillPlayers;                                       // 0x8(0x10)
	TArray<Struct EmissaryCompanyCampaignGameEvent>              GameEvents;                                        // 0x18(0x10)
};


// Size 0x18
struct EmissaryCompanyCampaignGameEvent
{
public:
	class                                                        EventType;                                         // 0x0(0x8)
	TArray<Struct EmissaryCompanyCampaignScale>                  Scales;                                            // 0x8(0x10)
};


// Size 0xc
struct EmissaryCompanyCampaignScale
{
public:
	struct FName                                                 Campaign;                                          // 0x0(0x8)
	float                                                        Scale;                                             // 0x8(0x4)
};


// Size 0x18
struct EmissaryCompanyCampaignKillPlayer
{
public:
	class                                                        Company;                                           // 0x0(0x8)
	TArray<Struct EmissaryCompanyCampaignScale>                  Scales;                                            // 0x8(0x10)
};


// Size 0x90
struct EmissaryRewardEntry
{
public:
	class                                                        Company;                                           // 0x0(0x8)
	Struct EmissaryActionRewardData                              ActionRewardData;                                  // 0x8(0x88)
};


// Size 0x88
struct EmissaryActionRewardData
{
public:
	TArray<Struct EmissaryEventAward>                            OwnershipChangedRewards;                           // 0x0(0x10)
	TArray<Struct EmissaryEventAward>                            PlacedOnShipRewards;                               // 0x10(0x10)
	Struct EmissaryKillPlayerReward                              KillPlayerReward;                                  // 0x20(0x28)
	TArray<Struct EmissaryGameEventsReward>                      GameEventsRewards;                                 // 0x48(0x10)
	TArray<Struct EmissaryEventAward>                            HandinRewards;                                     // 0x58(0x10)
	TArray<Struct EmissaryCompanyActionReward>                   CompanyActionRewards;                              // 0x68(0x10)
	TArray<Struct EmissaryFactionActionReward>                   FactionActionRewards;                              // 0x78(0x10)
};


// Size 0x8
struct EmissaryFactionActionReward
{
public:
	byte                                                         FactionActionType;                                 // 0x0(0x1)
	float                                                        Amount;                                            // 0x4(0x4)
};


// Size 0x8
struct EmissaryCompanyActionReward
{
public:
	byte                                                         CompanyActionType;                                 // 0x0(0x1)
	float                                                        Amount;                                            // 0x4(0x4)
};


// Size 0x8
struct EmissaryEventAward
{
public:
	bool                                                         FirstTimeOnly;                                     // 0x0(0x1)
	bool                                                         NotOriginalOwner;                                  // 0x1(0x1)
	byte                                                         ItemQualityRequirement;                            // 0x2(0x1)
	int                                                          EmissaryLevelIncrease;                             // 0x4(0x4)
};


// Size 0x10
struct EmissaryGameEventsReward
{
public:
	class                                                        FinishedEventType;                                 // 0x0(0x8)
	float                                                        Amount;                                            // 0x8(0x4)
};


// Size 0x28
struct EmissaryKillPlayerReward
{
public:
	int                                                          EmissaryLevelIncrease;                             // 0x0(0x4)
	TArray<Struct EmissaryKillScaleFactor>                       EmissaryLevelKillCountScaleFactors;                // 0x8(0x10)
	TArray<Class ValidEmissariesToKill>                          ValidEmissariesToKill;                             // 0x18(0x10)
};


// Size 0x8
struct EmissaryKillScaleFactor
{
public:
	int                                                          KillCount;                                         // 0x0(0x4)
	float                                                        ScaleFactor;                                       // 0x4(0x4)
};


// Size 0x8
struct EmissaryVoteRemovedEvent
{
public:
	struct FName                                                 Company;                                           // 0x0(0x8)
};


// Size 0x8
struct EmissaryVoteAddedEvent
{
public:
	struct FName                                                 Company;                                           // 0x0(0x8)
};


// Size 0x20
struct CrewMemberVotes
{
public:
	Struct Guid                                                  CrewId;                                            // 0x0(0x10)
	TArray<Struct PerCompanyVotes>                               CompanyVotes;                                      // 0x10(0x10)
};


// Size 0x18
struct PerCompanyVotes
{
public:
	TArray<class PlayerState*>                                   MemberVotes;                                       // 0x0(0x10)
	struct FName                                                 CompanyIdentifier;                                 // 0x10(0x8)
};


// Size 0x4
struct ChaliceStatuePhaseUpdate
{
public:
	int                                                          NewLevel;                                          // 0x0(0x4)
};


// Size 0x18
struct EmissaryEncounteredSkellyFortNetworkEvent
{
public:
	struct FName                                                 CompanyName;                                       // 0x10(0x8)
};


// Size 0x8
struct EmissaryEncounteredAIShipEvent
{
public:
	struct FName                                                 CompanyName;                                       // 0x0(0x8)
};


// Size 0x8
struct EmissaryEncounteredTinySharkEvent
{
public:
	struct FName                                                 CompanyName;                                       // 0x0(0x8)
};


// Size 0x8
struct EmissaryEncounteredKrakenEvent
{
public:
	struct FName                                                 CompanyName;                                       // 0x0(0x8)
};


// Size 0x10
struct EmissaryEntitlementPurchasedEvent
{
public:
	Struct Guid                                                  OfferId;                                           // 0x0(0x10)
};


// Size 0xc
struct EmissaryLevelRankChange
{
public:
	int                                                          NewLevel;                                          // 0x0(0x4)
	struct FName                                                 CompanyName;                                       // 0x4(0x8)
};


// Size 0x8
struct EmissaryActivated
{
public:
	struct FName                                                 CompanyName;                                       // 0x0(0x8)
};


// Size 0x20
struct EmissaryKilledAnotherEmissaryNetworkEvent
{
public:
	struct FName                                                 CompanyName;                                       // 0x10(0x8)
	struct FName                                                 VictimCompanyName;                                 // 0x18(0x8)
};


// Size 0x18
struct EmissarySoldLootNetworkEvent
{
public:
	struct FName                                                 CompanyName;                                       // 0x10(0x8)
};


// Size 0x18
struct EmissaryStoleLootNetworkEvent
{
public:
	struct FName                                                 CompanyName;                                       // 0x10(0x8)
};


// Size 0x18
struct EmissaryDiscoveredCargoRunCrateNetworkEvent
{
public:
	struct FName                                                 CompanyName;                                       // 0x10(0x8)
};


// Size 0x18
struct EmissaryDiscoveredLootNetworkEvent
{
public:
	struct FName                                                 CompanyName;                                       // 0x10(0x8)
};


// Size 0x18
struct EmissarySecuredLootOnShipNetworkEvent
{
public:
	struct FName                                                 CompanyName;                                       // 0x10(0x8)
};


// Size 0x18
struct EmissaryJoinedNetworkEvent
{
public:
	Class DataAsset*                                             PopUpDesc;                                         // 0x10(0x8)
};


// Size 0x20
struct EmissarySunkNetworkEvent
{
public:
	Class DataAsset*                                             PopUpDesc;                                         // 0x10(0x8)
	struct FName                                                 CompanyName;                                       // 0x18(0x8)
};


// Size 0x18
struct EmissaryMaxLevelReachedNetworkEvent
{
public:
	Class DataAsset*                                             PopUpDesc;                                         // 0x10(0x8)
};


// Size 0x10
struct EmissaryDeactivatedNetworkEvent
{
public:
};


// Size 0xc
struct EmissaryStateUpdateEvent
{
public:
	float                                                        CurrentRepTotal;                                   // 0x0(0x4)
	struct FName                                                 CompanyId;                                         // 0x4(0x8)
};


// Size 0x20
struct EmissaryProgressUpdatedNetworkEvent
{
public:
	float                                                        OldRepTotal;                                       // 0x10(0x4)
	float                                                        NewRepTotal;                                       // 0x14(0x4)
	struct FName                                                 CompanyId;                                         // 0x18(0x8)
};


// Size 0x14
struct EmissaryLevelProgressUpdatedEvent
{
public:
	float                                                        LevelProgress;                                     // 0x0(0x4)
	Struct Guid                                                  AssociatedCrew;                                    // 0x4(0x10)
};


// Size 0x1
struct ActivateEmissaryMaxRankQuestForSession
{
public:
};


// Size 0x30
struct UpdateEmissaryValueForCompany
{
public:
	Struct Guid                                                  SessionId;                                         // 0x0(0x10)
	struct FName                                                 Company;                                           // 0x10(0x8)
	Struct Guid                                                  AssociatedCrew;                                    // 0x18(0x10)
	byte                                                         RewardType;                                        // 0x28(0x1)
	int                                                          UpdateAmount;                                      // 0x2c(0x4)
};


// Size 0x28
struct ReactivateEmissaryForMigratedCrew
{
public:
	Struct Guid                                                  SessionId;                                         // 0x0(0x10)
	struct FName                                                 Company;                                           // 0x10(0x8)
	Struct Guid                                                  AssociatedCrew;                                    // 0x18(0x10)
};


// Size 0x30
struct DeactivateEmissaryForCrew
{
public:
	Struct Guid                                                  SessionId;                                         // 0x0(0x10)
	struct FName                                                 Company;                                           // 0x10(0x8)
	Struct Guid                                                  AssociatedCrew;                                    // 0x18(0x10)
	byte                                                         EmissaryDeactivateReason;                          // 0x28(0x1)
	int                                                          EmissaryTotal;                                     // 0x2c(0x4)
};


// Size 0x28
struct ActivateEmissaryForCrew
{
public:
	Struct Guid                                                  SessionId;                                         // 0x0(0x10)
	struct FName                                                 Company;                                           // 0x10(0x8)
	Struct Guid                                                  AssociatedCrew;                                    // 0x18(0x10)
};


// Size 0x1c
struct EmissaryLevelChanged
{
public:
	int                                                          NewLevel;                                          // 0x0(0x4)
	Struct Guid                                                  AssociatedCrew;                                    // 0x4(0x10)
	struct FName                                                 CompanyName;                                       // 0x14(0x8)
};


// Size 0x1
struct EmissaryLevelResetProgress
{
public:
};


// Size 0x1
struct PlayerRemovedFromEmissaryCrew
{
public:
};


// Size 0x10
struct PlayerAddedToEmissaryCrew
{
public:
	int                                                          EmissaryLevel;                                     // 0x0(0x4)
	float                                                        EmissaryLevelProgress;                             // 0x4(0x4)
	struct FName                                                 EmissaryCompany;                                   // 0x8(0x8)
};


// Size 0x2c
struct EmissaryRoleplayActionTelemetryEvent
{
public:
	Struct Guid                                                  EmissarySessionId;                                 // 0x0(0x10)
	struct FName                                                 EmissaryCompany;                                   // 0x10(0x8)
	int                                                          EmissaryRank;                                      // 0x18(0x4)
	byte                                                         ActionName;                                        // 0x1c(0x1)
	int                                                          PointsRewarded;                                    // 0x20(0x4)
	int                                                          PointsAccumulated;                                 // 0x24(0x4)
	int                                                          PointsRequiredToNextRank;                          // 0x28(0x4)
};


// Size 0x1c
struct EmissarySessionEndTelemetryEvent
{
public:
	Struct Guid                                                  EmissarySessionId;                                 // 0x0(0x10)
	struct FName                                                 EmissaryCompany;                                   // 0x10(0x8)
	byte                                                         DisbandedReason;                                   // 0x18(0x1)
};


// Size 0x1c
struct EmissarySessionStartTelemetryEvent
{
public:
	Struct Guid                                                  EmissarySessionId;                                 // 0x0(0x10)
	struct FName                                                 EmissaryCompany;                                   // 0x10(0x8)
	int                                                          EmisarriesOnServerCount;                           // 0x18(0x4)
};


// Size 0x28
struct VoteAddedNetworkEvent
{
public:
	struct FName                                                 CompanyId;                                         // 0x10(0x8)
	Struct Guid                                                  CrewId;                                            // 0x18(0x10)
};


// Size 0x28
struct VoteRemovedNetworkEvent
{
public:
	struct FName                                                 CompanyId;                                         // 0x10(0x8)
	Struct Guid                                                  CrewId;                                            // 0x18(0x10)
};


}