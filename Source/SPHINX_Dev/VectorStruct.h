// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "VectorStruct.generated.h"

USTRUCT(BlueprintType)
struct FVector7D
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Tension")
    TArray<double> Tension;

    FVector7D()
    {
        Tension.SetNumZeroed(7);
    }

	//Sum
	FVector7D operator+(const FVector7D& Other) const
	{
		FVector7D Sum;
		for (int i = 0; i < 7; i++)
		{
			Sum.Tension[i] = Other.Tension[i] + this->Tension[i];
		}

		return Sum;
	}

	//Magnitude
	double Size() const
	{
		double Size;
		for (int i = 0; i < 7; i++)
		{
			Size += Tension[i] * Tension[i];
		}
		return FMath::Sqrt(Size);
	}

	//Direction
	FVector7D Direction() const
	{
		double Mag = Size();
		FVector7D Direction;
		if (Mag > SMALL_NUMBER)
		{
			for (int i = 0; i < 7; i++)
			{
				Direction.Tension[i] = Tension[i] / Mag;
			}
		}
		return Direction;

	}

	//Cosine Similarity
	static double CosineSim(const FVector7D& A, const FVector7D& B)
	{
		double DotProduct = 0.0f;
		for (int i = 0; i < 7; i++)
		{
			DotProduct += A.Tension[i] * B.Tension[i];
		}

		double MagA = A.Size();
		double MagB = B.Size();
		if (MagA > SMALL_NUMBER && MagB > SMALL_NUMBER)
		{
			DotProduct = DotProduct / (MagA * MagB);
		}

		return DotProduct;
	}
};
