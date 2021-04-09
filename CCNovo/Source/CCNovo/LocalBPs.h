// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"
#include "LocalBPs.generated.h"

/**
 * 
 */
UCLASS()
class CCNOVO_API ULocalBPs : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintPure, meta = (DisplayName = "Hello World", CompactNodeTitle = "HelloWorld", Keywords = "String Hello World"), Category = Game)
		static FText HelloWorld();

	UFUNCTION(BlueprintPure, meta = (DisplayName = "Adds floats", CompactNodeTitle = "Add Floats", Keywords = "Float Add"), Category = Game)
		static float AddFloats(float fA, float fB);

	UFUNCTION(BlueprintPure, meta = (DisplayName = "Gill", CompactNodeTitle = "Gill", Keywords = "Gill"), Category = LocalBPs)
		static int32 Gill(int32 iA, int32 iB);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Game)
		int32 MusicSkillLevel;
	
	
};
