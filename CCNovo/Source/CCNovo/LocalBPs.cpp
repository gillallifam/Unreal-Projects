// Fill out your copyright notice in the Description page of Project Settings.

#include "CCNovo.h"
#include "LocalBPs.h"


FText ULocalBPs::HelloWorld()
{
	return FText::FromString("Hello World");
}

float ULocalBPs::AddFloats(float fA, float fB)
{
	return fA + fB;
}

int ULocalBPs::Gill(int32 iA, int32 iB)
{
	return iA + iB;
}