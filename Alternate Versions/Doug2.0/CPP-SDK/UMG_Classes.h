namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x20
class AsyncTaskDownloadImage: public BlueprintAsyncActionBase
{
public:
};


// Size 0x60
class DragDropOperation: public Object
{
public:
	Struct FString                                     Tag                                                // 0x28(0x10)
	Class Object*                                      payload                                            // 0x38(0x8)
	Class Widget*                                      DefaultDragVisual                                  // 0x40(0x8)
	byte                                               Pivot                                              // 0x48(0x1)
	Struct Vector2D                                    Offset                                             // 0x4c(0x8)
};


// Size 0x350
class MovieScene2DTransformSection: public MovieSceneSection
{
public:
	Struct RichCurve                                   Translation                                        // 0xa0(0x78)
	Struct RichCurve                                   Rotation                                           // 0x190(0x78)
	Struct RichCurve                                   Scale                                              // 0x208(0x78)
	Struct RichCurve                                   Shear                                              // 0x2f8(0x78)
};


// Size 0x0
class MovieScene2DTransformTrack: public MovieScenePropertyTrack
{
public:
};


// Size 0x1e8
class MovieSceneMarginSection: public MovieSceneSection
{
public:
	Struct RichCurve                                   TopCurve                                           // 0xa0(0x78)
	Struct RichCurve                                   LeftCurve                                          // 0x118(0x78)
	Struct RichCurve                                   RightCurve                                         // 0x190(0x78)
	Struct RichCurve                                   BottomCurve                                        // 0x208(0x78)
};


// Size 0x0
class MovieSceneMarginTrack: public MovieScenePropertyTrack
{
public:
};


// Size 0x18
class MovieSceneWidgetMaterialTrack: public MovieSceneMaterialTrack
{
public:
	TArray<Name None>                                  BrushPropertyNamePath                              // 0x98(0x10)
	struct FName                                       TrackName                                          // 0xa8(0x8)
};


// Size 0x0
class NamedSlotInterface: public Interface
{
public:
};


// Size 0x20
class PropertyBinding: public Object
{
public:
	Struct DynamicPropertyPath                         SourcePath                                         // 0x30(0x10)
	struct FName                                       DestinationProperty                                // 0x40(0x8)
};


// Size 0x0
class BoolBinding: public PropertyBinding
{
public:
};


// Size 0x8
class BrushBinding: public PropertyBinding
{
public:
};


// Size 0x8
class CheckedStateBinding: public PropertyBinding
{
public:
};


// Size 0x8
class ColorBinding: public PropertyBinding
{
public:
};


// Size 0x0
class FloatBinding: public PropertyBinding
{
public:
};


// Size 0x0
class Int32Binding: public PropertyBinding
{
public:
};


// Size 0x0
class MouseCursorBinding: public PropertyBinding
{
public:
};


// Size 0x8
class TextBinding: public PropertyBinding
{
public:
};


// Size 0x0
class VisibilityBinding: public PropertyBinding
{
public:
};


// Size 0x0
class WidgetBinding: public PropertyBinding
{
public:
};


// Size 0x8
class RichTextBlockDecorator: public Object
{
public:
	bool                                               bReveal                                            // 0x28(0x1)
	int                                                RevealedIndex                                      // 0x2c(0x4)
};


// Size 0x0
class SlateBlueprintLibrary: public BlueprintFunctionLibrary
{
public:
};


// Size 0x0
class Visual: public Object
{
public:
};


// Size 0x110
class Widget: public Visual
{
public:
	bool                                               bIsVariable                                        // 0x28(0x1)
	bool                                               bCreatedByConstructionScript                       // 0x29(0x1)
	Class PanelSlot*                                   Slot                                               // 0x30(0x8)
	bool                                               bIsEnabled                                         // 0x38(0x1)
	Struct FText                                       ToolTipText                                        // 0x50(0x38)
	Class Widget*                                      ToolTipWidget                                      // 0x98(0x8)
	byte                                               Visiblity                                          // 0xb0(0x1)
	byte                                               Visibility                                         // 0xb1(0x1)
	bool                                               bOverride_Cursor                                   // 0xc4(0x1)
	byte                                               Cursor                                             // 0xc8(0x1)
	bool                                               bIsVolatile                                        // 0xc9(0x1)
	Struct WidgetTransform                             RenderTransform                                    // 0xcc(0x1c)
	Struct Vector2D                                    RenderTransformPivot                               // 0xe8(0x8)
	Class WidgetNavigation*                            Navigation                                         // 0xf0(0x8)
	TArray<class NativeBindings*>                      NativeBindings                                     // 0x128(0x10)
};


