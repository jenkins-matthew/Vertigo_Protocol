// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "Vertigo_ProtocolHUD.generated.h"

UCLASS()
class AVertigo_ProtocolHUD : public AHUD
{
	GENERATED_BODY()

public:
	AVertigo_ProtocolHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

