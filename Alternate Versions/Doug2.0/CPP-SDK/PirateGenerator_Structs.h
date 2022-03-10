namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x14
class IPGBlendShape: public None
{
public:
	struct FName                                       Name                                               // 0x0(0x8)
	struct FName                                       NodeName                                           // 0x8(0x8)
	float                                              Value                                              // 0x10(0x4)
};


// Size 0x80
class PirateDescription: public None
{
public:
	byte                                               Type                                               // 0x0(0x1)
	int                                                Version                                            // 0x4(0x4)
	byte                                               Gender                                             // 0x8(0x1)
	byte                                               Ethnicity                                          // 0x9(0x1)
	Struct RadialCoordinate                            BodyShapeCoordinate                                // 0xc(0x8)
	TArray<Struct BodyShapeCoordinate>                 BlendShapes                                        // 0x18(0x10)
	TArray<Struct IPGDynamicSlider>                    DynamicSliders                                     // 0x28(0x10)
	int                                                Seed                                               // 0x38(0x4)
	TArray<Struct FName>                               Items                                              // 0x40(0x10)
	TArray<Struct FName>                               TextureReferences                                  // 0x50(0x10)
	TArray<Struct FName>                               MaterialReferences                                 // 0x60(0x10)
	TArray<Struct IPGScalarParameter>                  ScalarParameters                                   // 0x70(0x10)
};


// Size 0xc
class IPGScalarParameter: public None
{
public:
	struct FName                                       Name                                               // 0x0(0x8)
	float                                              Value                                              // 0x8(0x4)
};


// Size 0x8
class IPGDynamicSlider: public None
{
public:
	int                                                AffectedPriority                                   // 0x0(0x4)
	float                                              Value                                              // 0x4(0x4)
};


// Size 0x8
class RadialCoordinate: public None
{
public:
	float                                              NormalizedAngle                                    // 0x0(0x4)
	float                                              RadialDistance                                     // 0x4(0x4)
};


// Size 0xc
class WardrobeOutfitCategoryBias: public None
{
public:
	struct FName                                       CategoryName                                       // 0x0(0x8)
	float                                              EmptyProbability                                   // 0x8(0x4)
};


// Size 0x30
class WardrobeOutfitResult: public None
{
public:
	TArray<class Meshes*>                              Meshes                                             // 0x0(0x10)
	TArray<Struct Meshes>                              ScalarParameters                                   // 0x10(0x10)
	TArray<Struct FName>                               MaterialReferences                                 // 0x20(0x10)
};


// Size 0x10
class ClothingCreatorSlotItemConfig: public None
{
public:
	TArray<Struct ClothingCreatorSlotItem>             Items                                              // 0x0(0x10)
};


// Size 0x50
class ClothingCreatorSlotItem: public None
{
public:
	Struct FString                                     Name                                               // 0x0(0x10)
	Struct FString                                     DisplayName                                        // 0x10(0x10)
	Struct FString                                     Description                                        // 0x20(0x10)
	Struct FString                                     Category                                           // 0x30(0x10)
	TArray<Str >                                       Slots                                              // 0x40(0x10)
};


// Size 0x60
class IPGTestClass: public None
{
public:
	struct FName                                       StringTest                                         // 0x0(0x8)
	float                                              FloatTest                                          // 0x8(0x4)
	int                                                IntTest                                            // 0xc(0x4)
	byte                                               EnumTest                                           // 0x10(0x1)
	Struct IPGTestSimpleType                           ObjectTest                                         // 0x14(0xc)
	Struct IPGTestSimpleType                           ObjectNoneTest                                     // 0x20(0xc)
	TArray<Struct IPGTestSimpleType>                   VectorTest                                         // 0x30(0x10)
	TArray<Struct FName>                               StrVectorTest                                      // 0x40(0x10)
	TArray<Byte StrVectorTest>                         EnumVectorTest                                     // 0x50(0x10)
};


// Size 0xc
class IPGTestSimpleType: public None
{
public:
	struct FName                                       StringTest                                         // 0x0(0x8)
	int                                                IntTest                                            // 0x8(0x4)
};


// Size 0x78
class Config: public None
{
public:
	Struct IPGData                                     IPG                                                // 0x0(0x48)
	struct FName                                       MaleBaseShape                                      // 0x48(0x8)
	struct FName                                       FemaleBaseShape                                    // 0x50(0x8)
	Struct IPGBodyShapes                               BodyShapes                                         // 0x58(0x20)
};


