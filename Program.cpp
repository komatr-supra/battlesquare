#define _CRT_SECURE_NO_WARNINGS
#include "raylib.h"

#define RAYGUI_IMPLEMENTATION
#include "raygui.h"
#include <iostream>
//main game control
#include "GameManager.h"
#include "WindowManager.h"

#include "AudioManager.h"

int main()
{
    InitWindow(WindowManager::GetWidth(), WindowManager::GetHeight(), "GAME");
    SetTargetFPS(60);
    InitAudioDevice();
    Sound testMusic = LoadSound("Audio/music.mp3");
    AudioManager::PlayMusic(testMusic);
    GameManager gameManager;
    while (!WindowShouldClose())
    {
        //game exit
        if (gameManager.IsExitRequired()) break;

        BeginDrawing();
        ClearBackground(GRAY);

        gameManager.Update(GetFrameTime());

        EndDrawing();
    }

    
    return 0;
}