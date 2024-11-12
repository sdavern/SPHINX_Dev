// Fill out your copyright notice in the Description page of Project Settings.


#include "Generator.h"
#include "Engine/World.h"
#include "GameFramework/PlayerController.h"
#include "Camera/PlayerCameraManager.h"
#include "EngineUtils.h"
#include "Kismet/GameplayStatics.h"
#include "DrawDebugHelpers.h"
#include "SpawnPoint.h"
#include "SceneView.h"
#include "TimerManager.h"
#include "SceneViewExtension.h"
#include "SceneManagement.h"

AGenerator* AGenerator::Instance = nullptr;
FString AGenerator::PuzzleString = TEXT("");

// Sets default values
AGenerator::AGenerator()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

AGenerator* AGenerator::GetInstance()
{
	if (!Instance)
    {
        // Iterate over all world contexts to find the game world
        for (const FWorldContext& Context : GEngine->GetWorldContexts())
        {
            if (Context.World() != nullptr)
            {
                for (TActorIterator<AGenerator> It(Context.World()); It; ++It)
                {
                    Instance = *It;
                    break;
                }
            }
        }

        if (!Instance)
        {
            UE_LOG(LogTemp, Error, TEXT("Generator instance not found in GetInstance."));
        }
    }
    UE_LOG(LogTemp, Display, TEXT("Generator instance found."));
    return Instance;
    
	
}

// Called when the game starts or when spawned
void AGenerator::BeginPlay()
{
	Super::BeginPlay();

	Instance = GetInstance();
	PMInstance = APuzzleManager::GetInstance();
	InventoryInstance = AInventoryManager::GetInstance();
}

// Called every frame
void AGenerator::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AGenerator::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
    Super::EndPlay(EndPlayReason);
    Instance = nullptr;
}

void AGenerator::Spawn(UWorld* World, UItem* Item, URule* Rule, UPuzzlePoint* PP)
{
	bool Found = false;
    TArray<UGameItem*> ItemsInWorld = PMInstance->GetGameItemsInWorld();

    for (int32 i = 0; i < ItemsInWorld.Num(); i++)
    {
        if (ItemsInWorld[i] != nullptr && ItemsInWorld[i]->Name == Item->Name)
        {
            ItemsInWorld[i]->Setup(Item->Name, Item);
            Found = true;
            //ItemsInWorld[i]->Name = TEXT(" ");
        }
    }

	if (!Found)
	{
		ASpawnPoint* NextSpawnPoint = GetSpawnPointFor(Item);
		if (NextSpawnPoint)
		{
			FVector NextSpawnVector = NextSpawnPoint->Location;
			NextSpawnVector.Z = 40;
			UE_LOG(LogTemp, Display, TEXT("Spawn point: %s ( %s )"), *NextSpawnVector.ToString(), *Item->Name);
			if (Item->ItemPrefab && World)
			{
				UE_LOG(LogTemp, Warning, TEXT("ItemPrefab is valid"));
				UE_LOG(LogTemp, Error, TEXT("TRYING TO SPAWN %s"), *Item->Name);
				AActor* ItemGO = World->SpawnActor<AActor>(Item->ItemPrefab.Get(), NextSpawnVector, FRotator::ZeroRotator);
				NextSpawnPoint->HasSpawnedItem = true;
			}
		}
	}
}

