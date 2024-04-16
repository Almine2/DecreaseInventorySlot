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

void UDecreaseInventorySlotBPLib::DIS_SetNumTotalInventorySlots(AFGUnlockSubsystem* TargetInventory, int32 size)
{
  if (TargetInventory != nullptr) {
    TargetInventory->mNumTotalInventorySlots = size;
  }
}
