namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x68
class SeasonIconPopupAsset: public None
{
public:
	Struct StringAssetReference                        GlowIcon                                           // 0x0(0x10)
	Struct StringAssetReference                        Icon                                               // 0x10(0x10)
	Struct FString                                     ToastSfxEventName                                  // 0x20(0x10)
	Struct FString                                     ToastEventName                                     // 0x30(0x10)
	Struct FString                                     ToastSwitchName                                    // 0x40(0x10)
	Struct FString                                     ToastSwitchValue                                   // 0x50(0x10)
	float                                              ToastHoldDuration                                  // 0x60(0x4)
};


// Size 0x80
class SeasonGoalPopupAsset: public None
{
public:
	struct FName                                       Category                                           // 0x0(0x8)
	Struct StringAssetReference                        GlowIcon                                           // 0x8(0x10)
	Struct StringAssetReference                        Icon                                               // 0x18(0x10)
	Struct StringAssetReference                        ChatIcon                                           // 0x28(0x10)
	Struct FString                                     ToastSfxEventName                                  // 0x38(0x10)
	Struct FString                                     ToastEventName                                     // 0x48(0x10)
	Struct FString                                     ToastSwitchName                                    // 0x58(0x10)
	Struct FString                                     ToastSwitchValue                                   // 0x68(0x10)
	float                                              ToastHoldDuration                                  // 0x78(0x4)
};


// Size 0x68
class SeasonNotificationContent: public None
{
public:
	Struct StringAssetReference                        GlowIcon                                           // 0x0(0x10)
	Struct StringAssetReference                        Icon                                               // 0x10(0x10)
	Struct FString                                     SfxEventName                                       // 0x20(0x10)
	Struct FString                                     EventName                                          // 0x30(0x10)
	Struct FString                                     SwitchName                                         // 0x40(0x10)
	Struct FString                                     SwitchValue                                        // 0x50(0x10)
	float                                              ToastHoldDuration                                  // 0x60(0x4)
};


// Size 0x80
class DeedProgressDesc: public None
{
public:
	Struct FString                                     Description                                        // 0x0(0x10)
	Struct FString                                     Icon                                               // 0x10(0x10)
	Struct NavigationDesc                              NavigationDesc                                     // 0x20(0x14)
	int                                                ProgressValue                                      // 0x34(0x4)
	int                                                Threshold                                          // 0x38(0x4)
	Struct GenericPopupAudioDescriptor                 Audio                                              // 0x40(0x40)
};


// Size 0x14
class NavigationDesc: public None
{
public:
	byte                                               Action                                             // 0x0(0x1)
	Struct Guid                                        Id                                                 // 0x4(0x10)
};


// Size 0x60
class SeasonsChatNotification: public None
{
public:
	Struct FString                                     IconUrl                                            // 0x0(0x10)
	Struct FString                                     Message                                            // 0x10(0x10)
	Struct GenericPopupAudioDescriptor                 Audio                                              // 0x20(0x40)
};


// Size 0x1
class SeasonsDataRefreshEvent: public None
{
public:
};


// Size 0x14
class OpenSeasonsMenuEvent: public None
{
public:
	byte                                               NavigationAction                                   // 0x0(0x1)
	Struct Guid                                        Id                                                 // 0x4(0x10)
};


// Size 0x1
class DisableMoreButtonEvent: public None
{
public:
	byte                                               MoreButtonSource                                   // 0x0(0x1)
};


// Size 0x18
class EnableMoreButtonEvent: public None
{
public:
	byte                                               MoreButtonSource                                   // 0x0(0x1)
	Struct NavigationDesc                              Navigation                                         // 0x4(0x14)
};


// Size 0x80
class ShowDeedProgressEvent: public None
{
public:
	Struct DeedProgressDesc                            DeedProgressDesc                                   // 0x0(0x80)
};


// Size 0x60
class SeasonsChatNotificationEvent: public None
{
public:
	Struct SeasonsChatNotification                     SeasonsChatNotification                            // 0x0(0x60)
};


// Size 0x8
class SeasonProgressionUITelemetryFragmentInput: public None
{
public:
};


// Size 0x18
class SeasonProgressionUITelemetryFragment: public None
{
public:
	TArray<Struct SeasonProgressionUIEventTypeTelemetryFragment> ReceivedEventsData                                 // 0x0(0x10)
	int                                                TotalNumReceivedEvents                             // 0x10(0x4)
};


// Size 0x18
class SeasonProgressionUIEventTypeTelemetryFragment: public None
{
public:
	Struct FString                                     EventName                                          // 0x0(0x10)
	int                                                NumReceivedEvents                                  // 0x10(0x4)
};


// Size 0xa0
class SeasonsPopupEvent: public None
{
public:
	TArray<Text None>                                  Text                                               // 0x0(0x10)
	TArray<Str >                                       Images                                             // 0x10(0x10)
	Struct FString                                     Background                                         // 0x20(0x10)
	Struct GenericPopupAudioDescriptor                 Audio                                              // 0x30(0x40)
	TArray<Byte Audio>                                 StyleModifiers                                     // 0x70(0x10)
	int                                                Rank                                               // 0x80(0x4)
	Struct NavigationDesc                              NavigationDesc                                     // 0x84(0x14)
	float                                              HoldDuration                                       // 0x98(0x4)
};


}