// Morgan

#include "BattleTank.h"
#include "SprungWheel.h"
#include "PhysicsEngine/PhysicsConstraintComponent.h"


// Sets default values : Constructor

ASprungWheel::ASprungWheel()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	/// Setting Up Physics Constraints
	MassWheelConstraint = CreateDefaultSubobject<UPhysicsConstraintComponent>(FName("Mass Wheel Constraint"));
	AxleWheelConstraint = CreateDefaultSubobject<UPhysicsConstraintComponent>(FName("Axle Wheel Constraint"));
	RootComponent = MassWheelConstraint;
	

	/// Setting Up wheel
	Wheel = CreateDefaultSubobject<USphereComponent>(FName("Wheel"));
	Wheel->SetSimulatePhysics(true);	

	///Setting Up Axel
	Axle = CreateDefaultSubobject<USphereComponent>(FName("Axel"));
	Axle->SetSimulatePhysics(true);
	Axle->SetupAttachment(MassWheelConstraint);
	Wheel->SetupAttachment(Axle);
	AxleWheelConstraint->SetupAttachment(Axle);



	///Setting up properties of physics constraints
	MassWheelConstraint->SetLinearXLimit(ELinearConstraintMotion::LCM_Locked, 0.0f);
	MassWheelConstraint->SetLinearYLimit(ELinearConstraintMotion::LCM_Locked, 0.0f);
	MassWheelConstraint->SetLinearZLimit(ELinearConstraintMotion::LCM_Limited, 200.0f);

	MassWheelConstraint->SetAngularSwing1Limit(EAngularConstraintMotion::ACM_Locked, 0.0f);
	MassWheelConstraint->SetAngularSwing2Limit(EAngularConstraintMotion::ACM_Locked, 0.0f);
	MassWheelConstraint->SetAngularTwistLimit(EAngularConstraintMotion::ACM_Locked, 0.0f);

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
	MassWheelConstraint->SetConstrainedComponents(RootComponent, NAME_None, Axle, NAME_None);
	AxleWheelConstraint->SetConstrainedComponents(Axle, NAME_None, Wheel, NAME_None);
}

