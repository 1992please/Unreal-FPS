// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/HUD.h"
#include "FPSHUD.generated.h"

/**
 * 
 */
UCLASS()
class FPS_C_API AFPSHUD : public AHUD
{
	GENERATED_BODY()
	
public:

	AFPSHUD();
	
	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;
private:
	/** Crosshair asset pointer */
	UTexture2D* CrosshairTex;
};
