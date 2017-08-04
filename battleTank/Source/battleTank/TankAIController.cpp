// Fill out your copyright notice in the Description page of Project Settings.


#include "battleTank.h"
#include "Tank.h"
#include "TankAimingComponent.h"
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
	auto PlayerTank = GetWorld()->GetFirstPlayerController()->GetPawn();
	auto ControlledTank = GetPawn();

	//if (!ensure(PlayerTank && ControlledTank)) { return; }

	auto OurTankLocation = PlayerTank->GetActorLocation();
	MoveToActor(PlayerTank, AcceptanceRadius);

	auto AimingComponent = ControlledTank->FindComponentByClass<UTankAimingComponent>();
	AimingComponent->AimAt(OurTankLocation);
	//TODO fix firign
	//AimingComponent->Fire();
}

