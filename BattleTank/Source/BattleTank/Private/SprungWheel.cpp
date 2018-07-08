// Morgan

#include "BattleTank.h"
#include "SprungWheel.h"
#include "PhysicsEngine/PhysicsConstraintComponent.h"


// Sets default values : Constructor

ASprungWheel::ASprungWheel()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	PhysicsConstraint = CreateDefaultSubobject<UPhysicsConstraintComponent>(FName("Physics Constraint"));
	Wheel = CreateDefaultSubobject<UStaticMeshComponent>(FName("Wheel"));
	Mass = CreateDefaultSubobject<UStaticMeshComponent>(FName("Mass"));

	RootComponent = PhysicsConstraint;
	Wheel->SetupAttachment(PhysicsConstraint);
	Mass->SetupAttachment(PhysicsConstraint);

	Wheel->SetSimulatePhysics(true);	
	Mass->SetSimulatePhysics(true);

	// TODO fix and read https://answers.unrealengine.com/questions/395040/c-added-component-have-missing-transform-tool.html
	PhysicsConstraint->ComponentName1.ComponentName = FName(*(Mass->GetName()));
	PhysicsConstraint->ComponentName2.ComponentName = FName(*(Wheel->GetName()));

	PhysicsConstraint->SetLinearXLimit(ELinearConstraintMotion::LCM_Locked, 0.0f);
	PhysicsConstraint->SetLinearYLimit(ELinearConstraintMotion::LCM_Locked, 0.0f);
	PhysicsConstraint->SetLinearZLimit(ELinearConstraintMotion::LCM_Limited, 200.0f);

	PhysicsConstraint->SetAngularSwing1Limit(EAngularConstraintMotion::ACM_Locked, 0.0f);
	PhysicsConstraint->SetAngularSwing2Limit(EAngularConstraintMotion::ACM_Locked, 0.0f);
	PhysicsConstraint->SetAngularTwistLimit(EAngularConstraintMotion::ACM_Locked, 0.0f);

}

// Called when the game starts or when spawned
void ASprungWheel::BeginPlay()
{
	Super::BeginPlay();
	
	if (GetAttachParentActor())
	{
		UE_LOG(LogTemp, Warning, TEXT("NOT NULL"));
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("NULL"));
	}
}

// Called every frame
void ASprungWheel::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

