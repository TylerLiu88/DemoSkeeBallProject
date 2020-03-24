// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "DemoSkeeBallProjectGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class DEMOSKEEBALLPROJECT_API ADemoSkeeBallProjectGameModeBase : public AGameModeBase
{
	GENERATED_BODY()
	
private:
	//Represents the players score
	int m_iScore;

public:

	void BeginPlay() override;

	//C++ Macro to allow use of Blueprints
	UFUNCTION(BlueprintCallable)
	int GetScore();

	UFUNCTION(BlueprintCallable)
	void SetScore(int newScore);
	
	
};
