namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x18
class PoolableCollectionMapConfiguration: public None
{
public:
	TArray<Struct PoolableCollectionMapConfigurationEntry> Pools                                              // 0x0(0x10)
	bool                                               PopulateJustInTime                                 // 0x10(0x1)
};


// Size 0x28
class PoolableCollectionMapConfigurationEntry: public None
{
public:
	int                                                Size                                               // 0x20(0x4)
};


}