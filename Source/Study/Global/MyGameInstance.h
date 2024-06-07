// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "MyGameInstance.generated.h"

/**
 * 
 */
UCLASS()
class STUDY_API UMyGameInstance : public UGameInstance
{
	GENERATED_BODY()

	UMyGameInstance();
	~UMyGameInstance();

	TSubclassOf<AActor> GetGlobalActorClass(FName _Name);
private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	UDataTable* GlobalActorTable;

};
