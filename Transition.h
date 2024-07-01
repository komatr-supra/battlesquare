#pragma once
#include <functional>

class IState;
struct Transition {
    std::function<bool()> condition;  // condition lambda
    IState* nextState;            // transfer to
};