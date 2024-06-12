// Fill out your copyright notice in the Description page of Project Settings.


#include "SpawnPoint.h"
#include "Engine/World.h"
#include "GameFramework/Actor.h"
#include "Kismet/KismetSystemLibrary.h"
#include "EngineUtils.h"

// Sets default values
ASpawnPoint::ASpawnPoint()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
    USphereComponent* SphereComponent = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComponent"));
    SphereComponent->SetupAttachment(RootComponent);
    SphereComponent->SetSphereRadius(SphereRadius);  
    SphereComponent->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
    SphereComponent->SetCollisionObjectType(ECollisionChannel::ECC_WorldDynamic);
    SphereComponent->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Overlap);

}

// Called when the game starts or when spawned
void ASpawnPoint::BeginPlay()
{
	Super::BeginPlay();
	GetLocation();
	ToSpawnPropPtrs();
    CheckForItem();
}

// Called every frame
void ASpawnPoint::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
    CheckForItem();

}

void ASpawnPoint::GetLocation()
{
	Location = GetActorLocation();
}

void ASpawnPoint::ToSpawnPropPtrs()
{
    PropPtrs.Empty();
	for (TSubclassOf<UItemProperty> Prop : SpawnableProperties)
    {
        if (Prop)
        {
            UItemProperty* PropPtr = NewObject<UItemProperty>(this, Prop);
            if (PropPtr)
            {
                PropPtrs.Add(PropPtr);
                UE_LOG(LogTemp, Error, TEXT("PropPtr %s %s added"), *PropPtr->Name, *PropPtr->Value);
            }
            
        }
    }
}

void ASpawnPoint::CheckForItem()
{
    FVector SphereLocation = GetActorLocation();
    
    TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes;
    ObjectTypes.Add(UEngineTypes::ConvertToObjectType(ECollisionChannel::ECC_WorldDynamic));
    
    TArray<AActor*> OverlappingActors;
    UKismetSystemLibrary::SphereOverlapActors(
        this,
        SphereLocation,
        SphereRadius,
        ObjectTypes,
        AActor::StaticClass(), 
        TArray<AActor*>(),
        OverlappingActors
    );

    for (AActor* Actor : OverlappingActors)
    {
        if (Actor && Actor->FindComponentByClass<UGameItem>())
        {
            HasSpawnedItem = true;
        }
        else
        {
            HasSpawnedItem = false;
        }
        
    }





}