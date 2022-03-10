namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x0
class TimeInterface: public Interface
{
public:
};


// Size 0x0
class CustomizableTimeInterface: public Interface
{
public:
};


// Size 0x0
class DebugTimeInterface: public Interface
{
public:
};


// Size 0x0
class LocationProviderInterface: public Interface
{
public:
};


// Size 0x0
class TimeBlueprintLibrary: public BlueprintFunctionLibrary
{
public:
};


// Size 0x0
class TimeFormatterInterface: public Interface
{
public:
};


// Size 0x110
class TimeService: public Actor
{
public:
	Struct Timespan                                    GameWorldTimeOffset                                // 0x408(0x8)
	double                                             ServiceTimeQueryRapidFrequencyOffsetMax            // 0x420(0x8)
	float                                              ServiceTimeQueryRapidFrequencyInSeconds            // 0x428(0x4)
	float                                              ServiceTimeQueryFrequencyInSeconds                 // 0x42c(0x4)
	float                                              ClientTimeUpdateFrequencyInSeconds                 // 0x430(0x4)
	float                                              SunriseTimeHours                                   // 0x434(0x4)
	float                                              SunsetTimeHours                                    // 0x438(0x4)
	float                                              LocalTimeUpdateAdjustMaxTimeDelta                  // 0x43c(0x4)
	float                                              MinLocalTimeUpdateAdjustPercentageToSlowDown       // 0x440(0x4)
	float                                              MaxLocalTimeUpdateAdjustPercentageToSlowDown       // 0x444(0x4)
	float                                              MinLocalTimeUpdateAdjustPercentageToSpeedUp        // 0x448(0x4)
	float                                              MaxLocalTimeUpdateAdjustPercentageToSpeedUp        // 0x44c(0x4)
	Struct ReplicatedAuthoritativeTime                 ReplicatedServerTime                               // 0x4a0(0x10)
};


// Size 0x8
class DebugTimeService: public TimeService
{
public:
};


// Size 0x8
class CustomizableTimeService: public DebugTimeService
{
public:
};


}