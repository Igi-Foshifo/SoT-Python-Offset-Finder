namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x88
class ContestMatchmakingServerRequestModel: public None
{
public:
	Struct Guid                                        ServerId                                           // 0x0(0x10)
	Struct FString                                     VmId                                               // 0x10(0x10)
	Struct FString                                     PrivateServerId                                    // 0x20(0x10)
	Struct FString                                     ServerLocation                                     // 0x30(0x10)
	TArray<Str >                                       PlayModeTags                                       // 0x48(0x10)
	TArray<Str >                                       PlayModeStates                                     // 0x58(0x10)
	TArray<Struct ServerCrewModel>                     Crews                                              // 0x68(0x10)
	Struct Guid                                        RequestCorrelationId                               // 0x78(0x10)
};


// Size 0x60
class ServerCrewModel: public None
{
public:
	Struct Guid                                        CrewId                                             // 0x0(0x10)
	Struct UniqueNetIdRepl                             UserId                                             // 0x10(0x18)
	Struct Guid                                        ServerId                                           // 0x28(0x10)
	int                                                SessionType                                        // 0x38(0x4)
	TArray<Struct SessionType>                         Positions                                          // 0x40(0x10)
	TArray<UInt32 >                                    Resources                                          // 0x50(0x10)
};


// Size 0x78
class ServerCrewResponseModel: public None
{
public:
	TArray<Struct OptionalPlayModeModel>               Crews                                              // 0x0(0x10)
	Struct Timespan                                    RetryAfter                                         // 0x60(0x8)
	Struct Timespan                                    MigrationThreshold                                 // 0x68(0x8)
	Struct Timespan                                    ExpireAfter                                        // 0x70(0x8)
};


// Size 0x50
class OptionalPlayModeModel: public None
{
public:
};


// Size 0xc0
class ServerCrewRequestModel: public None
{
public:
	Struct Guid                                        ServerId                                           // 0x0(0x10)
	Struct FString                                     VmId                                               // 0x10(0x10)
	Struct FString                                     PrivateServerId                                    // 0x20(0x10)
	Struct FString                                     ServerLocation                                     // 0x30(0x10)
	TArray<Str >                                       PlayModeTags                                       // 0x48(0x10)
	Struct FString                                     PlayModeState                                      // 0x58(0x10)
	int                                                CrewCount                                          // 0x68(0x4)
	int                                                CrewCountBucket                                    // 0x6c(0x4)
	int                                                CrewMin                                            // 0x70(0x4)
	int                                                CrewMax                                            // 0x74(0x4)
	TArray<Int >                                       CrewSessionTypes                                   // 0x78(0x10)
	Struct Timespan                                    Uptime                                             // 0x88(0x8)
	Struct ServerContendedModel                        Contended                                          // 0x90(0x30)
};


// Size 0x30
class ServerContendedModel: public None
{
public:
	TArray<Struct Uptime>                              Positions                                          // 0x0(0x10)
	TArray<Struct ServerRegionModel>                   Regions                                            // 0x10(0x10)
	TArray<UInt32 >                                    Resources                                          // 0x20(0x10)
};


// Size 0xc
class ServerRegionModel: public None
{
public:
	Struct Vector2D                                    Position                                           // 0x0(0x8)
	float                                              Radius                                             // 0x8(0x4)
};


}