URule* AGenerator::GeneratePuzzleStartingFrom(UPuzzlePoint* PP, TArray<UPuzzlePoint*> NewAccessiblePPs, int depth = 0)
{
	if (depth >= MAX_DEPTH)
    {
        UE_LOG(LogTemp, Display, TEXT("Max recursion depth reached"));
        return nullptr;
    }

	UE_LOG(LogTemp, Error, TEXT("GENERATEPUZZLESTARTINGFROM CALLED"));
    URule* Root = NewObject<URule>(this, URule::StaticClass());
    TArray<UItem*> ItemsInLevel;

	if (!Instance->InventoryInstance)
	{
		UE_LOG(LogTemp, Error, TEXT("InventoryInstance is null"));
	}

	else if (Instance->InventoryInstance && Instance->PMInstance)
	{
		TArray<UGameItem*> ExistingGameItems;
    	ExistingGameItems = Instance->PMInstance->GetGameItemsInWorld();

    	for (int i = 0; i < ExistingGameItems.Num(); i++)
		{
			if (ExistingGameItems[i] != nullptr)
			{
				//UE_LOG(LogTemp, Display, TEXT("Existing GameItems: %s"), *ExistingGameItems[i]->Name);
				ItemsInLevel.Add(ExistingGameItems[i]->DbItem);
			}
		}

    	if (Instance->InventoryInstance->Inventory.Num() > 1)
		{
			UE_LOG(LogTemp, Warning, TEXT("Inventory has %d Items"), Instance->InventoryInstance->Inventory.Num());
			for (int i = 0; i < Instance->InventoryInstance->Inventory.Num(); i++)
			{
				if (Instance->InventoryInstance->Inventory[i] && Instance->InventoryInstance->Inventory[i]->DbItem)
				{
					ItemsInLevel.Add(Instance->InventoryInstance->Inventory[i]->DbItem);
					UE_LOG(LogTemp, Warning, TEXT("%s added to ItemsInLevel"), *Instance->InventoryInstance->Inventory[i]->DbItem->Name);
				}
			} 
		}

    	if (PP != nullptr && PP->PuzzleGoals.Num() > 0)
    	{
			PP->ToPuzzleGoalPtrs();
        	UTerm* Goal = PP->PickGoal();
			if (Goal)
			{
				UE_LOG(LogTemp, Display, TEXT("PP goal: %s"), *Goal->Name);

				if (!Goal->GoalDialogue.IsEmpty())
				{
					PP->GoalDialogue = Goal->GoalDialogue;
					UE_LOG(LogTemp, Display, TEXT("GENERATOR: GoalDialogue is %s"), *PP->GoalDialogue);
				} 
				else
				{
					UE_LOG(LogTemp, Display, TEXT("GoalDialogue is empty"));
				}


				//Goal->ToPropPtrs();
        		bool SuccessfulInputs = GenerateInputs(Goal, Root, 0, PP, NewAccessiblePPs, ItemsInLevel, Instance);
        		if (SuccessfulInputs)
        		{
            		PMInstance->AddPuzzle(PP, PuzzleString);
            		PuzzleString = TEXT("");
					UE_LOG(LogTemp, Error, TEXT("SUCCESSFUL INPUTS"));
        		}
        		else
        		{
					UE_LOG(LogTemp, Error, TEXT("NO SUCCESSFUL INPUTS"));
					if (depth < MAX_DEPTH)
					{
						Root = GeneratePuzzleStartingFrom(PP, NewAccessiblePPs, depth + 1);
					}
					else
					{
						UE_LOG(LogTemp, Display, TEXT("Max recursion depth reached"));
					}
        		}

				
			}
			else
			{
				UE_LOG(LogTemp, Error, TEXT("Goal is NULL"));
				return nullptr;
			}
        	
    	} 
    	return Root;
	}
    
	return nullptr;
}

