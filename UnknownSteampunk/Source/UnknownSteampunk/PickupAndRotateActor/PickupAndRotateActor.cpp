// Fill out your copyright notice in the Description page of Project Settings.


#include "../PickupAndRotateActor/PickupAndRotateActor.h"
#include "Kismet/GameplayStatics.h"
#include "GameFramework/Character.h"
// Sets default values
APickupAndRotateActor::APickupAndRotateActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;



	bHolding = false;
	bGravity = true;

// add Cylinder to root
 MyMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("VisualRepresentation"));
 MyMesh->SetSimulatePhysics(true);
    MyMesh->SetupAttachment(RootComponent);

    static ConstructorHelpers::FObjectFinder<UStaticMesh> CylinderAsset(TEXT("/Game/StarterContent/Cylinder"));

	if (CylinderAsset.Succeeded())
    {
        MyMesh->SetStaticMesh(CylinderAsset.Object);
        MyMesh->SetRelativeLocation(FVector(0.0f, 0.0f, 0.0f));
        MyMesh->SetWorldScale3D(FVector(1.f));
	}
}

// Called when the game starts or when spawned
void APickupAndRotateActor::BeginPlay()
{
	Super::BeginPlay();

	MyCharacter = UGameplayStatics::GetPlayerCharacter(this, 0);
	PlayerCapsule = MyCharacter->FindComponentByClass<UCapsuleComponent>();

	TArray<USceneComponent*> Components;
 
	MyCharacter->GetComponents(Components);

	if(Components.Num() > 0)
	{
		for (auto& Comp : Components)
		{
			if(Comp->GetName() == "HoldingComponent")
			{
				HoldingComp = Cast<USceneComponent>(Comp);
			}
		}
	}

}

// Called every frame
void APickupAndRotateActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if(bHolding && HoldingComp)
	{
		SetActorLocationAndRotation(HoldingComp->GetComponentLocation(), HoldingComp->GetComponentRotation());
	}

}

void APickupAndRotateActor::RotateActor()
{
    
	ControlRotation = GetWorld()->GetFirstPlayerController()->GetControlRotation();
	SetActorRotation(FQuat(ControlRotation));
}

void APickupAndRotateActor::Pickup()
{
	bHolding = !bHolding;	
	bGravity = !bGravity;
	MyMesh->SetEnableGravity(bGravity);
	MyMesh->SetSimulatePhysics(bHolding ? false : true);
	MyMesh->SetCollisionEnabled(bHolding ? ECollisionEnabled::NoCollision : ECollisionEnabled::QueryAndPhysics);

	if(!bHolding) 
	{
		ForwardVector = PlayerCapsule->GetForwardVector();
		MyMesh->AddForce(ForwardVector*10*MyMesh->GetMass());
	}

}