// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

/**
 * 
 */
class RPGPROJECT_API FDebugUtils
{
public:
 static void Print(const FString& Message, const FColor& InColor = FColor::MakeRandomColor(), int32 InKey = -1);
};
