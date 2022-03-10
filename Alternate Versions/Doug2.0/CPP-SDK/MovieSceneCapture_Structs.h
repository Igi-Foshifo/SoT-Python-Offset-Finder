namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x8
class CaptureProtocolID: public None
{
public:
	struct FName                                       Identifier                                         // 0x0(0x8)
};


// Size 0x50
class MovieSceneCaptureSettings: public None
{
public:
	Struct DirectoryPath                               OutputDirectory                                    // 0x0(0x10)
	bool                                               bCreateTemporaryCopiesOfLevels                     // 0x10(0x1)
	class                                              GameModeOverride                                   // 0x18(0x8)
	Struct FString                                     OutputFormat                                       // 0x20(0x10)
	bool                                               bOverwriteExisting                                 // 0x30(0x1)
	bool                                               bUseRelativeFrameNumbers                           // 0x31(0x1)
	int                                                HandleFrames                                       // 0x34(0x4)
	byte                                               ZeroPadFrameNumbers                                // 0x38(0x1)
	int                                                FrameRate                                          // 0x3c(0x4)
	Struct CaptureResolution                           Resolution                                         // 0x40(0x8)
	bool                                               bEnableTextureStreaming                            // 0x48(0x1)
	bool                                               bCinematicEngineScalability                        // 0x49(0x1)
	bool                                               bCinematicMode                                     // 0x4a(0x1)
	bool                                               bAllowMovement                                     // 0x4b(0x1)
	bool                                               bAllowTurning                                      // 0x4c(0x1)
	bool                                               bShowPlayer                                        // 0x4d(0x1)
	bool                                               bShowHUD                                           // 0x4e(0x1)
};


// Size 0x8
class CaptureResolution: public None
{
public:
};


// Size 0x10
class CompositionGraphCapturePasses: public None
{
public:
	TArray<Str None>                                   Value                                              // 0x0(0x10)
};


}