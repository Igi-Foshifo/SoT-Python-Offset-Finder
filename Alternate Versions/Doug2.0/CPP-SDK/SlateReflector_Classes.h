namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x58
class WidgetReflectorNodeBase: public Object
{
public:
	Struct Geometry                                    Geometry                                           // 0x28(0x34)
	TArray<class ChildNodes*>                          ChildNodes                                         // 0x60(0x10)
	Struct LinearColor                                 Tint                                               // 0x70(0x10)
};


// Size 0x18
class LiveWidgetReflectorNode: public WidgetReflectorNodeBase
{
public:
};


// Size 0x118
class SnapshotWidgetReflectorNode: public WidgetReflectorNodeBase
{
public:
	Struct FText                                       CachedWidgetType                                   // 0x80(0x38)
	Struct FText                                       CachedWidgetVisibilityText                         // 0xb8(0x38)
	Struct FText                                       CachedWidgetReadableLocation                       // 0xf0(0x38)
	Struct FString                                     CachedWidgetFile                                   // 0x128(0x10)
	int                                                CachedWidgetLineNumber                             // 0x138(0x4)
	struct FName                                       CachedWidgetAssetName                              // 0x13c(0x8)
	Struct Vector2D                                    CachedWidgetDesiredSize                            // 0x144(0x8)
	Struct SlateColor                                  CachedWidgetForegroundColor                        // 0x150(0x30)
	Struct FString                                     CachedWidgetAddress                                // 0x180(0x10)
	bool                                               CachedWidgetEnabled                                // 0x190(0x1)
};


}