// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "C01_Property.generated.h" // �� �Ʒ��� ��ġ

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

};
