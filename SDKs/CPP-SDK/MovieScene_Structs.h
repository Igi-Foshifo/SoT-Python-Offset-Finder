// Generated by DougTheDruid#2784 on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x30
struct MovieSceneBinding
{
public:
	Struct Guid                                                  ObjectGuid;                                        // 0x0(0x10)
	Struct FString                                               BindingName;                                       // 0x10(0x10)
	TArray<class MovieSceneTrack*>                               Tracks;                                            // 0x20(0x10)
};


// Size 0x38
struct MovieScenePossessable
{
public:
	Struct Guid                                                  Guid;                                              // 0x0(0x10)
	Struct FString                                               Name;                                              // 0x10(0x10)
	class                                                        PossessedObjectClass;                              // 0x20(0x8)
	Struct Guid                                                  ParentGuid;                                        // 0x28(0x10)
};


// Size 0x48
struct MovieSceneSpawnable
{
public:
	bool                                                         IsCameraDockable;                                  // 0x0(0x1)
	char                                                         pad0x3_Y8VMQ[0x3];                                 // 0x1(0x3)
	Struct Guid                                                  Guid;                                              // 0x4(0x10)
	char                                                         pad0x4_NTTJA[0x4];                                 // 0x14(0x4)
	Struct FString                                               Name;                                              // 0x18(0x10)
	Class Object*                                                ObjectTemplate;                                    // 0x28(0x8)
	TArray<struct ChildPossessables>                             ChildPossessables;                                 // 0x30(0x10)
	byte                                                         Ownership;                                         // 0x40(0x1)
};


// Size 0x10
struct MovieSceneTrackLabels
{
public:
	TArray<Str Strings>                                          Strings;                                           // 0x0(0x10)
};


// Size 0x70
struct MovieSceneEditorData
{
public:
	Struct FloatRange                                            WorkingRange;                                      // 0x50(0x10)
	Struct FloatRange                                            ViewRange;                                         // 0x60(0x10)
};


// Size 0x1
struct MovieSceneExpansionState
{
public:
	bool                                                         bExpanded;                                         // 0x0(0x1)
};


// Size 0x10
struct MovieSceneObjectBindingPtr
{
public:
	Struct Guid                                                  Guid;                                              // 0x0(0x10)
};


// Size 0x1c
struct MovieSceneBindingOverrideData
{
public:
	Struct MovieSceneObjectBindingPtr                            ObjectBindingId;                                   // 0x0(0x10)
	bool                                                         bOverridesDefault;                                 // 0x18(0x1)
};


// Size 0x28
struct MovieSceneSequencePlaybackSettings
{
public:
	int                                                          LoopCount;                                         // 0x0(0x4)
	float                                                        PlayRate;                                          // 0x4(0x4)
	bool                                                         bRandomStartTime;                                  // 0x8(0x1)
	char                                                         pad0x3_W4J4M[0x3];                                 // 0x9(0x3)
	float                                                        StartTime;                                         // 0xc(0x4)
	bool                                                         bRestoreState;                                     // 0x10(0x1)
	char                                                         pad0x7_47XZD[0x7];                                 // 0x11(0x7)
};


// Size 0x2
struct MovieSceneSectionEvalOptions
{
public:
	bool                                                         bCanEditCompletionMode;                            // 0x0(0x1)
	byte                                                         CompletionMode;                                    // 0x1(0x1)
};


// Size 0x4
struct MovieSceneTrackIdentifier
{
public:
};


// Size 0x4
struct MovieSceneSequenceID
{
public:
};


// Size 0x30
struct MovieSceneEvaluationField
{
public:
	TArray<struct Ranges>                                        Ranges;                                            // 0x0(0x10)
	TArray<struct Groups>                                        Groups;                                            // 0x10(0x10)
	TArray<struct MetaData>                                      MetaData;                                          // 0x20(0x10)
};


// Size 0x10
struct MovieSceneEvaluationMetaData
{
public:
	TArray<struct ActiveSequences>                               ActiveSequences;                                   // 0x0(0x10)
};


// Size 0x20
struct MovieSceneEvaluationGroup
{
public:
	TArray<struct LUTIndices>                                    LUTIndices;                                        // 0x0(0x10)
	TArray<struct SegmentPtrLUT>                                 SegmentPtrLUT;                                     // 0x10(0x10)
};


// Size 0xc
struct MovieSceneEvaluationFieldSegmentPtr
{
public:
	int                                                          SegmentIndex;                                      // 0x8(0x4)
};


// Size 0x8
struct MovieSceneEvaluationFieldTrackPtr
{
public:
	Struct MovieSceneSequenceID                                  SequenceID;                                        // 0x0(0x4)
	Struct MovieSceneTrackIdentifier                             TrackIdentifier;                                   // 0x4(0x4)
};


// Size 0x10
struct MovieSceneEvaluationGroupLUTIndex
{
public:
	bool                                                         bRequiresImmediateFlush;                           // 0x0(0x1)
	char                                                         pad0x3_5M6UK[0x3];                                 // 0x1(0x3)
	int                                                          LUTOffset;                                         // 0x4(0x4)
	int                                                          NumInitPtrs;                                       // 0x8(0x4)
	int                                                          NumEvalPtrs;                                       // 0xc(0x4)
};


