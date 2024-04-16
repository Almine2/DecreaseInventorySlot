#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"
#include "FGInventoryComponent.h"
#include "FGUnlockSubsystem.h"
#include "DecreaseInventorySlotBPLib.generated.h"


UCLASS()
class DECREASEINVENTORYSLOT_API UDecreaseInventorySlotBPLib : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
		
	UFUNCTION(BlueprintCallable, Category = "DecreaseInventorySlot")
		static void DIS_SetDefaultSize(UFGInventoryComponent* TargetInventory, int32 size);
	
	UFUNCTION(BlueprintCallable, Category = "DecreaseInventorySlot")
		static void DIS_SetAdjustedSizeDiff(UFGInventoryComponent* TargetInventory, int32 size);
		
	UFUNCTION(BlueprintCallable, Category = "DecreaseInventorySlot")
		static void DIS_SetNumTotalInventorySlots(AFGUnlockSubsystem* TargetInventory, int32 size);
};