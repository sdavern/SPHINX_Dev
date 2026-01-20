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
#include "VectorStruct.h"
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

	UPROPERTY()
	bool UseAllRules;

	UPROPERTY()
	ASPHINX_DevPlayerController* PlayerController;

	UPROPERTY()
	TMap<UPuzzlePoint*, FRulesStruct> Leaves;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool Debug;

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

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool SPHINX3Mode = false;

	//UPROPERTY(EditAnywhere, BlueprintReadWrite)
	//AActor* Statistics;

	UPROPERTY()
	TArray<TSubclassOf<UItem>> ItemAssets;

	UPROPERTY()
	TArray<UItem*> AllItems;

	UPROPERTY()
	TArray<TSubclassOf<URule>> RuleAssets;

	UPROPERTY()
	TArray<URule*> RulePointers;

	UPROPERTY()
	TArray<TSubclassOf<UItemProperty>> PropAssets; //Props with associated vector values only

	UPROPERTY()
	TArray<UItemProperty*> AllProps; //Props with associated vector values only

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

	UFUNCTION()
	TArray<URule*> RulesFor(UGameItem* GameItem);

	UFUNCTION()
	void AddApplicableRule(URule* Rule, UGameItem* GameItem, TArray<URule*> Rules);

	UFUNCTION(BlueprintCallable)
	void ExecuteRule(URule* Rule);

	UFUNCTION()
	void FindLeaves(URule* Parent, UPuzzlePoint* PP);

	UFUNCTION()
	bool FindItemsForOutputs(URule* Rule);

	UFUNCTION()
	void AddPuzzle(UPuzzlePoint* PP, FString Puzzle, FString GoalString);

	UFUNCTION()
	UItem* GetObject(FString ItemName);

	UFUNCTION()
	bool HasItemOfType(UTerm* Term, TArray<UPuzzlePoint*> NewAccessiblePPs, TArray<UItem*> ItemsInLevel);

	UFUNCTION()
	bool HasItemOfTypeDebug(UTerm* Term);

	UFUNCTION()
	TArray<UItem*> GetItemsOfType(FString ItemName, TArray<UPuzzlePoint*> NewAccessiblePPs, TArray<UItem*> ItemsInLevel);

	UFUNCTION()
	TArray<UItem*> FindDbItemsFor(UTerm* Term, TArray<UPuzzlePoint*> NewAccessiblePPs, TArray<UItem*> ItemsInLevel);

	UFUNCTION()
	TArray<UItem*> FindDbItemsForDebug(UTerm* Term);

	UFUNCTION()
	TArray<URule*> GetRulesWithInput(UItem* DbItem);

	UFUNCTION()
	TArray<URule*> GetRulesWithOutput(UTerm* Term);

	UFUNCTION()
	TArray<UItem*> GetAllItems();

	UFUNCTION()
	TArray<URule*> GetAllRules();

	UFUNCTION()
	TArray<UItemProperty*> GetAllProps();

	
	TArray<UArea*> GetAllAreas();

	UFUNCTION()
	TArray<UPuzzlePoint*> GetAllPPs();

	UFUNCTION()
	void UpdatePlayerProperties(UItemProperty* Property);

	UFUNCTION()
	UGameItem* GetPlayer();

	UFUNCTION()
	bool PuzzleContains(UItem* Item, URule* Parent);

	UFUNCTION()
	FString GetHint();

	UFUNCTION()
	FString GetObjective();

	UFUNCTION()
	FString GetCurrentAreaName();

	UFUNCTION()
	UArea* GetCurrentArea();

	UFUNCTION()
	void TriggerEnd();

	TArray<TSubclassOf<UArea>> LoadAreaBPs();

	UFUNCTION()
	TArray<TSubclassOf<UPuzzlePoint>> LoadPuzzlePointBPs();

	UFUNCTION()
	TArray<TSubclassOf<UItem>> LoadItemBPs();

	UFUNCTION()
	TArray<TSubclassOf<URule>> LoadRuleBPs();

	UFUNCTION()
	TArray<TSubclassOf<UItemProperty>> LoadPropBPs();

	UFUNCTION()
	TArray<UItem*> GetItemsInWorld();

	UFUNCTION()
	TArray<UGameItem*> GetGameItemsInWorld();

	UFUNCTION()
	bool CheckIfPuzzleToBeGenerated();

	UFUNCTION()
	TArray<AGamePuzzlePoint*> GetPPsInWorld();

	UFUNCTION()
	void ActivatePuzzlePoint(AGamePuzzlePoint* PP);

	UFUNCTION()
	void DeactivatePuzzlePoint(AGamePuzzlePoint* PP);

	UFUNCTION()
	void ActivateMaxPuzzlePoints();

	UFUNCTION()
	void ReturnLeaves();

	UFUNCTION()
	void ActivateProperties();

	UFUNCTION()
	void SetupItemVector(UItem* Item);

	UFUNCTION()
	void SetupPropertyVector(UItemProperty* Prop);

	ASPHINX_DevPlayerController* ReturnPC();

	UPROPERTY()
	TArray<FString> PuzzlesGeneratedStrings;

	UPROPERTY()
	TArray<UTerm*> GoalsPicked;

	UPROPERTY()
	TArray<FString> PickedGoalStrings;

	//For demo only
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	int CompletedPuzzles = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int MaxPuzzles = 5;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UPuzzleTracker* PuzzleTracker;

	UFUNCTION()
	void PrintLeaves();

	UFUNCTION()
	void PopulateRulePointers();

	UFUNCTION()
	void PrintAllRules();

	UFUNCTION()
	void InitialisePPPtrs();

	UFUNCTION()
	void SetupDbItemsOnStart();

	UFUNCTION()
	TArray<URule*> GetRulePointers();

	UFUNCTION()
	TArray<AGamePuzzlePoint*> GetGPPsInViewport();

	UFUNCTION(BlueprintCallable)
	bool IsGPPInViewport();

	UFUNCTION(BlueprintCallable)
	void RetryIsGPPInViewport();

	UFUNCTION(BlueprintCallable)
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

	UPROPERTY()
	int ActivePPs = 0;

	UPROPERTY()
	int ActiveGeneratedPuzzles = 0;

	UFUNCTION()
	void AssignPlayer();

	UPROPERTY()
	bool PPLoaded = false;

	UPROPERTY()
	bool ItemsLoaded = false;

	UPROPERTY()
	bool RulesLoaded = false;

	UPROPERTY()
	bool PropsLoaded = false;

	UPROPERTY()
	AGamePuzzlePoint* GPPToFind;

	UPROPERTY()
	URule* RuleToFind;

	bool bIsLevelLoaded = false;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