// Size 0xf8
class UserWidget: public Widget
{
public:
	Struct LinearColor                                 ColorAndOpacity                                    // 0x140(0x10)
	Struct SlateColor                                  ForegroundColor                                    // 0x160(0x30)
	bool                                               bSupportsKeyboardFocus                             // 0x1a0(0x1)
	Class WidgetTree*                                  WidgetTree                                         // 0x1a8(0x8)
	TArray<class ActiveSequencePlayers*>               ActiveSequencePlayers                              // 0x1b0(0x10)
	TArray<class StoppedSequencePlayers*>              StoppedSequencePlayers                             // 0x1c0(0x10)
	TArray<Struct StoppedSequencePlayers>              NamedSlotBindings                                  // 0x1d0(0x10)
};


// Size 0x5a0
class UMGSequencePlayer: public Object
{
public:
	Class WidgetAnimation*                             Animation                                          // 0x390(0x8)
};


// Size 0x10
class PanelSlot: public Visual
{
public:
	Class PanelWidget*                                 Parent                                             // 0x28(0x8)
	Class Widget*                                      Content                                            // 0x30(0x8)
};


// Size 0x30
class BorderSlot: public PanelSlot
{
public:
	Struct Margin                                      Padding                                            // 0x38(0x10)
	byte                                               HorizontalAlignment                                // 0x48(0x1)
	byte                                               VerticalAlignment                                  // 0x49(0x1)
};


// Size 0x30
class ButtonSlot: public PanelSlot
{
public:
	Struct Margin                                      Padding                                            // 0x38(0x10)
	byte                                               HorizontalAlignment                                // 0x48(0x1)
	byte                                               VerticalAlignment                                  // 0x49(0x1)
};


// Size 0x38
class CanvasPanelSlot: public PanelSlot
{
public:
	Struct AnchorData                                  LayoutData                                         // 0x38(0x28)
	bool                                               bAutoSize                                          // 0x60(0x1)
	int                                                ZOrder                                             // 0x64(0x4)
};


// Size 0x28
class GridSlot: public PanelSlot
{
public:
	byte                                               HorizontalAlignment                                // 0x38(0x1)
	byte                                               VerticalAlignment                                  // 0x39(0x1)
	int                                                Row                                                // 0x3c(0x4)
	int                                                RowSpan                                            // 0x40(0x4)
	int                                                Column                                             // 0x44(0x4)
	int                                                ColumnSpan                                         // 0x48(0x4)
	int                                                Layer                                              // 0x4c(0x4)
	Struct Vector2D                                    Nudge                                              // 0x50(0x8)
};


// Size 0x28
class HorizontalBoxSlot: public PanelSlot
{
public:
	Struct Margin                                      Padding                                            // 0x38(0x10)
	Struct SlateChildSize                              Size                                               // 0x48(0x8)
	byte                                               HorizontalAlignment                                // 0x50(0x1)
	byte                                               VerticalAlignment                                  // 0x51(0x1)
};


// Size 0x20
class OverlaySlot: public PanelSlot
{
public:
	Struct Margin                                      Padding                                            // 0x38(0x10)
	byte                                               HorizontalAlignment                                // 0x48(0x1)
	byte                                               VerticalAlignment                                  // 0x49(0x1)
};


// Size 0x18
class SafeZoneSlot: public PanelSlot
{
public:
	bool                                               bIsTitleSafe                                       // 0x38(0x1)
	byte                                               HAlign                                             // 0x39(0x1)
	byte                                               VAlign                                             // 0x3a(0x1)
	Struct Margin                                      Padding                                            // 0x3c(0x10)
};


// Size 0x30
class ScaleBoxSlot: public PanelSlot
{
public:
	Struct Margin                                      Padding                                            // 0x38(0x10)
	byte                                               HorizontalAlignment                                // 0x48(0x1)
	byte                                               VerticalAlignment                                  // 0x49(0x1)
};


