// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Kismet/GameplayStatics.h"
// include capsule component
#include "Components/CapsuleComponent.h"

#include "PickupAndRotateActor.generated.h"

UCLASS()
class UNKNOWNSTEAMPUNK_API APickupAndRotateActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APickupAndRotateActor();

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere)
	UStaticMeshComponent* MyMesh;

	UPROPERTY(EditAnywhere)
	USceneComponent* HoldingComp;

	
	void RotateActor();
	void Pickup();

	bool bHolding;
	bool bGravity;

	FRotator ControlRotation;
	ACharacter* MyCharacter;
	UCapsuleComponent* PlayerCapsule;
	FVector ForwardVector;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;



};
