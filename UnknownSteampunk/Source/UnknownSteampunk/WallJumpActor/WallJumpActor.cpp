/// Fill out your copyright notice in the Description page of Project Settings.


#include "../WallJumpActor/WallJumpActor.h"

#include <ThirdParty/openexr/Deploy/OpenEXR-2.3.0/OpenEXR/include/ImathFun.h>

#include "Kismet/GameplayStatics.h"
#include "GameFramework/Character.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "UnknownSteampunk/UnknownSteampunkCharacter.h"

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

	MyCharacter = Cast<AUnknownSteampunkCharacter>(UGameplayStatics::GetPlayerCharacter(this, 0));
	// PlayerCapsule = MyCharacter->FindComponentByClass<UCapsuleComponent>();
}

// Called every frame
void AWallJumpActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

/**
 * 
 */
void AWallJumpActor::WallJump()
{
	MyMesh->SetEnableGravity(bGravity);
	MyMesh->SetSimulatePhysics(false);
	if ((MyCharacter->JumpCurrentCount <= MyCharacter->JumpMaxCount) && (MyCharacter->JumpCurrentCount > 1) &&
		MyCharacter->IsWallJump())
	{
		if (IsRootComponentCollisionRegistered())
		{
			float TravelRotation = MyCharacter->GetActorRotation().Yaw;
			// Set the rotation so that the character faces his direction of travel.

			if (TravelRotation > 0.0f)
			{
				FYAxisScale = abs(FYAxisScale);
				FYAxisScale = -FYAxisScale;
				MyCharacter->SetActorRotation(FRotator(0, -90, 0));
			}
			else if (TravelRotation < 0.0f)
			{
				FYAxisScale = abs(FYAxisScale);
				MyCharacter->SetActorRotation(FRotator(0, 90, 0));
			}


			MyCharacter->GetCharacterMovement()->AddImpulse(
				FVector(0, FYAxisScale, FZAxisScale)
				* FForce * MyCharacter->GetMesh()->GetMass());
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
