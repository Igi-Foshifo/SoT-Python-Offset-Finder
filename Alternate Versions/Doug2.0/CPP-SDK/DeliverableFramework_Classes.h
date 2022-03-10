namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x8
class DeliverableRequirementBase: public Object
{
public:
};


// Size 0x0
class DeliverableInterface: public Interface
{
public:
};


// Size 0x0
class DeliverableRedirectionInterface: public Interface
{
public:
};


// Size 0x20
class DeliverableComponent: public ActorComponent
{
public:
	Class DeliverableRequirementsDataAsset*            DeliveryRequirementsAsset                          // 0xd8(0x8)
};


// Size 0x10
class DeliverableRedirectionComponent: public ActorComponent
{
public:
	Class DeliverableRedirectionContextBase*           Context                                            // 0xd0(0x8)
};


// Size 0x0
class DeliverableRedirectionContextBase: public Object
{
public:
};


// Size 0x0
class DeliverableRedirectionNoContext: public DeliverableRedirectionContextBase
{
public:
};


// Size 0x28
class DeliverableRedirectionCompositeContext: public DeliverableRedirectionContextBase
{
public:
	TArray<class Contexts*>                            Contexts                                           // 0x28(0x10)
};


// Size 0x0
class DeliverableRedirectionDestinationDescriptorBase: public Object
{
public:
};


// Size 0x8
class DeliverableRedirectionContextHandlerBase: public Object
{
public:
	Class DeliverableRedirectionDestinationDescriptorBase* DestinationDescriptor                              // 0x28(0x8)
};


// Size 0x38
class DeliverableRedirectionLiteralDestinationDescriptor: public DeliverableRedirectionDestinationDescriptorBase
{
public:
	Struct FText                                       Destination                                        // 0x28(0x38)
};


// Size 0x10
class DeliverableRequirementsDataAsset: public DataAsset
{
public:
	TArray<class Requirements*>                        Requirements                                       // 0x28(0x10)
};


// Size 0x0
class DeliverableTooltipCustomizerInterface: public Interface
{
public:
};


}