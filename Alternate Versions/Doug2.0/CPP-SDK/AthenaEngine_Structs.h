namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x10
class BoxedRpc: public None
{
public:
	Class ScriptStruct*                                Type                                               // 0x8(0x8)
};


// Size 0x28
class PlayModeDefiniton: public None
{
public:
	TArray<Str >                                       Tags                                               // 0x0(0x10)
	TArray<Str >                                       States                                             // 0x10(0x10)
	int                                                CrewMin                                            // 0x20(0x4)
	int                                                CrewMax                                            // 0x24(0x4)
};


// Size 0x20
class SerialisedRpc: public None
{
public:
	Class ScriptStruct*                                ContentsType                                       // 0x18(0x8)
};


// Size 0x10
class ServicesStampId: public None
{
public:
	Struct FString                                     StampId                                            // 0x0(0x10)
};


// Size 0x40
class StringAssetClassPair: public None
{
public:
	Struct FString                                     String                                             // 0x0(0x10)
	TArray<Struct StringAssetClassPairFeatureOverride> FeatureOverrides                                   // 0x30(0x10)
};


// Size 0x28
class StringAssetClassPairFeatureOverride: public None
{
public:
	struct FName                                       FeatureName                                        // 0x0(0x8)
};


// Size 0x10
class ActorComponentSelector: public None
{
public:
	struct FName                                       ComponentName                                      // 0x0(0x8)
	Class ActorComponent*                              CachedComponent                                    // 0x8(0x8)
};


// Size 0x20
class PlaySoundRpc: public None
{
public:
	Class WwiseEvent*                                  WwiseEvent                                         // 0x10(0x8)
	bool                                               PlayOnTarget                                       // 0x18(0x1)
};


// Size 0x10
class EventCancelForceFeedback: public None
{
public:
	Class ForceFeedbackEffect*                         ForceFeedbackEffect                                // 0x0(0x8)
	struct FName                                       Tag                                                // 0x8(0x8)
};


// Size 0x18
class EventTriggerForceFeedback: public None
{
public:
	Class ForceFeedbackEffect*                         ForceFeedbackEffect                                // 0x0(0x8)
	bool                                               Looping                                            // 0x8(0x1)
	struct FName                                       Tag                                                // 0xc(0x8)
};


// Size 0x18
class AthenaAsyncAssetLoaderWrapper: public None
{
public:
};


// Size 0x1
class EventMeshAssigned: public None
{
public:
};


// Size 0x8
class InlineUserDefinedStructDetails: public None
{
public:
	Class ScriptStruct*                                Struct                                             // 0x0(0x8)
};


// Size 0x8
class NativeAndUserDefinedStructSelector: public None
{
public:
	Class ScriptStruct*                                Struct                                             // 0x0(0x8)
};


}