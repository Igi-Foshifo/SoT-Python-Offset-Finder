namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0xc
class IncomingMigrationPreventionZone: public None
{
public:
	Struct Vector2D                                    Location                                           // 0x0(0x8)
	float                                              Radius                                             // 0x8(0x4)
};


// Size 0x1
class ServerMigrationSetupCompleteEvent: public None
{
public:
};


// Size 0x1
class ServerMigrationSetupRequestEvent: public None
{
public:
};


// Size 0x90
class ServerMigrationReadyToTransferActors: public None
{
public:
};


// Size 0x10
class PrepareForWorldSwitchRpc: public None
{
public:
};


// Size 0x20
class ServerMigrationAboutToStartEvent: public None
{
public:
};


// Size 0x8
class ServerMigrationConfigChangedEvent: public None
{
public:
};


// Size 0x10
class ServerMigrationAbortEvent: public None
{
public:
};


// Size 0x1
class ServerMigrationCompleteEvent: public None
{
public:
};


// Size 0x78
class ServerMigrationHeartbeatEvent: public None
{
public:
	Struct Guid                                        ServerId                                           // 0x0(0x10)
	Struct FString                                     ServerLocation                                     // 0x10(0x10)
	Struct FString                                     GameEndpoint                                       // 0x20(0x10)
	Struct FString                                     MigrationEndpoint                                  // 0x30(0x10)
	TArray<Struct ServerMigrationCrewMigrationStatus>  CrewsMigrationStatus                               // 0x40(0x10)
	int                                                SequenceId                                         // 0x50(0x4)
	Struct Timespan                                    ServerUptime                                       // 0x58(0x8)
	Struct Timespan                                    ExpectedServerLifetime                             // 0x60(0x8)
	Struct Timespan                                    MessageInterval                                    // 0x68(0x8)
	bool                                               ContestMatchmaking                                 // 0x70(0x1)
};


// Size 0x20
class ServerMigrationRefusedEvent: public None
{
public:
	Struct Guid                                        MigrationId                                        // 0x0(0x10)
	Struct Guid                                        CrewId                                             // 0x10(0x10)
};


// Size 0x20
class OutgoingServerMigrationAbortedEvent: public None
{
public:
};


// Size 0x20
class ServerMigrationInstanceEventBase: public None
{
public:
	Struct Guid                                        ServerId                                           // 0x0(0x10)
	Struct Guid                                        MigrationId                                        // 0x10(0x10)
};


// Size 0x20
class OutgoingServerMigrationCompletedEvent: public None
{
public:
};


// Size 0x20
class OutgoingServerMigrationStartedEvent: public None
{
public:
};


// Size 0x8
class ServerMigrationSetServerConfigMessage: public None
{
public:
	Struct Timespan                                    ExpectedServerLifetime                             // 0x0(0x8)
};


// Size 0x40
class ServerMigrationRequestEvent: public None
{
public:
	Struct Guid                                        MigrationId                                        // 0x0(0x10)
	Struct FString                                     DestinationAddress                                 // 0x10(0x10)
	Struct Guid                                        CrewId                                             // 0x20(0x10)
	Struct FString                                     SubMode                                            // 0x30(0x10)
};


}