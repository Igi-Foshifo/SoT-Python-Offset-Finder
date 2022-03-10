namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x18
class IsStoryActiveNPCDialogConditional: public NPCDialogConditional
{
public:
	bool                                               NeedsAllStories                                    // 0x30(0x1)
};


// Size 0x10
class StoryNPCDialogConditionalContext: public NPCDialogConditionalContext
{
public:
	TArray<Name None>                                  StoryNames                                         // 0x28(0x10)
};


// Size 0x0
class StoryNPCDialogOverrideType: public NPCDialogOverrideType
{
public:
};


// Size 0x0
class StoryServiceInterface: public Interface
{
public:
};


// Size 0xe0
class StoryService: public Actor
{
public:
	TArray<Struct StorySpawnedActorsAssetList>         Stories                                            // 0x3f8(0x10)
	TArray<Struct Stories>                             ActiveStories                                      // 0x408(0x10)
};


// Size 0x10
class StorySpawnedActorsCollectionDataAsset: public DataAsset
{
public:
	TArray<class StorySpawnedActorsAssetList*>         StorySpawnedActorsAssetList                        // 0x28(0x10)
};


// Size 0x10
class StorySpawnedActorsDataAsset: public DataAsset
{
public:
	TArray<Struct Asset>                               StorySpawnedActorsList                             // 0x28(0x10)
};


// Size 0x0
class StorySpawnedActorsServiceInterface: public Interface
{
public:
};


// Size 0xe8
class StorySpawnedActorsService: public Actor
{
public:
	Class StorySpawnedActorsCollectionDataAsset*       Asset                                              // 0x428(0x8)
};


// Size 0x10
class StorySpawnedActorsSettings: public DeveloperSettings
{
public:
	Struct StringAssetReference                        StorySpawnActorsCollectionDataAssetLocation        // 0x38(0x10)
};


}