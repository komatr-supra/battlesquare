#include "GameManager.h"

GameManager::GameManager() :
	close{false}
{
	//instantiate provide exit logic to menu manager
	menuManager = new MenuManager([this]() {this->SetCloseGame();});
}

GameManager::~GameManager()
{
	delete menuManager;
}

void GameManager::Update(float deltaTime)
{
	//draw menu
	menuManager->Draw(deltaTime);
}
//for break the main game loop
bool GameManager::IsExitRequired() const
{
	return close;
}
//method for exit game(provided to others) - this will be used to quit the game.
void GameManager::SetCloseGame()
{
	close = true;
}
