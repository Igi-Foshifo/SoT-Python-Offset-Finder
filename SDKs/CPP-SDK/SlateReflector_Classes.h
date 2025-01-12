// Generated by DougTheDruid#2784 on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x58 (Full Size[0x80] - InheritedSize[0x28]
class WidgetReflectorNodeBase: public Object
{
public:
	Struct Geometry                                              Geometry;                                          // 0x28(0x34)
	char                                                         pad0x4_NT6E9[0x4];                                 // 0x5c(0x4)
	TArray<class WidgetReflectorNodeBase*>                       ChildNodes;                                        // 0x60(0x10)
	Struct LinearColor                                           Tint;                                              // 0x70(0x10)
};


// Size 0x18 (Full Size[0x98] - InheritedSize[0x80]
class LiveWidgetReflectorNode: public WidgetReflectorNodeBase
{
public:
};


// Size 0x118 (Full Size[0x198] - InheritedSize[0x80]
class SnapshotWidgetReflectorNode: public WidgetReflectorNodeBase
{
public:
	Struct FText                                                 CachedWidgetType;                                  // 0x80(0x38)
	Struct FText                                                 CachedWidgetVisibilityText;                        // 0xb8(0x38)
	Struct FText                                                 CachedWidgetReadableLocation;                      // 0xf0(0x38)
	Struct FString                                               CachedWidgetFile;                                  // 0x128(0x10)
	int                                                          CachedWidgetLineNumber;                            // 0x138(0x4)
	struct FName                                                 CachedWidgetAssetName;                             // 0x13c(0x8)
	Struct Vector2D                                              CachedWidgetDesiredSize;                           // 0x144(0x8)
	char                                                         pad0x4_G7AJG[0x4];                                 // 0x14c(0x4)
	Struct SlateColor                                            CachedWidgetForegroundColor;                       // 0x150(0x30)
	Struct FString                                               CachedWidgetAddress;                               // 0x180(0x10)
	bool                                                         CachedWidgetEnabled;                               // 0x190(0x1)
	char                                                         pad0x9_9E67K[0x9];                                 // 0x18f(0x9)
};


}