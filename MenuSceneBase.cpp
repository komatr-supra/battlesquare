#include "MenuSceneBase.h"
#include "raygui.h"
#include "WindowManager.h"

MenuSceneBase::MenuSceneBase(const char* sceneLabel, std::function<void(Menus)> changeMenu) :
	label{ sceneLabel },
	textOffsetX{ -(MeasureText(label, fontSize) / 2) },
	menuManager_changeMenu{changeMenu}
{
	GuiSetStyle(FONT_DEFAULT, TEXT_SIZE, fontSize);
}

void MenuSceneBase::SetBackButton(Menus previousMenu)
{
	MenuSceneBase::previousMenu = previousMenu;
}

void MenuSceneBase::DrawLabel()
{
	DrawText(label, (WindowManager::GetWidth() / 2) + textOffsetX, 20, fontSize, BLACK);
}

void MenuSceneBase::DrawBack() const
{
	if (GuiButton({ 50, 50, 100, 50 }, "BACK"))
	{
		menuManager_changeMenu(previousMenu);
	}
	
}




