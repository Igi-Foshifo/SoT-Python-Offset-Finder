namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0xa8
class ShimmerActor: public Actor
{
public:
};


// Size 0x40
class TreasuryWaveDataAsset: public DataAsset
{
public:
	TArray<class Waves1Player*>                        Waves1Player                                       // 0x28(0x10)
	TArray<class Waves2Player*>                        Waves2Player                                       // 0x38(0x10)
	TArray<class Waves3Player*>                        Waves3Player                                       // 0x48(0x10)
	TArray<class Waves4Player*>                        Waves4Player                                       // 0x58(0x10)
};


// Size 0x130
class TreasuryRoom: public Actor
{
public:
	Class BoxComponent*                                RoomAreaComponent                                  // 0x3d8(0x8)
	float                                              TreasuryInactiveDurationMinSeconds                 // 0x3e0(0x4)
	float                                              TreasuryInactiveDurationMaxSeconds                 // 0x3e4(0x4)
	float                                              RoomFailureDurationSeconds                         // 0x3e8(0x4)
	float                                              WaveDelaySeconds                                   // 0x3ec(0x4)
	float                                              EncounterDelaySeconds                              // 0x3f0(0x4)
	float                                              VaultDoorAnimDurationSeconds                       // 0x3f4(0x4)
	float                                              VaultDoorOpenDurationSeconds                       // 0x3f8(0x4)
	int                                                MinWavesInEncounter                                // 0x3fc(0x4)
	int                                                MaxWavesInEncounter                                // 0x400(0x4)
	int                                                MaxEncounters                                      // 0x404(0x4)
	TArray<Struct MaxEncounters>                       WaveEncounters                                     // 0x408(0x10)
	Class Actor*                                       FloodMechanismActor                                // 0x418(0x8)
	Class Actor*                                       FloodTriggerActor                                  // 0x420(0x8)
	Class Actor*                                       DrainMechanismActor                                // 0x428(0x8)
	Class Actor*                                       DrainTriggerActor                                  // 0x430(0x8)
	Class Actor*                                       VaultMechanismActor                                // 0x438(0x8)
	Class Actor*                                       VaultTriggerActor                                  // 0x440(0x8)
	class                                              VaultLootSpawner                                   // 0x448(0x8)
	Class Actor*                                       VaultLootSpawnLocationActor                        // 0x450(0x8)
	TArray<class OverlappingActors*>                   OverlappingActors                                  // 0x478(0x10)
	TArray<Weakclass OverlappingActors>                CachedParticipantControllers                       // 0x488(0x10)
	Class Actor*                                       VaultLootSpawnerActor                              // 0x498(0x8)
	Struct PlayerStat                                  VaultOpenStat                                      // 0x4a0(0x4)
	Class MechanismActionComponent*                    FloodMechanismComponent                            // 0x4a8(0x8)
	Class MechanismActionComponent*                    DrainMechanismComponent                            // 0x4b0(0x8)
	Class MechanismActionComponent*                    VaultMechanismComponent                            // 0x4b8(0x8)
};


}