// Fill out your copyright notice in the Description page of Project Settings.


#include "ImGuiActor.h"


#include <imgui.h>

// Sets default values
AImGuiActor::AImGuiActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AImGuiActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AImGuiActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
	ImGui::Begin("Hello my friend");
	ImGui::Text("Hello there");
	ImGui::Text("Hello there");
	ImGui::End();

}