// Size 0x20
class ScrollBoxSlot: public PanelSlot
{
public:
	Struct Margin                                      Padding                                            // 0x38(0x10)
	byte                                               HorizontalAlignment                                // 0x48(0x1)
};


// Size 0x30
class SizeBoxSlot: public PanelSlot
{
public:
	Struct Margin                                      Padding                                            // 0x38(0x10)
	byte                                               HorizontalAlignment                                // 0x48(0x1)
	byte                                               VerticalAlignment                                  // 0x49(0x1)
};


// Size 0x18
class UniformGridSlot: public PanelSlot
{
public:
	byte                                               HorizontalAlignment                                // 0x38(0x1)
	byte                                               VerticalAlignment                                  // 0x39(0x1)
	int                                                Row                                                // 0x3c(0x4)
	int                                                Column                                             // 0x40(0x4)
};


// Size 0x28
class VerticalBoxSlot: public PanelSlot
{
public:
	Struct Margin                                      Padding                                            // 0x38(0x10)
	Struct SlateChildSize                              Size                                               // 0x48(0x8)
	byte                                               HorizontalAlignment                                // 0x50(0x1)
	byte                                               VerticalAlignment                                  // 0x51(0x1)
};


// Size 0x20
class WidgetSwitcherSlot: public PanelSlot
{
public:
	Struct Margin                                      Padding                                            // 0x38(0x10)
	byte                                               HorizontalAlignment                                // 0x48(0x1)
	byte                                               VerticalAlignment                                  // 0x49(0x1)
};


// Size 0x28
class WrapBoxSlot: public PanelSlot
{
public:
	Struct Margin                                      Padding                                            // 0x38(0x10)
	bool                                               bFillEmptySpace                                    // 0x48(0x1)
	float                                              FillSpanWhenLessThan                               // 0x4c(0x4)
	byte                                               HorizontalAlignment                                // 0x50(0x1)
	byte                                               VerticalAlignment                                  // 0x51(0x1)
};


// Size 0xc0
class CircularThrobber: public Widget
{
public:
	int                                                NumberOfPieces                                     // 0x138(0x4)
	float                                              Period                                             // 0x13c(0x4)
	float                                              Radius                                             // 0x140(0x4)
	Class SlateBrushAsset*                             PieceImage                                         // 0x148(0x8)
	Struct SlateBrush                                  Image                                              // 0x150(0x90)
};


// Size 0x38
class ComboBox: public Widget
{
public:
	TArray<class Items*>                               Items                                              // 0x138(0x10)
};


// Size 0x4e8
class ComboBoxString: public Widget
{
public:
	TArray<Str None>                                   DefaultOptions                                     // 0x138(0x10)
	Struct FString                                     SelectedOption                                     // 0x148(0x10)
	Struct ComboBoxStyle                               WidgetStyle                                        // 0x158(0x428)
	Struct Margin                                      ContentPadding                                     // 0x580(0x10)
	float                                              MaxListHeight                                      // 0x590(0x4)
	bool                                               HasDownArrow                                       // 0x594(0x1)
};


// Size 0x390
class EditableText: public Widget
{
public:
	Struct FText                                       Text                                               // 0x138(0x38)
	Struct FText                                       HintText                                           // 0x180(0x38)
	Struct EditableTextStyle                           WidgetStyle                                        // 0x1c8(0x228)
	Class SlateWidgetStyleAsset*                       Style                                              // 0x3f0(0x8)
	Class SlateBrushAsset*                             BackgroundImageSelected                            // 0x3f8(0x8)
	Class SlateBrushAsset*                             BackgroundImageComposing                           // 0x400(0x8)
	Class SlateBrushAsset*                             CaretImage                                         // 0x408(0x8)
	Struct SlateFontInfo                               Font                                               // 0x410(0x40)
	Struct SlateColor                                  ColorAndOpacity                                    // 0x450(0x30)
	bool                                               IsReadOnly                                         // 0x480(0x1)
	bool                                               IsPassword                                         // 0x481(0x1)
	float                                              MinimumDesiredWidth                                // 0x484(0x4)
	bool                                               IsCaretMovedWhenGainFocus                          // 0x488(0x1)
	bool                                               SelectAllTextWhenFocused                           // 0x489(0x1)
	bool                                               RevertTextOnEscape                                 // 0x48a(0x1)
	bool                                               ClearKeyboardFocusOnCommit                         // 0x48b(0x1)
	bool                                               SelectAllTextOnCommit                              // 0x48c(0x1)
};


