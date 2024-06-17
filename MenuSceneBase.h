#pragma once
#include "raylib.h"
#include "Menus.h"
#include <functional>

class MenuSceneBase
{
public:
	MenuSceneBase(const char* sceneLabel, std::function<void(Menus)> changeMenu);
	virtual void Draw() = 0;
	void SetBackButton(Menus previousMenu);
protected:
	void DrawLabel();
	void DrawBack() const;
	const char* label;
	const int fontSize{30};
	const int textOffsetX;
	Menus previousMenu{Menus::NO_CHANGE};
	std::function<void(Menus)> menuManager_changeMenu;
};
