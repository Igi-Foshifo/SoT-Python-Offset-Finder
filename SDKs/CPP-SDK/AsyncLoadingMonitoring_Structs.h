// Generated by DougTheDruid#2784 on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x38
struct AsyncExcessiveLoadTelemetryEvent
{
public:
	int                                                          FrameCounter;                                      // 0x0(0x4)
	char                                                         pad0x4_JDP6Q[0x4];                                 // 0x4(0x4)
	double                                                       ExpectedAsyncLoadingTime;                          // 0x8(0x8)
	double                                                       ActualAsyncLoadingTime;                            // 0x10(0x8)
	TArray<Str AssetRequestList>                                 AssetRequestList;                                  // 0x18(0x10)
	TArray<Str LoadedAssetList>                                  LoadedAssetList;                                   // 0x28(0x10)
};


}