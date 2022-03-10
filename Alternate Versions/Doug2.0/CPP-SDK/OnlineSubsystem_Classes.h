namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x38
class DefaultOnlineEnvironmentSettings: public Object
{
public:
	Struct FString                                     EnvironmentId                                      // 0x28(0x10)
	Struct FString                                     ServiceConfigId                                    // 0x40(0x10)
	Struct FString                                     ClientCertificateThumbprint                        // 0x50(0x10)
};


// Size 0x38
class NamedInterfaces: public Object
{
public:
	TArray<Struct OnMatchEnded>                        NamedInterfaces                                    // 0x28(0x10)
	TArray<Struct NamedInterfaces>                     NamedInterfaceDefs                                 // 0x38(0x10)
};


// Size 0x0
class TurnBasedMatchInterface: public Interface
{
public:
};


}