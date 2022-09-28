// Fill out your copyright notice in the Description page of Project Settings.


#include "Tiles.h"
#include "Components/ArrowComponent.h"

// Sets default values
ATiles::ATiles()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	CubeMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Cube Mesh"));

	Arrow = CreateDefaultSubobject<UArrowComponent>(TEXT("Arrow"));
	Arrow->SetupAttachment(CubeMesh);
}

// Called when the game starts or when spawned
void ATiles::BeginPlay()
{
	Super::BeginPlay();

}

