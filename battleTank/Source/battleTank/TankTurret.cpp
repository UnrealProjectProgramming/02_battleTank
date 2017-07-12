// Fill out your copyright notice in the Description page of Project Settings.

#include "battleTank.h"
#include "TankTurret.h"




void UTankTurret::Rotate(float RelativeRotationSpeed)
{
	//move the barrel the right amout this frame 
	//Given a Max Elevation speed , and the frame time 
	RelativeRotationSpeed = FMath::Clamp<float>(RelativeRotationSpeed, -1.0f, +1.0f);
	float RotatioNChange = RelativeRotationSpeed * MaxDegreesPerSecond * GetWorld()->DeltaTimeSeconds;
	float Rotation = RelativeRotation.Yaw + RotatioNChange;
	SetRelativeRotation(FRotator(0.0f, Rotation, 0.0f));
}
