// Generated by DougTheDruid#2784 on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0xc0
struct AnimNode_CopyPoseFromMesh
{
public:
	Class SkeletalMeshComponent*                                 SourceMeshComponent;                               // 0x30(0x8)
	bool                                                         bUseAttachedParent;                                // 0x38(0x1)
};


// Size 0x58
struct AnimNode_SkeletalControlBase
{
public:
	Struct ComponentSpacePoseLink                                ComponentPose;                                     // 0x30(0x18)
	float                                                        Alpha;                                             // 0x48(0x4)
	Struct InputScaleBias                                        AlphaScaleBias;                                    // 0x4c(0x8)
};


// Size 0xa0
struct AnimNode_BoneDrivenController
{
public:
	Struct BoneReference                                         SourceBone;                                        // 0x58(0xc)
	byte                                                         SourceComponent;                                   // 0x64(0x1)
	char                                                         pad0x3_WHLGB[0x3];                                 // 0x65(0x3)
	Class CurveFloat*                                            DrivingCurve;                                      // 0x68(0x8)
	float                                                        Multiplier;                                        // 0x70(0x4)
	bool                                                         bUseRange;                                         // 0x74(0x1)
	char                                                         pad0x3_S9JVQ[0x3];                                 // 0x75(0x3)
	float                                                        RangeMin;                                          // 0x78(0x4)
	float                                                        RangeMax;                                          // 0x7c(0x4)
	float                                                        RemappedMin;                                       // 0x80(0x4)
	float                                                        RemappedMax;                                       // 0x84(0x4)
	Struct BoneReference                                         TargetBone;                                        // 0x88(0xc)
	byte                                                         TargetComponent;                                   // 0x94(0x1)
	char                                                         pad0x3_VD6TO[0x3];                                 // 0x95(0x3)
	bool                                                         bAffectTargetTranslationX;                         // 0x98(0x1)
	bool                                                         bAffectTargetTranslationY;                         // 0x98(0x1)
	bool                                                         bAffectTargetTranslationZ;                         // 0x98(0x1)
	bool                                                         bAffectTargetRotationX;                            // 0x98(0x1)
	bool                                                         bAffectTargetRotationY;                            // 0x98(0x1)
	bool                                                         bAffectTargetRotationZ;                            // 0x98(0x1)
	bool                                                         bAffectTargetScaleX;                               // 0x98(0x1)
	bool                                                         bAffectTargetScaleY;                               // 0x98(0x1)
	bool                                                         bAffectTargetScaleZ;                               // 0x99(0x1)
	char                                                         pad0x2_7IYG7[0x2];                                 // 0x9a(0x2)
	byte                                                         ModificationMode;                                  // 0x9c(0x1)
};


// Size 0x78
struct AnimNode_CopyBone
{
public:
	Struct BoneReference                                         SourceBone;                                        // 0x58(0xc)
	Struct BoneReference                                         TargetBone;                                        // 0x64(0xc)
	bool                                                         bCopyTranslation;                                  // 0x70(0x1)
	bool                                                         bCopyRotation;                                     // 0x71(0x1)
	bool                                                         bCopyScale;                                        // 0x72(0x1)
};


// Size 0xd0
struct AnimNode_Fabrik
{
public:
	Struct Transform                                             EffectorTransform;                                 // 0x60(0x30)
	byte                                                         EffectorTransformSpace;                            // 0x90(0x1)
	char                                                         pad0x3_FOWRJ[0x3];                                 // 0x91(0x3)
	Struct BoneReference                                         EffectorTransformBone;                             // 0x94(0xc)
	byte                                                         EffectorRotationSource;                            // 0xa0(0x1)
	char                                                         pad0x3_O8TYN[0x3];                                 // 0xa1(0x3)
	Struct BoneReference                                         TipBone;                                           // 0xa4(0xc)
	Struct BoneReference                                         RootBone;                                          // 0xb0(0xc)
	float                                                        Precision;                                         // 0xbc(0x4)
	int                                                          MaxIterations;                                     // 0xc0(0x4)
	bool                                                         bEnableDebugDraw;                                  // 0xc4(0x1)
};


// Size 0xa0
struct AnimNode_HandIKRetargeting
{
public:
	Struct BoneReference                                         RightHandFK;                                       // 0x58(0xc)
	Struct BoneReference                                         LeftHandFK;                                        // 0x64(0xc)
	Struct BoneReference                                         RightHandIK;                                       // 0x70(0xc)
	Struct BoneReference                                         LeftHandIK;                                        // 0x7c(0xc)
	TArray<struct IKBonesToMove>                                 IKBonesToMove;                                     // 0x88(0x10)
	float                                                        HandFKWeight;                                      // 0x98(0x4)
};


// Size 0xc0
struct AnimNode_LookAt
{
public:
	Struct BoneReference                                         BoneToModify;                                      // 0x58(0xc)
	Struct BoneReference                                         LookAtBone;                                        // 0x64(0xc)
	Struct Vector                                                LookAtLocation;                                    // 0x70(0xc)
	byte                                                         LookAtAxis;                                        // 0x7c(0x1)
	bool                                                         bUseLookUpAxis;                                    // 0x7d(0x1)
	byte                                                         LookUpAxis;                                        // 0x7e(0x1)
	char                                                         pad0x1_9NFAN[0x1];                                 // 0x7f(0x1)
	float                                                        LookAtClamp;                                       // 0x80(0x4)
	byte                                                         InterpolationType;                                 // 0x84(0x1)
	char                                                         pad0x3_84ILE[0x3];                                 // 0x85(0x3)
	float                                                        InterpolationTime;                                 // 0x88(0x4)
	float                                                        InterpolationTriggerThreashold;                    // 0x8c(0x4)
	bool                                                         bEnableDebug;                                      // 0x90(0x1)
};


