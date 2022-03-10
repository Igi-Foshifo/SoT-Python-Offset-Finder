namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x78
class MovieScene3DTransformKeyStruct: public None
{
public:
	Struct Vector                                      Location                                           // 0x8(0xc)
	Struct Rotator                                     Rotation                                           // 0x14(0xc)
	Struct Vector                                      Scale                                              // 0x20(0xc)
};


// Size 0x30
class MovieScene3DScaleKeyStruct: public None
{
public:
	Struct Vector                                      Scale                                              // 0x8(0xc)
};


// Size 0x30
class MovieScene3DRotationKeyStruct: public None
{
public:
	Struct Rotator                                     Rotation                                           // 0x8(0xc)
};


// Size 0x30
class MovieScene3DLocationKeyStruct: public None
{
public:
	Struct Vector                                      Location                                           // 0x8(0xc)
};


// Size 0x20
class MovieSceneCameraAnimSectionData: public None
{
public:
	Class CameraAnim*                                  CameraAnim                                         // 0x0(0x8)
	float                                              PlayRate                                           // 0x8(0x4)
	float                                              PlayScale                                          // 0xc(0x4)
	float                                              BlendInTime                                        // 0x10(0x4)
	float                                              BlendOutTime                                       // 0x14(0x4)
	bool                                               bLooping                                           // 0x18(0x1)
};


// Size 0x20
class MovieSceneCameraShakeSectionData: public None
{
public:
	class                                              ShakeClass                                         // 0x0(0x8)
	float                                              PlayScale                                          // 0x8(0x4)
	byte                                               PlaySpace                                          // 0xc(0x1)
	Struct Rotator                                     UserDefinedPlaySpace                               // 0x10(0xc)
};


// Size 0x58
class MovieSceneColorKeyStruct: public None
{
public:
	Struct LinearColor                                 Color                                              // 0x8(0x10)
};


// Size 0x20
class MovieSceneEventSectionData: public None
{
public:
	TArray<Float None>                                 KeyTimes                                           // 0x0(0x10)
	TArray<Struct EventPayload>                        KeyValues                                          // 0x10(0x10)
};


// Size 0x30
class EventPayload: public None
{
public:
	struct FName                                       EventName                                          // 0x0(0x8)
	bool                                               IsSubtitleEvent                                    // 0x8(0x1)
	int                                                ActorNumber                                        // 0xc(0x4)
	int                                                SubtitleIndex                                      // 0x10(0x4)
	Struct MovieSceneEventParameters                   Parameters                                         // 0x18(0x18)
};


// Size 0x18
class MovieSceneEventParameters: public None
{
public:
};


// Size 0x1f0
class ColorParameterNameAndCurves: public None
{
public:
	struct FName                                       ParameterName                                      // 0x0(0x8)
	int                                                Index                                              // 0x8(0x4)
	Struct RichCurve                                   RedCurve                                           // 0x10(0x78)
	Struct RichCurve                                   GreenCurve                                         // 0x88(0x78)
	Struct RichCurve                                   BlueCurve                                          // 0x100(0x78)
	Struct RichCurve                                   AlphaCurve                                         // 0x178(0x78)
};


// Size 0x178
class VectorParameterNameAndCurves: public None
{
public:
	struct FName                                       ParameterName                                      // 0x0(0x8)
	int                                                Index                                              // 0x8(0x4)
	Struct RichCurve                                   XCurve                                             // 0x10(0x78)
	Struct RichCurve                                   YCurve                                             // 0x88(0x78)
	Struct RichCurve                                   ZCurve                                             // 0x100(0x78)
};


// Size 0x88
class ScalarParameterNameAndCurve: public None
{
public:
	struct FName                                       ParameterName                                      // 0x0(0x8)
	int                                                Index                                              // 0x8(0x4)
	Struct RichCurve                                   ParameterCurve                                     // 0x10(0x78)
};


// Size 0x98
class MovieSceneSkeletalAnimationParams: public None
{
public:
	Class AnimSequenceBase*                            Animation                                          // 0x0(0x8)
	float                                              StartOffset                                        // 0x8(0x4)
	float                                              EndOffset                                          // 0xc(0x4)
	float                                              PlayRate                                           // 0x10(0x4)
	bool                                               bReverse                                           // 0x14(0x1)
	struct FName                                       SlotName                                           // 0x18(0x8)
	Struct RichCurve                                   Weight                                             // 0x20(0x78)
};


