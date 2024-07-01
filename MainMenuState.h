#pragma once
#include "IState.h"
#include "MenuManager.h"
#include <functional>

class MainMenuState : public IState
{
public:
	MainMenuState(std::function<void()> changeToStageSelect, bool& isExitRequired);
	// Inherited via IState
	void Enter() override;
	void Update(float deltaTime) override;
	void Exit() override;
private:
	bool& isExitRequired;
	MenuManager* menu;
	std::function<void()> changeToStageSelect;
};

