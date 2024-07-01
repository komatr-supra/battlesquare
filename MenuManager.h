#pragma once
#include "MainMenu.h"
#include "SettingsMenu.h"
#include <functional>
#include "SelectStageMenu.h"

class MenuManager
{	
public:	
	MenuManager(std::function<void()> closeMethod, std::function<void()> selectStage);
	~MenuManager();
	void ChangeMenu(Menus newMenu);
	void Update(float deltaTime);
	void Draw(float deltaTime);
	
private:
	MenuSceneBase* currentMenu{nullptr};
	MainMenu *mainMenu;
	SettingsMenu *settings;
	SelectStageMenu *stages;
	Menus currentScene{Menus::MAINMENU};
	Sound buttonClick;
	std::function<void()> selectStage;
};


