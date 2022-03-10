namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x30
class DrawDebugItemString: public None
{
public:
	struct FName                                       GroupName                                          // 0x0(0x8)
	bool                                               ReplaceInGroup                                     // 0x8(0x1)
	Struct FString                                     String                                             // 0x10(0x10)
	Struct Color                                       Colour                                             // 0x20(0x4)
	Struct Vector                                      StringPos                                          // 0x24(0xc)
};


// Size 0x28
class DrawDebugItemMessage: public None
{
public:
	struct FName                                       GroupName                                          // 0x0(0x8)
	bool                                               ReplaceInGroup                                     // 0x8(0x1)
	Struct FString                                     Message                                            // 0x10(0x10)
	Struct Color                                       Colour                                             // 0x20(0x4)
};


// Size 0x48
class DrawDebugItemSector: public None
{
public:
	struct FName                                       GroupName                                          // 0x0(0x8)
	bool                                               ReplaceInGroup                                     // 0x8(0x1)
	float                                              RotationAngle                                      // 0xc(0x4)
	Struct Vector                                      Centre                                             // 0x10(0xc)
	float                                              SectorAngle                                        // 0x1c(0x4)
	float                                              Radius                                             // 0x20(0x4)
	Struct Color                                       Colour                                             // 0x24(0x4)
	Struct Vector                                      ZeroAngleVector                                    // 0x28(0xc)
	Struct Vector                                      RotationAxis                                       // 0x34(0xc)
	float                                              SubAngles                                          // 0x40(0x4)
	float                                              Thickness                                          // 0x44(0x4)
};


// Size 0x2c
class DrawDebugItemLine: public None
{
public:
	struct FName                                       GroupName                                          // 0x0(0x8)
	bool                                               ReplaceInGroup                                     // 0x8(0x1)
	Struct Vector                                      LineStart                                          // 0xc(0xc)
	Struct Vector                                      LineEnd                                            // 0x18(0xc)
	Struct Color                                       Colour                                             // 0x24(0x4)
	float                                              Thickness                                          // 0x28(0x4)
};


// Size 0x40
class DrawDebugItemCapsule: public None
{
public:
	struct FName                                       GroupName                                          // 0x0(0x8)
	bool                                               ReplaceInGroup                                     // 0x8(0x1)
	Struct Vector                                      CentrePos                                          // 0xc(0xc)
	float                                              HalfHeight                                         // 0x18(0x4)
	float                                              Radius                                             // 0x1c(0x4)
	Struct Quat                                        Rotation                                           // 0x20(0x10)
	Struct Color                                       Colour                                             // 0x30(0x4)
};


// Size 0x50
class DrawDebugItemBox: public None
{
public:
	struct FName                                       GroupName                                          // 0x0(0x8)
	bool                                               ReplaceInGroup                                     // 0x8(0x1)
	Struct Vector                                      CentrePos                                          // 0xc(0xc)
	Struct Vector                                      Box                                                // 0x18(0xc)
	Struct Quat                                        Rotation                                           // 0x30(0x10)
	Struct Color                                       Colour                                             // 0x40(0x4)
};


// Size 0x20
class DrawDebugItemSphere: public None
{
public:
	struct FName                                       GroupName                                          // 0x0(0x8)
	bool                                               ReplaceInGroup                                     // 0x8(0x1)
	Struct Vector                                      CentrePos                                          // 0xc(0xc)
	float                                              Radius                                             // 0x18(0x4)
	Struct Color                                       Colour                                             // 0x1c(0x4)
};


// Size 0x18
class SphereData: public None
{
public:
	Struct Vector                                      Location                                           // 0x0(0xc)
	float                                              Radius                                             // 0xc(0x4)
	int                                                Segments                                           // 0x10(0x4)
	Struct Color                                       Colour                                             // 0x14(0x4)
};


}