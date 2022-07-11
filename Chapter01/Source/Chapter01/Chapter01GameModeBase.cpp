// Copyright Epic Games, Inc. All Rights Reserved.


#include "Chapter01GameModeBase.h"

void AChapter01GameModeBase::BeginPlay()
{
	Super::BeginPlay();

	UE_LOG(LogTemp, Warning, TEXT("Some warning message"));
	int intVar = 5;
	float floatVar = 3.7f;
	FString fstringVar = "an fstring variable";
	UE_LOG(LogTemp, Warning, TEXT("Text, %d %f %s"), intVar, floatVar, *fstringVar);

	FString name = "Tim";
	int32 mana = 450;
	TArray<FStringFormatArg> args;
	args.Add(FStringFormatArg(name));
	args.Add(FStringFormatArg(mana));
	FString string = FString::Format(TEXT("Name = {0} Mana = {1}"), args);
	UE_LOG(LogTemp, Warning, TEXT("Your string: %s"), *string);
}