#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Item.h"
#include "Area.h"  
#include "ConditionalObject.generated.h"

UCLASS(Blueprintable)
class SPHINX_DEV_API AConditionalObject : public AActor
{
    GENERATED_BODY()

public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    UItem* Condition; 

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    UArea* Area; 

    // AffectedItem would be an AActor in UE5 if it's a physical object in the world
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    AActor* AffectedItem;
};