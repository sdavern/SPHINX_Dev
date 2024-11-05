// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Math/UnrealMathUtility.h"
#include "Sound/SoundCue.h"
#include "AssetRegistry/AssetRegistryModule.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Item.h"
#include "Rule.h"
#include "Area.h"
#include "PuzzleTracker.h"
#include "SPHINX_DevPlayerController.h"
#include "ConditionalObject.h"
#include "PuzzleManager.generated.h"


USTRUCT()
struct FRulesStruct
{
	GENERATED_BODY()

    // The array that holds the URule pointers
    UPROPERTY()
    TArray<URule*> RulesArray;

    // Default constructor
    FRulesStruct() = default;

    // Copy constructor
    FRulesStruct(const FRulesStruct& Other)
    {
        RulesArray = Other.RulesArray;
    }

    // Copy assignment operator
    FRulesStruct& operator=(const FRulesStruct& Other)
    {
        if (this != &Other)
        {
            RulesArray = Other.RulesArray;
        }
        return *this;
    }

    // Move constructor
    FRulesStruct(FRulesStruct&& Other) noexcept
    {
        RulesArray = MoveTemp(Other.RulesArray);
    }

    // Move assignment operator
    FRulesStruct& operator=(FRulesStruct&& Other) noexcept
    {
        if (this != &Other)
        {
            RulesArray = MoveTemp(Other.RulesArray);
        }
        return *this;
    }
};

USTRUCT()
struct FSharedRulesStruct
{
	GENERATED_BODY()
	TArray<TSharedPtr<URule>> SharedRulesArray;
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

	UPROPERTY()
	UArea* StartArea;

	bool UseAllRules;

	UPROPERTY()
	ASPHINX_DevPlayerController* PlayerController;

	UPROPERTY()
	TMap<UPuzzlePoint*, FRulesStruct> Leaves;

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

	UPROPERTY()
	TArray<TSubclassOf<UItem>> ItemAssets;

	UPROPERTY()
	TArray<UItem*> AllItems;

	UPROPERTY()
	TArray<TSubclassOf<URule>> RuleAssets;

	TArray<URule*> RulePointers;

	//TArray<TSubclassOf<UArea>> AreaAssets;

	UPROPERTY()
	TArray<TSubclassOf<UPuzzlePoint>> PPAssets;

	UPROPERTY()
	TArray<UPuzzlePoint*> PuzzlePointPtrs;

	UPROPERTY()
	TArray<UPuzzlePoint*> AccessiblePPs;

	UPROPERTY()
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

	UPROPERTY()
	TArray<FString> PuzzlesGeneratedStrings;

	//For demo only
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	int CompletedPuzzles = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int MaxPuzzles = 5;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UPuzzleTracker* PuzzleTracker;

	void PrintLeaves();

	void PopulateRulePointers();

	void PrintAllRules();

	void InitialisePPPtrs();

	void SetupDbItemsOnStart();

	TArray<URule*> GetRulePointers();

	TArray<AGamePuzzlePoint*> GetGPPsInViewport();

	bool IsGPPInViewport();

	void RetryIsGPPInViewport();

	void DestroyDialogue();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;


private:

	static APuzzleManager* Instance;

	UPROPERTY()
	UArea* CurrentArea;

	UPROPERTY(EditAnywhere)
	TArray<URule*> GameOverRules;

	UPROPERTY()
	TArray<AGamePuzzlePoint*> ActivePuzzlePoints;

	//UPROPERTY(EditAnywhere)
	

	TMap<TSharedPtr<UPuzzlePoint>, FSharedRulesStruct> SharedLeaves;

	//TMap<UPuzzlePoint*, FRulesStruct> PuzzleRules;
	UPROPERTY()
	TMap<UPuzzlePoint*, FString> PuzzlesGenerated;

	UPROPERTY(EditAnywhere)
	int MaxActivePuzzles;

	int ActivePPs = 0;

	int ActiveGeneratedPuzzles = 0;

	void AssignPlayer();

	bool PPLoaded = false;

	bool ItemsLoaded = false;
	
	bool RulesLoaded = false;

	AGamePuzzlePoint* GPPToFind;

	URule* RuleToFind;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
