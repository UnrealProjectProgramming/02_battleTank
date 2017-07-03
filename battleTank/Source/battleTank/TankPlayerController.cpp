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
}

ATank* ATankPlayerController::GetPossessedControlledTank() const
{
	return Cast<ATank>(GetPawn());
}

void ATankPlayerController::AimTowardsCrosshair()
{
	if (!GetPossessedControlledTank()) { return; }
	
	FVector HitLocation;
	if (GetSightRayHitLocation(HitLocation)) // Is going to ray trace !
	{
		UE_LOG(LogTemp, Warning, TEXT("Look Direction : %s"), *HitLocation.ToString());
		//TODO , tell controlledtank to aim at this point
	}

}

//GetWorld Location of linetrace crosshair
bool ATankPlayerController::GetSightRayHitLocation(FVector& HitLocation) const
{
	int32 ViewportSizeX, ViewportSizeY;
	GetViewportSize(ViewportSizeX, ViewportSizeY);
	FVector2D ScreenLocation = FVector2D(ViewportSizeX * CrossHairXLocation, ViewportSizeY * CrossHairYLocation);
	FVector LookDirection;
	//"De-project" The screen postion of the crosshair to a world direction
	if (GetLookDirection(ScreenLocation, LookDirection))
	{
		UE_LOG(LogTemp, Warning, TEXT("Look Direction : %s"), *LookDirection.ToString());
	}

	//line-trace along this LookDirection , and see what we hit "up to a max Range"
	return true;
}

bool ATankPlayerController::GetLookDirection(FVector2D ScreenLocation, FVector& LookDirection) const
{
	//Find crosshair position 
	FVector CameraWorldLocation;//To Be Discarted but must be passed in 
	return DeprojectScreenPositionToWorld(ScreenLocation.X, ScreenLocation.Y, CameraWorldLocation, LookDirection);	
}
