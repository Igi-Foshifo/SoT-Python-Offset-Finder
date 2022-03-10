namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x20
class SlateLoadingScreenImageParams: public None
{
public:
	Struct StringAssetReference                        ImageAsset                                         // 0x0(0x10)
	TArray<Struct FText>                               ImageTips                                          // 0x10(0x10)
};


// Size 0x1
class EventAthenaLoadingScreenStateResponse: public None
{
public:
	bool                                               IsVisible                                          // 0x0(0x1)
};


// Size 0x1
class EventAthenaLoadingScreenStateRequest: public None
{
public:
};


// Size 0x10
class EventAthenaLoadingScreenBlockUntilUIIntialisedClear: public None
{
public:
	Struct FString                                     Description                                        // 0x0(0x10)
};


// Size 0x10
class EventAthenaLoadingScreenBlockUntilUIIntialised: public None
{
public:
	Struct FString                                     Description                                        // 0x0(0x10)
};


// Size 0x1
class EventAthenaLoadingScreenClose: public None
{
public:
};


// Size 0x1
class EventAthenaLoadingScreenOpen: public None
{
public:
};


}