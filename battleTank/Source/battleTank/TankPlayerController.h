// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Tank.h"
#include "GameFramework/PlayerController.h"
#include "TankPlayerController.generated.h"// Must be Last one in the include

/**
 * 
 */
UCLASS()
class BATTLETANK_API ATankPlayerController : public APlayerController
{
	GENERATED_BODY()

public:
	
	ATank* GetPossessedControlledTank() const;
		
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;

private:
	//Moving the Tank barrel Towards what the Crosshair interesects in the World
	void AimTowardsCrosshair();
};
