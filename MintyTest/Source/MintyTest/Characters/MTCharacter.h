// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "MTCharacter.generated.h"



UCLASS()
class MINTYTEST_API AMTCharacter : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AMTCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	//UAbilitySystemComponent* ASC;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
