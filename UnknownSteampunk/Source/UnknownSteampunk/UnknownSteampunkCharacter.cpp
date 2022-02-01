// Copyright Epic Games, Inc. All Rights Reserved.

#include "UnknownSteampunkCharacter.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Particles/ParticleSystemComponent.h"
#include "Components/AudioComponent.h"
#include "Sound/SoundBase.h"

AUnknownSteampunkCharacter::AUnknownSteampunkCharacter()
{
	// Set size for collision capsule
	GetCapsuleComponent()->InitCapsuleSize(42.f, 96.0f);
	SetActorEnableCollision(true);
	// Don't rotate when the controller rotates.
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

	// Create a camera boom attached to the root (capsule)
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->SetUsingAbsoluteRotation(true); // Rotation of the character should not affect rotation of boom
	CameraBoom->bDoCollisionTest = false;
	CameraBoom->TargetArmLength = 700.f;
	CameraBoom->SocketOffset = FVector(0.f, 0.f, 75.f);
	CameraBoom->SetRelativeRotation(FRotator(0.f, 180.f, 0.f));

	// Create a camera and attach to boom
	SideViewCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("SideViewCamera"));
	SideViewCameraComponent->SetupAttachment(CameraBoom, USpringArmComponent::SocketName);
	SideViewCameraComponent->bUsePawnControlRotation = false; // We don't want the controller rotating the camera

	// Configure character movement
	GetCharacterMovement()->bOrientRotationToMovement = true; // Face in the direction we are moving..
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 720.0f, 0.0f); // ...at this rotation rate
	GetCharacterMovement()->GravityScale = 2.f;
	GetCharacterMovement()->AirControl = 0.80f;
	GetCharacterMovement()->JumpZVelocity = 1000.f;
	GetCharacterMovement()->GroundFriction = 3.f;
	GetCharacterMovement()->MaxWalkSpeed = 600.f;
	GetCharacterMovement()->MaxFlySpeed = 600.f;
	JumpMaxCount = 2;

	// Create a particle system that we can activate or deactivate
	static ConstructorHelpers::FObjectFinder<UParticleSystem> ParticleAsset(TEXT("/Game/Steam/P_smoke"));
	UPart = ParticleAsset.Object;
	//Left leg
	LeftLegParticleSystem = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("JumpLeftLegParticle"));
	LeftLegParticleSystem->AttachToComponent(this->GetMesh(),
	                                         FAttachmentTransformRules(EAttachmentRule::SnapToTarget, true),
	                                         TEXT("ball_lSocket"));
	LeftLegParticleSystem->bAutoActivate = false;
	LeftLegParticleSystem->SetRelativeLocation(FVector(0.0f, 0.0f, -10.0f));
	LeftLegParticleSystem->SetRelativeRotation(FRotator(-90.0f, 90.0f, 0.f));

	RightLegParticleSystem = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("JumpRighttLegParticle"));
	RightLegParticleSystem->AttachToComponent(this->GetMesh(),
	                                          FAttachmentTransformRules(EAttachmentRule::SnapToTarget, true),
	                                          TEXT("ball_rSocket"));
	RightLegParticleSystem->bAutoActivate = false;
	RightLegParticleSystem->SetRelativeLocation(FVector(0.0f, 0.0f, -10.0f));
	RightLegParticleSystem->SetRelativeRotation(FRotator(90.0f, 90.0f, 0.f));


	//sound effect setup
	static ConstructorHelpers::FObjectFinder<USoundBase> SoaringSoundAsset(TEXT("/Game/Audio/S_Steam"));
	// Store a reference to the Cue asset - we'll need it later.
	SoaringAudioBase = SoaringSoundAsset.Object;
	// Create an audio component, the audio component wraps the Cue, and allows us to ineract with
	// it, and its parameters from code.
	SoaringAudioComponent = CreateDefaultSubobject<UAudioComponent>(TEXT("SoaringAudioComp"));
	// I don't want the sound playing the moment it's created.
	SoaringAudioComponent->bAutoActivate = false; // don't play the sound immediately.
	// I want the sound to follow the pawn around, so I attach it to the Pawns root.
	SoaringAudioComponent->SetupAttachment(RootComponent);
	// I want the sound to come from slighty in front of the pawn.
	SoaringAudioComponent->SetRelativeLocation(FVector(100.0f, 0.0f, 0.0f));

	// Note: The skeletal mesh and anim blueprint references on the Mesh component (inherited from Character) 
	// are set in the derived blueprint asset named MyCharacter (to avoid direct content references in C++)
}

