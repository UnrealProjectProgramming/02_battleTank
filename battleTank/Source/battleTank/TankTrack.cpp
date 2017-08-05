// Fill out your copyright notice in the Description page of Project Settings.

#include "battleTank.h"
#include "TankTrack.h"


UTankTrack::UTankTrack()
{
	PrimaryComponentTick.bCanEverTick = true;
}

void UTankTrack::TickComponent(float DeltaTime, enum ELevelTick TickType, FActorComponentTickFunction *ThisTickFunction)
{
	//Calculate SlippageSpeed
	auto SlippageSpeed = FVector::DotProduct(GetComponentVelocity(), GetRightVector()); //Doesn't matter in which order we do DotProduct.
	//Work-out the requierd acceleration this frame to correct 
	auto CorrectionAcceleration = -SlippageSpeed / DeltaTime * GetRightVector();
	//Calculate and apply sideway force (F = m . a)
	auto TankRoot = Cast<UStaticMeshComponent>(GetOwner()->GetRootComponent());
	auto CorrectionForce = TankRoot->GetMass() * CorrectionAcceleration / 2; //Because we have two tracks! 
	//Applying Force to the tracks
	TankRoot->AddForce(CorrectionForce);
	
}


void UTankTrack::SetThrottle(float Throttle)
{
	auto ForceApplied = GetForwardVector() * Throttle * TrackMaxDrivingForce;
	auto ForceLocation = GetComponentLocation();
	auto TankRoot = Cast<UPrimitiveComponent>(GetOwner()->GetRootComponent());
	TankRoot->AddForceAtLocation(ForceApplied, ForceLocation);
}
