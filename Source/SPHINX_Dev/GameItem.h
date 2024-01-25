// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/TextBlock.h"
#include "PuzzleManager.h"
#include "Item.h"
#include "ItemProperty.h"
#include "Rule.h"
#include "ActionBtn.h"
#include "Term.h"
#include "GameItem.generated.h"

UCLASS()
class SPHINX_DEV_API AGameItem : public AActor
{
	GENERATED_BODY()
	
public:	
	
	AGameItem();

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Name;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UItem* DbItem;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<UItemProperty*> Properties;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	AGameItem* ContainedValue;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool Selected;

	void Setup(FString Name, UItem* DbItem);

	void OnGameItemMouseOver(UTextBlock* UITextRef);

	static AGameItem* Copy(AGameItem* Original, UObject* Outer);

	void OnGameItemClicked(AActor* ActionMenu, AActor* ButtonPrefab, UTextBlock* ActionHeader, bool Inventory);

	void OnGameItemClicked(AActor* ActionMenu, AActor* ButtonPrefab, UTextBlock* ActionHeader);

	void ExecuteRule(URule* Rule);

	static void ExecuteRule(URule* Rule, bool Full, AActor* GameI);

	bool HasProperty(UItemProperty* PropertyToCheck);

	UItemProperty* GetProperty(FString PropertyName);

	bool IsDestrutible();

	FString ToString();


protected:
	
	virtual void BeginPlay() override;


private:

	UPROPERTY(EditAnywhere)
	bool PickedUp = false;


	void Spawn(AGameItem* Item);

	bool RuleFulfilled(URule* Rule);

	bool FulfillsProperties(UTerm* Input);

public:	
	
	virtual void Tick(float DeltaTime) override;

};
