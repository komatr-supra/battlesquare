#include "GameManager.h"
#include "MainMenuState.h"
#include "SelectStageState.h"
#include "InGameState.h"

GameManager::GameManager() :
	close{false}
{
	
	
#pragma region STATE MACHINE
	//create state machine
	stateMachine = new GameStateMachine();
	//create states
	inGameState = new InGameState();
	mainMenuState = new MainMenuState([this]() {this->stateMachine->ChangeState(inGameState);}, close);
	
	
	stateMachine->ChangeState(mainMenuState);
	

#pragma endregion

}

GameManager::~GameManager()
{
	delete stateMachine;
}

void GameManager::Update(float deltaTime)
{
	stateMachine->Update(deltaTime);
	
}

//for break the main game loop
bool GameManager::IsExitRequired() const
{
	return close;
}
