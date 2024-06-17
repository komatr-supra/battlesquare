#include "SettingsMenu.h"
#include "raygui.h"
#include "AudioManager.h"

SettingsMenu::SettingsMenu(const char* labelSettings, std::function<void(Menus)> changeMenu) : MenuSceneBase(labelSettings, changeMenu)
{	
	
}



void SettingsMenu::Draw()
{
	DrawLabel();

	DrawBack();
	float startingVolume = AudioManager::GetMusicVolume();
	float musicVolume = startingVolume;
	char soundValueString[4];
	float normalizedToPercent = musicVolume * 100;
	sprintf_s(soundValueString, 4, "%.0f", normalizedToPercent);
	GuiSlider({ 100, 100, 500, 20 }, "Sound Volume", soundValueString, &musicVolume, 0, 1);
	if (startingVolume != musicVolume)
	{
		AudioManager::SetMusicVolume(musicVolume);
	}
	
}
