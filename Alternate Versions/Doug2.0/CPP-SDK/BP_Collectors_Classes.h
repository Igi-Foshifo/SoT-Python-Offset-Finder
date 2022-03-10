namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x68
class BP_CollectorsChest_Wieldable_C: public CollectorsChestStaticWieldableItem
{
public:
	Class MaterialManipulationComponent*               MaterialManipulation                               // 0x7d0(0x8)
	Class OpenableItemMaterialAnimationReactionComponent* OpenableItemMaterialAnimationReaction              // 0x7d8(0x8)
	Class MaterialAnimatorComponent*                   MaterialAnimator                                   // 0x7e0(0x8)
	Class BoxComponent*                                HitVolume                                          // 0x7e8(0x8)
	Class AnimNotifyWwiseEmitterComponent*             AnimNotifyWwiseEmitter                             // 0x7f0(0x8)
	Class GoldInContainerComponent*                    GoldInContainer                                    // 0x7f8(0x8)
	Class QuestBookPagesInContainerComponent*          QuestBookPagesInContainer                          // 0x800(0x8)
	Class CollectorsChestItemSlotInteractable*         ItemSlotInteractable                               // 0x808(0x8)
	Class CollectorsChestItemSlotInteractable*         ItemSlotInteractable                               // 0x810(0x8)
	Class CollectorsChestItemSlotInteractable*         ItemSlotInteractable                               // 0x818(0x8)
	Class PickupableComponent*                         Pickupable                                         // 0x820(0x8)
	Class UsableWieldableComponent*                    UsableWieldable                                    // 0x828(0x8)
	Class WieldableInteractableComponent*              WieldableInteractable                              // 0x830(0x8)
};


// Size 0xc1
class BP_CollectorsChest_Proxy_C: public CollectorsChestItemProxyStatic
{
public:
	Struct PointerToUberGraphFrame                     UberGraphFrame                                     // 0x860(0x8)
	Class StaticMeshComponent*                         WaterOcclusionVolume                               // 0x868(0x8)
	Class MaterialAnimatorComponent*                   MaterialAnimator                                   // 0x870(0x8)
	Class OpenableItemMeshAnimationReactionComponent*  OpenableItemMeshAnimationReaction                  // 0x878(0x8)
	Class MeshAnimatorComponent*                       MeshAnimator                                       // 0x880(0x8)
	Class OpenableItemMaterialAnimationReactionComponent* OpenableItemMaterialAnimationReaction              // 0x888(0x8)
	Class GlintComponent*                              Glint                                              // 0x890(0x8)
	Class QuestBookPagesInContainerComponent*          QuestBookPagesInContainer                          // 0x898(0x8)
	Class GoldInContainerComponent*                    GoldInContainer                                    // 0x8a0(0x8)
	Class SceneComponent*                              Scene                                              // 0x8a8(0x8)
	Class AnimNotifyWwiseEmitterComponent*             AnimNotifyWwiseEmitter                             // 0x8b0(0x8)
	Class CollectorsChestItemSlotInteractable*         ItemSlotInteractable                               // 0x8b8(0x8)
	Class CollectorsChestItemSlotInteractable*         ItemSlotInteractable                               // 0x8c0(0x8)
	Class CollectorsChestItemSlotInteractable*         ItemSlotInteractable                               // 0x8c8(0x8)
	Class InteractableComponent*                       Interactable                                       // 0x8d0(0x8)
	Struct ObjectMessagingHandle                       OnDroppedHandle                                    // 0x8d8(0x48)
	bool                                               HideWaterOcclusionVolume                           // 0x920(0x1)
};


}