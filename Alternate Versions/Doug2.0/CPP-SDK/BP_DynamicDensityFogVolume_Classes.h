namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x60
class BP_DynamicDensityFogVolume_C: public FogVolume
{
public:
	Struct PointerToUberGraphFrame                     UberGraphFrame                                     // 0x3e0(0x8)
	float                                              StateBlend_BlendAmount_F79089CA4C773743F03F4C978EB7C986 // 0x3e8(0x4)
	byte                                               StateBlend__Direction_F79089CA4C773743F03F4C978EB7C986 // 0x3ec(0x1)
	Class TimelineComponent*                           StateBlend                                         // 0x3f0(0x8)
	Class MaterialInstanceDynamic*                     UpdateMaterial                                     // 0x3f8(0x8)
	Class CanvasRenderTarget2D*                        Canvas                                             // 0x400(0x8)
	int                                                CurrentState                                       // 0x408(0x4)
	int                                                NextState                                          // 0x40c(0x4)
	TArray<class StateTextures*>                       StateTextures                                      // 0x410(0x10)
	int                                                Width                                              // 0x420(0x4)
	int                                                Height                                             // 0x424(0x4)
	bool                                               UseStateParameters                                 // 0x428(0x1)
	TArray<Struct UCompanyServiceInterface>            StateParams                                        // 0x430(0x10)
};


}