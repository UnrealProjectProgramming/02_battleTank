// Fill out your copyright notice in the Description page of Project Settings.

#include "battleTank.h"
#include "TankPlayerController.h"

void ATankPlayerController::BeginPlay()
{
	Super::BeginPlay();
	UE_LOG(LogTemp, Warning, TEXT("ATankplayer Controller Begin Player ! "))

	auto Tank = GetControlledTank();
	if (Tank) 
	{
		UE_LOG(LogTemp, Warning, TEXT("%s "), *GetPawn()->GetName())
	}
	
}

ATank* ATankPlayerController::GetControlledTank() const
{
	return Cast<ATank>(GetPawn());
}
