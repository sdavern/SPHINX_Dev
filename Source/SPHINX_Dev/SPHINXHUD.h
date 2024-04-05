// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "SPHINXHUD.generated.h"

/**
 * 
 */
UCLASS()
class SPHINX_DEV_API ASPHINXHUD : public AHUD
{
	GENERATED_BODY()
	

public: 

	virtual void DrawHUD() override;

protected:

	UPROPERTY(EditDefaultsOnly)
    UTexture2D* CrosshairTexture;

};
