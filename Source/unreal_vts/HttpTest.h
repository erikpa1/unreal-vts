// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

#include "GameFramework/Actor.h"

#include "Http.h"

#include "HttpTest.generated.h"


UCLASS()
class UNREAL_VTS_API AHttpTest : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AHttpTest();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;


	void OnResponseReceived(FHttpRequestPtr req, FHttpResponsePtr res, bool connectedSuc);


};
