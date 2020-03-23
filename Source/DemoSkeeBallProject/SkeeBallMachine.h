// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "VRBase/ABaseEntity/ABaseEntity.h"
#include "Components/StaticMeshComponent.h"
#include "SkeeBallMachine.generated.h"

/**
 * 
 */
UCLASS()
class DEMOSKEEBALLPROJECT_API ASkeeBallMachine : public ABaseEntity
{
	GENERATED_BODY()
	
public: 
	
	ASkeeBallMachine();

	//Pointer to the Static Mesh
	UStaticMeshComponent* m_pStaticMeshComponent;

	//C++ Macro to allow use of Blueprints
	UFUNCTION(BlueprintCallable)
	//Add score function
	void AddToScore(int points);
	
	
};
