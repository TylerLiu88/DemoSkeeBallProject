// Fill out your copyright notice in the Description page of Project Settings.

#include "SkeeBallMachine.h"
#include "DemoSkeeBallProjectGameModeBase.h"

ASkeeBallMachine::ASkeeBallMachine() {

	//Construct the Component
	m_pStaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>("static mesh");

	//Set Static mesh to be the root component
	RootComponent = m_pStaticMeshComponent;

	//Find mesh
	UStaticMesh* mesh = FindMesh("StaticMesh'/Game/Meshes/SkeeBallMachine.SkeeBallMachine'");

	//Set mesh
	m_pStaticMeshComponent->SetStaticMesh(mesh);

	//Scale SkeeBallMachine
	float scaleFactor = 1.5f;
	FVector scale = FVector(scaleFactor);
	m_pStaticMeshComponent->SetWorldScale3D(scale);




}

//Add Points function
void ASkeeBallMachine::AddToScore(int points) {

	//Cast GameModeBase to SkeeBallMachine
	ADemoSkeeBallProjectGameModeBase* mode = Cast<ADemoSkeeBallProjectGameModeBase>(GetWorld()->GetAuthGameMode());

	if (mode) {

		//Get the Current Score
		int currScore = mode->GetScore();

		//Add Score (Current Score and points passed in)
		mode->SetScore(currScore + points);


	}



}

