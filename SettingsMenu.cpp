#include "SettingsMenu.h"
#include "raygui.h"
SettingsMenu::SettingsMenu(const char* labelSettings, std::function<void(Menus)> changeMenu) : MenuSceneBase(labelSettings, changeMenu)
{	
	
}



void SettingsMenu::Draw()
{
	DrawLabel();

	DrawBack();
	
}
