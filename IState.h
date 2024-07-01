#pragma once
#include <vector>
#include <functional>
#include "Transition.h"

class IState {
public:
    virtual ~IState() = default;
    virtual void Enter() = 0;
    virtual void Update(float DeltaTime) = 0;
    virtual void Exit() = 0;

    
};

