// Generated by DougTheDruid#2784 on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x50 (Full Size[0x118] - InheritedSize[0xc8]
class DebugMenuComponent: public ActorComponent
{
public:
	char                                                         pad0x28_AASMF[0x28];                               // 0xc8(0x28)
	Class DebugMenu*                                             DebugMenuInstance;                                 // 0xf0(0x8)
	char                                                         pad0x30_P8CNY[0x30];                               // 0xf6(0x30)
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class DebugMenuEntryGenerator: public Object
{
public:
};


// Size 0x40 (Full Size[0x68] - InheritedSize[0x28]
class DebugMenuDataAsset: public DataAsset
{
public:
	TArray<class DebugMenuDataAsset*>                            DataAssets;                                        // 0x28(0x10)
	TArray<struct MenuEntires>                                   MenuEntires;                                       // 0x38(0x10)
	TArray<struct ButtonShortcuts>                               ButtonShortcuts;                                   // 0x48(0x10)
	TArray<class DebugMenuEntryGenerator*>                       MenuEntryGenerators;                               // 0x58(0x10)
};


// Size 0xb0 (Full Size[0x478] - InheritedSize[0x3c8]
class DebugMenu: public Actor
{
public:
};


// Size 0x8 (Full Size[0x120] - InheritedSize[0x118]
class DebugMenuComponentMock: public DebugMenuComponent
{
public:
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class DebugMenuTestFunctions: public BlueprintFunctionLibrary
{
public:
};


}