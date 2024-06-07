// Fill out your copyright notice in the Description page of Project Settings.


#include "Global/MyGameInstance.h"
#include "Global/DataTable/GlobalActorRow.h"

UMyGameInstance::UMyGameInstance()
{

}

UMyGameInstance::~UMyGameInstance()
{

}

TSubclassOf<AActor> UMyGameInstance::GetGlobalActorClass(FName _Name)
{
	if (nullptr == GlobalActorTable)
	{
		UE_LOG(LogTemp, Fatal, TEXT("%S(%u) if (nullptr == GlobalActorTable)"), __FUNCTION__, __LINE__);
	}

	FGlobalActorRow* Data = GlobalActorTable->FindRow<FGlobalActorRow>(_Name, nullptr);

	if (nullptr == Data)
	{
		UE_LOG(LogTemp, Error, TEXT("%S(%u)> %s Name Data Is Nullptr"), __FUNCTION__, __LINE__, *_Name.ToString());
	}

	return Data->Actor;
}