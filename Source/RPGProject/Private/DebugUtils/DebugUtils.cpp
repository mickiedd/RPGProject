// Fill out your copyright notice in the Description page of Project Settings.


#include "DebugUtils/DebugUtils.h"

void FDebugUtils::Print(const FString& Message, const FColor& InColor, int32 InKey)
{
	GEngine->AddOnScreenDebugMessage(InKey, 5.0f, InColor, Message);
	UE_LOG(LogTemp, Log, TEXT("%s"), *Message);
}
