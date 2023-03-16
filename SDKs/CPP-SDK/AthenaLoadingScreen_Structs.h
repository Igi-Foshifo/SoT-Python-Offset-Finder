// Generated by DougTheDruid#2784 on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x30
struct SlateLoadingScreenImageParams
{
public:
	Struct StringAssetReference                                  ImageAsset;                                        // 0x0(0x10)
	TArray<struct FText>                                         ImageTips;                                         // 0x10(0x10)
	Struct SlateLoadingScreenAdvancedTipsParams                  AdvancedTips;                                      // 0x20(0x10)
};


// Size 0x10
struct SlateLoadingScreenAdvancedTipsParams
{
public:
	TArray<struct TipDescriptions>                               TipDescriptions;                                   // 0x0(0x10)
};


// Size 0xc0
struct SlateLoadingScreenAdvancedTipDescription
{
public:
	Struct FText                                                 Text;                                              // 0x0(0x38)
	float                                                        Centre;                                            // 0x38(0x4)
	float                                                        TopEdge;                                           // 0x3c(0x4)
	float                                                        Width;                                             // 0x40(0x4)
	float                                                        Footer;                                            // 0x44(0x4)
	Struct SlateFontInfo                                         Font;                                              // 0x48(0x40)
	Struct SlateColor                                            Colour;                                            // 0x88(0x30)
	float                                                        LineHeightPercentage;                              // 0xb8(0x4)
};


// Size 0x1
struct EventAthenaLoadingScreenStateResponse
{
public:
	bool                                                         IsVisible;                                         // 0x0(0x1)
};


// Size 0x1
struct EventAthenaLoadingScreenStateRequest
{
public:
};


// Size 0x10
struct EventAthenaLoadingScreenBlockUntilUIIntialisedClear
{
public:
	Struct FString                                               Description;                                       // 0x0(0x10)
};


// Size 0x10
struct EventAthenaLoadingScreenBlockUntilUIIntialised
{
public:
	Struct FString                                               Description;                                       // 0x0(0x10)
};


// Size 0x1
struct EventAthenaLoadingScreenClose
{
public:
};


// Size 0x1
struct EventAthenaLoadingScreenOpen
{
public:
};


}