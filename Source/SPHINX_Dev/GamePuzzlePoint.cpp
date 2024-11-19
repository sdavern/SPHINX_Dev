// Fill out your copyright notice in the Description page of Project Settings.


#include "GamePuzzlePoint.h"

// Sets default values
AGamePuzzlePoint::AGamePuzzlePoint()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//PuzzlePointPtr = this->PPToPtr();

	/* if (PuzzlePointBP)
	{
		UPuzzlePoint* MyPPInstance = NewObject<UPuzzlePoint>(this, PuzzlePointBP);
		if (MyPPInstance)
		{
			MyPPInstance->OwningGamePP = this;
		}
	} */

}

// Called when the game starts or when spawned
void AGamePuzzlePoint::BeginPlay()
{
	Super::BeginPlay();

	PointTransform = this->GetActorTransform();
		
}

// Called every frame
void AGamePuzzlePoint::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (IsActive && !InitSpawned)
	{
		SpawnInit();
		InitSpawned = true;
		UE_LOG(LogTemp, Display, TEXT("InitNPC spawned for GPP: %s"), *Name);
	}

	/* if (PuzzlePointPtr)
	{
		UE_LOG(LogTemp, Display, TEXT("TICK: PPPtr: %s has %d current rules"), *Name, PuzzlePointPtr->CurrentPuzzleRules.Num());
	} */

	/* if (IsActive && InitSpawned && !InitInitalised)
	{
		InitialiseInitNPC();
	} */
}

UPuzzlePoint* AGamePuzzlePoint::PPToPtr()
{
	if (PuzzlePointBP)
	{
		UPuzzlePoint* Ptr = NewObject<UPuzzlePoint>(this, PuzzlePointBP);
		if (Ptr)
		{
			Ptr->ToPuzzleGoalPtrs();
			UE_LOG(LogTemp, Error, TEXT("Ptr CREATED. goals is %d"), Ptr->PuzzleGoalsPtrs.Num());
			return Ptr;
		}
		
 	}
	return nullptr;
}

void AGamePuzzlePoint::SpawnInit()
{
	//need to wait until spawn is out of viewport
	if (GetWorld())
	{
		if (PuzzlePointPtr)
		{
			if (PuzzlePointPtr->IsNPC == true)
			{
				FActorSpawnParameters SpawnParams;
    			SpawnParams.Owner = this;
    			SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
				int32 i = FMath::RandRange(0, InitNPCs.Num() - 1);
				AInitNPC* SInitNPC = GetWorld()->SpawnActor<AInitNPC>(InitNPCs[i], PointTransform, SpawnParams);
				InitNPC = SInitNPC;
				InitNPC->OwningPP = PuzzlePointPtr;
				InitNPC->OwningPP->GoalDialogue = PuzzlePointPtr->GoalDialogue;
				UE_LOG(LogTemp, Display, TEXT("InitNPC spawned."));
				InitSpawned = true;
				AssignInitNPCProperties(PuzzlePointPtr);
			}

		else if (PuzzlePointPtr->IsText == true)
		{
			FActorSpawnParameters SpawnParams;
    		SpawnParams.Owner = this;
    		SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
			int32 i = FMath::RandRange(0, InitTexts.Num() - 1);
			InitText = GetWorld()->SpawnActor<AInitText>(InitTexts[i], PointTransform, SpawnParams);
			UE_LOG(LogTemp, Display, TEXT("InitText spawned"));
			InitSpawned = true;
		}

		else if (PuzzlePointPtr->IsObject == true)
		{
			FActorSpawnParameters SpawnParams;
    		SpawnParams.Owner = this;
    		SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
			int32 i = FMath::RandRange(0, InitObjects.Num() - 1);
			InitObject = GetWorld()->SpawnActor<AInitObject>(InitObjects[i], PointTransform, SpawnParams);
			UE_LOG(LogTemp, Display, TEXT("InitObject spawned."));
			InitSpawned = true;
		}
		}
		
	}
}

