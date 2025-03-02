// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Components/TextBlock.h"
#include "Item.h"
#include "ItemProperty.h"
#include "Rule.h"
#include "ActionBtn.h"
#include "Term.h"
#include "GameItem.generated.h"

class AInventoryManager;
class AAvatar;
class UActionMenu;
class ASpawnPoint;
class AAvatar;
class APuzzleManager;


UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class SPHINX_DEV_API UGameItem : public UActorComponent
{
	GENERATED_BODY()
	
public:	
	
	UGameItem();

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Name;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UItem* DbItem;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<UItemProperty*> Properties;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UGameItem* ContainedValue;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool Selected;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsNPC = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsInitNPC = false;

	void SetupDbItem();

	void Setup(FString Name, UItem* DbItem);

	/* void OnGameItemMouseOver(UTextBlock* UITextRef); */

	static UGameItem* Copy(UGameItem* Original, UObject* Outer);

	/* void OnGameItemClicked(AActor* ActionMenu, AActor* ButtonPrefab, UTextBlock* ActionHeader, UPuzzlePoint* PP, bool Inventory); */

	void OnGameItemClicked(UActionMenu* ActionMenu);

	void ExecuteRule(URule* Rule);

	static void ExecuteRule(UWorld* World, URule* Rule, bool Full, UGameItem* GameI);

	bool HasProperty(UItemProperty* PropertyToCheck);

	UItemProperty* GetProperty(FString PropertyName);

	bool IsDestructible();

	FString ToString();

	APuzzleManager* GetPuzzleManager();

	bool InInventory = false;

protected:
	
	virtual void BeginPlay() override;

private:

	bool PickedUp = false;

	void Spawn(UGameItem* Item);

	bool RuleFulfilled(URule* Rule);

	bool FulfillsProperties(UTerm* Input);

public:	
	
	

};
