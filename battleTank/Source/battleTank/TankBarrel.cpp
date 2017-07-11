// Fill out your copyright notice in the Description page of Project Settings.

#include "battleTank.h"
#include "TankBarrel.h"



void UTankBarrel::Elevate(float RelativeSpeed)
{
	//move the barrel the right amout this frame 
	//Given a Max Elevation speed , and the frame time 
	RelativeSpeed = FMath::Clamp<float>(RelativeSpeed, -1.0f, +1.0f);
	float ElevationChange = RelativeSpeed * MaxDegreesPerSecond * GetWorld()->DeltaTimeSeconds;
	float RawNewElevation = RelativeRotation.Pitch + ElevationChange;
	RawNewElevation = FMath::Clamp(RawNewElevation, MinElevationPerSecond, MaxElevationPerSecond);
	SetRelativeRotation(FRotator(RawNewElevation, 0.0f, 0.0f));
}

