// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/SphereComponent.h"
#include "GameFramework/Actor.h"
#include "Coin.generated.h"

UCLASS()
class SEQUENCEEXERCISE_API ACoin : public AActor
{
	GENERATED_BODY()
	
public:
	// Sets default values for this actor's properties
	ACoin();
	
	UPROPERTY(EditAnywhere, Category = "Coin")
	UStaticMeshComponent* Mesh;
	
	UPROPERTY(EditAnywhere)
	USphereComponent* Collider;
	
	UPROPERTY(EditAnywhere, Category = "Score")
	int Score;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	UFUNCTION()
	virtual void OnOverlap(
		UPrimitiveComponent* OverlappedComponent,
		AActor* OtherActor,
		UPrimitiveComponent* OtherComp,
		int32 OtherBodyIndex,
		bool bFromSweep,
		const FHitResult& SweepResult
	);

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	

};
