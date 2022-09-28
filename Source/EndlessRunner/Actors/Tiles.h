// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Tiles.generated.h"

UCLASS()
class ENDLESSRUNNER_API ATiles : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATiles();

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
		UStaticMeshComponent* CubeMesh;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
		class UArrowComponent* Arrow;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
};