// Size 0x9c0
class EditableTextBox: public Widget
{
public:
	Struct FText                                       Text                                               // 0x138(0x38)
	Struct EditableTextBoxStyle                        WidgetStyle                                        // 0x180(0x860)
	Class SlateWidgetStyleAsset*                       Style                                              // 0x9e0(0x8)
	Struct FText                                       HintText                                           // 0x9e8(0x38)
	Struct SlateFontInfo                               Font                                               // 0xa30(0x40)
	Struct LinearColor                                 ForegroundColor                                    // 0xa70(0x10)
	Struct LinearColor                                 BackgroundColor                                    // 0xa80(0x10)
	Struct LinearColor                                 ReadOnlyForegroundColor                            // 0xa90(0x10)
	bool                                               IsReadOnly                                         // 0xaa0(0x1)
	bool                                               IsPassword                                         // 0xaa1(0x1)
	float                                              MinimumDesiredWidth                                // 0xaa4(0x4)
	Struct Margin                                      Padding                                            // 0xaa8(0x10)
	bool                                               IsCaretMovedWhenGainFocus                          // 0xab8(0x1)
	bool                                               SelectAllTextWhenFocused                           // 0xab9(0x1)
	bool                                               RevertTextOnEscape                                 // 0xaba(0x1)
	bool                                               ClearKeyboardFocusOnCommit                         // 0xabb(0x1)
	bool                                               SelectAllTextOnCommit                              // 0xabc(0x1)
};


// Size 0x58
class ExpandableArea: public Widget
{
public:
	bool                                               bIsExpanded                                        // 0x140(0x1)
	float                                              MaxHeight                                          // 0x144(0x4)
	Struct Margin                                      AreaPadding                                        // 0x148(0x10)
	Class Widget*                                      HeaderContent                                      // 0x168(0x8)
	Class Widget*                                      BodyContent                                        // 0x170(0x8)
};


// Size 0xf0
class Image: public Widget
{
public:
	Class SlateBrushAsset*                             Image                                              // 0x138(0x8)
	Struct SlateBrush                                  Brush                                              // 0x140(0x90)
	Struct LinearColor                                 ColorAndOpacity                                    // 0x1e0(0x10)
};


// Size 0x218
class MultiLineEditableText: public Widget
{
public:
	Struct FText                                       Text                                               // 0x138(0x38)
	Struct TextBlockStyle                              WidgetStyle                                        // 0x170(0x160)
	byte                                               Justification                                      // 0x2d0(0x1)
	bool                                               bAutoWrapText                                      // 0x2d1(0x1)
	float                                              WrapTextAt                                         // 0x2d4(0x4)
	Struct SlateFontInfo                               Font                                               // 0x2d8(0x40)
};


// Size 0xab0
class MultiLineEditableTextBox: public Widget
{
public:
	Struct FText                                       Text                                               // 0x138(0x38)
	Struct EditableTextBoxStyle                        WidgetStyle                                        // 0x170(0x860)
	Struct TextBlockStyle                              TextStyle                                          // 0x9d0(0x160)
	Class SlateWidgetStyleAsset*                       Style                                              // 0xb30(0x8)
	byte                                               Justification                                      // 0xb38(0x1)
	bool                                               bAutoWrapText                                      // 0xb39(0x1)
	float                                              WrapTextAt                                         // 0xb3c(0x4)
	Struct SlateFontInfo                               Font                                               // 0xb40(0x40)
	Struct LinearColor                                 ForegroundColor                                    // 0xb80(0x10)
	Struct LinearColor                                 BackgroundColor                                    // 0xb90(0x10)
	Struct LinearColor                                 ReadOnlyForegroundColor                            // 0xba0(0x10)
};


// Size 0x18
class NativeWidgetHost: public Widget
{
public:
};


// Size 0x18
class PanelWidget: public Widget
{
public:
	TArray<class Slots*>                               Slots                                              // 0x138(0x10)
};


