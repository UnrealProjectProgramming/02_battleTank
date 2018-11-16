# BattleTank Project  "Course"
#### Engine Version: 4.21.0

## What I Did 
  * Tank Movement With Xbox one controller support 
  * Suspension system for tank's Track using ue4 physics with C++
  * Build for xbox one (In Progress)
  * Simple A.I using C++ to drive enemy tanks.
  
## Videos and Pictures.

### Video that shows the suspension if you can notice the red spheres in the video as shown.
### The suspension was made to reduce the collisions with the terrain that made the tank movement very buggy and sometimes tank flies :D 
[Suspension Video](https://youtu.be/-Lkt91LC2NI)

### As you can see that is how the Sprung Wheel Suspension work.

![Alt Text](https://i.imgur.com/3fZJcTw.png)

![Alt Text](https://media.giphy.com/media/kFyEs3JtPFbvW4pJs7/giphy.gif)

![Alt Text](https://i.imgur.com/wwsNk4E.jpg)


```cpp
void ASprungWheel::BeginPlay()
{
	Super::BeginPlay();

	Wheel->SetNotifyRigidBodyCollision(true);
	// Regestring on hit event
	Wheel->OnComponentHit.AddDynamic(this, &ASprungWheel::OnHit);

	SetupSuspension();
	
}

// Called every frame
void ASprungWheel::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (GetWorld()->TickGroup == TG_PostPhysics)
	{
		TotalForceMagnitudeThisFrame = 0.0f;
	}


}

void ASprungWheel::SetupSuspension()
{
	if (!GetAttachParentActor()) { return; }
	UPrimitiveComponent* RootComponent = Cast<UPrimitiveComponent>(GetAttachParentActor()->GetRootComponent());
	if (!RootComponent) { return; }
	MassWheelConstraint->SetConstrainedComponents(RootComponent, NAME_None, Axle, NAME_None);
	AxleWheelConstraint->SetConstrainedComponents(Axle, NAME_None, Wheel, NAME_None);
}


void ASprungWheel::AddDrivingForce(float ForceMagnitude)
{
	TotalForceMagnitudeThisFrame += ForceMagnitude;
}

void ASprungWheel::OnHit(UPrimitiveComponent * HitComponent, AActor * OtherActor, 
						 UPrimitiveComponent * OtherComp, FVector NormalImpulse, const FHitResult & Hit)
{
	ApplyForce();
}

void ASprungWheel::ApplyForce()
{
	Wheel->AddForce(Axle->GetForwardVector() * TotalForceMagnitudeThisFrame);
}
```



## Here are some pics of the controls along with the movement behaviour (TankMovementComponent) in C++

#### In this pic are the controls mapping 
![Alt Text](https://i.imgur.com/Tu6LXGK.png)

#### Binding Actions using blueprints
![Alt Text](https://i.imgur.com/f3qQu4s.png)

#### Driving Logic (Some pics) 
![Alt Text](https://i.imgur.com/Tmvvt49.png)

![Alt Text](https://i.imgur.com/H97rFqg.png)

## Enemy Tank AI 
### This is a simple AI using C++

```cpp
// Mazen Morgan

#include "BattleTank.h"
#include "TankAimingComponent.h"
#include "TankAIController.h"
#include "Tank.h" // So we can impliment OnDeath

// Depends on movement component via pathfinding system

void ATankAIController::BeginPlay()
{
	Super::BeginPlay();
}

void ATankAIController::SetPawn(APawn* InPawn)
{
	Super::SetPawn(InPawn);
	if (InPawn)
	{
		auto PossessedTank = Cast<ATank>(InPawn);
		if (!PossessedTank) { return; }

		// Subscribe our local method to the tank's death event
		PossessedTank->OnDeath.AddUniqueDynamic(this, &ATankAIController::OnPossedTankDeath);
	}
}

void ATankAIController::OnPossedTankDeath()
{
	if (!ensure(GetPawn())) { return; } // TODO remove if ok
	GetPawn()->DetachFromControllerPendingDestroy();
}

// Called every frame
void ATankAIController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	auto PlayerTank = GetWorld()->GetFirstPlayerController()->GetPawn();
	auto ControlledTank = GetPawn();

	if (!PlayerTank && !ControlledTank) { return; }
	
	// Move towards the player
	MoveToActor(PlayerTank, AcceptanceRadius); // TODO check radius is in cm

	// Aim towards the player
	auto AimingComponent = ControlledTank->FindComponentByClass<UTankAimingComponent>();
	AimingComponent->AimAt(PlayerTank->GetActorLocation());

	if (AimingComponent->GetFiringState() == EFiringState::Locked)
	{
		AimingComponent->Fire(); // TODO limit firing rate
	}
}

```
## You can check the rest of the codes in the commits, Feel free to download and use this project for any purpose ! Have a nice day 
