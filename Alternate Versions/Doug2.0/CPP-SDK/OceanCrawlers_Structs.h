namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x10
class OceanCrawlerBuffAudioSettings: public None
{
public:
	Class WwiseEvent*                                  GiveBuffAudioEvent                                 // 0x0(0x8)
	Class WwiseEvent*                                  ReceiveBuffAudioEvent                              // 0x8(0x8)
};


// Size 0x10
class OceanCrawlerAudioKeyPair: public None
{
public:
	byte                                               AudioKey                                           // 0x0(0x1)
	Class WwiseEvent*                                  AudioEvent                                         // 0x8(0x8)
};


}