bool AGenerator::GenerateInputs(UTerm* StartTerm, URule* ParentRule, int32 Depth, UPuzzlePoint* CurrentPP, TArray<UPuzzlePoint*> NewAccessiblePPs, TArray<UItem*> ItemsInLevel, AGenerator* GInstance)
{
	UE_LOG(LogTemp, Warning, TEXT("GenerateInputs for ParentRule: %s called"), *ParentRule->ToString());
	TArray<UItem*> MatchingItems = GInstance->PMInstance->FindDbItemsFor(StartTerm, NewAccessiblePPs, ItemsInLevel); 

	if (MatchingItems.Num() == 0)
	{
		if(!GInstance->PMInstance->HasItemOfType(StartTerm, NewAccessiblePPs, ItemsInLevel))
		{
			UE_LOG(LogTemp, Warning, TEXT("GRAMMAR ERROR: Couldn't find accessible item of type: '%s'"), *StartTerm->Name);
			return false;
		}
	}
	else if (StartTerm->DbItem == nullptr)
	{
		StartTerm->DbItem = MatchingItems[FMath::RandRange(0, MatchingItems.Num() - 1)];
		//UE_LOG(LogTemp, Warning, TEXT("StartTerm is %s and DbItem is %s"), *StartTerm->Name, *StartTerm->DbItem->Name);
		//UE_LOG(LogTemp, Error, TEXT("DbItem %s has %d property %s %s"), *StartTerm->DbItem->Name, StartTerm->DbItem->Properties.Num(), *StartTerm->DbItem->Properties[0]->Name, *StartTerm->DbItem->Properties[0]->Value);
		if (ItemsInLevel.Contains(StartTerm->DbItem))
		{
			UE_LOG(LogTemp, Error, TEXT("ITEMSINLEVEL CONTAINS STARTTERM->DBITEM"));
			return true;
		}
	}

	TArray<URule*> PossibleRules;
	
	TArray<URule*> AllRules = GInstance->PMInstance->GetRulePointers();
	//UE_LOG(LogTemp, Error, TEXT("GETTING ALL RULES, no of rules = %d"), AllRules.Num());
	for (URule* Rule : AllRules)
	{	
		//UE_LOG(LogTemp, Display, TEXT("AllRulesLoop: %s"), *Rule->Action);
		if (Rule->Action.IsEmpty())
		{
			break;
		}
		//Rule->ToOutputsPtr();
		//Rule->ToInputsPtr();
		if (Rule->Outputs[0])
		{
			//UE_LOG(LogTemp, Error, TEXT("Rule %s Output[0] is %s"), *Rule->Action, *Rule->Outputs[0]->Name);
		}
		else
		{
			//UE_LOG(LogTemp, Display, TEXT("Rule %s has no Output[0]"), *Rule->Action);
		}
		//UE_LOG(LogTemp, Error, TEXT("%s is in AllRules and StartTerm is %s"), *Rule->Action, *StartTerm->Name);
		if (Rule != nullptr && Rule->MainOutputIs(StartTerm))
		{
			if (StartTerm->DbItem)
			{
				//UE_LOG(LogTemp, Display, TEXT("Found matching rule %s with output DbItem: %s"), *Rule->Action, *StartTerm->DbItem->Name);
			}
			if (Rule != ParentRule)
			{
				PossibleRules.Add(Rule);
			}
			else 
			{
				UE_LOG(LogTemp, Display, TEXT("Rule is same as ParentRule, not added to PossibleRules"));
			}
			//UE_LOG(LogTemp, Error, TEXT("Adding rule %s"), *Rule->Action);
			
			//UE_LOG(LogTemp, Display, TEXT("Rule[0] is %s, and depth is %d"), *PossibleRules[0]->Action, Depth);
		}
	}
	
	UE_LOG(LogTemp, Error, TEXT("Number of possible rules: %d"), PossibleRules.Num());
	



	if (PossibleRules.Num() > 0 && Depth < CurrentPP->MaxDepth) //Need to verify below !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
	{
		UE_LOG(LogTemp, Warning, TEXT("PossibleRules > 0 (possible rule 1 is %s) && Depth %d < MaxDepth (%d)"), *PossibleRules[0]->Action, Depth, CurrentPP->MaxDepth);
		URule* ChosenRule = PossibleRules[FMath::RandRange(0, PossibleRules.Num() - 1)];
		UE_LOG(LogTemp, Warning, TEXT("ChosenRule is %s"), *ChosenRule->Action);
		if (PossibleRules.Num() > 1)
		{
			while (CurrentPP->CurrentPuzzleRules.Contains(ChosenRule)) //this is causing issues, keeps trying to reach max even if no more rules available
			{
				ChosenRule = PossibleRules[FMath::RandRange(0, PossibleRules.Num() - 1)];
				UE_LOG(LogTemp, Warning, TEXT("Choosing a different rule, new chosen rule %s"), *ChosenRule->Action);
			}
		}

		ChosenRule->Outputs[0]->DbItem = StartTerm->DbItem;
		ChosenRule->Parent = ParentRule;
		ParentRule->AddChildRule(ChosenRule);

		CurrentPP->CurrentPuzzleRules.Add(ChosenRule);
		UE_LOG(LogTemp, Warning, TEXT("ChosenRule %s has %d inputs"), *ChosenRule->Action, ChosenRule->Inputs.Num());
		UE_LOG(LogTemp, Error, TEXT("ChosenRule as string: %s"), *ChosenRule->ToString());
		PuzzleString += ChosenRule->ToString() + TEXT("\n ->");


		for (int32 i = 0; i < ChosenRule->Inputs.Num() - 1; i++)
		{
			UE_LOG(LogTemp, Warning, TEXT("Found = false"));
			bool Found = false;
			for (int32 j = 0; j < ChosenRule->Outputs.Num() - 1; j++)
			{
				if (ChosenRule->Inputs[j]->Name == ChosenRule->Outputs[i]->Name)
				{
					Found = true;
					UE_LOG(LogTemp, Warning, TEXT("Found = true"));
				}
			}
		} 

		bool Result = true;
		for (int32 i = 0; i < ChosenRule->Inputs.Num(); i++)
		{
			if (ChosenRule != nullptr && ChosenRule->Outputs[0]->Name == ChosenRule->Inputs[i]->Name)
			{
				if (StartTerm->DbItem != nullptr)
				{
					ChosenRule->Inputs[i]->DbItem = StartTerm->DbItem;
				}
				else if (StartTerm->Name != ChosenRule->Inputs[i]->Name)
				{
					if (StartTerm->GetSuperTypes().Contains(ChosenRule->Inputs[i]->Name))
					{
						ChosenRule->Inputs[i]->Name = StartTerm->Name;
					}
				}
			}
			Result = GenerateInputs(ChosenRule->Inputs[i], ChosenRule, Depth + 1, CurrentPP, NewAccessiblePPs, ItemsInLevel, Instance);
			if (Result)
			{
				UE_LOG(LogTemp, Warning, TEXT("Result is true"));
			}
			else 
			{
				UE_LOG(LogTemp, Warning, TEXT("Result is false"));
			}


			if (ChosenRule->Outputs[0]->Name == ChosenRule->Inputs[i]->Name)
			{
				UE_LOG(LogTemp, Warning, TEXT("Last bit is true"));
				StartTerm->DbItem = ChosenRule->Inputs[i]->DbItem;
			}
		}
		return Result;
	}
	if (StartTerm->DbItem == nullptr && StartTerm->Name != TEXT("Player"))
	{
		UE_LOG(LogTemp, Display, TEXT("GRAMMAR ERROR: No terminal or non-terminal match for term: %s"), *StartTerm->Name);
		return false;
	}

	//Check if puzzle has already been generated
	if (PMInstance->PuzzlesGeneratedStrings.Contains(PuzzleString))
	{
		UE_LOG(LogTemp, Display, TEXT("Puzzle %s has already been generated"), *PuzzleString);
		
		return false;
	}

	UWorld* World = GetWorld();
	Spawn(World, StartTerm->DbItem, ParentRule, CurrentPP);
	UE_LOG(LogTemp, Display, TEXT("DbItem added to spawn list: %s"), *StartTerm->DbItem->Name);
	return true;
}

