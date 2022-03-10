namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0xe8
class EventReply: public None
{
public:
};


// Size 0x1c
class WidgetTransform: public None
{
public:
	Struct Vector2D                                    Translation                                        // 0x0(0x8)
	Struct Vector2D                                    Scale                                              // 0x8(0x8)
	Struct Vector2D                                    Shear                                              // 0x10(0x8)
	float                                              Angle                                              // 0x18(0x4)
};


// Size 0x10
class DynamicPropertyPath: public None
{
public:
	TArray<Struct PropertyPathSegment>                 Segments                                           // 0x0(0x10)
};


// Size 0x20
class PropertyPathSegment: public None
{
public:
	struct FName                                       Name                                               // 0x0(0x8)
	int                                                ArrayIndex                                         // 0x8(0x4)
	Class Struct*                                      Struct                                             // 0x10(0x8)
	Class Field*                                       Field                                              // 0x18(0x8)
};


// Size 0x8
class SlateChildSize: public None
{
public:
	float                                              Value                                              // 0x0(0x4)
	byte                                               SizeRule                                           // 0x4(0x1)
};


// Size 0x10
class NamedSlotBinding: public None
{
public:
	struct FName                                       Name                                               // 0x0(0x8)
	Class Widget*                                      Content                                            // 0x8(0x8)
};


// Size 0x30
class PaintContext: public None
{
public:
};


// Size 0x28
class AnchorData: public None
{
public:
	Struct Margin                                      Offsets                                            // 0x0(0x10)
	Struct Anchors                                     Anchors                                            // 0x10(0x10)
	Struct Vector2D                                    Alignment                                          // 0x20(0x8)
};


// Size 0x24
class WidgetAnimationBinding: public None
{
public:
	struct FName                                       WidgetName                                         // 0x0(0x8)
	struct FName                                       SlotWidgetName                                     // 0x8(0x8)
	Struct Guid                                        AnimationGuid                                      // 0x10(0x10)
	bool                                               bIsRootWidget                                      // 0x20(0x1)
};


// Size 0x38
class DelegateRuntimeBinding: public None
{
public:
	Struct FString                                     ObjectName                                         // 0x0(0x10)
	struct FName                                       PropertyName                                       // 0x10(0x8)
	struct FName                                       FunctionName                                       // 0x18(0x8)
	Struct DynamicPropertyPath                         SourcePath                                         // 0x20(0x10)
	byte                                               Kind                                               // 0x30(0x1)
};


// Size 0x14
class WidgetNavigationData: public None
{
public:
	byte                                               Rule                                               // 0x0(0x1)
	struct FName                                       WidgetToFocus                                      // 0x4(0x8)
};


// Size 0x380
class MovieScene2DTransformSectionTemplate: public None
{
public:
	Struct MovieScenePropertySectionData               PropertyData                                       // 0x18(0x20)
	Struct RichCurve                                   Translation                                        // 0x38(0x78)
	Struct RichCurve                                   Rotation                                           // 0x128(0x78)
	Struct RichCurve                                   Scale                                              // 0x1a0(0x78)
	Struct RichCurve                                   Shear                                              // 0x290(0x78)
};


// Size 0x218
class MovieSceneMarginSectionTemplate: public None
{
public:
	Struct MovieScenePropertySectionData               PropertyData                                       // 0x18(0x20)
	Struct RichCurve                                   TopCurve                                           // 0x38(0x78)
	Struct RichCurve                                   LeftCurve                                          // 0xb0(0x78)
	Struct RichCurve                                   RightCurve                                         // 0x128(0x78)
	Struct RichCurve                                   BottomCurve                                        // 0x1a0(0x78)
};


// Size 0x58
class MovieSceneWidgetMaterialSectionTemplate: public None
{
public:
	TArray<Name None>                                  BrushPropertyNamePath                              // 0x48(0x10)
};


}