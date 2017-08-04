// Fill out your copyright notice in the Description page of Project Settings.

#include "battleTank.h"
#include "TankBarrel.h"
#include "Projectile.h"
#include "Tank.h"


// Sets default values
ATank::ATank()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	//UE_LOG(LogTemp, Warning, TEXT("%s DONKEY: c++ constructor"), *GetName())
}

void ATank::BeginPlay()
{
	Super::BeginPlay();
}