AGamePuzzlePoint* AGenerator::FindGamePuzzlePoint(UPuzzlePoint* PP)
{ 
	TArray<AActor*> ActorsWithTag;
	UGameplayStatics::GetAllActorsWithTag(GetWorld(), FName(PP->Name), ActorsWithTag);
	AActor* PPWithTag = ActorsWithTag[0];
	AGamePuzzlePoint* FoundGamePuzzlePoint = Cast<AGamePuzzlePoint>(PPWithTag->GetComponentByClass(AGamePuzzlePoint::StaticClass()));
	return FoundGamePuzzlePoint;
}

ASpawnPoint* AGenerator::GetSpawnPointFor(UItem* Item)
{
	TArray<ASpawnPoint*> SPsFound;
	SPsFound = GetSPsInViewport();
	if (Item)
	{
		Item->ToPropPtrs();
		//UE_LOG(LogTemp, Display, TEXT("Item has %d properties"), Item->Properties.Num());
		TArray<ASpawnPoint*> AllSPs = GetAllSpawnPoints();
		TArray<ASpawnPoint*> FoundSPs;
		for (UItemProperty* Prop : Item->Properties)
		{
			if (Prop)
			{
				//UE_LOG(LogTemp, Warning, TEXT("Property of %s in GetSpawnPointFor for loop is %s %s"), *Item->Name, *Prop->Name, *Prop->Value);
				for (ASpawnPoint* SP : AllSPs)
				{
					if (SP)
					{
						//UE_LOG(LogTemp, Error, TEXT("SP has %d Props"), SP->PropPtrs.Num());
						//UE_LOG(LogTemp, Warning, TEXT("SP is valid"));
						for (UItemProperty* SPProp : SP->PropPtrs)
						{
							if (SPProp && SPProp->Name == Prop->Name && SPProp->Value == Prop->Value/*  && !SP->HasSpawnedItem */)
							{
								//UE_LOG(LogTemp, Warning, TEXT("SP added to FoundSPs"));
								FoundSPs.Add(SP);
							}
						}
					}
				}
			}
		}

		for (ASpawnPoint* SP : FoundSPs)
		{
			for (ASpawnPoint* VSP : SPsFound)
			{
				if (SP == VSP)
				{
					//UE_LOG(LogTemp, Display, TEXT("SP removed"));
					FoundSPs.Remove(SP);
				}
			}
		} 

		if (FoundSPs.Num() > 1)
		{
			int RandIndex = FMath::RandRange(0, FoundSPs.Num() - 1);
			//UE_LOG(LogTemp, Warning, TEXT("SpawnPoint chosen for item %s"), *Item->Name);
			return FoundSPs[RandIndex];
		}
		else if (FoundSPs.Num() == 1)
		{
			//UE_LOG(LogTemp, Warning, TEXT("Sole SpawnPoint for item %s"), *Item->Name);
			return FoundSPs[0];
		}
		else 
		{
			UE_LOG(LogTemp, Error, TEXT("NO SPAWN POINT FOUND FOR %s!!! Waiting %f seconds before trying to find new spawn point"), *Item->Name, FindSpawnDelay);

			FTimerDelegate TimerDel;
			TimerDel.BindUFunction(this, FName("RetryGetSpawnPointFor"), Item);
			FTimerHandle TimerHandle;
			GetWorld()->GetTimerManager().SetTimer(TimerHandle, TimerDel, FindSpawnDelay, false);

		} 
	}
	UE_LOG(LogTemp, Warning, TEXT("Item is not valid"));
	return nullptr;
}

