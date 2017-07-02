// Fill out your copyright notice in the Description page of Project Settings.

#include "battleTank.h"
#include "TankAIController.h"


void ATankAIController::BeginPlay() 
{
	Super::BeginPlay();

	auto AITank = GetAIControlledTank();
	if (!AITank)
	{
		UE_LOG(LogTemp, Warning, TEXT("Error in ATankAIController"));
	} 
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("AI Controller Possessed To : %s"), *GetPawn()->GetName());
	}
}



ATank* ATankAIController::GetAIControlledTank() const
{
	return Cast<ATank>(GetPawn());
}