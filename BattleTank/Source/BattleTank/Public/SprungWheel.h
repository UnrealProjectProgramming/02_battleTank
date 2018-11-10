// Mazen Morgan

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SprungWheel.generated.h"

UCLASS()
class BATTLETANK_API ASprungWheel : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASprungWheel();
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void AddDrivingForce(float ForceMagnitude);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;



protected:

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Custom Physics Constraint")
	UPhysicsConstraintComponent* MassWheelConstraint = nullptr;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Custom Physics Constraint")
	UPhysicsConstraintComponent* AxleWheelConstraint = nullptr;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Custom Physics Constraint")
	USphereComponent* Wheel = nullptr;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Custom Physics Constraint")
	USphereComponent* Axle = nullptr;


private:
	void SetupSuspension();
	void ApplyForce();

	UFUNCTION() // This is a dynamic Delegate so we must put UFUNCTION SO IT CAN WORKK !!!!
	void OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);

	float TotalForceMagnitudeThisFrame = 0.0f;
};
