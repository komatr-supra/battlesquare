#pragma once
#include "IState.h"
#include "raylib.h"
#include "AssetManager.h"

class InGameState :
    public IState
{
public:
    InGameState();
    // Inherited via IState
    void Enter() override;
    void Update(float DeltaTime) override;
    void Exit() override;
private:
    AssetManager* assets;
};