void AGenerator::RetryGetSpawnPointFor(UItem* Item)
{
	ASpawnPoint* NewSpawnPoint = GetSpawnPointFor(Item);
    if (NewSpawnPoint)
    {
        UWorld* World = GetWorld();
        if (World)
        {
            FVector NextSpawnVector = NewSpawnPoint->Location;
            if (Item->ItemPrefab)
            {
                AActor* ItemGO = World->SpawnActor<AActor>(Item->ItemPrefab.Get(), NextSpawnVector, FRotator::ZeroRotator);
                if (ItemGO)
                {
                    NewSpawnPoint->HasSpawnedItem = true;
                }
            }
        }
    }
}

TArray<ASpawnPoint*> AGenerator::GetAllSpawnPoints()
{
	UWorld* World = GetWorld();
    TArray<ASpawnPoint*> SPsInWorld;
    for (TActorIterator<ASpawnPoint> It(World); It; ++It)
    {
        ASpawnPoint* SP = *It;
        if (SP != nullptr)
        {
            SPsInWorld.Add(SP);
        }
    }
	UE_LOG(LogTemp, Error, TEXT("No. of Spawn Points: %d"), SPsInWorld.Num());
    return SPsInWorld;
}


TArray<ASpawnPoint*> AGenerator::GetSPsInViewport()
{
    TArray<ASpawnPoint*> FoundSPs;
    UWorld* World = GetWorld();
    if (!World)
    {
        UE_LOG(LogTemp, Error, TEXT("World is null"));
        return FoundSPs;
    }

    APlayerController* PlayerController = World->GetFirstPlayerController();
    if (!PlayerController)
    {
        UE_LOG(LogTemp, Error, TEXT("PlayerController is null"));
        return FoundSPs;
    }

    FVector CameraLocation;
    FRotator CameraRotation;
    PlayerController->GetPlayerViewPoint(CameraLocation, CameraRotation);

    int32 ViewportSizeX, ViewportSizeY;
    PlayerController->GetViewportSize(ViewportSizeX, ViewportSizeY);

    FSceneViewFamily::ConstructionValues ViewFamilyInit(
        PlayerController->GetLocalPlayer()->ViewportClient->Viewport,
        World->Scene,
        PlayerController->GetLocalPlayer()->ViewportClient->EngineShowFlags);

    FSceneViewFamilyContext ViewFamily(ViewFamilyInit);

    FSceneViewInitOptions ViewInitOptions;
    ViewInitOptions.SetViewRectangle(FIntRect(0, 0, ViewportSizeX, ViewportSizeY));
    ViewInitOptions.ViewFamily = &ViewFamily;
    ViewInitOptions.ViewOrigin = CameraLocation;
    ViewInitOptions.ViewRotationMatrix = FInverseRotationMatrix(CameraRotation) * FMatrix(FPlane(0, 0, 1, 0), FPlane(1, 0, 0, 0), FPlane(0, 1, 0, 0), FPlane(0, 0, 0, 1));
    ViewInitOptions.ProjectionMatrix = FReversedZPerspectiveMatrix(
        FMath::Max(0.001f, PlayerController->PlayerCameraManager->GetFOVAngle()),
        1.0f,
        GNearClippingPlane,
        GNearClippingPlane);

    FSceneView* View = new FSceneView(ViewInitOptions);

    FConvexVolume ViewFrustum;
    GetViewFrustumBounds(ViewFrustum, View->ViewMatrices.GetViewProjectionMatrix(), true);

    for (TActorIterator<ASpawnPoint> ActorItr(World); ActorItr; ++ActorItr)
    {
        ASpawnPoint* Actor = *ActorItr;
        if (IsValid(Actor))
        {
            const FBoxSphereBounds Bounds = Actor->GetComponentsBoundingBox();
            if (ViewFrustum.IntersectBox(Bounds.Origin, Bounds.BoxExtent))
            {
                FHitResult HitResult;
                FCollisionQueryParams Params;
                Params.AddIgnoredActor(PlayerController->GetPawn());
                Params.AddIgnoredActor(Actor);

                World->LineTraceSingleByChannel(
                    HitResult,
                    CameraLocation,
                    Actor->GetActorLocation(),
                    ECC_Visibility,
                    Params
                );

                if (!HitResult.bBlockingHit || HitResult.GetActor() == Actor)
                {
                    FoundSPs.Add(Actor);
                }
            }
        }
    }
	UE_LOG(LogTemp, Warning, TEXT("%d SPAWN POINTS ARE VISIBLE IN THE VIEWPORT"), FoundSPs.Num());
    return FoundSPs;
}

