namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x0
class WindZoneInterface: public Interface
{
public:
};


// Size 0x0
class WindInterface: public Interface
{
public:
};


// Size 0x0
class DebugWindInterface: public Interface
{
public:
};


// Size 0x18
class MockWindService: public Object
{
public:
};


// Size 0x40
class TestWindInterface: public Object
{
public:
	TArray<Interface GetWindAtLocation>                WindZones                                          // 0x58(0x10)
};


// Size 0x28
class TestWindZone: public Object
{
public:
};


// Size 0x0
class WindFunctions: public BlueprintFunctionLibrary
{
public:
};


// Size 0x138
class WindService: public Actor
{
public:
	Class WindDirectionalSource*                       GlobalWindSource                                   // 0x3e0(0x8)
	float                                              CurrentWindAngle                                   // 0x3f8(0x4)
	float                                              CurrentWindMagnitude                               // 0x3fc(0x4)
	TArray<Interface CurrentWindMagnitude>             WindZones                                          // 0x4e8(0x10)
	TArray<Struct WindZones>                           ExtraWind                                          // 0x4f8(0x10)
};


// Size 0x10
class DebugWindService: public WindService
{
public:
};


// Size 0x0
class WindServiceParamsFunctionLibrary: public BlueprintFunctionLibrary
{
public:
};


// Size 0x90
class WindZoneComponent: public SceneComponent
{
public:
	Struct WindTurbulenceParameters                    TurbulenceParams                                   // 0x2d8(0x70)
	Struct WindZoneParams                              WindZoneParams                                     // 0x348(0x10)
};


// Size 0x0
class TestWindZoneComponent: public WindZoneComponent
{
public:
};


}