/// Fill out your copyright notice in the Description page of Project Settings.


#include "../WallJumpActor/WallJumpActor.h"
#include "Kismet/GameplayStatics.h"
#include "GameFramework/Character.h"
#include "GameFramework/CharacterMovementComponent.h"

// Sets default values
AWallJumpActor::AWallJumpActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;


	bHolding = false;
	bGravity = false;

	// add Cylinder to root
	MyMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("VisualRepresentation"));
	MyMesh->SetSimulatePhysics(false);
	MyMesh->SetupAttachment(RootComponent);

	static ConstructorHelpers::FObjectFinder<UStaticMesh> CubeAsset(TEXT("/Game/StarterContent/Cube"));

	if (CubeAsset.Succeeded())
	{
		MyMesh->SetStaticMesh(CubeAsset.Object);
		MyMesh->SetRelativeLocation(FVector(0.0f, 0.0f, 0.0f));
		MyMesh->SetWorldScale3D(FVector(1.f));
	}
	MyMesh->OnComponentHit.AddDynamic(this, &AWallJumpActor::OnCompHit);

}

// Called when the game starts or when spawned
void AWallJumpActor::BeginPlay()
{
	Super::BeginPlay();
	
	MyCharacter = UGameplayStatics::GetPlayerCharacter(this, 0);
	PlayerCapsule = MyCharacter->FindComponentByClass<UCapsuleComponent>();
}

// Called every frame
void AWallJumpActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AWallJumpActor::WallJump()
{

	 MyMesh->SetEnableGravity(bGravity);
	 MyMesh->SetSimulatePhysics(false);
	if ((MyCharacter->JumpCurrentCount <= MyCharacter->JumpMaxCount) && (MyCharacter->JumpCurrentCount > 0) /*&&(TravelDirection == 0) && AxisMoving*/) //TODO
		{
		
		//if (IsRootComponentCollisionRegistered())
		{
			
			float TravelDirection = GetVelocity().Y;
			// Set the rotation so that the character faces his direction of travel.
			if (MyCharacter->Controller != nullptr)
			{
				if (TravelDirection < 0.0f)
				{
					FYAxisScale = -FYAxisScale;
				}
				else if (TravelDirection > 0.0f)
				{
					FYAxisScale = abs(FYAxisScale);
				}
			}
			MyCharacter->GetCharacterMovement()->AddImpulse(
				FVector(0,(FYAxisScale),FZAxisScale)
				*FForce/**MyCharacter->GetMesh()->GetMass()*/);
			MyCharacter->Controller->SetControlRotation(FRotator(0,(MyCharacter->GetControlRotation().Yaw-180),0));
			MyCharacter->JumpCurrentCount++;
		}
		}

}

void AWallJumpActor::OnCompHit(UPrimitiveComponent* HitComp, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	if ((OtherActor != NULL) && (OtherActor != this) && (OtherComp != NULL))
	{
		//if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT("I Hit: %s"), *OtherActor->GetName()));
		WallJump();
	}
}