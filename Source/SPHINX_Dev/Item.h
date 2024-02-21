#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ItemProperty.h" 
#include "Area.h"
#include "Engine/StaticMesh.h" 
#include "Item.generated.h"

class UTerm;


UCLASS(Blueprintable)
class SPHINX_DEV_API UItem : public UObject
{
	GENERATED_BODY()
	

public:
  	UItem();

	//
	//Item's basic properties, not related to the ItemProperty files
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Item")
    FString Name;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Item")
	TArray<TSubclassOf<UItemProperty>> PropertiesBP;

    TArray<UItemProperty*> Properties;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Item")
    TSubclassOf<AActor> ItemPrefab;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Item")
    FString Description;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Item")
	FString LongDescription;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Item")
	TArray<FVector> SpawnPoints;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Item")
	bool SpecificSpawnPoints;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Item")
	int SpawnLength;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Item")
	int _index; 
	//

	//Item functions
	bool PropertyExists(const FString& PropertyName) const;

	TArray<UItemProperty*> GetPropertiesWithName(const FString& PropertyName) const;

	UItemProperty* GetPropertyWithName(const FString& PropertyName) const;

	bool HasProperty(UItemProperty* PropertyToCheck);

	void AddPropertyOfType(EItemProperty Type);

	void DeleteProperty(int32 Index);

	TArray<FString> GetSuperTypes();

	bool Equals(const UObject* Other) const;

	bool Matches(UTerm* Term);

	bool IsOfType(UTerm* Term);   

	bool IsAccessible(TArray<UArea*> Areas, TArray<UItem*> ItemsInScene);

	bool IsCarryable();

	bool IsCopyable();

	bool IsSpawnable();

	bool IsInspectable();

	FString ToString() const;

	FVector GetNextSpawnPt();

	void PostInitProperties();

	UItem* Clone();

	//Remove if causing issues
    void ToPropPtrs();











};
