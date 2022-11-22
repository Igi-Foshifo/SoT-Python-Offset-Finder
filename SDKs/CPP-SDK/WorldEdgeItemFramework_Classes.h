// Generated by DougTheDruid#2784 on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x0
class WorldEdgeItemServiceInterface: public Interface
{
public:
};


// Size 0x18
class WorldEdgeItemServiceParams: public DataAsset
{
public:
	Class EnvQuery*                                              TeleportItemsEQSQuery;                             // 0x28(0x8)
	float                                                        ThrottledItemSpawnRate;                            // 0x30(0x4)
	float                                                        TimeToSinkFor;                                     // 0x34(0x4)
	float                                                        AdditionalMoveDistance;                            // 0x38(0x4)
	int                                                          MaxBatchItemsPerSlice;                             // 0x3c(0x4)
};


// Size 0x248
class WorldEdgeItemService: public Actor
{
public:
	Class WorldEdgeItemServiceParams*                            WorldEdgeItemParameters;                           // 0x3d0(0x8)
	Struct EnvQueryRequest                                       SpawnItemEQSRequest;                               // 0x3d8(0x170)
};


}