namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x18
class StatusResponseApplyOneShotStatus: public StatusResponse
{
public:
	Struct Status                                      StatusToApply                                      // 0x30(0x18)
};


// Size 0x20
class StatusResponseApplyPersistentStatus: public StatusResponse
{
public:
	Struct Status                                      StatusToApply                                      // 0x30(0x18)
	float                                              DurationMultiplier                                 // 0x48(0x4)
};


// Size 0x10
class StatusResponseCancelStatus: public StatusResponse
{
public:
	TArray<Class HealthPoolChangeIntensityMultiplier>  Status                                             // 0x30(0x10)
};


// Size 0x0
class StatusResponseCook: public StatusResponse
{
public:
};


// Size 0x8
class StatusResponseHealthRegenerationPoolChange: public StatusResponse
{
public:
	float                                              HealthPoolChangeIntensityMultiplier                // 0x30(0x4)
};


// Size 0x40
class StatusResponseReportNoiseEvent: public StatusResponse
{
public:
	class                                              NoiseInstigator                                    // 0x30(0x8)
	struct FName                                       NoiseTag                                           // 0x38(0x8)
	float                                              NoiseRange                                         // 0x40(0x4)
	float                                              NoiseLoudness                                      // 0x44(0x4)
	bool                                               NoiseMultipleTicks                                 // 0x48(0x1)
	float                                              NoiseTimerTick                                     // 0x4c(0x4)
};


// Size 0x10
class StatusResponseSetScalarParamOnCharacter: public StatusResponse
{
public:
	TArray<Struct Status>                              ParamsToChange                                     // 0x30(0x10)
};


// Size 0x10
class StatusResponseSuspendStatus: public StatusResponse
{
public:
	TArray<Class MaxWheelTurbulence>                   Status                                             // 0x30(0x10)
};


}