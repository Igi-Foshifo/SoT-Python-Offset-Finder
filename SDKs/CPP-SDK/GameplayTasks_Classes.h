// Generated by DougTheDruid#2784 on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class GameplayTaskOwnerInterface: public Interface
{
public:
};


// Size 0x30 (Full Size[0x58] - InheritedSize[0x28]
class GameplayTask: public Object
{
public:
	struct FName                                                 InstanceName;                                      // 0x28(0x8)
	char                                                         pad0x38_SYBCW[0x38];                               // 0x2e(0x38)
};


// Size 0x40 (Full Size[0x98] - InheritedSize[0x58]
class GameplayTask_SpawnActor: public GameplayTask
{
public:
	char                                                         pad0x38_RJQEE[0x38];                               // 0x58(0x38)
	class                                                        ClassToSpawn;                                      // 0x90(0x8)
};


// Size 0x18 (Full Size[0x70] - InheritedSize[0x58]
class GameplayTask_WaitDelay: public GameplayTask
{
public:
};


// Size 0x10 (Full Size[0x38] - InheritedSize[0x28]
class GameplayTaskResource: public Object
{
public:
	int                                                          ManualResourceID;                                  // 0x28(0x4)
	char                                                         pad0x4_5C2TR[0x4];                                 // 0x2c(0x4)
	bool                                                         bManuallySetID;                                    // 0x30(0x1)
	char                                                         pad0x9_6MRKR[0x9];                                 // 0x2f(0x9)
};


// Size 0x60 (Full Size[0x128] - InheritedSize[0xc8]
class GameplayTasksComponent: public ActorComponent
{
public:
	char                                                         pad0x8_1O6LK[0x8];                                 // 0xc8(0x8)
	TArray<class GameplayTask*>                                  SimulatedTasks;                                    // 0xd0(0x10)
	TArray<class GameplayTask*>                                  TaskPriorityQueue;                                 // 0xe0(0x10)
	char                                                         pad0x28_1KCDJ[0x28];                               // 0xf0(0x28)
	char                                                         pad0x60_1U40Z[0x60];                               // 0x116(0x60)
};


}