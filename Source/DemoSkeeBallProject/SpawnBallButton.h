// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "VRBase/AWorldButton/AWorldButton.h"
#include "Components/StaticMeshComponent.h"
#include "SpawnBallButton.generated.h"

/**
 * 
 */
UCLASS()
class DEMOSKEEBALLPROJECT_API ASpawnBallButton : public AWorldButton
{
	GENERATED_BODY()

public:

	
	ASpawnBallButton();

	//Static mesh component 
	UPROPERTY(EditAnywhere)
	UStaticMeshComponent* m_pSpawnLocationMesh;

	
	virtual void OnPressed_Implementation(ABaseController* pController) override;
	
	//SkeeBall Index for tracking
	int m_iSkeeBallsIndex;


	
};
