// Fill out your copyright notice in the Description page of Project Settings.

#include "FPS_C.h"
#include "FPSGameMode.h"

AFPSGameMode::AFPSGameMode()
{
	//DefaultPawnClass = AFPSCharacter::StaticClass();
	// set the pawn class to out Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn>PlayerPawnObject(TEXT("/Game/Blueprints/BP_FPSCharacter.BP_FPSCharacter_C"));
	if (PlayerPawnObject.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnObject.Class;
	}
}

void AFPSGameMode::StartPlay()
{
	Super::StartPlay();
	StartMatch();
	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, TEXT("Hello World"));
	}
}