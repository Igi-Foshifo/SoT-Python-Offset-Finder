namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x20
class BarrelsOfPlentyDebugSpawnLocation: public Actor
{
public:
	TArray<Struct SceneComponent>                      Objects                                            // 0x3d0(0x10)
	Struct Vector                                      SpawnCentre                                        // 0x3e0(0xc)
	float                                              Radius                                             // 0x3ec(0x4)
};


// Size 0x28
class BarrelsOfPlentySpawnProxy: public Actor
{
public:
	Class Ship*                                        Ship                                               // 0x3d0(0x8)
	Class SceneComponent*                              SceneComponent                                     // 0x3f0(0x8)
};


// Size 0x0
class SpawnBarrelsOfPlentyStep: public TaleQuestStep
{
public:
};


// Size 0x20
class SpawnBarrelsOfPlentyStepDesc: public TaleQuestStepDesc
{
public:
	Struct QuestVariableVector                         LocatorVar                                         // 0x80(0x20)
};


}