#define _CRT_SECURE_NO_WARNINGS
#include "raylib.h"
#include "raymath.h"
#define RAYGUI_IMPLEMENTATION
#include "raygui.h"
#include <iostream>
//main game control
#include "GameManager.h"
#include "WindowManager.h"

#include "AudioManager.h"
#include "AssetManager.h"
#include "Sprite.h"

int main()
{
    InitWindow(WindowManager::GetWidth(), WindowManager::GetHeight(), "GAME");
    SetTargetFPS(60);
    InitAudioDevice();
    Camera2D camera;
    camera.offset = {(float)WindowManager::GetWidthHalf(), (float)WindowManager::GetHeightHalf()};
    camera.target = { 100, 100 };
    camera.rotation = 0;
    camera.zoom = 3;
    Sound testMusic = LoadSound("Audio/music.mp3");
    AudioManager::PlayMusic(testMusic);    
    GameManager gameManager;
    while (!WindowShouldClose())
    {
        //game exit
        if (gameManager.IsExitRequired()) break;
        BeginDrawing();
        ClearBackground(DARKGREEN);

        gameManager.Update(GetFrameTime());
        BeginMode2D(camera);
        //sprite.Draw({ 100, 100 });
        EndMode2D();
        EndDrawing();
    }
    UnloadSound(testMusic);
    
    return 0;
}