/* TArray<AGamePuzzlePoint*> AGenerator::GetGPPsInViewport()
{
    TArray<AGamePuzzlePoint*> FoundGPPs;
    UWorld* World = GetWorld();
    if (!World)
    {
        UE_LOG(LogTemp, Error, TEXT("World is null"));
        return FoundGPPs;
    }

    APlayerController* PlayerController = World->GetFirstPlayerController();
    if (!PlayerController)
    {
        UE_LOG(LogTemp, Error, TEXT("PlayerController is null"));
        return FoundGPPs;
    }

    FVector CameraLocation;
    FRotator CameraRotation;
    PlayerController->GetPlayerViewPoint(CameraLocation, CameraRotation);

    int32 ViewportSizeX, ViewportSizeY;
    PlayerController->GetViewportSize(ViewportSizeX, ViewportSizeY);

    FSceneViewFamily::ConstructionValues ViewFamilyInit(
        PlayerController->GetLocalPlayer()->ViewportClient->Viewport,
        World->Scene,
        PlayerController->GetLocalPlayer()->ViewportClient->EngineShowFlags);

    FSceneViewFamilyContext ViewFamily(ViewFamilyInit);

    FSceneViewInitOptions ViewInitOptions;
    ViewInitOptions.SetViewRectangle(FIntRect(0, 0, ViewportSizeX, ViewportSizeY));
    ViewInitOptions.ViewFamily = &ViewFamily;
    ViewInitOptions.ViewOrigin = CameraLocation;
    ViewInitOptions.ViewRotationMatrix = FInverseRotationMatrix(CameraRotation) * FMatrix(FPlane(0, 0, 1, 0), FPlane(1, 0, 0, 0), FPlane(0, 1, 0, 0), FPlane(0, 0, 0, 1));
    ViewInitOptions.ProjectionMatrix = FReversedZPerspectiveMatrix(
        FMath::Max(0.001f, PlayerController->PlayerCameraManager->GetFOVAngle()),
        1.0f,
        GNearClippingPlane,
        GNearClippingPlane);

    FSceneView* View = new FSceneView(ViewInitOptions);

    FConvexVolume ViewFrustum;
    GetViewFrustumBounds(ViewFrustum, View->ViewMatrices.GetViewProjectionMatrix(), true);

    for (TActorIterator<AGamePuzzlePoint> ActorItr(World); ActorItr; ++ActorItr)
    {
        ASpawnPoint* Actor = *ActorItr;
        if (IsValid(Actor))
        {
            const FBoxSphereBounds Bounds = Actor->GetComponentsBoundingBox();
            if (ViewFrustum.IntersectBox(Bounds.Origin, Bounds.BoxExtent))
            {
                FHitResult HitResult;
                FCollisionQueryParams Params;
                Params.AddIgnoredActor(PlayerController->GetPawn());
                Params.AddIgnoredActor(Actor);

                World->LineTraceSingleByChannel(
                    HitResult,
                    CameraLocation,
                    Actor->GetActorLocation(),
                    ECC_Visibility,
                    Params
                );

                if (!HitResult.bBlockingHit || HitResult.GetActor() == Actor)
                {
                    FoundGPPs.Add(Actor);
                }
            }
        }
    }
	UE_LOG(LogTemp, Warning, TEXT("%d SPAWN POINTS ARE VISIBLE IN THE VIEWPORT"), FoundSPs.Num());
    return FoundGPPs;
} */

/* UGameArea* AGenerator::FindGameArea(UArea* Area)
{ 
	TArray<AActor*> ActorsWithTag;
	UGameplayStatics::GetAllActorsWithTag(GetWorld(), FName(Area->Name), ActorsWithTag);
	AActor* AreaWithTag = ActorsWithTag[0];
	UGameArea* FoundGameArea = Cast<UGameArea>(AreaWithTag->GetComponentByClass(UGameArea::StaticClass()));
	return FoundGameArea;
} */

/* void AGenerator::GetAllAttachedActors(AActor* ParentActor, TArray<AActor*>& OutActors)
{
	TArray<AActor*> DirectlyAttachedActors;
	ParentActor->GetAttachedActors(DirectlyAttachedActors);

	for (AActor* ChildActor : DirectlyAttachedActors)
	{
		if (ChildActor != nullptr)
		{
			OutActors.Add(ChildActor);
			GetAllAttachedActors(ChildActor, OutActors);
		}
	}
} */


