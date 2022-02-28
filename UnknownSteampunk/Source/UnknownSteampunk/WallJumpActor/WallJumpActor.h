/// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
// include capsule component
#include "Components/CapsuleComponent.h"
#include "WallJumpActor.generated.h"

UCLASS()
class UNKNOWNSTEAMPUNK_API AWallJumpActor : public AActor
{
	GENERATED_BODY()


	UPROPERTY(EditAnywhere, Category="Mesh")
	UStaticMeshComponent* MyMesh;

	UPROPERTY(EditAnywhere)
	USceneComponent* HoldingComp;
	UPROPERTY(EditAnywhere, Category = "Jump")
	float FForce = 4000;
	UPROPERTY(EditAnywhere, Category = "Jump")
	float FZAxisScale = 1;
	UPROPERTY(EditAnywhere, Category = "Jump")
	float FYAxisScale = 1;
	bool bHolding;
	bool bGravity;

	FRotator ControlRotation;
	ACharacter* MyCharacter;
	UCapsuleComponent* PlayerCapsule;
	FVector ForwardVector;
public:	
	// Sets default values for this actor's properties
	AWallJumpActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	void WallJump();
	UFUNCTION()
	void OnCompHit(UPrimitiveComponent* HitComp, AActor* OtherActor,
		UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
	
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
