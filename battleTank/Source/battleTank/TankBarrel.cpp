// Fill out your copyright notice in the Description page of Project Settings.

#include "battleTank.h"
#include "TankBarrel.h"



void UTankBarrel::Elevate(float RelativeSpeed)
{
	//move the barrel the right amout this frame 
	//Given a Max Elevation speed , and the frame time 
	float Time = GetWorld()->GetTimeSeconds();
	UE_LOG(LogTemp, Warning, TEXT("%f : Elevating  %f"), Time, RelativeSpeed);
}

