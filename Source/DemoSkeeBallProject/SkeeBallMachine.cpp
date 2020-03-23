// Fill out your copyright notice in the Description page of Project Settings.

#include "SkeeBallMachine.h"

ASkeeBallMachine::ASkeeBallMachine() {

	//Construct the Component
	m_pStaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>("static mesh");

	//Set Static mesh to be the root component
	RootComponent = m_pStaticMeshComponent;

	//Find mesh
	UStaticMesh* mesh = FindMesh("StaticMesh'/Game/Meshes/SkeeBallMachine.SkeeBallMachine'");

	//Set mesh
	m_pStaticMeshComponent->SetStaticMesh(mesh);




}


