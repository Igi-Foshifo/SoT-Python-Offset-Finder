// Generated by DougTheDruid#2784 on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x20
struct SpawnAICustomOnDespawnTaskData
{
public:
	int                                                          Despawn_Index;                                     // 0x0(0x4)
	char                                                         pad0x4_4ZD2Y[0x4];                                 // 0x4(0x4)
	Class Pawn*                                                  Despawn_Pawn;                                      // 0x8(0x8)
	byte                                                         Despawn_Reason;                                    // 0x10(0x1)
	char                                                         pad0x7_378SB[0x7];                                 // 0x11(0x7)
	Class TaleQuestStepDesc*                                     Body;                                              // 0x18(0x8)
};


// Size 0x18
struct SpawnAICustomOnSpawnTaskData
{
public:
	int                                                          Spawn_Index;                                       // 0x0(0x4)
	char                                                         pad0x4_N4U3A[0x4];                                 // 0x4(0x4)
	Class Pawn*                                                  Spawn_Pawn;                                        // 0x8(0x8)
	Class TaleQuestStepDesc*                                     Body;                                              // 0x10(0x8)
};


// Size 0x10
struct SpawnActorCustomOnTriggerWaveTaskData
{
public:
	int                                                          NumAIToSpawn;                                      // 0x0(0x4)
	char                                                         pad0x4_9PHIE[0x4];                                 // 0x4(0x4)
	Class TaleQuestStepDesc*                                     Body;                                              // 0x8(0x8)
};


// Size 0x68
struct SpawnAICustomPreSpawnTaskData
{
public:
	int                                                          Index;                                             // 0x0(0x4)
	Struct Vector                                                SpawnLocation;                                     // 0x4(0xc)
	Class AthenaAIControllerParamsDataAsset*                     Skillset;                                          // 0x30(0x8)
	Class LoadoutAsset*                                          Loadout;                                           // 0x38(0x8)
	Class AthenaAIFormDataAsset*                                 Form;                                              // 0x40(0x8)
	Class AthenaAIAmmoDataAsset*                                 Ammo;                                              // 0x48(0x8)
	class                                                        AIClass;                                           // 0x50(0x8)
	Class AIPartsCategory*                                       PartsCategory;                                     // 0x58(0x8)
	Class TaleQuestStepDesc*                                     Body;                                              // 0x60(0x8)
};


// Size 0x10
struct SpawnAICustomSetupTaskData
{
public:
	int                                                          MaxAI;                                             // 0x0(0x4)
	char                                                         pad0x4_R5C23[0x4];                                 // 0x4(0x4)
	Class TaleQuestStepDesc*                                     Body;                                              // 0x8(0x8)
};


}