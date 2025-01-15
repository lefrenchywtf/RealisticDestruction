// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseBuilding.h"
#include "GeometryCollection/GeometryCollectionComponent.h"
#include "Field/FieldSystemComponent.h"
#include "Field/FieldSystemActor.h"

// Sets default values
ABaseBuilding::ABaseBuilding()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Building = CreateDefaultSubobject<UGeometryCollectionComponent>("Building");
	RootComponent = Building;

	Fields = CreateDefaultSubobject<USceneComponent>("Fields");
	Fields->SetupAttachment(Building);

	Anchor = CreateDefaultSubobject<UChildActorComponent>("Anchor");
	Anchor->SetupAttachment(Fields);

	MasterField = CreateDefaultSubobject<UChildActorComponent>("MasterField");
	MasterField->SetupAttachment(Anchor);
}

//void ABaseBuilding::OnConstruction(const FTransform& Transform)
//{
//	Super::OnConstruction(Transform);
//	TArray < USceneComponent*, FDefaultAllocator> AnchorFields;
//	Fields->GetChildrenComponents(false, AnchorFields);
//
//	for (USceneComponent* Child : AnchorFields)
//	{
//		UChildActorComponent* ChildActor = Cast<UChildActorComponent>(Child);
//		if (ChildActor)
//		{
//			AFieldSystemActor* Field = Cast<AFieldSystemActor>(ChildActor->GetChildActor());
//			if (Field && Building)
//			{
//				Building->InitializationFields.Add(Field);
//				UE_LOG(LogTemp, Warning, TEXT("oe"));
//			}
//		}
//	}
//}


// Called when the game starts or when spawned
void ABaseBuilding::BeginPlay()
{
	Super::BeginPlay();
	Building->OnChaosBreakEvent.AddDynamic(this, &ABaseBuilding::HandleBreakEvent);
}

// Called every frame
void ABaseBuilding::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ABaseBuilding::HandleBreakEvent(const FChaosBreakEvent& BreakEvent)
{
	TArray < USceneComponent*, FDefaultAllocator> AnchorFields;
	Fields->GetChildrenComponents(false, AnchorFields);
	if (PlayerDestruction)
	{
		if (Building)
		{
			// Here it would be nice to implement something that makes the player
			// destructed fragment to get destroyed, or at least disappear
		}
		PlayerDestruction = false;
	}
	for (USceneComponent* Child : AnchorFields)
	{
		if (IsDestructionInAnchor(Child, BreakEvent.Location))
		{
			USceneComponent* DestructionField = Child->GetChildComponent(0);
			if (DestructionField)
			{
				UChildActorComponent* DestructionActor = Cast<UChildActorComponent>(DestructionField);
				if (DestructionActor)
				{
					TriggerField(DestructionActor->GetChildActor());
				}
				
			}
			break;
		}
	}
}

void ABaseBuilding::RemoveAnchorFromStructures(USceneComponent* DestroyedAnchor)
{
	if (Structures.Num())
	{
		for (FSupportedStructure Structure : Structures)
		{
			int32 FieldIndex;
			if (Structure.SupportFields.Find(DestroyedAnchor, FieldIndex))
			{
				Structure.SupportFields[FieldIndex] = nullptr;
			}
		}
	}
}

bool ABaseBuilding::IsDestructionInAnchor_Implementation(USceneComponent* CurrentAnchor, FVector BreakLocation)
{
	return false;
}

void ABaseBuilding::TriggerField_Implementation(AActor* DestructionField)
{

}


void ABaseBuilding::CheckStructures()
{
	for (FSupportedStructure Structure : Structures)
	{
		int nullCount = 0;
		int adjacentCount = 0;

		for (int i = 0; i < Structure.SupportFields.Num(); i++)
		{
			if (!Structure.SupportFields[i])
			{
				nullCount++;
				adjacentCount++;
				if (nullCount / (float)Structure.SupportFields.Num() > Structure.PercentageToDestroy ||
					adjacentCount >= Structure.DestroyedAdjacentToTrigger)
				{
					TriggerField(Structure.TriggerField->GetChildActor());
				}
			}
			else
			{
				adjacentCount = 0;
			}
		}
	}
}