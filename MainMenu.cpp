#include "MainMenu.h"
#include "raygui.h"
#include "WindowManager.h"

MainMenu::MainMenu(const char* menuLabel, std::function<void(Menus)> changeMenu, std::function<void()> closeGame) : MenuSceneBase(menuLabel, changeMenu),
	gameManage_closeGame{closeGame}
{
}

void MainMenu::Draw()
{
	DrawLabel();	
	
	//start button
	if (GuiButton({ float(WindowManager::GetWidthHalf()) - 200, float(WindowManager::GetHeight() / 5), 400, 80 }, "START")) menuManager_changeMenu(Menus::NO_CHANGE);

	//setting button
	if (GuiButton({ float(WindowManager::GetWidth() / 2) - 200, float(WindowManager::GetHeight() / 5 * 2), 400, 80 }, "SETTINGS")) menuManager_changeMenu(Menus::SETTINGS);

	//exit button
	if (GuiButton({ float(WindowManager::GetWidth() / 2) - 200, float(WindowManager::GetHeight() / 5 * 3), 400, 80 }, "EXIT")) gameManage_closeGame();

}

