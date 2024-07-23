// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Math/UnrealMathUtility.h"
#include "Sound/SoundCue.h"
#include "AssetRegistry/AssetRegistryModule.h"
#include "Item.h"
#include "Rule.h"
#include "Area.h"
#include "SPHINX_DevPlayerController.h"
#include "ConditionalObject.h"
#include "PuzzleManager.generated.h"


USTRUCT()
struct FRulesStruct
{

	GENERATED_BODY()
    TArray<URule*> RulesArray;
};

class UGameItem;
class AAvatar;
class AGenerator;
class AGamePuzzlePoint;
class AInventoryManager;
class UPuzzlePoint;
class ASpawnPoint;
class ASPHINX_DevPlayerController;

UCLASS()
class SPHINX_DEV_API APuzzleManager : public AActor
{
	GENERATED_BODY()

public: 

	APuzzleManager();

	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

	UArea* StartArea;

	bool UseAllRules;

	ASPHINX_DevPlayerController* PlayerController;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	AAvatar* Player;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	AGenerator* Generator;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	AInventoryManager* InventoryManager;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	AActor* Everything;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	AActor* StartingInventory;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	AActor* FinalFade;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Audio")
	USoundCue* SolvedSoundCue;

	//UPROPERTY(EditAnywhere, BlueprintReadWrite)
	//AActor* Statistics;

	TArray<TSubclassOf<UItem>> ItemAssets;

	TArray<UItem*> AllItems;

	TArray<TSubclassOf<URule>> RuleAssets;

	//TArray<TSubclassOf<UArea>> AreaAssets;

	TArray<TSubclassOf<UPuzzlePoint>> PPAssets;

	TArray<UPuzzlePoint*> AccessiblePPs;

	TMap<FString, UPuzzlePoint*> RulePPs;

	static APuzzleManager* GetInstance();

	UFUNCTION(BlueprintCallable)
	void GenerateForActivePuzzlePoints();

	TArray<URule*> RulesFor(UGameItem* GameItem);

	void AddApplicableRule(URule* Rule, UGameItem* GameItem, TArray<URule*> Rules);

	UFUNCTION(BlueprintCallable)
	void ExecuteRule(URule* Rule);

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

	void ReturnLeaves();

	void ActivateProperties();

	ASPHINX_DevPlayerController* ReturnPC();






protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;


private:

	static APuzzleManager* Instance;
	
	UArea* CurrentArea;

	UPROPERTY(EditAnywhere)
	TArray<URule*> GameOverRules;

	

	TArray<AGamePuzzlePoint*> ActivePuzzlePoints;

	UPROPERTY(EditAnywhere)
	TMap<UPuzzlePoint*, FRulesStruct> Leaves;

	TMap<UPuzzlePoint*, FRulesStruct> PuzzleRules;

	TMap<UPuzzlePoint*, FString> PuzzlesGenerated;

	UPROPERTY(EditAnywhere)
	int MaxActivePuzzles;

	int ActivePPs = 0;

	int ActiveGeneratedPuzzles = 0;

	void AssignPlayer();

	bool PPLoaded = false;

	bool ItemsLoaded = false;
	
	bool RulesLoaded = false;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
