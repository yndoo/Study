// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataTable.h"
#include "GlobalActorRow.generated.h"

/**
 * 
 */
USTRUCT(BlueprintType)
struct FGlobalActorRow : public FTableRowBase
{
	GENERATED_BODY()

public:
	FGlobalActorRow();
	~FGlobalActorRow();

public:
	// EditAnywhere 에디터에서 사용하겠다. 
	// BlueprintReadWrite 블루프린트에서 편집 가능
	// Category = "Resources"
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Resources")
	TSubclassOf<AActor> Actor;
};
