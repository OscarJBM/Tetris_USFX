// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Block.h"
#include "Piece.h"
#include "TetrisFinalGameModeBase.generated.h"

UCLASS()
class TETRISFINAL_API ATetrisFinalGameModeBase : public AGameModeBase
{
	GENERATED_BODY()

protected:
	virtual void BeginPlay() override;

public:
	ATetrisFinalGameModeBase();

	UPROPERTY()
		ABlock* SpawnedActor;

	UPROPERTY()
		APiece* SpawnedPiece;

	UFUNCTION()
		void DestroyActorFunction();

	virtual void Tick(float DeltaTime) override;
private:
	float siguientePosicionZ;

};

