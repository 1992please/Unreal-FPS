// Fill out your copyright notice in the Description page of Project Settings.

#include "FPS_C.h"
#include "FPSHUD.h"



AFPSHUD::AFPSHUD()
{
	// Set the crosshair texture
	static ConstructorHelpers::FObjectFinder<UTexture2D>CrosshairTexObj(TEXT("Texture2D'/Game/HUD/Textures/crosshair.crosshair'"));
	CrosshairTex = CrosshairTexObj.Object;
}

void AFPSHUD::DrawHUD()
{
	Super::DrawHUD();
	// Draw very simple crosshair
	// find center of the canvas
	const FVector2D Center(Canvas->ClipX * .5f, Canvas->ClipY * .5f);
	// offset by half the texture's dimensions so that the center of the texture aligns with the center of the Canvas
	const FVector2D CrosshairDrawPosition(Center.X - CrosshairTex->GetSurfaceWidth() * .5f,Center.Y - CrosshairTex->GetSurfaceHeight() * .5f);
	// draw the crosshair
	FCanvasTileItem TileItem(CrosshairDrawPosition, CrosshairTex->Resource, FLinearColor::White);
	TileItem.BlendMode = SE_BLEND_Translucent;
	Canvas->DrawItem(TileItem);
}