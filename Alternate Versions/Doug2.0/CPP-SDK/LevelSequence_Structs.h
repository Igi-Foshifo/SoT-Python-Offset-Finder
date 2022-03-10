namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x38
class LevelSequenceObject: public None
{
public:
	Struct FString                                     ComponentName                                      // 0x20(0x10)
};


// Size 0xa0
class LevelSequenceObjectReferenceMap: public None
{
public:
};


// Size 0x20
class LevelSequenceObjectReference: public None
{
public:
};


// Size 0x90
class LevelSequencePlayerSnapshot: public None
{
public:
	Struct FText                                       MasterName                                         // 0x0(0x38)
	float                                              MasterTime                                         // 0x38(0x4)
	Struct FText                                       CurrentShotName                                    // 0x40(0x38)
	float                                              CurrentShotLocalTime                               // 0x78(0x4)
	Class CameraComponent*                             CameraComponent                                    // 0x80(0x8)
	Struct LevelSequenceSnapshotSettings               Settings                                           // 0x88(0x8)
};


// Size 0x8
class LevelSequenceSnapshotSettings: public None
{
public:
	byte                                               ZeroPadAmount                                      // 0x0(0x1)
	float                                              FrameRate                                          // 0x4(0x4)
};


// Size 0x28
class LevelSequencePlaybackSettings: public None
{
public:
};


// Size 0x1
class BoundActorProxy: public None
{
public:
};


}