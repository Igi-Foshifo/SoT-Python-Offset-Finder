namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x248
class CoherentUIGTBaseComponent: public ActorComponent
{
public:
	Class TextureRenderTarget2D*                       Texture                                            // 0x170(0x8)
	byte                                               Filter                                             // 0x178(0x1)
	bool                                               bReceiveInput                                      // 0x179(0x1)
	bool                                               bReceiveInputWhenTransparent                       // 0x17a(0x1)
	bool                                               AllowPerformanceWarnings                           // 0x17b(0x1)
	float                                              ExecuteJSTimersThresholdMs                         // 0x17c(0x4)
	float                                              UpdateStylesAndLayoutThresholdMs                   // 0x180(0x4)
	float                                              RecordRenderingCommandsThresholdMs                 // 0x184(0x4)
	float                                              PaintWarningThresholdMs                            // 0x188(0x4)
	int                                                LayersCountThreshold                               // 0x18c(0x4)
	int                                                LayerWidthThreshold                                // 0x190(0x4)
	int                                                LayerHeightThreshold                               // 0x194(0x4)
	bool                                               bEnableAdditionalDefaultStyles                     // 0x198(0x1)
	bool                                               bDelayedUpdate                                     // 0x199(0x1)
};


// Size 0x38
class CoherentUIGTComponent: public CoherentUIGTBaseComponent
{
public:
	Struct FString                                     URL                                                // 0x310(0x10)
	int                                                Width                                              // 0x320(0x4)
	int                                                Height                                             // 0x324(0x4)
	bool                                               ManualTexture                                      // 0x328(0x1)
	float                                              ClickThroughAlphaThreshold                         // 0x32c(0x4)
	bool                                               Transparent                                        // 0x330(0x1)
};


// Size 0x30
class CoherentUIGTLiveView: public ActorComponent
{
public:
	Struct FString                                     LinkName                                           // 0xc8(0x10)
	Class TextureRenderTarget2D*                       Texture                                            // 0xd8(0x8)
};


// Size 0x8
class CoherentUIGTRenderToTextureLiveView: public CoherentUIGTLiveView
{
public:
};


// Size 0x0
class CoherentUIGTAssetReferencer: public Object
{
public:
};


// Size 0x50
class CoherentUIGTSystem: public Actor
{
public:
};


// Size 0x90
class CoherentUIGTJSEvent: public Object
{
public:
	TArray<class StructTypes*>                         StructTypes                                        // 0xa8(0x10)
};


// Size 0x18
class CoherentUIGTJSPayload: public Object
{
public:
	Struct FString                                     EventName                                          // 0x28(0x10)
};


// Size 0x0
class CoherentUIGTEventHelpers: public Object
{
public:
};


// Size 0x28
class CoherentUIGTHUD: public CoherentUIGTBaseComponent
{
public:
	Struct StringAssetReference                        HUDMaterialName                                    // 0x310(0x10)
	Class Material*                                    HUDMaterial                                        // 0x320(0x8)
	Class MaterialInstanceDynamic*                     HUDMaterialInstance                                // 0x328(0x8)
};


// Size 0x0
class CoherentUIGTBlueprintFunctionLibrary: public BlueprintFunctionLibrary
{
public:
};


// Size 0x98
class CoherentUIGTGameHUD: public HUD
{
public:
	Class CoherentUIGTHUD*                             CoherentUIGTHUD                                    // 0x4c8(0x8)
};


// Size 0x60
class CoherentUIGTInputActor: public Actor
{
public:
};


// Size 0x40
class CoherentUIGTSettings: public Object
{
public:
	bool                                               EnableLiveReload                                   // 0x28(0x1)
	int                                                InspectorPort                                      // 0x2c(0x4)
	int                                                WebdriverPort                                      // 0x30(0x4)
	bool                                               EnableWebSecurity                                  // 0x34(0x1)
	bool                                               EnableLocalization                                 // 0x35(0x1)
	bool                                               RunAsynchronous                                    // 0x36(0x1)
	bool                                               bRecursivelyBindUStructs                           // 0x37(0x1)
	bool                                               LoadSystemFonts                                    // 0x38(0x1)
	bool                                               AllowPerformanceWarningsInEditor                   // 0x39(0x1)
	bool                                               ShowWarningsOnScreen                               // 0x3a(0x1)
	byte                                               LogSeverity                                        // 0x3b(0x1)
	bool                                               bPaintToBackBuffer                                 // 0x3c(0x1)
	bool                                               bRespectTitleSafeZone                              // 0x3d(0x1)
	bool                                               bRespectLetterboxing                               // 0x3e(0x1)
	Struct FString                                     HUDMaterialName                                    // 0x40(0x10)
	Struct FString                                     CoUIResourcesRoot                                  // 0x50(0x10)
	bool                                               TickWhileGameIsPaused                              // 0x60(0x1)
	byte                                               MSAA                                               // 0x61(0x1)
};


// Size 0x2a0
class CoherentUIGTWidget: public Widget
{
public:
	Class Actor*                                       Owner                                              // 0x158(0x8)
	byte                                               Filter                                             // 0x1f8(0x1)
	bool                                               bReceiveInput                                      // 0x1f9(0x1)
	bool                                               bReceiveInputWhenTransparent                       // 0x1fa(0x1)
	bool                                               bGammaCorrectedMaterial                            // 0x1fb(0x1)
	bool                                               AllowPerformanceWarnings                           // 0x1fc(0x1)
	float                                              ExecuteJSTimersThresholdMs                         // 0x200(0x4)
	float                                              UpdateStylesAndLayoutThresholdMs                   // 0x204(0x4)
	float                                              RecordRenderingCommandsThresholdMs                 // 0x208(0x4)
	float                                              PaintWarningThresholdMs                            // 0x20c(0x4)
	int                                                LayersCountThreshold                               // 0x210(0x4)
	int                                                LayerWidthThreshold                                // 0x214(0x4)
	int                                                LayerHeightThreshold                               // 0x218(0x4)
	bool                                               bEnableAdditionalDefaultStyles                     // 0x21c(0x1)
	Struct FString                                     URL                                                // 0x3c0(0x10)
	float                                              ClickThroughAlphaThreshold                         // 0x3d0(0x4)
	bool                                               Transparent                                        // 0x3d4(0x1)
};


}