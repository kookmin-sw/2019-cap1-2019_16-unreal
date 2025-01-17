// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "LostDark.h"
#include "GameFramework/GameStateBase.h"
#include "LDGameState.generated.h"

/**
 * 
 */
UCLASS()
class LOSTDARK_API ALDGameState : public AGameStateBase
{
	GENERATED_BODY()

public:
	// Constructor
	ALDGameState();

public:
	int32 GetTotalGameScore() const;
	void AddGameScore();
	// 게임 클리어 설정
	void SetGameCleared();
	// 게임 클리어 여부
	bool IsGameCleared() const;

private:
	// 전체 게임 스코어
	UPROPERTY(Transient)
		int32 TotalGameScore;

	// 게임 클리어 변수
	UPROPERTY(Transient)
		bool bGameCleared;
};
