namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x70
class EditableGameplayTagQuery: public Object
{
public:
	Struct FString                                     UserDescription                                    // 0x28(0x10)
	Class EditableGameplayTagQueryExpression*          RootExpression                                     // 0x48(0x8)
	Struct GameplayTagQuery                            TagQueryExportText_Helper                          // 0x50(0x48)
};


// Size 0x0
class EditableGameplayTagQueryExpression: public Object
{
public:
};


// Size 0x28
class EditableGameplayTagQueryExpression_AnyTagsMatch: public EditableGameplayTagQueryExpression
{
public:
	Struct GameplayTagContainer                        Tags                                               // 0x28(0x28)
};


// Size 0x28
class EditableGameplayTagQueryExpression_AllTagsMatch: public EditableGameplayTagQueryExpression
{
public:
	Struct GameplayTagContainer                        Tags                                               // 0x28(0x28)
};


// Size 0x28
class EditableGameplayTagQueryExpression_NoTagsMatch: public EditableGameplayTagQueryExpression
{
public:
	Struct GameplayTagContainer                        Tags                                               // 0x28(0x28)
};


// Size 0x10
class EditableGameplayTagQueryExpression_AnyExprMatch: public EditableGameplayTagQueryExpression
{
public:
	TArray<class Expressions*>                         Expressions                                        // 0x28(0x10)
};


// Size 0x10
class EditableGameplayTagQueryExpression_AllExprMatch: public EditableGameplayTagQueryExpression
{
public:
	TArray<class Expressions*>                         Expressions                                        // 0x28(0x10)
};


// Size 0x10
class EditableGameplayTagQueryExpression_NoExprMatch: public EditableGameplayTagQueryExpression
{
public:
	TArray<class Expressions*>                         Expressions                                        // 0x28(0x10)
};


// Size 0x0
class GameplayTagAssetInterface: public Interface
{
public:
};


// Size 0x0
class BlueprintGameplayTagLibrary: public BlueprintFunctionLibrary
{
public:
};


// Size 0x148
class GameplayTagsManager: public Object
{
public:
	TArray<class GameplayTagTables*>                   GameplayTagTables                                  // 0x140(0x10)
};


// Size 0x10
class GameplayTagsSettings: public Object
{
public:
	TArray<Str None>                                   GameplayTags                                       // 0x28(0x10)
};


}