namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x230
class TaleNote: public SkeletalMeshWieldableItem
{
public:
	int                                                CanvasWidth                                        // 0x7a0(0x4)
	int                                                CanvasHeight                                       // 0x7a4(0x4)
	float                                              FontScale                                          // 0x7a8(0x4)
	Class Font*                                        Font                                               // 0x7b0(0x8)
	Struct TreasureMapWidgetStreamedTexture            Image                                              // 0x7b8(0x30)
	Struct TreasureMapWidgetText                       TitleWidgetText                                    // 0x7e8(0x38)
	Struct TreasureMapWidgetText                       BodyWidgetText                                     // 0x820(0x38)
	float                                              NoteWidth                                          // 0x858(0x4)
	Struct FText                                       Title                                              // 0x860(0x38)
	Struct FText                                       Body                                               // 0x898(0x38)
	Class MaybeCompressedCanvasRenderTarget2D*         RenderTarget                                       // 0x8d0(0x8)
	Class NamedNotificationInputComponent*             NamedNotificationInputComponent                    // 0x8d8(0x8)
	Class UsableWieldableComponent*                    UsableWieldableComponent                           // 0x8e0(0x8)
	Class InventoryItemComponent*                      InventoryItemComponent                             // 0x8e8(0x8)
};


}