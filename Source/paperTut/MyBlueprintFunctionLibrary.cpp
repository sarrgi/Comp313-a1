// Fill out your copyright notice in the Description page of Project Settings.


#include "MyBlueprintFunctionLibrary.h"

float UMyBlueprintFunctionLibrary::SquareNumber(const float in) {
	return FMath::Pow(in, 2);
}

