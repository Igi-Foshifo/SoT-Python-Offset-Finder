namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x18
class MoviePlayerSettings: public Object
{
public:
	bool                                               bWaitForMoviesToComplete                           // 0x28(0x1)
	bool                                               bMoviesAreSkippable                                // 0x29(0x1)
	TArray<Str >                                       StartupMovies                                      // 0x30(0x10)
};


}