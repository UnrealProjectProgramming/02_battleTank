// Fill out your copyright notice in the Description page of Project Settings.

#include "battleTank.h"
#include "TankPlayerController.h"

void ATankPlayerController::BeginPlay()
{
	Super::BeginPlay();

	auto Tank = GetPossessedControlledTank();
	if (!Tank) 
	{
		UE_LOG(LogTemp, Warning, TEXT("No Tank Found"))
	}
}

void ATankPlayerController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	AimTowardsCrosshair();
	UE_LOG(LogTemp, Warning, TEXT("Tick reporting For Duty!"))

}

ATank* ATankPlayerController::GetPossessedControlledTank() const
{
	return Cast<ATank>(GetPawn());
}

void ATankPlayerController::AimTowardsCrosshair()
{
	if (!GetPossessedControlledTank()) { return; }
	
	//GetWorld Location if linetrace crosshair
	// if it hits the landscape 	
		//tell controlledtank to aim at this point
}