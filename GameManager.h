#pragma once
#include "MenuManager.h"
#include "GameStateMachine.h"

class GameManager
{
public:
	GameManager();
	GameManager(const GameManager&) = delete;
	GameManager& operator=(const GameManager&) = delete;
	~GameManager();
	void Update(float deltaTime);
	bool IsExitRequired() const;
	void SetCloseGame();
private:
	bool close;
	GameStateMachine* stateMachine;
	IState* mainMenuState;
	IState* inGameState;
};



