namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x50
class DebugMenuComponent: public ActorComponent
{
public:
	Class DebugMenu*                                   DebugMenuInstance                                  // 0xf0(0x8)
};


// Size 0x0
class DebugMenuEntryGenerator: public Object
{
public:
};


// Size 0x40
class DebugMenuDataAsset: public DataAsset
{
public:
	TArray<class DataAssets*>                          DataAssets                                         // 0x28(0x10)
	TArray<Struct DataAssets>                          MenuEntires                                        // 0x38(0x10)
	TArray<Struct MenuEntires>                         ButtonShortcuts                                    // 0x48(0x10)
	TArray<class MenuEntryGenerators*>                 MenuEntryGenerators                                // 0x58(0x10)
};


// Size 0xb0
class DebugMenu: public Actor
{
public:
};


// Size 0x8
class DebugMenuComponentMock: public DebugMenuComponent
{
public:
};


// Size 0x0
class DebugMenuTestFunctions: public BlueprintFunctionLibrary
{
public:
};


}