#include "C01_Property.h"

AC01_Property::AC01_Property()
{
	//PrimaryActorTick.bCanEverTick = true; == enable tick 
}

void AC01_Property::BeginPlay()
{
	Super::BeginPlay();

	GLog->Log("Hellow Worlds 1");
	UE_LOG(LogTemp, Error, TEXT("%s"), L"Hello Worlds 2");

}

void AC01_Property::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

