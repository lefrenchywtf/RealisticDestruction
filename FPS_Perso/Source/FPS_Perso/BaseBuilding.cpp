// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseBuilding.h"
#include "GeometryCollection/GeometryCollectionComponent.h"
#include "Field/FieldSystemComponent.h"

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

FTransform ConvertTransform(const FTransform3f& Transform3f)
{
	// Convertir les composants en double précision
	return FTransform(
		FQuat(Transform3f.GetRotation()),    // Rotation
		FVector(Transform3f.GetTranslation()), // Translation
		FVector(Transform3f.GetScale3D())     // Scale
	);
}

void ABaseBuilding::HandleBreakEvent(const FChaosBreakEvent& BreakEvent)
{
	TArray < USceneComponent*, FDefaultAllocator> AnchorFields;
	Fields->GetChildrenComponents(false, AnchorFields);
	if (PlayerDestruction)
	{
		if (Building)
		{
			//UE_LOG(LogTemp, Warning, TEXT("yee"));
			FGeometryCollection* collection = Building->GetRestCollection()->GetGeometryCollection().Get();
			collection->Visible[BreakEvent.Index] = false;
			Building->SetRestState({ ConvertTransform(collection->Transform[BreakEvent.Index]) }); 
			Building->MarkRenderStateDirty();
		}
		PlayerDestruction = false;
	}
	for (USceneComponent* Child : AnchorFields)
	{
		if (IsDestructionInAnchor(Child, BreakEvent.Location))
		{
			TriggerField(Child);
			break;
		}
		//if (Child->IsA<UChildActorComponent>())
		//{
		//	AActor* ChildActor = (Cast<UChildActorComponent>(Child))->GetChildActor();
		//	if (ChildActor->IsA<UFieldSystemComponent>())
		//	{
		//		UFieldSystemComponent* CurrentField = Cast<UFieldSystemComponent>(ChildActor);
		//		if (CurrentField)
		//		{
		//			CurrentField->cetrigg
		//		}
		//	}
		//}
	}
}

bool ABaseBuilding::IsDestructionInAnchor_Implementation(USceneComponent* CurrentAnchor, FVector BreakLocation)
{
	return false;
}

void ABaseBuilding::TriggerField_Implementation(USceneComponent* CurrentAnchor)
{

}