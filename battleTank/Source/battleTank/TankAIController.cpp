// Fill out your copyright notice in the Description page of Project Settings.

#include "battleTank.h"
#include "TankAIController.h"


void ATankAIController::BeginPlay() 
{
	Super::BeginPlay();

	auto AITank = GetAIControlledTank();
	auto AIFindingPlayer = GetPlayerTank();

	if (!AIFindingPlayer)
	{
		UE_LOG(LogTemp, Warning, TEXT("Error in ATankAIController"));
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("AI Found The :  %s"), *(AIFindingPlayer->GetName()));
	}

}



ATank* ATankAIController::GetAIControlledTank() const
{
	return Cast<ATank>(GetPawn());
}

ATank* ATankAIController::GetPlayerTank() const
{
	auto PlayerTank = GetWorld()->GetFirstPlayerController()->GetPawn();
	return Cast<ATank>(PlayerTank);
}