namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x0
class MusicZoneInterface: public Interface
{
public:
};


// Size 0xc0
class MusicZoneComponent: public SceneComponent
{
public:
	float                                              InnerRadius                                        // 0x2d8(0x4)
	float                                              OuterRadius                                        // 0x2dc(0x4)
	struct FName                                       LocationRTPC                                       // 0x2e0(0x8)
	bool                                               LocalRTPC                                          // 0x2e8(0x1)
	Class WwiseEvent*                                  PlayEvent                                          // 0x2f0(0x8)
	Class WwiseEvent*                                  StopEvent                                          // 0x2f8(0x8)
	TArray<class OneShotEvents*>                       OneShotEvents                                      // 0x300(0x10)
	Class WwiseObjectPoolWrapper*                      EmitterPool                                        // 0x310(0x8)
	bool                                               DisableAfterPlayThrough                            // 0x318(0x1)
	bool                                               ActivateOnBeginPlay                                // 0x319(0x1)
};


// Size 0x30
class AISpawnerMusicZoneComponent: public MusicZoneComponent
{
public:
	Class WwiseEvent*                                  BattleWonEvent                                     // 0x390(0x8)
	Class AISpawner*                                   AISpawner                                          // 0x398(0x8)
	TArray<class SpawnerPawns*>                        SpawnerPawns                                       // 0x3a0(0x10)
	byte                                               SpawnerState                                       // 0x3b0(0x1)
};


// Size 0x30
class SynchedMusicZoneComponent: public MusicZoneComponent
{
public:
	float                                              StartDelayTime                                     // 0x390(0x4)
	int                                                PlayFromStartTimeMS                                // 0x394(0x4)
};


// Size 0x0
class MusicZoneServiceInterface: public Interface
{
public:
};


// Size 0xa8
class MusicZoneService: public Actor
{
public:
};


}