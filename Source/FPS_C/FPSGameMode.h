// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/GameMode.h"
#include "FPSGameMode.generated.h"

/**
 * 
 */
UCLASS()
class FPS_C_API AFPSGameMode : public AGameMode
{
	GENERATED_BODY()
public:

	//virtual void BeginPlay() override;
	AFPSGameMode();

	virtual void StartPlay() override;
	
};