/* void AGenerator::Spawn(UWorld* World, UItem* Item, URule* Rule, UArea* Area)
{
	AGenerator* GeneratorInstance = GetInstance();
	UGameArea* GameArea = Instance->FindGameArea(Area);
	bool Found = false;

	for (int32 i = 0; i < GameArea->ItemsInArea.Num(); i++)
	{
		if (GameArea->ItemsInArea[i] != nullptr && GameArea->ItemsInArea[i]->Name == Item->Name)
		{
			GameArea->ItemsInArea[i]->Setup(Item->Name, Item);
			Found = true;
			GameArea->ItemsInArea[i]->Name = TEXT(" ");
		}
	}
	if (!Found)
	{
		FVector NextSpawnPoint = FVector(0, 0, 0);
		if (Item->GetPropertyWithName(TEXT("Floor")) != nullptr && Item->GetPropertyWithName(TEXT("Floor"))->Value == TEXT("True"))
		{
			NextSpawnPoint = GameArea->GetNextSpawnPt(false, true);
		}
		else if (Item->GetPropertyWithName(TEXT("isa")) != nullptr && Item->GetPropertyWithName(TEXT("isa"))->Value == TEXT("NPC"))
		{
			NextSpawnPoint = GameArea->GetNextSpawnPt(true, false);
		}
		else
		{
			NextSpawnPoint = GameArea->GetNextSpawnPt();
		}
		
		UE_LOG(LogTemp, Display, TEXT("Spawn point: %s ( %s )"), *NextSpawnPoint.ToString(), *Item->Name);
		AActor* ItemGO = World->SpawnActor<AActor>(Item->ItemPrefab, NextSpawnPoint, FRotator::ZeroRotator);
		ItemGO->AttachToActor(GameArea->GetOwner(), FAttachmentTransformRules::KeepRelativeTransform);
		ItemGO->FindComponentByClass<UGameItem>()->Setup(Item->Name, Item);
	}
} */

/* URule* AGenerator::GeneratePuzzleStartingFrom(UArea* Area, TArray<UArea*> NewAccessibleAreas)
{
	URule* Root = NewObject<URule>(this, URule::StaticClass());
	Area->SetFinal(false);

	TArray<UItem*> ItemsInLevel;

	//Gets all Actors in area and stores them in ActorsInArea
	TArray<AActor*> ActorsInArea;
	if (Area != nullptr && Area->OwningGameArea != nullptr)
	{
		AActor* OwningAreaBP = Area->OwningGameArea->GetOwner();
		if (OwningAreaBP != nullptr)
		{
			GetAllAttachedActors(OwningAreaBP, ActorsInArea);
		}
		
	}


	//Get all GameItems from ActorsInArea and store them in ExistingGameItems
	TArray<UGameItem*> ExistingGameItems;
	for (AActor* Actor : ActorsInArea)
	{
		if (Actor->FindComponentByClass<UGameItem>() != nullptr)
		{
			ExistingGameItems.Add(Actor->FindComponentByClass<UGameItem>());
		}
	}

	for (int32 i = 0; i < ExistingGameItems.Num(); i++)
	{
		if (ExistingGameItems[i] != nullptr)
		{
			UE_LOG(LogTemp, Display, TEXT("Existing GameItems: %s"), *ExistingGameItems[i]->Name);
			ItemsInLevel.Add(ExistingGameItems[i]->DbItem);
		}
	}
	
	AInventoryManager* InventoryInstance = AInventoryManager::GetInstance();
	APuzzleManager* PMInstance = APuzzleManager::GetInstance();
	if (InventoryInstance != nullptr)
	{
		for (UGameItem* GameItem : InventoryInstance->GetInventory())
		{
			if (GameItem != nullptr && GameItem->DbItem != nullptr)
			{
				ItemsInLevel.Add(GameItem->DbItem);
				UE_LOG(LogTemp, Display, TEXT("%s is in level"), *GameItem->DbItem->Name);
			}
		}
	}
	

	if (Area != nullptr && Area->Goals.Num() > 0)
	{
		UTerm* Goal = Area->Goals[FMath::RandRange(0, Area->Goals.Num())];
		UE_LOG(LogTemp, Display, TEXT("Area goal: %s"), *Goal->Name);
		bool SuccessfulInputs = GenerateInputs(Goal, Root, 0, Area, NewAccessibleAreas, ItemsInLevel);
		if (SuccessfulInputs)
		{
			Area->SetCurrentGoal(Goal);
			if (Goal->GetPropertyWithName(TEXT("GameOver")) != nullptr && Goal->GetPropertyWithName(TEXT("GameOver"))->Value == TEXT("True"))
			{
				Area->SetFinal(true);
			}
			PMInstance->AddPuzzle(Area, PuzzleString);
			PuzzleString = TEXT("");
		}
		else
		{
			Root = GeneratePuzzleStartingFrom(Area, NewAccessibleAreas);
		}
	}

	return Root;
}

 */