// Size 0x18
class CanvasPanel: public PanelWidget
{
public:
};


// Size 0x0
class ContentWidget: public PanelWidget
{
public:
};


// Size 0x160
class Border: public ContentWidget
{
public:
	Struct LinearColor                                 ContentColorAndOpacity                             // 0x150(0x10)
	Struct Margin                                      Padding                                            // 0x170(0x10)
	byte                                               HorizontalAlignment                                // 0x180(0x1)
	byte                                               VerticalAlignment                                  // 0x181(0x1)
	Struct SlateBrush                                  Background                                         // 0x188(0x90)
	Struct LinearColor                                 BrushColor                                         // 0x228(0x10)
	bool                                               bShowEffectWhenDisabled                            // 0x248(0x1)
	Class SlateBrushAsset*                             Brush                                              // 0x2a8(0x8)
};


// Size 0x320
class Button: public ContentWidget
{
public:
	Class SlateWidgetStyleAsset*                       Style                                              // 0x150(0x8)
	Struct ButtonStyle                                 WidgetStyle                                        // 0x158(0x2a8)
	Struct LinearColor                                 ColorAndOpacity                                    // 0x400(0x10)
	Struct LinearColor                                 BackgroundColor                                    // 0x410(0x10)
	byte                                               ClickMethod                                        // 0x420(0x1)
	byte                                               TouchMethod                                        // 0x421(0x1)
	bool                                               IsFocusable                                        // 0x422(0x1)
};


// Size 0x6c8
class CheckBox: public ContentWidget
{
public:
	byte                                               CheckedState                                       // 0x150(0x1)
	Struct CheckBoxStyle                               WidgetStyle                                        // 0x168(0x5f0)
	Class SlateWidgetStyleAsset*                       Style                                              // 0x758(0x8)
	Class SlateBrushAsset*                             UncheckedImage                                     // 0x760(0x8)
	Class SlateBrushAsset*                             UncheckedHoveredImage                              // 0x768(0x8)
	Class SlateBrushAsset*                             UncheckedPressedImage                              // 0x770(0x8)
	Class SlateBrushAsset*                             CheckedImage                                       // 0x778(0x8)
	Class SlateBrushAsset*                             CheckedHoveredImage                                // 0x780(0x8)
	Class SlateBrushAsset*                             CheckedPressedImage                                // 0x788(0x8)
	Class SlateBrushAsset*                             UndeterminedImage                                  // 0x790(0x8)
	Class SlateBrushAsset*                             UndeterminedHoveredImage                           // 0x798(0x8)
	Class SlateBrushAsset*                             UndeterminedPressedImage                           // 0x7a0(0x8)
	byte                                               HorizontalAlignment                                // 0x7a8(0x1)
	Struct Margin                                      Padding                                            // 0x7ac(0x10)
	Struct SlateColor                                  BorderBackgroundColor                              // 0x7c0(0x30)
};


// Size 0x20
class InvalidationBox: public ContentWidget
{
public:
	bool                                               CacheRelativeTransforms                            // 0x150(0x1)
};


// Size 0x48
class MenuAnchor: public ContentWidget
{
public:
	class                                              MenuClass                                          // 0x150(0x8)
	byte                                               Placement                                          // 0x168(0x1)
};


// Size 0x18
class NamedSlot: public ContentWidget
{
public:
};


// Size 0x18
class SafeZone: public ContentWidget
{
public:
};


// Size 0x20
class ScaleBox: public ContentWidget
{
public:
	byte                                               StretchDirection                                   // 0x150(0x1)
	byte                                               Stretch                                            // 0x151(0x1)
	float                                              UserSpecifiedScale                                 // 0x154(0x4)
};


