#include "DecreaseInventorySlotBPLib.h"

void UDecreaseInventorySlotBPLib::DIS_SetDefaultSize(UFGInventoryComponent* TargetInventory, int32 size)
{
  if (TargetInventory != nullptr) {
    TargetInventory->SetDefaultSize(size);
  }
}

void UDecreaseInventorySlotBPLib::DIS_SetAdjustedSizeDiff(UFGInventoryComponent* TargetInventory, int32 size)
{
  if (TargetInventory != nullptr) {
    TargetInventory->mAdjustedSizeDiff = size;
  }
}

void UDecreaseInventorySlotBPLib::DIS_SetNumTotalInventorySlots(AFGUnlockSubsystem* TargetUnlockSubsystem, int32 size)
{
  if (TargetUnlockSubsystem != nullptr) {
    TargetUnlockSubsystem->mNumTotalInventorySlots = size;
  }
}

void UDecreaseInventorySlotBPLib::DIS_SetNumTotalArmEquipmentSlots(AFGUnlockSubsystem* TargetUnlockSubsystem, int32 size)
{
  if (TargetUnlockSubsystem != nullptr) {
    TargetUnlockSubsystem->mNumTotalArmEquipmentSlots = size;
  }
}

void UDecreaseInventorySlotBPLib::DIS_SetActiveEquipmentIndex(UFGInventoryComponentEquipment* TargetEquipmentComponent, int32 index)
{
  if (TargetEquipmentComponent != nullptr) {
    TargetEquipmentComponent->mActiveEquipmentIndex = index;
  }
}
