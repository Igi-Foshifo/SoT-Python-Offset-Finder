// Generated by DougTheDruid#2784 on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x20 (Full Size[0x170] - InheritedSize[0x150]
class AutoMoveInputComponent: public InputComponent
{
public:
};


// Size 0x128 (Full Size[0x298] - InheritedSize[0x170]
class AthenaCharacterBaseInputComponent: public AutoMoveInputComponent
{
public:
};


// Size 0x8 (Full Size[0x2a0] - InheritedSize[0x298]
class AthenaCharacterBaseInputComponentWithInterference: public AthenaCharacterBaseInputComponent
{
public:
};


// Size 0x8 (Full Size[0x2a0] - InheritedSize[0x298]
class LookingAtWieldableInputComponent: public AthenaCharacterBaseInputComponent
{
public:
	Class Actor*                                                 TargetWieldable;                                   // 0x298(0x8)
};


// Size 0x70 (Full Size[0x1e0] - InheritedSize[0x170]
class MovementInterferenceComponent: public AutoMoveInputComponent
{
public:
};


// Size 0x0 (Full Size[0x38] - InheritedSize[0x38]
class ClampedFreelookXAnalogInputId: public AnalogInputId
{
public:
};


// Size 0x0 (Full Size[0x38] - InheritedSize[0x38]
class ClampedFreelookYAnalogInputId: public AnalogInputId
{
public:
};


// Size 0x0 (Full Size[0x38] - InheritedSize[0x38]
class ClampedFreelookMouseXInputId: public AnalogInputId
{
public:
};


// Size 0x0 (Full Size[0x38] - InheritedSize[0x38]
class ClampedFreelookMouseYInputId: public AnalogInputId
{
public:
};


}