// Size 0x60
class MovieSceneVector4KeyStruct: public None
{
public:
	Struct Vector4                                     Vector                                             // 0x50(0x10)
};


// Size 0x48
class MovieSceneVectorKeyStructBase: public None
{
public:
};


// Size 0x58
class MovieSceneVectorKeyStruct: public None
{
public:
	Struct Vector                                      Vector                                             // 0x48(0xc)
};


// Size 0x50
class MovieSceneVector2DKeyStruct: public None
{
public:
	Struct Vector2D                                    Vector                                             // 0x48(0x8)
};


// Size 0x50
class MovieSceneComponentMaterialSectionTemplate: public None
{
public:
	int                                                MaterialIndex                                      // 0x48(0x4)
};


// Size 0x48
class MovieSceneParameterSectionTemplate: public None
{
public:
	TArray<Struct MaterialIndex>                       Scalars                                            // 0x18(0x10)
	TArray<Struct Scalars>                             Vectors                                            // 0x28(0x10)
	TArray<Struct Vectors>                             Colors                                             // 0x38(0x10)
};


// Size 0x88
class MovieSceneSpawnSectionTemplate: public None
{
public:
	Struct IntegralCurve                               Curve                                              // 0x18(0x70)
};


// Size 0x38
class MovieScene3DAttachSectionTemplate: public None
{
public:
	Struct Guid                                        AttachGuid                                         // 0x18(0x10)
	struct FName                                       AttachSocketName                                   // 0x28(0x8)
	struct FName                                       AttachComponentName                                // 0x30(0x8)
};


// Size 0xa8
class MovieScene3DPathSectionTemplate: public None
{
public:
	Struct Guid                                        PathGuid                                           // 0x18(0x10)
	Struct RichCurve                                   TimingCurve                                        // 0x28(0x78)
	byte                                               FrontAxisEnum                                      // 0xa0(0x1)
	byte                                               UpAxisEnum                                         // 0xa1(0x1)
	bool                                               bFollow                                            // 0xa4(0x1)
	bool                                               bReverse                                           // 0xa4(0x1)
	bool                                               bForceUpright                                      // 0xa4(0x1)
};


// Size 0x450
class MovieScene3DTransformSectionTemplate: public None
{
public:
	Struct RichCurve                                   TranslationCurve                                   // 0x18(0x78)
	Struct RichCurve                                   RotationCurve                                      // 0x180(0x78)
	Struct RichCurve                                   ScaleCurve                                         // 0x2e8(0x78)
};


// Size 0xb8
class MovieSceneActorReferenceSectionTemplate: public None
{
public:
	Struct MovieScenePropertySectionData               PropertyData                                       // 0x18(0x20)
	Struct IntegralCurve                               ActorGuidIndexCurve                                // 0x38(0x70)
	TArray<Struct ActorGuidIndexCurve>                 ActorGuids                                         // 0xa8(0x10)
};


// Size 0x130
class MovieSceneAudioSectionTemplate: public None
{
public:
	Struct MovieSceneAudioSectionTemplateData          AudioData                                          // 0x18(0x118)
};


// Size 0x118
class MovieSceneAudioSectionTemplateData: public None
{
public:
	Class SoundBase*                                   Sound                                              // 0x0(0x8)
	float                                              AudioStartOffset                                   // 0x8(0x4)
	Struct FloatRange                                  AudioRange                                         // 0xc(0x10)
	Struct RichCurve                                   AudioPitchMultiplierCurve                          // 0x20(0x78)
	Struct RichCurve                                   AudioVolumeCurve                                   // 0x98(0x78)
	int                                                RowIndex                                           // 0x110(0x4)
};


// Size 0x18
class MovieSceneAdditiveCameraAnimationTrackTemplate: public None
{
public:
};


// Size 0x40
class MovieSceneCameraShakeSectionTemplate: public None
{
public:
	Struct MovieSceneCameraShakeSectionData            SourceData                                         // 0x18(0x20)
	float                                              SectionStartTime                                   // 0x38(0x4)
};


// Size 0x18
class MovieSceneAdditiveCameraAnimationTemplate: public None
{
public:
};


// Size 0x40
class MovieSceneCameraAnimSectionTemplate: public None
{
public:
	Struct MovieSceneCameraAnimSectionData             SourceData                                         // 0x18(0x20)
	float                                              SectionStartTime                                   // 0x38(0x4)
};


// Size 0x28
class MovieSceneCameraCutSectionTemplate: public None
{
public:
	Struct Guid                                        CameraGuid                                         // 0x18(0x10)
};


