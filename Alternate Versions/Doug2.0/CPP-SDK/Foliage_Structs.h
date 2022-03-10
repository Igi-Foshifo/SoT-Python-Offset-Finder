namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x20
class FoliageTypeObject: public None
{
public:
	Class Object*                                      FoliageTypeObject                                  // 0x0(0x8)
	Class FoliageType_InstancedStaticMesh*             TypeInstance                                       // 0x8(0x8)
	bool                                               bIsAsset                                           // 0x10(0x1)
	class                                              Type                                               // 0x18(0x8)
};


// Size 0x60
class ProceduralFoliageInstance: public None
{
public:
	Struct Vector                                      Location                                           // 0x0(0xc)
	Struct Quat                                        Rotation                                           // 0x10(0x10)
	Struct Vector                                      Normal                                             // 0x20(0xc)
	float                                              Age                                                // 0x2c(0x4)
	float                                              Scale                                              // 0x30(0x4)
	Class FoliageType_InstancedStaticMesh*             Type                                               // 0x38(0x8)
};


// Size 0x1
class ConsoleCommands: public None
{
public:
};


}