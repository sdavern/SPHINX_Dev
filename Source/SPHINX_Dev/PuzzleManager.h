// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Math/UnrealMathUtility.h"
#include "AssetRegistry/AssetRegistryModule.h"
#include "Item.h"
#include "Rule.h"
#include "Area.h"
#include "ConditionalObject.h"
#include "PuzzleManager.generated.h"

USTRUCT()
struct FRulesStruct
{

	GENERATED_BODY()
    TArray<URule*> RulesArray;
};

class UGameItem;
class APlayerPawn;
class AGenerator;
class AGamePuzzlePoint;
class UPuzzlePoint;

UCLASS()
class SPHINX_DEV_API APuzzleManager : public AActor
{
	GENERATED_BODY()

public: 

	APuzzleManager();

	UArea* StartArea;

	bool UseAllRules;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	APlayerPawn* Player;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	AGenerator* Generator;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	AActor* Everything;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	AActor* StartingInventory;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	AActor* FinalFade;

	//UPROPERTY(EditAnywhere, BlueprintReadWrite)
	//AActor* Statistics;

	TArray<TSubclassOf<UItem>> ItemAssets;

	TArray<TSubclassOf<URule>> RuleAssets;

	//TArray<TSubclassOf<UArea>> AreaAssets;

	TArray<TSubclassOf<UPuzzlePoint>> PPAssets;

	static APuzzleManager* GetInstance();

	void GenerateForActivePuzzlePoints();

	TArray<URule*> RulesFor(UGameItem* GameItem, UPuzzlePoint* PP);

	void AddApplicableRule(URule* Rule, UGameItem* GameItem, TArray<URule*> Rules);

	void ExecuteRule(URule* Rule, UPuzzlePoint* PP);

	void FindLeaves(URule* Parent, UPuzzlePoint* PP);

	bool FindItemsForOutputs(URule* Rule);

	void AddPuzzle(UPuzzlePoint* PP, FString Puzzle);

	UItem* GetObject(FString ItemName);

	bool HasItemOfType(UTerm* Term, TArray<UPuzzlePoint*> NewAccessiblePPs, TArray<UItem*> ItemsInLevel);

	TArray<UItem*> GetItemsOfType(FString ItemName, TArray<UPuzzlePoint*> NewAccessiblePPs, TArray<UItem*> ItemsInLevel);

	TArray<UItem*> FindDbItemsFor(UTerm*, TArray<UPuzzlePoint*> NewAccessiblePPs, TArray<UItem*> ItemsInLevel);

	TArray<URule*> GetRulesWithInput(UItem* DbItem);

	TArray<URule*> GetRulesWithOutput(UTerm* Term);

	TArray<UItem*> GetAllItems();

	TArray<URule*> GetAllRules();

	TArray<UArea*> GetAllAreas();

	TArray<UPuzzlePoint*> GetAllPPs();

	void UpdatePlayerProperties(UItemProperty* Property);

	UGameItem* GetPlayer();

	bool PuzzleContains(UItem* Item, URule* Parent);

	FString GetHint();

	FString GetObjective();

	FString GetCurrentAreaName();

	UArea* GetCurrentArea();

	void TriggerEnd();

	TArray<TSubclassOf<UArea>> LoadAreaBPs();

	TArray<TSubclassOf<UPuzzlePoint>> LoadPuzzlePointBPs();

	TArray<TSubclassOf<UItem>> LoadItemBPs();

	TArray<TSubclassOf<URule>> LoadRuleBPs();

	TArray<UItem*> GetItemsInWorld();

	TArray<UGameItem*> GetGameItemsInWorld();

	bool CheckIfPuzzleToBeGenerated();

	TArray<AGamePuzzlePoint*> GetPPsInWorld();

	void ActivatePuzzlePoint(AGamePuzzlePoint* PP);

	void DeactivatePuzzlePoint(AGamePuzzlePoint* PP);

	void ActivateMaxPuzzlePoints();

	UPuzzlePoint* GetPointForPuzzle();






protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;


private:

	static APuzzleManager* Instance;
	
	UArea* CurrentArea;

	UPROPERTY(EditAnywhere)
	TArray<URule*> GameOverRules;

	TArray<UPuzzlePoint*> AccessiblePPs;

	TArray<AGamePuzzlePoint*> ActivePuzzlePoints;

	UPROPERTY(EditAnywhere)
	TMap<UPuzzlePoint*, FRulesStruct> Leaves;

	TMap<UPuzzlePoint*, FRulesStruct> PuzzleRules;

	TMap<UPuzzlePoint*, FString> PuzzlesGenerated;

	UPROPERTY(EditAnywhere)
	int32 MaxActivePuzzles;

	int32 ActivePuzzles = 0;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
