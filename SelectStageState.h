#pragma once
#include "IState.h"
#include "GameStateMachine.h"
#include <functional>
#include "raylib.h"

class SelectStageState : public IState
{
public:
	SelectStageState(std::function<void()> startStage);
	// Inherited via IState
	void Enter() override;
	void Update(float DeltaTime) override;
	void Exit() override;
private:
	Texture2D map;
	std::function<void()> startStage;
};

