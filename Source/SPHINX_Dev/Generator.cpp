// Fill out your copyright notice in the Description page of Project Settings.


#include "Generator.h"

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
        Instance = NewObject<AGenerator>();
    }
    return Instance;
}

// Called when the game starts or when spawned
void AGenerator::BeginPlay()
{
	Super::BeginPlay();

	GetInstance();
	
}

// Called every frame
void AGenerator::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AGenerator::Spawn(UWorld* World, UItem* Item, URule* Rule, UArea* Area)
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
		
		AActor* ItemGO = World->SpawnActor<AActor>(Item->ItemPrefab, NextSpawnPoint, FRotator::ZeroRotator);
		ItemGO->AttachToActor(GameArea->GetOwner(), FAttachmentTransformRules::KeepRelativeTransform);
		ItemGO->FindComponentByClass<UGameItem>()->Setup(Item->Name, Item);
	}
}


URule* AGenerator::GeneratePuzzleStartingFrom(UArea* Area, TArray<UArea*> NewAccessibleAreas)
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
			ItemsInLevel.Add(ExistingGameItems[i]->DbItem);
		}
	}
	
	AInventoryManager* InventoryInstance = AInventoryManager::GetInstance();
	APuzzleManager* PMInstance = APuzzleManager::GetInstance();
	if (InventoryInstance != nullptr)
	{
		for (UGameItem* GameItem : InventoryInstance->GetInventory())
		{
			if (GameItem != nullptr)
			{
				ItemsInLevel.Add(GameItem->DbItem);
			}
		}
	}
	

	if (Area != nullptr && Area->Goals.Num() > 0)
	{
		UTerm* Goal = Area->Goals[FMath::RandRange(0, Area->Goals.Num())];
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

bool AGenerator::GenerateInputs(UTerm* StartTerm, URule* ParentRule, int32 Depth, UArea* CurrentArea, TArray<UArea*> NewAccessibleAreas, TArray<UItem*> ItemsInLevel)
{
	APuzzleManager* PMInstance = APuzzleManager::GetInstance();
	TArray<UItem*> MatchingItems = PMInstance->FindDbItemsFor(StartTerm, NewAccessibleAreas, ItemsInLevel);
	if (MatchingItems.Num() == 0)
	{
		if(!PMInstance->HasItemOfType(StartTerm, NewAccessibleAreas, ItemsInLevel))
		{
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
			PossibleRules.Add(Rule);
		}
	}

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
		return false;
	}

	//Doesn't matter what GetWorld() is called on as there is only one UWorld*
	UWorld* World = StartTerm->GetWorld();
	Spawn(World, StartTerm->DbItem, ParentRule, CurrentArea);
	return true;
}

UGameArea* AGenerator::FindGameArea(UArea* Area)
{ 
	TArray<AActor*> ActorsWithTag;
	UGameplayStatics::GetAllActorsWithTag(GetWorld(), FName(Area->Name), ActorsWithTag);
	AActor* AreaWithTag = ActorsWithTag[0];
	UGameArea* FoundGameArea = Cast<UGameArea>(AreaWithTag->GetComponentByClass(UGameArea::StaticClass()));
	return FoundGameArea;
}

void AGenerator::GetAllAttachedActors(AActor* ParentActor, TArray<AActor*>& OutActors)
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
}

