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

// This is the actor damage handler.   
float ATank::TakeDamage(float DamageAmount, struct FDamageEvent const& DamageEvent, class AController* EventInstigator, class AActor* DamageCauser)
{
	int32 DamagePoints = FPlatformMath::RoundToInt(DamageAmount);
	int32 DamageToApply = FMath::Clamp(DamagePoints, 0, CurrentHealth);

	CurrentHealth -= DamageToApply;
	if (CurrentHealth <= 0)
	{
		UE_LOG(LogTemp, Warning, TEXT("Tank Died"))
	}
	return DamageToApply;
}

float ATank::GetHealthPercent() const
{
	return (float)CurrentHealth / (float)StartingHealth;
}
