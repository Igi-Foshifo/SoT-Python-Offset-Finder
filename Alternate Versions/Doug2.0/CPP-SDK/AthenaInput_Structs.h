namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x40
class NotificationInputDisplayName: public None
{
public:
	class                                              InputID                                            // 0x0(0x8)
	Struct FText                                       Name                                               // 0x8(0x38)
};


// Size 0x38
class IdleTimeTracker: public None
{
public:
	Struct Timespan                                    InactivityThreshold                                // 0x0(0x8)
};


}