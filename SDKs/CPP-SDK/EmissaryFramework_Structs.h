// Generated by DougTheDruid#2784 on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x14
struct EmissaryFactionActionRewardBoostServiceEvent
{
public:
	byte                                                         FactionActionType;                                 // 0x0(0x1)
	char                                                         pad0x3_3KOXP[0x3];                                 // 0x1(0x3)
	Struct Guid                                                  AssociatedCrew;                                    // 0x4(0x10)
};


// Size 0x18
struct EmissaryGlobalActionRewardBoostServiceEvent
{
public:
	class                                                        FinishedEventType;                                 // 0x0(0x8)
	Struct Guid                                                  AssociatedCrew;                                    // 0x8(0x10)
};


// Size 0x1c
struct EmissaryCompanyActionRewardBoostServiceEvent
{
public:
	struct FName                                                 AssociatedCompany;                                 // 0x0(0x8)
	byte                                                         CompanyActionType;                                 // 0x8(0x1)
	char                                                         pad0x3_F5NRH[0x3];                                 // 0x9(0x3)
	Struct Guid                                                  AssociatedCrew;                                    // 0xc(0x10)
};


// Size 0x8
struct EmissaryGlobalActionRewardBoostEvent
{
public:
	class                                                        GameEventType;                                     // 0x0(0x8)
};


// Size 0x1
struct EmissaryNonQuestCompanyActionRewardBoostEvent
{
public:
	byte                                                         CompanyActionType;                                 // 0x0(0x1)
};


// Size 0x14
struct EmissaryQuestCompanyActionRewardBoostEvent
{
public:
	byte                                                         CompanyActionType;                                 // 0x0(0x1)
	char                                                         pad0x3_LYGGT[0x3];                                 // 0x1(0x3)
	Struct Guid                                                  QuestId;                                           // 0x4(0x10)
};


// Size 0x10
struct EmissaryCompanyChangedEvent
{
public:
};


// Size 0x10
struct EmissaryLedgerVisited
{
public:
	Struct FString                                               CompanyId;                                         // 0x0(0x10)
};


}