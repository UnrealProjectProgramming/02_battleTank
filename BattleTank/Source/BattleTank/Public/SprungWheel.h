// Morgan

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

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

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
};
