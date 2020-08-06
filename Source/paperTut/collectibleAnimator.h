// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "collectibleAnimator.generated.h"

/**
 * Custom function for managing collectible animation state and values.
 */
UCLASS()
class PAPERTUT_API UcollectibleAnimator : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
		UFUNCTION(BlueprintCallable, Category = "Custom Functions")
		static float AnimateCollectable(const float AnimationSpeed, bool allowedToRotate, const float& deltaTime, bool passedDelay);
};

