namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x8
class SocketPathNode: public None
{
public:
	struct FName                                       Name                                               // 0x0(0x8)
};


// Size 0x18
class SocketPath: public None
{
public:
	TArray<Struct SocketId>                            Nodes                                              // 0x0(0x10)
};


// Size 0x20
class SocketId: public None
{
public:
	Struct SocketPath                                  path                                               // 0x0(0x18)
	struct FName                                       Name                                               // 0x18(0x8)
};


// Size 0x50
class SocketLookupCache: public None
{
public:
};


}