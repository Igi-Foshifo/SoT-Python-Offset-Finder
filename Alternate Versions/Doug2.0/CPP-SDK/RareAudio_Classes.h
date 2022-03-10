namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x30
class WwiseEmitterComponent: public SceneComponent
{
public:
	Struct WwiseEmitter                                Emitter                                            // 0x2d8(0x20)
	Class WwiseObjectPoolWrapper*                      WwiseObjectPoolWrapper                             // 0x2f8(0x8)
};


// Size 0x0
class AnimNotifyWwiseEmitterComponent: public WwiseEmitterComponent
{
public:
};


// Size 0x48
class AnimNotify_WwiseSound: public AnimNotify
{
public:
	Class WwiseEvent*                                  WwiseEvent                                         // 0x38(0x8)
	bool                                               OwnedByWorld                                       // 0x40(0x1)
	Struct Vector                                      OwnedByWorldEmitterOffset                          // 0x44(0xc)
	byte                                               PerspectiveRestriction                             // 0x50(0x1)
	Class WwiseObjectPoolWrapper*                      OwnedByWorldWisePoolToUse                          // 0x58(0x8)
};


// Size 0x18
class AnimNotify_WwiseSoundMeshSwitch: public AnimNotify_WwiseSound
{
public:
	struct FName                                       SkeletalMeshSwitchGroup                            // 0x80(0x8)
	TArray<Struct SkeletalMeshSwitchGroup>             MeshOverrides                                      // 0x88(0x10)
};


// Size 0x60
class AnimNotifyState_WwiseSound: public AnimNotifyState
{
public:
	Class WwiseEvent*                                  WwiseEvent                                         // 0x28(0x8)
	Class WwiseEvent*                                  WwiseEventEnd                                      // 0x30(0x8)
};


// Size 0x8
class AudioEventToComponentMap: public Actor
{
public:
	Class AudioEventToComponentMapComponent*           AudioEventToComponentMapComponent                  // 0x3d0(0x8)
};


// Size 0x10
class AudioEventToComponentMapComponent: public ActorComponent
{
public:
	TArray<Struct GetDurationMax>                      LocalComponentMappings                             // 0xc8(0x10)
};


// Size 0x0
class WwiseEmitterBlueprintLibrary: public BlueprintFunctionLibrary
{
public:
};


// Size 0x0
class WwiseEmitterComponentBlueprintLibrary: public BlueprintFunctionLibrary
{
public:
};


// Size 0x50
class WwiseObjectPoolWrapper: public Object
{
public:
	struct FName                                       PoolName                                           // 0x28(0x8)
	int                                                MaxResources                                       // 0x30(0x4)
	bool                                               DisableOcclusion                                   // 0x34(0x1)
	bool                                               DisableReverb                                      // 0x35(0x1)
	Struct WwiseNativeEmitterPoolDensityParams         PoolDensityParams                                  // 0x38(0x28)
};


// Size 0x0
class AudioIslandStaticMeshAssociatorBase: public Actor
{
public:
};


// Size 0x30
class AudioPortalComponent: public SceneComponent
{
public:
	Class AudioSpaceDataAsset*                         AudioInsideSpace                                   // 0x2d0(0x8)
	Class AudioSpaceDataAsset*                         AudioOutsideSpace                                  // 0x2d8(0x8)
	float                                              PortalTriggerDistance                              // 0x2e0(0x4)
	float                                              InsideRtpcUpdateDistance                           // 0x2e4(0x4)
	float                                              OutsideRtpcUpdateDistance                          // 0x2e8(0x4)
	bool                                               TrackAttachmentToActor                             // 0x2ec(0x1)
};


// Size 0x0
class AudioPortalInterface: public Interface
{
public:
};


// Size 0xb0
class AudioPortalService: public Object
{
public:
};


// Size 0x10
class AudioSpaceComponent: public StaticMeshComponent
{
public:
	Class AudioSpaceDataAsset*                         AudioSpace                                         // 0x610(0x8)
};


// Size 0x18
class AudioSpaceDataAsset: public DataAsset
{
public:
	struct FName                                       RtpcToUpdate                                       // 0x28(0x8)
	Class WwiseEvent*                                  AmbienceToStart                                    // 0x30(0x8)
	Class WwiseEvent*                                  AmbienceToStop                                     // 0x38(0x8)
};


// Size 0x10
class AudioSpaceTrackerComponent: public ActorComponent
{
public:
	TArray<class CurrentSpaces*>                       CurrentSpaces                                      // 0xc8(0x10)
};


// Size 0x10
class RareAudioHardwareDeviceService: public AudioHardwareDeviceService
{
public:
};


// Size 0x10
class StaticMeshAudioDataAsset: public DataAsset
{
public:
	TArray<Struct PopulateInstanceAssociations>        MeshToAudioAssociations                            // 0x28(0x10)
};


// Size 0x10
class StaticMeshAudioEmittersComponent: public SceneComponent
{
public:
	TArray<Struct TritonMapFilename>                   InstanceAssociations                               // 0x2d0(0x10)
};


// Size 0x38
class TritonAcousticMap: public Object
{
public:
	Struct FString                                     TritonMapFilename                                  // 0x28(0x10)
};


// Size 0x10
class TritonComponent: public SceneComponent
{
public:
	Class TritonAcousticMap*                           TritonMapAsset                                     // 0x2d0(0x8)
	float                                              TritonEffectRadius                                 // 0x2d8(0x4)
};


// Size 0x108
class TritonService: public Object
{
public:
	TArray<class RegisteredTritonComponents*>          RegisteredTritonComponents                         // 0x38(0x10)
	Class TritonComponent*                             CachedListenerInfo                                 // 0xf0(0x8)
};


}