// Size 0x10
struct MovieSceneEvalTemplateBase
{
public:
};


// Size 0x1
struct MovieSceneEmptyStruct
{
public:
};


// Size 0x38
struct MovieSceneEvalTemplatePtr
{
public:
};


// Size 0x18
struct MovieSceneEvalTemplate
{
public:
	byte                                                         CompletionMode;                                    // 0x10(0x1)
};


// Size 0x40
struct MovieSceneSegment
{
public:
};


// Size 0x8
struct SectionEvaluationData
{
public:
	int                                                          ImplIndex;                                         // 0x0(0x4)
	float                                                        ForcedTime;                                        // 0x4(0x4)
};


// Size 0x38
struct MovieSceneTrackImplementationPtr
{
public:
};


// Size 0x10
struct MovieSceneTrackImplementation
{
public:
};


// Size 0x80
struct MovieSceneEvaluationTrack
{
public:
	Struct Guid                                                  ObjectBindingId;                                   // 0x0(0x10)
	byte                                                         EvaluationMethod;                                  // 0x12(0x1)
	char                                                         pad0x5_U2QPF[0x5];                                 // 0x13(0x5)
	TArray<struct Segments>                                      Segments;                                          // 0x18(0x10)
	TArray<struct ChildTemplates>                                ChildTemplates;                                    // 0x28(0x10)
	Struct MovieSceneTrackImplementationPtr                      TrackTemplate;                                     // 0x38(0x38)
	struct FName                                                 EvaluationGroup;                                   // 0x70(0x8)
	bool                                                         bEvaluateInPreroll;                                // 0x78(0x1)
	bool                                                         bEvaluateInPostroll;                               // 0x78(0x1)
};


// Size 0x8
struct MovieSceneSequenceTransform
{
public:
	float                                                        TimeScale;                                         // 0x0(0x4)
	float                                                        Offset;                                            // 0x4(0x4)
};


// Size 0x10
struct MovieSceneSectionParameters
{
public:
	float                                                        StartOffset;                                       // 0x0(0x4)
	float                                                        TimeScale;                                         // 0x4(0x4)
	float                                                        PrerollTime;                                       // 0x8(0x4)
	float                                                        PostrollTime;                                      // 0xc(0x4)
};


// Size 0xa0
struct MovieSceneSequenceHierarchy
{
public:
};


// Size 0x18
struct MovieSceneSequenceHierarchyNode
{
public:
	Struct MovieSceneSequenceID                                  ParentID;                                          // 0x0(0x4)
	char                                                         pad0x4_2RZR7[0x4];                                 // 0x4(0x4)
	TArray<struct Children>                                      Children;                                          // 0x8(0x10)
};


// Size 0x28
struct MovieSceneSubSequenceData
{
public:
	Class MovieSceneSequence*                                    Sequence;                                          // 0x0(0x8)
	Struct MovieSceneSequenceTransform                           RootToSequenceTransform;                           // 0x8(0x8)
	Struct Guid                                                  SourceSequenceSignature;                           // 0x10(0x10)
	Struct MovieSceneSequenceID                                  DeterministicSequenceID;                           // 0x20(0x4)
};


// Size 0x4
struct MovieSceneTrackEvalOptions
{
public:
	bool                                                         bCanEvaluateNearestSection;                        // 0x0(0x1)
	bool                                                         bEvaluateNearestSection;                           // 0x0(0x1)
	bool                                                         bEvaluateInPreroll;                                // 0x0(0x1)
	bool                                                         bEvaluateInPostroll;                               // 0x0(0x1)
};


// Size 0x1
struct MovieSceneTrackCompilationParams
{
public:
	bool                                                         bForEditorPreview;                                 // 0x0(0x1)
};


// Size 0x220
struct CachedMovieSceneEvaluationTemplate
{
public:
};


// Size 0x220
struct MovieSceneEvaluationTemplate
{
public:
	Struct MovieSceneEvaluationField                             EvaluationField;                                   // 0xa0(0x30)
	Struct MovieSceneSequenceHierarchy                           Hierarchy;                                         // 0xd0(0xa0)
	Struct MovieSceneGenerationLedger                            Ledger;                                            // 0x170(0xa8)
	bool                                                         bHasLegacyTrackInstances;                          // 0x218(0x1)
	bool                                                         bKeepStaleTracks;                                  // 0x218(0x1)
};


// Size 0xa8
struct MovieSceneGenerationLedger
{
public:
};


// Size 0x18
struct MovieSceneSequenceCachedSignature
{
public:
	Struct Guid                                                  CachedSignature;                                   // 0x8(0x10)
};


// Size 0x20
struct MovieSceneLegacyTrackInstanceTemplate
{
public:
	Class MovieSceneTrack*                                       Track;                                             // 0x18(0x8)
};


// Size 0x20
struct MovieScenePropertySectionData
{
public:
	struct FName                                                 PropertyName;                                      // 0x0(0x8)
	Struct FString                                               PropertyPath;                                      // 0x8(0x10)
	struct FName                                                 FunctionName;                                      // 0x18(0x8)
};


// Size 0x8
struct MovieSceneKeyStruct
{
public:
};


}