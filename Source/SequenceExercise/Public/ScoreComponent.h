// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ScoreComponent.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnScoreUpdate, int, NewScoreValue);

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class SEQUENCEEXERCISE_API UScoreComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UScoreComponent();

	UPROPERTY(VisibleAnywhere)
	int Score = 0;

	UFUNCTION()
	void AddScore(int ScoreAmount);
	

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UPROPERTY(BlueprintAssignable)
	FOnScoreUpdate OnScoreUpdate;
};
