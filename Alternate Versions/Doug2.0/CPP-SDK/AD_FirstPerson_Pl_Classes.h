namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x0
class AD_FirstPerson_PlayerPirate_Male_Thin_C: public AD_FirstPerson_PlayerPirate_Male_Default_C
{
public:
};


// Size 0x420
class AD_FirstPerson_PlayerPirate_Male_Default_C: public FirstPersonAnimationData
{
public:
	Struct ADS_IdlesNative                             Idles                                              // 0x70(0x10)
	Struct ADS_LocomotionNative                        Locomotion                                         // 0x80(0x50)
	Struct ADS_JumpingNative                           Jumping                                            // 0xd0(0x78)
	Struct ADS_SwimmingNative                          Swimming                                           // 0x148(0x68)
	Struct ADS_WheelNative                             Wheel                                              // 0x1b0(0x88)
	Struct ADS_CapstanNative                           Capstan                                            // 0x238(0x68)
	Struct ADS_CameraAdditiveNative                    CameraAdditive                                     // 0x2a0(0x50)
	Struct ADS_ObjectsNative                           Items                                              // 0x2f0(0x10)
	Struct ADS_Sockets                                 Sockets                                            // 0x300(0x2)
	Struct ADS_CannonNative                            Cannon                                             // 0x308(0x38)
	Struct ADS_RowingBoatNative                        Rowboat                                            // 0x340(0x98)
	Struct ADS_WaterPumpNative                         WaterPump                                          // 0x3d8(0x28)
	Struct ADS_FacialNative                            Facial                                             // 0x400(0x90)
};


}