void AGamePuzzlePoint::DespawnInit()
{
	if (PuzzlePointPtr->IsNPC == true)
	{
		if (InitNPC)
		{
			InitNPC->Destroy();
			InitInitalised = false;
		}
	}
	else if (PuzzlePointPtr->IsText == true)
	{
		if (InitText)
		{
			InitText->Destroy();
		}
	}
	else if (PuzzlePointPtr->IsObject == true)
	{
		if (InitObject)
		{
			InitObject->Destroy();
		}
	}
}

void AGamePuzzlePoint::AssignInitNPCProperties(UPuzzlePoint* PP)
{
	UE_LOG(LogTemp, Display, TEXT("AssignInitNPCProperties called"));
	if (PP && InitNPC && InitNPC->GameItem)
	{
		UE_LOG(LogTemp, Display, TEXT("InitNPC: PP->CurrentPuzzleRules has %d rules"), PP->CurrentPuzzleRules.Num());
		for (URule* Rule : PP->CurrentPuzzleRules)
		{
			if (Rule)
			{
				UE_LOG(LogTemp, Display, TEXT("InitNPC: Rule has %d inputs"), Rule->Inputs.Num());
				for (UTerm* Input : Rule->Inputs)
				{
					if (Input)
					{
						if (Input->Name == TEXT("NPC"))
						{
							UE_LOG(LogTemp, Display, TEXT("InitNPC: Input has %d properties"), Input->Properties.Num());
							for (UItemProperty* Prop : Input->Properties)
							{
								if (Prop)
								{
									InitNPC->GameItem->Properties.Add(Prop);
									UE_LOG(LogTemp, Warning, TEXT("Prop %s %s added to InitNPC %s GameItem"), *Prop->Name, *Prop->Value, *Name);
									if (InitNPC->GameItem->DbItem)
									{
										InitNPC->GameItem->DbItem->Properties.Add(Prop);
										UE_LOG(LogTemp, Display, TEXT("Prop %s %s added to GameItem->DbItem %s in AssignInitNPC"), *Prop->Name, *Prop->Value, *Name);
									}
									else
									{
										UE_LOG(LogTemp, Display, TEXT("DbItem in AssignInitNPC is null"));
									}
									
								}
								else
								{
									UE_LOG(LogTemp, Display, TEXT("Prop for InitNPC is null"));
								}
							}
						}
						else 
						{
							UE_LOG(LogTemp, Display, TEXT("Prop != NPC for InitNPC"));
						}
					}
					else
					{
						UE_LOG(LogTemp, Display, TEXT("Input for InitNPC is null"));
					}
				}
			}
			else
			{
				UE_LOG(LogTemp, Display, TEXT("Rule for InitNPC is null"));
			}
		}
		
	}
	else
	{
		UE_LOG(LogTemp, Display, TEXT("AssignInitNPCProperties failed for PP: %s"), *PP->Name);
		if (!InitNPC->GameItem)
		{
			UE_LOG(LogTemp, Display, TEXT("InitNPC does not have valid GameItem"));
		}
		if (!PP)
		{
			UE_LOG(LogTemp, Display, TEXT("Assign: PP is null"));
		}
		if (!InitNPC)
		{
			UE_LOG(LogTemp, Display, TEXT("Assign: InitNPC is null"));
		}
	}

}

void AGamePuzzlePoint::SetupInitNPCGameItem()
{
	if (InitNPC)
	{
		if (InitNPC->GameItem)
		{
			InitNPC->GameItem->Name = InitNPC->Name;		
		}
		else
		{
			UE_LOG(LogTemp, Display, TEXT("InitNPC GameItem is null"));
		}
	}
}

void AGamePuzzlePoint::InitialiseInitNPC()
{
	//SetupInitNPCGameItem();
	AssignInitNPCProperties(PuzzlePointPtr);
	InitInitalised = true;

}