// Size 0x20
class IPGBodyShapes: public None
{
public:
	TArray<Struct FemaleBaseShape>                     Male                                               // 0x0(0x10)
	TArray<Struct IPGBodyShape>                        Female                                             // 0x10(0x10)
};


// Size 0xc
class IPGBodyShape: public None
{
public:
	struct FName                                       Name                                               // 0x0(0x8)
	float                                              NormalizedWheelAngle                               // 0x8(0x4)
};


// Size 0x48
class IPGData: public None
{
public:
	TArray<Struct IPGDynamicSliderName>                DynamicSliderNames                                 // 0x0(0x10)
	TArray<Struct IPGBlendingMethod>                   BlendingMethods                                    // 0x10(0x10)
	TArray<Struct IPGSetGroup>                         Groups                                             // 0x20(0x10)
	int                                                CurrentVersion                                     // 0x30(0x4)
	TArray<Struct IPGSetsData>                         Versions                                           // 0x38(0x10)
};


// Size 0x18
class IPGSetsData: public None
{
public:
	int                                                Version                                            // 0x0(0x4)
	TArray<Struct IPGSetData>                          Sets                                               // 0x8(0x10)
};


// Size 0x20
class IPGSetData: public None
{
public:
	struct FName                                       Name                                               // 0x0(0x8)
	byte                                               Gender                                             // 0x8(0x1)
	byte                                               Ethnicity                                          // 0x9(0x1)
	int                                                Priority                                           // 0xc(0x4)
	TArray<Struct IPGBlendNode>                        Nodes                                              // 0x10(0x10)
};


// Size 0x18
class IPGBlendNode: public None
{
public:
	struct FName                                       Name                                               // 0x0(0x8)
	TArray<Struct IPGBlendRange>                       Ranges                                             // 0x8(0x10)
};


// Size 0x28
class IPGBlendRange: public None
{
public:
	struct FName                                       Name                                               // 0x0(0x8)
	float                                              Min                                                // 0x8(0x4)
	float                                              Max                                                // 0xc(0x4)
	float                                              Env                                                // 0x10(0x4)
	TArray<Struct IPGCompatibleSet>                    Compatibility                                      // 0x18(0x10)
};


// Size 0x8
class IPGCompatibleSet: public None
{
public:
	struct FName                                       SetName                                            // 0x0(0x8)
};


// Size 0x8
class IPGSetGroup: public None
{
public:
	int                                                Priority                                           // 0x0(0x4)
	byte                                               Mode                                               // 0x4(0x1)
};


// Size 0x10
class IPGBlendingMethod: public None
{
public:
	struct FName                                       Name                                               // 0x0(0x8)
	float                                              Probability                                        // 0x8(0x4)
	byte                                               BlendType                                          // 0xc(0x1)
};


// Size 0xc
class IPGDynamicSliderName: public None
{
public:
	int                                                AffectedPriority                                   // 0x0(0x4)
	struct FName                                       Name                                               // 0x4(0x8)
};


// Size 0x20
class WardrobeConfig: public None
{
public:
	TArray<Struct ClothingSlot>                        Slots                                              // 0x0(0x10)
	TArray<Struct FName>                               Priority                                           // 0x10(0x10)
};


// Size 0x20
class ClothingSlot: public None
{
public:
	struct FName                                       Name                                               // 0x0(0x8)
	TArray<Struct FName>                               Tags                                               // 0x8(0x10)
	byte                                               Type                                               // 0x18(0x1)
};


// Size 0x40
class Outfit: public None
{
public:
	TArray<Name None>                                  PartNames                                          // 0x0(0x10)
	TArray<Struct FName>                               FreeSlots                                          // 0x10(0x10)
	TArray<Struct FreeSlots>                           ScalarParameters                                   // 0x20(0x10)
	TArray<Struct FName>                               MaterialReferences                                 // 0x30(0x10)
};


// Size 0x78
class ClothingItem: public None
{
public:
	struct FName                                       Type                                               // 0x0(0x8)
	struct FName                                       Name                                               // 0x8(0x8)
	TArray<Byte Name>                                  CompatiblePirateTypes                              // 0x10(0x10)
	TArray<Struct FName>                               Variants                                           // 0x20(0x10)
	TArray<Struct FName>                               NewSlots                                           // 0x30(0x10)
	struct FName                                       Parent                                             // 0x40(0x8)
	TArray<Struct ClothingPart>                        Parts                                              // 0x48(0x10)
	TArray<Struct Parts>                               ScalarParameters                                   // 0x58(0x10)
	TArray<Struct FName>                               MaterialReferences                                 // 0x68(0x10)
};


