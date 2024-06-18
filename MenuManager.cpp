#include "MenuManager.h"
#include "raygui.h"
#include "raylib.h"
#include "AudioManager.h"

MenuManager::MenuManager(std::function<void()> setClose)
	
{	
	//create menus
	auto menuChange = [this](Menus menu) {this->ChangeMenu(menu);};
	mainMenu = new MainMenu{ "MAIN MENU", menuChange, setClose};
	settings = new SettingsMenu{ "SETTINGS", menuChange};
	currentMenu = mainMenu;
	buttonClick = LoadSound("Audio/click1.ogg");
}

MenuManager::~MenuManager()
{
	delete mainMenu;
	delete settings;
	UnloadSound(buttonClick);
}
//change memu decider
void MenuManager::ChangeMenu(Menus newMenu)
{
	AudioManager::PlaySFX(buttonClick);
	if (currentScene == newMenu || newMenu == Menus::NO_CHANGE) return;
	
	switch (newMenu)
	{
	case Menus::NONE:
		break;
	case Menus::MAINMENU: currentMenu = mainMenu; 
		break;
	case Menus::SETTINGS: currentMenu = settings;
		break;
	case Menus::EXIT: 
		break;
	default:
		break;
	}
	currentMenu->SetBackButton((newMenu == Menus::MAINMENU) ? Menus::NO_CHANGE : currentScene);
	TraceLog(LOG_INFO, "previous scene set to: %d ", currentScene);
	currentScene = newMenu;
}
void MenuManager::Update(float deltaTime)
{

}

void MenuManager::Draw(float deltaTime)
{
	currentMenu->Draw();
	
	
}
