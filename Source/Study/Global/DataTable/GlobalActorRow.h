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
	// EditAnywhere �����Ϳ��� ����ϰڴ�. 
	// BlueprintReadWrite �������Ʈ���� ���� ����
	// Category = "Resources"
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Resources")
	TSubclassOf<AActor> Actor;
};
