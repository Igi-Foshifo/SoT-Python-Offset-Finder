namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x18
class StoryInfo: public None
{
public:
	struct FName                                       Name                                               // 0x0(0x8)
};


// Size 0x28
class StorySpawnedActorsList: public None
{
public:
	struct FName                                       StoryName                                          // 0x0(0x8)
	TArray<Struct ActorLocationPair>                   ActorLocations                                     // 0x8(0x10)
	TArray<Struct NamedPointsActorLocation>            NamedPointsActorLocations                          // 0x18(0x10)
};


// Size 0x38
class NamedPointsActorLocation: public None
{
public:
	struct FName                                       NamedPointsGroup                                   // 0x0(0x8)
	Struct StringAssetReference                        ActorWithNamedPointsComponent                      // 0x8(0x10)
};


// Size 0x30
class ActorLocationPair: public None
{
public:
	Struct StringAssetReference                        SpawnLocation                                      // 0x0(0x10)
};


// Size 0x20
class StorySpawnedActorsChangeTelemetryEvent: public None
{
public:
	TArray<Struct SpawnedActorsList>                   StorySpawnedActors                                 // 0x0(0x10)
	TArray<Struct StorySpawnedActorsIndividualStoryInfo> StoryDespawnedActors                               // 0x10(0x10)
};


// Size 0x18
class StorySpawnedActorsIndividualStoryInfo: public None
{
public:
	Struct FString                                     StoryName                                          // 0x0(0x10)
	int                                                NumActorsSpawned                                   // 0x10(0x4)
	int                                                NumActorsDespawned                                 // 0x14(0x4)
};


// Size 0x10
class SpawnedActorsList: public None
{
public:
	TArray<Struct PhasedActorInfo>                     ActorsList                                         // 0x0(0x10)
};


// Size 0x18
class PhasedActorInfo: public None
{
public:
	Class Actor*                                       MapActor                                           // 0x0(0x8)
	Class Actor*                                       PhasedActor                                        // 0x8(0x8)
};


// Size 0x10
class StoriesChangedTelemetryEvent: public None
{
public:
	TArray<Str None>                                   ActiveStories                                      // 0x0(0x10)
};


}