// Size 0x90
struct AnimNode_ModifyBone
{
public:
	Struct BoneReference                                         BoneToModify;                                      // 0x58(0xc)
	Struct Vector                                                Translation;                                       // 0x64(0xc)
	Struct Rotator                                               Rotation;                                          // 0x70(0xc)
	Struct Vector                                                Scale;                                             // 0x7c(0xc)
	byte                                                         TranslationMode;                                   // 0x88(0x1)
	byte                                                         RotationMode;                                      // 0x89(0x1)
	byte                                                         ScaleMode;                                         // 0x8a(0x1)
	byte                                                         TranslationSpace;                                  // 0x8b(0x1)
	byte                                                         RotationSpace;                                     // 0x8c(0x1)
	byte                                                         ScaleSpace;                                        // 0x8d(0x1)
};


// Size 0x90
struct AnimNode_ObserveBone
{
public:
	Struct BoneReference                                         BoneToObserve;                                     // 0x58(0xc)
	byte                                                         DisplaySpace;                                      // 0x64(0x1)
	bool                                                         bRelativeToRefPose;                                // 0x65(0x1)
	char                                                         pad0x2_TRDW3[0x2];                                 // 0x66(0x2)
	Struct Vector                                                Translation;                                       // 0x68(0xc)
	Struct Rotator                                               Rotation;                                          // 0x74(0xc)
	Struct Vector                                                Scale;                                             // 0x80(0xc)
};


// Size 0x78
struct AnimNode_RotationMultiplier
{
public:
	Struct BoneReference                                         TargetBone;                                        // 0x58(0xc)
	Struct BoneReference                                         SourceBone;                                        // 0x64(0xc)
	float                                                        Multiplier;                                        // 0x70(0x4)
	byte                                                         RotationAxisToRefer;                               // 0x74(0x1)
	bool                                                         bIsAdditive;                                       // 0x75(0x1)
};


// Size 0xa8
struct AnimNode_SpringBone
{
public:
	Struct BoneReference                                         SpringBone;                                        // 0x58(0xc)
	bool                                                         bLimitDisplacement;                                // 0x64(0x1)
	char                                                         pad0x3_BHO7U[0x3];                                 // 0x65(0x3)
	float                                                        MaxDisplacement;                                   // 0x68(0x4)
	float                                                        SpringStiffness;                                   // 0x6c(0x4)
	float                                                        SpringDamping;                                     // 0x70(0x4)
	float                                                        ErrorResetThresh;                                  // 0x74(0x4)
	bool                                                         bNoZSpring;                                        // 0x78(0x1)
	bool                                                         bTranslateX;                                       // 0x79(0x1)
	bool                                                         bTranslateY;                                       // 0x7a(0x1)
	bool                                                         bTranslateZ;                                       // 0x7b(0x1)
	bool                                                         bRotateX;                                          // 0x7c(0x1)
	bool                                                         bRotateY;                                          // 0x7d(0x1)
	bool                                                         bRotateZ;                                          // 0x7e(0x1)
};


// Size 0xe0
struct AnimNode_Trail
{
public:
	Struct BoneReference                                         TrailBone;                                         // 0x58(0xc)
	int                                                          ChainLength;                                       // 0x64(0x4)
	byte                                                         ChainBoneAxis;                                     // 0x68(0x1)
	bool                                                         bInvertChainBoneAxis;                              // 0x69(0x1)
	bool                                                         bLimitStretch;                                     // 0x6a(0x1)
	char                                                         pad0x1_SUSA8[0x1];                                 // 0x6b(0x1)
	float                                                        TrailRelaxation;                                   // 0x6c(0x4)
	float                                                        StretchLimit;                                      // 0x70(0x4)
	Struct Vector                                                FakeVelocity;                                      // 0x74(0xc)
	bool                                                         bActorSpaceFakeVel;                                // 0x80(0x1)
};


// Size 0xa0
struct AnimNode_TwoBoneIK
{
public:
	Struct BoneReference                                         IKBone;                                            // 0x58(0xc)
	Struct Vector                                                EffectorLocation;                                  // 0x64(0xc)
	Struct Vector                                                JointTargetLocation;                               // 0x70(0xc)
	Struct Vector2D                                              StretchLimits;                                     // 0x7c(0x8)
	struct FName                                                 EffectorSpaceBoneName;                             // 0x84(0x8)
	bool                                                         bTakeRotationFromEffectorSpace;                    // 0x8c(0x1)
	bool                                                         bMaintainEffectorRelRot;                           // 0x8c(0x1)
	bool                                                         bAllowStretching;                                  // 0x8c(0x1)
	char                                                         pad0x3_8F393[0x3];                                 // 0x8d(0x3)
	byte                                                         EffectorLocationSpace;                             // 0x90(0x1)
	byte                                                         JointTargetLocationSpace;                          // 0x91(0x1)
	char                                                         pad0x2_PUVOM[0x2];                                 // 0x92(0x2)
	struct FName                                                 JointTargetSpaceBoneName;                          // 0x94(0x8)
};


}