namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x41
class BP_DamageZone_C: public DamageZone
{
public:
	Struct PointerToUberGraphFrame                     UberGraphFrame                                     // 0x7e8(0x8)
	struct FName                                       Repair Tag                                         // 0x7f0(0x8)
	Struct BP_InternalDamageGroup                      RepairGroup                                        // 0x7f8(0x10)
	int                                                ExternalHitBufferIndex                             // 0x808(0x4)
	int                                                MaxStoredHits                                      // 0x80c(0x4)
	TArray<class Deferred Decals*>                     Deferred Decals                                    // 0x810(0x10)
	int                                                ClientUpdateEventCount                             // 0x820(0x4)
	int                                                ExternalDecalBufferIndex                           // 0x824(0x4)
	bool                                               HasBeenInitialized                                 // 0x828(0x1)
};


}