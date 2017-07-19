// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Pawn.h"
#include "Tank.generated.h"


//Forward Declaration
class UTankBarrel;
class UTankTurret;
class AProjectile;
class UTankMovementComponent;
class UTankAimingComponent;

UCLASS()
class BATTLETANK_API ATank : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ATank();
	virtual void BeginPlay() override;

	void AimAt(FVector HitLocation);


	UFUNCTION(BlueprintCallable, Category = "Setup")
	void Fire();

	UTankBarrel* Barrel = nullptr;


protected:


	UPROPERTY(BlueprintReadOnly)
	UTankAimingComponent* TankAimingComponent = nullptr;
	
	UPROPERTY(BlueprintReadOnly)
	UTankMovementComponent* TankMovementComponent = nullptr;

private:
	UPROPERTY(EditAnywhere, Category = "Firing")
	float LaunchSpeed = 100000.0f; // Sensiable Starting Value for 1000m/s
	
	UPROPERTY(EditAnywhere, Category = "Setup")
	TSubclassOf<AProjectile> ProjectileBlueprint;
	
	UPROPERTY(EditAnywhere, Category = "Firing")
	float ReloadTimeInSeconds = 3;

	double LastFireTime = 0.0;
};