// Size 0x38
class SizeBox: public ContentWidget
{
public:
	bool                                               bOverride_WidthOverride                            // 0x150(0x1)
	bool                                               bOverride_HeightOverride                           // 0x150(0x1)
	bool                                               bOverride_MinDesiredWidth                          // 0x150(0x1)
	bool                                               bOverride_MinDesiredHeight                         // 0x150(0x1)
	bool                                               bOverride_MaxDesiredWidth                          // 0x150(0x1)
	bool                                               bOverride_MaxDesiredHeight                         // 0x150(0x1)
	float                                              WidthOverride                                      // 0x154(0x4)
	float                                              HeightOverride                                     // 0x158(0x4)
	float                                              MinDesiredWidth                                    // 0x15c(0x4)
	float                                              MinDesiredHeight                                   // 0x160(0x4)
	float                                              MaxDesiredWidth                                    // 0x164(0x4)
	float                                              MaxDesiredHeight                                   // 0x168(0x4)
};


// Size 0x40
class Viewport: public ContentWidget
{
public:
	Struct LinearColor                                 BackgroundColor                                    // 0x150(0x10)
};


// Size 0x38
class GridPanel: public PanelWidget
{
public:
	TArray<Float None>                                 ColumnFill                                         // 0x150(0x10)
	TArray<Float >                                     RowFill                                            // 0x160(0x10)
};


// Size 0x18
class HorizontalBox: public PanelWidget
{
public:
};


// Size 0x18
class Overlay: public PanelWidget
{
public:
};


// Size 0x7a0
class ScrollBox: public PanelWidget
{
public:
	Struct ScrollBoxStyle                              WidgetStyle                                        // 0x150(0x248)
	Struct ScrollBarStyle                              WidgetBarStyle                                     // 0x398(0x518)
	Class SlateWidgetStyleAsset*                       Style                                              // 0x8b0(0x8)
	Class SlateWidgetStyleAsset*                       BarStyle                                           // 0x8b8(0x8)
	byte                                               Orientation                                        // 0x8c0(0x1)
	byte                                               ScrollBarVisibility                                // 0x8c1(0x1)
	byte                                               ConsumeMouseWheel                                  // 0x8c2(0x1)
	Struct Vector2D                                    ScrollbarThickness                                 // 0x8c4(0x8)
	bool                                               AlwaysShowScrollbar                                // 0x8cc(0x1)
};


// Size 0x30
class UniformGridPanel: public PanelWidget
{
public:
	Struct Margin                                      SlotPadding                                        // 0x150(0x10)
	float                                              MinDesiredSlotWidth                                // 0x160(0x4)
	float                                              MinDesiredSlotHeight                               // 0x164(0x4)
};


// Size 0x18
class VerticalBox: public PanelWidget
{
public:
};


// Size 0x20
class WidgetSwitcher: public PanelWidget
{
public:
	int                                                ActiveWidgetIndex                                  // 0x150(0x4)
};


// Size 0x20
class WrapBox: public PanelWidget
{
public:
	Struct Vector2D                                    InnerSlotPadding                                   // 0x150(0x8)
};


// Size 0x228
class ProgressBar: public Widget
{
public:
	Struct ProgressBarStyle                            WidgetStyle                                        // 0x138(0x1b8)
	Class SlateWidgetStyleAsset*                       Style                                              // 0x2f0(0x8)
	Class SlateBrushAsset*                             BackgroundImage                                    // 0x2f8(0x8)
	Class SlateBrushAsset*                             FillImage                                          // 0x300(0x8)
	Class SlateBrushAsset*                             MarqueeImage                                       // 0x308(0x8)
	float                                              Percent                                            // 0x310(0x4)
	byte                                               BarFillType                                        // 0x314(0x1)
	bool                                               bIsMarquee                                         // 0x315(0x1)
	Struct LinearColor                                 FillColorAndOpacity                                // 0x328(0x10)
};


// Size 0x240
class RichTextBlock: public Widget
{
public:
	Struct FText                                       Text                                               // 0x138(0x38)
	Struct SlateFontInfo                               Font                                               // 0x180(0x40)
	Struct LinearColor                                 Color                                              // 0x1c0(0x10)
	byte                                               Justification                                      // 0x1d0(0x1)
	bool                                               AutoWrapText                                       // 0x1d1(0x1)
	float                                              WrapTextAt                                         // 0x1d4(0x4)
	Struct Margin                                      Margin                                             // 0x1d8(0x10)
	float                                              LineHeightPercentage                               // 0x1e8(0x4)
	TArray<class Decorators*>                          Decorators                                         // 0x1f0(0x10)
};