// Size 0x210
class MovieSceneColorSectionTemplate: public None
{
public:
	struct FName                                       PropertyName                                       // 0x18(0x8)
	Struct FString                                     PropertyPath                                       // 0x20(0x10)
	Struct RichCurve                                   Curves                                             // 0x30(0x78)
};


// Size 0x40
class MovieSceneEventSectionTemplate: public None
{
public:
	Struct MovieSceneEventSectionData                  EventData                                          // 0x18(0x20)
	bool                                               bFireEventsWhenForwards                            // 0x38(0x1)
	bool                                               bFireEventsWhenBackwards                           // 0x38(0x1)
};


// Size 0xa8
class MovieSceneFadeSectionTemplate: public None
{
public:
	Struct RichCurve                                   FadeCurve                                          // 0x18(0x78)
	Struct LinearColor                                 FadeColor                                          // 0x90(0x10)
	bool                                               bFadeAudio                                         // 0xa0(0x1)
};


// Size 0x18
class MovieSceneLevelVisibilitySharedTrack: public None
{
public:
};


// Size 0x30
class MovieSceneLevelVisibilitySectionTemplate: public None
{
public:
	byte                                               Visibility                                         // 0x18(0x1)
	TArray<Struct FName>                               LevelNames                                         // 0x20(0x10)
};


// Size 0x48
class MovieSceneParticleParameterSectionTemplate: public None
{
public:
};


// Size 0x88
class MovieSceneParticleSectionTemplate: public None
{
public:
	Struct IntegralCurve                               ParticleKeys                                       // 0x18(0x70)
};


// Size 0x220
class MovieSceneVectorPropertySectionTemplate: public None
{
public:
	Struct MovieScenePropertySectionData               PropertyData                                       // 0x18(0x20)
	Struct RichCurve                                   ComponentCurves                                    // 0x38(0x78)
	int                                                NumChannelsUsed                                    // 0x218(0x4)
};


// Size 0xb0
class MovieSceneStringPropertySectionTemplate: public None
{
public:
	Struct MovieScenePropertySectionData               PropertyData                                       // 0x18(0x20)
	Struct StringCurve                                 StringCurve                                        // 0x38(0x78)
};


// Size 0xa8
class MovieSceneIntegerPropertySectionTemplate: public None
{
public:
	Struct MovieScenePropertySectionData               PropertyData                                       // 0x18(0x20)
	Struct IntegralCurve                               IntegerCurve                                       // 0x38(0x70)
};


// Size 0xa8
class MovieSceneEnumPropertySectionTemplate: public None
{
public:
	Struct MovieScenePropertySectionData               PropertyData                                       // 0x18(0x20)
	Struct IntegralCurve                               EnumCurve                                          // 0x38(0x70)
};


// Size 0xa8
class MovieSceneBytePropertySectionTemplate: public None
{
public:
	Struct MovieScenePropertySectionData               PropertyData                                       // 0x18(0x20)
	Struct IntegralCurve                               ByteCurve                                          // 0x38(0x70)
};


// Size 0xb0
class MovieSceneFloatPropertySectionTemplate: public None
{
public:
	Struct MovieScenePropertySectionData               PropertyData                                       // 0x18(0x20)
	Struct RichCurve                                   FloatCurve                                         // 0x38(0x78)
};


// Size 0xa8
class MovieSceneBoolPropertySectionTemplate: public None
{
public:
	Struct MovieScenePropertySectionData               PropertyData                                       // 0x18(0x20)
	Struct IntegralCurve                               BoolCurve                                          // 0x38(0x70)
};


// Size 0x18
class MovieSceneSkeletalAnimationSharedTrack: public None
{
public:
};


// Size 0xb8
class MovieSceneSkeletalAnimationSectionTemplate: public None
{
public:
	Struct MovieSceneSkeletalAnimationSectionTemplateParameters Params                                             // 0x18(0xa0)
};


// Size 0xa0
class MovieSceneSkeletalAnimationSectionTemplateParameters: public None
{
public:
	float                                              SectionStartTime                                   // 0x98(0x4)
	float                                              SectionEndTime                                     // 0x9c(0x4)
};


// Size 0x90
class MovieSceneSlomoSectionTemplate: public None
{
public:
	Struct RichCurve                                   SlomoCurve                                         // 0x18(0x78)
};


// Size 0xb0
class MovieSceneVisibilitySectionTemplate: public None
{
public:
	bool                                               bTemporarilyHiddenInGame                           // 0xa8(0x1)
};


}