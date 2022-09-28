// Fill out your copyright notice in the Description page of Project Settings.


#include "EPlayer.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"

// Sets default values
AEPlayer::AEPlayer()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("Camera Boom"));
	CameraBoom->SetupAttachment(RootComponent);

	FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("Follow Camera"));
	FollowCamera->SetupAttachment(CameraBoom);
}

// Called when the game starts or when spawned
void AEPlayer::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEPlayer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	AEPlayer::MoveForward();
}

void AEPlayer::MoveForward()
{
	// get controller rotation
	const FRotator Rotation = Controller->GetControlRotation();
	const FRotator YawRotation(0.f, Rotation.Yaw, 0.f);

	const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
	AddMovementInput(Direction, 1.f);
}

// Called to bind functionality to input
void AEPlayer::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

