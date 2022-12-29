// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "C01_Property.generated.h" // 맨 아래쪽 위치

UCLASS()
class U04_CPPBASICSYNTAX_API AC01_Property : public AActor
{
	GENERATED_BODY()
	
public:	
	AC01_Property();

protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;

private:
	UPROPERTY(EditAnywhere)
		int Alpha = 10;

	UPROPERTY(EditInstanceOnly) 
		int Bravo = 20;

	UPROPERTY(EditDefaultsOnly) //블프안에서만보임
		int Chalie;

	UPROPERTY(VisibleAnywhere)
		int Delta = 40;

	

	UPROPERTY(EditDefaultsOnly, Category = "Visible")
		bool bVisble;

protected:

	UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly)
		int Echo = 50;

	UPROPERTY(BlueprintReadWrite, VisibleDefaultsOnly)
		int Foxtrot = 60;

	UPROPERTY(VisibleDefaultsOnly)
		class UTextRenderComponent* Text;

private:
	int Golf = 70;





};