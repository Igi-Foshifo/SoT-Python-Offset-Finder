namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x18
class CoherentUIGTLoadingScreenSettings: public None
{
public:
	float                                              MinimumLoadingScreenDisplayTime                    // 0x0(0x4)
	bool                                               bAutoCompleteWhenLoadingCompletes                  // 0x4(0x1)
	bool                                               bWaitForManualStop                                 // 0x5(0x1)
	Struct FString                                     URL                                                // 0x8(0x10)
};


// Size 0x14
class CoherentUIGTViewInfo: public None
{
public:
	int                                                Width                                              // 0x0(0x4)
	int                                                Height                                             // 0x4(0x4)
	bool                                               IsTransparent                                      // 0x8(0x1)
	float                                              ClickThroughAlphaThreshold                         // 0xc(0x4)
	float                                              AnimationFrameDefer                                // 0x10(0x4)
};


}