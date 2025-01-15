// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BaseBuilding.generated.h"

USTRUCT(BlueprintType)
struct FSupportedStructure
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UChildActorComponent* TriggerField;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<USceneComponent*> SupportFields;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int DestroyedAdjacentToTrigger = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float PercentageToDestroy = .5f;
};

UCLASS()
class FPS_PERSO_API ABaseBuilding : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABaseBuilding();

	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
	class UGeometryCollectionComponent* Building;

	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
	USceneComponent* Fields;

	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
	UChildActorComponent* Anchor;

	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
	UChildActorComponent* MasterField;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<FSupportedStructure> Structures;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	void RemoveAnchorFromStructures(USceneComponent* DestroyedAnchor);

	void CheckStructures();

	//virtual void OnConstruction(const FTransform& Transform) override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION()
	void HandleBreakEvent(const FChaosBreakEvent& BreakEvent);

	UFUNCTION(BlueprintNativeEvent)
	bool IsDestructionInAnchor(USceneComponent* CurrentAnchor, FVector BreakLocation);

	UFUNCTION(BlueprintNativeEvent)
	void TriggerField(AActor* DestructionField);

	UPROPERTY(BlueprintReadWrite)
	bool PlayerDestruction = false;
};
