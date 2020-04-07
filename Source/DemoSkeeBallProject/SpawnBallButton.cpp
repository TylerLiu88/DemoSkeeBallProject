// Fill out your copyright notice in the Description page of Project Settings.

#include "SpawnBallButton.h"
#include "SkeeBall.h"
#include "DemoSkeeBallProjectGameModeBase.h"

//Max SkeeBall Constant
#define MAX_SKEEBALLS 12


ASpawnBallButton::ASpawnBallButton() {

	//GO AND FIX MESHES OF THE TWO

	/*
	This is the Mes for the ball spawning location	
	*/

	//Create mesh for component
	m_pSpawnLocationMesh = CreateDefaultSubobject<UStaticMeshComponent>("location mesh");

	//Find mesh
	UStaticMesh* mesh = FindMesh("StaticMesh'/Game/Meshes/SkeeBall.SkeeBall'");
	//Set Mesh
	m_pSpawnLocationMesh->SetStaticMesh(mesh);

	/*
	This will be the mesh for the Button
	*/
	UStaticMesh* buttonMesh = FindMesh("StaticMesh'/Game/StarterContent/Shapes/Shape_Cylinder.Shape_Cylinder'");

	m_pMeshComponent->SetStaticMesh(buttonMesh);



	/*
	Scaling of the button
	*/

	//Scale SkeeBallMachine
	float scaleFactor = 0.3f;
	FVector scale = FVector(scaleFactor);
	m_pMeshComponent->SetWorldScale3D(scale);


	//Set the tracking index 
	m_iSkeeBallsIndex = 0;
}

void ASpawnBallButton::OnPressed_Implementation(ABaseController* pController) {

	//Note: Location is a vector, so the return type will be type FVector
	//Get location of the 
	FVector loc = m_pSpawnLocationMesh->GetComponentLocation();

	//Using Unreal GetWorld Function: It gets a pointer reference to the world as an object
	//Then we can use SpawnActor to spawn at that point
	//SpawnActor takes a class reference and a location
	//Its better to store actor into variable. C++ Cast not Unreal
	
	ASkeeBall* skeeball = (ASkeeBall*)GetWorld()->SpawnActor(ASkeeBall::StaticClass(), &loc);

	//**START OF POOL, SHOULD I MAKE SEPARATE FUNCTIONS?

	//Get the ball position from GameMode
	//ADemoSkeeBallGameModeBase* gameMode = Cast<ADemoSkeeBallProjectGameModeeBase>(GetWorld()->GetAuthGameMode());







}