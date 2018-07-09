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
	RootComponent = PhysicsConstraint;

	Wheel = CreateDefaultSubobject<UStaticMeshComponent>(FName("Wheel"));
	Wheel->SetupAttachment(PhysicsConstraint);
	Wheel->SetSimulatePhysics(true);	


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
	SetupSuspension();
}

// Called every frame
void ASprungWheel::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ASprungWheel::SetupSuspension()
{
	if (!GetAttachParentActor()) { return; }
	UPrimitiveComponent* RootComponent = Cast<UPrimitiveComponent>(GetAttachParentActor()->GetRootComponent());
	if (!RootComponent) { return; }
	PhysicsConstraint->SetConstrainedComponents(RootComponent, NAME_None, Wheel, NAME_None);
}

