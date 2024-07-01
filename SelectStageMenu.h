#pragma once
#include "MenuSceneBase.h"
#include <string>
#include "raylib.h"

class SelectStageMenu :
    public MenuSceneBase
{
public:
    SelectStageMenu(const char* menuLabel, std::function<void(Menus)> changeMenu);
    ~SelectStageMenu();
    // Inherited via MenuSceneBase
    void Draw() override;
private:
    Texture2D map;
};

