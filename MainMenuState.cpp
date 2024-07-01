#include "MainMenuState.h"
MainMenuState::MainMenuState(std::function<void()> changeToStageSelect, bool& isExitRequired):
	isExitRequired{isExitRequired},
	menu{nullptr},
	changeToStageSelect{changeToStageSelect}
{
	
}
void MainMenuState::Enter()
{
	menu = new MenuManager([this]() {this->isExitRequired = true;}, changeToStageSelect);
}

void MainMenuState::Update(float deltaTime)
{
	menu->Draw(deltaTime);
}

void MainMenuState::Exit()
{
	delete menu;
}
