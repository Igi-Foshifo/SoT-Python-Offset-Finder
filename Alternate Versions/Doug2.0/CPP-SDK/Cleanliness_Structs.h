namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0xc
class CleanlinessInfo: public None
{
public:
	byte                                               DirtinessType                                      // 0x0(0x1)
	float                                              Strength                                           // 0x4(0x4)
	float                                              QuickClean                                         // 0x8(0x4)
};


// Size 0x1
class EventQuickCleanRequest: public None
{
public:
};


}