#include "GameStateMachine.h"

GameStateMachine::GameStateMachine():
    currentState{ nullptr }
{
}

void GameStateMachine::Update(float deltaTime)
{
    if (currentState)
    {
        currentState->Update(deltaTime);
    }
}

void GameStateMachine::ChangeState(IState* newState)
{
    if (currentState)
    {
        currentState->Exit();
    }
    currentState = newState;
    currentState->Enter();
}


