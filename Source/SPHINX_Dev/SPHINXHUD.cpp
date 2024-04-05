// Fill out your copyright notice in the Description page of Project Settings.


#include "SPHINXHUD.h"
#include "Engine/Canvas.h"
#include "TextureResource.h"
#include "CanvasItem.h"

void ASPHINXHUD::DrawHUD()
{
    Super::DrawHUD();

    if (CrosshairTexture)
    {
        // Find the center of the Canvas
        const FVector2D Center(Canvas->ClipX * 0.5f, Canvas->ClipY * 0.5f);

        // Offset by half the texture's dimensions so that the center of the texture aligns with the center of the Canvas
        const FVector2D CrosshairDrawPosition((Center.X - (CrosshairTexture->GetSurfaceWidth() * 0.5)),
                                              (Center.Y - (CrosshairTexture->GetSurfaceHeight() * 0.5)));

        // Draw the crosshair at the calculated position
        FCanvasTileItem TileItem(CrosshairDrawPosition, CrosshairTexture->GetResource(), FLinearColor::White);
        TileItem.BlendMode = SE_BLEND_Translucent;
        Canvas->DrawItem(TileItem);
    }
}