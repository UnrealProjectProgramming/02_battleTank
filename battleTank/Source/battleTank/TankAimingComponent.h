// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Components/ActorComponent.h"
#include "TankAimingComponent.generated.h"


UENUM()
enum class EFiringState : uint8 {Reloading, Aiming, Locked };

//Forward Declaration
class UTankBarrel;
class UTankTurret;
class AProjectile;

//Holds Barrel's Property and Elevate Methods.
UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class BATTLETANK_API UTankAimingComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UTankAimingComponent();

	UFUNCTION(BlueprintCallable, Category = "Setup")
	void Initialise(UTankBarrel* BarrelToSet, UTankTurret* TurretToSet);

public:	
	void AimAt(FVector HitLocation);
	FVector AimDirection;

	UFUNCTION(BlueprintCallable, Category = "Setup")
	void Fire();

	void MoveBarrelTowards(FVector);

	UPROPERTY(BlueprintReadOnly, Category = "State")
	EFiringState FiringState = EFiringState::Reloading;

private:
	virtual void TickComponent(float DeltaTime, enum ELevelTick TickType, FActorComponentTickFunction *ThisTickFunction) override;
	virtual void BeginPlay() override;

	bool IsBarrelMoving() ;

	UTankBarrel* Barrel = nullptr;
	UTankTurret* Turret = nullptr;	

	UPROPERTY(EditAnywhere, Category = "Firing")
	float LaunchSpeed = 100000.0f; // Sensiable Starting Value for 1000m/s

	UPROPERTY(EditAnywhere, Category = "Setup")
	TSubclassOf<AProjectile> ProjectileBlueprint;

	UPROPERTY(EditAnywhere, Category = "Firing")
	float ReloadTimeInSeconds = 3;

	double LastFireTime = 0.0;

};
