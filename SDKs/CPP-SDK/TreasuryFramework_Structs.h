// Generated by DougTheDruid#2784 on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x48
struct TreasuryWaveEncounter
{
public:
	byte                                                         EncounterType;                                     // 0x0(0x1)
	char                                                         pad0x7_9C9H4[0x7];                                 // 0x1(0x7)
	Class SpawnAIWaveMechanismAction*                            SpawnerMechanism;                                  // 0x8(0x8)
	Class Actor*                                                 MechanismTrigger;                                  // 0x10(0x8)
	Class SpawnAIWaveMechanismAction*                            SpawnerMechanismVaultMaster;                       // 0x18(0x8)
	Class Actor*                                                 MechanismTriggerVaultMaster;                       // 0x20(0x8)
	Class TreasuryWaveDataAsset*                                 Waves;                                             // 0x28(0x8)
	Class TreasuryWaveDataAsset*                                 FinalWaves;                                        // 0x30(0x8)
	Class TreasuryWaveDataAsset*                                 FinalWavesVaultMaster;                             // 0x38(0x8)
	bool                                                         NeedsRoomFlooded;                                  // 0x40(0x1)
};


// Size 0x18
struct TreasuryWaveTracker
{
public:
};


// Size 0x1
struct EventTreasuryRoomInactive
{
public:
};


// Size 0x1
struct EventTreasuryRoomActive
{
public:
};


}