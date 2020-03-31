// Fill out your copyright notice in the Description page of Project Settings.

#include "SpawnBallButton.h"


ASpawnBallButton::ASpawnBallButton() {

	//Create mesh for component
	m_pSpawnLocationMesh = CreateDefaultSubobject<UStaticMeshComponent>("location mesh");

	//Find mesh
	UStaticMesh* mesh = FindMesh("StaticMesh'/Game/Meshes/SkeeBall.SkeeBall'");
	//Set Mesh
	m_pSpawnLocationMesh->SetStaticMesh(mesh);

}

void ASpawnBallButton::OnPressed_Implementation(ABaseController* pController) {




}