// Generated by DougTheDruid#2784 on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x70
struct AdventureOnDemandServiceCrewEntry
{
public:
	TArray<class CrewVoyageParticipant*>                         Participants;                                      // 0x30(0x10)
};


// Size 0x10
struct VoyageHintPopupDescEntry
{
public:
	byte                                                         QuestType;                                         // 0x0(0x1)
	char                                                         pad0x7_Y84HW[0x7];                                 // 0x1(0x7)
	Class PopUpMessageDesc*                                      HintPopUpMessageDesc;                              // 0x8(0x8)
};


// Size 0x18
struct ExtraSpawnDistanceFromIsland
{
public:
	class                                                        ShipSize;                                          // 0x0(0x8)
	TArray<struct DistanceByIslandType>                          DistanceByIslandType;                              // 0x8(0x10)
};


// Size 0x8
struct ExtraSpawnDistanceByIslandType
{
public:
	byte                                                         IslandType;                                        // 0x0(0x1)
	char                                                         pad0x3_DFAE8[0x3];                                 // 0x1(0x3)
	float                                                        ExtraSpawnDistance;                                // 0x4(0x4)
};


}