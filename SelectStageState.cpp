#include "SelectStageState.h"
#include "AssetManager.h"
#include "raygui.h"

SelectStageState::SelectStageState(std::function<void()> startStage) :
	startStage{startStage}
{

}

void SelectStageState::Enter()
{
	map = LoadTexture("ProjectSprites/stageMaps/map_city.png");
}

void SelectStageState::Update(float DeltaTime)
{
	DrawTexture(map, 0, 0, WHITE);
	if (GuiButton({ 30, 30, 100, 50 }, "Map Select"))
	{
		startStage();
	}
}

void SelectStageState::Exit()
{
	UnloadTexture(map);
}
