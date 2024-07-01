#include "MainMenu.h"
#include "raygui.h"
#include "WindowManager.h"
#include "GuiButtonEx.h"

MainMenu::MainMenu(const char* menuLabel, std::function<void(Menus)> changeMenu, std::function<void()> closeGame) : MenuSceneBase(menuLabel, changeMenu),
	gameManager_closeGame{closeGame}
{
}

void MainMenu::Draw()
{
	DrawLabel();

	//start button
	if (GuiButtonEx({ float(WindowManager::GetWidthHalf()), float(WindowManager::GetHeight() / 5), 400, 80 }, "START", ButtonAli::CENTER))
	{
		menuManager_changeMenu(Menus::SELECT_STAGE);
	}


	//setting button
	if (GuiButtonEx({ float(WindowManager::GetWidth() / 2), float(WindowManager::GetHeight() / 5 * 2), 400, 80 }, "SETTINGS", ButtonAli::CENTER))
	{
		menuManager_changeMenu(Menus::SETTINGS);
	}
		

	//exit button
	if (GuiButtonEx({ float(WindowManager::GetWidth() / 2), float(WindowManager::GetHeight() / 5 * 3),400, 80 }, "EXIT", ButtonAli::CENTER))
	{
		gameManager_closeGame();
	}
		

}

