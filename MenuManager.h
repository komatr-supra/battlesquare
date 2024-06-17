#pragma once
#include "MainMenu.h"
#include "SettingsMenu.h"
#include <functional>


class MenuManager
{	
public:	
	MenuManager(std::function<void()> closeMethod);
	~MenuManager();
	void ChangeMenu(Menus newMenu);
	void Update(float deltaTime);
	void Draw(float deltaTime);
private:
	MenuSceneBase* currentMenu{nullptr};
	MainMenu *mainMenu;
	SettingsMenu *settings;
	Menus currentScene{Menus::MAINMENU};
};