// Size 0x548
class ScrollBar: public Widget
{
public:
	Struct ScrollBarStyle                              WidgetStyle                                        // 0x138(0x518)
	Class SlateWidgetStyleAsset*                       Style                                              // 0x650(0x8)
	bool                                               bAlwaysShowScrollbar                               // 0x658(0x1)
	byte                                               Orientation                                        // 0x659(0x1)
	Struct Vector2D                                    Thickness                                          // 0x65c(0x8)
};


// Size 0x2d0
class Slider: public Widget
{
public:
	float                                              Value                                              // 0x138(0x4)
	Struct SliderStyle                                 WidgetStyle                                        // 0x150(0x248)
	byte                                               Orientation                                        // 0x398(0x1)
	Struct LinearColor                                 SliderBarColor                                     // 0x39c(0x10)
	Struct LinearColor                                 SliderHandleColor                                  // 0x3ac(0x10)
	bool                                               IndentHandle                                       // 0x3bc(0x1)
	bool                                               Locked                                             // 0x3bd(0x1)
};


// Size 0x20
class Spacer: public Widget
{
public:
	Struct Vector2D                                    Size                                               // 0x138(0x8)
};


// Size 0x428
class SpinBox: public Widget
{
public:
	float                                              Value                                              // 0x138(0x4)
	Struct SpinBoxStyle                                WidgetStyle                                        // 0x150(0x318)
	Class SlateWidgetStyleAsset*                       Style                                              // 0x468(0x8)
	float                                              Delta                                              // 0x470(0x4)
	float                                              SliderExponent                                     // 0x474(0x4)
	Struct SlateFontInfo                               Font                                               // 0x478(0x40)
	float                                              MinDesiredWidth                                    // 0x4b8(0x4)
	bool                                               ClearKeyboardFocusOnCommit                         // 0x4bc(0x1)
	bool                                               SelectAllTextOnCommit                              // 0x4bd(0x1)
	Struct SlateColor                                  ForegroundColor                                    // 0x4c0(0x30)
	bool                                               bOverride_MinValue                                 // 0x530(0x1)
	bool                                               bOverride_MaxValue                                 // 0x530(0x1)
	bool                                               bOverride_MinSliderValue                           // 0x530(0x1)
	bool                                               bOverride_MaxSliderValue                           // 0x530(0x1)
	float                                              MinValue                                           // 0x534(0x4)
	float                                              MaxValue                                           // 0x538(0x4)
	float                                              MinSliderValue                                     // 0x53c(0x4)
	float                                              MaxSliderValue                                     // 0x540(0x4)
};


// Size 0x0
class TableViewBase: public Widget
{
public:
};


// Size 0x48
class ListView: public TableViewBase
{
public:
	float                                              ItemHeight                                         // 0x138(0x4)
	TArray<class Items*>                               Items                                              // 0x140(0x10)
	byte                                               SelectionMode                                      // 0x150(0x1)
};


// Size 0x48
class TileView: public TableViewBase
{
public:
	float                                              ItemWidth                                          // 0x138(0x4)
	float                                              ItemHeight                                         // 0x13c(0x4)
	TArray<class Items*>                               Items                                              // 0x140(0x10)
	byte                                               SelectionMode                                      // 0x150(0x1)
};


// Size 0x130
class TextBlock: public Widget
{
public:
	Class SlateWidgetStyleAsset*                       Style                                              // 0x138(0x8)
	Struct FText                                       Text                                               // 0x140(0x38)
	Struct SlateColor                                  ColorAndOpacity                                    // 0x188(0x30)
	Struct SlateFontInfo                               Font                                               // 0x1c8(0x40)
	Struct Vector2D                                    ShadowOffset                                       // 0x208(0x8)
	Struct LinearColor                                 ShadowColorAndOpacity                              // 0x210(0x10)
	byte                                               Justification                                      // 0x230(0x1)
	bool                                               AutoWrapText                                       // 0x231(0x1)
	float                                              WrapTextAt                                         // 0x234(0x4)
	float                                              MinDesiredWidth                                    // 0x238(0x4)
	Struct Margin                                      Margin                                             // 0x23c(0x10)
	float                                              LineHeightPercentage                               // 0x24c(0x4)
};


