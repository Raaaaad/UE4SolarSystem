// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "CameraPawn.generated.h"

UCLASS()
class PRACAINZ_API ACameraPawn : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ACameraPawn();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UPROPERTY(EditAnywhere)
		class USpringArmComponent* CameraArm;
	UPROPERTY(EditAnywhere)
		class UCameraComponent* Camera;
	UPROPERTY(EditAnywhere, Category = "Components")
		class USceneComponent* Focused;
	bool bOnChangePlanet = false;

	void ZoomIn();
	void ZoomOut();

	void RotateX(float Value);
	void RotateY(float Value);


};
