namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x58
class MovieSceneSignedObject: public Object
{
public:
	Struct Guid                                        Signature                                          // 0x28(0x10)
};


// Size 0x80
class MovieScene: public MovieSceneSignedObject
{
public:
	TArray<Struct BindingData>                         Spawnables                                         // 0x80(0x10)
	TArray<Struct Spawnables>                          Possessables                                       // 0x90(0x10)
	TArray<Struct Possessables>                        ObjectBindings                                     // 0xa0(0x10)
	TArray<class MasterTracks*>                        MasterTracks                                       // 0xb0(0x10)
	Class MovieSceneTrack*                             CameraCutTrack                                     // 0xc0(0x8)
	Struct FloatRange                                  SelectionRange                                     // 0xc8(0x10)
	Struct FloatRange                                  PlaybackRange                                      // 0xd8(0x10)
	bool                                               bForceFixedFrameIntervalPlayback                   // 0xe8(0x1)
	float                                              FixedFrameInterval                                 // 0xec(0x4)
	float                                              InTime                                             // 0xf0(0x4)
	float                                              OutTime                                            // 0xf4(0x4)
	float                                              StartTime                                          // 0xf8(0x4)
	float                                              EndTime                                            // 0xfc(0x4)
};


// Size 0x0
class MovieSceneBindingOverridesInterface: public Interface
{
public:
};


// Size 0x70
class MovieSceneBindingOverrides: public Object
{
public:
	TArray<Struct ChildObjectBindingStrings>           BindingData                                        // 0x30(0x10)
};


// Size 0x0
class MovieSceneBindingOwnerInterface: public Interface
{
public:
};


// Size 0x48
class MovieSceneFolder: public Object
{
public:
	struct FName                                       FolderName                                         // 0x28(0x8)
	TArray<class ChildFolders*>                        ChildFolders                                       // 0x30(0x10)
	TArray<class ChildMasterTracks*>                   ChildMasterTracks                                  // 0x40(0x10)
	TArray<Str >                                       ChildObjectBindingStrings                          // 0x50(0x10)
};


// Size 0x5d8
class MovieSceneSequencePlayer: public Object
{
public:
	bool                                               bIsPlaying                                         // 0x3c0(0x1)
	bool                                               bReversePlayback                                   // 0x3c0(0x1)
	bool                                               bPendingFirstUpdate                                // 0x3c0(0x1)
	Class MovieSceneSequence*                          Sequence                                           // 0x3c8(0x8)
	float                                              TimeCursorPosition                                 // 0x3d0(0x4)
	float                                              StartTime                                          // 0x3d4(0x4)
	float                                              EndTime                                            // 0x3d8(0x4)
	int                                                CurrentNumLoops                                    // 0x3dc(0x4)
	Struct MovieSceneSequencePlaybackSettings          PlaybackSettings                                   // 0x3f0(0x28)
};


// Size 0x18
class MovieSceneSection: public MovieSceneSignedObject
{
public:
	Struct MovieSceneSectionEvalOptions                EvalOptions                                        // 0x80(0x2)
	float                                              StartTime                                          // 0x84(0x4)
	float                                              EndTime                                            // 0x88(0x4)
	int                                                RowIndex                                           // 0x8c(0x4)
	int                                                OverlapPriority                                    // 0x90(0x4)
	bool                                               bIsActive                                          // 0x94(0x1)
	bool                                               bIsLocked                                          // 0x94(0x1)
	bool                                               bIsInfinite                                        // 0x94(0x1)
};


// Size 0x8
class MovieSceneTrack: public MovieSceneSignedObject
{
public:
	Struct MovieSceneTrackEvalOptions                  EvalOptions                                        // 0x80(0x4)
};


// Size 0x228
class MovieSceneSequence: public MovieSceneSignedObject
{
public:
	Struct CachedMovieSceneEvaluationTemplate          EvaluationTemplate                                 // 0x80(0x220)
	Struct MovieSceneTrackCompilationParams            TemplateParameters                                 // 0x2a0(0x1)
	bool                                               bParentContextsAreSignificant                      // 0x2a1(0x1)
};


// Size 0x0
class MovieSceneNameableTrack: public MovieSceneTrack
{
public:
};


}