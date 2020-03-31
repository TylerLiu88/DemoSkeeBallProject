// Fill out your copyright notice in the Description page of Project Settings.

#include "SpawnBallButton.h"
#include "SkeeBall.h"



ASpawnBallButton::ASpawnBallButton() {

	//Create mesh for component
	m_pSpawnLocationMesh = CreateDefaultSubobject<UStaticMeshComponent>("location mesh");

	//Find mesh
	UStaticMesh* mesh = FindMesh("StaticMesh'/Game/Meshes/SkeeBall.SkeeBall'");
	//Set Mesh
	m_pSpawnLocationMesh->SetStaticMesh(mesh);

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


}