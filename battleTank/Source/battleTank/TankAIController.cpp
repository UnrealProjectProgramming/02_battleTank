// Fill out your copyright notice in the Description page of Project Settings.


#include "battleTank.h"
#include "Tank.h"
#include "TankAIController.h"


void ATankAIController::BeginPlay() 
{
	Super::BeginPlay();
}

void ATankAIController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	AimAtPlayerTank();
}

void ATankAIController::AimAtPlayerTank()
{
	auto PlayerTank = Cast<ATank>(GetWorld()->GetFirstPlayerController()->GetPawn());
	if(PlayerTank)
	{
		auto GetAIControlledTank = Cast<ATank>(GetPawn());
		auto OurTankLocation = PlayerTank->GetActorLocation();

		MoveToActor(PlayerTank, AcceptanceRadius);

		GetAIControlledTank->AimAt(OurTankLocation);
		GetAIControlledTank->Fire(); 
	}
	else { return; }
}

