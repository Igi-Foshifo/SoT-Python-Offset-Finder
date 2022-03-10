namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x0
class AthenaLoadingScreenBlueprintFunctionLibrary: public BlueprintFunctionLibrary
{
public:
};


// Size 0x1f0
class SlateLoadingScreenParams: public DataAsset
{
public:
	bool                                               DrawBackground                                     // 0x28(0x1)
	bool                                               DrawBackgroundImage                                // 0x29(0x1)
	bool                                               DrawTips                                           // 0x2a(0x1)
	bool                                               DrawSpinner                                        // 0x2b(0x1)
	float                                              ViewportWidth                                      // 0x2c(0x4)
	float                                              ViewportHeight                                     // 0x30(0x4)
	float                                              FooterHeight                                       // 0x34(0x4)
	bool                                               DrawSpinnerText                                    // 0x38(0x1)
	Struct StringAssetReference                        PlaceholderSpinnerTexture                          // 0x40(0x10)
	Struct LinearColor                                 BackgroundColour                                   // 0x50(0x10)
	Struct SlateLoadingScreenImageParams               PrimaryImage                                       // 0x60(0x20)
	TArray<Struct PrimaryImage>                        CyclingImages                                      // 0x80(0x10)
	int                                                MaxNumImagesPerLoad                                // 0x90(0x4)
	Struct FText                                       SpinnerText                                        // 0x98(0x38)
	Struct SlateColor                                  SpinnerTextColour                                  // 0xd0(0x30)
	Struct SlateFontInfo                               SpinnerTextFont                                    // 0x100(0x40)
	float                                              SpinnerSize                                        // 0x140(0x4)
	Struct Margin                                      SpinnerMargin                                      // 0x144(0x10)
	float                                              SpinnerPadding                                     // 0x154(0x4)
	Struct StringAssetReference                        SpinnerIcon                                        // 0x158(0x10)
	Struct Margin                                      TipsMargin                                         // 0x168(0x10)
	float                                              TipWrapLength                                      // 0x178(0x4)
	float                                              TipDisplayDuration                                 // 0x17c(0x4)
	float                                              TipDurationBetweenTips                             // 0x180(0x4)
	int                                                NumTipsPerImage                                    // 0x184(0x4)
	Struct SlateFontInfo                               LoadingTipFont                                     // 0x188(0x40)
	float                                              LoadingTipFontLineHeightPercentage                 // 0x1c8(0x4)
	TArray<Struct FText>                               LoadingScreenTips                                  // 0x1d0(0x10)
	Struct SlateColor                                  LoadingScreenTipColour                             // 0x1e0(0x30)
	bool                                               AllowSyncronousAssetLoad                           // 0x210(0x1)
};


// Size 0x40
class AthenaLoadingScreenParams: public DeveloperSettings
{
public:
	Struct StringAssetReference                        BootLoadingScreen                                  // 0x38(0x10)
	Struct StringAssetReference                        TeleportLoadingScreen                              // 0x48(0x10)
	Struct StringAssetReference                        AdventureLoadingScreens                            // 0x58(0x10)
	Struct StringAssetReference                        ArenaLoadingScreens                                // 0x68(0x10)
};


// Size 0x0
class LoadingUtilities: public BlueprintFunctionLibrary
{
public:
};


}