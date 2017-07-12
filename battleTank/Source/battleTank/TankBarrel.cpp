// Fill out your copyright notice in the Description page of Project Settings.

#include "battleTank.h"
#include "TankBarrel.h"



void UTankBarrel::Elevate(float RelativeElevationSpeed)
{
	//move the barrel the right amout this frame 
	//Given a Max Elevation speed , and the frame time 
	RelativeElevationSpeed = FMath::Clamp<float>(RelativeElevationSpeed, -1.0f, +1.0f);
	float ElevationChange = RelativeElevationSpeed * MaxDegreesPerSecond * GetWorld()->DeltaTimeSeconds;
	float RawNewElevation = RelativeRotation.Pitch + ElevationChange;
	RawNewElevation = FMath::Clamp(RawNewElevation, MinElevationPerSecond, MaxElevationPerSecond);
	SetRelativeRotation(FRotator(RawNewElevation, 0.0f, 0.0f));
}

