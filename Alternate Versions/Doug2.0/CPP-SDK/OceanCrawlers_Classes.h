namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x8
class BTTask_BroadcastOceanCrawlerAbilityAudioEvent: public BTTaskNode
{
public:
	byte                                               OceanCrawlerAudioKeyToBroadcast                    // 0x60(0x1)
};


// Size 0x78
class OceanCrawlerAudioParamsDataAsset: public DataAsset
{
public:
	Class WwiseObjectPoolWrapper*                      WwiseObjectPoolWrapper                             // 0x28(0x8)
	TArray<Struct WwiseObjectPoolWrapper>              AudioKeyPairs                                      // 0x30(0x10)
	Struct WeightedProbabilityRangeOfRanges            BuffThankDelay                                     // 0x40(0x30)
	Struct OceanCrawlerBuffAudioSettings               CrabBuffAudioSettings                              // 0x70(0x10)
	Struct OceanCrawlerBuffAudioSettings               EelBuffAudioSettings                               // 0x80(0x10)
	Struct OceanCrawlerBuffAudioSettings               HermitBuffAudioSettings                            // 0x90(0x10)
};


// Size 0xd8
class OceanCrawlerAudioBroadcaster: public ActorComponent
{
public:
	Class OceanCrawlerAudioParamsDataAsset*            AudioDataAsset                                     // 0xc8(0x8)
	Class Actor*                                       CachedOwner                                        // 0xd0(0x8)
};


}