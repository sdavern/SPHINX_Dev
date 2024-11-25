#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ItemProperty.h" 
#include "Area.h"
#include "Engine/StaticMesh.h" 
#include "Item.generated.h"

class UTerm;
class UPuzzlePoint;
class ASpawnPoint;


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

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<UItemProperty*> Properties;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TSubclassOf<AActor> ItemPrefab;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Item")
    FString Description;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Item")
	FString LongDescription;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Item")
	TArray<TSubclassOf<AActor>> SpawnPoints;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Item")
	bool SpecificSpawnPoints;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Item")
	bool IsStationary = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Item")
	bool IsIndestructible = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Item")
	int SpawnLength;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Item")
	int _index; 
	//

	//Item functions
	UFUNCTION()
	bool PropertyExists(const FString& PropertyName) const;

	UFUNCTION()
	TArray<UItemProperty*> GetPropertiesWithName(const FString& PropertyName) const;

	UFUNCTION()
	UItemProperty* GetPropertyWithName(const FString& PropertyName) const;

	UFUNCTION()
	bool HasProperty(UItemProperty* PropertyToCheck);

	UFUNCTION()
	void AddPropertyOfType(EItemProperty Type);

	UFUNCTION()
	void DeleteProperty(int32 Index);

	UFUNCTION()
	TArray<FString> GetSuperTypes();

	UFUNCTION()
	bool Equals(const UObject* Other) const;

	UFUNCTION()
	bool Matches(UTerm* Term);

	UFUNCTION()
	bool IsOfType(UTerm* Term);   

	UFUNCTION()
	bool IsAccessible(TArray<UPuzzlePoint*> PPs, TArray<UItem*> ItemsInScene);

	UFUNCTION()
	bool IsCarryable();

	UFUNCTION()
	bool IsCopyable();

	UFUNCTION()
	bool IsSpawnable();

	UFUNCTION()
	bool IsInspectable();

	UFUNCTION()
	FString ToString() const;

	UFUNCTION()
	FVector GetNextSpawnPt();

	UFUNCTION()
	void PostInitProperties();

	UFUNCTION()
	UItem* Clone();

	//Remove if causing issues
	UFUNCTION()
    void ToPropPtrs();











};
