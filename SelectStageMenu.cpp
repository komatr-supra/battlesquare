#include "SelectStageMenu.h"
#include "raygui.h"

SelectStageMenu::SelectStageMenu(const char* menuLabel, std::function<void(Menus)> changeMenu): MenuSceneBase(menuLabel, changeMenu)

{
	map = LoadTexture("ProjectSprites/stageMaps/map_city.png");
}

SelectStageMenu::~SelectStageMenu()
{
	UnloadTexture(map);
}

void SelectStageMenu::Draw()
{
	//draw stages
	DrawTexture(map, 0, 0, WHITE);
	
	DrawLabel();
	DrawBack();
	if (GuiButton({ 300, 200, 200, 80 }, "Level 1"))
	{
		menuManager_changeMenu(Menus::START);
	}
}
