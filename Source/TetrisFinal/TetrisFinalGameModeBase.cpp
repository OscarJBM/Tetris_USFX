// Copyright Epic Games, Inc. All Rights Reserved.


#include "TetrisFinalGameModeBase.h"
#include "Board.h"
#include "Camera/CameraActor.h"
#include "Kismet/GameplayStatics.h"
#include "EngineUtils.h"

ATetrisFinalGameModeBase::ATetrisFinalGameModeBase() {
    // Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
    PrimaryActorTick.bCanEverTick = true;
    DefaultPawnClass = ABoard::StaticClass();
    siguientePosicionZ = 0;
}

void ATetrisFinalGameModeBase::BeginPlay()
{
    // Call the parent class version of this function
    Super::BeginPlay();

    for (TActorIterator<ACameraActor> it(GetWorld()); it; ++it)
    {
        UE_LOG(LogTemp, Warning, TEXT("Find camera: %s"), *(it->GetFName().ToString()));
        if (it->GetFName() == TEXT("BoardCamera"))
        {
            APlayerController* PC = UGameplayStatics::GetPlayerController(this, 0);
            PC->SetViewTargetWithBlend(*it, 0.5);
            break;
        }
    }

}

// Called every frame
void ATetrisFinalGameModeBase::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

}


void ATetrisFinalGameModeBase::DestroyActorFunction()
{
    if (SpawnedActor != nullptr)
    {
        // Displays a red message on the screen for 10 seconds
        GEngine->AddOnScreenDebugMessage(-1, 10, FColor::Red, TEXT("Actor Block destruido"));
        SpawnedActor->Destroy();
    }
}
