namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x70
class LightPropagationVolumeSettings: public None
{
public:
	bool                                               bOverride_LPVIntensity                             // 0x0(0x1)
	bool                                               bOverride_LPVDirectionalOcclusionIntensity         // 0x0(0x1)
	bool                                               bOverride_LPVDirectionalOcclusionRadius            // 0x0(0x1)
	bool                                               bOverride_LPVDiffuseOcclusionExponent              // 0x0(0x1)
	bool                                               bOverride_LPVSpecularOcclusionExponent             // 0x0(0x1)
	bool                                               bOverride_LPVDiffuseOcclusionIntensity             // 0x0(0x1)
	bool                                               bOverride_LPVSpecularOcclusionIntensity            // 0x0(0x1)
	bool                                               bOverride_LPVSize                                  // 0x0(0x1)
	bool                                               bOverride_LPVSecondaryOcclusionIntensity           // 0x1(0x1)
	bool                                               bOverride_LPVSecondaryBounceIntensity              // 0x1(0x1)
	bool                                               bOverride_LPVGeometryVolumeBias                    // 0x1(0x1)
	bool                                               bOverride_LPVVplInjectionBias                      // 0x1(0x1)
	bool                                               bOverride_LPVEmissiveInjectionIntensity            // 0x1(0x1)
	float                                              LPVIntensity                                       // 0x4(0x4)
	float                                              LPVVplInjectionBias                                // 0x8(0x4)
	float                                              LPVSize                                            // 0xc(0x4)
	float                                              LPVSecondaryOcclusionIntensity                     // 0x10(0x4)
	float                                              LPVSecondaryBounceIntensity                        // 0x14(0x4)
	float                                              LPVGeometryVolumeBias                              // 0x18(0x4)
	float                                              LPVEmissiveInjectionIntensity                      // 0x1c(0x4)
	float                                              LPVDirectionalOcclusionIntensity                   // 0x20(0x4)
	float                                              LPVDirectionalOcclusionRadius                      // 0x24(0x4)
	float                                              LPVDiffuseOcclusionExponent                        // 0x28(0x4)
	float                                              LPVSpecularOcclusionExponent                       // 0x2c(0x4)
	float                                              LPVDiffuseOcclusionIntensity                       // 0x30(0x4)
	float                                              LPVSpecularOcclusionIntensity                      // 0x34(0x4)
	Struct Transform                                   LPVWorldRef                                        // 0x40(0x30)
};


}