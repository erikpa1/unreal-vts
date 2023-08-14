// Fill out your copyright notice in the Description page of Project Settings.


#include "HttpTest.h"




// Sets default values
AHttpTest::AHttpTest()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AHttpTest::BeginPlay()
{
	Super::BeginPlay();

	FHttpRequestRef req = FHttpModule::Get().CreateRequest();
	req->OnProcessRequestComplete().BindUObject(this, &AHttpTest::OnResponseReceived);
	req->SetURL("https://jsonplaceholder.typicode.com/posts/1");
	req->SetVerb("GET");
	req->ProcessRequest();



}

// Called every frame
void AHttpTest::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AHttpTest::OnResponseReceived(FHttpRequestPtr req, FHttpResponsePtr res, bool connectedSuc)
{
	UE_LOG(LogTemp, Display, TEXT("Reponse %s"), *res->GetContentAsString());
}

