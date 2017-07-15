// Fill out your copyright notice in the Description page of Project Settings.

#include "battleTank.h"
#include "TankTrack.h"



void UTankTrack::SetThrottle(float Throttle)
{
	UE_LOG(LogTemp, Warning, TEXT("%s Throttle at : %f"), *GetName(), Throttle);
}
