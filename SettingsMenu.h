#pragma once
#include "MenuSceneBase.h"
#include "Menus.h"

class SettingsMenu : public MenuSceneBase
{
public:
	SettingsMenu(const char* labelSettings, std::function<void(Menus)> changeMenu);
	void Draw() override;
private:
	//buttons
	int width{ 400 };
	int height{ 80 };

};