// Size 0x20
class ClothingPart: public None
{
public:
	struct FName                                       Name                                               // 0x0(0x8)
	TArray<Struct FName>                               Slots                                              // 0x8(0x10)
	byte                                               Gender                                             // 0x18(0x1)
	byte                                               PartType                                           // 0x19(0x1)
};


// Size 0x10
class AnimationSwitchEntry: public None
{
public:
	struct FName                                       BodyShape                                          // 0x0(0x8)
	class                                              AnimSetDataId                                      // 0x8(0x8)
};


// Size 0x30
class BlendedSubMeshSpecification: public None
{
public:
	Class SkeletalMesh*                                Mesh                                               // 0x0(0x8)
	float                                              BaseMeshWeight                                     // 0x8(0x4)
	TArray<class MeshPatchAssets*>                     MeshPatchAssets                                    // 0x10(0x10)
	TArray<Float >                                     MeshPatchAssetWeights                              // 0x20(0x10)
};


// Size 0x18
class MaterialReferencesEntry: public None
{
public:
	struct FName                                       Name                                               // 0x0(0x8)
	TArray<Struct MaterialReferenceEntry>              References                                         // 0x8(0x10)
};


// Size 0x18
class MaterialReferenceEntry: public None
{
public:
	bool                                               bCopyParametersAcross                              // 0x0(0x1)
	bool                                               bReplaceAll                                        // 0x1(0x1)
	Class MaterialInterface*                           FromMaterial                                       // 0x8(0x8)
	Class MaterialInstanceConstant*                    ToMaterial                                         // 0x10(0x8)
};


// Size 0x18
class PirateGeneratorTextureReference: public None
{
public:
	struct FName                                       Name                                               // 0x0(0x8)
	TArray<Struct FName>                               References                                         // 0x8(0x10)
};


// Size 0x18
class ColorTextureSwitchSeedEntry: public None
{
public:
	struct FName                                       ReferenceName                                      // 0x0(0x8)
	Struct LinearColor                                 Color                                              // 0x8(0x10)
};


// Size 0x18
class TextureSwitchItemEntry: public None
{
public:
	struct FName                                       ItemName                                           // 0x0(0x8)
	Struct StringAssetReference                        Texture                                            // 0x8(0x10)
};


// Size 0x18
class TextureSwitchBodyShapeEntry: public None
{
public:
	struct FName                                       BodyShape                                          // 0x0(0x8)
	Struct StringAssetReference                        Texture                                            // 0x8(0x10)
};


// Size 0x18
class TextureSwitchEthnicityEntry: public None
{
public:
	byte                                               Ethnicity                                          // 0x0(0x1)
	Struct StringAssetReference                        Texture                                            // 0x8(0x10)
};


// Size 0x18
class TextureSwitchGenderEntry: public None
{
public:
	byte                                               Gender                                             // 0x0(0x1)
	Struct StringAssetReference                        Texture                                            // 0x8(0x10)
};


// Size 0x18
class TextureSwitchSeedEntry: public None
{
public:
	struct FName                                       ReferenceName                                      // 0x0(0x8)
	Struct StringAssetReference                        Texture                                            // 0x8(0x10)
};


// Size 0x58
class TextureSwitchParameters: public None
{
public:
	bool                                               bAsync                                             // 0x8(0x1)
	bool                                               bHighPriority                                      // 0x9(0x1)
	int                                                Seed                                               // 0xc(0x4)
	byte                                               SelectedGender                                     // 0x10(0x1)
	byte                                               SelectedEthnicity                                  // 0x11(0x1)
	struct FName                                       SelectedBodyShape                                  // 0x14(0x8)
	TArray<Struct FName>                               SelectedItems                                      // 0x20(0x10)
	TArray<Struct FName>                               SelectedReferences                                 // 0x30(0x10)
};


// Size 0x18
class MeshPatchEntry: public None
{
public:
	struct FName                                       Name                                               // 0x0(0x8)
	Struct StringAssetReference                        Reference                                          // 0x8(0x10)
};


}