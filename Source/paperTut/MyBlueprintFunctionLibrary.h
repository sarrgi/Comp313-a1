// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "MyBlueprintFunctionLibrary.generated.h"

/** Note: this is just an example from tutorial 
 *  Didn't delete this as unreal can be kind of funny about 
 *  deleting c++ classes and didnt want to corrupt this again.
 *  Isn't actually used in game. 
 */
UCLASS()
class PAPERTUT_API UMyBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
		UFUNCTION(BlueprintCallable, Category = "Custom Functions")
		static float SquareNumber(const float in);
};
