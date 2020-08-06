// Fill out your copyright notice in the Description page of Project Settings.


#include "collectibleAnimator.h"

float UcollectibleAnimator::AnimateCollectable(const float AnimationSpeed, bool allowedToRotate, const float& deltaTime, bool passedDelay) {
	//FVector rotationVec = FVector(0,0,20);
	if (!allowedToRotate || !passedDelay) return 0;

	float vec = (AnimationSpeed * deltaTime);
	return vec;
}

