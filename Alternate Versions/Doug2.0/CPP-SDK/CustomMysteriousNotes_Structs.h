namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x14
class DestroyMysteriousNoteData: public None
{
public:
	int                                                PlayerNetGUID                                      // 0x0(0x4)
	Struct Guid                                        NoteGUID                                           // 0x4(0x10)
};


// Size 0x38
class CreateMysteriousNoteData: public None
{
public:
	int                                                PlayerNetGUID                                      // 0x0(0x4)
	Struct FString                                     NoteType                                           // 0x8(0x10)
	Struct FString                                     NoteTitle                                          // 0x18(0x10)
	Struct FString                                     NoteBody                                           // 0x28(0x10)
};


// Size 0x10
class CustomPlayerNoteList: public None
{
public:
	TArray<Struct EnchantedCompassTarget>              Notes                                              // 0x0(0x10)
};


}