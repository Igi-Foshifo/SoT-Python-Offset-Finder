namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x49
class BP_SKD_ShrineShimmer_C: public ShimmerActor
{
public:
	Struct PointerToUberGraphFrame                     UberGraphFrame                                     // 0x478(0x8)
	Class StaticMeshComponent*                         surface_bio_lum                                    // 0x480(0x8)
	Class StaticMeshComponent*                         volume_glow                                        // 0x488(0x8)
	Class StaticMeshComponent*                         shimmer_water_00                                   // 0x490(0x8)
	Class StaticMeshComponent*                         shimmer_air_01                                     // 0x498(0x8)
	Class StaticMeshComponent*                         shimmer_air_00                                     // 0x4a0(0x8)
	Class SceneComponent*                              SharedRoot                                         // 0x4a8(0x8)
	float                                              FadeCurve_Opacity_D7ECDDBE4184BCE83B3BD58190CD98C7 // 0x4b0(0x4)
	byte                                               FadeCurve__Direction_D7ECDDBE4184BCE83B3BD58190CD98C7 // 0x4b4(0x1)
	Class TimelineComponent*                           FadeCurve                                          // 0x4b8(0x8)
	bool                                               ShimmerIsVisible                                   // 0x4c0(0x1)
};


}