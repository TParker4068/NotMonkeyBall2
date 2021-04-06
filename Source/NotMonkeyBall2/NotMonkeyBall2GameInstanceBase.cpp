// Fill out your copyright notice in the Description page of Project Settings.

#include "Engine/ObjectLibrary.h"
#include "Kismet/GameplayStatics.h"
#include "NotMonkeyBall2GameInstanceBase.h"

void UNotMonkeyBall2GameInstanceBase::Init()
{
	Super::Init();

    LevelNames = TArray<FString>();
    GetAllMapNames(LevelNames);
    UE_LOG(LogTemp, Warning, TEXT("Found maps: %d"), LevelNames.Num());
}

void UNotMonkeyBall2GameInstanceBase::LoadNextLevel()
{
    int NextLevel = CurrentLevel + 1;
    FName LevelToLoad = FName(LevelNames[NextLevel]);
    UGameplayStatics::OpenLevel(GetWorld(), LevelToLoad);
    CurrentLevel++;
}

void UNotMonkeyBall2GameInstanceBase::ReloadLevel()
{
    FName LevelToLoad = FName(LevelNames[CurrentLevel]);
    UE_LOG(LogTemp, Warning, TEXT("%s"), *LevelNames[CurrentLevel]);
    UGameplayStatics::OpenLevel(GetWorld(), LevelToLoad);
}

void UNotMonkeyBall2GameInstanceBase::GetAllMapNames(TArray<FString> &Names) {
    auto ObjectLibrary = UObjectLibrary::CreateLibrary(UWorld::StaticClass(), false, true);
    ObjectLibrary->LoadAssetDataFromPath(TEXT("/Game/Maps"));
    TArray<FAssetData> AssetDatas;
    ObjectLibrary->GetAssetDataList(AssetDatas);
    UE_LOG(LogTemp, Warning, TEXT("Found maps: %d"), AssetDatas.Num());

    for (int32 i = 0; i < AssetDatas.Num(); ++i)
    {
        FAssetData& AssetData = AssetDatas[i];

        auto name = AssetData.AssetName.ToString();
        Names.Add(name);
    }
    UE_LOG(LogTemp, Warning, TEXT("Found maps: %d"), Names.Num());
}
