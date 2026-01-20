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
FString AGenerator::DebugPuzzleString = TEXT("");

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

	if (Instance)
	{
		UE_LOG(LogTemp, Display, TEXT("Generator Instance is valid"));
	}
	else
	{
		UE_LOG(LogTemp, Display, TEXT("Generator instance is null"));
	}

	if (Instance->PMInstance)
	{
		UE_LOG(LogTemp, Display, TEXT("Generator->PMInstance is valid"));
	}
	else
	{
		UE_LOG(LogTemp, Display, TEXT("Generator->PMInstance is null"));
	}
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
	//Item->ToPropPtrs();
    for (int32 i = 0; i < ItemsInWorld.Num(); i++)
    {
		//ItemsInWorld[i]->DbItem->ToPropPtrs();
        if (ItemsInWorld[i] != nullptr && ItemsInWorld[i]->Name == Item->Name)
        {
            ItemsInWorld[i]->Setup(Item->Name, Item);
            Found = true;
            //ItemsInWorld[i]->Name = TEXT(" ");
        }

		if (ItemsInWorld[i]->DbItem)
		{
			ItemsInWorld[i]->DbItem->ToPropPtrs();
			//UE_LOG(LogTemp, Display, TEXT("ItemsInWorld[%d]->DbItem is %s and has %d properties"), i, *ItemsInWorld[i]->DbItem->Name, ItemsInWorld[i]->DbItem->Properties.Num());
			for (FString Type : ItemsInWorld[i]->DbItem->GetSuperTypes())
			{
				if (!Type.IsEmpty())
				{
					for (FString ItemType : Item->GetSuperTypes())
					{
						if (!ItemType.IsEmpty())
						{
							if (ItemType == Type)
							{
								Found = true;
								break;
							}
						}
					}
				}
			}
		}
		else
		{
			UE_LOG(LogTemp, Display, TEXT("ItemsInWorld[%d]->DbItem is null"), i);
		}
		
		 
		
    }

	if (!Found)
	{   
		UE_LOG(LogTemp, Display, TEXT("Item %s not found in world, passing to GetSpawnPointFor"), *Item->Name);
		ASpawnPoint* NextSpawnPoint = GetSpawnPointFor(Item);
		if (NextSpawnPoint)
		{
			FVector NextSpawnVector = NextSpawnPoint->Location;
			//add a debug sphere
			NextSpawnVector.Z = 45;

			//DrawDebugSphere(GetWorld(), NextSpawnVector, 20.0f, 32, FColor::Blue, true, 120.0f);
			
			UE_LOG(LogTemp, Display, TEXT("Spawn point: %s ( %s )"), *NextSpawnVector.ToString(), *Item->Name);
			/* if (GEngine)
			{
    			FString ItemName = Item ? Item->Name : TEXT("Unknown");
    			FString SpawnLocation = NextSpawnVector.ToString();

    			// Log to Output Log
    			UE_LOG(LogTemp, Display, TEXT("Spawn point: %s ( %s )"), *SpawnLocation, *ItemName);

    			// Display on screen
    			GEngine->AddOnScreenDebugMessage(
        			-1, 
        			30.0f, 
        			FColor::Green, 
        			FString::Printf(TEXT("Spawn point: %s ( %s )"), *SpawnLocation, *ItemName)
    			);
			} */
			if (Item->ItemPrefab && World)
			{
				UE_LOG(LogTemp, Warning, TEXT("ItemPrefab is valid"));
				UE_LOG(LogTemp, Error, TEXT("TRYING TO SPAWN %s"), *Item->Name);
				SpawnedItems.Add(Item->Name);

				/* if (GEngine)
				{
    				FString ItemName = Item ? Item->Name : TEXT("Unknown");
 
   					UE_LOG(LogTemp, Error, TEXT("TRYING TO SPAWN %s"), *ItemName);

    				GEngine->AddOnScreenDebugMessage(
        				-1,              
        				30.0f,             
        				FColor::Red,      
        				FString::Printf(TEXT("TRYING TO SPAWN %s"), *ItemName) 
    				);
				} */

				AActor* ItemGO = World->SpawnActor<AActor>(Item->ItemPrefab.Get(), NextSpawnVector, FRotator::ZeroRotator);
				NextSpawnPoint->HasSpawnedItem = true;

				if (ItemGO)
				{
					FString ItemName = Item ? Item->Name : TEXT("Unknown");
					UE_LOG(LogTemp, Display, TEXT("ItemGO spawned"));
					/* GEngine->AddOnScreenDebugMessage(
						-1, 
						30.0f, 
						FColor::Green, 
						FString::Printf(TEXT("ItemGO %s spawned"), *ItemName)
					); */
				}
				else
				{
					FString ItemName = Item ? Item->Name : TEXT("Unknown");
					UE_LOG(LogTemp, Display, TEXT("ItemGO not spawned"));
					/* GEngine->AddOnScreenDebugMessage(
						-1, 
						30.0f, 
						FColor::Green, 
						FString::Printf(TEXT("ItemGO %s not spawned"), *ItemName)
					); */
				}
			}
		}
	}
} //TO DO: generate puzzle again if items not available, make sure there's enough in world for all puzzles

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
	PP->CurrentPuzzleRules.Empty();

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
        	UTerm* Goal = ChooseGoal(PP);

			if (Goal)
			{
				PMInstance->GoalsPicked.Add(Goal);
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
        		bool SuccessfulInputs = GenerateInputs(Goal, Root, 0, PP, NewAccessiblePPs, ItemsInLevel, Instance, Goal);
        		if (SuccessfulInputs && !PuzzleString.IsEmpty())
        		{
					FString GoalString = Goal->ToString();
            		PMInstance->AddPuzzle(PP, PuzzleString, GoalString);
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

bool AGenerator::GenerateInputs(UTerm* StartTerm, URule* ParentRule, int32 Depth, UPuzzlePoint* CurrentPP, TArray<UPuzzlePoint*> NewAccessiblePPs, TArray<UItem*> ItemsInLevel, AGenerator* GInstance, UTerm* GoalTerm)
{
	UTerm* Goal = GoalTerm;
	UE_LOG(LogTemp, Warning, TEXT("GenerateInputs for ParentRule: %s called"), *ParentRule->ToString());
	TArray<UItem*> MatchingItems = GInstance->PMInstance->FindDbItemsFor(StartTerm, NewAccessiblePPs, ItemsInLevel); //finds matching item for StartTerm in item database

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
			Result = GenerateInputs(ChosenRule->Inputs[i], ChosenRule, Depth + 1, CurrentPP, NewAccessiblePPs, ItemsInLevel, Instance, Goal);
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

	PuzzleArc.SetNum(CurrentPP->CurrentPuzzleRules.Num());
	for (int i = 0; i < PuzzleArc.Num(); i++)
	{
		if (CurrentPP && CurrentPP->CurrentPuzzleRules[i])
		{
			PuzzleArc[i] = CurrentPP->CurrentPuzzleRules[i]->Similarity;
		}
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

	if (SPHINX3Mode && MannWhitney(Arc0, PuzzleArc))
	{
		return false;
	}
	

	/* if (PMInstance->GoalsPicked.Contains(Goal))
	{
		UE_LOG(LogTemp, Display, TEXT("Goal has already been used"));
		return false;
	} */

	UWorld* World = GetWorld();
	Spawn(World, StartTerm->DbItem, ParentRule, CurrentPP);
	UE_LOG(LogTemp, Display, TEXT("DbItem added to spawn list: %s"), *StartTerm->DbItem->Name);
	
	for (int32 i = 0; i < CurrentPP->CurrentPuzzleRules.Num(); i++)
	{
		if (CurrentPP->CurrentPuzzleRules[i])
		{
			UE_LOG(LogTemp, Display, TEXT("CurrentPuzzleRules[%d] for PP: %s is %s"), i, *CurrentPP->Name, *CurrentPP->CurrentPuzzleRules[i]->ToString());
		}
	}



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
							if (SPProp && SPProp->Name == Prop->Name && SPProp->Value == Prop->Value && !SP->HasSpawnedItem)
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
			FoundSPs[0]->HasSpawnedItem = true;
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


UTerm* AGenerator::ChooseGoal(UPuzzlePoint* PP)
{
	UTerm* Goal = PP->PickGoal();

	if (!Goal)
	{
		return nullptr;
	}

	Goal->ToPropPtrs();
	FString GoalString = Goal->ToString();
	UE_LOG(LogTemp, Display, TEXT("CHOOSE GOAL: Random Goal picked is %s"), *GoalString);

	if (!PMInstance->GoalsPicked.Contains(Goal) && !PMInstance->PickedGoalStrings.Contains(GoalString))
	{
		UE_LOG(LogTemp, Display, TEXT("CHOOSE GOAL: Goal successfully picked, %s"), *GoalString);
		PMInstance->GoalsPicked.Add(Goal);
		PMInstance->PickedGoalStrings.Add(GoalString);
		return Goal;
	}
	else
	{
		UE_LOG(LogTemp, Display, TEXT("CHOOSE GOAL: PickedGoals already contains %s"), *GoalString);
		UE_LOG(LogTemp, Display, TEXT("CHOOSE GOAL: Picking new goal"));
		return ChooseGoal(PP);
	}

	return nullptr;

}



//Debug Calculate Max Puzzles

void AGenerator::CalculateMaxPuzzles()
{
	if (Instance)
	{
		UE_LOG(LogTemp, Display, TEXT("DEBUG: Generator Instance is valid"));
	}
	else
	{
		UE_LOG(LogTemp, Display, TEXT("DEBUG: Generator Instance is not valid"));
	}
	UE_LOG(LogTemp, Display, TEXT("CALCULATEMAXPUZZLES CALLED"));
	for (TSubclassOf<UTerm> Goal : PuzzleGoalsDebug)
    {
        if (Goal)
        {
            UTerm* GoalPtr = NewObject<UTerm>(this, Goal);
            if (GoalPtr)
            {
				GoalPtr->ToPropPtrs();
                DebugPtrs.Add(GoalPtr);
                UE_LOG(LogTemp, Error, TEXT("GoalPtr added to DebugPtrs, DebugPtrs has %d ptrs"), DebugPtrs.Num());
            }
        }
    }

	
	if (DebugPtrs.Num() > 0)
	{
		for (UTerm* DebugGoalPtr : DebugPtrs)
		{
			if (DebugGoalPtr)
			{
				URule* NewRule = NewObject<URule>(this, URule::StaticClass());
				NewRule = GeneratePuzzleStartingFromDebug(DebugGoalPtr, 0);
			}
		}
	}
}

URule* AGenerator::GeneratePuzzleStartingFromDebug(UTerm* DebugGoal, int depth = 0)
{
	UE_LOG(LogTemp, Error, TEXT("GENERATEPUZZLESTARTINGFROMDEBUG CALLED"));
	if (depth >= MAX_DEPTH)
    {
        UE_LOG(LogTemp, Display, TEXT("Debug Max recursion depth reached"));
        return nullptr;
    }

	
	URule* Root = NewObject<URule>(this, URule::StaticClass());
	UE_LOG(LogTemp, Display, TEXT("Root created"));
	UE_LOG(LogTemp, Display, TEXT("Checking if Instances are valid"));
	if (Instance->PMInstance)
	{
		UE_LOG(LogTemp, Display, TEXT("Instance->PMInstance is valid"));
		if (DebugGoal)
		{
			UE_LOG(LogTemp, Display, TEXT("Debug goal: %s"), *DebugGoal->GoalDialogue);

			/* //Goal->ToPropPtrs();
        	bool SuccessfulInputs = GenerateInputsDebug(DebugGoal, Root, 0, Instance, DebugGoal);
        	if (SuccessfulInputs && !DebugPuzzleString.IsEmpty())
        	{
				FString GoalString = DebugGoal->ToString();
            	SuccessfulPuzzleStrings.Add(DebugPuzzleString);
				SuccessfulPuzzles++;
				UE_LOG(LogTemp, Display, TEXT("SuccessfulPuzzles = %d"), SuccessfulPuzzles);
            	DebugPuzzleString = TEXT("");
				UE_LOG(LogTemp, Error, TEXT("DEBUG SUCCESSFUL INPUTS"));
        	}
        	else
        	{
				UE_LOG(LogTemp, Error, TEXT("DEBUG NO SUCCESSFUL INPUTS"));
				if (depth < MAX_DEPTH)
				{
					GeneratePuzzleStartingFromDebug(DebugGoal, depth + 1);
				}
				else
				{
					UE_LOG(LogTemp, Display, TEXT("Debug Max recursion depth reached"));
				}
        	} */	
		}
		else
		{
			UE_LOG(LogTemp, Error, TEXT("DebugGoal is NULL"));
			return nullptr;
		}	
    	return Root;
	}
	return nullptr;
}

bool AGenerator::GenerateInputsDebug(UTerm* StartTerm, URule* ParentRule, int32 Depth, AGenerator* GInstance, UTerm* GoalTerm)
{
	TArray<URule*> CurrentPuzzleRules;
	UTerm* Goal = GoalTerm;
	UE_LOG(LogTemp, Warning, TEXT("GenerateInputs for ParentRule: %s called"), *ParentRule->ToString());
	TArray<UItem*> MatchingItems = GInstance->PMInstance->FindDbItemsForDebug(StartTerm); 

	if (MatchingItems.Num() == 0)
	{
		if(!GInstance->PMInstance->HasItemOfTypeDebug(StartTerm))
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
	



	if (PossibleRules.Num() > 0 && Depth < MaxDepth) //Need to verify below !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
	{
		UE_LOG(LogTemp, Warning, TEXT("PossibleRules > 0 (possible rule 1 is %s) && Depth %d < MaxDepth (%d)"), *PossibleRules[0]->Action, Depth, MaxDepth);
		URule* ChosenRule = PossibleRules[FMath::RandRange(0, PossibleRules.Num() - 1)];
		UE_LOG(LogTemp, Warning, TEXT("ChosenRule is %s"), *ChosenRule->Action);
		if (PossibleRules.Num() > 1)
		{
			while (CurrentPuzzleRules.Contains(ChosenRule)) //this is causing issues, keeps trying to reach max even if no more rules available
			{
				ChosenRule = PossibleRules[FMath::RandRange(0, PossibleRules.Num() - 1)];
				UE_LOG(LogTemp, Warning, TEXT("Choosing a different rule, new chosen rule %s"), *ChosenRule->Action);
			}
		}

		ChosenRule->Outputs[0]->DbItem = StartTerm->DbItem;
		ChosenRule->Parent = ParentRule;
		ParentRule->AddChildRule(ChosenRule);

		CurrentPuzzleRules.Add(ChosenRule);
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
			Result = GenerateInputsDebug(ChosenRule->Inputs[i], ChosenRule, Depth + 1, Instance, Goal);
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
	if (SuccessfulPuzzleStrings.Contains(PuzzleString))
	{
		UE_LOG(LogTemp, Display, TEXT("Puzzle %s has already been generated"), *PuzzleString);
		
		return false;
	}

	/* if (PMInstance->GoalsPicked.Contains(Goal))
	{
		UE_LOG(LogTemp, Display, TEXT("Goal has already been used"));
		return false;
	} */
	
	for (int32 i = 0; i < CurrentPuzzleRules.Num(); i++)
	{
		if (CurrentPuzzleRules[i])
		{
			UE_LOG(LogTemp, Display, TEXT("CurrentPuzzleRules[%d] for Puzzle No. %d: %s is %s"), i, SuccessfulPuzzles, *CurrentPuzzleRules[i]->ToString());
		}
	}
	return true;
}

bool AGenerator::MannWhitney(const TArray<double>& Arc, const TArray<double>& Puzzle)
{
	struct FRankedValue {
        double Value;
        int32 GroupID;
        float Rank;
    };

	float Result;
    int32 n1 = Arc.Num();
    int32 n2 = Puzzle.Num();
    TArray<FRankedValue> Combined;

    for (double Val : Arc) Combined.Add({Val, 1, 0.0f});
    for (double Val : Puzzle) Combined.Add({Val, 2, 0.0f});

    Combined.Sort([](const FRankedValue& A, const FRankedValue& B) {
        return A.Value < B.Value;
    });

    for (int32 i = 0; i < Combined.Num(); )
    {
        int32 j = i;
        while (j < Combined.Num() && Combined[j].Value == Combined[i].Value) {
            j++;
        }
        
        float AvgRank = (float)(i + 1 + j) / 2.0f;
        for (int32 k = i; k < j; k++) {
            Combined[k].Rank = AvgRank;
        }
        i = j;
    }

    float R1 = 0.0f;
    for (const auto& Item : Combined) {
        if (Item.GroupID == 1) R1 += Item.Rank;
    }


    float U1 = (float)(n1 * n2) + (float)(n1 * (n1 + 1)) / 2.0f - R1;
    float U2 = (float)(n1 * n2) - U1;

    Result = FMath::Min(U1, U2);
	int32 CriticalValue = GetCriticalValue(n1, n2);

	if (Result <= CriticalValue)
	{
		return true;
	}

	return false;
}

int32 AGenerator::GetCriticalValue(int32 A, int32 B)
{
	//Assuming all ground truth arcs have 8 points in the array, will need to be manually hardcoded for different number
	//Puzzles can have max 20 rules, else new functionality will need to be added
	if (A == 8 && B == 2) return 0;
	if (A == 8 && B == 3) return 2;
	if (A == 8 && B == 4) return 4;
	if (A == 8 && B == 5) return 6;
	if (A == 8 && B == 6) return 8;
	if (A == 8 && B == 7) return 10;
	if (A == 8 && B == 8) return 13;
	if (A == 8 && B == 9) return 15;
	if (A == 8 && B == 10) return 17;
	if (A == 8 && B == 11) return 19;
	if (A == 8 && B == 12) return 22;
	if (A == 8 && B == 13) return 24;
	if (A == 8 && B == 14) return 26;
	if (A == 8 && B == 15) return 29;
	if (A == 8 && B == 16) return 31;
	if (A == 8 && B == 17) return 34;
	if (A == 8 && B == 18) return 36;
	if (A == 8 && B == 19) return 38;
	if (A == 8 && B == 20) return 41;

	return -1;
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