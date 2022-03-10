namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x0
class DrawDebugServiceInterface: public Interface
{
public:
};


// Size 0xf8
class DrawDebugService: public Actor
{
public:
	TArray<Struct SphereList>                          MessagesReplicated                                 // 0x3d8(0x10)
	TArray<Struct MessagesReplicated>                  SpheresReplicated                                  // 0x3e8(0x10)
	TArray<Struct SpheresReplicated>                   BoxesReplicated                                    // 0x3f8(0x10)
	TArray<Struct BoxesReplicated>                     CapsulesReplicated                                 // 0x408(0x10)
	TArray<Struct CapsulesReplicated>                  LinesReplicated                                    // 0x418(0x10)
	TArray<Struct LinesReplicated>                     SectorsReplicated                                  // 0x428(0x10)
	TArray<Struct SectorsReplicated>                   StringsReplicated                                  // 0x438(0x10)
	bool                                               IsDrawDebugActive                                  // 0x448(0x1)
};


// Size 0x10
class ShippingDebugActorSphereCollection: public Actor
{
public:
	TArray<Struct Id>                                  SphereList                                         // 0x3d0(0x10)
};


// Size 0x0
class TickableDebugDrawingServiceInterface: public Interface
{
public:
};


// Size 0x28
class Videprinter: public Actor
{
public:
	TArray<Str None>                                   OutputRingBuffer                                   // 0x3d0(0x10)
	int                                                AddAt                                              // 0x3e0(0x4)
	struct FName                                       Id                                                 // 0x3e4(0x8)
};


// Size 0x0
class VideprinterServiceInterface: public Interface
{
public:
};


// Size 0x18
class VideprinterService: public Object
{
public:
	TArray<class Videprinters*>                        Videprinters                                       // 0x30(0x10)
};


}