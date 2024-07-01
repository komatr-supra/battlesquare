#pragma once
#include "IState.h"

class GameStateMachine
{
public:
    GameStateMachine();    
    void ChangeState(IState* newState);
    void Update(float deltaTime);
private:  
    IState* currentState;
};

