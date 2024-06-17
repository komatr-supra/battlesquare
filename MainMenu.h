#pragma once
#include "MenuSceneBase.h"
#include <functional>

class MainMenu : public MenuSceneBase
{
public:
	MainMenu(const char* menuLabel, std::function<void(Menus)> changeMenu, std::function<void()> closeGame);
	void Draw() override;
private:
	//back
	Menus previousMenu{Menus::NO_CHANGE};
	//buttons
	int width{ 400 };
	int height{ 80 };
	std::function<void()> gameManager_closeGame;
};

