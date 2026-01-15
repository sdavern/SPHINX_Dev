#pragma once

#include "CoreMinimal.h"
#include "VectorStruct.h"
#include "UObject/Object.h"
#include "ItemProperty.generated.h"

UENUM(BlueprintType, meta = (ScriptName = "ItemPropertyEnum"))
enum class EItemProperty : uint8
{
	StringProperty UMETA(DisplayName = "String Property"),
    IntProperty UMETA(DisplayName = "Int Property"),
    BoolProperty UMETA(DisplayName = "Bool Property")
};


UCLASS(Blueprintable)
class SPHINX_DEV_API UItemProperty : public UObject
{
	GENERATED_BODY()


	
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Property")
	EItemProperty Type;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Property")
	FString Name;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Property")
	FString Value;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Property")
	FVector7D TensionVector;

    UItemProperty();

	UItemProperty(EItemProperty NewType, const FString& NewName, const FString& NewValue);

	bool Equals(UItemProperty* OtherProperty);

	void RemoveProperty();

};