void AUnknownSteampunkCharacter::PostInitializeComponents()
{
	Super::PostInitializeComponents();
	//particles
	if (UPart->IsValidLowLevelFast())
	{
		LeftLegParticleSystem->SetTemplate(UPart);
		RightLegParticleSystem->SetTemplate(UPart);
	}

	//sound particle effect
	if (SoaringAudioBase->IsValidLowLevelFast())
	{
		SoaringAudioComponent->SetSound(SoaringAudioBase);
	}
}

//called when game starts our pawned
void AUnknownSteampunkCharacter::BeginPlay()
{
	Super::BeginPlay();


	// You can fade the sound in... 
	float startTime = 9.f;
	float volume = 0.3f;
	float fadeTime = 0.f;
	SoaringAudioComponent->FadeIn(fadeTime, volume, startTime);
}

//////////////////////////////////////////////////////////////////////////
// Input

void AUnknownSteampunkCharacter::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	// set up gameplay key bindings
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &ACharacter::StopJumping);
	PlayerInputComponent->BindAxis("MoveRight", this, &AUnknownSteampunkCharacter::MoveRight);
	PlayerInputComponent->BindAction("Soaring", IE_Pressed, this, &AUnknownSteampunkCharacter::Soaring);
	PlayerInputComponent->BindAction("Soaring", IE_Pressed, this, &AUnknownSteampunkCharacter::ParticleToggle);
	PlayerInputComponent->BindAction("Soaring", IE_Released, this, &AUnknownSteampunkCharacter::ParticleToggle);
}

void AUnknownSteampunkCharacter::Soaring()
{
	QKey = !QKey;
}

void AUnknownSteampunkCharacter::MoveRight(float Value)
{
	// Apply the input to the character motion
	float MoveValue = Value;
	if (TurnJump % 2)
	{
		MoveValue = -MoveValue;
	}
	if (Value)
	{
		AxisMoving = true;
	}
	else
	{
		AxisMoving = false;
	}
	AddMovementInput(FVector(0.0f, -1.0f, 0.0f), MoveValue);
}


void AUnknownSteampunkCharacter::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);
	UpdateCharacter();
}

void AUnknownSteampunkCharacter::UpdateCharacter()
{
	const FVector PlayerVelocity = GetVelocity();
	float FallDirection = PlayerVelocity.Z;

	//if Q key was pressed nd we falling we can soaring
	if (QKey && (FallDirection < 0))
	{
		GetCharacterMovement()->GravityScale = Gravity;
	}
	else
	{
		GetCharacterMovement()->GravityScale = 2;
	}

	// Now setup the rotation of the controller based on the direction we are travelling
	float TravelDirection = PlayerVelocity.Y;
	// Set the rotation so that the character faces his direction of travel.
	if (Controller != nullptr)
	{
		if (TravelDirection < 0.0f)
		{
			Controller->SetControlRotation(FRotator(0.0, 180.0f, 0.0f));
		}
		else if (TravelDirection > 0.0f)
		{
			Controller->SetControlRotation(FRotator(0.0f, 0.0f, 0.0f));
		}
	}

	// changing second jump vector
	if ((JumpCurrentCount > 1) && (TravelDirection == 0) && AxisMoving) //TODO
	{
		if (IsRootComponentCollisionRegistered())
		{
			TurnJump++;
			JumpCurrentCount--;
		}
	}
	//if we hit the floor
	else if (!GetCharacterMovement()->IsFalling())
	{
		TurnJump = 0;
		QKey = false;
		ParticleToggle();
	}
}

void AUnknownSteampunkCharacter::ParticleToggle()
{
	if ((RightLegParticleSystem && RightLegParticleSystem->Template) &&
		(LeftLegParticleSystem && LeftLegParticleSystem->Template))
	{
		//Steam activation
		RightLegParticleSystem->SetActive(QKey);
		LeftLegParticleSystem->SetActive(QKey);
		//Audio activation
		SoaringAudioComponent->SetActive(QKey);
	}
}
