// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BaseBuilding.generated.h"

UCLASS()
class FPS_PERSO_API ABaseBuilding : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABaseBuilding();

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class UGeometryCollectionComponent* Building;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	USceneComponent* Fields;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	UChildActorComponent* Anchor;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	UChildActorComponent* MasterField;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION()
	void HandleBreakEvent(const FChaosBreakEvent& BreakEvent);

	UFUNCTION(BlueprintNativeEvent)
	bool IsDestructionInAnchor(USceneComponent* CurrentAnchor, FVector BreakLocation);

	UFUNCTION(BlueprintNativeEvent)
	void TriggerField(USceneComponent* CurrentAnchor);

	UPROPERTY(BlueprintReadWrite)
	bool PlayerDestruction = false;
};
