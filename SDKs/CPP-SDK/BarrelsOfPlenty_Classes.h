// Generated by DougTheDruid#2784 on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x20 (Full Size[0x3e8] - InheritedSize[0x3c8]
class BarrelsOfPlentyDebugSpawnLocation: public Actor
{
public:
	TArray<struct Objects>                                       Objects;                                           // 0x3c8(0x10)
	Struct Vector                                                SpawnCentre;                                       // 0x3d8(0xc)
	float                                                        Radius;                                            // 0x3e4(0x4)
};


// Size 0x28 (Full Size[0x3f0] - InheritedSize[0x3c8]
class BarrelsOfPlentySpawnProxy: public Actor
{
public:
	Class Ship*                                                  Ship;                                              // 0x3c8(0x8)
	char                                                         pad0x18_LP0O7[0x18];                               // 0x3d0(0x18)
	Class SceneComponent*                                        SceneComponent;                                    // 0x3e8(0x8)
};


// Size 0x0 (Full Size[0x98] - InheritedSize[0x98]
class SpawnBarrelsOfPlentyStep: public TaleQuestStep
{
public:
};


// Size 0x30 (Full Size[0xb0] - InheritedSize[0x80]
class SpawnBarrelsOfPlentyStepDesc: public TaleQuestStepDesc
{
public:
	Struct QuestVariableVector                                   LocatorVar;                                        // 0x80(0x30)
};


}