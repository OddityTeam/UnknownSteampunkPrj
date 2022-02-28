// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "PickupAndRotateActor/PickupAndRotateActor.h"
#include "WallJumpActor/WallJumpActor.h"
#include "UnknownSteampunkCharacter.generated.h"

UCLASS(config=Game)
class AUnknownSteampunkCharacter : public ACharacter
{
	GENERATED_BODY()

	/** Side view camera */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class UCameraComponent* SideViewCameraComponent;

	/** Camera boom positioning the camera beside the character */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class USpringArmComponent* CameraBoom;

	
	/** Holding Component */
	UPROPERTY(EditAnywhere)
	class USceneComponent* HoldingComponent;
	

	virtual void Tick(float DeltaSeconds) override;

	bool AxisMoving = 0;
	int TurnJump = 0;
	bool QKey = 0;
	UPROPERTY(EditAnywhere,Category = "Soaring")
	double Gravity{0.01};
	UPROPERTY(EditAnywhere,Category = "Soaring")
	double DefaultCharacterGravity{2};
	UPROPERTY(EditAnywhere,Category = "Soaring")
	double SoaringAcceleration{0};
	UPROPERTY(EditAnywhere,Category = "Soaring")
	double DefaultMaxAcceleration{0};
	//particle system
	UParticleSystem* UPart;
	UParticleSystem* UPartFire;
	UParticleSystemComponent* LeftLegParticleSystem;
	UParticleSystemComponent* RightLegParticleSystem;

	
	UPROPERTY(EditAnywhere, Category = "Audio")
	USoundBase* SoaringAudioBase;
	UPROPERTY(EditAnywhere, Category = "Audio")
	UAudioComponent* SoaringAudioComponent;


	//pickup and rotate
	UPROPERTY(EditAnywhere, Category = "Collision")
	float FRadius = 200;
	bool bCanThrow;
	bool bHoldingItem;
	bool bInspecting;
	UPROPERTY(EditAnywhere)
	class APickupAndRotateActor* CurrentItem;
	
	FVector HoldingComp;
	FRotator LastRotation;

	FVector Start;
	FVector ForwardVector;
	FVector End;

	FHitResult Hit;
	
	FComponentQueryParams DefaultComponentQueryParams;
	FCollisionResponseParams DefaultResponseParam;


protected:

	/** Called for side to side input */
	void MoveRight(float Val);

    void Soaring();

	// APawn interface
	virtual void SetupPlayerInputComponent(class UInputComponent* InputComponent) override;
	// End of APawn interface
	void UpdateCharacter();
	void UpdatePickupAndRotate();
	void UpdateWallJump();
	void ParticleToggle();

	// pickup and rotate
	void ToggleItemPickup();
    void ToggleJumpParticles();

	void OnAction();
public:
	AUnknownSteampunkCharacter();
    virtual void PostInitializeComponents() override;
	virtual void BeginPlay() override;
	/** Returns SideViewCameraComponent subobject **/
	FORCEINLINE class UCameraComponent* GetSideViewCameraComponent() const { return SideViewCameraComponent; }
	/** Returns CameraBoom subobject **/
	FORCEINLINE class USpringArmComponent* GetCameraBoom() const { return CameraBoom; }


};
