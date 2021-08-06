// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

//DECLARE_LOG_CATEGORY_EXTERN()
/**
 * 
 */
class VISCREATIONHELPER_API FVCH_Test
{
public:
	FVCH_Test();
	~FVCH_Test();

public:

	FString GlobalTest();

public:
	FString TestConvertorToMercator();
	FString TestPerfomanceForConvertorToMercator();
	FString MultiTestConvertorToMercator();

};

class VISCREATIONHELPER_API FVCHTimeConter
{
public:
	FVCHTimeConter() = delete;
	FVCHTimeConter(const FString& InCounterInfo);
	~FVCHTimeConter();
private:
	FString CounterInfo;
	int64 StartCicles;
};