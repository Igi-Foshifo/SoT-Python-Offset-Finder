namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x18
class EngineServiceNotification: public None
{
public:
	Struct FString                                     Text                                               // 0x0(0x10)
	double                                             TimeSeconds                                        // 0x10(0x8)
};


// Size 0x10
class EngineServiceTerminate: public None
{
public:
	Struct FString                                     UserName                                           // 0x0(0x10)
};


// Size 0x20
class EngineServiceExecuteCommand: public None
{
public:
	Struct FString                                     Command                                            // 0x0(0x10)
	Struct FString                                     UserName                                           // 0x10(0x10)
};


// Size 0x20
class EngineServiceAuthGrant: public None
{
public:
	Struct FString                                     UserName                                           // 0x0(0x10)
	Struct FString                                     UserToGrant                                        // 0x10(0x10)
};


// Size 0x20
class EngineServiceAuthDeny: public None
{
public:
	Struct FString                                     UserName                                           // 0x0(0x10)
	Struct FString                                     UserToDeny                                         // 0x10(0x10)
};


// Size 0x50
class EngineServicePong: public None
{
public:
	Struct FString                                     CurrentLevel                                       // 0x0(0x10)
	int                                                EngineVersion                                      // 0x10(0x4)
	bool                                               HasBegunPlay                                       // 0x14(0x1)
	Struct Guid                                        InstanceId                                         // 0x18(0x10)
	Struct FString                                     InstanceType                                       // 0x28(0x10)
	Struct Guid                                        SessionId                                          // 0x38(0x10)
	float                                              WorldTimeSeconds                                   // 0x48(0x4)
};


// Size 0x1
class EngineServicePing: public None
{
public:
};


}