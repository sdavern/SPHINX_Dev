// Fill out your copyright notice in the Description page of Project Settings.


#include "GameArea.h"

// Sets default values for this component's properties
UGameArea::UGameArea()
{
	
}


// Called when the game starts
void UGameArea::BeginPlay()
{
	Super::BeginPlay();

	if (AreaBP == nullptr)
	{
		UE_LOG(LogTemp, Warning, TEXT("AreaBP is not set in UGameArea::BeginPlay"));
		return;
	}

	UArea* MyAreaInstance = NewObject<UArea>(this, AreaBP);
	if (MyAreaInstance)
	{
		MyAreaInstance->OwningGameArea = this;
	}
	

	AActor* Owner = this->GetOwner();
	TArray<AActor*> AttachedActors;
	GetAllAttachedActors(Owner, AttachedActors);

	for (AActor* Actor : AttachedActors)
	{
		if (Actor != nullptr)
		{
			TArray<UGameItem*> GameItemComponents;
			Actor->GetComponents(UGameItem::StaticClass(), GameItemComponents);
			ItemsInArea = GameItemComponents;
		}
			
	}

	Index = FMath::RandRange(0, SpawnPoints.Num());
	NPCIndex = FMath::RandRange(0, NPCSpawnPoints.Num());
	FloorIndex = FMath::RandRange(0, FloorSpawnPoints.Num());
	UArea* AreaInstance = NewObject<UArea>(this, AreaBP);
	AreaInstance->AreaObject = AreaContent;
}

void UGameArea::GetAllAttachedActors(AActor* ParentActor, TArray<AActor*>& OutActors)
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

FVector UGameArea::GetNextSpawnPt(bool NPC, bool Floor)
{
	if (NPC)
	{
		if (NPCSpawnPoints.Num() == 0)
		{
			return GetNextSpawnPt();
		}
		NPCIndex++;
		if (NPCIndex > NPCSpawnPoints.Num() - 1)
		{
			NPCIndex = 0;
		}
		return NPCSpawnPoints[NPCIndex]->GetActorLocation();
	}
	else if (Floor)
	{
		if (FloorSpawnPoints.Num() == 0)
		{
			return GetNextSpawnPt();
		}
		FloorIndex++;
		if(FloorIndex > FloorSpawnPoints.Num() - 1)
		{
			FloorIndex = 0;
		}
		return FloorSpawnPoints[FloorIndex]->GetActorLocation();
	}
	else
	{
		return GetNextSpawnPt();
	}
}

FVector UGameArea::GetNextSpawnPt()
{
	Index++;
	if (Index > SpawnPoints.Num() - 1)
	{
		Index = 0;
	}
	return SpawnPoints[Index]->GetActorLocation();
}

FVector UGameArea::GetRandomSpawnPt(bool NPC)
{
	int32 RandIndex = FMath::RandRange(0, NPCSpawnPoints.Num());
	if (NPC)
	{
		if (NPCSpawnPoints.Num() > 0)
		{
			return NPCSpawnPoints[RandIndex]->GetActorLocation();
		}
		else
		{
			return GetRandomSpawnPt();
		}
	}
	else
	{
		return GetRandomSpawnPt(); 
	}
}

FVector UGameArea::GetRandomSpawnPt()
{
	int32 RandIndex = FMath::RandRange(0, SpawnPoints.Num());
	return SpawnPoints[RandIndex]->GetActorLocation();
}

FString UGameArea::ToString()
{
	UArea* AreaInstance = NewObject<UArea>(this, AreaBP);
	FString AreaName = AreaInstance->Name;

	FString DebugString = TEXT("Area: " + AreaName + "Items");
	for (UGameItem* G : ItemsInArea)
	{
		if (G != nullptr)
		{
			DebugString += G->ToString() + TEXT(" ");
		}
	}
	return DebugString;
}