/* bool AGenerator::GenerateInputs(UTerm* StartTerm, URule* ParentRule, int32 Depth, UArea* CurrentArea, TArray<UArea*> NewAccessibleAreas, TArray<UItem*> ItemsInLevel)
{
	APuzzleManager* PMInstance = APuzzleManager::GetInstance();
	TArray<UItem*> MatchingItems = PMInstance->FindDbItemsFor(StartTerm, NewAccessibleAreas, ItemsInLevel);
	if (MatchingItems.Num() == 0)
	{
		if(!PMInstance->HasItemOfType(StartTerm, NewAccessibleAreas, ItemsInLevel))
		{
			UE_LOG(LogTemp, Warning, TEXT("GRAMMAR ERROR: Couldn't find accessible item of type: %s"), *StartTerm->Name);
			return false;
		}
	}
	else if (StartTerm->DbItem == nullptr)
	{
		StartTerm->DbItem = MatchingItems[FMath::RandRange(0, MatchingItems.Num())];
		if (ItemsInLevel.Contains(StartTerm->DbItem))
		{
			return true;
		}
	}

	TArray<URule*> PossibleRules;
	for (URule* Rule : PMInstance->GetAllRules())
	{
		if (Rule != nullptr && Rule->MainOutputIs(StartTerm))
		{
			if (StartTerm->DbItem == nullptr)
			{
				UE_LOG(LogTemp, Display, TEXT("Found matching rule %s with output DbItem: %d"), *Rule->Outputs[0]->Name, *StartTerm->DbItem->Name, Depth);
			}
			else
			{
				UE_LOG(LogTemp, Display, TEXT("Found matching rule with output: %s"), *StartTerm->Name);
			}
			PossibleRules.Add(Rule);
		}
	}
	
	UE_LOG(LogTemp, Display, TEXT("Number of possible rules: %f"), PossibleRules.Num());

	if (PossibleRules.Num() > 0 && Depth < CurrentArea->MaxDepth)
	{
		URule* ChosenRule = PossibleRules[FMath::RandRange(0, PossibleRules.Num())];
		ChosenRule->Outputs[0]->DbItem = StartTerm->DbItem;
		ChosenRule->Parent = ParentRule;
		ParentRule->AddChildRule(ChosenRule);
		for (int32 i = 0; i < ChosenRule->Inputs.Num(); i++)
		{
			bool Found = false;
			for (int32 j = 0; j < ChosenRule->Outputs.Num(); j++)
			{
				if (ChosenRule->Inputs[j]->Name == ChosenRule->Outputs[i]->Name)
				{
					Found = true;
				}
			}
		}

		bool Result = true;
		for (int32 i = 0; i < ChosenRule->Inputs.Num(); i++)
		{
			if (ChosenRule != nullptr && ChosenRule->Outputs[0]->Name == ChosenRule->Inputs[i]->Name)
			{
				if (StartTerm->DbItem != nullptr)
				{
					ChosenRule->Inputs[i]->DbItem = StartTerm->DbItem;
				}
				else if (StartTerm->Name != ChosenRule->Inputs[i]->Name)
				{
					if (StartTerm->GetSuperTypes().Contains(ChosenRule->Inputs[i]->Name))
					{
						ChosenRule->Inputs[i]->Name = StartTerm->Name;
					}
				}
			}
			Result = GenerateInputs(ChosenRule->Inputs[i], ChosenRule, Depth + 1, CurrentArea, NewAccessibleAreas, ItemsInLevel);
			if (ChosenRule->Outputs[0]->Name == ChosenRule->Inputs[i]->Name)
			{
				StartTerm->DbItem = ChosenRule->Inputs[i]->DbItem;
			}
		}
		return Result;
	}
	if (StartTerm->DbItem == nullptr && StartTerm->Name != TEXT("Player"))
	{
		UE_LOG(LogTemp, Display, TEXT("GRAMMAR ERROR: No terminal or non-terminal match for term: %s"), *StartTerm->Name);
		return false;
	}

	//Doesn't matter what GetWorld() is called on as there is only one UWorld*
	UWorld* World = StartTerm->GetWorld();
	Spawn(World, StartTerm->DbItem, ParentRule, CurrentArea);
	UE_LOG(LogTemp, Display, TEXT("DbItem added to spawn list: %s"), *StartTerm->DbItem->Name);
	return true;
} */