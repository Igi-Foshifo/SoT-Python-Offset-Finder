// Generated by DougTheDruid#2784 on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x18
struct ThrottledProjectileTickPool
{
public:
	int                                                          MaxNumberToTickPerFrame;                           // 0x0(0x4)
	char                                                         pad0x4_I6IH7[0x4];                                 // 0x4(0x4)
	TArray<class Class*>                                         Projectiles;                                       // 0x8(0x10)
};


// Size 0x10
struct GlobalProjectileSettings
{
public:
	byte                                                         SettingsFor;                                       // 0x0(0x1)
	char                                                         pad0x3_SG0DE[0x3];                                 // 0x1(0x3)
	float                                                        ProjectileDestroyDepth;                            // 0x4(0x4)
	float                                                        ProjectileOceanFloorDestroyDepth;                  // 0x8(0x4)
	float                                                        ProjectileMinimumFallDistance;                     // 0xc(0x4)
};


}