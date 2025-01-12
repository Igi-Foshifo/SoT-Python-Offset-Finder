// Generated by DougTheDruid#2784 on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class AthenaLoadingScreenBlueprintFunctionLibrary: public BlueprintFunctionLibrary
{
public:
};


// Size 0x200 (Full Size[0x228] - InheritedSize[0x28]
class SlateLoadingScreenParams: public DataAsset
{
public:
	bool                                                         DrawBackground;                                    // 0x28(0x1)
	bool                                                         DrawBackgroundImage;                               // 0x29(0x1)
	bool                                                         DrawTips;                                          // 0x2a(0x1)
	bool                                                         DrawSpinner;                                       // 0x2b(0x1)
	float                                                        ViewportWidth;                                     // 0x2c(0x4)
	float                                                        ViewportHeight;                                    // 0x30(0x4)
	float                                                        FooterHeight;                                      // 0x34(0x4)
	bool                                                         DrawSpinnerText;                                   // 0x38(0x1)
	char                                                         pad0x7_8MZ90[0x7];                                 // 0x39(0x7)
	Struct StringAssetReference                                  PlaceholderSpinnerTexture;                         // 0x40(0x10)
	Struct LinearColor                                           BackgroundColour;                                  // 0x50(0x10)
	Struct SlateLoadingScreenImageParams                         PrimaryImage;                                      // 0x60(0x30)
	TArray<struct CyclingImages>                                 CyclingImages;                                     // 0x90(0x10)
	int                                                          MaxNumImagesPerLoad;                               // 0xa0(0x4)
	char                                                         pad0x4_UTRLD[0x4];                                 // 0xa4(0x4)
	Struct FText                                                 SpinnerText;                                       // 0xa8(0x38)
	Struct SlateColor                                            SpinnerTextColour;                                 // 0xe0(0x30)
	Struct SlateFontInfo                                         SpinnerTextFont;                                   // 0x110(0x40)
	float                                                        SpinnerSize;                                       // 0x150(0x4)
	Struct Margin                                                SpinnerMargin;                                     // 0x154(0x10)
	float                                                        SpinnerPadding;                                    // 0x164(0x4)
	Struct StringAssetReference                                  SpinnerIcon;                                       // 0x168(0x10)
	Struct Margin                                                TipsMargin;                                        // 0x178(0x10)
	float                                                        TipWrapLength;                                     // 0x188(0x4)
	float                                                        TipDisplayDuration;                                // 0x18c(0x4)
	float                                                        TipDurationBetweenTips;                            // 0x190(0x4)
	int                                                          NumTipsPerImage;                                   // 0x194(0x4)
	Struct SlateFontInfo                                         LoadingTipFont;                                    // 0x198(0x40)
	float                                                        LoadingTipFontLineHeightPercentage;                // 0x1d8(0x4)
	char                                                         pad0x4_D1G1R[0x4];                                 // 0x1dc(0x4)
	TArray<struct FText>                                         LoadingScreenTips;                                 // 0x1e0(0x10)
	Struct SlateColor                                            LoadingScreenTipColour;                            // 0x1f0(0x30)
	bool                                                         AllowSyncronousAssetLoad;                          // 0x220(0x1)
	char                                                         pad0x9_71S5W[0x9];                                 // 0x21f(0x9)
};


// Size 0x30 (Full Size[0x68] - InheritedSize[0x38]
class AthenaLoadingScreenParams: public DeveloperSettings
{
public:
	Struct StringAssetReference                                  BootLoadingScreen;                                 // 0x38(0x10)
	Struct StringAssetReference                                  TeleportLoadingScreen;                             // 0x48(0x10)
	Struct StringAssetReference                                  AdventureLoadingScreens;                           // 0x58(0x10)
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class LoadingUtilities: public BlueprintFunctionLibrary
{
public:
};


}