// Size 0xb8
class Throbber: public Widget
{
public:
	int                                                NumberOfPieces                                     // 0x138(0x4)
	bool                                               bAnimateHorizontally                               // 0x13c(0x1)
	bool                                               bAnimateVertically                                 // 0x13d(0x1)
	bool                                               bAnimateOpacity                                    // 0x13e(0x1)
	Class SlateBrushAsset*                             PieceImage                                         // 0x140(0x8)
	Struct SlateBrush                                  Image                                              // 0x148(0x90)
};


// Size 0x38
class WidgetAnimation: public MovieSceneSequence
{
public:
	Class MovieScene*                                  MovieScene                                         // 0x2c8(0x8)
	TArray<Struct MovieScene>                          AnimationBindings                                  // 0x2d0(0x10)
};


// Size 0x38
class WidgetBlueprintGeneratedClass: public BlueprintGeneratedClass
{
public:
	Class WidgetTree*                                  WidgetTree                                         // 0x228(0x8)
	TArray<Struct WidgetTree>                          Bindings                                           // 0x230(0x10)
	TArray<class Animations*>                          Animations                                         // 0x240(0x10)
	TArray<Struct FName>                               NamedSlots                                         // 0x250(0x10)
};


// Size 0x0
class WidgetBlueprintLibrary: public BlueprintFunctionLibrary
{
public:
};


// Size 0xf0
class WidgetComponent: public PrimitiveComponent
{
public:
	byte                                               Space                                              // 0x5a8(0x1)
	class                                              WidgetClass                                        // 0x5b0(0x8)
	Struct IntPoint                                    DrawSize                                           // 0x5b8(0x8)
	Struct Vector2D                                    Pivot                                              // 0x5c0(0x8)
	float                                              MaxInteractionDistance                             // 0x5c8(0x4)
	Class LocalPlayer*                                 OwnerPlayer                                        // 0x5d0(0x8)
	Struct LinearColor                                 BackgroundColor                                    // 0x5d8(0x10)
	byte                                               BlendMode                                          // 0x5e8(0x1)
	bool                                               bIsOpaque                                          // 0x5e9(0x1)
	bool                                               bIsTwoSided                                        // 0x5ea(0x1)
	float                                              ParabolaDistortion                                 // 0x5ec(0x4)
	bool                                               TickWhenOffscreen                                  // 0x5f0(0x1)
	Class UserWidget*                                  Widget                                             // 0x5f8(0x8)
	Class BodySetup*                                   BodySetup                                          // 0x600(0x8)
	Class MaterialInterface*                           TranslucentMaterial                                // 0x608(0x8)
	Class MaterialInterface*                           TranslucentMaterial_OneSided                       // 0x610(0x8)
	Class MaterialInterface*                           OpaqueMaterial                                     // 0x618(0x8)
	Class MaterialInterface*                           OpaqueMaterial_OneSided                            // 0x620(0x8)
	Class MaterialInterface*                           MaskedMaterial                                     // 0x628(0x8)
	Class MaterialInterface*                           MaskedMaterial_OneSided                            // 0x630(0x8)
	Class TextureRenderTarget2D*                       RenderTarget                                       // 0x638(0x8)
	Class MaterialInstanceDynamic*                     MaterialInstance                                   // 0x640(0x8)
	bool                                               bUseLegacyRotation                                 // 0x648(0x1)
	bool                                               bAddedToScreen                                     // 0x649(0x1)
};


// Size 0x0
class WidgetLayoutLibrary: public BlueprintFunctionLibrary
{
public:
};


// Size 0x78
class WidgetNavigation: public Object
{
public:
	Struct WidgetNavigationData                        Up                                                 // 0x28(0x14)
	Struct WidgetNavigationData                        Down                                               // 0x3c(0x14)
	Struct WidgetNavigationData                        Left                                               // 0x50(0x14)
	Struct WidgetNavigationData                        Right                                              // 0x64(0x14)
	Struct WidgetNavigationData                        Next                                               // 0x78(0x14)
	Struct WidgetNavigationData                        Previous                                           // 0x8c(0x14)
};


// Size 0x18
class WidgetTree: public Object
{
public:
	Class Widget*                                      RootWidget                                         // 0x28(0x8)
	TArray<class AllWidgets*>                          AllWidgets                                         // 0x30(0x10)
};


}