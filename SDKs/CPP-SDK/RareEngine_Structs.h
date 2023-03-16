// Generated by DougTheDruid#2784 on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x58
struct MemoryVisualiserCategory
{
public:
	Struct FString                                               CategoryName;                                      // 0x0(0x10)
	TArray<struct CategoryStats>                                 CategoryStats;                                     // 0x10(0x10)
	TArray<struct CategoryClasses>                               CategoryClasses;                                   // 0x20(0x10)
	bool                                                         CollectOnServer;                                   // 0x30(0x1)
	char                                                         pad0x3_457GQ[0x3];                                 // 0x31(0x3)
	float                                                        XboxOneBudgetMB;                                   // 0x34(0x4)
	float                                                        XboxOneSBudgetMB;                                  // 0x38(0x4)
	float                                                        XboxOneXBudgetMB;                                  // 0x3c(0x4)
	float                                                        PCLowSpecBudgetMB;                                 // 0x40(0x4)
	float                                                        PCMidSpecBudgetMB;                                 // 0x44(0x4)
	float                                                        PCHighSpecBudgetMB;                                // 0x48(0x4)
	float                                                        PCUltraSpecBudgetMB;                               // 0x4c(0x4)
	float                                                        MemoryUsageMB;                                     // 0x50(0x4)
};


// Size 0x28
struct MemoryVisualiserClass
{
public:
	class                                                        ClassType;                                         // 0x0(0x8)
	byte                                                         MemoryGatheringMode;                               // 0x8(0x1)
	char                                                         pad0x7_Z3UIB[0x7];                                 // 0x9(0x7)
	Struct FString                                               DisplayName;                                       // 0x10(0x10)
	float                                                        MemoryUsageMB;                                     // 0x20(0x4)
};


// Size 0x20
struct MemoryVisualiserStat
{
public:
	struct FName                                                 StatName;                                          // 0x0(0x8)
	Struct FString                                               DisplayName;                                       // 0x8(0x10)
	float                                                        MemoryUsageMB;                                     // 0x18(0x4)
};


// Size 0x50
struct MemoryCommonData
{
public:
	float                                                        mUsedPhysicalMB;                                   // 0x0(0x4)
	float                                                        mUsedPhysicalPercentage;                           // 0x4(0x4)
	float                                                        mAvailablePhysicalMB;                              // 0x8(0x4)
	float                                                        mAvailablePhysicalPercentage;                      // 0xc(0x4)
	float                                                        mOOMBackupPoolSize;                                // 0x10(0x4)
	float                                                        mExecutableSize;                                   // 0x14(0x4)
	float                                                        mConfigCacheMemoryUsage;                           // 0x18(0x4)
	float                                                        mFNameTableMemoryUsage;                            // 0x1c(0x4)
	float                                                        mAssetRegistrySize;                                // 0x20(0x4)
	float                                                        mGCWorkingMemoryPoolSizeMB;                        // 0x24(0x4)
	float                                                        mGCAllocated;                                      // 0x28(0x4)
	float                                                        mObjectsArraySizeMB;                               // 0x2c(0x4)
	int                                                          mMaxObjectsAllowed;                                // 0x30(0x4)
	int                                                          mNumPermanentObjects;                              // 0x34(0x4)
	int                                                          mNumTransientObjects;                              // 0x38(0x4)
	int                                                          mUnsetSlotCound;                                   // 0x3c(0x4)
	int                                                          mNumClusters;                                      // 0x44(0x4)
	int                                                          mNumClusteredObjects;                              // 0x48(0x4)
	int                                                          mMaxClusterSize;                                   // 0x4c(0x4)
};


// Size 0x10
struct StaticMeshComponentList
{
public:
	TArray<class StaticMeshComponent*>                           Components;                                        // 0x0(0x10)
};


// Size 0x10
struct StaticMeshActorList
{
public:
	TArray<class StaticMeshActor*>                               Actors;                                            // 0x0(0x10)
};


}