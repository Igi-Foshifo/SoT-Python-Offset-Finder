// Generated by DougTheDruid#2784 on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x278 (Full Size[0x2a0] - InheritedSize[0x28]
class SeasonPopupAsset: public DataAsset
{
public:
	struct FName                                                 ThemeId;                                           // 0x28(0x8)
	TArray<struct TierInfos>                                     TierInfos;                                         // 0x30(0x10)
	TArray<struct TrialInfos>                                    TrialInfos;                                        // 0x40(0x10)
	TArray<struct DeedInfos>                                     DeedInfos;                                         // 0x50(0x10)
	TArray<struct RenownActionInfos>                             RenownActionInfos;                                 // 0x60(0x10)
	Struct SeasonIconPopupAsset                                  SeasonInfo;                                        // 0x70(0x68)
	Struct SeasonIconPopupAsset                                  LevelIncreaseInfo;                                 // 0xd8(0x68)
	Struct SeasonIconPopupAsset                                  RewardInfo;                                        // 0x140(0x68)
	Struct SeasonIconPopupAsset                                  MultipleRewardsInfo;                               // 0x1a8(0x68)
	Struct StringAssetReference                                  BackgroundImage;                                   // 0x210(0x10)
	Struct FString                                               DefaultToastSfxEventName;                          // 0x220(0x10)
	Struct FString                                               DefaultToastEventName;                             // 0x230(0x10)
	Struct FString                                               DefaultToastSwitchName;                            // 0x240(0x10)
	Struct FString                                               DefaultToastSwitchValue;                           // 0x250(0x10)
	Struct FString                                               DefaultChatSfxEventName;                           // 0x260(0x10)
	Struct FString                                               DefaultChatEventName;                              // 0x270(0x10)
	Struct FString                                               DefaultChatSwitchName;                             // 0x280(0x10)
	Struct FString                                               DefaultChatSwitchValue;                            // 0x290(0x10)
};


// Size 0x10 (Full Size[0x38] - InheritedSize[0x28]
class SeasonPopupListAsset: public DataAsset
{
public:
	TArray<class SeasonPopupAsset*>                              SeasonPopups;                                      // 0x28(0x10)
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class SeasonProgressionUIInterface: public Interface
{
public:
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class SeasonProgressionUITelemetryInterface: public Interface
{
public:
};


// Size 0xe8 (Full Size[0x1b0] - InheritedSize[0xc8]
class SeasonProgressionUIComponent: public ActorComponent
{
public:
	char                                                         pad0x20_APQGX[0x20];                               // 0xc8(0x20)
	TArray<struct DetailsNavigationDesc>                         DetailsNavigationDesc;                             // 0xe8(0x10)
	Struct SeasonProgressionUITelemetryFragment                  NextReceivedEventsTelemetryData;                   // 0xf8(0x18)
	char                                                         pad0xd0_7XQYX[0xd0];                               // 0x10e(0xd0)
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class SeasonProgressionUIServiceInterface: public Interface
{
public:
};


// Size 0x1c0 (Full Size[0x588] - InheritedSize[0x3c8]
class SeasonProgressionUIService: public Actor
{
public:
	char                                                         pad0x30_OLSWV[0x30];                               // 0x3c8(0x30)
	Class SeasonPopupListAsset*                                  SeasonPopupListAsset;                              // 0x3f8(0x8)
	char                                                         pad0x198_7ZZFT[0x198];                             // 0x3fe(0x198)
};


// Size 0x10 (Full Size[0x38] - InheritedSize[0x28]
class SeasonProgressionUISettings: public Object
{
public:
	Struct StringAssetReference                                  SeasonPopupListAsset;                              // 0x28(0x10)
};


}