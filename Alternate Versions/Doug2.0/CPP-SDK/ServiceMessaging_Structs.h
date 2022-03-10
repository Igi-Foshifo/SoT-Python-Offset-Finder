namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x4
class ServiceMessagingTestMessage: public None
{
public:
	int                                                Data                                               // 0x0(0x4)
};


// Size 0x10
class ServiceMessagingUnsubscribedEvent: public None
{
public:
	Struct FString                                     RoutingKey                                         // 0x0(0x10)
};


// Size 0x10
class ServiceMessagingSubscribedEvent: public None
{
public:
	Struct FString                                     RoutingKey                                         // 0x0(0x10)
};


// Size 0x18
class TestStructWithNetId: public None
{
public:
	Struct UniqueNetIdRepl                             NetId                                              // 0x0(0x18)
};


}